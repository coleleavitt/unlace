use super::*;

#[test]
fn parse_off_is_empty() {
    assert!(OutlineSpec::parse("off").unwrap().is_empty());
    assert!(OutlineSpec::parse("").unwrap().is_empty());
}

#[test]
fn parse_one_run() {
    let s = OutlineSpec::parse("0x401000:0x401008-0x40101f").unwrap();
    assert_eq!(
        s.runs,
        vec![OutlineRun {
            fn_entry: 0x401000,
            head: 0x401008,
            exit: 0x40101f
        }]
    );
    assert_eq!(s.for_function(0x401000).unwrap().head, 0x401008);
    assert!(s.for_function(0x402000).is_none());
}

#[test]
fn parse_several_runs() {
    let s = OutlineSpec::parse("0x1000:0x1008-0x1020;0x2000:0x2008-0x2040").unwrap();
    assert_eq!(s.runs.len(), 2);
    assert_eq!(s.runs[1].exit, 0x2040);
}

#[test]
fn whitespace_is_rejected_because_the_console_drops_it() {
    // IfcOption reads only p1 and silently discards p2/p3, so a value with a
    // space would mean something different through the console than through
    // the in-process path. Reject it in one place instead.
    assert!(OutlineSpec::parse("0x1000:0x1008 - 0x1020").is_err());
}

#[test]
fn malformed_values_are_errors_not_silent_no_ops() {
    assert!(OutlineSpec::parse("0x1000").is_err());
    assert!(OutlineSpec::parse("0x1000:0x1008").is_err());
    assert!(OutlineSpec::parse("zz:0x1-0x2").is_err());
}
