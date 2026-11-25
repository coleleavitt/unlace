//! Locate + fingerprint-gate the external `.pdb` for a PE.
//!
//! PDB is the lone **external-file** case in the metadata tier: the PE carries only
//! a CodeView *fingerprint* (a GUID/sig + age + the `.pdb` path — see
//! [`crate::pdb::codeview`]), never the debug info itself. So PDB recovery needs
//! the `.pdb` to be *found* before anything can be applied.
//!
//! ## The search tiers
//!
//! [`pdb_candidates`] returns the paths to try, most specific first; the caller
//! opens each in turn and applies the first that passes the fingerprint gate.
//!
//! 1. **`unlace_pdb_path`** — an explicitly supplied path (the `fid` `unlace_fid_db`
//!    external-artifact precedent). Whatever the user names is tried first.
//! 2. **The CodeView record's own filename, beside the image.** A `/Zi` build
//!    records the `.pdb` it emitted; the *basename* of that record is resolved in
//!    the image's own directory. The recorded string is a build-machine path
//!    (`C:\src\obj\prog.pdb`) written into the binary by whoever linked it, so it
//!    is never opened as a path — only its last segment is used, and only as a
//!    name inside a directory the caller already handed us.
//! 3. **`<image stem>.pdb` beside the image** — the sidecar convention that holds
//!    when the recorded name has been rewritten (a renamed or repackaged binary).
//! 4. **A symbol store** (`unlace_pdb_symsrv`, opt-in, tried only when the tiers
//!    above found no match): `<cache>/<name>/<key>/<name>` in the SymStore
//!    layout, the key being the GUID's hex digits and the age in hex. With a
//!    server URL (`<cache>*<url>`) a missing file is downloaded from
//!    `<url>/<name>/<key>/<name>` into the cache first ([`symbol_store_candidate`]),
//!    once per process and path, by running `curl`. Nothing is fetched unless the
//!    variable names a URL.
//!
//! ## The fingerprint gate (the FID full-hash-match discipline)
//!
//! A candidate is applied **only** when its GUID and DBI-stream age
//! match the PE's CodeView record. A MISMATCH (a stale / wrong / unrelated
//! `.pdb`) or an ABSENT/unreadable file moves on to the next candidate, and an
//! exhausted list emits nothing. This is the exact "never apply the wrong external
//! knowledge" discipline FID's full-hash bucket-collapse enforces: a wrong PDB
//! would rename functions to *someone else's* names, far worse than leaving them
//! `FUN_*`. It is also what makes the automatic tiers safe enough to run by
//! default — a sidecar that is not this binary's cannot be applied.

use std::collections::BTreeSet;
use std::ffi::OsStr;
use std::path::{Component, Path, PathBuf};
use std::sync::Mutex;

use crate::pdb::codeview::CodeViewInfo;

/// The environment variable naming the external `.pdb` file to apply. Mirrors the
/// `fid` `unlace_fid_db` env gate (the FID-database external-artifact precedent):
/// the `.pdb` source is kept OFF the per-decompilation `--option` surface (so the
/// catalog carries a single on|off `pdb` settable, not a path-valued one).
pub const PDB_PATH_ENV: &str = unlace_decomp::loadoptions::PDB_PATH_ENV;

/// The explicitly supplied `.pdb` path: the load's `LoadOptions::pdb_path`, else
/// [`PDB_PATH_ENV`]. `None` when neither names one.
pub fn explicit_pdb_path() -> Option<PathBuf> {
    use unlace_decomp::loadoptions::{env, scoped};
    scoped(|o| o.pdb_path.clone()).unwrap_or_else(env::pdb_path)
}

