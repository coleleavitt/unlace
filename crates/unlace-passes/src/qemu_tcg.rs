//! QEMU TCG plugin trace ingestion (t423).
//!
//! Parses coverage and taint data produced by QEMU's TCG plugin interface.
//! The plugin logs executed basic-block addresses as a flat binary stream
//! of little-endian u64 values (one per BB entry).

use thiserror::Error;

#[derive(Debug, Error, PartialEq, Eq)]
pub enum QemuTcgError {
    #[error("trace data length {len} is not a multiple of 8")]
    BadAlignment { len: usize },
    #[error("empty trace data")]
    Empty,
}

/// A parsed QEMU TCG coverage trace.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TcgCoverageTrace {
    /// Unique basic-block addresses hit, sorted.
    pub hit_bbs: Vec<u64>,
    /// Total execution count (including re-visits).
    pub total_executions: u64,
}

/// Parse a raw QEMU TCG coverage trace (flat LE u64 stream of BB addresses).
pub fn parse_tcg_coverage(data: &[u8]) -> Result<TcgCoverageTrace, QemuTcgError> {
    if data.is_empty() {
        return Err(QemuTcgError::Empty);
    }
    if !data.len().is_multiple_of(8) {
        return Err(QemuTcgError::BadAlignment { len: data.len() });
    }

    let total_executions = (data.len() / 8) as u64;
    let mut addrs: Vec<u64> = data
        .chunks_exact(8)
        .map(|chunk| u64::from_le_bytes(chunk.try_into().unwrap()))
        .collect();
    addrs.sort_unstable();
    addrs.dedup();

    Ok(TcgCoverageTrace {
        hit_bbs: addrs,
        total_executions,
    })
}

/// Compute coverage percentage given hit BBs and total known BBs.
pub fn coverage_ratio(hit: &[u64], total_bbs: &[u64]) -> f64 {
    if total_bbs.is_empty() {
        return 0.0;
    }
    let hit_count = total_bbs
        .iter()
        .filter(|bb| hit.binary_search(bb).is_ok())
        .count();
    hit_count as f64 / total_bbs.len() as f64
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parse_simple_trace() {
        let mut data = Vec::new();
        data.extend_from_slice(&0x1000u64.to_le_bytes());
        data.extend_from_slice(&0x2000u64.to_le_bytes());
        data.extend_from_slice(&0x1000u64.to_le_bytes()); // duplicate
        let trace = parse_tcg_coverage(&data).unwrap();
        assert_eq!(trace.hit_bbs, vec![0x1000, 0x2000]);
        assert_eq!(trace.total_executions, 3);
    }

    #[test]
    fn empty_trace_error() {
        assert_eq!(parse_tcg_coverage(&[]), Err(QemuTcgError::Empty));
    }

    #[test]
    fn misaligned_error() {
        assert_eq!(
            parse_tcg_coverage(&[1, 2, 3]),
            Err(QemuTcgError::BadAlignment { len: 3 })
        );
    }

    #[test]
    fn coverage_ratio_calc() {
        let hit = vec![0x1000, 0x2000, 0x3000];
        let total = vec![0x1000, 0x2000, 0x3000, 0x4000];
        assert!((coverage_ratio(&hit, &total) - 0.75).abs() < 1e-10);
    }

    #[test]
    fn coverage_ratio_empty() {
        assert_eq!(coverage_ratio(&[], &[]), 0.0);
    }
}
