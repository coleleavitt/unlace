//! Core FLIRT pattern structures and matching logic.
//!
//! Supports reference-name resolution: patterns may carry outbound call
//! references (`FlirtRef`), and the iterative resolver feeds back matches
//! from earlier passes so that colliding byte patterns can be disambiguated
//! by verifying that the function's outbound call targets have been
//! identified with the expected canonical names.

use std::collections::BTreeMap;
use std::path::Path;

use serde::Deserialize;
use tracing::debug;

use crate::FlirtError;

// --- Core types ---

/// An outbound call reference recorded in a FLIRT signature.
///
/// FLIRT generators embed these when building signatures from static archives:
/// at `offset` bytes into the function, the compiled code calls the function
/// named `name`. During matching, if `name` has already been resolved (i.e.
/// appears in the resolved-name map), the matcher can verify that the actual
/// call target at that offset matches expectations -- breaking ties between
/// signatures that share the same wildcarded byte prefix.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FlirtRef {
    /// Byte offset within the function body where the `E8`/`E9` opcode lives.
    pub offset: u32,
    /// Canonical callee name expected at that call site.
    pub name: String,
}

/// A single FLIRT signature pattern.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FlirtPattern {
    /// Byte pattern to match (leading bytes of the function).
    pub bytes: Vec<u8>,
    /// Mask: 0xFF means the corresponding byte must match exactly,
    /// 0x00 means wildcard (any byte accepted).
    pub mask: Vec<u8>,
    /// Name to assign when the pattern matches.
    pub name: String,
    /// Expected minimum function length (0 means no length check).
    pub length: u32,
    /// CRC16 checksum of the tail bytes (0 means no CRC check).
    pub crc16: u16,
    /// Offset from function start where CRC region begins.
    pub crc_offset: u32,
    /// Number of bytes to include in the CRC calculation.
    pub crc_length: u32,
    /// Outbound call references used to disambiguate colliding patterns.
    pub refs: Vec<FlirtRef>,
}

/// A database of FLIRT patterns for batch matching.
#[derive(Clone, Debug, Default)]
pub struct FlirtDb {
    pub patterns: Vec<FlirtPattern>,
}

/// A successful pattern match result.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FlirtMatch {
    /// Address of the matched function.
    pub addr: u64,
    /// Name identified by the pattern.
    pub name: String,
    /// Index of the pattern in the database that matched.
    pub pattern_index: usize,
    /// Preference score: higher means more outbound refs were confirmed.
    /// A score of `u32::MAX` means all refs matched (or the pattern had none).
    pub score: u32,
}

/// A function's raw bytes for matching purposes.
pub struct FunctionBytes {
    /// Virtual address of the function entry point.
    pub addr: u64,
    /// Raw code bytes of the function body.
    pub bytes: Vec<u8>,
}

// --- TOML deserialization ---

#[derive(Deserialize)]
struct TomlPatternFile {
    pattern: Vec<TomlPattern>,
}

#[derive(Deserialize)]
struct TomlPattern {
    name: String,
    bytes: String,
    #[serde(default)]
    mask: Option<String>,
    #[serde(default)]
    length: Option<u32>,
    #[serde(default)]
    crc16: Option<u16>,
    #[serde(default)]
    crc_offset: Option<u32>,
    #[serde(default)]
    crc_length: Option<u32>,
    #[serde(default)]
    refs: Vec<TomlRef>,
}

#[derive(Deserialize)]
struct TomlRef {
    offset: u32,
    name: String,
}

/// Decode a hex string like "ff0042" into bytes.
fn decode_hex(name: &str, hex: &str) -> Result<Vec<u8>, FlirtError> {
    let hex = hex.trim();
    if hex.len() % 2 != 0 {
        return Err(FlirtError::InvalidHex {
            name: name.to_string(),
            detail: "odd number of hex characters".to_string(),
        });
    }
    let mut out = Vec::with_capacity(hex.len() / 2);
    for i in (0..hex.len()).step_by(2) {
        let byte = u8::from_str_radix(&hex[i..i + 2], 16).map_err(|e| FlirtError::InvalidHex {
            name: name.to_string(),
            detail: e.to_string(),
        })?;
        out.push(byte);
    }
    Ok(out)
}

