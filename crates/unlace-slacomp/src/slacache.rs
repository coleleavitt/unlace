//! Compiled `.sla` images on demand: the cache every consumer of a SLEIGH spec reads through.
//!
//! The repository's `specs/` tree holds only SLEIGH sources. When the engine (or a test) needs
//! `<lang>.sla`, [`sla_path`] compiles the sibling `<lang>.slaspec` with this crate's compiler
//! into a content-addressed cache and returns the cached file; later calls, from any process or
//! checkout, reuse it while the sources and the compiler are unchanged.
//!
//! - **Key.** A hash of the `.slaspec`, every file it `@include`s (transitively, resolved
//!   against the including file's directory, as the compiler does), and the compiler's own
//!   fingerprint (`build.rs`: the slacomp, sleigh, base and num sources). The cached file is
//!   `<cache>/<lang>-<key>.sla`.
//! - **Stamp.** Hashing every source on each start costs more than the decompile of a small
//!   binary, so the key is also recorded in `<cache>/<lang>-<path hash>.stamp` with each
//!   source's path, size and modification time. While every listed source still has the
//!   recorded size and time, the recorded key is used without reading any source; otherwise the
//!   key is recomputed and the stamp rewritten. Within one process the answer is memoized.
//! - **Location.** `$UNLACE_SLA_CACHE`, else `$XDG_CACHE_HOME/unlace/sla`, else
//!   `$HOME/.cache/unlace/sla`, else `<tmp>/unlace-sla`. Deleting it is always safe.
//! - **Concurrency.** An image is written to a unique temporary file in the cache directory and
//!   renamed into place, so concurrent test processes never read a partial file; two that race
//!   both compile, and the last rename wins with identical bytes.
//! - **Prebuilt images.** A `.sla` that exists as a regular file (not a symlink) and is at least
//!   as new as its `.slaspec` and every include is used as is (a `SLEIGHHOME` or
//!   `--sleighpath` directory of prebuilt images, or an in-tree build). A `.sla` with no
//!   `.slaspec` beside it is always used as is.

use std::collections::{BTreeSet, HashMap};
use std::fs;
use std::io;
use std::path::{Path, PathBuf};
use std::sync::Mutex;
use std::time::SystemTime;

use crate::slgh_compile::SleighCompile;

const FNV_OFFSET: u64 = 0xcbf2_9ce4_8422_2325;
const FNV_PRIME: u64 = 0x0000_0100_0000_01b3;

fn fnv(mut hash: u64, bytes: &[u8]) -> u64 {
    for &b in bytes {
        hash ^= u64::from(b);
        hash = hash.wrapping_mul(FNV_PRIME);
    }
    hash
}

/// The compiler fingerprint (`build.rs`).
pub const COMPILER_FINGERPRINT: &str = env!("UNLACE_SLACOMP_FINGERPRINT");

/// The cache directory (see the module docs).
pub fn cache_dir() -> PathBuf {
    if let Some(dir) = std::env::var_os("UNLACE_SLA_CACHE").filter(|d| !d.is_empty()) {
        return PathBuf::from(dir);
    }
    if let Some(dir) = std::env::var_os("XDG_CACHE_HOME").filter(|d| !d.is_empty()) {
        return PathBuf::from(dir).join("unlace").join("sla");
    }
    if let Some(home) = std::env::var_os("HOME").filter(|d| !d.is_empty()) {
        return PathBuf::from(home)
            .join(".cache")
            .join("unlace")
            .join("sla");
    }
    std::env::temp_dir().join("unlace-sla")
}

/// The `.slaspec` and every file it `@include`s, transitively, in a stable order.
pub fn sources(slaspec: &Path) -> Vec<PathBuf> {
    let mut seen = BTreeSet::new();
    let mut order = Vec::new();
    let mut stack = vec![slaspec.to_path_buf()];
    while let Some(file) = stack.pop() {
        if !seen.insert(file.clone()) {
            continue;
        }
        let Ok(text) = fs::read(&file) else {
            continue;
        };
        order.push(file.clone());
        let dir = file.parent().map(Path::to_path_buf).unwrap_or_default();
        for line in text.split(|&b| b == b'\n') {
            let line = line.trim_ascii_start();
            let Some(rest) = line.strip_prefix(b"@include") else {
                continue;
            };
            let Some(start) = rest.iter().position(|&b| b == b'"') else {
                continue;
            };
            let rest = &rest[start + 1..];
            let Some(end) = rest.iter().position(|&b| b == b'"') else {
                continue;
            };
            let name = String::from_utf8_lossy(&rest[..end]).into_owned();
            stack.push(dir.join(name));
        }
    }
    order
}

