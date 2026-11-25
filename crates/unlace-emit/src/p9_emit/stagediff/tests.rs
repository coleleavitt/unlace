use super::*;

#[test]
fn removed_and_added_lines_are_counted_by_trimmed_text() {
    let before = "int f(void)\n{\n    c = 1;\n    return c;\n}\n";
    let after = "int f(void)\n{\n    return 1;\n}\n";
    let deltas = stage_line_deltas(before, after);
    assert_eq!(
        deltas,
        vec![("c = 1;", 1), ("return 1;", -1), ("return c;", 1)]
    );
}

#[test]
fn blank_lines_and_unchanged_text_are_not_reported() {
    let before = "a;\n\n  b;\n";
    let after = "a;\nb;\n\n";
    assert!(stage_line_deltas(before, after).is_empty());
}

#[test]
fn repeated_lines_report_their_multiplicity() {
    let before = "x;\nx;\nx;\n";
    let after = "x;\n";
    assert_eq!(stage_line_deltas(before, after), vec![("x;", 2)]);
}
