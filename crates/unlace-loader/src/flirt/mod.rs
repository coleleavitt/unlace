//! FLIRT-equivalent library function recognition.
//!
//! When a stripped binary's `strcpy` looks like the leading bytes of glibc's
//! `strcpy`, we'd rather surface it as `strcpy` than spend pass + printer
//! cycles decompiling it. This module ships a small in-memory signature
//! database modelled after IDA's FLIRT format: a leading byte pattern, a
//! mask marking wildcard positions (relocations / immediates that vary
//! between builds), an optional CRC16 over a tail range to disambiguate
//! when several functions share the same prologue, and an optional list of
//! outbound call targets whose names are only known *after* some other
//! FLIRT matches have already landed.
//!
//! The database is ship-in-binary (`flirt_signatures::DEFAULT_SIGNATURES`)
//! rather than loaded from `.sig` files; that's enough for the parity push
//! and avoids a runtime IO + parsing dependency.

mod signatures;

use std::collections::BTreeMap;

pub use signatures::default_db;

/// One library-function fingerprint.
#[derive(Debug, Clone)]
pub struct FlirtSignature {
    pub name: String,
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
    /// Optional outbound call references recorded in the signature.
    ///
    /// In FLIRT these are the "reference names" attached to a candidate:
    /// if the bytes match but the function calls out to a callee whose
    /// canonical name is known from another match, we can resolve otherwise
    /// ambiguous signatures by checking that those outbound references line up.
    pub refs: Vec<FlirtRef>,
}

/// One outbound reference captured by a FLIRT signature.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FlirtRef {
    /// Offset within the function where the call / branch immediate starts.
    pub offset: usize,
    /// Canonical name of the expected callee.
    pub name: String,
}

/// Result of matching one function body against the FLIRT DB.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FlirtMatch<'a> {
    pub name: &'a str,
    /// Whether all available reference-name checks succeeded.
    pub refs_matched: bool,
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

    /// Try to match `bytes` (typically the prologue + body of a candidate
    /// function) against any signature in the database. Returns the first
    /// byte/CRC match by registration order so callers control priority via
    /// the signature table layout.
    pub fn match_function(&self, bytes: &[u8]) -> Option<&str> {
        self.match_function_with_refs(bytes, &BTreeMap::new()).map(|m| m.name)
    }

    /// Match `bytes` against the DB, preferring candidates whose recorded
    /// outbound references resolve against the already-known `resolved_names`
    /// map (absolute address → canonical callee name).
    pub fn match_function_with_refs<'a>(
        &'a self,
        bytes: &[u8],
        resolved_names: &BTreeMap<u64, String>,
    ) -> Option<FlirtMatch<'a>> {
        let mut fallback: Option<FlirtMatch<'a>> = None;
        for sig in &self.entries {
            if !signature_matches(sig, bytes) {
                continue;
            }
            let refs_matched = references_match(sig, bytes, resolved_names);
            if refs_matched {
                return Some(FlirtMatch {
                    name: &sig.name,
                    refs_matched: true,
                });
            }
            if fallback.is_none() {
                fallback = Some(FlirtMatch {
                    name: &sig.name,
                    refs_matched: false,
                });
            }
        }
        fallback
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

fn references_match(sig: &FlirtSignature, bytes: &[u8], resolved_names: &BTreeMap<u64, String>) -> bool {
    if sig.refs.is_empty() {
        return true;
    }
    for reference in &sig.refs {
        let Some(target) = resolve_rel32_call(bytes, reference.offset) else {
            return false;
        };
        let Some(name) = resolved_names.get(&target) else {
            return false;
        };
        if name != &reference.name {
            return false;
        }
    }
    true
}

