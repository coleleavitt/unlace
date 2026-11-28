//! Compiled `.sla` images on demand: the cache every consumer of a SLEIGH spec reads through.
//!
//! The repository's `specs/` tree holds only SLEIGH sources. When the engine (or a test) needs
//! `<lang>.sla`, [`sla_path`] compiles the sibling `<lang>.slaspec` with this crate's compiler
//! into a content-addressed cache and returns the cached file; later calls, from any process or
//! checkout, reuse it while the sources and the compiler are unchanged.
//!
//! - **Key.** A hash of the `.slaspec`, every file it `@include`s (transitively, resolved
//!   against the including file's directory, as the compiler does; `@include "$(NAME)"` counts
//!   every value `NAME` is `@define`d to, and every `@if` branch counts), and the compiler's own
//!   fingerprint (`build.rs`: the slacomp, sleigh, base and num sources). The cached file is
//!   `<cache>/<lang>-<key>.sla`.
//! - **Stamp.** Hashing every source on each start costs more than the decompile of a small
//!   binary, so the key is also recorded in `<cache>/<lang>-<path hash>.stamp` with each
//!   source's path, size and modification time, plus each include path that does not exist. While
//!   every listed source still has the recorded size and time (and every absent one is still
//!   absent), the recorded key is used without reading any source; otherwise the
//!   key is recomputed and the stamp rewritten. Within one process the answer is memoized.
//! - **Location.** `$UNLACE_SLA_CACHE`, else `$XDG_CACHE_HOME/unlace/sla`, else
//!   `$HOME/.cache/unlace/sla`, else `<tmp>/unlace-sla`. Deleting it is always safe.
//! - **Concurrency.** An image is written to a unique temporary file in the cache directory and
//!   renamed into place, so concurrent test processes never read a partial file; two that race
//!   both compile, and the last rename wins with identical bytes.
//! - **Uncompressed copy.** The first load of a cached image of at least 2 MiB leaves
//!   `<cache>/<lang>-<key>.slr` beside it: the same packed element stream behind an `slr` header
//!   (`unlace_sleigh::slaformat::RAW_SLA_HEADER`), followed by the stream's layout (where its
//!   constructors and decision trees lie, `unlace_sleigh::lazysla::index_raw_image`), with the
//!   same key, so it is current exactly when the `.sla` is; the copies of that language under
//!   earlier keys are removed then. [`read_image`] returns the copy when it exists, else the
//!   `.sla`; the decoder takes either and decodes the same elements, and the copy skips the
//!   inflate and the layout walk of each later load.
//! - **Prebuilt images.** A `.sla` that exists as a regular file (not a symlink) and is at least
//!   as new as its `.slaspec` and every include is used as is (a `SLEIGHHOME` or
//!   `--sleighpath` directory of prebuilt images, or an in-tree build). A `.sla` with no
//!   `.slaspec` beside it is always used as is.

use std::collections::{BTreeMap, BTreeSet, HashMap};
use std::fs;
use std::io;
use std::path::{Path, PathBuf};
use std::sync::Mutex;
use std::time::SystemTime;

use unlace_sleigh::lazysla::{index_raw_image, split_raw_image};
use unlace_sleigh::slaformat::raw_sla_image;

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

type Defines = BTreeMap<String, BTreeSet<String>>;

/// Most file names one `@include` may expand to before the scan gives up on it.
const MAX_EXPANSIONS: usize = 64;

/// The stamp format, part of every stamp's header: a stamp written by an older scan (one that
/// missed some sources) is never trusted.
const STAMP_FORMAT: &str = "2";

/// A preprocessor line's directive word and its argument, with a `#` comment cut off as the
/// scanner does.
fn directive(line: &[u8]) -> Option<(&[u8], &[u8])> {
    let line = line.trim_ascii_start().strip_prefix(b"@")?;
    let line = match line.iter().position(|&b| b == b'#') {
        Some(p) => &line[..p],
        None => line,
    };
    let end = line
        .iter()
        .position(|&b| !b.is_ascii_alphanumeric() && b != b'_')
        .unwrap_or(line.len());
    Some((&line[..end], line[end..].trim_ascii()))
}

/// The text between the first pair of double quotes in `arg`.
fn quoted(arg: &[u8]) -> Option<String> {
    let start = arg.iter().position(|&b| b == b'"')?;
    let rest = &arg[start + 1..];
    let end = rest.iter().position(|&b| b == b'"')?;
    Some(String::from_utf8_lossy(&rest[..end]).into_owned())
}

