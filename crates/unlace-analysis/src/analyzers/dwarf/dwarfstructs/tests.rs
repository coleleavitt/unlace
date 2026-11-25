use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;

fn die(tag: gimli::DwTag, name: &str) -> DieSnap {
    let mut d = DieSnap::new(tag, 1);
    d.name = name.into();
    d
}

#[test]
fn absent_locations_start_the_container_and_unknown_or_static_members_are_skipped() {
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    let _ = types.cache_core_types();
    let mut dies = BTreeMap::new();
    let mut int = die(gimli::DW_TAG_base_type, "int");
    int.byte_size = Some(4);
    int.encoding = Some(gimli::DW_ATE_signed);
    dies.insert(1, int);
    let mut record = die(gimli::DW_TAG_structure_type, "Layout");
    record.byte_size = Some(8);
    record.children = vec![2, 3, 4, 5, 6];
    dies.insert(10, record);
    let member = |name: &str| {
        let mut m = die(gimli::DW_TAG_member, name);
        m.type_ref = Some(1);
        m
    };
    dies.insert(2, member("first"));
    let mut second = member("second");
    second.data_member_location = Some(4);
    dies.insert(3, second);
    let mut virtual_base = member("virtual_base");
    virtual_base.member_location_unknown = true;
    dies.insert(4, virtual_base);
    let mut shared = member("shared");
    shared.external = Some(true);
    dies.insert(5, shared);
    let mut declared = member("declared");
    declared.declaration = true;
    dies.insert(6, declared);
    let ty = intern_aggregate(
        &types,
        &dies[&10],
        &dies,
        None,
        "Layout",
        &mut TypeWalk::with_gate(false),
        8,
        false,
        false,
    )
    .unwrap();
    let fields: Vec<_> = (0..ty.num_depend())
        .filter_map(|i| ty.get_field(i))
        .map(|f| (f.offset, f.name.clone()))
        .collect();
    assert_eq!(
        fields,
        vec![(0, "first".to_string()), (4, "second".to_string())]
    );
}

type Layout = (Vec<(int4, int4, String)>, Vec<(String, int4, int4, int4)>);

/// An `unsigned int` bitfield whose first bit, in the target's bit order, is
/// `start`: spelled `DW_AT_data_bit_offset` (`dwarf5`), or as a 4-byte unit
/// with `DW_AT_bit_offset` and a location.
fn bitfield(name: &str, start: u64, width: u64, big_endian: bool, dwarf5: bool) -> DieSnap {
    let mut m = die(gimli::DW_TAG_member, name);
    m.type_ref = Some(1);
    m.bit_size = Some(width);
    if dwarf5 {
        m.data_bit_offset = Some(start);
    } else {
        let within = (start % 32) as i64;
        m.byte_size = Some(4);
        m.bit_offset = Some(if big_endian {
            within
        } else {
            32 - within - width as i64
        });
        m.data_member_location = Some((start / 32 * 4) as i64);
    }
    m
}

/// The `(offset, size, name)` fields and `(name, byte offset, byte size, least
/// significant bit)` bitfields of a 12-byte struct of `members`.
fn layout(big_endian: bool, members: Vec<DieSnap>) -> Layout {
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types.set_truncate_big_endian(big_endian);
    let _ = types.cache_core_types();
    let mut dies = BTreeMap::new();
    let mut uint = die(gimli::DW_TAG_base_type, "unsigned int");
    uint.byte_size = Some(4);
    uint.encoding = Some(gimli::DW_ATE_unsigned);
    dies.insert(1, uint);
    let mut record = die(gimli::DW_TAG_structure_type, "Bits");
    record.byte_size = Some(12);
    record.children = (2..2 + members.len()).collect();
    for (i, m) in members.into_iter().enumerate() {
        dies.insert(2 + i, m);
    }
    let (fields, bits) = collect_members(
        &record,
        &dies,
        &types,
        8,
        &mut TypeWalk::with_gate(false),
        false,
        false,
    );
    (
        fields
            .iter()
            .map(|f| (f.offset, f.field_type.get_size(), f.name.clone()))
            .collect(),
        bits.iter()
            .map(|b| (b.name.clone(), b.byte_offset, b.byte_size, b.least_sig_bit))
            .collect(),
    )
}

