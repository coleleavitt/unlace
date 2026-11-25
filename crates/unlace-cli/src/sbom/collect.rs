//! What an image says about its own components: the libraries it loads, the
//! Go modules and Rust crates linked into it, the library version banners it
//! carries, and the toolchain that built it. Read straight off the bytes; no
//! load, no decompile.

use std::collections::{BTreeMap, BTreeSet};
use std::io::Read;
use std::sync::LazyLock;

use object::{Object, ObjectKind, ObjectSection};
use regex::Regex;

use super::{pever, purl};

/// Where a component's evidence came from; decides its SBOM scope.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub(crate) enum Kind {
    /// A shared library the loader resolves at run time (`DT_NEEDED`,
    /// `LC_LOAD_DYLIB`, a PE import).
    SharedLibrary,
    /// A Go module linked in (the build-info `dep` lines).
    GoModule,
    /// A Rust crate linked in (cargo-auditable data or registry source paths).
    RustCrate,
    /// A library whose version banner is embedded in the image.
    Embedded,
}

impl Kind {
    pub(crate) fn as_str(self) -> &'static str {
        match self {
            Kind::SharedLibrary => "shared-library",
            Kind::GoModule => "go-module",
            Kind::RustCrate => "rust-crate",
            Kind::Embedded => "embedded",
        }
    }

    /// `true` when the component's code is inside the image (SPDX `CONTAINS`)
    /// rather than loaded beside it (`DEPENDS_ON`).
    pub(crate) fn is_linked_in(self) -> bool {
        !matches!(self, Kind::SharedLibrary)
    }
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub(crate) struct Component {
    pub kind: Kind,
    pub name: String,
    pub version: Option<String>,
    pub purl: Option<String>,
    /// How the component was found (`DT_NEEDED`, `go buildinfo`, ...).
    pub evidence: String,
    pub properties: Vec<(String, String)>,
}

impl Component {
    /// The stable key a component is referenced by inside one document.
    pub(crate) fn bom_ref(&self) -> String {
        match &self.version {
            Some(v) => format!("{}:{}@{}", self.kind.as_str(), self.name, v),
            None => format!("{}:{}", self.kind.as_str(), self.name),
        }
    }
}

/// The image's own module, when it names one: the Go main module or the
/// cargo-auditable root package.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub(crate) struct MainModule {
    pub name: String,
    pub version: Option<String>,
    pub purl: Option<String>,
}

/// Everything the SBOM reports about one image.
#[derive(Clone, Debug, Default)]
pub(crate) struct Inventory {
    pub format: String,
    pub architecture: String,
    pub bits: u8,
    pub endian: &'static str,
    /// `application` or `library`.
    pub role: &'static str,
    pub entry: u64,
    pub compiler: &'static str,
    /// Build identity: ELF build-id, Mach-O UUID and install name, PE CodeView
    /// GUID/age/path, Go build settings.
    pub identity: Vec<(String, String)>,
    /// Toolchain records (`.comment` strings, Go toolchain, Mach-O build tools).
    pub toolchain: Vec<String>,
    pub main: Option<MainModule>,
    /// PE version-resource strings (`ProductName`, `FileVersion`, ...).
    pub version_info: BTreeMap<String, String>,
    pub components: Vec<Component>,
}

const MAX_LIBS: usize = 4096;
const MAX_RUNS: usize = 1 << 20;
const MAX_BANNERS: usize = 256;
const MAX_AUDITABLE: u64 = 16 << 20;

