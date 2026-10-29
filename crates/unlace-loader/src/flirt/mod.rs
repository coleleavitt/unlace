//! FLIRT-equivalent library function recognition.
//!
//! This module ships a small in-memory signature database modelled after
//! IDA's FLIRT format: a leading byte pattern, a mask marking wildcard
//! positions (relocations / immediates that vary between builds), an
//! optional CRC16 over a tail range to disambiguate when several functions
//! share the same prologue, and an optional list of outbound references
//! that must lead to a function of a given name.
//!
//! The database is built into the binary ([`default_db`]) rather than
//! loaded from `.sig` files. IDA `.sig` files are handled by the
//! `unlace-flirt` crate.

mod generator;
mod signatures;

use std::collections::BTreeMap;

pub use generator::{
    GeneratedSigPattern, SigGenerateError, SigGenerateOptions, generate_archive_patterns,
    generate_archive_patterns_from_bytes, render_patterns_toml,
};
pub use signatures::default_db;

/// One library-function fingerprint.
#[derive(Debug, Clone)]
pub struct FlirtSignature {
    pub name: String,
    /// Leading byte pattern; positions where `mask[i] == 0` are wildcards.
    pub pattern: Vec<u8>,
    /// Per-byte mask: `0xFF` → must match exactly, `0x00` → wildcard.
    pub mask: Vec<u8>,
    /// Optional CRC16 (CCITT) over a 32-byte window starting at the given
    /// offset, to break ties when several signatures share the same
    /// wildcarded prefix. Tuple is `(start, expected_crc)`.
    pub crc16_at: Option<(usize, u16)>,
    /// Outbound references that must all resolve for the signature to
    /// match. In FLIRT these are the "reference names" of a module.
    pub refs: Vec<FlirtRef>,
}

/// One outbound reference captured by a FLIRT signature.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FlirtRef {
    /// Offset within the function of the opcode of a direct `call rel32`
    /// (`E8`), `jmp rel32` (`E9`) or `jmp rel8` (`EB`).
    pub offset: usize,
    /// Name of the function the branch must lead to: either a known name at
    /// the target address, or a signature of this name matching there.
    pub name: String,
}

/// A candidate function entry inside the executable section that holds it.
///
/// Matching reads from the entry to the end of the section rather than to
/// the discovered function end: discovered bounds are not reliable enough to
/// cut a signature short, and references are checked at absolute addresses.
#[derive(Debug, Clone, Copy)]
pub struct FunctionCode<'a> {
    section_addr: u64,
    section: &'a [u8],
    addr: u64,
}

impl<'a> FunctionCode<'a> {
    /// `None` when `addr` lies outside the section.
    pub fn new(section_addr: u64, section: &'a [u8], addr: u64) -> Option<Self> {
        let offset = addr.checked_sub(section_addr)?;
        (offset < section.len() as u64).then_some(Self {
            section_addr,
            section,
            addr,
        })
    }

    /// The bytes from the entry to the end of the section.
    pub fn bytes(&self) -> &'a [u8] {
        &self.section[(self.addr - self.section_addr) as usize..]
    }

    fn at(&self, addr: u64) -> Option<Self> {
        Self::new(self.section_addr, self.section, addr)
    }
}

