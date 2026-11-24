//! (unlace `ruststdsigs`) FLIRT signatures for the Rust standard library, built
//! from an installed rustup toolchain and cached.
//!
//! A Rust binary links the precompiled `std`, `core` and `alloc` its rustc
//! ships, so their functions are byte-identical to the toolchain's rlibs up to
//! relocations. An image's `.comment` names its compiler
//! (`rustc version 1.94.0-nightly (b68e16cfc 2026-01-11)`); every toolchain under
//! the rustup home names its own in the `.comment` of its `libstd` objects. With
//! `exact` the toolchain whose record equals the image's is taken; with
//! `nearest` the exact one, else the one released nearest to the image's
//! compiler (by the date in the record, then by version). Its three rlibs go
//! through the same pattern and `.sig` writers as `unlace flirt make`, and the
//! result is cached under the user cache directory
//! (`unlace/ruststdsigs/<version>-<target>.sig`), so the build runs once per
//! toolchain. Only an ELF image of a target a toolchain ships rlibs for is
//! considered.

use std::collections::BTreeSet;
use std::path::{Path, PathBuf};

use object::read::{Object, ObjectSection};
use unlace_decomp::ruststdsigs::{RustStdSigs, ruststdsigs};

use super::flirtpat::{FuncPattern, Target, patterns_from_object};
use super::flirtsig::build_sig;

/// The standard-library crates whose functions are signed.
const CRATES: [&str; 3] = ["libstd-", "libcore-", "liballoc-"];

/// Largest rlib read (a `libstd` is about 15 MB).
const MAX_RLIB: u64 = 256 << 20;

/// A compiler identity read from a `rustc version` record.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Rustc {
    /// The record after `rustc version ` (`1.94.0-nightly (b68e16cfc 2026-01-11)`).
    pub raw: String,
    pub version: (u32, u32, u32),
    /// Days since 1970-01-01 of the record's date, when it has one.
    pub day: Option<i64>,
}

impl Rustc {
    /// Parse the text after `rustc version `.
    pub fn parse(raw: &str) -> Option<Rustc> {
        let raw = raw.trim();
        let token = raw.split_whitespace().next()?;
        let numbers = token.split('-').next()?;
        let mut parts = numbers.split('.').map(|p| p.parse::<u32>().ok());
        let version = (
            parts.next()??,
            parts.next()??,
            parts.next().flatten().unwrap_or(0),
        );
        let day = raw
            .rsplit_once(' ')
            .map(|(_, d)| d.trim_end_matches(')'))
            .and_then(parse_date);
        Some(Rustc {
            raw: raw.to_string(),
            version,
            day,
        })
    }
}

/// `YYYY-MM-DD` as days since 1970-01-01.
fn parse_date(s: &str) -> Option<i64> {
    let mut it = s.split('-');
    let (y, m, d): (i64, i64, i64) = (
        it.next()?.parse().ok()?,
        it.next()?.parse().ok()?,
        it.next()?.parse().ok()?,
    );
    if it.next().is_some() || !(1..=12).contains(&m) || !(1..=31).contains(&d) {
        return None;
    }
    let (y, m) = if m <= 2 { (y - 1, m + 12) } else { (y, m) };
    Some(365 * y + y / 4 - y / 100 + y / 400 + (153 * (m - 3) + 2) / 5 + d - 719_469)
}

/// The `rustc version` record of an object's `.comment`, if any.
pub fn comment_rustc(file: &object::File) -> Option<Rustc> {
    let data = file.section_by_name(".comment")?.data().ok()?;
    data.split(|&b| b == 0)
        .filter_map(|r| r.strip_prefix(b"rustc version "))
        .find_map(|r| Rustc::parse(&String::from_utf8_lossy(r)))
}

/// The rustup target triple whose rlibs could have been linked into `file`.
fn target_triple(file: &object::File) -> Option<&'static str> {
    if file.format() != object::BinaryFormat::Elf || !file.is_little_endian() {
        return None;
    }
    match file.architecture() {
        object::Architecture::X86_64 => Some("x86_64-unknown-linux-gnu"),
        object::Architecture::Aarch64 => Some("aarch64-unknown-linux-gnu"),
        _ => None,
    }
}

