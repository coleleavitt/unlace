use super::*;

#[test]
fn swift_mangled_selector_is_demangled_and_others_pass_through() {
    assert_eq!(display_selector("_$s4main5helloyyF".into()), "main.hello()");
    assert_eq!(display_selector("greet:".into()), "greet:");
    assert_eq!(display_selector("$s".into()), "$s");
}

#[test]
fn x86_64_odd_imp_is_an_address() {
    assert_eq!(
        normalize_imp(Architecture::X86_64, 0x1_0000_1d2b),
        0x1_0000_1d2b
    );
}

#[test]
fn arm32_odd_imp_carries_thumb_state() {
    assert_eq!(normalize_imp(Architecture::Arm, 0x1001), 0x1000);
}

/// A drained walk budget stops the method walk and the string reads, so a
/// crafted image that repeats its records cannot cost unbounded work.
#[test]
fn exhausted_walk_budget_stops_the_walk_and_the_strings() {
    use super::super::classt;
    use crate::loader::format::macho::resolve_chained_fixups;
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/macho_objc_refs_arm64"
    );
    let bytes = std::fs::read(path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse Mach-O");
    let img = MachoImage::with_fixups(&file, resolve_chained_fixups(&file, &bytes));
    let class = classt::read_class_t(&img, 0x100008050).expect("class_t Derived");
    let list = classt::base_methods(&img, class.ro).expect("method list");
    assert!(!walk_method_list(&img, list, Architecture::Aarch64).is_empty());
    assert_eq!(img.read_cstr(0x100000942).as_deref(), Some("count"));
    while img.charge(1 << 20) {}
    assert!(walk_method_list(&img, list, Architecture::Aarch64).is_empty());
    assert_eq!(img.read_cstr(0x100000942), None);
}
