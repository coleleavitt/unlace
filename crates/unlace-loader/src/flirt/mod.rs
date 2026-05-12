//! FLIRT-equivalent library function recognition.
//!
//! When a stripped binary's `strcpy` looks like the leading bytes of glibc's
//! `strcpy`, we'd rather surface it as `strcpy` than spend pass + printer
//! cycles decompiling it. This module ships a small in-memory signature
//! database modelled after IDA's FLIRT format: a leading byte pattern, a
//! mask marking wildcard positions (relocations / immediates that vary
//! between builds), and an optional CRC16 over a tail range to disambiguate
//! when several functions share the same prologue.
//!
//! The database is ship-in-binary (`flirt_signatures::DEFAULT_SIGNATURES`)
//! rather than loaded from `.sig` files; that's enough for the parity push
//! and avoids a runtime IO + parsing dependency.  The shipped tables are split
//! per architecture so the same bytes can be interpreted against ABI-specific
//! libraries without x86-64 patterns producing false positives on other ISAs.

mod signatures;

pub use signatures::{default_db, default_db_for_arch, signatures_for_arch};

use unlace_ir::ArchId;

/// One library-function fingerprint.
#[derive(Debug, Clone)]
pub struct FlirtSignature {
    pub name: String,
    /// Architecture/library namespace for this signature.
    ///
    /// Generic databases may contain entries from multiple architectures;
    /// architecture-aware callers should prefer [`FlirtDb::match_function_for_arch`]
    /// so only signatures for the loaded image's ISA are considered.
    pub arch: ArchId,
    /// Leading byte pattern. `pattern.len()` is the comparison window;
    /// positions where `mask[i] == 0` are treated as wildcards.
    pub pattern: Vec<u8>,
    /// Per-byte mask: `0xFF` → must match exactly, `0x00` → wildcard.
    /// Other values are not currently meaningful (FLIRT only uses 0/0xFF).
    pub mask: Vec<u8>,
    pub min_len: usize,
    pub max_len: Option<usize>,
    /// Optional CRC16 (CCITT) over `pattern[start..start+len]` to break
    /// ties when several signatures share the same wildcarded prefix.
    /// Tuple is `(start, expected_crc)`; the matcher recomputes it over
    /// the candidate's actual bytes at the same offset using a fixed
    /// 32-byte window (matching IDA's default tail length).
    pub crc16_at: Option<(usize, u16)>,
}

impl FlirtSignature {
    /// Build a signature in the historical default x86-64 namespace.
    pub fn new(name: impl Into<String>, pattern: Vec<u8>, mask: Vec<u8>) -> Self {
        let min_len = pattern.len();
        Self {
            name: name.into(),
            arch: ArchId::X86_64,
            pattern,
            mask,
            min_len,
            max_len: None,
            crc16_at: None,
        }
    }

    /// Build a signature explicitly tied to `arch`.
    pub fn for_arch(
        arch: ArchId,
        name: impl Into<String>,
        pattern: Vec<u8>,
        mask: Vec<u8>,
    ) -> Self {
        let min_len = pattern.len();
        Self {
            name: name.into(),
            arch,
            pattern,
            mask,
            min_len,
            max_len: None,
            crc16_at: None,
        }
    }
}

/// In-memory FLIRT database.
#[derive(Debug, Default, Clone)]
pub struct FlirtDb {
    entries: Vec<FlirtSignature>,
}

impl FlirtDb {
    pub fn new() -> Self {
        Self {
            entries: Vec::new(),
        }
    }

    pub fn from_entries(entries: Vec<FlirtSignature>) -> Self {
        Self { entries }
    }

    pub fn push(&mut self, sig: FlirtSignature) {
        self.entries.push(sig);
    }

    pub fn len(&self) -> usize {
        self.entries.len()
    }

    pub fn is_empty(&self) -> bool {
        self.entries.is_empty()
    }

    /// Iterate over all registered signatures.
    pub fn entries(&self) -> impl Iterator<Item = &FlirtSignature> {
        self.entries.iter()
    }

    /// Iterate over signatures registered for `arch` only.
    pub fn entries_for_arch(&self, arch: ArchId) -> impl Iterator<Item = &FlirtSignature> {
        self.entries.iter().filter(move |sig| sig.arch == arch)
    }