/// Result of matching one function against the FLIRT DB.
///
/// `confidence` is `1.0` when the signature's outbound references all
/// resolved and `0.9` for a byte/CRC match of a signature without
/// references. `signature_id` is the index of the matched signature in the
/// owning [`FlirtDb`].
#[derive(Debug, Clone, PartialEq)]
pub struct FlirtMatch<'a> {
    pub name: &'a str,
    pub confidence: f32,
    pub signature_id: usize,
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

    /// Match a function whose code starts at `bytes[0]`, without any known
    /// names for its references.
    pub fn match_function(&self, bytes: &[u8]) -> Option<&str> {
        let code = FunctionCode::new(0, bytes, 0)?;
        self.match_function_with_refs(code, &BTreeMap::new())
            .map(|m| m.name)
    }

    /// Match the function at `code` against the DB. Returns the first
    /// matching signature in registration order. A signature with
    /// references matches only when every reference leads to a function of
    /// the expected name: known from `resolved_names` (absolute address →
    /// name), or recognised by a reference-free signature of that name.
    pub fn match_function_with_refs<'a>(
        &'a self,
        code: FunctionCode<'_>,
        resolved_names: &BTreeMap<u64, String>,
    ) -> Option<FlirtMatch<'a>> {
        self.entries
            .iter()
            .enumerate()
            .find(|(_, sig)| {
                signature_matches(sig, code.bytes())
                    && sig
                        .refs
                        .iter()
                        .all(|reference| self.reference_resolves(code, reference, resolved_names))
            })
            .map(|(signature_id, sig)| FlirtMatch {
                name: &sig.name,
                confidence: if sig.refs.is_empty() { 0.9 } else { 1.0 },
                signature_id,
            })
    }

    fn reference_resolves(
        &self,
        code: FunctionCode<'_>,
        reference: &FlirtRef,
        resolved_names: &BTreeMap<u64, String>,
    ) -> bool {
        let Some(target) = branch_target(code, reference.offset) else {
            return false;
        };
        if let Some(name) = resolved_names.get(&target) {
            return *name == reference.name;
        }
        let Some(callee) = code.at(target) else {
            return false;
        };
        self.entries.iter().any(|sig| {
            sig.name == reference.name
                && sig.refs.is_empty()
                && signature_matches(sig, callee.bytes())
        })
    }
}

fn signature_matches(sig: &FlirtSignature, bytes: &[u8]) -> bool {
    if bytes.len() < sig.pattern.len() {
        return false;
    }
    let pattern_matches = sig
        .pattern
        .iter()
        .zip(&sig.mask)
        .zip(bytes)
        .all(|((&want, &mask), &have)| have & mask == want & mask);
    if !pattern_matches {
        return false;
    }
    match sig.crc16_at {
        Some((start, expected)) => {
            const WINDOW: usize = 32;
            let end = (start + WINDOW).min(bytes.len());
            start < end && crc16_ccitt(&bytes[start..end]) == expected
        }
        None => true,
    }
}

