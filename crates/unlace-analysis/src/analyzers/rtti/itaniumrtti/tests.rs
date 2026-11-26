use super::*;

#[test]
fn pass_identity() {
    let p = ItaniumRttiPass;
    assert_eq!(p.id(), "itaniumrtti");
    assert_eq!(p.phase(), Phase::P1);
}

#[test]
fn abi_vtable_names_map_to_flavours() {
    assert_eq!(
        Flavor::from_abi_vtable("_ZTVN10__cxxabiv117__class_type_infoE"),
        Some(Flavor::Class)
    );
    assert_eq!(
        Flavor::from_abi_vtable("_ZTVN10__cxxabiv120__si_class_type_infoE@CXXABI_1.3"),
        Some(Flavor::SiClass)
    );
    assert_eq!(
        Flavor::from_abi_vtable("_ZTVN10__cxxabiv121__vmi_class_type_infoE"),
        Some(Flavor::VmiClass)
    );
    // A non-class type-information flavour names no class.
    assert_eq!(
        Flavor::from_abi_vtable("_ZTVN10__cxxabiv123__fundamental_type_infoE"),
        None
    );
    assert_eq!(Flavor::from_abi_vtable("_ZTV5Shape"), None);
}

/// A synthetic x86-64 image reproducing the probe's `Shape`/`Circle` shape:
/// two typeinfos (`5Shape` base-less, `6Circle` si-derived from it) and their
/// two vtables, each repeating `Shape::perimeter` at slot 1.
fn synth() -> (Vec<u8>, Vec<u8>, RefKind) {
    let rk = RefKind::new(true, 0, End::Little);
    // .rodata @ 0x5000: the two type-name strings.
    let mut rodata = vec![0u8; 0x40];
    rodata[0x00..0x07].copy_from_slice(b"5Shape\0");
    rodata[0x10..0x18].copy_from_slice(b"6Circle\0");
    // .data.rel.ro @ 0x7000.
    let mut rel = vec![0u8; 0x100];
    let put = |v: &mut [u8], off: usize, x: u64| v[off..off + 8].copy_from_slice(&x.to_le_bytes());
    // Shape vtable object @0x7000: top=0, ti=0x7080, slots 0x1000, 0x1010.
    put(&mut rel, 0x00, 0);
    put(&mut rel, 0x08, 0x7080);
    put(&mut rel, 0x10, 0x1000);
    put(&mut rel, 0x18, 0x1010);
    // Circle vtable object @0x7030: top=0, ti=0x70a0, slots 0x1020, 0x1010.
    put(&mut rel, 0x30, 0);
    put(&mut rel, 0x38, 0x70a0);
    put(&mut rel, 0x40, 0x1020);
    put(&mut rel, 0x48, 0x1010);
    // _ZTI5Shape @0x7080 (__class_type_info): [vptr][name].
    put(&mut rel, 0x80, 0xdead);
    put(&mut rel, 0x88, 0x5000);
    // _ZTI6Circle @0x70a0 (__si_class_type_info): [vptr][name][base].
    put(&mut rel, 0xa0, 0xbeef);
    put(&mut rel, 0xa8, 0x5010);
    put(&mut rel, 0xb0, 0x7080);
    (rodata, rel, rk)
}

fn decode_synth() -> (Vec<TypeInfo>, Vec<SubVtable>, RefKind) {
    let (rodata, rel, rk) = synth();
    let img = ImageBytes::from_spans(vec![(0x5000, &rodata), (0x7000, &rel)]);
    let cands = vec![
        (0x7080u64, Some(Flavor::Class)),
        (0x70a0u64, Some(Flavor::SiClass)),
    ];
    let tis = decode_typeinfos(&img, &rk, &cands);
    let text = TextRanges::for_test(vec![(0x1000, 0x2000)]);
    let subs = recover_subvtables(&img, &rk, &text, &HashSet::new(), &tis);
    (tis, subs, rk)
}

#[test]
fn decodes_class_names_and_single_inheritance() {
    let (tis, _, _) = decode_synth();
    let names: Vec<&str> = tis.iter().map(|t| t.class.as_str()).collect();
    assert_eq!(names, vec!["Shape", "Circle"]);
    assert!(tis[0].bases.is_empty());
    assert_eq!(tis[1].bases, vec![(0x7080, 0)]);
}

