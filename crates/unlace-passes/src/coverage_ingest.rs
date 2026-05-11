//! Fuzzer coverage map ingestion (T431).
//!
//! Parses two on-disk coverage artifact formats produced by common fuzzers:
//!
//! 1. **AFL++ coverage bitmap** — a flat `u8[MAP_SIZE]` buffer (default
//!    `MAP_SIZE = 65536`) where each byte is the saturating hit-counter for
//!    one instrumented edge. Empty input or any non-`MAP_SIZE` length is
//!    rejected; this matches AFL++'s own `MAP_SIZE_POW2 = 16` default.
//!    We widen counters to `u32` so callers can accumulate multiple corpus
//!    runs without overflowing past `u8::MAX`.
//!
//! 2. **libFuzzer profraw / LLVM profdata raw header** — only the leading
//!    fixed header (magic, version, num_counters) is decoded; the full
//!    profile body is not materialised because higher-level passes only
//!    need the counter cardinality to size their bookkeeping. The magic
//!    must be the little-endian raw-profile magic
//!    `0xff6c70726f667281` (`"\xff" + "lprofr\x81"`); the legacy
//!    big-endian variant `0x81726f70726f6cff` is rejected — we only
//!    consume host-endian profiles.

use thiserror::Error;

/// Default AFL++ coverage map size. AFL++ ships with
/// `MAP_SIZE_POW2 = 16`, so the on-disk bitmap is exactly 64 KiB.
pub const AFL_MAP_SIZE: usize = 1 << 16;

/// Little-endian LLVM raw-profile magic ("\xfflprofr\x81").
///
/// LLVM emits this as `INSTR_PROF_RAW_MAGIC_64` in
/// `compiler-rt/include/profile/InstrProfData.inc`.
pub const LLVM_PROFRAW_MAGIC_LE: u64 = 0xff6c70726f667281;

/// Big-endian counterpart. Present so we can give a *specific* error
/// instead of a generic "bad magic" when someone hands us a
/// cross-compiled profile.
pub const LLVM_PROFRAW_MAGIC_BE: u64 = 0x81726f70726f6cff;

/// Errors returned by the coverage parsers. All variants are recoverable
/// at the caller boundary — none of them imply a corrupted process state.
#[derive(Debug, Error, PartialEq, Eq)]
pub enum CoverageError {
    /// AFL++ bitmap was not exactly `AFL_MAP_SIZE` bytes.
    #[error("AFL coverage map has wrong size: expected {expected} bytes, got {actual}")]
    AflBadSize { expected: usize, actual: usize },

    /// profraw header was shorter than the three `u64`s we decode.
    #[error("profraw input too short: need at least {needed} bytes, got {actual}")]
    ProfRawTruncated { needed: usize, actual: usize },

    /// profraw magic did not match the host-endian LLVM value.
    #[error("profraw magic mismatch: got {got:#018x}, expected {expected:#018x}")]
    ProfRawBadMagic { got: u64, expected: u64 },

    /// profraw was a valid LLVM file but in big-endian (foreign-host) form.
    #[error("profraw is big-endian; only little-endian profiles are supported")]
    ProfRawWrongEndian,
}

/// Parsed AFL++ edge-coverage bitmap.
///
/// `edge_hits[i]` is the hit-count for edge index `i`. `total_edges` is
/// the number of edges with at least one hit, useful for quickly
/// estimating instrumentation reach without re-scanning the vector.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CoverageMap {
    /// Per-edge hit counters, widened from `u8` to `u32` so callers can
    /// merge multiple inputs without saturation surprises.
    pub edge_hits: Vec<u32>,
    /// Count of edges with `edge_hits[i] > 0`.
    pub total_edges: usize,
}

/// Parsed leading header of an LLVM raw profile (`.profraw`).
///
/// Only the first three `u64`s are decoded; the body (counter values,
/// names table, value-profile records) is left for downstream tools.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ProfRaw {
    /// Magic identifier; always `LLVM_PROFRAW_MAGIC_LE` once parsed.
    pub magic: u64,
    /// Raw-profile format version reported by the producer.
    pub version: u64,
    /// Number of instrumentation counters declared in the header.
    pub num_counters: u64,
}

/// Parse a buffer that should be exactly an AFL++ edge-coverage bitmap.
///
/// Rejects any input that isn't precisely `AFL_MAP_SIZE` bytes — partial
/// or oversized maps are almost always file-corruption / wrong-tool bugs
/// rather than something we should try to salvage.
pub fn parse_afl_coverage(data: &[u8]) -> Result<CoverageMap, CoverageError> {
    if data.len() != AFL_MAP_SIZE {
        return Err(CoverageError::AflBadSize {
            expected: AFL_MAP_SIZE,
            actual: data.len(),
        });
    }

    let mut edge_hits = Vec::with_capacity(AFL_MAP_SIZE);
    let mut total_edges = 0usize;
    for &b in data {
        let hits = u32::from(b);
        if hits > 0 {
            total_edges += 1;
        }
        edge_hits.push(hits);
    }

    Ok(CoverageMap {
        edge_hits,
        total_edges,
    })
}

