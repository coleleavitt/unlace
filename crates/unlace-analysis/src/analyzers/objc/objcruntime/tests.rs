use super::*;

#[test]
fn outlined_names_name_their_register() {
    assert_eq!(outlined_register("objc_retain_x19"), Some("x19"));
    assert_eq!(outlined_register("objc_release_x0"), Some("x0"));
    assert_eq!(
        outlined_register("objc_retain_x29"),
        None,
        "the frame pointer is never used"
    );
    assert_eq!(outlined_register("objc_retain"), None);
    assert_eq!(outlined_register("objc_retain_xa"), None);
}

#[test]
fn runtime_table_has_no_duplicate_and_decodable_shapes() {
    let mut seen = std::collections::HashSet::new();
    for (name, ret, args) in RUNTIME {
        assert!(seen.insert(*name), "{name} listed twice");
        for e in std::iter::once(ret).chain(args.iter()) {
            assert!(
                matches!(
                    e.as_bytes()[0],
                    b'@' | b'#' | b':' | b'*' | b'v' | b'B' | b'i' | b'q' | b'^'
                ),
                "{name}: {e}"
            );
        }
    }
}
