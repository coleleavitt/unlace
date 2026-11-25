use super::*;

/// An offset variable mapped at the very top of the address space keeps its
/// name but is not reported constant: its range would wrap.
#[test]
fn ivar_offset_variable_at_the_top_of_the_address_space_is_not_folded() {
    let ivar = classt::Ivar {
        offset_va: u64::MAX - 1,
        name: "x".into(),
        types: None,
        offset: 8,
        size: 4,
    };
    let mut out = AnalysisOutput::default();
    emit_ivars(&[ivar], "C", true, &mut out);
    assert_eq!(out.data_objects.len(), 1);
    assert!(out.const_ranges.is_empty());
}

#[test]
fn pass_identity() {
    let p = ObjcMetadataPass;
    assert_eq!(p.id(), "objc");
    assert_eq!(p.phase(), Phase::P1);
}

#[test]
fn swift_runtime_class_names_demangle_for_labels() {
    assert_eq!(display_class_name("Greeter"), "Greeter");
    assert_eq!(
        display_class_name("_TtC6Sample24MainScreenViewController"),
        "Sample.MainScreenViewController"
    );
    assert_eq!(
        display_class_name("_TtCC6Sample5Outer5Inner"),
        "Sample.Outer.Inner"
    );
    assert_eq!(display_class_name("_TtC1"), "_TtC1");
}

#[test]
fn sanitize_selector_replaces_colons() {
    assert_eq!(sanitize_selector("greet:"), "greet_");
    assert_eq!(sanitize_selector("setFoo:bar:"), "setFoo_bar_");
    assert_eq!(sanitize_selector("length"), "length");
}

/// The full metadata walk over the vendored `macho_objc` fixture (spec-less:
/// parses the Mach-O directly, no SLEIGH `.sla` needed) recovers the class
/// `Greeter`, the selector `greet:`, and the IMP at the pinned VMA — the same
/// chain `verify_objc.rs` proves end-to-end through the decompiler. Locks the
/// `MachoImage` / `class_t` / `method_list_t` (small/relative form) readers.
#[test]
fn walks_macho_objc_fixture_metadata() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/macho_objc");
    let bytes = std::fs::read(path).expect("read macho_objc fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    assert_eq!(
        file.format(),
        object::BinaryFormat::MachO,
        "fixture must be a Mach-O"
    );

    let img = MachoImage::new(&file);
    let (cl_addr, cl_data) = img
        .classlists(&file)
        .into_iter()
        .next()
        .expect("__objc_classlist present");
    let ps = img.ptr_size() as usize;
    assert_eq!(ps, 8, "the fixture is a 64-bit Mach-O");

    // First (only) class: class_t -> class_ro_t -> name "Greeter".
    let class_ptr = img.read_ptr(cl_addr).expect("class_t pointer");
    let class = classt::read_class_t(&img, class_ptr).expect("class_t reads");
    assert_eq!(
        classt::class_name(&img, class.ro).as_deref(),
        Some("Greeter")
    );

    // Instance method list: the single `-(int)greet:` method.
    let list = classt::base_methods(&img, class.ro).expect("baseMethods present");
    let methods = methods::walk_method_list(&img, list, file.architecture());
    assert_eq!(methods.len(), 1, "exactly one instance method");
    let m = &methods[0];
    assert_eq!(m.selector, "greet:");
    assert_eq!(m.imp, 0x100000640, "the pinned IMP VMA");
    assert_eq!(m.types.as_deref(), Some("i20@0:8i16"));

    // The metaclass has no `+` methods.
    let meta_ro = classt::metaclass_ro(&img, class.isa).expect("metaclass ro");
    assert!(
        classt::base_methods(&img, meta_ro).is_none(),
        "no class (+) methods"
    );

    // The classlist holds exactly one class_t* entry (8 bytes).
    assert_eq!(cl_data.len(), ps, "one class in the classlist");
}

#[test]
fn preserves_odd_x86_64_imp_from_metadata() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_odd_imp"
    );
    let bytes = std::fs::read(path).expect("read odd-IMP fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    assert_eq!(file.architecture(), object::Architecture::X86_64);

    let img = MachoImage::new(&file);
    let (cl_addr, _) = img
        .classlists(&file)
        .into_iter()
        .next()
        .expect("__objc_classlist present");
    let class_ptr = img.read_ptr(cl_addr).expect("class_t pointer");
    let class = classt::read_class_t(&img, class_ptr).expect("class_t reads");
    let list = classt::base_methods(&img, class.ro).expect("baseMethods present");
    let methods = methods::walk_method_list(&img, list, file.architecture());

    assert_eq!(methods.len(), 1);
    assert_eq!(methods[0].selector, "greet:");
    assert_eq!(methods[0].imp, 0x1_0000_0641);
}

