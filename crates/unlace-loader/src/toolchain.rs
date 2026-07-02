//! Producing-toolchain fingerprinting (ROADMAP Phase B.4 / FLIRT-adjacent).
//!
//! Classifies which language runtime / compiler produced a [`BinaryImage`]
//! from cheap, already-parsed evidence: the presence of Go moduledata / Swift
//! metadata, language-runtime section names (`.gopclntab`, `__swift5_proto`,
//! `.cor20`), and symbol/section fingerprints for Rust, GCC, Clang, and MSVC.
//! Knowing the toolchain lets later passes pick the right runtime structures,
//! demanglers, and signature sets.
//!
//! This is a best-effort classifier: it returns the highest-confidence match
//! it can justify from the evidence, or [`Toolchain::Unknown`] — it never
//! guesses past the evidence.

use crate::image::BinaryImage;

/// Detected producing toolchain / language runtime.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Toolchain {
    Go,
    Swift,
    Rust,
    DotNet,
    Msvc,
    Gcc,
    Clang,
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
            Self::Gcc => "GCC",
            Self::Clang => "Clang",
            Self::Unknown => "unknown",
        }
    }
}

impl std::fmt::Display for Toolchain {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(self.as_str())
    }
}

/// Fingerprint the producing toolchain of `image`. Checked in
/// highest-confidence-first order: parsed language metadata (Go/Swift), then
/// language-runtime section names (.NET/Go/Swift/Rust), then C/C++ compiler
/// symbol/section evidence (Rust > MSVC > Clang > GCC).
pub fn detect_toolchain(image: &BinaryImage) -> Toolchain {
    // Parsed structured metadata is the strongest signal.
    if image.go_module.is_some() {
        return Toolchain::Go;
    }
    if image.swift_info.is_some() {
        return Toolchain::Swift;
    }

    let has_section = |needle: &str| image.sections.iter().any(|s| s.name.contains(needle));

    // .NET CLR PE.
    if has_section(".cor20") || has_section(".text") && has_section("#Strings") {
        // (#Strings is a metadata-stream marker; .cor20 is the CLR header section)
        if has_section(".cor20") {
            return Toolchain::DotNet;
        }
    }
    // Go pclntab without a parsed moduledata still names Go.
    if has_section(".gopclntab") || has_section("__gopclntab") || has_section(".go.buildinfo") {
        return Toolchain::Go;
    }
    // Swift metadata sections.
    if has_section("swift5") || has_section("__swift5") {
        return Toolchain::Swift;
    }

    // Symbol-based evidence.
    let any_symbol = |pred: &dyn Fn(&str) -> bool| image.symbols.values().any(|s| pred(&s.name));

    // Rust: mangled `_R…`/legacy `_ZN…17h<hash>E`, or a `.rustc` section.
    if has_section(".rustc")
        || any_symbol(&|n| n.contains("__rust_") || n.starts_with("_RNv") || n.starts_with("_RNc"))
    {
        return Toolchain::Rust;
    }
    // MSVC: a Rich header is MSVC-link-exclusive, or mangled `?…@@` symbols.
    if image.rich_header.is_some() || any_symbol(&|n| n.starts_with('?') && n.contains("@@")) {
        return Toolchain::Msvc;
    }
    // Clang vs GCC: both emit Itanium `_Z…`; distinguish by toolchain comment
    // sections when present.
    if has_section(".clang") || any_symbol(&|n| n.contains("__clang_call_terminate")) {
        return Toolchain::Clang;
    }
    if has_section(".gcc_except_table") || any_symbol(&|n| n.contains("__gxx_personality")) {
        return Toolchain::Gcc;
    }

    Toolchain::Unknown
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{ArchId, Endian, Section, SectionFlags, Symbol};

    fn image() -> BinaryImage {
        BinaryImage::empty(ArchId::X86_64, Endian::Little)
    }

    fn section(name: &str) -> Section {
        Section {
            name: name.to_string(),
            vaddr: 0x1000,
            size: 0x100,
            data: Vec::new(),
            flags: SectionFlags::READ,
        }
    }

    fn symbol(name: &str) -> Symbol {
        let mut s = Symbol::default();
        s.name = name.to_string();
        s
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
    fn detects_dotnet_via_cor20() {
        let mut img = image();
        img.sections.push(section(".cor20"));
        assert_eq!(detect_toolchain(&img), Toolchain::DotNet);
    }

    #[test]
    fn plain_binary_is_unknown() {
        let mut img = image();
        img.sections.push(section(".text"));
        img.sections.push(section(".data"));
        assert_eq!(detect_toolchain(&img), Toolchain::Unknown);
    }
}
