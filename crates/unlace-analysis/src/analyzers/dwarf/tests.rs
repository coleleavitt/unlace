use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;

#[test]
fn die_names_escape_the_structural_set_below_the_unit() {
    assert_eq!(die_name("a*/b\n", 1, true), "a_x2a_x2fb_x0a");
    assert_eq!(die_name("vec<char *>::at", 3, true), "vec<char *>::at");
    assert_eq!(die_name("a*/b\n", 1, false), "a*/b\n");
    assert_eq!(die_name("src//unit's.c", 0, true), "src//unit's.c");
}

#[test]
fn a_bit_offset_reads_negative_in_either_producer_spelling() {
    type Value = gimli::AttributeValue<gimli::EndianSlice<'static, gimli::LittleEndian>>;
    for (value, expected) in [
        (Value::Sdata(-6), -6),
        (Value::Data8(0xffff_ffff_ffff_fffa), -6),
        (Value::Data1(0x18), 24),
        (Value::Udata(3), 3),
    ] {
        assert_eq!(signed_bit_offset(&value), Some(expected), "{value:?}");
    }
}

#[test]
fn constant_locations_keep_the_dwarf_byte_order_and_member_offsets() {
    for endian in [gimli::RunTimeEndian::Big, gimli::RunTimeEndian::Little] {
        for size in [4, 8] {
            let expected = if size == 4 {
                0x81234567u64
            } else {
                0x8123456789abcdefu64
            };
            let mut bytes = vec![gimli::DW_OP_addr.0];
            match (endian, size) {
                (gimli::RunTimeEndian::Big, 4) => bytes.extend((expected as u32).to_be_bytes()),
                (gimli::RunTimeEndian::Little, 4) => bytes.extend((expected as u32).to_le_bytes()),
                (gimli::RunTimeEndian::Big, _) => bytes.extend(expected.to_be_bytes()),
                _ => bytes.extend(expected.to_le_bytes()),
            }
            let data = Reader::new(&bytes, endian);
            assert_eq!(
                simple_addr_location(&gimli::AttributeValue::Block(data), size),
                Some(expected)
            );
            assert_eq!(
                simple_addr_location(
                    &gimli::AttributeValue::Exprloc(gimli::Expression(data)),
                    size
                ),
                Some(expected)
            );
            let other = if size == 4 { 8 } else { 4 };
            assert_eq!(
                simple_addr_location(&gimli::AttributeValue::Block(data), other),
                None,
                "a {size}-byte operand is not a {other}-byte unit's address"
            );
        }
        let mut trailing = vec![gimli::DW_OP_addr.0, 0, 0, 0x10, 0];
        trailing.extend([
            gimli::DW_OP_lit0.0,
            gimli::DW_OP_plus.0,
            gimli::DW_OP_lit0.0,
            gimli::DW_OP_plus.0,
        ]);
        let data = Reader::new(&trailing, endian);
        assert_eq!(
            simple_addr_location(&gimli::AttributeValue::Block(data), 4),
            None,
            "a 32-bit address followed by more operations is not a static address"
        );
        let data = Reader::new(&[0x23, 0x08], endian);
        assert_eq!(
            simple_member_location(&gimli::AttributeValue::Block(data)),
            Some(8)
        );
        assert_eq!(
            simple_member_location(&gimli::AttributeValue::Exprloc(gimli::Expression(data))),
            Some(8)
        );
    }
    assert_eq!(
        simple_member_location(&gimli::AttributeValue::Udata(u64::MAX)),
        None
    );
    assert_eq!(
        simple_member_location(&gimli::AttributeValue::Data1(128)),
        Some(128)
    );
    assert_eq!(
        simple_member_location(&gimli::AttributeValue::Data8(u64::MAX)),
        None
    );
}

/// A configured [`TypeFactory`] for the mapper unit tests (the dtype-test
/// recipe: default alignment map, max base size 8, 64-bit sizes, core-type
/// cache so `get_type_void`/`get_type_char`/`get_type_pointer` resolve).
fn factory() -> TypeFactoryImpl {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    f.setup_sizes(Some(8), 8, 4);
    let _ = f.cache_core_types();
    f
}

