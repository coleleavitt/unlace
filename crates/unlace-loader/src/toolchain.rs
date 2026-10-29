//! Producing-toolchain fingerprinting.
//!
//! Classifies which language runtime / compiler produced a [`BinaryImage`]
//! from cheap, already-decoded evidence: the presence of Go moduledata /
//! Swift metadata, language-runtime section names (`.gopclntab`,
//! `__swift5_proto`, `.cormeta`), symbol/section fingerprints for Rust,
//! GCC, Clang, MSVC and mingw-w64, and the version strings compilers leave
//! behind (`.comment`, Go build info, `GLIBC_*` symbol versions). Knowing
//! the toolchain lets later passes pick the right runtime structures,
//! demanglers, and signature sets.
//!
//! This is a best-effort classifier: it returns the highest-confidence
//! match it can justify from the evidence, or [`Toolchain::Unknown`] — it
//! never guesses past the evidence.

use std::fmt;

use crate::image::{BinaryImage, OsAbi, RichHeader};

/// Detected producing toolchain / language runtime.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Toolchain {
    Go,
    Swift,
    Rust,
    DotNet,
    Msvc,
    /// GCC targeting Windows (mingw-w64 runtime).
    Mingw,
    Gcc,
    Clang,
    #[default]
    Unknown,
}

impl Toolchain {
    pub const fn as_str(self) -> &'static str {
        match self {
            Self::Go => "Go",
            Self::Swift => "Swift",
            Self::Rust => "Rust",
            Self::DotNet => ".NET",
            Self::Msvc => "MSVC",
            Self::Mingw => "mingw-w64",
            Self::Gcc => "GCC",
            Self::Clang => "Clang",
            Self::Unknown => "unknown",
        }
    }
}

impl fmt::Display for Toolchain {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(self.as_str())
    }
}

/// A tool that leaves its version in the image.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Tool {
    Gcc,
    Clang,
    Rustc,
    Go,
    /// LLVM's linker (`Linker: LLD 20.1.2` in `.comment`).
    Lld,
    /// Microsoft's compiler, as `cl.exe` prints it: `19.29.30133` is
    /// `_MSC_VER` 1929, build 30133 (from the PE Rich header).
    Msvc,
}

impl fmt::Display for Tool {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(match self {
            Self::Gcc => "GCC",
            Self::Clang => "clang",
            Self::Rustc => "rustc",
            Self::Go => "go",
            Self::Lld => "LLD",
            Self::Msvc => "MSVC",
        })
    }
}

/// A dotted release number (`15.2.1`, `1.26.2`, `2.34`). A missing
/// component is 0.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Default)]
pub struct Version {
    pub major: u32,
    pub minor: u32,
    pub patch: u32,
}

impl Version {
    pub const fn new(major: u32, minor: u32, patch: u32) -> Self {
        Self {
            major,
            minor,
            patch,
        }
    }

    /// Parse the leading `digits(.digits)*` of `text`; anything after the
    /// number (`-nightly`, ` 20260214`) is ignored.
    pub fn parse_prefix(text: &str) -> Option<Self> {
        let end = text
            .find(|c: char| !c.is_ascii_digit() && c != '.')
            .unwrap_or(text.len());
        let mut parts = text[..end].split('.').map(|part| part.parse::<u32>().ok());
        let major = parts.next().flatten()?;
        let minor = parts.next().flatten().unwrap_or(0);
        let patch = parts.next().flatten().unwrap_or(0);
        Some(Self::new(major, minor, patch))
    }
}

impl fmt::Display for Version {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}.{}.{}", self.major, self.minor, self.patch)
    }
}

/// A tool and the version it recorded.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ToolVersion {
    pub tool: Tool,
    pub version: Version,
}

impl fmt::Display for ToolVersion {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{} {}", self.tool, self.version)
    }
}

/// The C library the image was linked against.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Libc {
    /// `version` is the newest `GLIBC_x.y` symbol version the image
    /// needs (a lower bound), or `None` for a static link.
    Glibc {
        version: Option<Version>,
    },
    Musl,
}