/// The ordered `.pdb` candidates for an image, most specific first (see the module
/// header for the tiers). `image_path` is the image's own on-disk location
/// ([`crate::pass::AnalysisCtx::image_path`]); `None` leaves only the explicit
/// env-var tier. Duplicates are collapsed, so a record that already names
/// `<stem>.pdb` yields one candidate, not two.
pub fn pdb_candidates(image_path: Option<&Path>, cv: &CodeViewInfo) -> Vec<PathBuf> {
    let mut out: Vec<PathBuf> = Vec::new();
    let mut add = |p: PathBuf| {
        if !out.contains(&p) {
            out.push(p);
        }
    };
    if let Some(explicit) = explicit_pdb_path() {
        add(explicit);
    }
    let Some(image) = image_path else {
        return out;
    };
    let dir = image.parent().unwrap_or_else(|| Path::new(""));
    if let Some(name) = recorded_pdb_name(cv.pdb_path()) {
        add(dir.join(name));
    }
    if let Some(stem) = image.file_stem() {
        let mut sidecar = stem.to_os_string();
        sidecar.push(".pdb");
        add(dir.join(sidecar));
    }
    out
}

/// The symbol-store setting: the load's `LoadOptions::pdb_symsrv`, else
/// `unlace_pdb_symsrv`. `None` when neither names one.
pub fn symbol_store() -> Option<String> {
    use unlace_decomp::loadoptions::{env, scoped};
    scoped(|o| o.pdb_symsrv.clone()).unwrap_or_else(env::pdb_symsrv)
}

/// The SymStore key of the image's `.pdb`: the GUID's 32 hex digits followed by
/// the age in hex (RSDS), or the signature's 8 and the age (NB10).
pub fn store_key(cv: &CodeViewInfo) -> String {
    match cv {
        CodeViewInfo::Rsds { age, .. } => format!(
            "{}{age:X}",
            cv.guid_string().unwrap_or_default().replace('-', "")
        ),
        CodeViewInfo::Nb10 { signature, age, .. } => format!("{signature:08X}{age:X}"),
    }
}

/// Split a store setting into its cache directory and optional server URL:
/// `<cache>` or `<cache>*<url>`, with an optional `srv*` prefix as in
/// `_NT_SYMBOL_PATH`.
pub fn parse_store(spec: &str) -> Option<(PathBuf, Option<&str>)> {
    let spec = spec.trim();
    let spec = spec
        .strip_prefix("srv*")
        .or_else(|| spec.strip_prefix("SRV*"))
        .unwrap_or(spec);
    let (cache, url) = match spec.split_once('*') {
        Some((cache, url)) => (cache.trim(), Some(url.trim()).filter(|u| !u.is_empty())),
        None => (spec, None),
    };
    (!cache.is_empty()).then(|| (PathBuf::from(cache), url))
}

/// Where the image's `.pdb` sits in the store at `cache`:
/// `<cache>/<name>/<key>/<name>`. `None` when the CodeView record names no safe
/// `.pdb` file name.
pub fn store_path(cache: &Path, cv: &CodeViewInfo) -> Option<PathBuf> {
    let name = recorded_pdb_name(cv.pdb_path())?;
    Some(cache.join(name).join(store_key(cv)).join(name))
}

/// The symbol-store candidate for the image, downloaded into the cache first
/// when a server is configured and the cache lacks it. `None` without a store
/// setting, without a safe record name, or when the download fails.
pub fn symbol_store_candidate(cv: &CodeViewInfo) -> Option<PathBuf> {
    let spec = symbol_store()?;
    let (cache, url) = parse_store(&spec)?;
    let path = store_path(&cache, cv)?;
    if path.is_file() {
        return Some(path);
    }
    download(url?, &path, cv)?;
    Some(path)
}