/// The cache key of `slaspec`: its sources' paths (relative to the spec) and bytes plus the
/// compiler fingerprint.
pub fn cache_key(slaspec: &Path) -> String {
    let root = slaspec.parent().unwrap_or(Path::new(""));
    let mut hash = fnv(FNV_OFFSET, COMPILER_FINGERPRINT.as_bytes());
    let mut second = fnv(FNV_OFFSET ^ 0x5bd1_e995, COMPILER_FINGERPRINT.as_bytes());
    for file in sources(slaspec) {
        let rel = file.strip_prefix(root).unwrap_or(&file);
        let name = rel.to_string_lossy();
        let bytes = fs::read(&file).unwrap_or_default();
        hash = fnv(fnv(hash, name.as_bytes()), &bytes);
        second = fnv(fnv(second, &bytes), name.as_bytes());
    }
    format!("{hash:016x}{second:016x}")
}

/// A source's size and modification time in nanoseconds, the stamp's change test.
fn signature(path: &Path) -> Option<(u64, u128)> {
    let meta = fs::metadata(path).ok()?;
    let nanos = meta
        .modified()
        .ok()?
        .duration_since(SystemTime::UNIX_EPOCH)
        .ok()?
        .as_nanos();
    Some((meta.len(), nanos))
}

fn stamp_path(dir: &Path, stem: &str, slaspec: &Path) -> PathBuf {
    let full = fs::canonicalize(slaspec).unwrap_or_else(|_| slaspec.to_path_buf());
    let id = fnv(FNV_OFFSET, full.to_string_lossy().as_bytes());
    dir.join(format!("{stem}-{id:016x}.stamp"))
}

/// The key a current stamp records for `slaspec`, if every source it lists is unchanged.
fn stamped_key(stamp: &Path) -> Option<String> {
    let text = fs::read_to_string(stamp).ok()?;
    let mut lines = text.lines();
    let (fingerprint, key) = lines.next()?.split_once('\t')?;
    if fingerprint != COMPILER_FINGERPRINT {
        return None;
    }
    for line in lines {
        let mut fields = line.splitn(3, '\t');
        let len: u64 = fields.next()?.parse().ok()?;
        let nanos: u128 = fields.next()?.parse().ok()?;
        let path = Path::new(fields.next()?);
        if signature(path) != Some((len, nanos)) {
            return None;
        }
    }
    Some(key.to_owned())
}

/// Record `key` and the current signature of every source of `slaspec` (best effort).
fn write_stamp(stamp: &Path, slaspec: &Path, key: &str) {
    let mut text = format!("{COMPILER_FINGERPRINT}\t{key}\n");
    for file in sources(slaspec) {
        let Some((len, nanos)) = signature(&file) else {
            return;
        };
        let full = fs::canonicalize(&file).unwrap_or(file);
        text.push_str(&format!("{len}\t{nanos}\t{}\n", full.to_string_lossy()));
    }
    let temp = stamp.with_extension(format!("stamp.{}.tmp", std::process::id()));
    if fs::write(&temp, text).is_ok() && fs::rename(&temp, stamp).is_err() {
        let _ = fs::remove_file(&temp);
    }
}

/// [`cache_key`], answered from the stamp when the sources are unchanged.
fn current_key(dir: &Path, stem: &str, slaspec: &Path) -> String {
    let stamp = stamp_path(dir, stem, slaspec);
    if let Some(key) = stamped_key(&stamp) {
        return key;
    }
    let key = cache_key(slaspec);
    if fs::create_dir_all(dir).is_ok() {
        write_stamp(&stamp, slaspec, &key);
    }
    key
}

fn mtime(path: &Path) -> Option<SystemTime> {
    fs::metadata(path).and_then(|m| m.modified()).ok()
}

/// Is the `.sla` at `sla` a usable prebuilt image for `slaspec` (see the module docs)?
fn prebuilt_is_current(sla: &Path, slaspec: &Path) -> bool {
    let Ok(meta) = fs::symlink_metadata(sla) else {
        return false;
    };
    if !meta.is_file() {
        return false;
    }
    let Ok(built) = meta.modified() else {
        return false;
    };
    sources(slaspec)
        .iter()
        .all(|src| mtime(src).is_some_and(|t| t <= built))
}