#[test]
fn bitfields_follow_the_target_bit_order_in_either_spelling() {
    // struct { unsigned lo:3, hi:5, wide:16, top:8; unsigned a:4, b:12, c:16; }
    let declared = [
        ("lo", 0, 3),
        ("hi", 3, 5),
        ("wide", 8, 16),
        ("top", 24, 8),
        ("a", 32, 4),
        ("b", 36, 12),
        ("c", 48, 16),
    ];
    let fields = vec![
        (1, 2, "wide".to_string()),
        (3, 1, "top".into()),
        (6, 2, "c".into()),
    ];
    for (big_endian, bits) in [
        (
            true,
            [
                ("lo", 0, 1, 5),
                ("hi", 0, 1, 0),
                ("a", 4, 1, 4),
                ("b", 4, 2, 0),
            ],
        ),
        (
            false,
            [
                ("lo", 0, 1, 0),
                ("hi", 0, 1, 3),
                ("a", 4, 1, 0),
                ("b", 4, 2, 4),
            ],
        ),
    ] {
        let bits: Vec<_> = bits
            .iter()
            .map(|&(n, o, s, l)| (n.to_string(), o, s, l))
            .collect();
        for dwarf5 in [false, true] {
            let members = declared
                .iter()
                .map(|&(n, s, w)| bitfield(n, s, w, big_endian, dwarf5))
                .collect();
            assert_eq!(
                layout(big_endian, members),
                (fields.clone(), bits.clone()),
                "big_endian={big_endian} dwarf5={dwarf5}"
            );
        }
    }
}

#[test]
fn bitfields_are_listed_in_memory_order() {
    // struct { unsigned a:6, c:4, d:6; }: c and d end in the same byte.
    for (big_endian, expected) in [
        (true, [("a", 0, 1, 2), ("c", 0, 2, 6), ("d", 1, 1, 0)]),
        (false, [("a", 0, 1, 0), ("c", 0, 2, 6), ("d", 1, 1, 2)]),
    ] {
        let members = [("a", 0, 6), ("c", 6, 4), ("d", 10, 6)]
            .iter()
            .map(|&(n, s, w)| bitfield(n, s, w, big_endian, true))
            .collect();
        let expected: Vec<_> = expected
            .iter()
            .map(|&(n, o, s, l)| (n.to_string(), o, s, l))
            .collect();
        assert_eq!(
            layout(big_endian, members).1,
            expected,
            "big_endian={big_endian}"
        );
    }
}

#[test]
fn bitfields_without_a_bit_offset_or_with_a_negative_one_are_placed() {
    let mut packed = bitfield("packed", 0, 30, false, false);
    packed.bit_offset = Some(-6);
    let mut bare = die(gimli::DW_TAG_member, "bare");
    bare.type_ref = Some(1);
    bare.bit_size = Some(4);
    bare.data_member_location = Some(8);
    let mut too_wide = bitfield("too_wide", 64, 65, false, true);
    too_wide.bit_size = Some(65);
    let past_the_end = bitfield("past_the_end", 92, 8, false, true);
    let (fields, bits) = layout(false, vec![packed, bare.clone(), too_wide, past_the_end]);
    assert!(fields.is_empty(), "{fields:?}");
    assert_eq!(
        bits,
        vec![("packed".to_string(), 1, 4, 0), ("bare".into(), 8, 1, 0)]
    );
    assert_eq!(
        layout(true, vec![bare]).1,
        vec![("bare".to_string(), 8, 1, 4)]
    );
}