/// Collect the inventory of `bytes` (one image: a thin slice of a fat Mach-O).
pub(crate) fn collect(bytes: &[u8]) -> Result<Inventory, String> {
    let file = object::File::parse(bytes).map_err(|e| format!("not an object file: {e}"))?;
    let mut inv = Inventory {
        format: format_name(file.format()).to_string(),
        architecture: format!("{:?}", file.architecture()).to_ascii_lowercase(),
        bits: if file.is_64() { 64 } else { 32 },
        endian: if file.is_little_endian() {
            "little"
        } else {
            "big"
        },
        role: role(&file),
        entry: file.entry(),
        compiler: compiler_name(unlace_analysis::sourcelang::detect_compiler(&file, bytes)),
        ..Inventory::default()
    };
    identity(&file, &mut inv);
    let mut comps: Vec<Component> = Vec::new();
    match file.format() {
        object::BinaryFormat::Elf => {
            elf_needed(&file, &mut comps);
            elf_comment(&file, &mut inv);
        }
        object::BinaryFormat::MachO => macho_commands(bytes, &mut inv, &mut comps),
        object::BinaryFormat::Pe => {
            pe_imports(&file, &mut comps);
            inv.version_info = pever::string_table(bytes);
        }
        _ => {}
    }
    go_buildinfo(&file, bytes, &mut inv, &mut comps);
    rust_crates(&file, bytes, &mut inv, &mut comps);
    embedded_banners(bytes, &mut comps);
    inv.components = dedup(comps);
    Ok(inv)
}

fn format_name(format: object::BinaryFormat) -> &'static str {
    match format {
        object::BinaryFormat::Elf => "elf",
        object::BinaryFormat::MachO => "macho",
        object::BinaryFormat::Pe => "pe",
        object::BinaryFormat::Coff => "coff",
        object::BinaryFormat::Wasm => "wasm",
        object::BinaryFormat::Xcoff => "xcoff",
        _ => "unknown",
    }
}

fn compiler_name(compiler: unlace_analysis::sourcelang::Compiler) -> &'static str {
    use unlace_analysis::sourcelang::Compiler;
    match compiler {
        Compiler::Gcc => "gcc",
        Compiler::Clang => "clang",
        Compiler::Rustc => "rustc",
        Compiler::Go => "go",
        Compiler::Swift => "swift",
        Compiler::Unknown => "unknown",
    }
}

/// `library` for a shared object, `application` otherwise. An ELF `ET_DYN`
/// with an `.interp` is a position-independent executable.
fn role(file: &object::File) -> &'static str {
    let pie =
        file.format() == object::BinaryFormat::Elf && file.section_by_name(".interp").is_some();
    match file.kind() {
        ObjectKind::Dynamic if !pie => "library",
        _ => "application",
    }
}

pub(crate) fn hex(bytes: &[u8]) -> String {
    bytes.iter().map(|b| format!("{b:02x}")).collect()
}

fn identity(file: &object::File, inv: &mut Inventory) {
    if let Ok(Some(id)) = file.build_id() {
        inv.identity.push(("build-id".into(), hex(id)));
    }
    if let Ok(Some(uuid)) = file.mach_uuid() {
        inv.identity.push(("uuid".into(), hex(&uuid)));
    }
    if let Ok(Some(cv)) = file.pdb_info() {
        inv.identity.push(("pdb-guid".into(), hex(&cv.guid())));
        inv.identity.push(("pdb-age".into(), cv.age().to_string()));
        inv.identity.push((
            "pdb-path".into(),
            String::from_utf8_lossy(cv.path()).into_owned(),
        ));
    }
}

pub(crate) fn read_word(data: &[u8], at: usize, size: usize, little: bool) -> Option<u64> {
    if size == 0 || size > 8 {
        return None;
    }
    let raw = data.get(at..at.checked_add(size)?)?;
    let mut w = [0u8; 8];
    if little {
        w[..size].copy_from_slice(raw);
        Some(u64::from_le_bytes(w))
    } else {
        w[8 - size..].copy_from_slice(raw);
        Some(u64::from_be_bytes(w))
    }
}

fn cstr_at(data: &[u8], at: u64) -> Option<String> {
    let at = usize::try_from(at).ok()?;
    let rest = data.get(at..)?;
    let end = rest.iter().take(4096).position(|&b| b == 0)?;
    std::str::from_utf8(&rest[..end])
        .ok()
        .filter(|s| !s.is_empty())
        .map(str::to_string)
}

