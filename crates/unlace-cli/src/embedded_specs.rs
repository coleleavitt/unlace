//! The compiled SLEIGH tree a release `unlace` carries inside itself (cargo feature
//! `embed-specs`; `build.rs` generates the table).
//!
//! The engine reads specs only through plain `std::fs` path reads, so the table is
//! unpacked once into the per-user cache directory, under a name derived from its
//! contents, and that directory is handed out like any other spec root. Each unpack
//! is written to a private directory and renamed into place only once complete, so a
//! reader never sees a partial tree and concurrent first runs settle on one copy.

use std::fs;
use std::path::{Path, PathBuf};
use std::sync::atomic::{AtomicU32, Ordering};
use std::time::{Duration, Instant};

#[cfg(feature = "embed-specs")]
mod generated {
    include!(concat!(env!("OUT_DIR"), "/embedded_specs.rs"));
}

/// Written last into a finished unpack; a tree without it is not used.
const COMPLETE: &str = ".complete";

/// How long a caller waits on another process's unpack before trying the next
/// cache location; an unpack takes well under a second.
const LOCK_WAIT: Duration = Duration::from_secs(30);

/// The unpacked tree, or why no cache location would take it. `None` when this
/// build carries no specs.
#[cfg(feature = "embed-specs")]
pub fn tree() -> Option<&'static Result<PathBuf, String>> {
    static TREE: std::sync::OnceLock<Result<PathBuf, String>> = std::sync::OnceLock::new();
    Some(TREE.get_or_init(|| unpack_into_cache(generated::ID, generated::FILES)))
}

#[cfg(not(feature = "embed-specs"))]
pub fn tree() -> Option<&'static Result<PathBuf, String>> {
    None
}

/// Unpack into the first cache location that accepts the tree.
#[cfg_attr(not(feature = "embed-specs"), allow(dead_code))]
fn unpack_into_cache(id: &str, files: &[(&str, &[u8])]) -> Result<PathBuf, String> {
    let mut failures = Vec::new();
    for base in cache_bases() {
        match unpack(&base, id, files) {
            Ok(dir) => return Ok(dir),
            Err(e) => failures.push(format!("{}: {e}", base.display())),
        }
    }
    Err(failures.join("; "))
}

/// Where unpacked trees live, most preferred first: the platform's per-user cache
/// directory, then the system temp directory.
#[cfg_attr(not(feature = "embed-specs"), allow(dead_code))]
fn cache_bases() -> Vec<PathBuf> {
    let var = |name: &str| {
        std::env::var_os(name)
            .filter(|v| !v.is_empty())
            .map(PathBuf::from)
    };
    let user_cache = if cfg!(windows) {
        var("LOCALAPPDATA")
    } else if cfg!(target_os = "macos") {
        var("HOME").map(|home| home.join("Library").join("Caches"))
    } else {
        var("XDG_CACHE_HOME")
            .filter(|dir| dir.is_absolute())
            .or_else(|| var("HOME").map(|home| home.join(".cache")))
    };
    let user = std::env::var("USER")
        .or_else(|_| std::env::var("USERNAME"))
        .unwrap_or_default();
    let temp = if user.is_empty() {
        "unlace".to_string()
    } else {
        format!("unlace-{user}")
    };
    let mut bases: Vec<PathBuf> = user_cache
        .into_iter()
        .map(|dir| dir.join("unlace"))
        .collect();
    bases.push(std::env::temp_dir().join(temp));
    bases
}

/// The tree for `id` under `base`, unpacking `files` there first if no finished
/// copy exists.
pub(crate) fn unpack(base: &Path, id: &str, files: &[(&str, &[u8])]) -> Result<PathBuf, String> {
    unpack_within(base, id, files, LOCK_WAIT)
}

fn unpack_within(
    base: &Path,
    id: &str,
    files: &[(&str, &[u8])],
    wait: Duration,
) -> Result<PathBuf, String> {
    let dir = base.join(format!("specs-{id}"));
    if dir.join(COMPLETE).is_file() {
        return Ok(dir);
    }
    fs::create_dir_all(base).map_err(|e| e.to_string())?;
    // Keep the lock file: unlinking it would let later callers lock another inode.
    let lock = fs::OpenOptions::new()
        .read(true)
        .write(true)
        .create(true)
        .truncate(false)
        .open(base.join(format!(".specs-{id}.lock")))
        .map_err(|e| e.to_string())?;
    acquire(&lock, wait)?;
    if dir.join(COMPLETE).is_file() {
        return Ok(dir);
    }
    static STAGINGS: AtomicU32 = AtomicU32::new(0);
    let nonce = STAGINGS.fetch_add(1, Ordering::Relaxed);
    let staging = base.join(format!(".specs-{id}-{}-{nonce}", std::process::id()));
    if let Err(e) = write_tree(&staging, id, files) {
        let _ = fs::remove_dir_all(&staging);
        return Err(e);
    }
    if dir.is_dir() && !dir.join(COMPLETE).is_file() {
        let _ = fs::remove_dir_all(&dir);
    }
    let mut renamed = fs::rename(&staging, &dir);
    // A virus scanner can briefly hold files written a moment ago, which fails a
    // Windows directory rename with access denied.
    for wait_ms in [20, 80, 200] {
        if renamed.is_ok() || dir.join(COMPLETE).is_file() {
            break;
        }
        std::thread::sleep(std::time::Duration::from_millis(wait_ms));
        renamed = fs::rename(&staging, &dir);
    }
    let _ = fs::remove_dir_all(&staging);
    if dir.join(COMPLETE).is_file() {
        return Ok(dir);
    }
    Err(match renamed {
        Err(e) => e.to_string(),
        Ok(()) => format!("{} has no {COMPLETE} marker", dir.display()),
    })
}

/// Take `lock`, giving up after `wait` so a stopped or stuck holder sends the
/// caller to the next cache location instead of hanging it.
fn acquire(lock: &fs::File, wait: Duration) -> Result<(), String> {
    let deadline = Instant::now() + wait;
    let mut pause = Duration::from_millis(1);
    loop {
        match lock.try_lock() {
            Ok(()) => return Ok(()),
            Err(fs::TryLockError::WouldBlock) if Instant::now() < deadline => {
                std::thread::sleep(pause);
                pause = (pause * 2).min(Duration::from_millis(25));
            }
            Err(fs::TryLockError::WouldBlock) => {
                return Err(format!(
                    "another process held the unpack lock for over {wait:?}"
                ));
            }
            Err(fs::TryLockError::Error(e)) => return Err(e.to_string()),
        }
    }
}

fn write_tree(staging: &Path, id: &str, files: &[(&str, &[u8])]) -> Result<(), String> {
    for (rel, bytes) in files {
        let path = rel
            .split('/')
            .fold(staging.to_path_buf(), |p, part| p.join(part));
        if let Some(parent) = path.parent() {
            fs::create_dir_all(parent).map_err(|e| format!("{}: {e}", parent.display()))?;
        }
        fs::write(&path, bytes).map_err(|e| format!("{}: {e}", path.display()))?;
    }
    fs::write(staging.join(COMPLETE), id).map_err(|e| format!("{COMPLETE}: {e}"))
}

#[cfg(test)]
mod tests;