/// Load FLIRT patterns from a TOML file.
pub fn load_patterns_from_toml(path: &Path) -> Result<FlirtDb, FlirtError> {
    let content = std::fs::read_to_string(path)?;
    load_patterns_from_toml_str(&content)
}

/// Load patterns from a TOML string (useful for testing).
pub fn load_patterns_from_toml_str(content: &str) -> Result<FlirtDb, FlirtError> {
    let file: TomlPatternFile = toml::from_str(content)?;
    let mut patterns = Vec::with_capacity(file.pattern.len());

    for p in file.pattern {
        let bytes = decode_hex(&p.name, &p.bytes)?;
        let mask = if let Some(ref m) = p.mask {
            let m = decode_hex(&p.name, m)?;
            if m.len() != bytes.len() {
                return Err(FlirtError::LengthMismatch {
                    name: p.name,
                    byte_len: bytes.len(),
                    mask_len: m.len(),
                });
            }
            m
        } else {
            vec![0xFF; bytes.len()]
        };

        let refs: Vec<FlirtRef> = p
            .refs
            .into_iter()
            .map(|r| FlirtRef {
                offset: r.offset,
                name: r.name,
            })
            .collect();

        patterns.push(FlirtPattern {
            bytes,
            mask,
            name: p.name,
            length: p.length.unwrap_or(0),
            crc16: p.crc16.unwrap_or(0),
            crc_offset: p.crc_offset.unwrap_or(0),
            crc_length: p.crc_length.unwrap_or(0),
            refs,
        });
    }

    debug!("loaded {} FLIRT patterns", patterns.len());
    Ok(FlirtDb { patterns })
}

// --- CRC ---