/// `DT_NEEDED` libraries off `.dynamic`, each with the highest symbol version
/// it is required at (`.gnu.version_r`, e.g. `GLIBC_2.34`).
fn elf_needed(file: &object::File, comps: &mut Vec<Component>) {
    let (Some(dynamic), Some(dynstr)) = (
        file.section_by_name(".dynamic").and_then(|s| s.data().ok()),
        file.section_by_name(".dynstr").and_then(|s| s.data().ok()),
    ) else {
        return;
    };
    let little = file.is_little_endian();
    let word = if file.is_64() { 8 } else { 4 };
    let needs = elf_verneed(file, dynstr, little);
    for name in dt_needed(dynamic, dynstr, word, little) {
        let mut properties = Vec::new();
        if let Some(v) = needs.get(&name).and_then(|vs| highest_version(vs)) {
            properties.push(("unlace:requires".into(), v));
        }
        comps.push(Component {
            kind: Kind::SharedLibrary,
            name,
            version: None,
            purl: None,
            evidence: "DT_NEEDED".into(),
            properties,
        });
    }
}

/// The `DT_NEEDED` names of a `.dynamic` table of `word`-byte entries.
pub(crate) fn dt_needed(dynamic: &[u8], dynstr: &[u8], word: usize, little: bool) -> Vec<String> {
    const DT_NULL: u64 = 0;
    const DT_NEEDED: u64 = 1;
    let mut out = Vec::new();
    for i in 0..MAX_LIBS {
        let at = i * 2 * word;
        let (Some(tag), Some(val)) = (
            read_word(dynamic, at, word, little),
            read_word(dynamic, at + word, word, little),
        ) else {
            break;
        };
        if tag == DT_NULL {
            break;
        }
        if tag == DT_NEEDED
            && let Some(name) = cstr_at(dynstr, val)
        {
            out.push(name);
        }
    }
    out
}

/// `file -> [version names]` from `.gnu.version_r` (`Elf_Verneed` chains).
fn elf_verneed(file: &object::File, dynstr: &[u8], little: bool) -> BTreeMap<String, Vec<String>> {
    match file
        .section_by_name(".gnu.version_r")
        .and_then(|s| s.data().ok())
    {
        Some(data) => verneed(data, dynstr, little),
        None => BTreeMap::new(),
    }
}

pub(crate) fn verneed(data: &[u8], dynstr: &[u8], little: bool) -> BTreeMap<String, Vec<String>> {
    let mut out: BTreeMap<String, Vec<String>> = BTreeMap::new();
    let u16_at = |at: usize| read_word(data, at, 2, little);
    let u32_at = |at: usize| read_word(data, at, 4, little);
    let mut at = 0usize;
    for _ in 0..MAX_LIBS {
        let (Some(cnt), Some(fname), Some(aux), Some(next)) = (
            u16_at(at + 2),
            u32_at(at + 4),
            u32_at(at + 8),
            u32_at(at + 12),
        ) else {
            break;
        };
        let Some(lib) = cstr_at(dynstr, fname) else {
            break;
        };
        let mut a = at.saturating_add(aux as usize);
        for _ in 0..cnt.min(256) {
            let (Some(name), Some(anext)) = (u32_at(a + 8), u32_at(a + 12)) else {
                break;
            };
            if let Some(v) = cstr_at(dynstr, name) {
                out.entry(lib.clone()).or_default().push(v);
            }
            if anext == 0 {
                break;
            }
            a = a.saturating_add(anext as usize);
        }
        if next == 0 {
            break;
        }
        at = at.saturating_add(next as usize);
    }
    out
}

/// The highest of a library's required versions (`GLIBC_2.2.5` < `GLIBC_2.34`),
/// compared by the numeric fields after the last `_`.
pub(crate) fn highest_version(versions: &[String]) -> Option<String> {
    let numbers = |v: &str| -> Option<Vec<u64>> {
        let (_, num) = v.rsplit_once('_')?;
        num.split('.').map(|f| f.parse().ok()).collect()
    };
    versions
        .iter()
        .filter_map(|v| numbers(v).map(|n| (n, v)))
        .max_by(|a, b| a.0.cmp(&b.0))
        .map(|(_, v)| v.clone())
}

