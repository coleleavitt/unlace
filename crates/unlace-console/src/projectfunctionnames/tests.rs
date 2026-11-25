use super::identifier;
#[test]
fn only_unqualified_c_identifiers_are_candidates() {
    for name in ["helper_linkage", "_worker", "sample2"] {
        assert!(identifier(name));
    }
    for name in [
        "",
        "2sample",
        "ns::sample",
        "operator+",
        "for",
        "_Atomic",
        "helper.0",
        "asm",
        "typeof",
        "__asm__",
        "__typeof__",
    ] {
        assert!(!identifier(name));
    }
}
#[test]
fn exact_global_lookup_respects_renames_and_declines_namespace_owners() {
    use std::rc::Rc;
    use unlace_base::address::Address;
    let root = std::path::PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../..");
    let mut program = crate::engine::bootstrap_from_file(
        root.join("tests/datatests/boolless.xml").to_str().unwrap(),
        "",
        &[root.join("specs").to_string_lossy().into_owned()],
    )
    .unwrap();
    let space = Rc::clone(program.arch().manage().get_default_code_space().unwrap());
    let entry = Address::new(Rc::clone(&space), 0x6000);
    program
        .declare_function(entry.clone(), Some("helper_linkage"), 4)
        .unwrap();
    assert_eq!(
        super::display_at(program.arch(), &entry, "helper").as_deref(),
        Some("helper_linkage")
    );
    program
        .declare_function(entry.clone(), Some("caller_named"), 4)
        .unwrap();
    assert_eq!(
        super::display_at(program.arch(), &entry, "helper").as_deref(),
        Some("caller_named")
    );
    let method = Address::new(space, 0x7000);
    program
        .declare_function(method.clone(), Some("ns::method"), 4)
        .unwrap();
    assert_eq!(super::display_at(program.arch(), &method, "method"), None);
    assert_eq!(
        super::display_at(program.arch(), &entry, "ns::helper"),
        None
    );
}