#[test]
fn recovers_both_vtables_and_rejects_the_base_pointer() {
    let (_, subs, _) = decode_synth();
    // 0x70b0 (Circle's base-class pointer) also holds 0x7080, but it lies inside
    // the typeinfo object and has no code slot — it must not become a vtable.
    let headers: Vec<u64> = subs.iter().map(|s| s.header).collect();
    assert_eq!(headers, vec![0x7000, 0x7030]);
    assert_eq!(subs[0].slots, vec![Some(0x1000), Some(0x1010)]);
    assert_eq!(subs[1].slots, vec![Some(0x1020), Some(0x1010)]);
}

#[test]
fn inherited_slot_is_attributed_to_the_defining_base() {
    let (tis, subs, _) = decode_synth();
    let by_addr: HashMap<u64, &TypeInfo> = tis.iter().map(|t| (t.addr, t)).collect();
    let labelled: Vec<(&SubVtable, &str, String)> = subs
        .iter()
        .map(|s| {
            let ti = by_addr[&s.typeinfo];
            (s, ti.class.as_str(), subvtable_suffix(ti, s, &by_addr))
        })
        .collect();
    let named: HashMap<u64, String> = attribute_slots(&tis, &labelled).into_iter().collect();
    assert_eq!(named[&0x1000], "Shape::vfunc_0");
    assert_eq!(named[&0x1020], "Circle::vfunc_0");
    // 0x1010 is slot 1 of BOTH vtables; Shape defines it, Circle inherits it.
    assert_eq!(named[&0x1010], "Shape::vfunc_1");
}

/// A virtual base's `offset_flags >> 8` is the vtable offset of its
/// vbase-offset word, not its displacement: `D : virtual B` keeps B at +16,
/// stored 24 bytes before D's address point, and the secondary sub-vtable
/// at offset-to-top -16 is B's.
#[test]
fn virtual_base_displacement_is_read_from_the_vtable() {
    let rk = RefKind::new(true, 0, End::Little);
    let mut rodata = vec![0u8; 0x20];
    rodata[0x00..0x03].copy_from_slice(b"1B\0");
    rodata[0x10..0x13].copy_from_slice(b"1D\0");
    let mut rel = vec![0u8; 0x100];
    let put = |v: &mut [u8], off: usize, x: u64| v[off..off + 8].copy_from_slice(&x.to_le_bytes());
    put(&mut rel, 0x00, 0);
    put(&mut rel, 0x08, 0x7080);
    put(&mut rel, 0x10, 0x1000);
    put(&mut rel, 0x20, 16);
    put(&mut rel, 0x28, 0);
    put(&mut rel, 0x30, 0x70a0);
    put(&mut rel, 0x38, 0x1020);
    put(&mut rel, 0x40, (-16i64) as u64);
    put(&mut rel, 0x48, 0x70a0);
    put(&mut rel, 0x50, 0x1010);
    put(&mut rel, 0x80, 0xdead);
    put(&mut rel, 0x88, 0x5000);
    put(&mut rel, 0xa0, 0xbeef);
    put(&mut rel, 0xa8, 0x5010);
    rel[0xb4..0xb8].copy_from_slice(&1u32.to_le_bytes());
    put(&mut rel, 0xb8, 0x7080);
    put(&mut rel, 0xc0, (((-24i64) << 8) | 3) as u64);
    let img = ImageBytes::from_spans(vec![(0x5000, &rodata), (0x7000, &rel)]);
    let cands = vec![
        (0x7080u64, Some(Flavor::Class)),
        (0x70a0u64, Some(Flavor::VmiClass)),
    ];
    let mut tis = decode_typeinfos(&img, &rk, &cands);
    assert_eq!(tis[1].bases, vec![]);
    assert_eq!(tis[1].virtual_bases, vec![(0x7080, -24)]);
    let text = TextRanges::for_test(vec![(0x1000, 0x2000)]);
    let subs = recover_subvtables(&img, &rk, &text, &HashSet::new(), &tis);
    resolve_virtual_bases(&img, &rk, &mut tis, &subs);
    assert_eq!(tis[1].bases, vec![(0x7080, 16)]);
    let by_addr: HashMap<u64, &TypeInfo> = tis.iter().map(|t| (t.addr, t)).collect();
    let secondary = subs
        .iter()
        .find(|s| s.typeinfo == 0x70a0 && s.offset_to_top == -16)
        .unwrap();
    assert_eq!(
        subvtable_suffix(&tis[1], secondary, &by_addr),
        "vtable_for_B"
    );
}