/// A FORGED `.debug_info` whose type chain closes on itself must terminate.
///
/// This is what the recursion guard is for, and what the pre-fix depth budget
/// conflated with "deep": a `DW_TAG_pointer_type` pointing at itself, a
/// `typedef`/`const` pair pointing at each other, an array whose element type
/// is the array. None is reachable from a real compiler and all are reachable
/// from a corrupt or hostile file. The assertion is that the call RETURNS (a
/// hang or a stack overflow is the failure).
#[test]
fn forged_type_cycles_terminate() {
    let types = factory();
    let mut dies: BTreeMap<usize, DieSnap> = BTreeMap::new();

    // 1: a pointer whose pointee is itself.
    let mut selfptr = DieSnap::new(gimli::DW_TAG_pointer_type, 1);
    selfptr.type_ref = Some(1);
    selfptr.byte_size = Some(8);
    dies.insert(1, selfptr);

    // 2 <-> 3: a typedef and a const pointing at each other (the qualifier
    // chain the collapse walks), reached through pointer 4.
    let mut td = DieSnap::new(gimli::DW_TAG_typedef, 1);
    td.name = "loop_t".into();
    td.type_ref = Some(3);
    dies.insert(2, td);
    let mut cst = DieSnap::new(gimli::DW_TAG_const_type, 1);
    cst.type_ref = Some(2);
    dies.insert(3, cst);
    let mut ptr = DieSnap::new(gimli::DW_TAG_pointer_type, 1);
    ptr.type_ref = Some(2);
    ptr.byte_size = Some(8);
    dies.insert(4, ptr);

    // 5: an array whose element type is the array itself.
    let mut arr = DieSnap::new(gimli::DW_TAG_array_type, 1);
    arr.type_ref = Some(5);
    arr.array_count = Some(4);
    dies.insert(5, arr);

    for cpp in [false, true] {
        for off in [1usize, 2, 4, 5] {
            let mut walk = TypeWalk::with_gate(true);
            let built = build_datatype(Some(off), &dies, &types, 1, &mut walk, cpp);
            if off == 1 || off == 4 {
                assert!(
                    built.is_some(),
                    "a cyclic pointer should still build (off={off})"
                );
            }
        }
    }
}

/// The same forged input under the legacy hop budget also terminates.
#[test]
fn forged_type_cycles_terminate_with_the_budget() {
    let types = factory();
    let mut dies: BTreeMap<usize, DieSnap> = BTreeMap::new();
    let mut selfptr = DieSnap::new(gimli::DW_TAG_pointer_type, 1);
    selfptr.type_ref = Some(1);
    selfptr.byte_size = Some(8);
    dies.insert(1, selfptr);
    let mut walk = TypeWalk::with_gate(false);
    assert!(build_datatype(Some(1), &dies, &types, 1, &mut walk, false).is_some());
}

/// An ordinary four-DIE C declaration (`const int *const *`) resolves under
/// the cycle guard and truncates under the budget — the defect in one test.
#[test]
fn ordinary_declaration_survives_only_the_cycle_guard() {
    let types = factory();
    let mut dies: BTreeMap<usize, DieSnap> = BTreeMap::new();
    let mut leaf = DieSnap::new(gimli::DW_TAG_base_type, 1);
    leaf.name = "int".into();
    leaf.byte_size = Some(4);
    leaf.encoding = Some(gimli::DW_ATE_signed);
    dies.insert(10, leaf);
    let mut c1 = DieSnap::new(gimli::DW_TAG_const_type, 1);
    c1.type_ref = Some(10);
    dies.insert(11, c1);
    let mut p1 = DieSnap::new(gimli::DW_TAG_pointer_type, 1);
    p1.type_ref = Some(11);
    p1.byte_size = Some(8);
    dies.insert(12, p1);
    let mut c2 = DieSnap::new(gimli::DW_TAG_const_type, 1);
    c2.type_ref = Some(12);
    dies.insert(13, c2);
    let mut p2 = DieSnap::new(gimli::DW_TAG_pointer_type, 1);
    p2.type_ref = Some(13);
    p2.byte_size = Some(8);
    dies.insert(14, p2);

    let mut budget = TypeWalk::with_gate(false);
    let old = build_datatype(Some(14), &dies, &types, 1, &mut budget, false)
        .expect("a pointer always builds");
    let mut guard = TypeWalk::with_gate(true);
    let new = build_datatype(Some(14), &dies, &types, 1, &mut guard, false)
        .expect("a pointer always builds");
    let inner = |t: &Rc<Datatype>| -> i32 {
        let one = t.get_ptr_to().expect("pointer");
        let two = one.get_ptr_to().expect("pointer to pointer");
        two.get_size()
    };
    assert_eq!(
        inner(&old),
        0,
        "the budget truncates the element type to void"
    );
    assert_eq!(inner(&new), 4, "the cycle guard keeps the 4-byte int");
}