/// Resolve a near x86/x86-64 rel32 `call`/`jmp` target at `offset`.
///
/// `offset` must point at the opcode byte (`E8`/`E9`) inside `bytes`.
fn resolve_rel32_call(bytes: &[u8], offset: usize) -> Option<u64> {
    let end = offset.checked_add(5)?;
    if end > bytes.len() {
        return None;
    }
    match bytes[offset] {
        0xE8 | 0xE9 => {}
        _ => return None,
    }
    let disp = i32::from_le_bytes(bytes[offset + 1..end].try_into().ok()?);
    let target = end as i64 + disp as i64;
    if target < 0 {
        return None;
    }
    Some(target as u64)
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
            pattern: pattern.to_vec(),
            mask: mask.to_vec(),
            min_len: pattern.len(),
            max_len: None,
            crc16_at: None,
            refs: Vec::new(),
        }
    }

    fn rel32(opcode: u8, target: usize, insn_offset: usize) -> [u8; 5] {
        let next = (insn_offset + 5) as i64;
        let disp = target as i64 - next;
        let disp = i32::try_from(disp).unwrap();
        let mut out = [0u8; 5];
        out[0] = opcode;
        out[1..].copy_from_slice(&disp.to_le_bytes());
        out
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
        let mut db = FlirtDb::new();
        db.push(sig(
            "memcpy",
            &[0x48, 0x00, 0xC3],
            &[0xFF, 0x00, 0xFF],
        ));
        assert_eq!(
            db.match_function(&[0x48, 0x77, 0xC3, 0x00]),
            Some("memcpy")
        );
        assert_eq!(
            db.match_function(&[0x48, 0xAB, 0xC3, 0x00]),
            Some("memcpy")
        );
        assert!(db.match_function(&[0x49, 0xAB, 0xC3, 0x00]).is_none());
    }

    #[test]
    fn crc16_disambiguates_colliding_prefixes() {
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
            pattern: prefix.to_vec(),
            mask: vec![0xFF; prefix.len()],
            min_len: prefix.len(),
            max_len: None,
            crc16_at: Some((prefix.len(), crc_a)),
            refs: Vec::new(),
        });
        db.push(FlirtSignature {
            name: "fn_b".into(),
            pattern: prefix.to_vec(),
            mask: vec![0xFF; prefix.len()],
            min_len: prefix.len(),
            max_len: None,
            crc16_at: Some((prefix.len(), crc_b)),
            refs: Vec::new(),
        });

        assert_eq!(db.match_function(&bytes_a), Some("fn_a"));
        assert_eq!(db.match_function(&bytes_b), Some("fn_b"));
    }

    #[test]
    fn reference_names_break_prefix_ties() {
        let mut db = FlirtDb::new();
        let mut bytes = vec![0x55, 0x48, 0x89, 0xE5];
        bytes.extend_from_slice(&rel32(0xE8, 0x40, 4));
        bytes.resize(0x50, 0x90);

        let prefix_len = 4;
        db.push(FlirtSignature {
            name: "calls_malloc".into(),
            pattern: bytes[..prefix_len].to_vec(),
            mask: vec![0xFF; prefix_len],
            min_len: prefix_len,
            max_len: None,
            crc16_at: None,
            refs: vec![FlirtRef {
                offset: 4,
                name: "malloc".into(),
            }],
        });
        db.push(FlirtSignature {
            name: "calls_free".into(),
            pattern: bytes[..prefix_len].to_vec(),
            mask: vec![0xFF; prefix_len],
            min_len: prefix_len,
            max_len: None,
            crc16_at: None,
            refs: vec![FlirtRef {
                offset: 4,
                name: "free".into(),
            }],
        });

        let mut resolved = BTreeMap::new();
        resolved.insert(0x40, "malloc".to_string());
        let m = db.match_function_with_refs(&bytes, &resolved).unwrap();
        assert_eq!(m.name, "calls_malloc");
        assert!(m.refs_matched);
    }

    #[test]
    fn unresolved_reference_falls_back_to_first_byte_match() {
        let mut db = FlirtDb::new();
        let mut bytes = vec![0x55, 0x48, 0x89, 0xE5];
        bytes.extend_from_slice(&rel32(0xE8, 0x40, 4));

        db.push(FlirtSignature {
            name: "calls_malloc".into(),
            pattern: bytes[..4].to_vec(),
            mask: vec![0xFF; 4],
            min_len: 4,
            max_len: None,
            crc16_at: None,
            refs: vec![FlirtRef {
                offset: 4,
                name: "malloc".into(),
            }],
        });

        let m = db.match_function_with_refs(&bytes, &BTreeMap::new()).unwrap();
        assert_eq!(m.name, "calls_malloc");
        assert!(!m.refs_matched);
    }

    #[test]
    fn bad_reference_opcode_rejects_reference_match() {
        let mut db = FlirtDb::new();
        let bytes = vec![0x55, 0x48, 0x89, 0xE5, 0x90, 0x90, 0x90, 0x90, 0x90];
        db.push(FlirtSignature {
            name: "calls_malloc".into(),
            pattern: bytes[..4].to_vec(),
            mask: vec![0xFF; 4],
            min_len: 4,
            max_len: None,
            crc16_at: None,
            refs: vec![FlirtRef {
                offset: 4,
                name: "malloc".into(),
            }],
        });
        let m = db.match_function_with_refs(&bytes, &BTreeMap::new()).unwrap();
        assert!(!m.refs_matched);
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
        assert!(db.match_function(&[0x48]).is_none());
    }

    #[test]
    fn default_db_is_populated() {
        let db = default_db();
        assert!(db.len() >= 30, "expected ≥30 signatures, got {}", db.len());
        let names: Vec<&str> = db.entries.iter().map(|s| s.name.as_str()).collect();
        for required in &[
            "strcpy", "strlen", "memcpy", "memset", "malloc", "free",
            "__cxa_throw", "operator new", "pthread_create",
        ] {
            assert!(
                names.iter().any(|n| n == required),
                "default_db missing {required}"
            );
        }
    }
}
