use super::Omit;

#[test]
fn keys_accumulate_across_values_and_report_in_record_order() {
    let mut omit = Omit::default();
    omit.add("types").unwrap();
    omit.add(" variables , line_mappings").unwrap();
    assert_eq!(
        omit.withheld(),
        ["line_mappings", "variables", "types", "stack_objects"]
    );
    omit.add("aliases").unwrap();
    assert_eq!(
        omit.withheld(),
        [
            "aliases",
            "line_mappings",
            "variables",
            "types",
            "stack_objects"
        ]
    );
}

#[test]
fn unknown_and_empty_values_are_refused() {
    let err = Omit::default().add("variables,lines").unwrap_err();
    assert!(
        err.contains("\"lines\"") && err.contains("line_mappings"),
        "{err}"
    );
    assert!(
        err.contains("aliases, line_mappings, variables, types"),
        "{err}"
    );
    assert!(Omit::default().add(" , ").is_err());
}

#[test]
fn nothing_omitted_means_no_marker() {
    assert!(Omit::default().json().is_none());
    let mut omit = Omit::default();
    omit.add("line_mappings").unwrap();
    assert_eq!(omit.withheld(), ["line_mappings"]);
}