impl fmt::Display for Libc {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Glibc {
                version: Some(version),
            } => write!(f, "glibc >= {}.{}", version.major, version.minor),
            Self::Glibc { version: None } => f.write_str("glibc"),
            Self::Musl => f.write_str("musl"),
        }
    }
}

/// Everything the image says about who built it.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct ToolchainReport {
    pub toolchain: Toolchain,
    /// Tools named by the image with their versions, in the order found,
    /// without duplicates. `.comment` lists one entry per contributing
    /// compiler build, so several GCC versions are normal.
    pub tools: Vec<ToolVersion>,
    pub libc: Option<Libc>,
}

impl ToolchainReport {
    pub fn detect(image: &BinaryImage) -> Self {
        let mut tools = Vec::new();
        for line in comment_lines(image) {
            if let Some(tool) = parse_comment_line(&line)
                && !tools.contains(&tool)
            {
                tools.push(tool);
            }
        }
        for tool in image.rich_header.iter().flat_map(msvc_tool_versions) {
            if !tools.contains(&tool) {
                tools.push(tool);
            }
        }
        if let Some(version) = go_build_version(image) {
            tools.push(ToolVersion {
                tool: Tool::Go,
                version,
            });
        }
        Self {
            toolchain: detect_toolchain(image),
            tools,
            libc: detect_libc(image),
        }
    }

    /// The newest recorded version of `tool`.
    pub fn version_of(&self, tool: Tool) -> Option<Version> {
        self.tools
            .iter()
            .filter(|entry| entry.tool == tool)
            .map(|entry| entry.version)
            .max()
    }

    pub fn has_tool(&self, tool: Tool) -> bool {
        self.tools.iter().any(|entry| entry.tool == tool)
    }
}

impl fmt::Display for ToolchainReport {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}", self.toolchain)?;
        for tool in &self.tools {
            write!(f, ", {tool}")?;
        }
        if let Some(libc) = self.libc {
            write!(f, ", {libc}")?;
        }
        Ok(())
    }
}

/// Fingerprint the producing toolchain of `image`. Checked in
/// highest-confidence-first order: decoded language metadata (Go/Swift), then
/// language-runtime section names (.NET/Go/Swift/Rust), then C/C++ compiler
/// symbol/section evidence (Rust > MSVC > mingw > Clang > GCC).
pub fn detect_toolchain(image: &BinaryImage) -> Toolchain {
    // Parsed structured metadata is the strongest signal.
    if image.go_module.is_some() {
        return Toolchain::Go;
    }
    if image.swift_info.is_some() {
        return Toolchain::Swift;
    }

    let has_section = |needle: &str| image.sections.iter().any(|s| s.name.contains(needle));

    // .NET CLR PE: `.cormeta` is the CLR header section.
    if has_section(".cormeta") {
        return Toolchain::DotNet;
    }
    // Go pclntab without a decoded moduledata still names Go.
    if has_section(".gopclntab") || has_section("__gopclntab") || has_section(".go.buildinfo") {
        return Toolchain::Go;
    }
    // Swift metadata sections.
    if has_section("swift5") || has_section("__swift5") {
        return Toolchain::Swift;
    }

    // Symbol-based evidence.
    let any_symbol = |pred: &dyn Fn(&str) -> bool| image.symbols.values().any(|s| pred(&s.name));
    let any_string = |pred: &dyn Fn(&str) -> bool| image.string_table.values().any(|s| pred(s));
    let comments = comment_lines(image);

    // Rust: mangled `_R…`/legacy `_ZN…17h<hash>E`, a `.rustc` section, the
    // `rustc version` comment, or (stripped) std's `/rustc/<commit>/` paths.
    if has_section(".rustc")
        || comments
            .iter()
            .any(|line| line.starts_with("rustc version"))
        || any_symbol(&|n| n.contains("__rust_") || n.starts_with("_RNv") || n.starts_with("_RNc"))
        || any_string(&|s| s.contains("/rustc/") || s.starts_with("library/std/src/"))
    {
        return Toolchain::Rust;
    }
    // MSVC: a Rich header is MSVC-link-exclusive, or mangled `?…@@` symbols.
    if image.rich_header.is_some() || any_symbol(&|n| n.starts_with('?') && n.contains("@@")) {
        return Toolchain::Msvc;
    }
    // mingw-w64: its pseudo-relocation runtime is linked into every image,
    // and only GCC leaves `GCC:` idents in a PE.
    if has_mingw_runtime(image)
        || any_symbol(&|n| n.starts_with("__mingw_") || n == "_pei386_runtime_relocator")
        || (image.os_abi == OsAbi::Windows && comments.iter().any(|line| line.starts_with("GCC:")))
    {
        return Toolchain::Mingw;
    }
    // Clang vs GCC: both emit Itanium `_Z…`; the `.comment` entries name
    // the compiler of each object, and the symbol/section fallbacks below
    // cover images without one.
    let mut clang = false;
    let mut gcc = false;
    for line in &comments {
        match parse_comment_line(line).map(|t| t.tool) {
            Some(Tool::Clang) => clang = true,
            Some(Tool::Gcc) => gcc = true,
            _ => {}
        }
    }
    if clang {
        return Toolchain::Clang;
    }
    if gcc {
        return Toolchain::Gcc;
    }
    if has_section(".clang") || any_symbol(&|n| n.contains("__clang_call_terminate")) {
        return Toolchain::Clang;
    }
    if has_section(".gcc_except_table") || any_symbol(&|n| n.contains("__gxx_personality")) {
        return Toolchain::Gcc;
    }

    Toolchain::Unknown
}