/// The `.comment` toolchain records (`GCC: (GNU) 13.2.0`, `rustc version ...`).
fn elf_comment(file: &object::File, inv: &mut Inventory) {
    let Some(data) = file.section_by_name(".comment").and_then(|s| s.data().ok()) else {
        return;
    };
    for rec in data.split(|&b| b == 0).take(64) {
        if let Ok(s) = std::str::from_utf8(rec) {
            let s = s.trim();
            if !s.is_empty() && !inv.toolchain.iter().any(|t| t == s) {
                inv.toolchain.push(s.to_string());
            }
        }
    }
}

fn pe_imports(file: &object::File, comps: &mut Vec<Component>) {
    let Ok(imports) = file.imports() else {
        return;
    };
    let mut seen = BTreeSet::new();
    for import in imports {
        let lib = String::from_utf8_lossy(import.library()).into_owned();
        if lib.is_empty() || !seen.insert(lib.to_ascii_lowercase()) {
            continue;
        }
        if seen.len() > MAX_LIBS {
            break;
        }
        comps.push(Component {
            kind: Kind::SharedLibrary,
            name: lib,
            version: None,
            purl: None,
            evidence: "PE import".into(),
            properties: Vec::new(),
        });
    }
}

/// A Mach-O packed `X.Y.Z` version (`xxxx.yy.zz` nibbles).
pub(crate) fn macho_version(v: u32) -> String {
    format!("{}.{}.{}", v >> 16, (v >> 8) & 0xff, v & 0xff)
}

fn macho_platform(p: u32) -> &'static str {
    match p {
        1 => "macos",
        2 => "ios",
        3 => "tvos",
        4 => "watchos",
        5 => "bridgeos",
        6 => "maccatalyst",
        7 => "iossimulator",
        8 => "tvossimulator",
        9 => "watchossimulator",
        10 => "driverkit",
        11 => "visionos",
        12 => "visionossimulator",
        _ => "unknown",
    }
}

fn macho_tool(t: u32) -> &'static str {
    match t {
        1 => "clang",
        2 => "swift",
        3 => "ld",
        4 => "lld",
        _ => "tool",
    }
}

fn dylib_evidence(cmd: u32) -> Option<&'static str> {
    Some(match cmd {
        0xc => "LC_LOAD_DYLIB",
        0x8000_0018 => "LC_LOAD_WEAK_DYLIB",
        0x8000_001f => "LC_REEXPORT_DYLIB",
        0x20 => "LC_LAZY_LOAD_DYLIB",
        0x8000_0023 => "LC_LOAD_UPWARD_DYLIB",
        _ => return None,
    })
}