/// `@define NAME "value"` / `@define NAME value` / `@define NAME`.
fn definition(arg: &[u8]) -> Option<(String, String)> {
    let end = arg
        .iter()
        .position(|&b| !b.is_ascii_alphanumeric() && b != b'_')
        .unwrap_or(arg.len());
    if end == 0 {
        return None;
    }
    let name = String::from_utf8_lossy(&arg[..end]).into_owned();
    let rest = arg[end..].trim_ascii();
    let value = quoted(rest).unwrap_or_else(|| {
        let word = rest.split(u8::is_ascii_whitespace).next().unwrap_or(&[]);
        String::from_utf8_lossy(word).into_owned()
    });
    Some((name, value))
}

/// Every file name `text` can expand to, given every value each macro is defined to anywhere in
/// the spec (the scan does not evaluate `@if`, so it takes all of them); `None` when a macro has
/// no definition or the expansion does not stay small.
fn expand(text: &str, defines: &Defines, depth: u32) -> Option<BTreeSet<String>> {
    let Some(start) = text.find("$(") else {
        return Some(BTreeSet::from([text.to_owned()]));
    };
    if depth == 0 {
        return None;
    }
    let end = start + text[start..].find(')')?;
    let mut out = BTreeSet::new();
    for value in defines.get(&text[start + 2..end])? {
        let joined = format!("{}{value}{}", &text[..start], &text[end + 1..]);
        out.extend(expand(&joined, defines, depth - 1)?);
        if out.len() > MAX_EXPANSIONS {
            return None;
        }
    }
    Some(out)
}

/// Every `.sinc` in `dir`, sorted: what an include the scan cannot resolve may name.
fn sincs_in(dir: &Path) -> Vec<PathBuf> {
    let mut out: Vec<PathBuf> = fs::read_dir(dir)
        .into_iter()
        .flatten()
        .flatten()
        .map(|e| e.path())
        .filter(|p| p.extension().is_some_and(|e| e == "sinc") && p.is_file())
        .collect();
    out.sort();
    out
}

/// The files a compile of `slaspec` may read: those that exist, in a stable order, and the
/// include paths that do not exist (yet).
struct Closure {
    found: Vec<PathBuf>,
    missing: Vec<PathBuf>,
}

/// One pass of the include scan with the macro values known so far; returns the closure and
/// every macro value its files define.
fn closure_with(slaspec: &Path, defines: &Defines) -> (Closure, Defines) {
    let mut seen = BTreeSet::new();
    let mut closure = Closure {
        found: Vec::new(),
        missing: Vec::new(),
    };
    let mut defined = defines.clone();
    let mut stack = vec![slaspec.to_path_buf()];
    while let Some(file) = stack.pop() {
        if !seen.insert(file.clone()) {
            continue;
        }
        let Ok(text) = fs::read(&file) else {
            closure.missing.push(file);
            continue;
        };
        closure.found.push(file.clone());
        let dir = file.parent().map(Path::to_path_buf).unwrap_or_default();
        for line in text.split(|&b| b == b'\n') {
            let Some((word, arg)) = directive(line) else {
                continue;
            };
            match word {
                b"define" => {
                    if let Some((name, value)) = definition(arg) {
                        defined.entry(name).or_default().insert(value);
                    }
                }
                b"include" => {
                    let Some(name) = quoted(arg) else {
                        continue;
                    };
                    match expand(&name, defines, 16) {
                        Some(names) => stack.extend(names.into_iter().map(|n| dir.join(n))),
                        None => stack.extend(sincs_in(&dir)),
                    }
                }
                _ => {}
            }
        }
    }
    (closure, defined)
}

/// The include closure of `slaspec`, resolved the way the preprocessor resolves it: each
/// `@include` relative to the including file's directory, `$(NAME)` expanded to every value
/// `NAME` is `@define`d to in the closure, and every `@if` branch taken. An include naming a
/// macro that is never defined stands for every `.sinc` beside the including file.
fn closure(slaspec: &Path) -> Closure {
    let mut defines = Defines::new();
    for _ in 0..8 {
        let (closure, defined) = closure_with(slaspec, &defines);
        if defined == defines {
            return closure;
        }
        defines = defined;
    }
    closure_with(slaspec, &defines).0
}