/// A narrow integer's sign is what DWARF states: `char16_t` (`DW_ATE_UTF`)
/// is unsigned, an enum without `DW_AT_encoding` (clang) takes the sign of
/// its `DW_AT_type`, and a narrow anonymous enum falls back to an integer of
/// that sign, unsigned when DWARF states none.
#[test]
fn a_narrow_integer_takes_the_sign_dwarf_states() {
    let types = factory();
    let mut dies: BTreeMap<usize, DieSnap> = BTreeMap::new();
    let mut base = |off: usize, size: u64, encoding: gimli::DwAte| {
        let mut d = DieSnap::new(gimli::DW_TAG_base_type, 1);
        d.byte_size = Some(size);
        d.encoding = Some(encoding);
        dies.insert(off, d);
    };
    base(1, 2, gimli::DW_ATE_UTF);
    base(2, 2, gimli::DW_ATE_unsigned);
    base(3, 1, gimli::DW_ATE_signed_char);
    let mut enumeration = |off: usize, name: &str, size: u64, under: Option<usize>| {
        let mut e = DieSnap::new(gimli::DW_TAG_enumeration_type, 1);
        e.name = name.into();
        e.byte_size = Some(size);
        e.type_ref = under;
        let mut m = DieSnap::new(gimli::DW_TAG_enumerator, 2);
        m.name = format!("{name}_m");
        m.const_value = Some(1);
        e.children = vec![off + 1];
        dies.insert(off + 1, m);
        dies.insert(off, e);
    };
    enumeration(10, "", 2, Some(2));
    enumeration(20, "neg", 1, Some(3));
    enumeration(30, "", 2, None);
    enumeration(40, "unk", 2, None);
    enumeration(50, "", 4, Some(2));
    let meta = |off: usize| {
        let mut walk = TypeWalk::with_gate(true);
        let t = build_datatype(Some(off), &dies, &types, 1, &mut walk, false).expect("builds");
        (t.get_metatype(), t.is_enum_type())
    };
    assert_eq!(
        meta(1),
        (type_metatype::TYPE_UINT, false),
        "char16_t is unsigned"
    );
    assert_eq!(
        meta(10),
        (type_metatype::TYPE_UINT, false),
        "an unsigned anonymous enum"
    );
    assert_eq!(
        meta(20),
        (type_metatype::TYPE_INT, true),
        "a signed clang enum"
    );
    assert_eq!(
        meta(30),
        (type_metatype::TYPE_UINT, false),
        "no stated sign"
    );
    assert_eq!(
        meta(40),
        (type_metatype::TYPE_UINT, true),
        "no stated sign, named"
    );
    assert_eq!(
        meta(50),
        (type_metatype::TYPE_INT, false),
        "a 4-byte enum stays int"
    );
}

