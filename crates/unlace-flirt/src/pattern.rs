//! Core FLIRT pattern structures and matching logic.

use std::path::Path;

use serde::Deserialize;
use tracing::debug;

use crate::FlirtError;

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
    /// Expected minimum function length (0 means no lower-bound check).
    pub length: u32,
    /// Expected exact function length when non-zero.
    ///
    /// Some FLIRT records carry a length-prefixed body.  In that form the
    /// candidate must have exactly this many bytes, not merely at least a
    /// minimum.  This prevents short helper thunks and longer same-prologue
    /// functions from aliasing each other.
    pub exact_length: u32,
    /// Number of function-entry bytes to skip before comparing `bytes`.
    ///
    /// FLIRT signatures are often anchored after architecture/toolchain
    /// prologue material (for example x86 `push rbp; mov rbp, rsp`, CET
    /// `endbr64`, or NOP alignment).  A non-zero value aligns the signature
    /// window to the first semantically distinctive byte after that prologue.
    pub prologue_len: u32,
    /// CRC16 checksum of the tail bytes (0 means no CRC check).
    pub crc16: u16,
    /// Offset from function start where CRC region begins.
    pub crc_offset: u32,
    /// Number of bytes to include in the CRC calculation.
    pub crc_length: u32,
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
}

// --- TOML deserialization helpers ---

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
    exact_length: Option<u32>,
    #[serde(default)]
    prologue_len: Option<u32>,
    #[serde(default)]
    crc16: Option<u16>,
    #[serde(default)]
    crc_offset: Option<u32>,
    #[serde(default)]
    crc_length: Option<u32>,
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
///
/// The TOML format is:
/// ```toml
/// [[pattern]]
/// name = "strlen"
/// bytes = "f30f1efa..."
/// mask = "ffffffffffff..."
/// length = 32
/// exact_length = 48
/// prologue_len = 4
/// crc16 = 0x1234
/// crc_offset = 8
/// crc_length = 24
/// ```
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
            // Default mask: all 0xFF (exact match for every byte)
            vec![0xFF; bytes.len()]
        };

        patterns.push(FlirtPattern {
            bytes,
            mask,
            name: p.name,
            length: p.length.unwrap_or(0),
            exact_length: p.exact_length.unwrap_or(0),
            prologue_len: p.prologue_len.unwrap_or(0),
            crc16: p.crc16.unwrap_or(0),
            crc_offset: p.crc_offset.unwrap_or(0),
            crc_length: p.crc_length.unwrap_or(0),
        });
    }

    debug!("loaded {} FLIRT patterns", patterns.len());
    Ok(FlirtDb { patterns })
}

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