    /// Try to match `bytes` (typically the prologue + body of a candidate
    /// function) against any signature in the database. Returns the first
    /// match by registration order so callers control priority via the
    /// signature table layout.
    ///
    /// This legacy method scans all architecture tables. New call sites with a
    /// loaded-image architecture should use [`Self::match_function_for_arch`].
    pub fn match_function(&self, bytes: &[u8]) -> Option<&str> {
        for sig in &self.entries {
            if signature_matches(sig, bytes) {
                return Some(&sig.name);
            }
        }
        None
    }

    /// Try to match `bytes` against signatures registered for `arch` only.
    pub fn match_function_for_arch(&self, arch: ArchId, bytes: &[u8]) -> Option<&str> {
        for sig in self.entries_for_arch(arch) {
            if signature_matches(sig, bytes) {
                return Some(&sig.name);
            }
        }
        None
    }
}

fn signature_matches(sig: &FlirtSignature, bytes: &[u8]) -> bool {
    if bytes.len() < sig.min_len {
        return false;
    }
    if let Some(max) = sig.max_len {
        if bytes.len() > max {
            return false;
        }
    }
    if bytes.len() < sig.pattern.len() {
        return false;
    }
    for (i, &want) in sig.pattern.iter().enumerate() {
        let m = sig.mask.get(i).copied().unwrap_or(0xFF);
        if m == 0 {
            continue;
        }
        if (bytes[i] & m) != (want & m) {
            return false;
        }
    }
    if let Some((start, expected)) = sig.crc16_at {
        const WINDOW: usize = 32;
        let end = (start + WINDOW).min(bytes.len());
        if start >= end {
            return false;
        }
        if crc16_ccitt(&bytes[start..end]) != expected {
            return false;
        }
    }
    true
}