/// `signed char` and `unsigned char` are character types of the sign DWARF
/// states; plain `char` stays the core `char` whatever its encoding (AArch64
/// and ARM state it `DW_ATE_unsigned_char`), so a string stays `char *`.
#[test]
fn a_character_type_keeps_its_stated_sign_and_plain_char_stays_char() {
    let types = factory();
    for (name, size, meta, ch) in [
        ("uint1", 1, type_metatype::TYPE_UINT, false),
        ("int1", 1, type_metatype::TYPE_INT, false),
        ("char", 1, type_metatype::TYPE_INT, true),
    ] {
        types.set_core_type(name, size, meta, ch).unwrap();
    }
    types.cache_core_types().unwrap();
    let mut dies: BTreeMap<usize, DieSnap> = BTreeMap::new();
    let cases = [
        ("char", gimli::DW_ATE_signed_char),
        ("char", gimli::DW_ATE_unsigned_char),
        ("signed char", gimli::DW_ATE_signed_char),
        ("unsigned char", gimli::DW_ATE_unsigned_char),
        ("character(kind=1)", gimli::DW_ATE_unsigned_char),
    ];
    for (off, (name, encoding)) in cases.iter().enumerate() {
        let mut d = DieSnap::new(gimli::DW_TAG_base_type, 1);
        d.name = (*name).into();
        d.byte_size = Some(1);
        d.encoding = Some(*encoding);
        dies.insert(off, d);
    }
    let built = |off: usize| {
        let mut walk = TypeWalk::with_gate(true);
        let t = build_datatype(Some(off), &dies, &types, 1, &mut walk, false).expect("builds");
        (
            t.get_metatype(),
            t.is_char_print(),
            t.is_core_type(),
            t.get_name().to_string(),
        )
    };
    let plain = (type_metatype::TYPE_INT, true, true, "char".to_string());
    assert_eq!(built(0), plain, "x86 plain char");
    assert_eq!(built(1), plain, "ARM plain char");
    assert_eq!(
        built(2),
        (type_metatype::TYPE_INT, true, false, "signed char".into()),
        "signed char"
    );
    assert_eq!(
        built(3),
        (
            type_metatype::TYPE_UINT,
            true,
            false,
            "unsigned char".into()
        ),
        "unsigned char"
    );
    assert_eq!(built(4), plain, "Fortran character");
}

/// Parse the DWARF snapshot of a fixture and return the subprogram DIEs that
/// are *defined* (low_pc + not a declaration), as (name, low_pc).
fn defined_subprograms(path: &str) -> Vec<(String, u64)> {
    let bytes = std::fs::read(path).expect("read dwarf fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture");
    let endian = if file.is_little_endian() {
        gimli::RunTimeEndian::Little
    } else {
        gimli::RunTimeEndian::Big
    };
    let load = |id: gimli::SectionId| -> Result<Vec<u8>, gimli::Error> {
        Ok(file
            .section_by_name(id.name())
            .and_then(|s| s.uncompressed_data().ok())
            .map(|d| d.into_owned())
            .unwrap_or_default())
    };
    let sections = gimli::DwarfSections::load(load).expect("load dwarf");
    let dwarf = sections.borrow(|b| gimli::EndianSlice::new(b, endian));
    let mut found = Vec::new();
    let mut units = dwarf.units();
    while let Ok(Some(header)) = units.next() {
        let unit = dwarf.unit(header).expect("unit");
        let dies = snapshot_unit(&dwarf, &unit);
        for snap in dies.values() {
            if snap.tag == gimli::DW_TAG_subprogram && !snap.declaration && !snap.name.is_empty()
                && let Some(low_pc) = snap.low_pc {
                    found.push((snap.name.clone(), low_pc));
                }
        }
    }
    found
}

#[test]
fn dwarf_stripped_recovers_function_names_and_addrs() {
    // dwarf_stripped_x86_64 has FUNC names ONLY in DWARF (.symtab stripped):
    // add_values@0x401136, compute@0x401153, main@0x401198. `printf` is
    // declaration-only (no low_pc) and must NOT appear.
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/dwarf_stripped_x86_64"
    );
    let defined = defined_subprograms(path);
    let by_name: BTreeMap<_, _> = defined.iter().cloned().collect();
    assert_eq!(
        by_name.get("add_values"),
        Some(&0x401136),
        "add_values low_pc"
    );
    assert_eq!(by_name.get("compute"), Some(&0x401153), "compute low_pc");
    assert_eq!(by_name.get("main"), Some(&0x401198), "main low_pc");
    assert!(
        !by_name.contains_key("printf"),
        "declaration-only `printf` must be skipped, got: {defined:?}"
    );
}