/// The dylibs a thin Mach-O loads (with their current and compatibility
/// versions), its install name, build platform and tools, and source version.
pub(crate) fn macho_commands(bytes: &[u8], inv: &mut Inventory, comps: &mut Vec<Component>) {
    let Some(magic) = read_word(bytes, 0, 4, true) else {
        return;
    };
    let (little, header) = match magic {
        0xfeed_face => (true, 28usize),
        0xfeed_facf => (true, 32),
        0xcefa_edfe => (false, 28),
        0xcffa_edfe => (false, 32),
        _ => return,
    };
    let Some(ncmds) = read_word(bytes, 16, 4, little) else {
        return;
    };
    let mut at = header;
    for _ in 0..ncmds.min(65_536) {
        let (Some(cmd), Some(size)) = (
            read_word(bytes, at, 4, little),
            read_word(bytes, at + 4, 4, little),
        ) else {
            break;
        };
        let (cmd, size) = (cmd as u32, size as usize);
        let Some(end) = at
            .checked_add(size)
            .filter(|&e| size >= 8 && e <= bytes.len())
        else {
            break;
        };
        let body = &bytes[at..end];
        let field = |off: usize| read_word(body, off, 4, little).map(|v| v as u32);
        if let Some(evidence) = dylib_evidence(cmd) {
            if let (Some(off), Some(cur), Some(compat)) = (field(8), field(16), field(20))
                && let Some(name) = cstr_at(body, u64::from(off))
            {
                comps.push(Component {
                    kind: Kind::SharedLibrary,
                    name,
                    version: Some(macho_version(cur)),
                    purl: None,
                    evidence: evidence.into(),
                    properties: vec![(
                        "unlace:compatibility-version".into(),
                        macho_version(compat),
                    )],
                });
            }
        } else if cmd == 0xd {
            if let (Some(off), Some(cur)) = (field(8), field(16))
                && let Some(name) = cstr_at(body, u64::from(off))
            {
                inv.identity.push(("install-name".into(), name));
                inv.identity
                    .push(("current-version".into(), macho_version(cur)));
            }
        } else if cmd == 0x32 {
            if let (Some(platform), Some(minos), Some(sdk), Some(ntools)) =
                (field(8), field(12), field(16), field(20))
            {
                inv.toolchain.push(format!(
                    "{} {} (sdk {})",
                    macho_platform(platform),
                    macho_version(minos),
                    macho_version(sdk)
                ));
                for t in 0..ntools.min(32) as usize {
                    if let (Some(tool), Some(ver)) = (field(24 + 8 * t), field(28 + 8 * t)) {
                        inv.toolchain
                            .push(format!("{} {}", macho_tool(tool), macho_version(ver)));
                    }
                }
            }
        } else if matches!(cmd, 0x24 | 0x25 | 0x2f | 0x30) {
            if let (Some(ver), Some(sdk)) = (field(8), field(12)) {
                let os = match cmd {
                    0x24 => "macos",
                    0x25 => "ios",
                    0x2f => "tvos",
                    _ => "watchos",
                };
                inv.toolchain.push(format!(
                    "{os} {} (sdk {})",
                    macho_version(ver),
                    macho_version(sdk)
                ));
            }
        } else if cmd == 0x2a
            && let Some(v) = read_word(body, 8, 8, little)
        {
            let fields = [
                v >> 40,
                (v >> 30) & 0x3ff,
                (v >> 20) & 0x3ff,
                (v >> 10) & 0x3ff,
                v & 0x3ff,
            ];
            let text: Vec<String> = fields.iter().map(u64::to_string).collect();
            inv.identity.push(("source-version".into(), text.join(".")));
        }
        at = end;
    }
}

fn uvarint(b: &[u8]) -> Option<(u64, usize)> {
    let mut x: u64 = 0;
    let mut s = 0u32;
    for (i, &c) in b.iter().take(10).enumerate() {
        if c < 0x80 {
            return Some((x | (u64::from(c) << s), i + 1));
        }
        x |= u64::from(c & 0x7f) << s;
        s += 7;
    }
    None
}

/// The inline (go1.18+) build-info strings: the toolchain version and the
/// module info. `None` for the pointer form or a malformed blob.
pub(crate) fn buildinfo_strings(blob: &[u8]) -> Option<(String, String)> {
    const MAGIC: &[u8; 14] = b"\xff Go buildinf:";
    if blob.len() < 33 || &blob[..14] != MAGIC || blob[15] & 0x2 == 0 {
        return None;
    }
    let read = |at: usize| -> Option<(String, usize)> {
        let (len, n) = uvarint(blob.get(at..)?)?;
        let start = at + n;
        let end = start.checked_add(usize::try_from(len).ok()?)?;
        Some((
            String::from_utf8_lossy(blob.get(start..end)?).into_owned(),
            end,
        ))
    };
    let (version, next) = read(32)?;
    let modinfo = read(next).map(|(m, _)| m).unwrap_or_default();
    Some((version, modinfo))
}

