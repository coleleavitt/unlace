use super::*;
#[test]
fn default_preserves_binary_spelling_and_ident_preserves_stems() {
    let mut off = Names::new(Vec::new(), false);
    assert_eq!(off.name("tempfile.3", 1), "tempfile.3");
    let mut on = Names::new(Vec::new(), true);
    assert_eq!(on.name("tempfile.3", 1), "tempfile_3");
    assert_eq!(on.name("for", 2), "for_");
    assert_eq!(on.name("***", 3), "unlace_global_3");
    let mut scoped = Names::new(["other::tempfile_3".to_string()], true);
    assert_eq!(scoped.name("ns::tempfile.3", 4), "ns::tempfile_3");
}
#[test]
fn imported_spellings_remain_distinct_from_reserved_functions_and_data() {
    let mut names = Names::new(
        [
            "counter_3_1",
            "unlace_global_1000",
            "ns::unlace_global_1000_1",
        ]
        .into_iter()
        .map(str::to_string),
        true,
    );
    assert_eq!(names.name("counter_3_1", 0x2000), "counter_3_1");
    let dotted = names.name("counter.3.1", 0x1000).into_owned();
    assert!(!invalid(&dotted));
    assert_eq!(dotted, "counter_3_1_1");
    assert_ne!(dotted, "unlace_global_1000");
    assert_ne!(dotted, "unlace_global_1000_1");
    assert_eq!(names.name("counter.3.1", 0x1000), dotted);
    assert_ne!(names.name("other.0", 0x1000), dotted);
    assert_eq!(names.name("ns::valid", 0x3000), "ns::valid");
    assert!(names.name("ns::other.0", 0x4000).starts_with("ns::other_0"));
    assert_eq!(names.name("ação", 0x5000), "ação");
    for raw in [
        "for",
        "1value",
        "a-b",
        "a b",
        "a.b",
        "bad\u{a0}name",
        "name—part",
        "١value",
        "",
    ] {
        assert!(!invalid(&names.name(raw, 0x6000)));
    }
}