/// Compile `slaspec` into the cache (unless an image for its current sources is already there)
/// and return the cached `.sla`.
pub fn compile_cached(slaspec: &Path) -> io::Result<PathBuf> {
    compile_cached_in(&cache_dir(), slaspec)
}

/// [`compile_cached`] with an explicit cache directory.
pub fn compile_cached_in(dir: &Path, slaspec: &Path) -> io::Result<PathBuf> {
    let stem = slaspec
        .file_stem()
        .ok_or_else(|| io::Error::new(io::ErrorKind::InvalidInput, "slaspec has no file name"))?
        .to_string_lossy()
        .into_owned();
    let target = dir.join(format!("{stem}-{}.sla", current_key(dir, &stem, slaspec)));
    if target.is_file() {
        return Ok(target);
    }
    fs::create_dir_all(dir)?;
    let nanos = SystemTime::now()
        .duration_since(SystemTime::UNIX_EPOCH)
        .map(|d| d.as_nanos())
        .unwrap_or(0);
    let temp = dir.join(format!(".{stem}.{}.{nanos}.tmp", std::process::id()));
    let mut compiler = SleighCompile::new();
    compiler.set_quiet(true);
    let code = compiler
        .run_compilation(&slaspec.to_string_lossy(), &temp.to_string_lossy())
        .map_err(|e| io::Error::other(format!("compile {}: {}", slaspec.display(), e.explain())))?;
    if code != 0 {
        let _ = fs::remove_file(&temp);
        return Err(io::Error::other(format!(
            "compile {}: the SLEIGH compiler reported errors",
            slaspec.display()
        )));
    }
    fs::rename(&temp, &target)?;
    Ok(target)
}

/// The `.sla` to load for `sla` (a path such as `specs/.../x86-64.sla`): a current prebuilt
/// image at that path, else the cached image compiled from the sibling `.slaspec`.
pub fn sla_path(sla: impl AsRef<Path>) -> io::Result<PathBuf> {
    static RESOLVED: Mutex<Option<HashMap<PathBuf, PathBuf>>> = Mutex::new(None);
    let sla = sla.as_ref();
    if let Some(found) = RESOLVED
        .lock()
        .ok()
        .and_then(|map| map.as_ref()?.get(sla).cloned())
        .filter(|found| found.is_file())
    {
        return Ok(found);
    }
    let found = resolve(sla)?;
    if let Ok(mut map) = RESOLVED.lock() {
        map.get_or_insert_with(HashMap::new)
            .insert(sla.to_path_buf(), found.clone());
    }
    Ok(found)
}

fn resolve(sla: &Path) -> io::Result<PathBuf> {
    let slaspec = sla.with_extension("slaspec");
    if !slaspec.is_file() {
        return if sla.is_file() {
            Ok(sla.to_path_buf())
        } else {
            Err(io::Error::new(
                io::ErrorKind::NotFound,
                format!(
                    "no {} and no {} to compile it from",
                    sla.display(),
                    slaspec.display()
                ),
            ))
        };
    }
    if prebuilt_is_current(sla, &slaspec) {
        return Ok(sla.to_path_buf());
    }
    compile_cached(&slaspec)
}

/// The bytes of the `.sla` for `sla` ([`sla_path`]); a drop-in for `std::fs::read` on a
/// `.sla` path.
pub fn read_sla(sla: impl AsRef<Path>) -> io::Result<Vec<u8>> {
    fs::read(sla_path(sla)?)
}

/// Every `.slaspec` under `dir`, recursively, sorted.
pub fn slaspecs_under(dir: impl AsRef<Path>) -> Vec<PathBuf> {
    fn walk(dir: &Path, out: &mut Vec<PathBuf>) {
        let Ok(entries) = fs::read_dir(dir) else {
            return;
        };
        for entry in entries.flatten() {
            let path = entry.path();
            if path.is_dir() {
                walk(&path, out);
            } else if path.extension().is_some_and(|e| e == "slaspec") {
                out.push(path);
            }
        }
    }
    let mut out = Vec::new();
    walk(dir.as_ref(), &mut out);
    out.sort();
    out
}

#[cfg(test)]
mod tests;