/// A Go dependency line (`dep`) with the replacement (`=>`) that follows it.
#[derive(Debug, Default, PartialEq, Eq)]
pub(crate) struct GoDep {
    pub path: String,
    pub version: String,
    pub sum: Option<String>,
    pub replaced_by: Option<(String, String)>,
}

/// One parsed `debug/buildinfo` module-info text.
#[derive(Debug, Default, PartialEq, Eq)]
pub(crate) struct ModInfo {
    pub path: Option<String>,
    pub main: Option<(String, String)>,
    pub deps: Vec<GoDep>,
    pub settings: Vec<(String, String)>,
}

/// Parse the module info, after stripping the 16-byte sentinels Go wraps it in.
pub(crate) fn parse_modinfo(text: &str) -> ModInfo {
    let bytes = text.as_bytes();
    let text = if bytes.len() >= 33 && bytes[bytes.len() - 17] == b'\n' {
        text.get(16..text.len() - 16).unwrap_or(text)
    } else {
        text
    };
    let mut info = ModInfo::default();
    for line in text.lines() {
        let fields: Vec<&str> = line.split('\t').collect();
        match fields.as_slice() {
            ["path", p, ..] => info.path = Some((*p).to_string()),
            ["mod", p, v, ..] => info.main = Some(((*p).to_string(), (*v).to_string())),
            ["dep", p, v, rest @ ..] => info.deps.push(GoDep {
                path: (*p).to_string(),
                version: (*v).to_string(),
                sum: rest
                    .first()
                    .filter(|s| !s.is_empty())
                    .map(|s| (*s).to_string()),
                replaced_by: None,
            }),
            ["=>", p, v, ..] => {
                if let Some(last) = info.deps.last_mut() {
                    last.replaced_by = Some(((*p).to_string(), (*v).to_string()));
                }
            }
            ["build", kv, ..] => {
                if let Some((k, v)) = kv.split_once('=') {
                    info.settings.push((k.to_string(), v.to_string()));
                }
            }
            _ => {}
        }
    }
    info
}

fn go_buildinfo(
    file: &object::File,
    bytes: &[u8],
    inv: &mut Inventory,
    comps: &mut Vec<Component>,
) {
    use unlace_analysis::loader::gobuildinfo;
    let Some((version, modinfo)) = gobuildinfo::buildinfo_blob(file).and_then(buildinfo_strings)
    else {
        if let Some((maj, min)) = gobuildinfo::go_toolchain_version(bytes) {
            inv.toolchain.push(format!("go{maj}.{min}"));
        }
        return;
    };
    inv.toolchain.push(version);
    let info = parse_modinfo(&modinfo);
    if let Some(path) = &info.path {
        inv.identity.push(("go-path".into(), path.clone()));
    }
    if let Some((path, ver)) = &info.main {
        let ver = (ver != "(devel)" && !ver.is_empty()).then(|| ver.clone());
        inv.main = Some(MainModule {
            purl: Some(purl::golang(path, ver.as_deref())),
            name: path.clone(),
            version: ver,
        });
    }
    for (k, v) in &info.settings {
        inv.identity.push((format!("go-build:{k}"), v.clone()));
    }
    for dep in info.deps {
        let (name, version) = match &dep.replaced_by {
            Some((rp, rv)) if !rv.is_empty() => (rp.clone(), rv.clone()),
            _ => (dep.path.clone(), dep.version.clone()),
        };
        let mut properties = Vec::new();
        if let Some(sum) = dep.sum {
            properties.push(("unlace:go-sum".into(), sum));
        }
        if dep.replaced_by.is_some() {
            properties.push((
                "unlace:go-replaces".into(),
                format!("{}@{}", dep.path, dep.version),
            ));
        }
        comps.push(Component {
            kind: Kind::GoModule,
            purl: Some(purl::golang(&name, Some(&version))),
            name,
            version: Some(version),
            evidence: "go buildinfo".into(),
            properties,
        });
    }
}

