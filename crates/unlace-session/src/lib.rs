//! Shared session state for unlace UI surfaces.
//!
//! A `Session` owns the loaded binary image, lazily-decompiled functions,
//! and user annotations (renames, comments, types, bookmarks, patches).
//! It is shared between the CLI, TUI, and GUI surfaces — all of them
//! read and write through this single struct.
//!
//! Persistence is implemented in `project.rs` for the public `.unlace`
//! project format and in `db.rs` for legacy `.unldb` files.

pub mod db;
pub mod patches;
pub mod project;
pub mod til;
pub mod til_import;
pub mod til_parser;

pub use til_import::{CatalogEntry, TilApplyReport, TilCatalog};

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};
use std::sync::Arc;

use parking_lot::RwLock;
use serde::{Deserialize, Serialize};
use unlace_loader::{BinaryImage, ElfLoader, Loader, MachoLoader, PeLoader};

/// A user-applied rename for an address.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Rename {
    pub ea: u64,
    pub old_name: String,
    pub new_name: String,
}

/// A user comment attached to an address.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Comment {
    pub ea: u64,
    pub text: String,
    pub repeatable: bool,
}

/// A user-defined type annotation on an address (e.g. function prototype).
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct TypeAnnotation {
    pub ea: u64,
    pub declaration: String,
}

/// A user bookmark.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Bookmark {
    pub ea: u64,
    pub title: String,
    pub description: String,
}

/// A binary patch — modify and write back to disk.
#[derive(Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub struct Patch {
    pub ea: u64,
    pub bytes: Vec<u8>,
    pub comment: String,
    pub source: PatchSource,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq, Serialize, Deserialize)]
pub enum PatchSource {
    UserHex,
    Assembler,
}

/// All user annotations in a session.
#[derive(Clone, Debug, Default, Serialize, Deserialize)]
pub struct Annotations {
    pub renames: BTreeMap<u64, Rename>,
    pub comments: BTreeMap<u64, Comment>,
    pub types: BTreeMap<u64, TypeAnnotation>,
    pub bookmarks: BTreeMap<u64, Bookmark>,
    pub patches: BTreeMap<u64, Patch>,
}

impl Annotations {
    pub fn new() -> Self {
        Self::default()
    }
}

/// Current UI selection (function/address focus).
#[derive(Copy, Clone, Debug, Default, PartialEq, Eq, Serialize, Deserialize)]
pub struct Selection {
    pub current_function: Option<u64>,
    pub current_address: Option<u64>,
}

/// Event emitted when the session changes — UI panes subscribe to refresh.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SessionEvent {
    Loaded { path: PathBuf },
    Renamed(Rename),
    Commented(Comment),
    Typed(TypeAnnotation),
    Bookmarked(Bookmark),
    Patched(Patch),
    SelectionChanged(Selection),
    Saved { path: PathBuf },
}

/// Shared, thread-safe session state.
///
/// Wraps internal state in `Arc<RwLock<...>>` so the TUI render thread and
/// the GUI iced runtime can both read concurrently and the CLI/scripts can
/// mutate from a single writer.
#[derive(Clone)]
pub struct Session {
    pub(crate) inner: Arc<RwLock<SessionInner>>,
}

pub(crate) struct SessionInner {
    pub(crate) binary: Option<BinaryImage>,
    pub(crate) binary_path: Option<PathBuf>,
    pub(crate) binary_sha256: Option<[u8; 32]>,
    pub(crate) annotations: Annotations,
    pub(crate) selection: Selection,
    pub(crate) listeners: Vec<SessionListener>,
}

/// Callback invoked for each [`SessionEvent`] dispatched on a session.
pub(crate) type SessionListener = Box<dyn Fn(&SessionEvent) + Send + Sync>;

impl Session {
    pub fn new() -> Self {
        Self {
            inner: Arc::new(RwLock::new(SessionInner {
                binary: None,
                binary_path: None,
                binary_sha256: None,
                annotations: Annotations::new(),
                selection: Selection::default(),
                listeners: Vec::new(),
            })),
        }
    }

    /// Load a binary file into the session.
    ///
    /// Dispatches among ELF / PE / Mach-O by magic bytes. Returns an error
    /// if the file format is not recognized.
    pub fn load_binary(&self, path: impl AsRef<Path>) -> anyhow::Result<()> {
        let path = path.as_ref();
        let bytes = std::fs::read(path)?;
        let sha = sha256(&bytes);
        let image = dispatch_loader(&bytes)?;

        {
            let mut g = self.inner.write();
            g.binary = Some(image);
            g.binary_path = Some(path.to_path_buf());
            g.binary_sha256 = Some(sha);
        }
        self.emit(SessionEvent::Loaded {
            path: path.to_path_buf(),
        });
        Ok(())
    }

    pub fn binary_path(&self) -> Option<PathBuf> {
        self.inner.read().binary_path.clone()
    }

    pub fn binary_sha256(&self) -> Option<[u8; 32]> {
        self.inner.read().binary_sha256
    }

    pub fn with_binary<F, R>(&self, f: F) -> Option<R>
    where
        F: FnOnce(&BinaryImage) -> R,
    {
        let g = self.inner.read();
        g.binary.as_ref().map(f)
    }

    /// Replace the loaded binary with one constructed in-process.
    ///
    /// Useful when the caller already parsed an image via a custom
    /// loader and wants to attach it to a session without round-tripping
    /// through a file on disk. Emits no `Loaded` event because there is
    /// no path to associate.
    pub fn set_binary(&self, image: BinaryImage) {
        let mut g = self.inner.write();
        g.binary = Some(image);
    }