/// Parse the leading header of an LLVM raw profile.
///
/// Reads three little-endian `u64`s in order: magic, version, num_counters.
/// Any trailing bytes are ignored. Both truncation and bad magic are
/// distinct error variants so callers can produce useful diagnostics.
pub fn parse_profraw(data: &[u8]) -> Result<ProfRaw, CoverageError> {
    const HEADER_BYTES: usize = 3 * core::mem::size_of::<u64>();

    if data.len() < HEADER_BYTES {
        return Err(CoverageError::ProfRawTruncated {
            needed: HEADER_BYTES,
            actual: data.len(),
        });
    }

    // Safe: bounds-checked above.
    let magic = u64::from_le_bytes(data[0..8].try_into().expect("8 bytes"));
    let version = u64::from_le_bytes(data[8..16].try_into().expect("8 bytes"));
    let num_counters = u64::from_le_bytes(data[16..24].try_into().expect("8 bytes"));

    // Discriminate "wrong endian" from "garbage" — produces a much
    // friendlier error message when the user has fed us a profile from a
    // big-endian target.
    if magic == LLVM_PROFRAW_MAGIC_BE {
        return Err(CoverageError::ProfRawWrongEndian);
    }
    if magic != LLVM_PROFRAW_MAGIC_LE {
        return Err(CoverageError::ProfRawBadMagic {
            got: magic,
            expected: LLVM_PROFRAW_MAGIC_LE,
        });
    }

    Ok(ProfRaw {
        magic,
        version,
        num_counters,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Empty AFL bitmap must round-trip to all-zero hits with zero edges,
    /// since AFL++ ships zero-initialised maps for inputs that triggered
    /// no instrumentation.
    #[test]
    fn afl_empty_bitmap_has_zero_total_edges() {
        let data = vec![0u8; AFL_MAP_SIZE];
        let map = parse_afl_coverage(&data).expect("zero-bitmap is valid");
        assert_eq!(map.edge_hits.len(), AFL_MAP_SIZE);
        assert_eq!(map.total_edges, 0);
        assert!(map.edge_hits.iter().all(|&h| h == 0));
    }

    /// Sparse synthetic bitmap: three distinct edges hit with three
    /// different counters. Validates both the widening (u8 → u32) and
    /// the `total_edges` tally.
    #[test]
    fn afl_sparse_bitmap_counts_nonzero_edges() {
        let mut data = vec![0u8; AFL_MAP_SIZE];
        data[42] = 1;
        data[1000] = 7;
        data[AFL_MAP_SIZE - 1] = 255;

        let map = parse_afl_coverage(&data).expect("sparse bitmap is valid");
        assert_eq!(map.edge_hits[42], 1);
        assert_eq!(map.edge_hits[1000], 7);
        assert_eq!(map.edge_hits[AFL_MAP_SIZE - 1], 255);
        assert_eq!(map.total_edges, 3);
    }

    /// Wrong-sized bitmap must be rejected explicitly — silent truncation
    /// would let mis-configured pipelines drift undetected.
    #[test]
    fn afl_wrong_size_bitmap_is_rejected() {
        let data = vec![0u8; 1024];
        let err = parse_afl_coverage(&data).expect_err("undersized must fail");
        assert_eq!(
            err,
            CoverageError::AflBadSize {
                expected: AFL_MAP_SIZE,
                actual: 1024,
            }
        );
    }

    /// Synthesised profraw header: emit magic + version + num_counters
    /// as three little-endian u64s and check we recover the same values.
    #[test]
    fn profraw_header_round_trips() {
        let mut buf = Vec::with_capacity(24);
        buf.extend_from_slice(&LLVM_PROFRAW_MAGIC_LE.to_le_bytes());
        buf.extend_from_slice(&9u64.to_le_bytes()); // version
        buf.extend_from_slice(&1337u64.to_le_bytes()); // num_counters
        // Trailing junk to confirm we don't over-read.
        buf.extend_from_slice(&[0xAA; 32]);

        let header = parse_profraw(&buf).expect("valid profraw header");
        assert_eq!(header.magic, LLVM_PROFRAW_MAGIC_LE);
        assert_eq!(header.version, 9);
        assert_eq!(header.num_counters, 1337);
    }

    /// Truncated input must fail loud with `ProfRawTruncated`, not panic
    /// on slice indexing.
    #[test]
    fn profraw_truncated_input_is_rejected() {
        let buf = vec![0u8; 16]; // one u64 short
        let err = parse_profraw(&buf).expect_err("truncated must fail");
        assert_eq!(
            err,
            CoverageError::ProfRawTruncated {
                needed: 24,
                actual: 16,
            }
        );
    }

    /// Big-endian profraw must be rejected with the specific
    /// `ProfRawWrongEndian` variant so users get actionable diagnostics.
    #[test]
    fn profraw_big_endian_magic_is_diagnosed() {
        let mut buf = Vec::with_capacity(24);
        buf.extend_from_slice(&LLVM_PROFRAW_MAGIC_BE.to_le_bytes());
        buf.extend_from_slice(&9u64.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());

        let err = parse_profraw(&buf).expect_err("big-endian must fail");
        assert_eq!(err, CoverageError::ProfRawWrongEndian);
    }
}
