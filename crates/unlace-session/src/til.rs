//! `.until` type-library format — unlace's TIL equivalent.
//!
//! Format spec: docs/until-format.md.
//!
//! On-disk layout:
//! ```text
//! offset  size   field
//! 0       8      magic "UNTIL\0\0\0"
//! 8       4      format_version u32 (little-endian)
//! 12      4      platform_str_len u32
//! 16      N      platform_str bytes (UTF-8, e.g. "linux-x86_64")
//! 16+N    -      sections... (until EOF)
//! ```
//!
//! Each section follows the same format as `.unldb` (name_len u32, name
//! bytes, payload_len u64, zstd-compressed bincode payload). Forward
//! compatibility: unknown sections are silently skipped on load.

use std::collections::BTreeMap;
use std::path::Path;

use anyhow::{Result, bail};
use serde::{Deserialize, Serialize};

pub const MAGIC: &[u8; 8] = b"UNTIL\0\0\0";
pub const CURRENT_VERSION: u32 = 1;

/// A function prototype — the most common entry in a TIL.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct FnPrototype {
    pub name: String,
    pub declaration: String,
    /// Calling convention (`cdecl`, `stdcall`, `fastcall`, etc.).
    pub calling_convention: String,
    /// Parameter names (for nicer pseudocode emission).
    pub params: Vec<String>,
}

/// A struct/union/enum field.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Field {
    pub name: String,
    pub type_decl: String,
    pub offset: u64,
    pub size: u64,
}

/// A typedef alias.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Typedef {
    pub name: String,
    pub target_type: String,
}

/// A record (struct or union).
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Record {
    pub name: String,
    pub is_union: bool,
    pub size: u64,
    pub alignment: u64,
    pub fields: Vec<Field>,
}

/// A complete `.until` file in memory.
#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct TilFile {
    pub platform: String,
    pub typedef_table: BTreeMap<String, Typedef>,
    pub struct_table: BTreeMap<String, Record>,
    pub union_table: BTreeMap<String, Record>,
    pub enum_table: BTreeMap<String, Vec<(String, i64)>>,
    pub fn_prototype_table: BTreeMap<String, FnPrototype>,
    pub macro_table: BTreeMap<String, String>,
}

impl TilFile {
    pub fn new(platform: impl Into<String>) -> Self {
        Self {
            platform: platform.into(),
            ..Default::default()
        }
    }

    /// Save to disk.
    pub fn save_to(&self, path: impl AsRef<Path>) -> Result<()> {
        let mut file = std::fs::File::create(path)?;
        use std::io::Write;
        file.write_all(MAGIC)?;
        file.write_all(&CURRENT_VERSION.to_le_bytes())?;
        file.write_all(&(self.platform.len() as u32).to_le_bytes())?;
        file.write_all(self.platform.as_bytes())?;
        write_section(&mut file, "typedef_table", &self.typedef_table)?;
        write_section(&mut file, "struct_table", &self.struct_table)?;
        write_section(&mut file, "union_table", &self.union_table)?;
        write_section(&mut file, "enum_table", &self.enum_table)?;
        write_section(&mut file, "fn_prototype_table", &self.fn_prototype_table)?;
        write_section(&mut file, "macro_table", &self.macro_table)?;
        Ok(())
    }

    /// Load from disk.
    pub fn load_from(path: impl AsRef<Path>) -> Result<Self> {
        let bytes = std::fs::read(path)?;
        Self::from_bytes(&bytes)
    }

    pub fn from_bytes(bytes: &[u8]) -> Result<Self> {
        if bytes.len() < 16 || &bytes[..8] != MAGIC {
            bail!("not a .until file");
        }
        let version = u32::from_le_bytes(bytes[8..12].try_into().unwrap());
        if version > CURRENT_VERSION {
            bail!("unsupported .until version: v{version}, current is v{CURRENT_VERSION}");
        }
        let platform_len = u32::from_le_bytes(bytes[12..16].try_into().unwrap()) as usize;
        let mut pos = 16;
        if pos + platform_len > bytes.len() {
            bail!("truncated platform string");
        }
        let platform = String::from_utf8(bytes[pos..pos + platform_len].to_vec())?;
        pos += platform_len;

        let mut til = TilFile::new(&platform);
        while pos < bytes.len() {
            let (section_name, payload, consumed) = parse_section(&bytes[pos..])?;
            pos += consumed;
            let decompressed = zstd::decode_all(&payload[..])?;
            match section_name.as_str() {
                "typedef_table" => {
                    let (v, _): (BTreeMap<String, Typedef>, _) = bincode::serde::decode_from_slice(
                        &decompressed,
                        bincode::config::standard(),
                    )?;
                    til.typedef_table = v;
                }
                "struct_table" => {
                    let (v, _): (BTreeMap<String, Record>, _) = bincode::serde::decode_from_slice(
                        &decompressed,
                        bincode::config::standard(),
                    )?;
                    til.struct_table = v;
                }
                "union_table" => {
                    let (v, _): (BTreeMap<String, Record>, _) = bincode::serde::decode_from_slice(
                        &decompressed,
                        bincode::config::standard(),
                    )?;
                    til.union_table = v;
                }
                "enum_table" => {
                    let (v, _): (BTreeMap<String, Vec<(String, i64)>>, _) =
                        bincode::serde::decode_from_slice(
                            &decompressed,
                            bincode::config::standard(),
                        )?;
                    til.enum_table = v;
                }
                "fn_prototype_table" => {
                    let (v, _): (BTreeMap<String, FnPrototype>, _) =
                        bincode::serde::decode_from_slice(
                            &decompressed,
                            bincode::config::standard(),
                        )?;
                    til.fn_prototype_table = v;
                }
                "macro_table" => {
                    let (v, _): (BTreeMap<String, String>, _) = bincode::serde::decode_from_slice(
                        &decompressed,
                        bincode::config::standard(),
                    )?;
                    til.macro_table = v;
                }
                _ => {
                    tracing::debug!(section = ?section_name, "ignoring unknown .until section");
                }
            }
        }
        Ok(til)
    }
}

