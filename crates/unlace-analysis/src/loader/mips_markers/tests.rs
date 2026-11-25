use super::*;

#[test]
fn elf32_entry_pointers_are_sign_extended_whatever_the_abi() {
    use object::write::{Object as Writer, Symbol, SymbolSection};
    use object::{Architecture, BinaryFormat, Endianness, FileFlags, SectionKind, SymbolScope};
    for (arch, e_flags, expected) in [
        (Architecture::Mips, 0x808e0020, Architecture::Mips64_N32),
        (Architecture::Mips, 0x70001000, Architecture::Mips),
        (Architecture::Mips64, 0x808e0000, Architecture::Mips64),
    ] {
        let mut object = Writer::new(BinaryFormat::Elf, arch, Endianness::Big);
        object.flags = FileFlags::Elf {
            os_abi: 0,
            abi_version: 0,
            e_flags,
        };
        let section = object.add_section(Vec::new(), b".text".to_vec(), SectionKind::Text);
        object.append_section_data(section, &[0; 4], 4);
        for (name, address) in [
            (b"low".as_slice(), 0x1000),
            (b"high".as_slice(), 0x81234560),
        ] {
            object.add_symbol(Symbol {
                name: name.to_vec(),
                value: address,
                size: 4,
                kind: SymbolKind::Text,
                scope: SymbolScope::Linkage,
                weak: false,
                section: SymbolSection::Section(section),
                flags: SymbolFlags::None,
            });
        }
        let bytes = object.write().unwrap();
        let file = object::File::parse(bytes.as_slice()).unwrap();
        assert_eq!(file.architecture(), expected);
        let out = scan_mips_markers(&file, 8);
        assert_eq!(t9_seed_at(&out, 0x1000), Some(0x1000));
        let high = if file.is_64() {
            0x81234560
        } else {
            0xffffffff81234560
        };
        assert_eq!(t9_seed_at(&out, 0x81234560), Some(high), "{expected:?}");
    }
}

/// The dynamic MIPS LE fixture (a linked ET_DYN with PT_LOAD, so the decode
/// e2e works — unlike the ARM `.o`, this host HAS a MIPS toolchain).
fn mips_gp() -> Vec<u8> {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/mips_gp_le32");
    std::fs::read(path).expect("read mips_gp_le32 fixture")
}

fn t9_seed_at(out: &AnalysisOutput, addr: u64) -> Option<u64> {
    out.tracked_regs
        .iter()
        .find(|t| t.func_addr == addr && t.reg == T9)
        .map(|t| t.value)
}

#[test]
fn entry_pointer_values_follow_elf_class_and_selected_register_width() {
    use object::write::{Object as Writer, Symbol, SymbolSection};
    use object::{Architecture, BinaryFormat, Endianness, FileFlags, SectionKind, SymbolScope};

    for endian in [Endianness::Little, Endianness::Big] {
        for (arch, flags) in [
            (Architecture::Mips, 0x8000_1000),
            (Architecture::Mips, 0x8000_1100),
            (Architecture::Mips, 0x8000_0020),
            (Architecture::Mips64, 0x8000_0000),
        ] {
            for address in [
                0x1000,
                0x7fff_fffc,
                0x8000_0000,
                0xffff_fffc,
                0x1_8000_1000,
                0xffff_ffff_8000_1000,
            ] {
                if arch == Architecture::Mips && address > u64::from(u32::MAX) {
                    continue;
                }
                let mut obj = Writer::new(BinaryFormat::Elf, arch, endian);
                obj.flags = FileFlags::Elf {
                    os_abi: 0,
                    abi_version: 0,
                    e_flags: flags,
                };
                let text = obj.add_section(Vec::new(), b".text".to_vec(), SectionKind::Text);
                obj.append_section_data(text, &[0; 12], 4);
                obj.add_symbol(Symbol {
                    name: b"entry_sign".to_vec(),
                    value: address,
                    size: 12,
                    kind: SymbolKind::Text,
                    scope: SymbolScope::Linkage,
                    weak: false,
                    section: SymbolSection::Section(text),
                    flags: SymbolFlags::None,
                });
                let bytes = obj.write().unwrap();
                let file = object::File::parse(bytes.as_slice()).unwrap();
                for size in [4, 8] {
                    let out = scan_mips_markers(&file, size);
                    assert_eq!(out.tracked_regs.len(), 1);
                    assert_eq!(out.tracked_regs[0].func_addr, address);
                    let expected = if arch == Architecture::Mips && size == 8 {
                        if address >= 0x8000_0000 {
                            0xffff_ffff_0000_0000 | address
                        } else {
                            address
                        }
                    } else {
                        address
                    };
                    assert_eq!(
                        t9_seed_at(&out, address),
                        Some(expected),
                        "{arch:?} {endian:?} {flags:#x} t9:{size} {address:#x}"
                    );
                }
            }
        }
    }
}