#[test]
fn cet_pie_recovers_elaborate_debug_symbol() {
    // cet_pie_x86_64 (not stripped, DWARF 5): elaborate_debug_symbol @ 0x1357
    // is a defined subprogram. (Names already come from .symtab here; the DWARF
    // value is the TYPED signature, asserted end-to-end in verify_s1_dwarf.rs.)
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/cet_pie_x86_64");
    let defined = defined_subprograms(path);
    let by_name: BTreeMap<_, _> = defined.iter().cloned().collect();
    assert_eq!(
        by_name.get("elaborate_debug_symbol"),
        Some(&0x1357),
        "elaborate_debug_symbol low_pc (PIE: DWARF low_pc == runtime VMA)"
    );
    // Confirm the headline param type chain resolves to a char pointer
    // structurally (the engine-level render is the e2e test). We re-snapshot
    // and walk the formal_parameter -> pointer -> const -> char(signed_char).
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    let endian = gimli::RunTimeEndian::Little;
    let load = |id: gimli::SectionId| -> Result<Vec<u8>, gimli::Error> {
        Ok(file
            .section_by_name(id.name())
            .and_then(|s| s.uncompressed_data().ok())
            .map(|d| d.into_owned())
            .unwrap_or_default())
    };
    let sections = gimli::DwarfSections::load(load).unwrap();
    let dwarf = sections.borrow(|b| gimli::EndianSlice::new(b, endian));
    let mut units = dwarf.units();
    let mut found_charptr = false;
    while let Ok(Some(header)) = units.next() {
        let unit = dwarf.unit(header).unwrap();
        let dies = snapshot_unit(&dwarf, &unit);
        for snap in dies.values() {
            if snap.tag == gimli::DW_TAG_subprogram && snap.name == "elaborate_debug_symbol" {
                // First formal parameter -> follow type to a base char.
                let pcoff = snap
                    .children
                    .iter()
                    .find(|c| dies.get(c).map(|d| d.tag) == Some(gimli::DW_TAG_formal_parameter))
                    .copied();
                if let Some(pcoff) = pcoff {
                    let p = &dies[&pcoff];
                    // pointer
                    let pt = dies.get(&p.type_ref.unwrap()).unwrap();
                    assert_eq!(pt.tag, gimli::DW_TAG_pointer_type, "param is a pointer");
                    // -> const -> char base_type
                    let ct = dies.get(&pt.type_ref.unwrap()).unwrap();
                    let base = dies.get(&ct.type_ref.unwrap()).unwrap();
                    assert_eq!(base.tag, gimli::DW_TAG_base_type);
                    assert_eq!(base.name, "char");
                    found_charptr = true;
                }
            }
        }
    }
    assert!(
        found_charptr,
        "elaborate_debug_symbol's first param should be char *"
    );
}

#[test]
fn sleb128_decodes_signed_values() {
    // DWARF SLEB128 (the DW_OP_fbreg operand encoding). cet_pie's locals use
    // 0x58 = -40, 0x60 = -32, 0x68 = -24 (single-byte negatives).
    assert_eq!(read_sleb128(&[0x58]), Some((-40, 1)));
    assert_eq!(read_sleb128(&[0x60]), Some((-32, 1)));
    assert_eq!(read_sleb128(&[0x68]), Some((-24, 1)));
    // Positive and zero.
    assert_eq!(read_sleb128(&[0x00]), Some((0, 1)));
    assert_eq!(read_sleb128(&[0x02]), Some((2, 1)));
    // Multi-byte: -129 = 0xFF 0x7E, 127 = 0xFF 0x00.
    assert_eq!(read_sleb128(&[0xFF, 0x7E]), Some((-129, 2)));
    assert_eq!(read_sleb128(&[0xFF, 0x00]), Some((127, 2)));
    // Truncated -> None (never panics).
    assert_eq!(read_sleb128(&[0x80]), None);
    assert_eq!(read_sleb128(&[]), None);
}