impl FlirtPattern {
    /// Check whether this pattern matches the given function bytes.
    pub fn matches(&self, func_bytes: &[u8]) -> bool {
        // Length-prefixed records require an exact function-byte length.
        if self.exact_length > 0 && (func_bytes.len() as u32) != self.exact_length {
            return false;
        }

        // Legacy `length` remains a minimum length check.
        if self.length > 0 && (func_bytes.len() as u32) < self.length {
            return false;
        }

        let aligned = self.prologue_len as usize;
        if func_bytes.len() < aligned {
            return false;
        }
        let cmp_bytes = &func_bytes[aligned..];

        // Aligned byte pattern check.
        if cmp_bytes.len() < self.bytes.len() {
            return false;
        }

        for (i, (&pat, &mask)) in self.bytes.iter().zip(self.mask.iter()).enumerate() {
            if (cmp_bytes[i] & mask) != (pat & mask) {
                return false;
            }
        }

        // CRC check (if specified). CRC offsets are relative to the full
        // function, matching length-prefixed FLIRT records and preserving
        // existing TOML behavior.
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

    /// Append all patterns from another database, preserving match order.
    pub fn extend(&mut self, other: FlirtDb) {
        self.patterns.extend(other.patterns);
    }

    /// Number of patterns in the database.
    pub fn len(&self) -> usize {
        self.patterns.len()
    }

    /// Whether the database contains no patterns.
    pub fn is_empty(&self) -> bool {
        self.patterns.is_empty()
    }

    /// Match a single function's bytes against all patterns, returning the first match.
    pub fn match_bytes(&self, addr: u64, func_bytes: &[u8]) -> Option<FlirtMatch> {
        for (idx, pattern) in self.patterns.iter().enumerate() {
            if pattern.matches(func_bytes) {
                return Some(FlirtMatch {
                    addr,
                    name: pattern.name.clone(),
                    pattern_index: idx,
                });
            }
        }
        None
    }
}

/// Represents a function's raw bytes for matching purposes.
pub struct FunctionBytes {
    pub addr: u64,
    pub bytes: Vec<u8>,
}

/// Match a set of function byte ranges against a FLIRT database.
///
/// Returns all successful matches.
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
        // Default mask should be all 0xFF
        assert_eq!(db.patterns[1].mask, vec![0xff, 0xff, 0xff, 0xff]);
    }

    #[test]
    fn test_pattern_matching_exact() {
        let pattern = FlirtPattern {
            bytes: vec![0xFF, 0x25, 0x00, 0x00],
            mask: vec![0xFF, 0xFF, 0x00, 0x00],
            name: "plt_stub".to_string(),
            length: 0,
            exact_length: 0,
            prologue_len: 0,
            crc16: 0,
            crc_offset: 0,
            crc_length: 0,
        };

        // Should match: first two bytes exact, last two wildcarded
        assert!(pattern.matches(&[0xFF, 0x25, 0xAB, 0xCD, 0x00, 0x00]));
        // Should fail: first byte wrong
        assert!(!pattern.matches(&[0xFE, 0x25, 0xAB, 0xCD, 0x00, 0x00]));
        // Should fail: too short
        assert!(!pattern.matches(&[0xFF, 0x25]));
    }

    #[test]
    fn test_crc16_verification() {
        let data = b"Hello, FLIRT!";
        let crc = crc16_ccitt(data);

        let pattern = FlirtPattern {
            bytes: vec![0x48], // just match 'H'
            mask: vec![0xFF],
            name: "hello_func".to_string(),
            length: 0,
            exact_length: 0,
            prologue_len: 0,
            crc16: crc,
            crc_offset: 0,
            crc_length: data.len() as u32,
        };

        assert!(pattern.matches(data));
        // Wrong data should fail CRC
        let mut bad_data = data.to_vec();
        bad_data[5] = 0x00;
        assert!(!pattern.matches(&bad_data));
    }

    #[test]
    fn test_prologue_alignment_matches_after_entry_bytes() {
        let pattern = FlirtPattern {
            bytes: vec![0x48, 0x89, 0xD8, 0xC3],
            mask: vec![0xFF, 0xFF, 0xFF, 0xFF],
            name: "aligned_body".to_string(),
            length: 0,
            exact_length: 0,
            prologue_len: 4,
            crc16: 0,
            crc_offset: 0,
            crc_length: 0,
        };

        assert!(pattern.matches(&[0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xD8, 0xC3]));
        assert!(!pattern.matches(&[0x55, 0x48, 0x89, 0xE5, 0x90, 0x89, 0xD8, 0xC3]));
        assert!(!pattern.matches(&[0x55, 0x48]));
    }

    #[test]
    fn test_length_prefixed_exact_match() {
        let pattern = FlirtPattern {
            bytes: vec![0x48, 0x31, 0xC0],
            mask: vec![0xFF, 0xFF, 0xFF],
            name: "exact_len".to_string(),
            length: 0,
            exact_length: 4,
            prologue_len: 0,
            crc16: 0,
            crc_offset: 0,
            crc_length: 0,
        };

        assert!(pattern.matches(&[0x48, 0x31, 0xC0, 0xC3]));
        assert!(!pattern.matches(&[0x48, 0x31, 0xC0]));
        assert!(!pattern.matches(&[0x48, 0x31, 0xC0, 0xC3, 0x90]));
    }

    #[test]
    fn test_load_patterns_with_alignment_and_exact_length() {
        let toml = r#"
[[pattern]]
name = "body_after_prologue"
bytes = "4889d8c3"
prologue_len = 4
exact_length = 8
"#;
        let db = load_patterns_from_toml_str(toml).unwrap();
        let pat = &db.patterns[0];
        assert_eq!(pat.prologue_len, 4);
        assert_eq!(pat.exact_length, 8);
        assert!(pat.matches(&[0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xD8, 0xC3]));
    }

    #[test]
    fn test_match_functions_batch() {
        let db = FlirtDb {
            patterns: vec![
                FlirtPattern {
                    bytes: vec![0xFF, 0x25],
                    mask: vec![0xFF, 0xFF],
                    name: "plt_jump".to_string(),
                    length: 0,
                    exact_length: 0,
                    prologue_len: 0,
                    crc16: 0,
                    crc_offset: 0,
                    crc_length: 0,
                },
                FlirtPattern {
                    bytes: vec![0xF3, 0x0F, 0x1E, 0xFA],
                    mask: vec![0xFF, 0xFF, 0xFF, 0xFF],
                    name: "endbr64_func".to_string(),
                    length: 0,
                    exact_length: 0,
                    prologue_len: 0,
                    crc16: 0,
                    crc_offset: 0,
                    crc_length: 0,
                },
            ],
        };

        let functions = vec![
            FunctionBytes {
                addr: 0x1000,
                bytes: vec![0xFF, 0x25, 0x12, 0x34, 0x56, 0x78],
            },
            FunctionBytes {
                addr: 0x2000,
                bytes: vec![0xF3, 0x0F, 0x1E, 0xFA, 0x55, 0x48],
            },
            FunctionBytes {
                addr: 0x3000,
                bytes: vec![0x90, 0x90, 0x90], // NOP sled, no match
            },
        ];

        let matches = match_functions(&db, &functions);
        assert_eq!(matches.len(), 2);
        assert_eq!(matches[0].addr, 0x1000);
        assert_eq!(matches[0].name, "plt_jump");
        assert_eq!(matches[1].addr, 0x2000);
        assert_eq!(matches[1].name, "endbr64_func");
    }
}
