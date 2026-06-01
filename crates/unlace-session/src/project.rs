//! Public `.unlace` project file format.
//!
//! `.unlace` is the default write format for user-visible project state.
//! `.unldb` remains readable through [`load_any`] as a legacy input.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use anyhow::{Context, Result, anyhow, bail};
use serde::{Deserialize, Serialize};

use crate::{
    Annotations, Bookmark, Comment, Patch, Rename, Selection, Session, TypeAnnotation, db, sha256,
};

pub const MAGIC: &str = "UNLACE_PROJECT";
pub const CURRENT_SCHEMA_VERSION: u32 = 1;

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct ProjectFile {
    pub magic: String,
    pub schema_version: u32,
    pub unlace_version: String,
    pub binary: ProjectBinary,
    pub annotations: ProjectAnnotations,
    pub selection: Selection,
    pub type_overlays: BTreeMap<u64, TypeAnnotation>,
    pub bookmarks: BTreeMap<u64, Bookmark>,
    pub patches: BTreeMap<u64, Patch>,
    #[serde(default)]
    pub analysis_summary: Option<AnalysisSummary>,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct ProjectBinary {
    pub path: Option<PathBuf>,
    pub sha256: String,
}

#[derive(Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct ProjectAnnotations {
    pub renames: BTreeMap<u64, Rename>,
    pub comments: BTreeMap<u64, Comment>,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct AnalysisSummary {
    pub function_count: u64,
    pub imported_symbol_count: u64,
    pub entry_point: Option<u64>,
}

#[derive(Clone, Debug)]
pub enum LoadedProject {
    Project(ProjectFile),
    LegacyUnldb(db::DbContents),
}

impl ProjectFile {
    pub fn new(binary_path: impl Into<PathBuf>, binary_sha256: impl Into<String>) -> Self {
        Self {
            magic: MAGIC.to_string(),
            schema_version: CURRENT_SCHEMA_VERSION,
            unlace_version: env!("CARGO_PKG_VERSION").to_string(),
            binary: ProjectBinary {
                path: Some(binary_path.into()),
                sha256: binary_sha256.into(),
            },
            annotations: ProjectAnnotations::default(),
            selection: Selection::default(),
            type_overlays: BTreeMap::new(),
            bookmarks: BTreeMap::new(),
            patches: BTreeMap::new(),
            analysis_summary: None,
        }
    }

    pub fn from_session(session: &Session) -> Result<Self> {
        let sha = session
            .binary_sha256()
            .ok_or_else(|| anyhow!("cannot create project: no binary SHA is available"))?;
        let annotations = session.annotations();
        let mut project = Self::new(session.binary_path().unwrap_or_default(), hex_bytes(&sha));
        project.annotations = ProjectAnnotations {
            renames: annotations.renames,
            comments: annotations.comments,
        };
        project.type_overlays = annotations.types;
        project.bookmarks = annotations.bookmarks;
        project.patches = annotations.patches;
        project.selection = session.selection();
        project.analysis_summary = session.with_binary(|image| AnalysisSummary {
            function_count: image.symbols.len() as u64,
            imported_symbol_count: 0,
            entry_point: Some(image.entry),
        });
        Ok(project)
    }

    pub fn to_annotations(&self) -> Annotations {
        Annotations {
            renames: self.annotations.renames.clone(),
            comments: self.annotations.comments.clone(),
            types: self.type_overlays.clone(),
            bookmarks: self.bookmarks.clone(),
            patches: self.patches.clone(),
        }
    }

    pub fn apply_to(&self, session: &Session) -> Result<()> {
        self.validate()?;
        if let Some(sha) = session.binary_sha256() {
            let live = hex_bytes(&sha);
            if live != self.binary.sha256 {
                bail!(
                    "binary SHA mismatch: project was built against {}, current binary is {}",
                    self.binary.sha256,
                    live
                );
            }
        }
        apply_annotations(session, &self.to_annotations(), self.selection);
        Ok(())
    }

    pub fn save_to(&self, path: impl AsRef<Path>) -> Result<()> {
        self.validate()?;
        let path = path.as_ref();
        let tmp_path = temp_path_for(path);
        let json = serde_json::to_vec_pretty(self)?;
        std::fs::write(&tmp_path, json)
            .with_context(|| format!("writing {}", tmp_path.display()))?;
        std::fs::rename(&tmp_path, path)
            .with_context(|| format!("renaming {} to {}", tmp_path.display(), path.display()))?;
        Ok(())
    }

    pub fn load_from(path: impl AsRef<Path>) -> Result<Self> {
        let path = path.as_ref();
        let bytes = std::fs::read(path).with_context(|| format!("reading {}", path.display()))?;
        let project: ProjectFile = serde_json::from_slice(&bytes)
            .with_context(|| format!("parsing {}", path.display()))?;
        project.validate()?;
        Ok(project)
    }

    pub fn validate(&self) -> Result<()> {
        if self.magic != MAGIC {
            bail!("bad magic: not a .unlace project");
        }
        if self.schema_version > CURRENT_SCHEMA_VERSION {
            bail!(
                "unsupported .unlace schema version: project is v{}, unlace supports up to v{}",
                self.schema_version,
                CURRENT_SCHEMA_VERSION
            );
        }
        if self.binary.sha256.len() != 64
            || !self.binary.sha256.bytes().all(|b| b.is_ascii_hexdigit())
        {
            bail!("project binary SHA256 must be 64 hex characters");
        }
        Ok(())
    }
}

impl LoadedProject {
    pub fn binary_sha256(&self) -> String {
        match self {
            LoadedProject::Project(project) => project.binary.sha256.clone(),
            LoadedProject::LegacyUnldb(contents) => {
                hex_bytes(&contents.header.original_binary_sha256)
            }
        }
    }

    pub fn binary_path(&self) -> Option<PathBuf> {
        match self {
            LoadedProject::Project(project) => project.binary.path.clone(),
            LoadedProject::LegacyUnldb(_) => None,
        }
    }

    pub fn annotations(&self) -> Annotations {
        match self {
            LoadedProject::Project(project) => project.to_annotations(),
            LoadedProject::LegacyUnldb(contents) => contents.annotations.clone(),
        }
    }

    pub fn selection(&self) -> Selection {
        match self {
            LoadedProject::Project(project) => project.selection,
            LoadedProject::LegacyUnldb(contents) => contents.selection,
        }
    }

    pub fn into_project(self, binary_path: Option<PathBuf>) -> ProjectFile {
        match self {
            LoadedProject::Project(mut project) => {
                if binary_path.is_some() {
                    project.binary.path = binary_path;
                }
                project
            }
            LoadedProject::LegacyUnldb(contents) => {
                let annotations = contents.annotations;
                ProjectFile {
                    magic: MAGIC.to_string(),
                    schema_version: CURRENT_SCHEMA_VERSION,
                    unlace_version: env!("CARGO_PKG_VERSION").to_string(),
                    binary: ProjectBinary {
                        path: binary_path,
                        sha256: hex_bytes(&contents.header.original_binary_sha256),
                    },
                    annotations: ProjectAnnotations {
                        renames: annotations.renames,
                        comments: annotations.comments,
                    },
                    selection: contents.selection,
                    type_overlays: annotations.types,
                    bookmarks: annotations.bookmarks,
                    patches: annotations.patches,
                    analysis_summary: None,
                }
            }
        }
    }
}

pub fn create_for_binary(binary_path: impl AsRef<Path>) -> Result<ProjectFile> {
    let binary_path = binary_path.as_ref();
    let bytes = std::fs::read(binary_path)
        .with_context(|| format!("reading binary {}", binary_path.display()))?;
    Ok(ProjectFile::new(binary_path, hex_bytes(&sha256(&bytes))))
}

pub fn load_any(path: impl AsRef<Path>) -> Result<LoadedProject> {
    let path = path.as_ref();
    let bytes = std::fs::read(path).with_context(|| format!("reading {}", path.display()))?;
    if bytes.starts_with(db::MAGIC) {
        return Ok(LoadedProject::LegacyUnldb(db::load_from(path)?));
    }
    let project: ProjectFile =
        serde_json::from_slice(&bytes).with_context(|| format!("parsing {}", path.display()))?;
    project.validate()?;
    Ok(LoadedProject::Project(project))
}

pub fn open_into_session(
    project_path: impl AsRef<Path>,
    binary_override: Option<&Path>,
) -> Result<(Session, LoadedProject)> {
    let loaded = load_any(project_path)?;
    let binary_path = binary_override
        .map(PathBuf::from)
        .or_else(|| loaded.binary_path());
    let session = Session::new();
    if let Some(path) = binary_path {
        session
            .load_binary(&path)
            .with_context(|| format!("loading binary {}", path.display()))?;
        let live = session.binary_sha256().expect("load_binary sets sha256");
        if hex_bytes(&live) != loaded.binary_sha256() {
            bail!(
                "binary SHA mismatch: project was built against {}, current binary is {}",
                loaded.binary_sha256(),
                hex_bytes(&live)
            );
        }
    }
    apply_annotations(&session, &loaded.annotations(), loaded.selection());
    Ok((session, loaded))
}

pub fn export_annotations_json(loaded: &LoadedProject) -> Result<String> {
    serde_json::to_string_pretty(&loaded.annotations()).map_err(Into::into)
}

fn apply_annotations(session: &Session, annotations: &Annotations, selection: Selection) {
    for rename in annotations.renames.values() {
        session.rename(rename.clone());
    }
    for comment in annotations.comments.values() {
        session.add_comment(comment.clone());
    }
    for ty in annotations.types.values() {
        session.set_type(ty.clone());
    }
    for bookmark in annotations.bookmarks.values() {
        session.add_bookmark(bookmark.clone());
    }
    for patch in annotations.patches.values() {
        session.add_patch(patch.clone());
    }
    session.set_selection(selection);
}

pub fn hex_bytes(bytes: &[u8]) -> String {
    let mut out = String::with_capacity(bytes.len() * 2);
    for byte in bytes {
        use std::fmt::Write as _;
        let _ = write!(out, "{byte:02x}");
    }
    out
}

fn temp_path_for(path: &Path) -> PathBuf {
    match path.extension() {
        Some(ext) => {
            let mut tmp = path.to_path_buf();
            tmp.set_extension(format!("{}.tmp", ext.to_string_lossy()));
            tmp
        }
        None => path.with_extension("tmp"),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{PatchSource, SessionInner};

    fn synthetic_session() -> Session {
        let session = Session::new();
        *session.inner.write() = SessionInner {
            binary: None,
            binary_path: Some(PathBuf::from("/tmp/example.bin")),
            binary_sha256: Some([0x11; 32]),
            annotations: Annotations::default(),
            selection: Selection::default(),
            listeners: Vec::new(),
        };
        session
    }

    #[test]
    fn project_round_trip_preserves_session_state() {
        let session = synthetic_session();
        session.rename(Rename {
            ea: 0x1000,
            old_name: "sub_1000".into(),
            new_name: "main".into(),
        });
        session.add_comment(Comment {
            ea: 0x1004,
            text: "entry".into(),
            repeatable: true,
        });
        session.set_type(TypeAnnotation {
            ea: 0x1000,
            declaration: "int main(void)".into(),
        });
        session.add_bookmark(Bookmark {
            ea: 0x1000,
            title: "start".into(),
            description: "first function".into(),
        });
        session.add_patch(Patch {
            ea: 0x1008,
            bytes: vec![0x90, 0x90],
            comment: "nop".into(),
            source: PatchSource::UserHex,
        });
        session.set_selection(Selection {
            current_function: Some(0x1000),
            current_address: Some(0x1004),
        });

        let project = ProjectFile::from_session(&session).expect("project");
        let json = serde_json::to_string(&project).expect("json");
        let recovered: ProjectFile = serde_json::from_str(&json).expect("load");

        assert_eq!(recovered.magic, MAGIC);
        assert_eq!(recovered.binary.sha256, "11".repeat(32));
        assert_eq!(recovered.annotations.renames[&0x1000].new_name, "main");
        assert_eq!(recovered.annotations.comments[&0x1004].text, "entry");
        assert_eq!(
            recovered.type_overlays[&0x1000].declaration,
            "int main(void)"
        );
        assert_eq!(recovered.bookmarks[&0x1000].title, "start");
        assert_eq!(recovered.patches[&0x1008].bytes, vec![0x90, 0x90]);
        assert_eq!(recovered.selection.current_address, Some(0x1004));
    }

    #[test]
    fn legacy_unldb_loads_as_project_input() {
        let session = synthetic_session();
        session.rename(Rename {
            ea: 0x2000,
            old_name: "sub_2000".into(),
            new_name: "helper".into(),
        });
        let path = std::env::temp_dir().join(format!(
            "unlace_project_legacy_{}.unldb",
            std::process::id()
        ));
        let _ = std::fs::remove_file(&path);
        db::save_to(&session, &path).expect("legacy save");

        let loaded = load_any(&path).expect("legacy load");
        let _ = std::fs::remove_file(&path);

        assert_eq!(loaded.binary_sha256(), "11".repeat(32));
        assert_eq!(loaded.annotations().renames[&0x2000].new_name, "helper");
    }
}
