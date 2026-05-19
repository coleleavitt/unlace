//! `.unldb` on-disk database format.
//!
//! Format layout:
//! ```text
//! offset  size   field
//! 0       8      magic "UNLDB\0\0\0"
//! 8       4      format_version u32 (little-endian)
//! 12      4      unlace_version_len u32
//! 16      N      unlace_version bytes (UTF-8)
//! 16+N    32     original_binary_sha256
//! 48+N    -      sections... (until EOF)
//! ```
//!
//! Each section:
//! ```text
//! 4   name_len u32
//! N   name bytes
//! 8   payload_len u64 (compressed size)
//! M   zstd-compressed bincode payload
//! ```
//!
//! Sections defined so far:
//! - "annotations" — `Annotations` struct
//! - "selection"   — `Selection` struct
//!
//! Future sections (reserved):
//! - "ssa_functions" — per-function lazy SSA cache
//! - "analysis_cache" — KnownBits / MemorySSA outputs
//! - "hir_cache" — structured output cache

use std::fs::File;
use std::io::{Read, Write};
use std::path::Path;

use anyhow::{Context, Result, anyhow, bail};
use serde::Serialize;

use crate::{Annotations, Selection, Session};

/// Magic bytes at the start of every `.unldb` file.
pub const MAGIC: &[u8; 8] = b"UNLDB\0\0\0";

/// Current format version. Bump when adding/changing sections.
pub const CURRENT_VERSION: u32 = 1;

/// On-disk header (after the magic).
#[derive(Debug, Clone)]
pub struct DbHeader {
    pub format_version: u32,
    pub unlace_version: String,
    pub original_binary_sha256: [u8; 32],
}

/// On-disk section.
#[derive(Debug, Clone)]
pub struct DbSection {
    pub name: String,
    pub compressed_payload: Vec<u8>,
}

/// Save a session to a `.unldb` file.
///
/// Refuses to save if no binary is loaded (no SHA to bind to).
pub fn save_to(session: &Session, path: impl AsRef<Path>) -> Result<()> {
    let path = path.as_ref();
    let sha = session
        .binary_sha256()
        .ok_or_else(|| anyhow!("cannot save: no binary loaded"))?;

    let mut file = File::create(path).context("creating .unldb file")?;

    // Header
    file.write_all(MAGIC)?;
    file.write_all(&CURRENT_VERSION.to_le_bytes())?;
    let version_str = env!("CARGO_PKG_VERSION");
    file.write_all(&(version_str.len() as u32).to_le_bytes())?;
    file.write_all(version_str.as_bytes())?;
    file.write_all(&sha)?;

    // Sections
    write_section(&mut file, "annotations", &session.annotations())?;
    write_section(&mut file, "selection", &session.selection())?;

    Ok(())
}

/// Load a session from a `.unldb` file.
///
/// Returns the deserialized `Annotations` + `Selection` and the SHA256 of
/// the binary the database was bound to. The caller must verify that the
/// SHA matches the currently-loaded binary before applying the
/// annotations (use `verify_against` for that).
pub fn load_from(path: impl AsRef<Path>) -> Result<DbContents> {
    let path = path.as_ref();
    let mut file = File::open(path).context("opening .unldb file")?;
    let mut buf = Vec::new();
    file.read_to_end(&mut buf)?;

    parse(&buf)
}

/// Parsed contents of a `.unldb` file.
#[derive(Debug, Clone)]
pub struct DbContents {
    pub header: DbHeader,
    pub annotations: Annotations,
    pub selection: Selection,
}

impl DbContents {
    /// Verify the database was generated against a binary with the given SHA.
    pub fn verify_against(&self, sha: &[u8; 32]) -> Result<()> {
        if &self.header.original_binary_sha256 != sha {
            bail!(
                "binary SHA mismatch: database was built against {}, current binary is {}",
                hex(&self.header.original_binary_sha256),
                hex(sha)
            );
        }
        Ok(())
    }

    /// Apply the contents to a session that already has the matching binary loaded.
    pub fn apply_to(&self, session: &Session) -> Result<()> {
        if let Some(sha) = session.binary_sha256() {
            self.verify_against(&sha)?;
        }
        for (_, r) in &self.annotations.renames {
            session.rename(r.clone());
        }
        for (_, c) in &self.annotations.comments {
            session.add_comment(c.clone());
        }
        for (_, t) in &self.annotations.types {
            session.set_type(t.clone());
        }
        for (_, b) in &self.annotations.bookmarks {
            session.add_bookmark(b.clone());
        }
        for (_, p) in &self.annotations.patches {
            session.add_patch(p.clone());
        }
        session.set_selection(self.selection);
        Ok(())
    }
}