/// A secondary sub-vtable takes the NAME of the base subobject its
/// `offset-to-top` displacement identifies — the multiple-inheritance case the
/// probe's `Widget : Loggable, Drawable` produces (`Drawable` at +16, so its
/// sub-vtable's offset-to-top is -16).
#[test]
fn secondary_subvtable_is_named_for_its_base() {
    let shape = TypeInfo {
        addr: 0x7080,
        name_addr: 0x5000,
        class: "Drawable".into(),
        demangled: "Drawable".into(),
        bases: vec![],
        virtual_bases: vec![],
        size: 16,
    };
    let widget = TypeInfo {
        addr: 0x70c0,
        name_addr: 0x5020,
        class: "Widget".into(),
        demangled: "Widget".into(),
        bases: vec![(0x7080, 16)],
        virtual_bases: vec![],
        size: 56,
    };
    let by_addr: HashMap<u64, &TypeInfo> = [(shape.addr, &shape), (widget.addr, &widget)]
        .into_iter()
        .collect();
    let sub = SubVtable {
        header: 0x7000,
        first_slot: 0x7010,
        offset_to_top: 0,
        typeinfo: widget.addr,
        slots: vec![],
    };
    assert_eq!(subvtable_suffix(&widget, &sub, &by_addr), "vtable");
    let secondary = SubVtable {
        offset_to_top: -16,
        ..sub.clone()
    };
    assert_eq!(
        subvtable_suffix(&widget, &secondary, &by_addr),
        "vtable_for_Drawable"
    );
    // A displacement no declared base claims keeps a unique, raw-offset label.
    let orphan = SubVtable {
        offset_to_top: -32,
        ..sub
    };
    assert_eq!(subvtable_suffix(&widget, &orphan, &by_addr), "vtable_at_20");
    // A DATA label puts the class in the leaf (the printer emits a global by its
    // leaf name), while a namespace qualification is preserved as scope.
    assert_eq!(data_label("Widget", "vtable"), "Widget_vtable");
    assert_eq!(
        data_label("leveldb::Env", "typeinfo"),
        "leveldb::Env_typeinfo"
    );
}

/// Distinct classes must stay distinct after sanitization — the defect an
/// adversarial two-instantiation probe found (both `Vec<int>` and `Vec<double>`
/// reducing to `Vec` cost 4 of 14 virtual methods).
#[test]
fn class_names_sanitize_to_distinct_identifier_chains() {
    assert_eq!(sanitize_class_name("Shape"), "Shape");
    assert_eq!(sanitize_class_name("a::b::c::Deep"), "a::b::c::Deep");
    assert_eq!(sanitize_class_name("leveldb::Env"), "leveldb::Env");
    // Template arguments are FOLDED IN, never deleted.
    assert_eq!(sanitize_class_name("Vec<int>"), "Vec_int");
    assert_eq!(sanitize_class_name("Vec<double>"), "Vec_double");
    assert_ne!(
        sanitize_class_name("Vec<int>"),
        sanitize_class_name("Vec<double>")
    );
    // An anonymous namespace is not an identifier; it becomes one.
    assert_eq!(
        sanitize_class_name("(anonymous namespace)::Hidden"),
        "anonymous_namespace::Hidden"
    );
    // A `::` INSIDE a template argument list is not a scope boundary.
    assert_eq!(
        sanitize_class_name("std::vector<std::pair<int, int> >"),
        "std::vector_std_pair_int_int"
    );
    assert_eq!(sanitize_class_name(""), "");
}

#[test]
fn offset_to_top_sign_extends_per_width() {
    let rk64 = RefKind::new(true, 0, End::Little);
    assert_eq!(sign_extend(u64::MAX - 15, &rk64), -16);
    let rk32 = RefKind::new(false, 0, End::Little);
    assert_eq!(sign_extend(0xffff_fff0, &rk32), -16);
}