/// The NUL-separated entries of the ELF `.comment` section, or, in a PE
/// (whose linker keeps no `.comment`), the `GCC: ...` ident strings that
/// mingw-w64's GCC leaves in `.rdata`.
fn comment_lines(image: &BinaryImage) -> Vec<String> {
    let mut lines: Vec<String> = image
        .sections
        .iter()
        .filter(|s| s.name == ".comment")
        .flat_map(|s| s.data.split(|&b| b == 0))
        .filter(|entry| !entry.is_empty())
        .map(|entry| String::from_utf8_lossy(entry).trim().to_string())
        .collect();
    if lines.is_empty() && image.os_abi == OsAbi::Windows {
        for section in image.sections.iter().filter(|s| s.name == ".rdata") {
            for at in find_all(&section.data, b"GCC: (") {
                let rest = &section.data[at..];
                let end = rest.iter().position(|&b| b == 0).unwrap_or(rest.len());
                lines.push(String::from_utf8_lossy(&rest[..end]).trim().to_string());
            }
        }
    }
    lines
}

/// Every offset at which `needle` occurs in `haystack`.
fn find_all<'a>(haystack: &'a [u8], needle: &'a [u8]) -> impl Iterator<Item = usize> + 'a {
    haystack
        .windows(needle.len())
        .enumerate()
        .filter(move |(_, window)| *window == needle)
        .map(|(at, _)| at)
}

/// The mingw-w64 pseudo-relocation runtime, linked into every mingw image,
/// keeps this message in `.rdata`; it is read from the string table when
/// text segments were scanned and from the raw section bytes of a PE otherwise.
fn has_mingw_runtime(image: &BinaryImage) -> bool {
    const MESSAGE: &str = "Mingw-w64 runtime failure";
    image.string_table.values().any(|s| s.contains(MESSAGE))
        || (image.os_abi == OsAbi::Windows
            && image
                .sections
                .iter()
                .filter(|s| s.name == ".rdata")
                .any(|s| find_all(&s.data, MESSAGE.as_bytes()).next().is_some()))
}