fn parse(bytes: &[u8]) -> Result<DbContents> {
    if bytes.len() < 8 + 4 + 4 {
        bail!("file too short");
    }
    if &bytes[..8] != MAGIC {
        bail!("bad magic: not a .unldb file");
    }
    let mut pos = 8usize;

    let format_version =
        u32::from_le_bytes(bytes[pos..pos + 4].try_into().unwrap());
    pos += 4;
    if format_version > CURRENT_VERSION {
        bail!(
            "unsupported format version: db is v{format_version}, unlace supports up to v{CURRENT_VERSION}"
        );
    }

    let version_len =
        u32::from_le_bytes(bytes[pos..pos + 4].try_into().unwrap()) as usize;
    pos += 4;
    if pos + version_len > bytes.len() {
        bail!("malformed header: version string overflow");
    }
    let unlace_version =
        String::from_utf8(bytes[pos..pos + version_len].to_vec())?;
    pos += version_len;

    if pos + 32 > bytes.len() {
        bail!("malformed header: missing SHA256");
    }
    let mut sha = [0u8; 32];
    sha.copy_from_slice(&bytes[pos..pos + 32]);
    pos += 32;

    let header = DbHeader {
        format_version,
        unlace_version,
        original_binary_sha256: sha,
    };

    let mut annotations: Option<Annotations> = None;
    let mut selection: Option<Selection> = None;

    while pos < bytes.len() {
        let (section, consumed) = parse_section(&bytes[pos..])?;
        pos += consumed;
        let decompressed = zstd::decode_all(&section.compressed_payload[..])
            .context("zstd decompression failed")?;
        match section.name.as_str() {
            "annotations" => {
                let (val, _): (Annotations, _) = bincode::serde::decode_from_slice(
                    &decompressed,
                    bincode::config::standard(),
                )?;
                annotations = Some(val);
            }
            "selection" => {
                let (val, _): (Selection, _) = bincode::serde::decode_from_slice(
                    &decompressed,
                    bincode::config::standard(),
                )?;
                selection = Some(val);
            }
            _other => {
                tracing::debug!("skipping unknown section: {}", section.name);
            }
        }
    }

    Ok(DbContents {
        header,
        annotations: annotations.unwrap_or_default(),
        selection: selection.unwrap_or_default(),
    })
}

fn parse_section(bytes: &[u8]) -> Result<(DbSection, usize)> {
    if bytes.len() < 4 {
        bail!("section truncated: missing name_len");
    }
    let name_len = u32::from_le_bytes(bytes[..4].try_into().unwrap()) as usize;
    let mut pos = 4;
    if pos + name_len > bytes.len() {
        bail!("section truncated: name overflow");
    }
    let name = String::from_utf8(bytes[pos..pos + name_len].to_vec())?;
    pos += name_len;
    if pos + 8 > bytes.len() {
        bail!("section truncated: missing payload_len");
    }
    let payload_len = u64::from_le_bytes(bytes[pos..pos + 8].try_into().unwrap()) as usize;
    pos += 8;
    if pos + payload_len > bytes.len() {
        bail!("section truncated: payload overflow");
    }
    let compressed_payload = bytes[pos..pos + payload_len].to_vec();
    pos += payload_len;
    Ok((
        DbSection {
            name,
            compressed_payload,
        },
        pos,
    ))
}

fn write_section<T: Serialize>(file: &mut File, name: &str, value: &T) -> Result<()> {
    let encoded = bincode::serde::encode_to_vec(value, bincode::config::standard())?;
    let compressed = zstd::encode_all(&encoded[..], 3)?;
    file.write_all(&(name.len() as u32).to_le_bytes())?;
    file.write_all(name.as_bytes())?;
    file.write_all(&(compressed.len() as u64).to_le_bytes())?;
    file.write_all(&compressed)?;
    Ok(())
}

fn hex(bytes: &[u8]) -> String {
    let mut s = String::with_capacity(bytes.len() * 2);
    for b in bytes {
        s.push_str(&format!("{:02x}", b));
    }
    s
}

/// Inspect a `.unldb` file: print header + section list. Used by
/// `unlace db inspect`.
pub fn inspect(path: impl AsRef<Path>) -> Result<String> {
    let path = path.as_ref();
    let bytes = std::fs::read(path)?;
    if bytes.len() < 8 || &bytes[..8] != MAGIC {
        bail!("not a .unldb file");
    }
    let contents = parse(&bytes)?;
    let mut out = String::new();
    out.push_str(&format!("File:             {}\n", path.display()));
    out.push_str(&format!("Size:             {} bytes\n", bytes.len()));
    out.push_str(&format!(
        "Format version:   v{}\n",
        contents.header.format_version
    ));
    out.push_str(&format!(
        "Unlace version:   {}\n",
        contents.header.unlace_version
    ));
    out.push_str(&format!(
        "Binary SHA256:    {}\n",
        hex(&contents.header.original_binary_sha256)
    ));
    out.push_str(&format!(
        "Annotations:      {} renames, {} comments, {} types, {} bookmarks, {} patches\n",
        contents.annotations.renames.len(),
        contents.annotations.comments.len(),
        contents.annotations.types.len(),
        contents.annotations.bookmarks.len(),
        contents.annotations.patches.len(),
    ));
    Ok(out)
}

