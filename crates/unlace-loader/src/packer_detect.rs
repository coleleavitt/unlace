//! Packer / protector detection by section-name signatures.
//!
//! Many off-the-shelf packers leave a tell-tale section-name fingerprint in
//! the produced binary (the packer's stub still needs a section to live in,
//! and the canonical names tend to leak through). This module performs a
//! cheap first-pass classification of a [`BinaryImage`] against the most
//! common protectors. It is *not* a substitute for a behavioural unpacker:
//! a positive match means "the original packer's default config was
//! probably used"; a negative match means nothing more than "the obvious
//! signatures weren't present".
//!
//! Detection is intentionally section-name only — robustness against
//! cosmetic renaming of sections is out of scope here (and is the job of
//! the entropy / unpack-emulation passes that consume this enum).
//!
//! ## Recognised packers
//!
//! | Variant | Sections checked |
//! |---|---|
//! | [`PackerKind::Upx`] | `UPX0`, `UPX1`, `UPX2` (PE) / `.UPX` (ELF) |
//! | [`PackerKind::Aspack`] | `.aspack`, `.adata` |
//! | [`PackerKind::ThemidaStub`] | `.themida`, `.winlice` |
//! | [`PackerKind::MpressStub`] | `.MPRESS1`, `.MPRESS2` |
//! | [`PackerKind::EnigmaProtector`] | `.enigma1`, `.enigma2` |
//!
//! When multiple signatures match the precedence is the order above
//! (UPX wins ties — it is by far the most common packer in the wild).

use crate::image::BinaryImage;

/// A coarse classification of which packer (if any) produced this image.
///
/// Returned by [`detect_packer`].
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum PackerKind {
    /// UPX — the Ultimate Packer for eXecutables. By far the most common
    /// packer; ships sections `UPX0` (unpacked-image placeholder), `UPX1`
    /// (compressed payload + stub), and optionally `UPX2` on PE. ELF
    /// variants instead use a single `.UPX` section.
    Upx,
    /// ASPack — a classic Russian PE compressor. Leaves a `.aspack`
    /// section (the unpacker stub) and a `.adata` section (compressed
    /// data).
    Aspack,
    /// Themida / WinLicense — Oreans' commercial code virtualiser /
    /// protector. The unpacked stub typically lands in a `.themida` or
    /// `.winlice` section (the latter when the WinLicense licensing
    /// layer is enabled).
    ThemidaStub,
    /// MPRESS — a PE/PE32+ compressor by MATCODE. Splits its output
    /// into `.MPRESS1` (compressed sections + stub) and `.MPRESS2`
    /// (import table).
    MpressStub,
    /// The Enigma Protector — another commercial protector with virtual
    /// machine + licensing. Lays down `.enigma1` and `.enigma2`
    /// sections.
    EnigmaProtector,
}

impl PackerKind {
    /// Human-readable short name of the packer family.
    pub const fn as_str(self) -> &'static str {
        match self {
            Self::Upx => "UPX",
            Self::Aspack => "ASPack",
            Self::ThemidaStub => "Themida",
            Self::MpressStub => "MPRESS",
            Self::EnigmaProtector => "Enigma Protector",
        }
    }
}

impl std::fmt::Display for PackerKind {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(self.as_str())
    }
}