/// Fetch `<url>/<name>/<key>/<name>` to `path` with `curl`, at most once per
/// process and path. The file is written beside its final name and renamed when
/// complete, so a failed or interrupted fetch never leaves a partial `.pdb`.
fn download(url: &str, path: &Path, cv: &CodeViewInfo) -> Option<()> {
    static TRIED: Mutex<BTreeSet<PathBuf>> = Mutex::new(BTreeSet::new());
    if !TRIED.lock().ok()?.insert(path.to_path_buf()) {
        return None;
    }
    let name = recorded_pdb_name(cv.pdb_path())?;
    let remote = format!(
        "{}/{name}/{}/{name}",
        url.trim_end_matches('/'),
        store_key(cv)
    );
    std::fs::create_dir_all(path.parent()?).ok()?;
    let part = path.with_extension("pdb.part");
    let status = std::process::Command::new("curl")
        .args([
            "--fail",
            "--silent",
            "--show-error",
            "--location",
            "--max-time",
            "300",
            "--max-filesize",
            "4294967296",
            "--output",
        ])
        .arg(&part)
        .arg(&remote)
        .status();
    if status.is_ok_and(|s| s.success()) && std::fs::rename(&part, path).is_ok() {
        return Some(());
    }
    let _ = std::fs::remove_file(&part);
    unlace_base::notes::say_once(
        &remote,
        &format!("[unlace pdb] {remote}: download failed; no .pdb from the symbol server"),
    );
    None
}

/// The safe-to-join filename inside a CodeView record's `.pdb` path, or `None`.
///
/// The record is attacker-controllable binary content, so this deliberately
/// throws away everything but the last path segment (splitting on BOTH separators
/// — a Windows linker writes `\`, which is an ordinary character to a POSIX
/// `Path`) and then requires that segment to be a single ordinary component
/// named `*.pdb`. `..`, an absolute path, a Windows drive prefix, and a trailing
/// separator all yield `None`, so the result can only ever name a file directly
/// inside a directory the caller chooses.
fn recorded_pdb_name(recorded: &str) -> Option<&str> {
    let last = recorded.rsplit(['/', '\\']).next()?;
    if !last.to_ascii_lowercase().ends_with(".pdb") {
        return None;
    }
    let mut comps = Path::new(last).components();
    match (comps.next(), comps.next()) {
        (Some(Component::Normal(c)), None) if c == OsStr::new(last) => Some(last),
        _ => None,
    }
}

/// The fingerprint gate: does a candidate `.pdb`'s own `{guid, age}` match the PE's
/// CodeView record `cv`?
///
/// Compares (1) the **age** (exact `u32` equality) and (2) the **GUID** in its
/// canonical Microsoft text form. The CodeView record's
/// [`CodeViewInfo::guid_string`] renders the raw 16 mixed-endian bytes
/// (`data1/2/3` little-endian, `data4` byte-order) to `XXXXXXXX-XXXX-XXXX-XXXX-…`;
/// the `pdb` crate's `Uuid` renders the SAME canonical hyphenated form via
/// `Display` (the PDB info stream stores the GUID in the identical on-disk
/// mixed-endian layout). Both are upper-cased before comparison so the match is
/// case-insensitive (the `uuid` crate lower-cases; `guid_string` upper-cases).
///
/// An **NB10** CodeView record (a `u32` signature, no GUID — [`CodeViewInfo::Nb10`])
/// has no GUID to compare; the modern `RSDS`/`pdb`-crate path is GUID-keyed, so a
/// `pdb` opened against an NB10 record cannot be fingerprint-matched and is
/// rejected (returns `false`). NB10 binaries are rare in practice; the pass targets
/// the modern RSDS form the fixture uses.
///
/// `pdb_guid` is the `.pdb`'s `pdb_information().guid` rendered to its canonical
/// string (the caller passes `info.guid.to_string()`); `pdb_age` is
/// `pdb_information().age`.
pub fn fingerprint_ok(cv: &CodeViewInfo, pdb_guid: &str, pdb_age: u32) -> bool {
    // The age must match exactly (a rebuilt PDB bumps the age even if the GUID is
    // unchanged in some toolchains — but here both must agree with the record).
    if cv.age() != pdb_age {
        return false;
    }
    // The GUID must match (case-insensitively, canonical hyphenated form). NB10 has
    // no GUID ⇒ `guid_string()` is `None` ⇒ reject (no GUID-keyed match possible).
    match cv.guid_string() {
        Some(record_guid) => record_guid.eq_ignore_ascii_case(pdb_guid),
        None => false,
    }
}

#[cfg(test)]
mod tests;
