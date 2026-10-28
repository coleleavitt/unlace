//! Persistent .unlace project file format (Batch 24).
//!
//! Stores all user annotations, renames, type definitions, and analysis
//! state in a single JSON file that can be shared and version-controlled.
//! Schema is forward-compatible: new fields use `#[serde(default)]` so old
//! project files still load.
//!
//! Workflow:
//!
//! ```rust,ignore
//! let mut proj = ProjectFile::new("/path/to/binary.elf", &sha256);
//! proj.rename(0x401000, "main");
//! proj.save_to(Path::new("/path/to/project.unlace"))?;
//! // Later:
//! let recovered = ProjectFile::load_from(Path::new("/path/to/project.unlace"))?;
//! // Apply to an in-memory image/SSA:
//! recovered.apply_renames_to(&mut symbols);
//! ```

use serde::{Deserialize, Serialize};
use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

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
    /// User-defined function boundaries: addr → (size, optional name).
    /// Lets users carve out functions the discoverer missed.
    #[serde(default)]
    pub function_boundaries: BTreeMap<u64, FunctionBoundary>,
    /// Per-annotation provenance — distinguishes user-authored overrides
    /// from imported sources (DWARF, FLIRT, Lumina, plugin).
    /// Keyed by the same address used in `renames`/`comments`/etc.
    #[serde(default)]
    pub annotation_sources: BTreeMap<u64, AnnotationSource>,
    /// Compact analysis cache: SSA + structuring fingerprints that
    /// downstream tooling can use to skip re-analysis when the input hasn't
    /// changed. Optional; absent on a freshly created project.
    #[serde(default)]
    pub analysis_cache: Option<AnalysisCache>,
}

/// User-carved function boundary.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct FunctionBoundary {
    /// Length of the function in bytes.
    pub size: u64,
    /// Optional name override (separate from `renames` so a function can be
    /// carved out without giving it a name).
    pub name: Option<String>,
}

/// Where an annotation originated. Lets the CLI/UI distinguish "user
/// renamed this" from "DWARF said so" so future reanalysis doesn't trample
/// user choices.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub enum AnnotationSource {
    /// Hand-edited by the user (default for `rename`/`comment` calls).
    User,
    /// Came from DWARF/PDB debug info.
    Debug,
    /// Came from a FLIRT/SIG match.
    Flirt,
    /// Came from the Lumina-style shared annotation pool.
    Lumina,
    /// Pushed in by a plugin.
    Plugin,
}

/// Lightweight analysis-cache header so callers can decide whether to
/// invalidate. Holds the hash of the binary and the analysis configuration
/// that produced the cache.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct AnalysisCache {
    pub binary_sha256: String,
    pub pipeline_revision: u32,
    pub function_count: u32,
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

/// Top-level error type for project I/O.
#[derive(Debug)]
pub enum ProjectError {
    Io(PathBuf, std::io::Error),
    Parse(String),
    Sha256Mismatch {
        path: PathBuf,
        expected: String,
        actual: String,
    },
}

impl std::fmt::Display for ProjectError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            ProjectError::Io(path, err) => write!(f, "I/O error on {}: {err}", path.display()),
            ProjectError::Parse(msg) => write!(f, "project parse failed: {msg}"),
            ProjectError::Sha256Mismatch {
                path,
                expected,
                actual,
            } => write!(
                f,
                "project sha256 mismatch — expected {expected}, got {actual} ({}); refusing to load",
                path.display()
            ),
        }
    }
}

