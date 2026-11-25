use super::*;

/// `ElfFormat::compiler_model` returns exactly the token the old
/// `language_id_for` baked into each id string — `gcc` for x86/RISCV,
/// `default` for every other supported machine. This is the byte-identical
/// proof for the §2.2 structural change: the compiler-model field is
/// unchanged per arch.
#[test]
fn elf_compiler_model_matches_today() {
    let f = ElfFormat;
    for a in [
        Architecture::X86_64,
        Architecture::I386,
        Architecture::Riscv64,
        Architecture::Riscv32,
    ] {
        assert_eq!(f.compiler_model(a), Some("gcc"), "{a:?} must keep :gcc");
    }
    for a in [
        Architecture::Aarch64,
        Architecture::Arm,
        Architecture::Mips,
        Architecture::PowerPc,
        Architecture::PowerPc64,
        Architecture::Sparc,
        Architecture::Sparc64,
    ] {
        assert_eq!(
            f.compiler_model(a),
            Some("default"),
            "{a:?} must keep :default"
        );
    }
}

/// `ElfFormat::section_bits` reproduces the old `section_kind_flags` body: an
/// ALLOC|EXECINSTR `.text` is CODE|READONLY (alloc, non-writable, exec); a
/// non-ELF flag set falls through to the `SectionKind` arm.
#[test]
fn elf_section_bits_text_is_code_readonly() {
    use unlace_sleigh::loadimage::section_flags;
    let f = ElfFormat;
    // SHF_ALLOC|SHF_EXECINSTR, non-writable.
    let bits = f.section_bits(
        ".text",
        SectionKind::Text,
        SectionFlags::Elf {
            sh_flags: 0x2 | 0x4,
        },
    );
    assert!(bits & section_flags::CODE != 0, "exec section is CODE");
    assert!(
        bits & section_flags::READONLY != 0,
        "alloc+!write is READONLY"
    );
    assert!(
        bits & section_flags::UNALLOC == 0,
        "alloc section is not UNALLOC"
    );
    // SHF_ALLOC|SHF_WRITE data section: DATA, not READONLY.
    let bits = f.section_bits(
        ".data",
        SectionKind::Data,
        SectionFlags::Elf {
            sh_flags: 0x2 | 0x1,
        },
    );
    assert!(bits & section_flags::DATA != 0, "data section is DATA");
    assert!(
        bits & section_flags::READONLY == 0,
        "writable section is not READONLY"
    );
}

/// The loader's tables, the notes and `.interp` are allocated and
/// non-writable, and BFD calls them read-only for that reason alone.  They
/// hold no program data, and the read-only range is what licenses the printer
/// to spell a constant as the characters at it, so they are excluded.
/// `.interp` is `SHT_PROGBITS`, so it is told apart from `.rodata` by name.
#[test]
fn elf_section_bits_leaves_loader_tables_out_of_readonly() {
    use unlace_sleigh::loadimage::section_flags;
    let f = ElfFormat;
    let alloc_ro = SectionFlags::Elf { sh_flags: 0x2 };
    for (name, kind) in [
        (".dynsym", SectionKind::Metadata),
        (".gnu.hash", SectionKind::Elf(0x6fff_fff6)),
        (".gnu.version_d", SectionKind::Elf(0x6fff_fffd)),
        (".gnu.version_r", SectionKind::Elf(0x6fff_fffe)),
        (".gnu.version", SectionKind::Elf(0x6fff_ffff)),
        (".note.ABI-tag", SectionKind::Note),
        (".interp", SectionKind::ReadOnlyData),
    ] {
        assert!(is_loader_table(name, kind), "{name} is a loader table");
        let bits = f.section_bits(name, kind, alloc_ro);
        assert!(
            bits & section_flags::READONLY == 0,
            "{name} must not be READONLY"
        );
    }
    for (name, kind) in [
        (".rodata", SectionKind::ReadOnlyData),
        (".rodata.str1.1", SectionKind::ReadOnlyString),
        (".text", SectionKind::Text),
        (".eh_frame", SectionKind::ReadOnlyData),
        (".ARM.exidx", SectionKind::Elf(0x7000_0001)),
    ] {
        assert!(!is_loader_table(name, kind), "{name} is not a loader table");
        let bits = f.section_bits(name, kind, alloc_ro);
        assert!(bits & section_flags::READONLY != 0, "{name} keeps READONLY");
    }
}