fn home() -> Option<PathBuf> {
    std::env::var_os("HOME")
        .filter(|h| !h.is_empty())
        .map(PathBuf::from)
}

fn rustup_home() -> Option<PathBuf> {
    std::env::var_os("RUSTUP_HOME")
        .filter(|h| !h.is_empty())
        .map(PathBuf::from)
        .or_else(|| home().map(|h| h.join(".rustup")))
}

fn cache_dir() -> Option<PathBuf> {
    std::env::var_os("XDG_CACHE_HOME")
        .filter(|h| !h.is_empty())
        .map(PathBuf::from)
        .or_else(|| home().map(|h| h.join(".cache")))
        .map(|c| c.join("unlace").join("ruststdsigs"))
}

/// The rlib of `krate` (`libstd-`) in a toolchain's target `lib` directory.
fn rlib(lib: &Path, krate: &str) -> Option<PathBuf> {
    let mut found: Vec<PathBuf> = std::fs::read_dir(lib)
        .ok()?
        .flatten()
        .map(|e| e.path())
        .filter(|p| {
            p.file_name()
                .and_then(|n| n.to_str())
                .is_some_and(|n| n.starts_with(krate) && n.ends_with(".rlib"))
        })
        .collect();
    found.sort();
    found.into_iter().next()
}

fn read_bounded(path: &Path) -> Option<Vec<u8>> {
    let len = std::fs::metadata(path).ok()?.len();
    (len <= MAX_RLIB)
        .then(|| std::fs::read(path).ok())
        .flatten()
}

/// Each object member of an archive.
fn members(bytes: &[u8]) -> Vec<&[u8]> {
    let Ok(archive) = object::read::archive::ArchiveFile::parse(bytes) else {
        return Vec::new();
    };
    archive
        .members()
        .flatten()
        .filter_map(|m| m.data(bytes).ok())
        .filter(|d| object::File::parse(*d).is_ok())
        .collect()
}

/// The compiler a toolchain's `libstd` was built by.
fn toolchain_rustc(lib: &Path) -> Option<Rustc> {
    let bytes = read_bounded(&rlib(lib, "libstd-")?)?;
    members(&bytes)
        .into_iter()
        .find_map(|d| object::File::parse(d).ok().and_then(|f| comment_rustc(&f)))
}

/// Every installed toolchain with rlibs for `triple`, and its compiler.
fn toolchains(triple: &str) -> Vec<(PathBuf, Rustc)> {
    let Some(root) = rustup_home().map(|h| h.join("toolchains")) else {
        return Vec::new();
    };
    let Ok(dir) = std::fs::read_dir(root) else {
        return Vec::new();
    };
    let mut out: Vec<(PathBuf, Rustc)> = dir
        .flatten()
        .map(|e| {
            e.path()
                .join("lib")
                .join("rustlib")
                .join(triple)
                .join("lib")
        })
        .filter_map(|lib| toolchain_rustc(&lib).map(|r| (lib, r)))
        .collect();
    out.sort_by(|a, b| a.0.cmp(&b.0));
    out
}

/// The toolchain `mode` takes for an image built by `image`.
pub fn choose<'a>(
    image: &Rustc,
    candidates: &'a [(PathBuf, Rustc)],
    mode: RustStdSigs,
) -> Option<&'a (PathBuf, Rustc)> {
    if let Some(exact) = candidates.iter().find(|(_, r)| r.raw == image.raw) {
        return Some(exact);
    }
    if mode != RustStdSigs::Nearest {
        return None;
    }
    let version_gap = |r: &Rustc| {
        let v = |(a, b, c): (u32, u32, u32)| {
            i64::from(a) * 1_000_000 + i64::from(b) * 1_000 + i64::from(c)
        };
        (v(r.version) - v(image.version)).abs()
    };
    candidates.iter().min_by_key(|(_, r)| {
        let days = match (r.day, image.day) {
            (Some(a), Some(b)) => (a - b).abs(),
            _ => i64::MAX,
        };
        (days, version_gap(r))
    })
}

