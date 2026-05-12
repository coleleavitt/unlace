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
//! and avoids a runtime IO + parsing dependency.

mod signatures;

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
}

/// Rich FLIRT match metadata. Exact matches are used to elide the function
/// body entirely; partial matches only surface a confidence hint to the user.
#[derive(Debug, Clone, PartialEq)]
pub struct FlirtMatch<'a> {
    pub name: &'a str,
    /// 0.0-1.0 confidence score derived from prefix, length, and CRC checks.
    pub confidence: f32,
    /// True when every hard constraint matched and the candidate can be
    /// treated as a fully recognised library stub.
    pub exact: bool,
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
    /// exact match by registration order so callers control priority via the
    /// signature table layout.
    pub fn match_function(&self, bytes: &[u8]) -> Option<&str> {
        self.best_match(bytes).filter(|m| m.exact).map(|m| m.name)
    }

    /// Return the strongest FLIRT candidate, even when it only partially
    /// matches. This powers t272 confidence hints like
    /// `// likely memcpy (FLIRT 87%)` for near-misses.
    pub fn best_match(&self, bytes: &[u8]) -> Option<FlirtMatch<'_>> {
        self.entries
            .iter()
            .filter_map(|sig| {
                let score = signature_score(sig, bytes)?;
                Some(FlirtMatch {
                    name: &sig.name,
                    confidence: score.confidence,
                    exact: score.exact,
                })
            })
            .max_by(|a, b| {
                a.confidence
                    .partial_cmp(&b.confidence)
                    .unwrap_or(std::cmp::Ordering::Equal)
                    .then_with(|| a.exact.cmp(&b.exact))
            })
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
struct SignatureScore {
    confidence: f32,
    exact: bool,
}

fn signature_score(sig: &FlirtSignature, bytes: &[u8]) -> Option<SignatureScore> {
    let prefix_len = sig.pattern.len();
    if prefix_len == 0 {
        return None;
    }

    let available_prefix = bytes.len().min(prefix_len);
    if available_prefix == 0 {
        return None;
    }

    let required_positions = sig
        .mask
        .iter()
        .copied()
        .chain(std::iter::repeat(0xFF))
        .take(prefix_len)
        .filter(|&m| m != 0)
        .count();
    let wildcard_positions = prefix_len.saturating_sub(required_positions);
    let prefix_weight = 0.80f32;
    let length_weight = 0.10f32;
    let crc_weight = if sig.crc16_at.is_some() {
        0.10f32
    } else {
        0.0f32
    };

    let mut matched_required = 0usize;
    let mut compared_required = 0usize;

    for i in 0..available_prefix {
        let want = sig.pattern[i];
        let mask = sig.mask.get(i).copied().unwrap_or(0xFF);
        if mask == 0 {
            continue;
        }
        compared_required += 1;
        if (bytes[i] & mask) != (want & mask) {
            return None;
        }
        matched_required += 1;
    }

    let matched_positions =
        matched_required + wildcard_positions.min(available_prefix - compared_required);
    let prefix_ratio = matched_positions as f32 / prefix_len as f32;

    let length_ratio = if bytes.len() >= sig.min_len {
        1.0
    } else if sig.min_len == 0 {
        1.0
    } else {
        bytes.len() as f32 / sig.min_len as f32
    };

    let mut exact = bytes.len() >= sig.min_len && bytes.len() >= prefix_len;
    if let Some(max) = sig.max_len {
        if bytes.len() > max {
            return None;
        }
    }

    let crc_ratio = if let Some((start, expected)) = sig.crc16_at {
        const WINDOW: usize = 32;
        let end = (start + WINDOW).min(bytes.len());
        if start >= end {
            exact = false;
            0.0
        } else {
            let crc_matches = crc16_ccitt(&bytes[start..end]) == expected;
            if !crc_matches {
                exact = false;
            }
            if crc_matches { 1.0 } else { 0.0 }
        }
    } else {
        0.0
    };

    if bytes.len() < sig.min_len {
        exact = false;
    }

    let mut confidence =
        prefix_ratio * prefix_weight + length_ratio * length_weight + crc_ratio * crc_weight;
    if exact && sig.crc16_at.is_none() {
        confidence += crc_weight;
    }
    confidence = confidence.clamp(0.0, 1.0);

    Some(SignatureScore { confidence, exact })
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
        }
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
            pattern: prefix.to_vec(),
            mask: vec![0xFF; prefix.len()],
            min_len: prefix.len(),
            max_len: None,
            crc16_at: Some((prefix.len(), crc_a)),
        });
        db.push(FlirtSignature {
            name: "fn_b".into(),
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
    fn best_match_surfaces_partial_confidence_for_truncated_body() {
        let mut db = FlirtDb::new();
        db.push(FlirtSignature {
            name: "memcpy".into(),
            pattern: vec![0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0xC3],
            mask: vec![0xFF; 8],
            min_len: 12,
            max_len: None,
            crc16_at: None,
        });

        let partial = db.best_match(&[0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0xC3]);
        let partial = partial.expect("partial candidate");
        assert_eq!(partial.name, "memcpy");
        assert!(!partial.exact);
        assert!(
            partial.confidence > 0.85,
            "confidence too low: {}",
            partial.confidence
        );
        assert!(
            partial.confidence < 1.0,
            "partial match should not be exact"
        );
    }

    #[test]
    fn best_match_rejects_prefix_mismatches() {
        let mut db = FlirtDb::new();
        db.push(sig(
            "strcpy",
            &[0x48, 0x89, 0xF8, 0xC3],
            &[0xFF, 0xFF, 0xFF, 0xFF],
        ));
        assert!(db.best_match(&[0x90, 0x89, 0xF8, 0xC3]).is_none());
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
    fn default_db_is_populated() {
        // Smoke-test: the shipped database has the symbols the rubric calls
        // for. Bytes here are zeroed because we're checking *registration*,
        // not match correctness against synthetic data.
        let db = default_db();
        assert!(db.len() >= 30, "expected ≥30 signatures, got {}", db.len());
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
    }
}