impl std::error::Error for ProjectError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        match self {
            ProjectError::Io(_, err) => Some(err),
            _ => None,
        }
    }
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
            function_boundaries: BTreeMap::new(),
            annotation_sources: BTreeMap::new(),
            analysis_cache: None,
        }
    }

    /// Save the project to a file. Writes pretty-printed JSON. Atomic via
    /// a `<dest>.tmp` write + rename so a crash during save can't corrupt
    /// the existing file.
    pub fn save_to(&self, dest: &Path) -> Result<(), ProjectError> {
        let json = self.to_json();
        let tmp_path: PathBuf = match dest.extension() {
            Some(ext) => {
                let mut p = dest.to_path_buf();
                p.set_extension(format!("{}.tmp", ext.to_string_lossy()));
                p
            }
            None => {
                let mut p = dest.to_path_buf();
                p.set_extension("tmp");
                p
            }
        };
        std::fs::write(&tmp_path, &json).map_err(|e| ProjectError::Io(tmp_path.clone(), e))?;
        std::fs::rename(&tmp_path, dest).map_err(|e| ProjectError::Io(dest.to_path_buf(), e))?;
        Ok(())
    }

    /// Load a project file from disk.
    pub fn load_from(src: &Path) -> Result<Self, ProjectError> {
        let body =
            std::fs::read_to_string(src).map_err(|e| ProjectError::Io(src.to_path_buf(), e))?;
        Self::from_json(&body).map_err(ProjectError::Parse)
    }

    /// Load a project file and reject it if its `binary_sha256` does not
    /// match the live binary's SHA-256. Use this when the project will be
    /// applied to a freshly loaded binary so a stale project doesn't
    /// silently corrupt analysis of a different version.
    pub fn load_and_verify(src: &Path, live_sha256: &str) -> Result<Self, ProjectError> {
        let proj = Self::load_from(src)?;
        if proj.binary_sha256 != live_sha256 {
            return Err(ProjectError::Sha256Mismatch {
                path: src.to_path_buf(),
                expected: proj.binary_sha256,
                actual: live_sha256.to_string(),
            });
        }
        Ok(proj)
    }

    /// Apply this project's `renames` to a symbol-table map.
    /// Renames take precedence over the existing entry (user > debug).
    pub fn apply_renames_to(&self, symbols: &mut BTreeMap<u64, String>) -> usize {
        let mut applied = 0;
        for (&addr, name) in &self.renames {
            symbols.insert(addr, name.clone());
            applied += 1;
        }
        applied
    }

    /// Mark `addr`'s annotation as coming from `source`. Defaults to
    /// `AnnotationSource::User` when not explicitly recorded.
    pub fn record_source(&mut self, addr: u64, source: AnnotationSource) {
        self.annotation_sources.insert(addr, source);
    }

    /// Look up the source of the annotation at `addr`; `User` by default.
    pub fn source_of(&self, addr: u64) -> AnnotationSource {
        self.annotation_sources
            .get(&addr)
            .copied()
            .unwrap_or(AnnotationSource::User)
    }

    /// Carve out a user-defined function boundary.
    pub fn carve_function(&mut self, addr: u64, size: u64, name: Option<&str>) {
        self.function_boundaries.insert(
            addr,
            FunctionBoundary {
                size,
                name: name.map(|s| s.to_string()),
            },
        );
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
        self.bookmarks.push(Bookmark {
            addr,
            label: label.into(),
            color: None,
        });
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
        proj.type_overrides.insert(
            0x1000,
            TypeOverride {
                type_name: "char*".into(),
                is_pointer: true,
                array_size: None,
            },
        );
        let json = proj.to_json();
        let r = ProjectFile::from_json(&json).unwrap();
        assert_eq!(r.type_overrides[&0x1000].type_name, "char*");
    }

    /// Round-trip a project through `save_to`/`load_from` on disk.
    #[test]
    fn save_and_load_round_trips_through_disk() {
        let mut proj = ProjectFile::new("/tmp/example.elf", "deadbeef");
        proj.rename(0x401000, "main");
        proj.comment(0x401010, "hot path");
        proj.carve_function(0x401200, 128, Some("hidden_helper"));
        proj.record_source(0x401000, AnnotationSource::User);

        let dir = tempfile::tempdir().expect("tempdir");
        let tmp = dir.path().join("unlace_project_test.unlace");
        proj.save_to(&tmp).expect("save");

        let recovered = ProjectFile::load_from(&tmp).expect("load");

        assert_eq!(recovered, proj);
        assert_eq!(recovered.source_of(0x401000), AnnotationSource::User);
        assert_eq!(recovered.function_boundaries[&0x401200].size, 128,);
    }

    /// `load_and_verify` rejects a project whose recorded SHA doesn't
    /// match the live binary.
    #[test]
    fn load_and_verify_rejects_mismatched_sha() {
        let proj = ProjectFile::new("/tmp/example.elf", "deadbeef");
        let dir = tempfile::tempdir().expect("tempdir");
        let tmp = dir.path().join("unlace_project_sha_test.unlace");
        proj.save_to(&tmp).expect("save");

        let err = ProjectFile::load_and_verify(&tmp, "cafebabe").expect_err("must reject");
        assert!(
            matches!(err, ProjectError::Sha256Mismatch { .. }),
            "wrong error variant: {err:?}"
        );
    }

    #[test]
    fn apply_renames_overwrites_existing_symbol_entries() {
        let mut proj = ProjectFile::new("x", "y");
        proj.rename(0x1000, "user_chosen_name");
        let mut symbols = BTreeMap::new();
        symbols.insert(0x1000, "imported_name".to_string());
        let applied = proj.apply_renames_to(&mut symbols);
        assert_eq!(applied, 1);
        assert_eq!(symbols[&0x1000], "user_chosen_name");
    }

    /// BATCH24 Definition of Done: a user can rename a *function*, *variable*,
    /// and *type*, save the project, rerun analysis (re-loading the project),
    /// and find all three edits intact. This exercises the full
    /// rename → persist → reanalyse loop end-to-end.
    #[test]
    fn rename_function_variable_and_type_survives_save_load_rerun() {
        let mut proj = ProjectFile::new("/tmp/dod.elf", "feedface");
        // Function rename.
        proj.rename(0x401000, "main");
        proj.record_source(0x401000, AnnotationSource::User);
        // Variable rename (stack var at function-local offset).
        proj.rename(0x401040, "user_input_buf");
        proj.record_source(0x401040, AnnotationSource::User);
        // Type override on a global.
        proj.type_overrides.insert(
            0x402000,
            TypeOverride {
                type_name: "session_t".into(),
                is_pointer: true,
                array_size: None,
            },
        );

        let dir = tempfile::tempdir().expect("tempdir");
        let tmp = dir.path().join("unlace_dod_rerun.unlace");
        proj.save_to(&tmp).expect("save");

        // Simulate "rerun analysis": re-load the project as a fresh
        // pipeline would, then apply edits onto a freshly populated
        // symbol table (as if the analyser had just re-discovered names).
        let recovered = ProjectFile::load_and_verify(&tmp, "feedface").expect("load");

        let mut fresh_symbols: BTreeMap<u64, String> = BTreeMap::new();
        fresh_symbols.insert(0x401000, "sub_401000".into());
        fresh_symbols.insert(0x401040, "v1".into());
        let applied = recovered.apply_renames_to(&mut fresh_symbols);
        assert_eq!(applied, 2);
        assert_eq!(fresh_symbols[&0x401000], "main");
        assert_eq!(fresh_symbols[&0x401040], "user_input_buf");
        assert_eq!(recovered.type_overrides[&0x402000].type_name, "session_t");
        assert_eq!(recovered.source_of(0x401000), AnnotationSource::User);
        assert_eq!(recovered.source_of(0x401040), AnnotationSource::User);
    }

    /// BATCH24 invariant: applying a project's renames is idempotent and
    /// deterministic regardless of insertion order — the BTreeMap-backed
    /// storage guarantees a stable iteration order so two rerun cycles
    /// observe byte-identical output.
    #[test]
    fn apply_renames_is_deterministic_across_reruns() {
        let mut proj = ProjectFile::new("x", "y");
        // Insert in a deliberately scrambled order.
        proj.rename(0x4030, "g");
        proj.rename(0x4010, "a");
        proj.rename(0x4020, "f");
        proj.rename(0x4000, "main");

        // Rerun 1.
        let mut syms_a: BTreeMap<u64, String> = BTreeMap::new();
        proj.apply_renames_to(&mut syms_a);
        // Rerun 2 (different starting state — apply should converge).
        let mut syms_b: BTreeMap<u64, String> = BTreeMap::new();
        syms_b.insert(0x4000, "stub".into());
        proj.apply_renames_to(&mut syms_b);

        assert_eq!(syms_a, syms_b);
        // Round-trip through JSON and re-apply: same result.
        let json = proj.to_json();
        let reloaded = ProjectFile::from_json(&json).unwrap();
        let mut syms_c: BTreeMap<u64, String> = BTreeMap::new();
        reloaded.apply_renames_to(&mut syms_c);
        assert_eq!(syms_a, syms_c);
    }

    /// Schema is forward-compatible: a project saved with v1 fields only
    /// (no `annotation_sources`, no `function_boundaries`) must still
    /// deserialise.
    #[test]
    fn old_schema_loads_with_default_new_fields() {
        let json = r#"{
            "version": 1,
            "binary_path": "/tmp/old.elf",
            "binary_sha256": "ff",
            "renames": {},
            "comments": {},
            "type_overrides": {},
            "bookmarks": [],
            "tags": {}
        }"#;
        let proj = ProjectFile::from_json(json).expect("load");
        assert!(proj.annotation_sources.is_empty());
        assert!(proj.function_boundaries.is_empty());
        assert!(proj.analysis_cache.is_none());
    }
}
