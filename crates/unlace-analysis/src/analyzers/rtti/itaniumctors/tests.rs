use super::*;

fn class(name: &str, ancestors: &[usize], vptrs: &[u64]) -> ClassVtables {
    ClassVtables {
        name: name.to_string(),
        ancestors: ancestors.iter().copied().collect(),
        primary_slots: Vec::new(),
        vptrs: vptrs.to_vec(),
        null_dtor_pair: false,
    }
}

fn store(vptr: u64, after_build: bool) -> Store {
    Store {
        vptr,
        off: 0,
        spilled: false,
        after_call: after_build,
        after_branch: after_build,
        after_build,
    }
}

/// An optimized constructor stores its base's vptr (or calls the base
/// constructor with `this`) before its own; a destructor stores in the other
/// order, and a class with no base shows no order at all.
#[test]
fn an_optimized_constructor_builds_its_base_first() {
    let base = class("Base", &[], &[0x100]);
    let derived = class("Derived", &[0], &[0x200]);
    let classes = vec![base, derived];
    let owner_of = owners(&classes);
    let inlined = [store(0x100, false), store(0x200, false)];
    assert!(built_after_base(&inlined, 1, &owner_of, &classes));
    let called = [store(0x200, true)];
    assert!(built_after_base(&called, 1, &owner_of, &classes));
    let dtor = [store(0x200, false), store(0x100, false)];
    assert!(!built_after_base(&dtor, 1, &owner_of, &classes));
    let alone = [store(0x200, false)];
    assert!(!built_after_base(&alone, 1, &owner_of, &classes));
    let root = [store(0x100, true)];
    assert!(!built_after_base(&root, 0, &owner_of, &classes));
}

/// A class derived from an abstract base whose destructor slots are null
/// keeps its own destructors there; a class with two unrelated bases, or a
/// slot its base's vtable holds too, is left alone.
#[test]
fn destructors_follow_the_base_null_slots() {
    let mut base = class("PLObject", &[], &[0x9000]);
    base.null_dtor_pair = true;
    let mut string = class("PLString", &[0], &[0x9100]);
    string.primary_slots = vec![Some(0x100), Some(0x110), Some(0x120)];
    let mut deeper = class("PLText", &[0, 1], &[0x9200]);
    deeper.primary_slots = vec![Some(0x200), Some(0x210), Some(0x120)];
    let other = class("Other", &[], &[0x9300]);
    let mut both = class("Both", &[0, 3], &[0x9400]);
    both.primary_slots = vec![Some(0x300), Some(0x310)];
    let classes = vec![base, string, deeper, other, both];
    let mut dtor_at = HashMap::from([(0usize, 0usize)]);
    let mut has = HashSet::from([0usize]);
    let mut out = Vec::new();
    inherited_destructor_slots(&classes, &mut dtor_at, &mut has, &mut out);
    dedup(&mut out);
    let names: Vec<(u64, &str)> = out.iter().map(|s| (s.addr, s.name.as_str())).collect();
    assert_eq!(
        names,
        [
            (0x100, "PLString::~PLString"),
            (0x110, "PLString::~PLString"),
            (0x200, "PLText::~PLText"),
            (0x210, "PLText::~PLText"),
        ]
    );
    assert!(has.contains(&2) && !has.contains(&4));
}

#[test]
fn the_most_derived_primary_store_owns_the_function() {
    let classes = [
        class("Shape", &[], &[0x100]),
        class("Circle", &[0], &[0x200]),
    ];
    let o = owners(&classes);
    assert_eq!(
        owning_class(&[(0x100, 0), (0x200, 0)], &o, &classes),
        Some(1)
    );
    assert_eq!(owning_class(&[(0x100, 0)], &o, &classes), Some(0));
}

#[test]
fn unrelated_classes_or_a_secondary_alone_own_nothing() {
    let classes = [class("A", &[], &[0x100]), class("B", &[], &[0x200, 0x210])];
    let o = owners(&classes);
    assert_eq!(owning_class(&[(0x100, 0), (0x200, 0)], &o, &classes), None);
    assert_eq!(owning_class(&[(0x210, 16)], &o, &classes), None);
    assert_eq!(
        owning_class(&[(0x200, 0), (0x210, 16)], &o, &classes),
        Some(1)
    );
    assert_eq!(owning_class(&[(0x200, 8)], &o, &classes), None);
}

#[test]
fn names_follow_the_symbol_table_spelling() {
    assert_eq!(ctor_name("shapes::Circle"), "shapes::Circle::Circle");
    assert_eq!(dtor_name("shapes::Circle"), "shapes::Circle::~Circle");
    assert_eq!(dtor_name("Vec_int"), "Vec_int::~Vec_int");
}

#[test]
fn operand_text_yields_its_hex_literals() {
    assert_eq!(
        hex_literals("RDX,[0x3d00]").collect::<Vec<_>>(),
        vec![0x3d00]
    );
    assert_eq!(hex_literals("x0, 0x3000").collect::<Vec<_>>(), vec![0x3000]);
    assert_eq!(
        hex_literals("RAX,qword ptr [RBP + -0x8]").collect::<Vec<_>>(),
        vec![8]
    );
    assert_eq!(hex_literals("EAX,EDX").count(), 0);
}

#[test]
fn only_a_placeholder_or_slot_name_gives_way() {
    for structural in [
        "sub_14ea",
        "FUN_00101234",
        "_INIT_0",
        "_DT_FINI",
        "shapes::Circle::vtable_0",
        "shapes::Circle::vfunc_0",
        "shapes::Widget::vtable_for_Drawable_2",
        "shapes::Widget::vfunc_for_Drawable_2",
    ] {
        assert!(is_structural_name(structural), "{structural}");
    }
    for real in [
        "make_dog",
        "ce::Opt0::emplace",
        "zoo::Dog::Dog",
        "vtable_0",
        "Box::vtable",
    ] {
        assert!(!is_structural_name(real), "{real}");
    }
}

#[test]
fn sign_extension_reads_a_frame_offset() {
    assert_eq!(sign_extend(0xffff_fff8, 32), -8);
    assert_eq!(sign_extend(0xffff_ffff_ffff_fff0, 64), -16);
    assert_eq!(sign_extend(8, 64), 8);
}