fn write_section<T: Serialize>(file: &mut std::fs::File, name: &str, value: &T) -> Result<()> {
    use std::io::Write;
    let encoded = bincode::serde::encode_to_vec(value, bincode::config::standard())?;
    let compressed = zstd::encode_all(&encoded[..], 3)?;
    file.write_all(&(name.len() as u32).to_le_bytes())?;
    file.write_all(name.as_bytes())?;
    file.write_all(&(compressed.len() as u64).to_le_bytes())?;
    file.write_all(&compressed)?;
    Ok(())
}

fn parse_section(bytes: &[u8]) -> Result<(String, Vec<u8>, usize)> {
    if bytes.len() < 4 {
        bail!("truncated section header");
    }
    let name_len = u32::from_le_bytes(bytes[..4].try_into().unwrap()) as usize;
    let mut pos = 4;
    if pos + name_len > bytes.len() {
        bail!("section name overflow");
    }
    let name = String::from_utf8(bytes[pos..pos + name_len].to_vec())?;
    pos += name_len;
    if pos + 8 > bytes.len() {
        bail!("missing payload length");
    }
    let payload_len = u64::from_le_bytes(bytes[pos..pos + 8].try_into().unwrap()) as usize;
    pos += 8;
    if pos + payload_len > bytes.len() {
        bail!("payload overflow");
    }
    let payload = bytes[pos..pos + payload_len].to_vec();
    Ok((name, payload, pos + payload_len))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn fixture_til() -> TilFile {
        let mut til = TilFile::new("linux-x86_64");
        til.typedef_table.insert(
            "size_t".into(),
            Typedef {
                name: "size_t".into(),
                target_type: "unsigned long".into(),
            },
        );
        til.fn_prototype_table.insert(
            "puts".into(),
            FnPrototype {
                name: "puts".into(),
                declaration: "int puts(const char *s)".into(),
                calling_convention: "cdecl".into(),
                params: vec!["s".into()],
            },
        );
        til.struct_table.insert(
            "iovec".into(),
            Record {
                name: "iovec".into(),
                is_union: false,
                size: 16,
                alignment: 8,
                fields: vec![
                    Field {
                        name: "iov_base".into(),
                        type_decl: "void *".into(),
                        offset: 0,
                        size: 8,
                    },
                    Field {
                        name: "iov_len".into(),
                        type_decl: "size_t".into(),
                        offset: 8,
                        size: 8,
                    },
                ],
            },
        );
        til.enum_table.insert(
            "color".into(),
            vec![("RED".into(), 0), ("GREEN".into(), 1), ("BLUE".into(), 2)],
        );
        til
    }

    #[test]
    fn test_til_round_trip_disk() {
        let til = fixture_til();
        let tmp = std::env::temp_dir().join(format!("til_test_{}.until", std::process::id()));
        til.save_to(&tmp).expect("save");
        let loaded = TilFile::load_from(&tmp).expect("load");
        assert_eq!(loaded, til);
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_til_rejects_bad_magic() {
        let mut bytes = vec![0u8; 32];
        bytes[..8].copy_from_slice(b"NOTUNTIL");
        let err = TilFile::from_bytes(&bytes).unwrap_err();
        assert!(err.to_string().contains("not a .until"));
    }

    #[test]
    fn test_til_empty_file_works() {
        let til = TilFile::new("test");
        let tmp = std::env::temp_dir().join(format!("til_empty_{}.until", std::process::id()));
        til.save_to(&tmp).expect("save");
        let loaded = TilFile::load_from(&tmp).expect("load");
        assert_eq!(loaded.platform, "test");
        assert!(loaded.typedef_table.is_empty());
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_til_platform_string_preserved() {
        let til = TilFile::new("linux-aarch64");
        let bytes = {
            let tmp = std::env::temp_dir().join(format!("til_plat_{}.until", std::process::id()));
            til.save_to(&tmp).expect("save");
            let b = std::fs::read(&tmp).unwrap();
            std::fs::remove_file(&tmp).ok();
            b
        };
        let loaded = TilFile::from_bytes(&bytes).expect("load");
        assert_eq!(loaded.platform, "linux-aarch64");
    }

    #[test]
    fn test_til_version_check_rejects_future_versions() {
        let mut bytes = vec![0u8; 32];
        bytes[..8].copy_from_slice(MAGIC);
        bytes[8..12].copy_from_slice(&999u32.to_le_bytes());
        bytes[12..16].copy_from_slice(&0u32.to_le_bytes()); // empty platform
        let err = TilFile::from_bytes(&bytes).unwrap_err();
        assert!(err.to_string().contains("unsupported"));
    }

    #[test]
    fn test_til_function_prototype_lookup() {
        let til = fixture_til();
        assert!(til.fn_prototype_table.contains_key("puts"));
        let p = &til.fn_prototype_table["puts"];
        assert_eq!(p.calling_convention, "cdecl");
        assert_eq!(p.params, vec!["s".to_string()]);
    }
}
