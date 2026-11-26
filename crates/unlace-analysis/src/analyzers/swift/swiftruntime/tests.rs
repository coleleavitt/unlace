use super::*;

#[test]
fn table_names_are_unique_and_runtime_spelled() {
    let mut names: Vec<&str> = RUNTIME.iter().map(|(n, _)| *n).collect();
    names.sort_unstable();
    let total = names.len();
    names.dedup();
    assert_eq!(names.len(), total, "a runtime entry point is listed twice");
    assert!(
        names
            .iter()
            .all(|n| n.starts_with("swift_") || n.starts_with("_swift_stdlib_"))
    );
}

#[test]
fn concurrency_table_is_sorted_and_apart_from_the_runtime_table() {
    let table = super::super::swiftconcurrency::CONCURRENCY;
    assert!(table.windows(2).all(|w| w[0].name < w[1].name));
    assert!(
        table
            .iter()
            .all(|e| RUNTIME.iter().all(|(n, _)| *n != e.name))
    );
    assert!(table.iter().all(|e| {
        e.context
            .is_none_or(|i| e.params.get(i).is_some_and(|p| p.0 == Ctx))
    }));
    let switch = table
        .iter()
        .find(|e| e.name == "swift_task_switch")
        .unwrap();
    assert_eq!(switch.context, Some(0));
    assert_eq!(switch.params.len(), 3);
}

#[test]
fn custom_rr_names_name_their_register() {
    assert_eq!(custom_rr_register("swift_retain_x19"), Some((true, 19)));
    assert_eq!(custom_rr_register("swift_release_x8"), Some((false, 8)));
    assert_eq!(
        custom_rr_register("swift_release_x0"),
        None,
        "x0 is the plain entry point"
    );
    assert_eq!(custom_rr_register("swift_retain_x16"), None, "call glue");
    assert_eq!(custom_rr_register("swift_retain_x18"), None, "reserved");
    assert_eq!(
        custom_rr_register("swift_retain_x29"),
        None,
        "the frame pointer"
    );
    assert_eq!(custom_rr_register("swift_retain"), None);
    assert_eq!(custom_rr_register("swift_retain_xa"), None);
    assert_eq!(
        custom_rr_register("swift_bridgeObjectRelease_x20"),
        Some((false, 20))
    );
    assert_eq!(
        custom_rr_register("swift_bridgeObjectRetain_x1"),
        Some((true, 1))
    );
    assert_eq!(
        custom_rr_register("swift_bridgeObjectRetain_x18"),
        None,
        "reserved"
    );
    assert_eq!(custom_rr_register("swift_retain_n_x1"), None);
    assert_eq!(CUSTOM_RR_REGISTERS.len(), 25);
}