/// Attempt to classify the packer used to produce `image`.
///
/// Returns `Some(PackerKind)` on the first matching signature in priority
/// order (UPX → ASPack → Themida → MPRESS → Enigma), or `None` if no
/// known signature is present. Section-name comparison is
/// case-sensitive — UPX uses uppercase `UPX0`/`UPX1`/`UPX2`, the others
/// are conventionally lowercase. See the module docs for the full
/// signature table.
pub fn detect_packer(image: &BinaryImage) -> Option<PackerKind> {
    // Section counts are small (typically <30) so a linear scan beats
    // building a HashSet here.
    let names: Vec<&str> = image.sections.iter().map(|s| s.name.as_str()).collect();
    let has = |needle: &str| names.iter().any(|n| *n == needle);

    // UPX: PE uses UPX0/UPX1/UPX2; ELF uses .UPX. A single hit is enough
    // because no other common packer reuses these names.
    if has("UPX0") || has("UPX1") || has("UPX2") || has(".UPX") {
        return Some(PackerKind::Upx);
    }

    // ASPack: .aspack is the canonical stub section; .adata holds the
    // compressed payload. Either alone is a strong signal.
    if has(".aspack") || has(".adata") {
        return Some(PackerKind::Aspack);
    }

    // Themida / WinLicense.
    if has(".themida") || has(".winlice") {
        return Some(PackerKind::ThemidaStub);
    }

    // MPRESS.
    if has(".MPRESS1") || has(".MPRESS2") {
        return Some(PackerKind::MpressStub);
    }

    // Enigma Protector.
    if has(".enigma1") || has(".enigma2") {
        return Some(PackerKind::EnigmaProtector);
    }

    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{ArchId, Endian, Section, SectionFlags};
    use std::collections::BTreeMap;

    fn empty_image() -> BinaryImage {
        BinaryImage {
            arch: ArchId::Unknown(0),
            endian: Endian::Little,
            entry: 0x401000,
            sections: Vec::new(),
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_info: None,
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
        }
    }

    fn section(name: &str) -> Section {
        Section {
            name: name.to_string(),
            vaddr: 0x401000,
            size: 0x1000,
            data: Vec::new(),
            flags: SectionFlags::READ.union(SectionFlags::EXEC),
        }
    }

    #[test]
    fn detects_upx_pe_sections() {
        let mut img = empty_image();
        img.sections.push(section("UPX0"));
        img.sections.push(section("UPX1"));
        img.sections.push(section(".rsrc"));
        assert_eq!(detect_packer(&img), Some(PackerKind::Upx));
    }

    #[test]
    fn detects_upx_elf_section() {
        let mut img = empty_image();
        img.sections.push(section(".UPX"));
        img.sections.push(section(".text"));
        assert_eq!(detect_packer(&img), Some(PackerKind::Upx));
    }

    #[test]
    fn detects_aspack() {
        let mut img = empty_image();
        img.sections.push(section(".text"));
        img.sections.push(section(".aspack"));
        img.sections.push(section(".adata"));
        assert_eq!(detect_packer(&img), Some(PackerKind::Aspack));
    }

    #[test]
    fn detects_themida_and_winlicense() {
        let mut img = empty_image();
        img.sections.push(section(".themida"));
        assert_eq!(detect_packer(&img), Some(PackerKind::ThemidaStub));

        let mut img = empty_image();
        img.sections.push(section(".winlice"));
        assert_eq!(detect_packer(&img), Some(PackerKind::ThemidaStub));
    }

    #[test]
    fn detects_mpress() {
        let mut img = empty_image();
        img.sections.push(section(".MPRESS1"));
        img.sections.push(section(".MPRESS2"));
        assert_eq!(detect_packer(&img), Some(PackerKind::MpressStub));
    }

    #[test]
    fn detects_enigma_protector() {
        let mut img = empty_image();
        img.sections.push(section(".enigma1"));
        img.sections.push(section(".enigma2"));
        assert_eq!(detect_packer(&img), Some(PackerKind::EnigmaProtector));
    }

    #[test]
    fn returns_none_for_plain_binary() {
        let mut img = empty_image();
        img.sections.push(section(".text"));
        img.sections.push(section(".rodata"));
        img.sections.push(section(".data"));
        img.sections.push(section(".bss"));
        assert_eq!(detect_packer(&img), None);
    }

    #[test]
    fn upx_wins_when_multiple_match() {
        // Pathological binary with both UPX and ASPack sections — UPX
        // should win per documented precedence order.
        let mut img = empty_image();
        img.sections.push(section(".aspack"));
        img.sections.push(section("UPX1"));
        assert_eq!(detect_packer(&img), Some(PackerKind::Upx));
    }

    #[test]
    fn packer_kind_display() {
        assert_eq!(PackerKind::Upx.to_string(), "UPX");
        assert_eq!(PackerKind::Aspack.to_string(), "ASPack");
        assert_eq!(PackerKind::EnigmaProtector.to_string(), "Enigma Protector");
    }
}