/// Snapshot-parse cet_pie and confirm `elaborate_debug_symbol`'s three
/// `DW_OP_fbreg` locals decode to the expected frame-base offsets, and that
/// applying the x86-64 CFA constant (8) lands each at the unlace stack offset that
/// the disassembly confirms (`-0x18`/`-0x10`/`-0x8` off `%rbp`, i.e. CFA-relative
/// -32/-24/-16). This is the offset math the commit then wraps onto the stack
/// space; the full name+type install render is the e2e `verify_s1_dwarf.rs` gate.
#[test]
fn cet_pie_fbreg_locals_and_cfa_offsets() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/cet_pie_x86_64");
    let bytes = std::fs::read(path).unwrap();
    let file = object::File::parse(bytes.as_slice()).unwrap();
    // The fixture is x86-64 ⇒ static CFA = 8 (x86-64.dwarf `<call_frame_cfa>`).
    assert_eq!(
        call_frame_cfa(file.architecture()),
        Some(8),
        "x86-64 CFA == 8"
    );
    let cfa = 8i64;

    let endian = gimli::RunTimeEndian::Little;
    let load = |id: gimli::SectionId| -> Result<Vec<u8>, gimli::Error> {
        Ok(file
            .section_by_name(id.name())
            .and_then(|s| s.uncompressed_data().ok())
            .map(|d| d.into_owned())
            .unwrap_or_default())
    };
    let sections = gimli::DwarfSections::load(load).unwrap();
    let dwarf = sections.borrow(|b| gimli::EndianSlice::new(b, endian));
    let mut units = dwarf.units();
    // (name, raw fbreg, cfa-adjusted stack offset).
    let mut found: Vec<(String, i64, i64)> = Vec::new();
    while let Ok(Some(header)) = units.next() {
        let unit = dwarf.unit(header).unwrap();
        let dies = snapshot_unit(&dwarf, &unit);
        for snap in dies.values() {
            if snap.tag == gimli::DW_TAG_subprogram && snap.name == "elaborate_debug_symbol" {
                for &coff in &snap.children {
                    let c = &dies[&coff];
                    if matches!(
                        c.tag,
                        gimli::DW_TAG_variable | gimli::DW_TAG_formal_parameter
                    )
                        && let Some(fb) = c.fbreg_location {
                            found.push((c.name.clone(), fb, cfa.wrapping_add(fb)));
                        }
                }
            }
        }
    }
    let by_name: BTreeMap<_, _> = found
        .iter()
        .map(|(n, fb, off)| (n.clone(), (*fb, *off)))
        .collect();
    // binary: fbreg -40 -> stack -32; file: -32 -> -24; elf_header: -24 -> -16.
    assert_eq!(
        by_name.get("binary"),
        Some(&(-40, -32)),
        "binary fbreg/offset"
    );
    assert_eq!(by_name.get("file"), Some(&(-32, -24)), "file fbreg/offset");
    assert_eq!(
        by_name.get("elf_header"),
        Some(&(-24, -16)),
        "elf_header fbreg/offset"
    );
}

#[test]
fn array_storage_includes_every_dimension_and_checks_overflow() {
    for (dimensions, expected_bytes) in [
        (vec![3, 7], Some(84)),
        (vec![2, 3, 4], Some(96)),
        (vec![u64::MAX, 2], None),
    ] {
        let types = factory();
        let mut dies = BTreeMap::new();
        let mut base = DieSnap::new(gimli::DW_TAG_base_type, 1);
        base.byte_size = Some(4);
        base.encoding = Some(gimli::DW_ATE_float);
        dies.insert(1, base);
        let mut array = DieSnap::new(gimli::DW_TAG_array_type, 1);
        array.type_ref = Some(1);
        for (index, count) in dimensions.into_iter().enumerate() {
            let key = 3 + index;
            let mut range = DieSnap::new(gimli::DW_TAG_subrange_type, 2);
            range.array_count = Some(count);
            dies.insert(key, range);
            array.children.push(key);
        }
        dies.insert(2, array);
        let built = build_datatype(Some(2), &dies, &types, 1, &mut TypeWalk::new(), false);
        assert_eq!(built.map(|ty| ty.get_size()), expected_bytes);
    }
}