/// Compute CRC16/CCITT-FALSE over a byte slice.
fn crc16_ccitt(data: &[u8]) -> u16 {
    let mut crc: u16 = 0xFFFF;
    for &byte in data {
        crc ^= (byte as u16) << 8;
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

// --- Matching ---

impl FlirtPattern {
    /// Check whether this pattern's byte prefix + CRC matches the function body.
    pub fn matches(&self, func_bytes: &[u8]) -> bool {
        if self.length > 0 && (func_bytes.len() as u32) < self.length {
            return false;
        }
        if func_bytes.len() < self.bytes.len() {
            return false;
        }
        for (i, (&pat, &mask)) in self.bytes.iter().zip(self.mask.iter()).enumerate() {
            if (func_bytes[i] & mask) != (pat & mask) {
                return false;
            }
        }
        if self.crc_length > 0 {
            let start = self.crc_offset as usize;
            let end = start + self.crc_length as usize;
            if func_bytes.len() < end {
                return false;
            }
            let computed = crc16_ccitt(&func_bytes[start..end]);
            if computed != self.crc16 {
                return false;
            }
        }
        true
    }

    /// Compute a preference score for this pattern against a function body,
    /// given the current set of resolved names (addr -> canonical name).
    ///
    /// Returns `None` if the byte pattern does not match at all.
    /// Returns `Some(score)` where higher score means more outbound
    /// references confirmed. A pattern with no refs that byte-matches
    /// gets `u32::MAX`.
    pub fn score(
        &self,
        func_bytes: &[u8],
        func_addr: u64,
        resolved: &BTreeMap<u64, String>,
    ) -> Option<u32> {
        if !self.matches(func_bytes) {
            return None;
        }
        if self.refs.is_empty() {
            return Some(u32::MAX);
        }
        let mut confirmed = 0u32;
        for r in &self.refs {
            if let Some(target_addr) = resolve_rel32(func_bytes, func_addr, r.offset as usize) {
                if let Some(name) = resolved.get(&target_addr) {
                    if *name == r.name {
                        confirmed += 1;
                    }
                }
            }
        }
        Some(confirmed)
    }
}

/// Resolve a near x86/x86-64 rel32 call/jmp target.
fn resolve_rel32(func_bytes: &[u8], func_addr: u64, offset: usize) -> Option<u64> {
    let end = offset.checked_add(5)?;
    if end > func_bytes.len() {
        return None;
    }
    match func_bytes[offset] {
        0xE8 | 0xE9 => {}
        _ => return None,
    }
    let disp = i32::from_le_bytes(func_bytes[offset + 1..end].try_into().ok()?);
    let next_ip = func_addr.checked_add(end as u64)?;
    let target = (next_ip as i64).checked_add(disp as i64)?;
    if target < 0 {
        return None;
    }
    Some(target as u64)
}

impl FlirtDb {
    /// Create a new empty database.
    pub fn new() -> Self {
        Self {
            patterns: Vec::new(),
        }
    }

    /// Add a pattern to the database.
    pub fn add_pattern(&mut self, pattern: FlirtPattern) {
        self.patterns.push(pattern);
    }

    /// Match a single function's bytes against all patterns, returning the
    /// first byte+CRC match (ignoring refs).
    pub fn match_bytes(&self, addr: u64, func_bytes: &[u8]) -> Option<FlirtMatch> {
        for (idx, pattern) in self.patterns.iter().enumerate() {
            if pattern.matches(func_bytes) {
                return Some(FlirtMatch {
                    addr,
                    name: pattern.name.clone(),
                    pattern_index: idx,
                    score: u32::MAX,
                });
            }
        }
        None
    }

    /// Match a single function's bytes using preference scoring.
    ///
    /// All byte+CRC-matching patterns are considered; the one with the
    /// highest ref-confirmation score wins. Ties are broken by pattern
    /// registration order (earlier = higher priority).
    pub fn match_bytes_scored(
        &self,
        addr: u64,
        func_bytes: &[u8],
        resolved: &BTreeMap<u64, String>,
    ) -> Option<FlirtMatch> {
        let mut best: Option<(usize, u32)> = None;
        for (idx, pattern) in self.patterns.iter().enumerate() {
            if let Some(score) = pattern.score(func_bytes, addr, resolved) {
                let dominated = match best {
                    Some((_, best_score)) => score > best_score,
                    None => true,
                };
                if dominated {
                    best = Some((idx, score));
                }
                if score == u32::MAX {
                    break;
                }
            }
        }
        best.map(|(idx, score)| FlirtMatch {
            addr,
            name: self.patterns[idx].name.clone(),
            pattern_index: idx,
            score,
        })
    }
}

/// Match a set of function byte ranges against a FLIRT database.
pub fn match_functions(db: &FlirtDb, functions: &[FunctionBytes]) -> Vec<FlirtMatch> {
    let mut matches = Vec::new();
    for func in functions {
        if let Some(m) = db.match_bytes(func.addr, &func.bytes) {
            debug!(addr = func.addr, name = %m.name, "FLIRT match");
            matches.push(m);
        }
    }
    matches
}

/// Iteratively resolve FLIRT matches using reference-name feedback.
///
/// On each pass the resolver attempts to match every unresolved function,
/// using the current `resolved` map for ref-scoring. Matches with
/// `score == u32::MAX` or `score > 0` are accepted and fed back. Iteration
/// stops when a pass produces zero new resolutions.
pub fn resolve_iterative(
    db: &FlirtDb,
    functions: &[FunctionBytes],
    initial_resolved: &BTreeMap<u64, String>,
) -> Vec<FlirtMatch> {
    let mut resolved: BTreeMap<u64, String> = initial_resolved.clone();
    let mut final_matches: BTreeMap<u64, FlirtMatch> = BTreeMap::new();

    loop {
        let mut new_this_pass = 0u32;

        for func in functions {
            if final_matches.contains_key(&func.addr) {
                continue;
            }
            if let Some(m) = db.match_bytes_scored(func.addr, &func.bytes, &resolved) {
                let accept = m.score == u32::MAX || m.score > 0;
                if accept {
                    resolved.insert(func.addr, m.name.clone());
                    final_matches.insert(func.addr, m);
                    new_this_pass += 1;
                }
            }
        }

        debug!(new_this_pass, total = final_matches.len(), "FLIRT resolve pass");
        if new_this_pass == 0 {
            break;
        }
    }

    final_matches.into_values().collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_load_patterns_from_toml() {
        let toml = r#"
[[pattern]]
name = "strlen"
bytes = "f30f1efa"
mask = "ffffffff"
length = 16

[[pattern]]
name = "memcpy"
bytes = "f30f1efb"
"#;
        let db = load_patterns_from_toml_str(toml).unwrap();
        assert_eq!(db.patterns.len(), 2);
        assert_eq!(db.patterns[0].name, "strlen");
        assert_eq!(db.patterns[0].bytes, vec![0xf3, 0x0f, 0x1e, 0xfa]);
        assert_eq!(db.patterns[0].mask, vec![0xff, 0xff, 0xff, 0xff]);
        assert_eq!(db.patterns[0].length, 16);
        assert_eq!(db.patterns[1].name, "memcpy");
        assert_eq!(db.patterns[1].mask, vec![0xff, 0xff, 0xff, 0xff]);
    }

    #[test]
    fn test_load_patterns_with_refs() {
        let toml = r#"
[[pattern]]
name = "wrapper"
bytes = "554889e5"
mask = "ffffffff"
length = 16

[[pattern.refs]]
offset = 5
name = "malloc"

[[pattern.refs]]
offset = 12
name = "free"
"#;
        let db = load_patterns_from_toml_str(toml).unwrap();
        assert_eq!(db.patterns.len(), 1);
        let p = &db.patterns[0];
        assert_eq!(p.refs.len(), 2);
        assert_eq!(p.refs[0].offset, 5);
        assert_eq!(p.refs[0].name, "malloc");
        assert_eq!(p.refs[1].offset, 12);
        assert_eq!(p.refs[1].name, "free");
    }

    #[test]
    fn test_pattern_matching_exact() {
        let pattern = FlirtPattern {
            bytes: vec![0xFF, 0x25, 0x00, 0x00],
            mask: vec![0xFF, 0xFF, 0x00, 0x00],
            name: "plt_stub".to_string(),
            length: 0,
            crc16: 0,
            crc_offset: 0,
            crc_length: 0,
            refs: Vec::new(),
        };
        assert!(pattern.matches(&[0xFF, 0x25, 0xAB, 0xCD, 0x00, 0x00]));
        assert!(!pattern.matches(&[0xFE, 0x25, 0xAB, 0xCD, 0x00, 0x00]));
        assert!(!pattern.matches(&[0xFF, 0x25]));
    }

    #[test]
    fn test_crc16_verification() {
        let data = b"Hello, FLIRT!";
        let crc = crc16_ccitt(data);
        let pattern = FlirtPattern {
            bytes: vec![0x48],
            mask: vec![0xFF],
            name: "hello_func".to_string(),
            length: 0,
            crc16: crc,
            crc_offset: 0,
            crc_length: data.len() as u32,
            refs: Vec::new(),
        };
        assert!(pattern.matches(data));
        let mut bad_data = data.to_vec();
        bad_data[5] = 0x00;
        assert!(!pattern.matches(&bad_data));
    }

    #[test]
    fn test_match_functions_batch() {
        let db = FlirtDb {
            patterns: vec![
                FlirtPattern {
                    bytes: vec![0xFF, 0x25],
                    mask: vec![0xFF, 0xFF],
                    name: "plt_jump".to_string(),
                    length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
                    refs: Vec::new(),
                },
                FlirtPattern {
                    bytes: vec![0xF3, 0x0F, 0x1E, 0xFA],
                    mask: vec![0xFF, 0xFF, 0xFF, 0xFF],
                    name: "endbr64_func".to_string(),
                    length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
                    refs: Vec::new(),
                },
            ],
        };
        let functions = vec![
            FunctionBytes { addr: 0x1000, bytes: vec![0xFF, 0x25, 0x12, 0x34, 0x56, 0x78] },
            FunctionBytes { addr: 0x2000, bytes: vec![0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48] },
            FunctionBytes { addr: 0x3000, bytes: vec![0x90, 0x90, 0x90] },
        ];
        let matches = match_functions(&db, &functions);
        assert_eq!(matches.len(), 2);
        assert_eq!(matches[0].addr, 0x1000);
        assert_eq!(matches[0].name, "plt_jump");
        assert_eq!(matches[1].addr, 0x2000);
        assert_eq!(matches[1].name, "endbr64_func");
    }

    fn make_func_with_call(func_addr: u64, call_offset: usize, target_addr: u64, len: usize) -> Vec<u8> {
        let mut bytes = vec![0x55, 0x48, 0x89, 0xE5];
        bytes.resize(call_offset, 0x90);
        let next_ip = func_addr + (call_offset as u64) + 5;
        let disp = (target_addr as i64) - (next_ip as i64);
        bytes.push(0xE8);
        bytes.extend_from_slice(&(disp as i32).to_le_bytes());
        bytes.resize(len, 0xC3);
        bytes
    }

    #[test]
    fn test_ref_scoring_prefers_confirmed_refs() {
        let prefix = vec![0x55, 0x48, 0x89, 0xE5];
        let call_offset = 4;
        let func_addr = 0x1000u64;
        let malloc_addr = 0x2000u64;
        let free_addr = 0x3000u64;
        let body = make_func_with_call(func_addr, call_offset, malloc_addr, 32);

        let mut db = FlirtDb::new();
        db.add_pattern(FlirtPattern {
            bytes: prefix.clone(), mask: vec![0xFF; 4], name: "calls_malloc".into(),
            length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
            refs: vec![FlirtRef { offset: call_offset as u32, name: "malloc".into() }],
        });
        db.add_pattern(FlirtPattern {
            bytes: prefix.clone(), mask: vec![0xFF; 4], name: "calls_free".into(),
            length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
            refs: vec![FlirtRef { offset: call_offset as u32, name: "free".into() }],
        });

        let mut resolved = BTreeMap::new();
        resolved.insert(malloc_addr, "malloc".into());
        let m = db.match_bytes_scored(func_addr, &body, &resolved).unwrap();
        assert_eq!(m.name, "calls_malloc");
        assert_eq!(m.score, 1);

        let mut resolved2 = BTreeMap::new();
        resolved2.insert(free_addr, "free".into());
        let m2 = db.match_bytes_scored(func_addr, &body, &resolved2).unwrap();
        assert_eq!(m2.name, "calls_malloc");
        assert_eq!(m2.score, 0);
    }

    #[test]
    fn test_iterative_resolution() {
        let func_b_addr = 0x2000u64;
        let func_a_addr = 0x1000u64;
        let func_b_bytes = vec![0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF, 0x00, 0x11];
        let func_a_bytes = make_func_with_call(func_a_addr, 4, func_b_addr, 32);
        let prefix = vec![0x55, 0x48, 0x89, 0xE5];

        let mut db = FlirtDb::new();
        db.add_pattern(FlirtPattern {
            bytes: vec![0xAA, 0xBB, 0xCC, 0xDD], mask: vec![0xFF; 4],
            name: "helper".into(), length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
            refs: Vec::new(),
        });
        db.add_pattern(FlirtPattern {
            bytes: prefix.clone(), mask: vec![0xFF; 4],
            name: "caller_of_helper".into(), length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
            refs: vec![FlirtRef { offset: 4, name: "helper".into() }],
        });
        db.add_pattern(FlirtPattern {
            bytes: prefix.clone(), mask: vec![0xFF; 4],
            name: "caller_of_other".into(), length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
            refs: vec![FlirtRef { offset: 4, name: "other".into() }],
        });

        let functions = vec![
            FunctionBytes { addr: func_a_addr, bytes: func_a_bytes },
            FunctionBytes { addr: func_b_addr, bytes: func_b_bytes },
        ];
        let matches = resolve_iterative(&db, &functions, &BTreeMap::new());
        assert_eq!(matches.len(), 2);
        let by_addr: BTreeMap<u64, &FlirtMatch> = matches.iter().map(|m| (m.addr, m)).collect();
        assert_eq!(by_addr[&func_b_addr].name, "helper");
        assert_eq!(by_addr[&func_a_addr].name, "caller_of_helper");
    }

    #[test]
    fn test_resolve_iterative_empty() {
        let db = FlirtDb::new();
        let functions = vec![FunctionBytes { addr: 0x1000, bytes: vec![0x90] }];
        let matches = resolve_iterative(&db, &functions, &BTreeMap::new());
        assert!(matches.is_empty());
    }

    #[test]
    fn test_no_refs_pattern_gets_max_score() {
        let pattern = FlirtPattern {
            bytes: vec![0x55], mask: vec![0xFF], name: "simple".into(),
            length: 0, crc16: 0, crc_offset: 0, crc_length: 0,
            refs: Vec::new(),
        };
        let score = pattern.score(&[0x55, 0x48], 0x1000, &BTreeMap::new());
        assert_eq!(score, Some(u32::MAX));
    }
}