    pub fn annotations(&self) -> Annotations {
        self.inner.read().annotations.clone()
    }

    pub fn selection(&self) -> Selection {
        self.inner.read().selection
    }

    pub fn set_selection(&self, sel: Selection) {
        {
            let mut g = self.inner.write();
            g.selection = sel;
        }
        self.emit(SessionEvent::SelectionChanged(sel));
    }

    pub fn rename(&self, r: Rename) {
        {
            let mut g = self.inner.write();
            g.annotations.renames.insert(r.ea, r.clone());
        }
        self.emit(SessionEvent::Renamed(r));
    }

    pub fn add_comment(&self, c: Comment) {
        {
            let mut g = self.inner.write();
            g.annotations.comments.insert(c.ea, c.clone());
        }
        self.emit(SessionEvent::Commented(c));
    }

    pub fn set_type(&self, t: TypeAnnotation) {
        {
            let mut g = self.inner.write();
            g.annotations.types.insert(t.ea, t.clone());
        }
        self.emit(SessionEvent::Typed(t));
    }

    pub fn add_bookmark(&self, b: Bookmark) {
        {
            let mut g = self.inner.write();
            g.annotations.bookmarks.insert(b.ea, b.clone());
        }
        self.emit(SessionEvent::Bookmarked(b));
    }

    pub fn add_patch(&self, p: Patch) {
        {
            let mut g = self.inner.write();
            g.annotations.patches.insert(p.ea, p.clone());
        }
        self.emit(SessionEvent::Patched(p));
    }

    /// Subscribe a listener to all session events.
    pub fn subscribe<F>(&self, listener: F)
    where
        F: Fn(&SessionEvent) + Send + Sync + 'static,
    {
        let mut g = self.inner.write();
        g.listeners.push(Box::new(listener));
    }

    fn emit(&self, event: SessionEvent) {
        let g = self.inner.read();
        for listener in &g.listeners {
            listener(&event);
        }
    }
}

impl Default for Session {
    fn default() -> Self {
        Self::new()
    }
}

/// Dispatch to the right loader by magic bytes.
fn dispatch_loader(bytes: &[u8]) -> anyhow::Result<BinaryImage> {
    if ElfLoader::can_load(bytes) {
        return ElfLoader::load(bytes).map_err(Into::into);
    }
    if PeLoader::can_load(bytes) {
        return PeLoader::load(bytes).map_err(Into::into);
    }
    if MachoLoader::can_load(bytes) {
        return MachoLoader::load(bytes).map_err(Into::into);
    }
    anyhow::bail!("unrecognized binary format (not ELF / PE / Mach-O)")
}

/// Compute SHA-256 of a byte slice.
pub fn sha256(bytes: &[u8]) -> [u8; 32] {
    use sha2::Digest;
    let mut hasher = sha2::Sha256::new();
    hasher.update(bytes);
    let result = hasher.finalize();
    let mut out = [0u8; 32];
    out.copy_from_slice(&result);
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_session_new_is_empty() {
        let s = Session::new();
        assert!(s.binary_path().is_none());
        assert!(s.binary_sha256().is_none());
        assert!(s.annotations().renames.is_empty());
    }

    #[test]
    fn test_session_rename_persists() {
        let s = Session::new();
        s.rename(Rename {
            ea: 0x1000,
            old_name: "sub_1000".into(),
            new_name: "main".into(),
        });
        let anns = s.annotations();
        assert_eq!(anns.renames.len(), 1);
        assert_eq!(anns.renames[&0x1000].new_name, "main");
    }

    #[test]
    fn test_session_selection_round_trip() {
        let s = Session::new();
        let sel = Selection {
            current_function: Some(0x401000),
            current_address: Some(0x401020),
        };
        s.set_selection(sel);
        assert_eq!(s.selection(), sel);
    }

    #[test]
    fn test_session_event_subscription() {
        use std::sync::atomic::{AtomicU32, Ordering};
        let count = Arc::new(AtomicU32::new(0));
        let count_clone = count.clone();
        let s = Session::new();
        s.subscribe(move |_event| {
            count_clone.fetch_add(1, Ordering::SeqCst);
        });
        s.rename(Rename {
            ea: 0,
            old_name: "a".into(),
            new_name: "b".into(),
        });
        assert_eq!(count.load(Ordering::SeqCst), 1);
    }

    #[test]
    fn test_sha256_known_vector() {
        // SHA-256 of empty string
        let h = sha256(b"");
        assert_eq!(
            h,
            [
                0xe3, 0xb0, 0xc4, 0x42, 0x98, 0xfc, 0x1c, 0x14, 0x9a, 0xfb, 0xf4, 0xc8, 0x99, 0x6f,
                0xb9, 0x24, 0x27, 0xae, 0x41, 0xe4, 0x64, 0x9b, 0x93, 0x4c, 0xa4, 0x95, 0x99, 0x1b,
                0x78, 0x52, 0xb8, 0x55,
            ]
        );
    }

    #[test]
    fn test_session_clone_shares_state() {
        let s1 = Session::new();
        let s2 = s1.clone();
        s1.add_bookmark(Bookmark {
            ea: 0x2000,
            title: "interesting".into(),
            description: "".into(),
        });
        assert_eq!(s2.annotations().bookmarks.len(), 1);
    }
}