/// cargo-auditable's `.dep-v0` (zlib-compressed JSON) when present, then the
/// registry crates the image's source paths name.
fn rust_crates(file: &object::File, bytes: &[u8], inv: &mut Inventory, comps: &mut Vec<Component>) {
    if let Some(data) = file.section_by_name(".dep-v0").and_then(|s| s.data().ok()) {
        for pkg in auditable_packages(data) {
            let purl = purl::cargo(&pkg.name, &pkg.version);
            if pkg.root {
                if inv.main.is_none() {
                    inv.main = Some(MainModule {
                        name: pkg.name,
                        version: Some(pkg.version),
                        purl: Some(purl),
                    });
                }
                continue;
            }
            let mut properties = Vec::new();
            if let Some(source) = pkg.source {
                properties.push(("unlace:cargo-source".into(), source));
            }
            if let Some(kind) = pkg.kind {
                properties.push(("unlace:cargo-kind".into(), kind));
            }
            comps.push(Component {
                kind: Kind::RustCrate,
                purl: Some(purl),
                name: pkg.name,
                version: Some(pkg.version),
                evidence: "cargo-auditable".into(),
                properties,
            });
        }
    }
    for (name, version) in unlace_analysis::sourcelang::registry_crates(bytes) {
        comps.push(Component {
            kind: Kind::RustCrate,
            purl: Some(purl::cargo(&name, &version)),
            name,
            version: Some(version),
            evidence: "registry source path".into(),
            properties: Vec::new(),
        });
    }
}

/// One package of a cargo-auditable dependency list.
#[derive(Debug, PartialEq, Eq)]
pub(crate) struct AuditablePackage {
    pub name: String,
    pub version: String,
    pub source: Option<String>,
    pub kind: Option<String>,
    pub root: bool,
}

pub(crate) fn auditable_packages(data: &[u8]) -> Vec<AuditablePackage> {
    let mut text = Vec::new();
    if flate2::read::ZlibDecoder::new(data)
        .take(MAX_AUDITABLE)
        .read_to_end(&mut text)
        .is_err()
    {
        return Vec::new();
    }
    let Ok(doc) = serde_json::from_slice::<serde_json::Value>(&text) else {
        return Vec::new();
    };
    let Some(packages) = doc.get("packages").and_then(|p| p.as_array()) else {
        return Vec::new();
    };
    let text_of =
        |p: &serde_json::Value, key: &str| p.get(key).and_then(|s| s.as_str()).map(str::to_string);
    packages
        .iter()
        .filter_map(|p| {
            Some(AuditablePackage {
                name: text_of(p, "name")?,
                version: text_of(p, "version")?,
                source: text_of(p, "source"),
                kind: text_of(p, "kind"),
                root: p.get("root").and_then(|r| r.as_bool()).unwrap_or(false),
            })
        })
        .collect()
}

struct Banner {
    name: &'static str,
    needle: &'static str,
    pattern: Regex,
}