/// The compiler and linker versions recorded in the PE Rich header.
///
/// Each record is `(product id << 16) | build`. The product id names a
/// tool family (`Utc1900_C` is the VS 2015+ C compiler, `Linker1400` its
/// linker), the build the `_MSC_FULL_VER` build number. From VS 2015 on,
/// every release shares the `1900` product ids and differs only in the
/// build, so the `_MSC_VER` minor is taken from the first build of each
/// toolset release (`19.20` starts at 27508, `19.30` at 30705, ...);
/// preview builds between two releases report the earlier one.
fn msvc_tool_versions(rich: &RichHeader) -> Vec<ToolVersion> {
    let mut tools = Vec::new();
    for record in &rich.records {
        let product = record.comp_id >> 16;
        let build = record.comp_id & 0xffff;
        let Some((major, minor)) = msvc_family(product, build) else {
            continue;
        };
        let tool = ToolVersion {
            tool: Tool::Msvc,
            version: Version::new(major, minor, build),
        };
        if !tools.contains(&tool) {
            tools.push(tool);
        }
    }
    tools
}

/// `(_MSC_VER / 100, _MSC_VER % 100)` of a Rich header compiler or
/// linker product id (`prodids.h` numbering; resource compilers,
/// assemblers and import records carry no C/C++ compiler version).
fn msvc_family(product: u32, build: u32) -> Option<(u32, u32)> {
    Some(match product {
        // Utc12_* (VC6), Linker6xx.
        0x09..=0x0b
        | 0x15..=0x18
        | 0x22..=0x24
        | 0x2f..=0x35
        | 0x04
        | 0x1e
        | 0x20
        | 0x25
        | 0x28
        | 0x3c => (12, 0),
        // Utc13_* (VS .NET 2002), Linker700.
        0x1b..=0x1d | 0x2b | 0x2c | 0x39 | 0x3a | 0x41..=0x44 | 0x3d => (13, 0),
        // Utc1310_* (VS 2003), Linker710.
        0x4c..=0x55 | 0x5f..=0x68 | 0x47 | 0x5a => (13, 10),
        // Utc1400_* (VS 2005), Linker800.
        0x6d..=0x76 | 0x80..=0x82 | 0x78 => (14, 0),
        // Utc1500_* (VS 2008), Linker900.
        0x83..=0x8f | 0x91 => (15, 0),
        // Phx1600_* / Utc1600_* (VS 2010), Linker1000.
        0x9f..=0xb4 | 0x9d => (16, 0),
        // Utc1610_* (VS 2010 SP1), Linker1010.
        0xbc..=0xc6 | 0xba => (16, 10),
        // Utc1700_* (VS 2012), Linker1100.
        0xce..=0xd8 | 0xcc => (17, 0),
        // Utc1800_* (VS 2013), Linker1200.
        0xe0..=0xea | 0xde => (18, 0),
        // Utc1810_* (VS 2013 Update 2+), Linker1210.
        0xf2..=0xfc | 0xf0 => (18, 10),
        // Utc1900_* (VS 2015 and later), Linker1400.
        0x104..=0x10e | 0x102 => (19, msvc_19_minor(build)),
        _ => return None,
    })
}

/// The `_MSC_VER` minor of a `19.xx` compiler from its build number: the
/// first build of each toolset release.
fn msvc_19_minor(build: u32) -> u32 {
    const RELEASES: &[(u32, u32)] = &[
        (25017, 10),
        (25506, 11),
        (25830, 12),
        (26128, 13),
        (26428, 14),
        (26726, 15),
        (27023, 16),
        (27508, 20),
        (27702, 21),
        (27905, 22),
        (28105, 23),
        (28314, 24),
        (28610, 25),
        (28805, 26),
        (29110, 27),
        (29333, 28),
        (30037, 29),
        (30705, 30),
        (31104, 31),
        (31326, 32),
        (31629, 33),
        (31933, 34),
        (32215, 35),
        (32532, 36),
        (32822, 37),
        (33130, 38),
        (33519, 39),
        (33811, 40),
        (34120, 41),
        (34433, 42),
        (34808, 43),
        (35207, 44),
    ];
    RELEASES
        .iter()
        .rev()
        .find(|(first_build, _)| build >= *first_build)
        .map_or(0, |(_, minor)| *minor)
}