/// The `.slaspec` and every file it `@include`s, transitively, in a stable order (see
/// [`closure`]).
pub fn sources(slaspec: &Path) -> Vec<PathBuf> {
    closure(slaspec).found
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
    let (header, key) = lines.next()?.split_once('\t')?;
    if header != stamp_header() {
        return None;
    }
    for line in lines {
        let mut fields = line.splitn(3, '\t');
        let len = fields.next()?;
        let nanos = fields.next()?;
        let path = Path::new(fields.next()?);
        let recorded = if len == "-" {
            None
        } else {
            Some((len.parse().ok()?, nanos.parse().ok()?))
        };
        if signature(path) != recorded {
            return None;
        }
    }
    Some(key.to_owned())
}

fn stamp_header() -> String {
    format!("{STAMP_FORMAT}/{COMPILER_FINGERPRINT}")
}

/// `path` made absolute through its parent when the file itself does not exist.
fn absolute(path: &Path) -> PathBuf {
    if let Ok(full) = fs::canonicalize(path) {
        return full;
    }
    match (path.parent().map(fs::canonicalize), path.file_name()) {
        (Some(Ok(dir)), Some(name)) => dir.join(name),
        _ => path.to_path_buf(),
    }
}

/// Record `key`, the current signature of every source of `slaspec` and every include path
/// that does not exist, so creating one also invalidates the stamp (best effort).
fn write_stamp(stamp: &Path, slaspec: &Path, key: &str) {
    let closure = closure(slaspec);
    let mut text = format!("{}\t{key}\n", stamp_header());
    for file in closure.found {
        let Some((len, nanos)) = signature(&file) else {
            return;
        };
        text.push_str(&format!(
            "{len}\t{nanos}\t{}\n",
            absolute(&file).to_string_lossy()
        ));
    }
    for file in closure.missing {
        text.push_str(&format!("-\t-\t{}\n", absolute(&file).to_string_lossy()));
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

/// The extension of the uncompressed copy beside a cached `.sla`.
const RAW_EXTENSION: &str = "slr";

/// The smallest image that gets a copy: inflating a smaller one takes under two milliseconds
/// (about 0.9 ms per MiB inflated in the dev profile), not worth the disk.
const MIN_RAW_IMAGE: usize = 2 << 20;

/// The bytes to decode for the `.sla` at `sla` (a path from [`sla_path`]): for a cached image
/// of at least [`MIN_RAW_IMAGE`], its uncompressed copy `<lang>-<key>.slr` with its layout, made
/// beside it on first read (best effort; the copy and the image share the key, so the copy is
/// current exactly when the image is), else the `.sla` itself. Both decode to the same elements;
/// the copy skips the inflate and the layout walk. A copy without a layout (from an earlier
/// unlace) gets one.
pub fn read_image(sla: impl AsRef<Path>) -> io::Result<Vec<u8>> {
    let sla = sla.as_ref();
    let raw = sla.with_extension(RAW_EXTENSION);
    if let Ok(mut image) = fs::read(&raw)
        && let Some((_, layout)) = split_raw_image(&image)
    {
        if layout.is_none() && index_raw_image(&mut image).is_ok() {
            write_raw_image(&raw, &image);
        }
        return Ok(image);
    }
    let compressed = fs::read(sla)?;
    if sla.parent() != Some(cache_dir().as_path()) {
        return Ok(compressed);
    }
    match raw_sla_image(&compressed) {
        Ok(mut image) => {
            if image.len() >= MIN_RAW_IMAGE && index_raw_image(&mut image).is_ok() {
                write_raw_image(&raw, &image);
            }
            Ok(image)
        }
        Err(_) => Ok(compressed),
    }
}

/// Write `image` to `raw` through a temporary file in the same directory, and remove the
/// copies of the same language left by earlier keys.
fn write_raw_image(raw: &Path, image: &[u8]) {
    let temp = raw.with_extension(format!("{RAW_EXTENSION}.{}.tmp", std::process::id()));
    if fs::write(&temp, image).is_err() || fs::rename(&temp, raw).is_err() {
        let _ = fs::remove_file(&temp);
        return;
    }
    let (Some(dir), Some(name)) = (raw.parent(), raw.file_name().and_then(|n| n.to_str())) else {
        return;
    };
    let Some((stem, _)) = name.rsplit_once('-') else {
        return;
    };
    for entry in fs::read_dir(dir).into_iter().flatten().flatten() {
        let path = entry.path();
        let stale = path.extension().is_some_and(|e| e == RAW_EXTENSION)
            && path != raw
            && path
                .file_name()
                .and_then(|n| n.to_str())
                .and_then(|n| n.rsplit_once('-'))
                .is_some_and(|(s, _)| s == stem);
        if stale {
            let _ = fs::remove_file(&path);
        }
    }
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