/// Version banners libraries compile into whatever links them. Each pattern
/// captures the version in group 1; `needle` is a literal every match holds.
static BANNERS: LazyLock<Vec<Banner>> = LazyLock::new(|| {
    [
        (
            "openssl",
            "OpenSSL ",
            r"\bOpenSSL (\d+\.\d+\.\d+[a-z]?)(?:[ -]|$)",
        ),
        ("libressl", "LibreSSL ", r"\bLibreSSL (\d+\.\d+\.\d+)"),
        ("boringssl", "BoringSSL ", r"\bBoringSSL (\d+\.\d+\.\d+)"),
        ("mbedtls", "bed TLS ", r"\b[Mm]bed TLS (\d+\.\d+\.\d+)"),
        ("wolfssl", "wolfSSL ", r"\bwolfSSL (\d+\.\d+\.\d+)"),
        (
            "zlib",
            "flate ",
            r"\b(?:deflate|inflate) (\d+\.\d+(?:\.\d+)*) Copyright",
        ),
        (
            "libpng",
            "libpng version ",
            r"\blibpng version (\d+\.\d+\.\d+)",
        ),
        (
            "libjpeg-turbo",
            "libjpeg-turbo version ",
            r"\blibjpeg-turbo version (\d+\.\d+\.\d+)",
        ),
        ("curl", "libcurl/", r"\blibcurl/(\d+\.\d+\.\d+)"),
        (
            "glibc",
            "GNU C Library",
            r"GNU C Library \([^)]*\) (?:stable )?release version (\d+\.\d+(?:\.\d+)?)",
        ),
        ("busybox", "BusyBox v", r"\bBusyBox v(\d+\.\d+\.\d+)"),
        ("lua", "Lua ", r"\bLua (\d+\.\d+(?:\.\d+)?)\s+Copyright"),
        ("expat", "expat_", r"\bexpat_(\d+\.\d+\.\d+)"),
        ("openssh", "OpenSSH_", r"\bOpenSSH_(\d+\.\d+(?:p\d+)?)"),
        ("dropbear", "dropbear_", r"\bdropbear_(\d{4}\.\d+)"),
        (
            "sqlite",
            "SQLite version ",
            r"\bSQLite version (\d+\.\d+\.\d+)",
        ),
        ("pcre2", "PCRE2 ", r"\bPCRE2 (\d+\.\d+)\b"),
        ("xz", "liblzma ", r"\bliblzma (\d+\.\d+\.\d+)"),
        ("libxml2", "libxml2-", r"\blibxml2-(\d+\.\d+\.\d+)"),
    ]
    .into_iter()
    .filter_map(|(name, needle, re)| {
        Regex::new(re).ok().map(|pattern| Banner {
            name,
            needle,
            pattern,
        })
    })
    .collect()
});

/// The printable ASCII runs of `bytes`, at least four characters long.
pub(crate) fn ascii_runs(bytes: &[u8]) -> impl Iterator<Item = &str> {
    bytes
        .split(|&b| !(b == b'\t' || (0x20..0x7f).contains(&b)))
        .filter(|run| run.len() >= 4)
        .take(MAX_RUNS)
        .filter_map(|run| std::str::from_utf8(run).ok())
}

/// Library version banners in `runs`: `(name, version, banner text)`.
pub(crate) fn banners_in<'a>(runs: impl Iterator<Item = &'a str>) -> Vec<(String, String, String)> {
    let mut out = Vec::new();
    for run in runs {
        for banner in BANNERS.iter() {
            if !run.contains(banner.needle) {
                continue;
            }
            if let Some(c) = banner.pattern.captures(run)
                && let Some(v) = c.get(1)
            {
                let text: String = run.chars().take(120).collect();
                out.push((banner.name.to_string(), v.as_str().to_string(), text));
            }
        }
        if out.len() >= MAX_BANNERS {
            break;
        }
    }
    out
}

fn embedded_banners(bytes: &[u8], comps: &mut Vec<Component>) {
    for (name, version, text) in banners_in(ascii_runs(bytes)) {
        comps.push(Component {
            kind: Kind::Embedded,
            purl: Some(purl::generic(&name, &version)),
            name,
            version: Some(version),
            evidence: "version string".into(),
            properties: vec![("unlace:banner".into(), text)],
        });
    }
}

/// One component per `(kind, name, version)`, evidence and properties of
/// every sighting merged, ordered by kind, name, then version.
pub(crate) fn dedup(comps: Vec<Component>) -> Vec<Component> {
    let mut by_key: BTreeMap<(Kind, String, Option<String>), Component> = BTreeMap::new();
    for c in comps {
        let key = (c.kind, c.name.clone(), c.version.clone());
        match by_key.get_mut(&key) {
            Some(prev) => {
                if !prev.evidence.split(", ").any(|e| e == c.evidence) {
                    prev.evidence = format!("{}, {}", prev.evidence, c.evidence);
                }
                for p in c.properties {
                    if !prev.properties.contains(&p) {
                        prev.properties.push(p);
                    }
                }
            }
            None => {
                by_key.insert(key, c);
            }
        }
    }
    by_key.into_values().collect()
}