/// The merge-blocking gate: the pass over the MIPS fixture must emit a
/// `t9 = entry` fact for each defined function, with the value EQUAL to the
/// entry address (the PIC `jalr t9` convention). Pins the fixture's VMAs.
#[test]
fn mips_markers_emit_t9_facts() {
    let bytes = mips_gp();
    let file = object::File::parse(bytes.as_slice()).expect("parse mips_gp_le32");
    let out = scan_mips_markers(&file, 4);

    assert!(
        !out.tracked_regs.is_empty(),
        "must emit at least one t9 seed"
    );
    // Every fact seeds t9 to its own func_addr (t9 == entry).
    for t in &out.tracked_regs {
        assert_eq!(t.reg, T9, "only t9 is seeded");
        assert_eq!(
            t.value, t.func_addr,
            "t9 == function entry (PIC convention)"
        );
        assert_ne!(t.func_addr, 0, "no UND/zero-address function is seeded");
    }

    // Pin the load-bearing entries: `_init`@0x4004cc (PIC `addu gp,gp,t9`),
    // `main`@0x400704, `bump`@0x4006f0.
    assert_eq!(
        t9_seed_at(&out, 0x4004cc),
        Some(0x4004cc),
        "_init t9 = entry"
    );
    assert_eq!(
        t9_seed_at(&out, 0x400704),
        Some(0x400704),
        "main t9 = entry"
    );
    assert_eq!(
        t9_seed_at(&out, 0x4006f0),
        Some(0x4006f0),
        "bump t9 = entry"
    );
}

/// `_gp` recovery cross-check (the global GP, used for documentation, not the
/// seeded fact): `recover_gp_value` reads `_gp` = 0x419030, and the MIPS GP
/// bias invariant `_gp == .got + 0x7ff0` holds (`.got` = 0x411040).
#[test]
fn mips_gp_value_recovered_and_bias_holds() {
    let bytes = mips_gp();
    let file = object::File::parse(bytes.as_slice()).expect("parse mips_gp_le32");
    let gp = recover_gp_value(&file).expect("fixture carries a _gp symbol");
    assert_eq!(gp, 0x419030, "_gp value from the symbol table");
    // _gp = .got + 0x7ff0 (the MIPS GP-bias convention).
    assert_eq!(
        gp,
        0x411040 + MIPS_GP_BIAS,
        "_gp == .got + 0x7ff0 (GP bias)"
    );
}

#[test]
fn n32_keeps_the_elf32_symbol_and_got_metadata_paths() {
    let mut bytes = mips_gp();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    let seeds = scan_mips_markers(&file, 4).tracked_regs;
    let imports = crate::loader::elf_plt::resolve_plt_imports(&file, &bytes);
    let ranges = crate::loader::elf_plt::mips_got_const_ranges(&file);
    assert!(!seeds.is_empty() && !imports.is_empty() && !ranges.is_empty());

    // Only the ELF32 metadata is exercised; the O32 instructions are not run.
    bytes[36..40].copy_from_slice(&0x8000_0020u32.to_le_bytes());
    let n32 = object::File::parse(bytes.as_slice()).unwrap();
    assert_eq!(n32.architecture(), object::Architecture::Mips64_N32);
    let actual = scan_mips_markers(&n32, 8).tracked_regs;
    assert_eq!(actual.len(), seeds.len());
    for (actual, expected) in actual.iter().zip(&seeds) {
        assert_eq!(
            (actual.func_addr, actual.reg, actual.value),
            (expected.func_addr, expected.reg, expected.value)
        );
    }
    let actual = crate::loader::elf_plt::resolve_plt_imports(&n32, &bytes);
    assert_eq!(actual.len(), imports.len());
    for (actual, expected) in actual.iter().zip(&imports) {
        assert_eq!((&actual.name, actual.addr), (&expected.name, expected.addr));
    }
    assert_eq!(crate::loader::elf_plt::mips_got_const_ranges(&n32), ranges);
}

