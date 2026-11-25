use super::shape;

/// The entry points are matched with any number of leading underscores, and
/// only those that take a buffer carry its slots.
#[test]
fn entry_point_shapes() {
    for name in [
        "_os_log_impl",
        "__os_log_impl",
        "os_log_error_impl",
        "_os_log_fault_impl",
    ] {
        let found = shape(name).expect(name);
        assert_eq!((found.fixed, found.buffer), (4, Some((5, 6))), "{name}");
    }
    let signpost = shape("_os_signpost_emit_with_name_impl").unwrap();
    assert_eq!((signpost.fixed, signpost.buffer), (6, Some((7, 8))));
    let kernel = shape("_os_log_internal").unwrap();
    assert_eq!((kernel.fixed, kernel.buffer), (4, None));
    for other in ["os_log_type_enabled", "_os_log_create", "os_log_implx", ""] {
        assert!(shape(other).is_none(), "{other}");
    }
}
