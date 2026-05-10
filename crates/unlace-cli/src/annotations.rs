//! User-authored annotations persisted alongside a binary.
//!
//! The decompiler generates synthetic names (`sub_401000`, `v3`, …) and emits
//! purely mechanical output. Reverse engineers want to layer their own
//! understanding on top — function-level prose, per-instruction notes, custom
//! function names, bookmarks, and address ranges to hide. [`AnnotationDb`] is
//! the on-disk shape of that layer; it is loaded before printing and queried
//! by the C printer at every annotatable site.
//!
//! The default sidecar location is `<binary>.unlace.json`, mirroring how IDA
//! ships annotations alongside an `.idb`.

use std::collections::BTreeMap;
use std::fs;
use std::path::{Path, PathBuf};

use anyhow::{Context, Result};
use serde::{Deserialize, Serialize};

#[derive(Default, Serialize, Deserialize, Debug, Clone, PartialEq, Eq)]
pub struct AnnotationDb {
    /// Function-level prose, keyed by function entry address. Rendered as a
    /// `// …` comment immediately above the function header block.
    #[serde(default)]
    pub function_comments: BTreeMap<u64, String>,
    /// Per-instruction notes. Outer key is the function entry address;
    /// inner key is the instruction VA. Rendered as a `// …` comment on the
    /// line above the instruction.
    #[serde(default)]
    pub line_comments: BTreeMap<u64, BTreeMap<u64, String>>,
    /// Named bookmarks the user has dropped onto specific addresses.
    #[serde(default)]
    pub bookmarks: BTreeMap<u64, Bookmark>,
    /// `start → end` ranges the user wants suppressed from output. Currently
    /// stored only; the printer does not yet honour them.
    #[serde(default)]
    pub hidden_ranges: BTreeMap<u64, u64>,
    /// User-chosen names that override `sub_<addr>` synthesis.
    #[serde(default)]
    pub custom_names: BTreeMap<u64, String>,
}

#[derive(Serialize, Deserialize, Debug, Clone, PartialEq, Eq)]
pub struct Bookmark {
    pub addr: u64,
    pub label: String,
    pub note: String,
}

impl AnnotationDb {
    pub fn load(path: &Path) -> Result<Self> {
        let bytes = fs::read(path)
            .with_context(|| format!("failed to read annotations '{}'", path.display()))?;
        let db: AnnotationDb = serde_json::from_slice(&bytes)
            .with_context(|| format!("failed to parse annotations '{}'", path.display()))?;
        Ok(db)
    }

    pub fn save(&self, path: &Path) -> Result<()> {
        let bytes = serde_json::to_vec_pretty(self)
            .context("failed to serialize annotations")?;
        fs::write(path, bytes)
            .with_context(|| format!("failed to write annotations '{}'", path.display()))?;
        Ok(())
    }
}

/// Default sidecar path: `<binary>.unlace.json`.
pub fn default_path(binary_path: &Path) -> PathBuf {
    let mut s = binary_path.as_os_str().to_os_string();
    s.push(".unlace.json");
    PathBuf::from(s)
}

#[cfg(test)]
mod tests {
    use super::*;
    use tempfile::tempdir;

    fn sample_db() -> AnnotationDb {
        let mut db = AnnotationDb::default();
        db.function_comments.insert(0x1000, "entrypoint".into());
        let mut inner = BTreeMap::new();
        inner.insert(0x1004, "patched bug 421".into());
        db.line_comments.insert(0x1000, inner);
        db.custom_names.insert(0x1234, "my_func".into());
        db.bookmarks.insert(
            0x2000,
            Bookmark {
                addr: 0x2000,
                label: "crypto".into(),
                note: "AES key sched".into(),
            },
        );
        db.hidden_ranges.insert(0x3000, 0x3100);
        db
    }

    #[test]
    fn roundtrip_write_read() {
        let dir = tempdir().unwrap();
        let path = dir.path().join("a.json");
        let db = sample_db();
        db.save(&path).unwrap();
        let loaded = AnnotationDb::load(&path).unwrap();
        assert_eq!(db, loaded);
    }

    #[test]
    fn default_path_appends_sidecar_extension() {
        let p = Path::new("/tmp/foo.bin");
        assert_eq!(default_path(p), PathBuf::from("/tmp/foo.bin.unlace.json"));
    }

    #[test]
    fn empty_db_roundtrips() {
        let dir = tempdir().unwrap();
        let path = dir.path().join("e.json");
        let db = AnnotationDb::default();
        db.save(&path).unwrap();
        assert_eq!(AnnotationDb::load(&path).unwrap(), db);
    }
}