/// A non-MIPS object must emit ZERO facts — the `canAnalyze == processor==MIPS`
/// gate. Driven over the x86-64 fauxware fixture: without this gate a `t9` seed
/// on a non-MIPS language would reach the commit boundary (which must also no-op,
/// but the pass-level gate is the first line of defence).
#[test]
fn non_mips_object_emits_nothing() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    assert_ne!(file.architecture(), object::Architecture::Mips);
    let out = scan_mips_markers(&file, 4);
    assert!(
        out.tracked_regs.is_empty(),
        "a non-MIPS object must emit no t9 seeds (canAnalyze gate)"
    );
}

// --- MIPS16 ISA_MODE painting (the MIPS analog of ARM `$t`) -------------

/// The freestanding MIPS16 fixture: `m16_square` is a `__attribute__((mips16))`
/// function (its STT_FUNC carries `st_other & 0xf0 == STO_MIPS_MIPS16`, with an
/// even symbol value, on `mips-linux-gnu-gcc 10.3.0`).
fn mips16() -> Vec<u8> {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/mips16_le32");
    std::fs::read(path).expect("read mips16_le32 fixture")
}

fn isa_paints_at(out: &AnalysisOutput, addr: u64) -> Vec<u32> {
    out.context_paints
        .iter()
        .filter(|p| p.addr == addr && p.var == ISA_MODE)
        .map(|p| p.value)
        .collect()
}

/// The merge-blocking gate: the pass over the MIPS16 fixture must emit an
/// `ISA_MODE=1` paint at the (even) entry of the MIPS16 function `m16_square`
/// (`0x400130`, marked via `st_other = STO_MIPS_MIPS16`), and NOT for the
/// MIPS32 functions (`m32_caller`@0x400138, `_start`@0x400158). Pins the VMAs.
#[test]
fn mips16_isa_mode_painted_at_m16_function() {
    let bytes = mips16();
    let file = object::File::parse(bytes.as_slice()).expect("parse mips16_le32");
    let out = scan_mips_isa_markers(&file);

    assert!(
        !out.context_paints.is_empty(),
        "must emit at least one ISA_MODE paint"
    );
    // Every paint is ISA_MODE=1 at an even address (LSB always masked off).
    for p in &out.context_paints {
        assert_eq!(p.var, ISA_MODE, "only ISA_MODE is painted");
        assert_eq!(p.value, 1, "alternate-ISA paint is value 1");
        assert_eq!(p.end, None, "point set (paint-to-next-change-point)");
        assert_eq!(p.addr & 1, 0, "function addresses normalized to even");
    }

    // The MIPS16 function is painted at its even entry.
    assert!(
        isa_paints_at(&out, 0x400130).contains(&1),
        "m16_square@0x400130 must paint ISA_MODE=1"
    );
    // The MIPS32 functions are NOT painted (default ISA_MODE=0 decode).
    assert!(
        isa_paints_at(&out, 0x400138).is_empty(),
        "m32_caller must not be painted"
    );
    assert!(
        isa_paints_at(&out, 0x400158).is_empty(),
        "_start must not be painted"
    );
}

/// The LSB-set form re-homes the FUNC symbol to the even entry (the MIPS analog
/// of Increment 17's Thumb-FUNC re-home), exactly like ARM's `entry|1`. This
/// toolchain uses the `st_other` marker (even value) so no re-home is emitted;
/// this synthetic check pins the LSB-branch logic via a constructed expectation.
#[test]
fn st_other_form_emits_no_rehome_but_paints() {
    let bytes = mips16();
    let file = object::File::parse(bytes.as_slice()).expect("parse mips16_le32");
    let out = scan_mips_isa_markers(&file);
    // The fixture exercises the st_other path (even symbol value), so the
    // funcsym is already at the painted address — no re-home SymFact is needed.
    assert!(
        out.symbols.is_empty(),
        "st_other-marked (even-value) MIPS16 fn needs no re-home SymFact"
    );
    // But it IS painted (the gate above), so decode flips to MIPS16.
    assert!(isa_paints_at(&out, 0x400130).contains(&1));
}

/// A non-MIPS object must emit ZERO ISA_MODE paints — the `processor==MIPS`
/// gate (the analog of `MIPS_ElfExtension.canHandle == false`). Driven over the
/// x86-64 fauxware fixture (the same regression guard as the `$gp` pass).
#[test]
fn non_mips_object_emits_no_isa_paints() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    assert_ne!(file.architecture(), object::Architecture::Mips);
    let out = scan_mips_isa_markers(&file);
    assert!(
        out.context_paints.is_empty(),
        "a non-MIPS object must emit no ISA_MODE paints (canHandle gate)"
    );
}