/// One `.comment` entry: `GCC: (Gentoo 15.2.1_p20260214 p5) 15.2.1
/// 20260214`, `clang version 20.1.2 (...)`, `rustc version 1.85.0 (...)`,
/// `Linker: LLD 20.1.2`.
fn parse_comment_line(line: &str) -> Option<ToolVersion> {
    let version_after = |marker: &str| {
        let rest = line.find(marker).map(|at| &line[at + marker.len()..])?;
        Version::parse_prefix(rest.trim_start())
    };
    if let Some(rest) = line.strip_prefix("GCC:") {
        // The version after the parenthesised vendor text; the text itself
        // (`(Debian 12.2.0-14)`) may hold a different one.
        let after_vendor = match rest.find(')') {
            Some(close) => &rest[close + 1..],
            None => rest,
        };
        let version = after_vendor
            .split_whitespace()
            .find_map(Version::parse_prefix)
            .or_else(|| rest.split_whitespace().find_map(Version::parse_prefix))?;
        return Some(ToolVersion {
            tool: Tool::Gcc,
            version,
        });
    }
    if let Some(version) = version_after("clang version ") {
        return Some(ToolVersion {
            tool: Tool::Clang,
            version,
        });
    }
    if let Some(version) = version_after("rustc version ") {
        return Some(ToolVersion {
            tool: Tool::Rustc,
            version,
        });
    }
    if let Some(version) = version_after("Linker: LLD ") {
        return Some(ToolVersion {
            tool: Tool::Lld,
            version,
        });
    }
    None
}

/// The Go release from the build info blob (`go version -m`): the 14-byte
/// magic, pointer size, flags, and then either the version string inline
/// (flag bit 1, Go 1.18+) or a pointer to a Go string header.
fn go_build_version(image: &BinaryImage) -> Option<Version> {
    const MAGIC: &[u8] = b"\xff Go buildinf:";
    let read = |addr: u64, len: usize| -> Option<&[u8]> {
        image.sections.iter().find_map(|s| {
            let offset = usize::try_from(addr.checked_sub(s.vaddr)?).ok()?;
            s.data.get(offset..offset.checked_add(len)?)
        })
    };
    let (section, at) = image.sections.iter().find_map(|s| {
        let at = s
            .data
            .windows(MAGIC.len())
            .position(|window| window == MAGIC)?;
        Some((s, at))
    })?;
    let header = section.data.get(at..at + 32)?;
    let ptr_size = usize::from(header[14]);
    let flags = header[15];
    let text = if flags & 0x2 != 0 {
        let rest = section.data.get(at + 32..)?;
        let (len, used) = uvarint(rest)?;
        rest.get(used..used + usize::try_from(len).ok()?)?
    } else {
        let big_endian = flags & 0x1 != 0;
        let word = |bytes: &[u8]| -> Option<u64> {
            let mut value = [0u8; 8];
            match (ptr_size, big_endian) {
                (8, false) => value.copy_from_slice(bytes.get(..8)?),
                (4, false) => value[..4].copy_from_slice(bytes.get(..4)?),
                (8, true) => {
                    value.copy_from_slice(bytes.get(..8)?);
                    value.reverse();
                }
                (4, true) => {
                    value[..4].copy_from_slice(bytes.get(..4)?);
                    value[..4].reverse();
                }
                _ => return None,
            }
            Some(u64::from_le_bytes(value))
        };
        let string_header = word(&header[16..])?;
        let header = read(string_header, ptr_size * 2)?;
        let data = word(header)?;
        let len = word(&header[ptr_size..])?;
        read(data, usize::try_from(len).ok()?)?
    };
    let text = std::str::from_utf8(text).ok()?;
    Version::parse_prefix(text.strip_prefix("go")?)
}

/// LEB128-style unsigned varint as `encoding/binary` writes it.
fn uvarint(bytes: &[u8]) -> Option<(u64, usize)> {
    let mut value = 0u64;
    for (i, &byte) in bytes.iter().enumerate().take(10) {
        value |= u64::from(byte & 0x7f) << (7 * i);
        if byte & 0x80 == 0 {
            return Some((value, i + 1));
        }
    }
    None
}

