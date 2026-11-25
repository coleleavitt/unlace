use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;

fn factory() -> TypeFactoryImpl {
    let factory = TypeFactoryImpl::new();
    factory.set_default_alignment_map();
    factory.set_max_basetype_size(8);
    factory
}

#[test]
fn carried_names_cannot_rename_backing_over_a_future_debug_local() {
    let mapped = BTreeSet::from(["dwarf_stack_1000".to_owned()]);
    let reserved = BTreeSet::from(["dwarf_stack_1000_1".to_owned()]);
    assert_eq!(
        local_name("dwarf_stack_1000", &mapped, &reserved),
        "dwarf_stack_1000_2"
    );
    assert_eq!(
        local_name("dwarf_stack_2000", &mapped, &reserved),
        "dwarf_stack_2000"
    );
}

#[test]
fn overlapping_views_share_one_exact_extent_and_reuse_identity() {
    let f = factory();
    let integer = f.get_base(8, type_metatype::TYPE_INT).unwrap();
    let real = f.get_base(4, type_metatype::TYPE_FLOAT).unwrap();
    let locals = vec![("bits".into(), integer, -32), ("alias".into(), real, -32)];
    let first = coalesce(&f, 0x1000, locals.clone(), u64::MAX);
    assert_eq!(first.len(), 1);
    assert_eq!(first[0].2, -32);
    assert_eq!(first[0].1.get_size(), 8);
    assert_eq!(first[0].1.get_metatype(), type_metatype::TYPE_UNION);
    assert!(Rc::ptr_eq(
        &first[0].1,
        &coalesce(&f, 0x1000, locals, u64::MAX)[0].1
    ));
}

#[test]
fn reused_slots_of_one_type_stay_one_local_and_views_keep_debug_names() {
    let f = factory();
    let word = f.get_base(4, type_metatype::TYPE_UINT).unwrap();
    let real = f.get_base(4, type_metatype::TYPE_FLOAT).unwrap();
    let mapped = coalesce(
        &f,
        0x1000,
        vec![
            ("rsa_n".into(), Rc::clone(&word), -32),
            ("dsa_p".into(), Rc::clone(&word), -32),
            ("kx".into(), Rc::clone(&word), -16),
            ("storage_bytes".into(), real, -16),
            ("err".into(), word, -16),
        ],
        u64::MAX,
    );
    assert_eq!(mapped.len(), 2);
    assert_eq!(mapped[0].0, "dsa_p");
    assert_eq!(mapped[0].1.get_metatype(), type_metatype::TYPE_UINT);
    let union = &mapped[1].1;
    assert_eq!(union.get_metatype(), type_metatype::TYPE_UNION);
    let members: Vec<_> = (0..union.num_depend() as i32)
        .map(|index| union.get_field(index).unwrap().name.clone())
        .collect();
    assert_eq!(members, ["err", "storage_bytes_1", "storage_bytes"]);
}

#[test]
fn transitive_interior_overlap_keeps_adjacent_objects_separate() {
    let f = factory();
    let word = f.get_base(4, type_metatype::TYPE_UINT).unwrap();
    let locals = vec![
        ("a".into(), Rc::clone(&word), -32),
        ("b".into(), Rc::clone(&word), -30),
        ("c".into(), Rc::clone(&word), -28),
        ("next".into(), word, -24),
    ];
    let mapped = coalesce(&f, 0x1000, locals, u64::MAX);
    assert_eq!(mapped.len(), 2);
    assert_eq!(mapped[0].1.get_size(), 8);
    assert_eq!(mapped[1].0, "next");
    let slice = &mapped[0].1.get_field(1).unwrap().field_type;
    assert_eq!(slice.get_field(0).unwrap().offset, 2);
    assert_eq!(slice.get_size(), 6);
    assert_eq!(slice.get_alignment(), 2);
}

#[test]
fn a_user_type_with_the_synthetic_name_is_never_overwritten() {
    let f = factory();
    let held = f
        .get_type_struct("dwarf_stack_1000_ffffffffffffffe0_0")
        .unwrap();
    let word = f.get_base(4, type_metatype::TYPE_UINT).unwrap();
    let real = f.get_base(4, type_metatype::TYPE_FLOAT).unwrap();
    let mapped = coalesce(
        &f,
        0x1000,
        vec![("a".into(), word, -32), ("b".into(), real, -32)],
        u64::MAX,
    );
    assert_eq!(held.get_size(), 0);
    assert_eq!(
        mapped[0].1.get_name(),
        "dwarf_stack_1000_ffffffffffffffe0_1"
    );
}

#[test]
fn generated_local_names_do_not_shadow_neighboring_debug_locals() {
    let f = factory();
    let word = f.get_base(4, type_metatype::TYPE_UINT).unwrap();
    let real = f.get_base(4, type_metatype::TYPE_FLOAT).unwrap();
    let mapped = coalesce(
        &f,
        0x1000,
        vec![
            ("a".into(), Rc::clone(&word), -32),
            ("b".into(), real, -32),
            ("shared_ffffffffffffffe0".into(), word, -16),
        ],
        u64::MAX,
    );
    assert_eq!(mapped[0].0, "shared_ffffffffffffffe0_1");
    assert_eq!(mapped[1].0, "shared_ffffffffffffffe0");
}

#[test]
fn stack_width_normalizes_aliases_and_declines_wrapping_components() {
    let f = factory();
    let word = f.get_base(4, type_metatype::TYPE_UINT).unwrap();
    let real = f.get_base(4, type_metatype::TYPE_FLOAT).unwrap();
    let mapped = coalesce(
        &f,
        0x1000,
        vec![
            ("a".into(), Rc::clone(&word), -32),
            ("b".into(), real, 0xffffffe0),
            ("wrap".into(), Rc::clone(&word), -2),
            ("zero".into(), Rc::clone(&word), 0),
            ("chain".into(), word, 2),
        ],
        0xffffffff,
    );
    assert_eq!(mapped.len(), 1);
    assert_eq!(mapped[0].2, -32);
    assert_eq!(mapped[0].1.get_metatype(), type_metatype::TYPE_UNION);
    assert!(byte_overlap(0xffffffff, 2, 0, 4, 0xffffffff));
    assert!(!byte_overlap(0xfffffffc, 4, 0, 4, 0xffffffff));
}

#[test]
fn a_slice_with_extra_bitfields_is_not_the_same_layout() {
    use unlace_decomp::dtype::TypeBitField;
    let f = factory();
    let word = f.get_base(4, type_metatype::TYPE_UINT).unwrap();
    let name = "dwarf_stack_1000_ffffffffffffffe0_slice_1_0";
    let user = f
        .set_fields_struct_raw(
            &f.get_type_struct(name).unwrap(),
            vec![TypeField::new(0, 2, "value", Rc::clone(&word))],
            vec![TypeBitField::new(1, 1, false, "extra", Rc::clone(&word))],
            6,
            2,
            0,
        )
        .unwrap();
    let mapped = coalesce(
        &f,
        0x1000,
        vec![("a".into(), Rc::clone(&word), -32), ("b".into(), word, -30)],
        u64::MAX,
    );
    let slice = &mapped[0].1.get_field(1).unwrap().field_type;
    assert!(!Rc::ptr_eq(slice, &user));
    assert!(slice.get_name().ends_with("slice_1_1"));
}