/// Absolute target of the direct branch whose opcode is at `offset`.
fn branch_target(code: FunctionCode<'_>, offset: usize) -> Option<u64> {
    let bytes = code.bytes();
    let (len, disp) = match *bytes.get(offset)? {
        0xE8 | 0xE9 => {
            let rel: [u8; 4] = bytes.get(offset + 1..offset + 5)?.try_into().ok()?;
            (5, i64::from(i32::from_le_bytes(rel)))
        }
        0xEB => (2, i64::from(*bytes.get(offset + 1)? as i8)),
        _ => return None,
    };
    let next = code.addr.checked_add((offset + len) as u64)?;
    next.checked_add_signed(disp)
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
            crc16_at: None,
            refs: Vec::new(),
        }
    }

    fn with_ref(name: &str, pattern: &[u8], offset: usize, callee: &str) -> FlirtSignature {
        let mut mask = vec![0xFF; pattern.len()];
        mask[offset + 1..].fill(0);
        FlirtSignature {
            refs: vec![FlirtRef {
                offset,
                name: callee.into(),
            }],
            ..sig(name, pattern, &mask)
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

    fn code(bytes: &[u8], section_addr: u64, addr: u64) -> FunctionCode<'_> {
        FunctionCode::new(section_addr, bytes, addr).unwrap()
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
        db.push(sig("memcpy", &[0x48, 0x00, 0xC3], &[0xFF, 0x00, 0xFF]));
        assert_eq!(db.match_function(&[0x48, 0x77, 0xC3, 0x00]), Some("memcpy"));
        assert_eq!(db.match_function(&[0x48, 0xAB, 0xC3, 0x00]), Some("memcpy"));
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

        let mask = [0xFF; 4];
        db.push(FlirtSignature {
            crc16_at: Some((prefix.len(), crc_a)),
            ..sig("fn_a", &prefix, &mask)
        });
        db.push(FlirtSignature {
            crc16_at: Some((prefix.len(), crc_b)),
            ..sig("fn_b", &prefix, &mask)
        });

        assert_eq!(db.match_function(&bytes_a), Some("fn_a"));
        assert_eq!(db.match_function(&bytes_b), Some("fn_b"));
    }

    #[test]
    fn reference_names_break_prefix_ties() {
        let mut bytes = vec![0x55, 0x48, 0x89, 0xE5];
        bytes.extend_from_slice(&rel32(0xE8, 0x40, 4));
        bytes.resize(0x50, 0x90);
        let pattern = &bytes[..9];
        let db = FlirtDb::from_entries(vec![
            with_ref("calls_malloc", pattern, 4, "malloc"),
            with_ref("calls_free", pattern, 4, "free"),
        ]);

        let resolved = BTreeMap::from([(0x40, "free".to_string())]);
        let m = db
            .match_function_with_refs(code(&bytes, 0, 0), &resolved)
            .unwrap();
        assert_eq!(m.name, "calls_free");
        assert_eq!(m.confidence, 1.0);
        assert_eq!(m.signature_id, 1);
    }

    #[test]
    fn references_resolve_at_absolute_addresses() {
        let section_addr = 0x40_1000;
        let mut bytes = vec![0x90; 0x10];
        bytes.extend_from_slice(&[0x55, 0x48, 0x89, 0xE5]);
        bytes.extend_from_slice(&rel32(0xE8, 0x40, 0x14));
        bytes.resize(0x50, 0x90);
        let db = FlirtDb::from_entries(vec![with_ref(
            "calls_malloc",
            &bytes[0x10..0x19],
            4,
            "malloc",
        )]);

        let resolved = BTreeMap::from([(section_addr + 0x40, "malloc".to_string())]);
        let at = code(&bytes, section_addr, section_addr + 0x10);
        assert_eq!(
            db.match_function_with_refs(at, &resolved).map(|m| m.name),
            Some("calls_malloc")
        );
        // The section-relative target means nothing.
        let wrong = BTreeMap::from([(0x40, "malloc".to_string())]);
        assert!(db.match_function_with_refs(at, &wrong).is_none());
    }

    #[test]
    fn unresolved_reference_rejects_match() {
        let mut bytes = vec![0x55, 0x48, 0x89, 0xE5];
        bytes.extend_from_slice(&rel32(0xE8, 0x40, 4));
        let db = FlirtDb::from_entries(vec![with_ref("calls_malloc", &bytes, 4, "malloc")]);
        assert!(db.match_function(&bytes).is_none());
    }

    #[test]
    fn bad_reference_opcode_rejects_match() {
        let bytes = [0x55, 0x48, 0x89, 0xE5, 0x90, 0x90, 0x90, 0x90, 0x90];
        let db = FlirtDb::from_entries(vec![FlirtSignature {
            refs: vec![FlirtRef {
                offset: 4,
                name: "malloc".into(),
            }],
            ..sig("calls_malloc", &bytes[..4], &[0xFF; 4])
        }]);
        assert!(db.match_function(&bytes).is_none());
    }

    #[test]
    fn reference_resolves_through_callee_signature() {
        // `jmp short` to a body that a reference-free signature names.
        let callee = [0x31, 0xC0, 0xC3];
        let mut bytes = vec![0xEB, 0x02, 0xCC, 0xCC];
        bytes.extend_from_slice(&callee);
        let db = FlirtDb::from_entries(vec![
            with_ref("thunk", &[0xEB, 0x00], 0, "zero"),
            sig("zero", &callee, &[0xFF; 3]),
        ]);
        let m = db
            .match_function_with_refs(code(&bytes, 0x1000, 0x1000), &BTreeMap::new())
            .unwrap();
        assert_eq!(m.name, "thunk");
        assert_eq!(m.confidence, 1.0);
        assert_eq!(db.match_function(&bytes[2..]), None);
    }

    #[test]
    fn signature_without_references_has_lower_confidence() {
        let db = FlirtDb::from_entries(vec![sig("ret", &[0xC3], &[0xFF])]);
        let m = db
            .match_function_with_refs(code(&[0xC3], 0, 0), &BTreeMap::new())
            .unwrap();
        assert_eq!((m.name, m.confidence, m.signature_id), ("ret", 0.9, 0));
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
    fn function_code_rejects_addresses_outside_the_section() {
        let bytes = [0x90; 4];
        assert!(FunctionCode::new(0x1000, &bytes, 0xFFF).is_none());
        assert!(FunctionCode::new(0x1000, &bytes, 0x1004).is_none());
        assert_eq!(code(&bytes, 0x1000, 0x1003).bytes(), &[0x90]);
    }
}