/// The `.sig` bytes for the toolchain at `lib`: from the cache, else built from
/// its `std`, `core` and `alloc` rlibs and cached.
fn sig_bytes(lib: &Path, rustc: &Rustc, triple: &str) -> Option<Vec<u8>> {
    let key: String = rustc
        .raw
        .chars()
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '.' {
                c
            } else {
                '_'
            }
        })
        .collect();
    let cached = cache_dir().map(|d| d.join(format!("{key}-{triple}.sig")));
    if let Some(bytes) = cached.as_deref().and_then(|p| std::fs::read(p).ok()) {
        return Some(bytes);
    }
    let mut patterns: Vec<FuncPattern> = Vec::new();
    let mut data_names: BTreeSet<String> = BTreeSet::new();
    let mut target: Option<Target> = None;
    for krate in CRATES {
        let Some(bytes) = rlib(lib, krate).and_then(|p| read_bounded(&p)) else {
            continue;
        };
        for member in members(&bytes) {
            let Ok(mut obj) = patterns_from_object(member) else {
                continue;
            };
            if target.is_some_and(|t| t != obj.target) {
                continue;
            }
            target = Some(obj.target);
            patterns.append(&mut obj.patterns);
            data_names.append(&mut obj.data_names);
        }
    }
    patterns.sort();
    patterns.dedup();
    let built = build_sig(
        &patterns,
        &data_names,
        target?,
        &format!("rust-std {}", rustc.raw),
    )
    .ok()?;
    if let Some(path) = cached {
        if let Some(dir) = path.parent() {
            let _ = std::fs::create_dir_all(dir);
        }
        let _ = std::fs::write(&path, &built.bytes);
    }
    Some(built.bytes)
}

/// The standard-library `.sig` for `file` under the option in force, if a
/// toolchain qualifies.
pub fn signature_bytes(file: &object::File) -> Option<Vec<u8>> {
    let mode = ruststdsigs();
    if mode == RustStdSigs::Off {
        return None;
    }
    let triple = target_triple(file)?;
    let image = comment_rustc(file)?;
    let candidates = toolchains(triple);
    let (lib, rustc) = choose(&image, &candidates, mode)?;
    sig_bytes(lib, rustc, triple)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn rustc(raw: &str) -> Rustc {
        Rustc::parse(raw).expect("parses")
    }

    #[test]
    fn records_parse_with_their_date() {
        let r = rustc("1.94.0-nightly (b68e16cfc 2026-01-11)");
        assert_eq!(r.version, (1, 94, 0));
        assert_eq!(r.day, parse_date("2026-01-11"));
        assert_eq!(parse_date("1970-01-01"), Some(0));
        assert_eq!(
            parse_date("2026-01-12").zip(r.day).map(|(a, b)| a - b),
            Some(1)
        );
        assert_eq!(rustc("1.100.0-dev").day, None);
    }

    #[test]
    fn exact_takes_only_the_same_compiler_and_nearest_the_closest_release() {
        let toolchains = vec![
            (PathBuf::from("a"), rustc("1.95.0 (59807616e 2026-04-14)")),
            (PathBuf::from("b"), rustc("1.100.0 (0ef1bc386 2026-11-09)")),
            (
                PathBuf::from("c"),
                rustc("1.102.0-nightly (29a5d066d 2026-11-12)"),
            ),
        ];
        let image = rustc("1.101.0-nightly (712e1d350 2026-11-05)");
        assert!(choose(&image, &toolchains, RustStdSigs::Exact).is_none());
        let near = choose(&image, &toolchains, RustStdSigs::Nearest).unwrap();
        assert_eq!(near.0, PathBuf::from("b"));
        let old = rustc("1.94.0-nightly (b68e16cfc 2026-01-11)");
        assert_eq!(
            choose(&old, &toolchains, RustStdSigs::Nearest).unwrap().0,
            PathBuf::from("a")
        );
        let same = rustc("1.95.0 (59807616e 2026-04-14)");
        assert_eq!(
            choose(&same, &toolchains, RustStdSigs::Exact).unwrap().0,
            PathBuf::from("a")
        );
    }
}
