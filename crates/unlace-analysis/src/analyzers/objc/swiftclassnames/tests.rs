use super::*;

#[test]
fn swift_runtime_class_names_demangle_for_labels() {
    assert_eq!(display_class_name("Greeter"), "Greeter");
    assert_eq!(
        display_class_name("_TtC6Toyota24AddMileageViewController"),
        "Toyota.AddMileageViewController"
    );
    assert_eq!(
        display_class_name("_TtCC6Toyota5Outer5Inner"),
        "Toyota.Outer.Inner"
    );
    // Outside the demangler's coverage the runtime spelling stays.
    assert_eq!(display_class_name("_TtC1"), "_TtC1");
}