/// The C library from the dynamic loader path, the `GLIBC_*` symbol
/// versions in `.dynstr`, or the strings a static link keeps.
fn detect_libc(image: &BinaryImage) -> Option<Libc> {
    let section = |name: &str| image.sections.iter().find(|s| s.name == name);
    if let Some(interp) = section(".interp") {
        let path = String::from_utf8_lossy(&interp.data);
        if path.contains("ld-musl") {
            return Some(Libc::Musl);
        }
        if path.contains("ld-linux") {
            let version = section(".dynstr")
                .into_iter()
                .flat_map(|s| s.data.split(|&b| b == 0))
                .filter_map(|entry| std::str::from_utf8(entry).ok())
                .filter_map(|entry| entry.strip_prefix("GLIBC_"))
                .filter_map(Version::parse_prefix)
                .max();
            return Some(Libc::Glibc { version });
        }
    }
    let any_string = |pred: &dyn Fn(&str) -> bool| image.string_table.values().any(|s| pred(s));
    // Tunables and assertion prefixes of a static glibc.
    if any_string(&|s| s.starts_with("glibc: ") || s.starts_with("GLIBC_TUNABLES")) {
        return Some(Libc::Glibc { version: None });
    }
    // musl's `strerror` table starts with this entry.
    if any_string(&|s| s == "No error information") {
        return Some(Libc::Musl);
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{ArchId, Endian, Section, SectionFlags, Symbol, SymbolKind};

    fn image() -> BinaryImage {
        BinaryImage::empty(ArchId::X86_64, Endian::Little)
    }

    fn section(name: &str) -> Section {
        section_with(name, Vec::new())
    }

    fn section_with(name: &str, data: Vec<u8>) -> Section {
        Section {
            name: name.to_string(),
            vaddr: 0x1000,
            size: data.len().max(0x100) as u64,
            data,
            flags: SectionFlags::READ,
        }
    }

    fn symbol(name: &str) -> Symbol {
        Symbol {
            name: name.to_string(),
            addr: 0x1000,
            size: 0x10,
            kind: SymbolKind::Function,
        }
    }

    fn comment(entries: &[&str]) -> Section {
        let mut data = vec![0u8];
        for entry in entries {
            data.extend_from_slice(entry.as_bytes());
            data.push(0);
        }
        section_with(".comment", data)
    }

    #[test]
    fn detects_go_via_pclntab() {
        let mut img = image();
        img.sections.push(section(".gopclntab"));
        assert_eq!(detect_toolchain(&img), Toolchain::Go);
    }

    #[test]
    fn detects_rust_via_section() {
        let mut img = image();
        img.sections.push(section(".rustc"));
        assert_eq!(detect_toolchain(&img), Toolchain::Rust);
    }

    #[test]
    fn detects_gcc_via_personality() {
        let mut img = image();
        img.symbols.insert(0x1000, symbol("__gxx_personality_v0"));
        assert_eq!(detect_toolchain(&img), Toolchain::Gcc);
    }

    #[test]
    fn detects_dotnet_via_cormeta() {
        let mut img = image();
        img.sections.push(section(".cormeta"));
        assert_eq!(detect_toolchain(&img), Toolchain::DotNet);
    }

    #[test]
    fn plain_binary_is_unknown() {
        let mut img = image();
        img.sections.push(section(".text"));
        img.sections.push(section(".data"));
        assert_eq!(detect_toolchain(&img), Toolchain::Unknown);
        assert_eq!(ToolchainReport::detect(&img), ToolchainReport::default());
    }

    #[test]
    fn detects_mingw_via_runtime_string() {
        let mut img = image();
        img.string_table
            .insert(0x2000, "Mingw-w64 runtime failure:\n".to_string());
        assert_eq!(detect_toolchain(&img), Toolchain::Mingw);
    }

    #[test]
    fn comment_versions() {
        let mut img = image();
        img.sections.push(comment(&[
            "GCC: (Gentoo 15.2.1_p20260214 p5) 15.2.1 20260214",
            "GCC: (Gentoo 15.3.0 p8) 15.3.0",
            "GCC: (Gentoo 15.3.0 p8) 15.3.0",
            "rustc version 1.101.0-nightly (92ffebece 2026-10-28)",
            "Linker: LLD 23.1.4 (/checkout/src/llvm-project/llvm f738f3b0)",
        ]));
        let report = ToolchainReport::detect(&img);
        assert_eq!(report.toolchain, Toolchain::Rust);
        assert_eq!(
            report.tools,
            vec![
                ToolVersion {
                    tool: Tool::Gcc,
                    version: Version::new(15, 2, 1)
                },
                ToolVersion {
                    tool: Tool::Gcc,
                    version: Version::new(15, 3, 0)
                },
                ToolVersion {
                    tool: Tool::Rustc,
                    version: Version::new(1, 101, 0)
                },
                ToolVersion {
                    tool: Tool::Lld,
                    version: Version::new(23, 1, 4)
                },
            ]
        );
        assert_eq!(report.version_of(Tool::Gcc), Some(Version::new(15, 3, 0)));
        assert_eq!(report.version_of(Tool::Clang), None);
    }

    #[test]
    fn comment_names_clang_over_gcc_crt_objects() {
        let mut img = image();
        img.sections.push(comment(&[
            "GCC: (GNU) 12.2.0",
            "clang version 20.1.2 (https://github.com/ziglang/zig-bootstrap 7ef74e6)",
        ]));
        let report = ToolchainReport::detect(&img);
        assert_eq!(report.toolchain, Toolchain::Clang);
        assert_eq!(report.version_of(Tool::Clang), Some(Version::new(20, 1, 2)));
        assert_eq!(
            parse_comment_line("GCC: (Debian 12.2.0-14) 12.2.0").map(|t| t.version),
            Some(Version::new(12, 2, 0))
        );
        assert_eq!(
            parse_comment_line("Ubuntu clang version 14.0.0-1ubuntu1").map(|t| t.version),
            Some(Version::new(14, 0, 0))
        );
    }

    #[test]
    fn go_version_from_inline_build_info() {
        let mut data = b"\xff Go buildinf:\x08\x02".to_vec();
        data.resize(32, 0);
        data.push(9);
        data.extend_from_slice(b"go1.26.2-X:nodwarf5");
        let mut img = image();
        img.sections.push(section_with(".go.buildinfo", data));
        let report = ToolchainReport::detect(&img);
        assert_eq!(report.toolchain, Toolchain::Go);
        assert_eq!(report.version_of(Tool::Go), Some(Version::new(1, 26, 2)));
    }

    #[test]
    fn go_version_from_pointed_build_info() {
        // String header at 0x1100: data pointer 0x1200, length 8.
        let mut data = b"\xff Go buildinf:\x08\x00".to_vec();
        data.extend_from_slice(&0x1100u64.to_le_bytes());
        data.extend_from_slice(&0u64.to_le_bytes());
        data.resize(0x100, 0);
        data.extend_from_slice(&0x1200u64.to_le_bytes());
        data.extend_from_slice(&8u64.to_le_bytes());
        data.resize(0x200, 0);
        data.extend_from_slice(b"go1.17.3");
        let mut img = image();
        img.sections.push(section_with(".go.buildinfo", data));
        assert_eq!(
            ToolchainReport::detect(&img).version_of(Tool::Go),
            Some(Version::new(1, 17, 3))
        );
    }

    #[test]
    fn libc_from_interp_and_symbol_versions() {
        let mut img = image();
        img.sections.push(section_with(
            ".interp",
            b"/lib64/ld-linux-x86-64.so.2\0".to_vec(),
        ));
        img.sections.push(section_with(
            ".dynstr",
            b"\0printf\0GLIBC_2.2.5\0GLIBC_2.34\0GLIBC_2.4\0".to_vec(),
        ));
        assert_eq!(
            ToolchainReport::detect(&img).libc,
            Some(Libc::Glibc {
                version: Some(Version::new(2, 34, 0))
            })
        );
        let mut img = image();
        img.sections.push(section_with(
            ".interp",
            b"/lib/ld-musl-x86_64.so.1\0".to_vec(),
        ));
        assert_eq!(ToolchainReport::detect(&img).libc, Some(Libc::Musl));
    }

    #[test]
    fn mingw_pe_from_rdata_idents() {
        let mut img = image();
        img.os_abi = OsAbi::Windows;
        let mut rdata = b"\0Mingw-w64 runtime failure:\n\0".to_vec();
        rdata.extend_from_slice(b"GCC: (GNU) 15.2.0\0GCC: (GNU) 15.2.0\0");
        img.sections.push(section_with(".rdata", rdata));
        let report = ToolchainReport::detect(&img);
        assert_eq!(report.toolchain, Toolchain::Mingw);
        assert_eq!(
            report.tools,
            vec![ToolVersion {
                tool: Tool::Gcc,
                version: Version::new(15, 2, 0)
            }]
        );

        // The ident alone (an image stripped of the runtime message) still
        // names mingw; an ELF `.rdata` never does.
        let mut img = image();
        img.os_abi = OsAbi::Windows;
        img.sections
            .push(section_with(".rdata", b"GCC: (GNU) 14.1.0\0".to_vec()));
        assert_eq!(detect_toolchain(&img), Toolchain::Mingw);
        let mut img = image();
        img.sections
            .push(section_with(".rdata", b"GCC: (GNU) 14.1.0\0".to_vec()));
        assert_eq!(ToolchainReport::detect(&img), ToolchainReport::default());
    }

    #[test]
    fn msvc_versions_from_rich_header() {
        use crate::image::RichRecord;
        let record = |product: u32, build: u32| RichRecord {
            comp_id: (product << 16) | build,
            count: 1,
        };
        let mut img = image();
        img.os_abi = OsAbi::Windows;
        img.rich_header = Some(RichHeader {
            records: vec![
                record(0x01, 0),      // Import
                record(0x104, 30133), // Utc1900_C
                record(0x105, 30133), // Utc1900_CPP
                record(0x0ff, 30133), // Cvtres1400: no compiler version
                record(0x104, 28314), // CRT objects of an older toolset
                record(0x102, 30133), // Linker1400
            ],
            xor_key: 0,
        });
        let report = ToolchainReport::detect(&img);
        assert_eq!(report.toolchain, Toolchain::Msvc);
        assert_eq!(
            report.tools,
            vec![
                ToolVersion {
                    tool: Tool::Msvc,
                    version: Version::new(19, 29, 30133)
                },
                ToolVersion {
                    tool: Tool::Msvc,
                    version: Version::new(19, 24, 28314)
                },
            ]
        );
        assert_eq!(
            report.version_of(Tool::Msvc),
            Some(Version::new(19, 29, 30133))
        );
        assert_eq!(
            report.to_string(),
            "MSVC, MSVC 19.29.30133, MSVC 19.24.28314"
        );

        assert_eq!(msvc_family(0x0e0, 40629), Some((18, 0)));
        assert_eq!(msvc_family(0x083, 30729), Some((15, 0)));
        assert_eq!(msvc_family(0x104, 24215), Some((19, 0)));
        assert_eq!(msvc_family(0x104, 27034), Some((19, 16)));
        assert_eq!(msvc_family(0x104, 35207), Some((19, 44)));
        assert_eq!(msvc_family(0x104, 40000), Some((19, 44)));
        assert_eq!(msvc_family(0x103, 30133), None);
    }

    #[test]
    fn version_parse_prefix() {
        assert_eq!(Version::parse_prefix("15"), Some(Version::new(15, 0, 0)));
        assert_eq!(
            Version::parse_prefix("1.85.0-nightly"),
            Some(Version::new(1, 85, 0))
        );
        assert_eq!(Version::parse_prefix("(GNU)"), None);
        assert_eq!(Version::new(2, 34, 0).to_string(), "2.34.0");
    }
}