/// The arm64 chained-fixup path (design §5 PR-O0 + PR-O2): the vendored
/// `macho_objc_arm64` fixture is a **real `LC_DYLD_CHAINED_FIXUPS`** binary
/// (`-fixup_chains` lld), so its `__objc_*` pointer slots are packed fixup
/// entries. This proves the chained-fixup resolver + the arm64 ObjC walk
/// together recover `-[Greeter greet:]`:
///
///   1. The resolver builds a non-empty overlay; the `__objc_classlist[0]`
///      slot **resolves** to the real `class_t` VMA `0x100008000` (a slot the
///      raw word also happens to equal, with `next=0`), and the `class_t.isa`
///      slot — which carries a non-zero `next` in its high bits — resolves to
///      the real `0x100008028` (the raw word `0x0020000100008028` would be
///      garbage without the resolver).
///   2. With the overlay threaded through `MachoImage::read_ptr`, the walk
///      reaches the class name `Greeter`, the selector `greet:`, the type
///      encoding `i20@0:8i16`, and the IMP at the pinned VMA `0x1000005f0`.
#[test]
fn walks_macho_objc_arm64_chained_fixups() {
    use crate::loader::format::macho::resolve_chained_fixups;
    use object::read::Object;

    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_arm64"
    );
    let bytes = std::fs::read(path).expect("read macho_objc_arm64 fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    assert_eq!(file.format(), object::BinaryFormat::MachO);
    assert_eq!(
        file.architecture(),
        object::Architecture::Aarch64,
        "arm64 fixture"
    );

    // (1) The chained-fixup resolver: a real LC_DYLD_CHAINED_FIXUPS binary
    // yields a NON-empty overlay, and the classlist/class_t slots resolve to
    // the real class_t VMAs.
    let fixups = resolve_chained_fixups(&file, &bytes);
    assert!(
        !fixups.is_empty(),
        "the fixture carries real chained fixups"
    );
    assert_eq!(
        fixups.resolved_ptr(0x100004000),
        Some(0x100008000),
        "__objc_classlist[0] resolves to the class_t VMA"
    );
    assert_eq!(
        fixups.resolved_ptr(0x100008000),
        Some(0x100008028),
        "class_t.isa slot resolves to the metaclass (raw word would be garbage)"
    );

    // (2) The arm64 walk THROUGH the resolved overlay recovers the method name.
    let img = MachoImage::with_fixups(&file, fixups);
    let (cl_addr, _cl_data) = img
        .classlists(&file)
        .into_iter()
        .next()
        .expect("__objc_classlist present");
    let class_ptr = img.read_ptr(cl_addr).expect("class_t pointer (resolved)");
    assert_eq!(class_ptr, 0x100008000, "the resolved class_t VMA");

    let class = classt::read_class_t(&img, class_ptr).expect("class_t reads");
    assert_eq!(
        classt::class_name(&img, class.ro).as_deref(),
        Some("Greeter")
    );

    let list = classt::base_methods(&img, class.ro).expect("baseMethods present");
    let methods = methods::walk_method_list(&img, list, file.architecture());
    assert_eq!(methods.len(), 1, "exactly one instance method");
    let m = &methods[0];
    assert_eq!(m.selector, "greet:");
    assert_eq!(m.imp, 0x1000005f0, "the pinned arm64 IMP VMA");
    assert_eq!(m.types.as_deref(), Some("i20@0:8i16"));
}

/// The no-op guarantee (CAUTION in the brief): the chained-fixup resolver
/// yields an **empty** overlay on the classic x86-64 `macho_objc` fixture
/// (which uses `LC_DYLD_INFO_ONLY`, not `LC_DYLD_CHAINED_FIXUPS`), so
/// `read_ptr` reads raw section words exactly as before — the existing x86-64
/// fixtures stay byte-identical.
#[test]
fn resolver_is_noop_on_non_chained_fixup_macho() {
    use crate::loader::format::macho::resolve_chained_fixups;
    for name in ["macho_objc", "macho_imports"] {
        let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
        let bytes = std::fs::read(&path).expect("read fixture");
        let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
        let fixups = resolve_chained_fixups(&file, &bytes);
        assert!(
            fixups.is_empty(),
            "{name} has no LC_DYLD_CHAINED_FIXUPS → the resolver is a strict no-op"
        );
        // With an empty overlay, read_ptr falls through to the raw section word.
        let img = MachoImage::with_fixups(&file, fixups);
        let img_raw = MachoImage::new(&file);
        if let Some((cl_addr, _)) = img.classlists(&file).into_iter().next() {
            assert_eq!(
                img.read_ptr(cl_addr),
                img_raw.read_ptr(cl_addr),
                "{name}: with/without the (empty) overlay reads identically"
            );
        }
    }
}
