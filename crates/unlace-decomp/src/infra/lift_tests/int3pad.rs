use crate::int3pad::warning_text;

#[test]
fn warning_text_carries_the_run_and_no_earlier_digit() {
    // The P9 slug table reads the first integer AFTER the `int3pad:` tag as the
    // ` xN` suffix, so nothing between the tag and the count may be a digit.
    let long = warning_text(4);
    assert_eq!(
        crate::printc::warning_slug(&format!("WARNING: {long}")),
        "int3-pad x4"
    );
    let short = warning_text(1);
    assert_eq!(
        crate::printc::warning_slug(&format!("WARNING: {short}")),
        "int3-pad"
    );
    assert_eq!(
        crate::printc::warning_slug(&format!("WARNING: {}", warning_text(0))),
        "int3-pad"
    );
}