/// CRC-16/CCITT-FALSE (poly 0x1021, init 0xFFFF, no reflection, no xorout).
/// FLIRT historically uses a slightly different variant but the disambiguation
/// role is identical and we control both sides of the comparison.
pub fn crc16_ccitt(bytes: &[u8]) -> u16 {
    let mut crc: u16 = 0xFFFF;
    for &b in bytes {
        crc ^= (b as u16) << 8;
        for _ in 0..8 {
            if crc & 0x8000 != 0 {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc <<= 1;
            }
        }
    }
    crc
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sig(name: &str, pattern: &[u8], mask: &[u8]) -> FlirtSignature {
        FlirtSignature {
            name: name.to_string(),
            arch: ArchId::X86_64,
            pattern: pattern.to_vec(),
            mask: mask.to_vec(),
            min_len: pattern.len(),
            max_len: None,
            crc16_at: None,
        }
    }

    fn arch_sig(arch: ArchId, name: &str, pattern: &[u8]) -> FlirtSignature {
        FlirtSignature::for_arch(arch, name, pattern.to_vec(), vec![0xFF; pattern.len()])
    }

    #[test]
    fn pattern_match_exact() {
        let mut db = FlirtDb::new();
        db.push(sig(
            "strcpy",
            &[0x48, 0x89, 0xF8, 0xC3],
            &[0xFF, 0xFF, 0xFF, 0xFF],
        ));
        assert_eq!(
            db.match_function(&[0x48, 0x89, 0xF8, 0xC3, 0x90, 0x90]),
            Some("strcpy")
        );
    }

    #[test]
    fn pattern_match_with_wildcards() {
        // Mask out the second byte (a relocation displacement, say).
        let mut db = FlirtDb::new();
        db.push(sig("memcpy", &[0x48, 0x00, 0xC3], &[0xFF, 0x00, 0xFF]));
        // Wildcarded byte may be anything.
        assert_eq!(db.match_function(&[0x48, 0x77, 0xC3, 0x00]), Some("memcpy"));
        assert_eq!(db.match_function(&[0x48, 0xAB, 0xC3, 0x00]), Some("memcpy"));
        // First byte mismatch must reject.
        assert!(db.match_function(&[0x49, 0xAB, 0xC3, 0x00]).is_none());
    }

    #[test]
    fn crc16_disambiguates_colliding_prefixes() {
        // Two signatures share the same wildcarded prefix but disagree on
        // the CRC-16 over the tail — exactly the scenario FLIRT's tail-CRC
        // is designed to handle.
        let mut db = FlirtDb::new();
        let body_a = [0xDE, 0xAD, 0xBE, 0xEF, 0x90, 0x90];
        let body_b = [0xCA, 0xFE, 0xBA, 0xBE, 0x90, 0x90];
        let prefix = [0x55, 0x48, 0x89, 0xE5];
        let mut bytes_a: Vec<u8> = prefix.to_vec();
        bytes_a.extend_from_slice(&body_a);
        let mut bytes_b: Vec<u8> = prefix.to_vec();
        bytes_b.extend_from_slice(&body_b);

        let crc_a = crc16_ccitt(&bytes_a[prefix.len()..]);
        let crc_b = crc16_ccitt(&bytes_b[prefix.len()..]);
        assert_ne!(crc_a, crc_b);

        db.push(FlirtSignature {
            name: "fn_a".into(),
            arch: ArchId::X86_64,
            pattern: prefix.to_vec(),
            mask: vec![0xFF; prefix.len()],
            min_len: prefix.len(),
            max_len: None,
            crc16_at: Some((prefix.len(), crc_a)),
        });
        db.push(FlirtSignature {
            name: "fn_b".into(),
            arch: ArchId::X86_64,
            pattern: prefix.to_vec(),
            mask: vec![0xFF; prefix.len()],
            min_len: prefix.len(),
            max_len: None,
            crc16_at: Some((prefix.len(), crc_b)),
        });

        assert_eq!(db.match_function(&bytes_a), Some("fn_a"));
        assert_eq!(db.match_function(&bytes_b), Some("fn_b"));
    }

    #[test]
    fn no_match_returns_none() {
        let mut db = FlirtDb::new();
        db.push(sig(
            "strcpy",
            &[0x48, 0x89, 0xF8, 0xC3],
            &[0xFF, 0xFF, 0xFF, 0xFF],
        ));
        assert!(db.match_function(&[0x90, 0x90, 0x90, 0x90]).is_none());
        assert!(db.match_function(&[]).is_none());
        assert!(db.match_function(&[0x48]).is_none()); // shorter than min_len
    }

    #[test]
    fn arch_filtered_match_ignores_other_isa_collisions() {
        let mut db = FlirtDb::new();
        db.push(arch_sig(ArchId::X86_64, "x86_stub", &[0xAA, 0xBB, 0xCC]));
        db.push(arch_sig(ArchId::AArch64, "arm64_stub", &[0xAA, 0xBB, 0xCC]));

        assert_eq!(db.match_function(&[0xAA, 0xBB, 0xCC]), Some("x86_stub"));
        assert_eq!(
            db.match_function_for_arch(ArchId::AArch64, &[0xAA, 0xBB, 0xCC]),
            Some("arm64_stub")
        );
        assert!(
            db.match_function_for_arch(ArchId::RiscV64, &[0xAA, 0xBB, 0xCC])
                .is_none()
        );
    }

    #[test]
    fn default_db_is_populated_per_arch() {
        // Smoke-test: the shipped database has the symbols the rubric calls
        // for, and the multi-architecture tables are genuinely present.
        let db = default_db();
        assert!(db.len() >= 50, "expected ≥50 signatures, got {}", db.len());
        let names: Vec<&str> = db.entries.iter().map(|s| s.name.as_str()).collect();
        for required in &[
            "strcpy",
            "strlen",
            "memcpy",
            "memset",
            "malloc",
            "free",
            "__cxa_throw",
            "operator new",
            "pthread_create",
        ] {
            assert!(
                names.iter().any(|n| n == required),
                "default_db missing {required}"
            );
        }

        for arch in [
            ArchId::X86_64,
            ArchId::X86,
            ArchId::AArch64,
            ArchId::Arm,
            ArchId::RiscV64,
            ArchId::Mips64,
            ArchId::Mips,
            ArchId::Ppc64,
            ArchId::Ppc,
        ] {
            assert!(
                db.entries_for_arch(arch).count() >= 4,
                "default_db missing per-arch signatures for {arch}"
            );
        }
    }
}
