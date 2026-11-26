use super::*;

#[test]
fn packages_survive_import_paths_receivers_and_generic_arguments() {
    for symbol in [
        "example.org/lib/p.Scale",
        "example.org/lib/p.(*Point).Scale",
        "example.org/lib/p.Scale[other.org/q.Point]",
        "example.org/lib/p.Scale.func1",
    ] {
        assert_eq!(function_package(symbol), Some("example.org/lib/p"));
    }
    for symbol in ["Scale", "type:.eq.main.point", ".Scale", "p/[T].Scale"] {
        assert_eq!(function_package(symbol), None);
    }
}

#[test]
fn only_the_exact_current_package_loses_its_qualifier() {
    assert_eq!(local_type_name(Some("main"), "main.point"), "point");
    assert_eq!(local_type_name(Some("main"), "main.点"), "点");
    assert_eq!(
        local_type_name(Some("example.org/p"), "example.org/p.Point"),
        "Point"
    );
    for name in [
        "other.point",
        "mainland.point",
        "main.point.Nested",
        "main.Box[int]",
        "main.",
    ] {
        assert_eq!(local_type_name(Some("main"), name), name);
    }
    assert_eq!(local_type_name(None, "main.point"), "main.point");
}
