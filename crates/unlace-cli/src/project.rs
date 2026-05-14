//! Persistent .unlace project file format (t447).
//!
//! Stores all user annotations, renames, type definitions, and analysis
//! state in a single JSON file that can be shared and version-controlled.

use serde::{Deserialize, Serialize};
use std::collections::BTreeMap;

/// The top-level .unlace project file.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct ProjectFile {
    pub version: u32,
    pub binary_path: String,
    pub binary_sha256: String,
    pub renames: BTreeMap<u64, String>,
    pub comments: BTreeMap<u64, String>,
    pub type_overrides: BTreeMap<u64, TypeOverride>,
    pub bookmarks: Vec<Bookmark>,
    pub tags: BTreeMap<String, Vec<u64>>,
}

/// A user-defined type override for a variable or return value.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct TypeOverride {
    pub type_name: String,
    pub is_pointer: bool,
    pub array_size: Option<usize>,
}

/// A bookmark marking an interesting address.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Bookmark {
    pub addr: u64,
    pub label: String,
    pub color: Option<String>,
}

impl ProjectFile {
    /// Create a new empty project for the given binary.
    pub fn new(binary_path: &str, sha256: &str) -> Self {
        Self {
            version: 1,
            binary_path: binary_path.to_string(),
            binary_sha256: sha256.to_string(),
            renames: BTreeMap::new(),
            comments: BTreeMap::new(),
            type_overrides: BTreeMap::new(),
            bookmarks: Vec::new(),
            tags: BTreeMap::new(),
        }
    }

    /// Serialize to JSON.
    pub fn to_json(&self) -> String {
        serde_json::to_string_pretty(self).unwrap_or_default()
    }

    /// Deserialize from JSON.
    pub fn from_json(s: &str) -> Result<Self, String> {
        serde_json::from_str(s).map_err(|e| e.to_string())
    }

    /// Add a function rename.
    pub fn rename(&mut self, addr: u64, name: &str) {
        self.renames.insert(addr, name.to_string());
    }

    /// Add a comment at an address.
    pub fn comment(&mut self, addr: u64, text: &str) {
        self.comments.insert(addr, text.to_string());
    }

    /// Add a bookmark.
    pub fn bookmark(&mut self, addr: u64, label: &str) {
        self.bookmarks.push(Bookmark { addr, label: label.into(), color: None });
    }

    /// Tag a set of addresses with a label.
    pub fn tag(&mut self, tag: &str, addr: u64) {
        self.tags.entry(tag.to_string()).or_default().push(addr);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn roundtrip_json() {
        let mut proj = ProjectFile::new("/tmp/test.bin", "abcd1234");
        proj.rename(0x401000, "main");
        proj.comment(0x401010, "entry point");
        proj.bookmark(0x401000, "start");
        proj.tag("crypto", 0x402000);

        let json = proj.to_json();
        let recovered = ProjectFile::from_json(&json).unwrap();
        assert_eq!(proj, recovered);
    }

    #[test]
    fn new_project_empty() {
        let proj = ProjectFile::new("test.bin", "hash");
        assert_eq!(proj.version, 1);
        assert!(proj.renames.is_empty());
        assert!(proj.bookmarks.is_empty());
    }

    #[test]
    fn multiple_tags() {
        let mut proj = ProjectFile::new("x", "y");
        proj.tag("vuln", 0x1000);
        proj.tag("vuln", 0x2000);
        proj.tag("crypto", 0x3000);
        assert_eq!(proj.tags["vuln"].len(), 2);
        assert_eq!(proj.tags["crypto"].len(), 1);
    }

    #[test]
    fn type_override() {
        let mut proj = ProjectFile::new("x", "y");
        proj.type_overrides.insert(0x1000, TypeOverride {
            type_name: "char*".into(), is_pointer: true, array_size: None,
        });
        let json = proj.to_json();
        let r = ProjectFile::from_json(&json).unwrap();
        assert_eq!(r.type_overrides[&0x1000].type_name, "char*");
    }
}