#[cfg(test)]
mod tests {
    use std::sync::Arc;

    use parking_lot::RwLock;

    use super::*;
    use crate::{Bookmark, Comment, Rename, SessionInner};

    /// Build a session populated with a synthetic SHA + annotations (no real
    /// binary load required for round-trip tests).
    fn synthetic_session() -> Session {
        let s = Session::new();
        // Hand-set the SHA so save_to() doesn't refuse.
        {
            // We need direct access to SessionInner; reach in via a fresh
            // construction.
            let new_inner = SessionInner {
                binary: None,
                binary_path: Some(std::path::PathBuf::from("/synthetic")),
                binary_sha256: Some([0x42u8; 32]),
                annotations: crate::Annotations::default(),
                selection: crate::Selection::default(),
                listeners: Vec::new(),
            };
            *s.inner.write() = new_inner;
        }
        s
    }

    #[test]
    fn test_db_round_trip_empty() {
        let s = synthetic_session();
        let tmp = tempfile_path("empty.unldb");
        save_to(&s, &tmp).expect("save");
        let c = load_from(&tmp).expect("load");
        assert_eq!(c.header.format_version, CURRENT_VERSION);
        assert_eq!(c.header.original_binary_sha256, [0x42u8; 32]);
        assert_eq!(c.annotations.renames.len(), 0);
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_db_round_trip_with_annotations() {
        let s = synthetic_session();
        s.rename(Rename {
            ea: 0x401000,
            old_name: "sub_401000".into(),
            new_name: "main".into(),
        });
        s.add_comment(Comment {
            ea: 0x401020,
            text: "loop start".into(),
            repeatable: false,
        });
        s.add_bookmark(Bookmark {
            ea: 0x401040,
            title: "interesting".into(),
            description: "".into(),
        });

        let tmp = tempfile_path("ann.unldb");
        save_to(&s, &tmp).expect("save");
        let c = load_from(&tmp).expect("load");
        assert_eq!(c.annotations.renames.len(), 1);
        assert_eq!(c.annotations.renames[&0x401000].new_name, "main");
        assert_eq!(c.annotations.comments.len(), 1);
        assert_eq!(c.annotations.bookmarks.len(), 1);
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_db_verify_against_correct_sha() {
        let s = synthetic_session();
        let tmp = tempfile_path("verify.unldb");
        save_to(&s, &tmp).expect("save");
        let c = load_from(&tmp).expect("load");
        assert!(c.verify_against(&[0x42u8; 32]).is_ok());
        assert!(c.verify_against(&[0u8; 32]).is_err());
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_db_apply_to_session() {
        // Save from one session, load into another, verify state copies.
        let s1 = synthetic_session();
        s1.rename(Rename {
            ea: 0x100,
            old_name: "a".into(),
            new_name: "b".into(),
        });
        let tmp = tempfile_path("apply.unldb");
        save_to(&s1, &tmp).expect("save");

        let s2 = synthetic_session();
        let c = load_from(&tmp).expect("load");
        c.apply_to(&s2).expect("apply");
        assert_eq!(s2.annotations().renames.len(), 1);
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_db_rejects_bad_magic() {
        let tmp = tempfile_path("bad.unldb");
        // 24+ bytes so the length check passes and we hit the magic check.
        let mut buf = vec![0u8; 64];
        buf[..8].copy_from_slice(b"\x7fELFNOTU"); // wrong magic
        std::fs::write(&tmp, &buf).unwrap();
        let err = load_from(&tmp).unwrap_err();
        let msg = err.to_string();
        assert!(
            msg.contains("bad magic") || msg.contains("not a .unldb"),
            "got: {msg}"
        );
        std::fs::remove_file(&tmp).ok();
    }

    #[test]
    fn test_db_inspect_reports_header() {
        let s = synthetic_session();
        s.rename(Rename {
            ea: 0,
            old_name: "x".into(),
            new_name: "y".into(),
        });
        let tmp = tempfile_path("inspect.unldb");
        save_to(&s, &tmp).expect("save");
        let report = inspect(&tmp).expect("inspect");
        assert!(report.contains("Format version:   v1"));
        assert!(report.contains("1 renames"));
        std::fs::remove_file(&tmp).ok();
    }

    fn tempfile_path(name: &str) -> std::path::PathBuf {
        let dir = std::env::temp_dir();
        dir.join(format!("unlace_db_test_{}_{}", std::process::id(), name))
    }
}
