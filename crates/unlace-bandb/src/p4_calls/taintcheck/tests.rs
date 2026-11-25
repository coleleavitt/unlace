use super::*;

fn call<'a>(callee: &'a str, out: Option<u32>, ins: &'a [Option<u32>]) -> Step<'a, u32> {
    Step {
        callee: Some(callee),
        out,
        ins,
    }
}

fn op<'a>(out: Option<u32>, ins: &'a [Option<u32>]) -> Step<'a, u32> {
    Step {
        callee: None,
        out,
        ins,
    }
}

#[test]
fn a_recv_result_reaches_system() {
    let steps = [
        call("recv", Some(10), &[None, Some(1)]),
        call("system", None, &[None, Some(10)]),
    ];
    assert_eq!(
        reach(&steps),
        vec![Reach {
            step: 1,
            source: "recv",
            sink: "system"
        }]
    );
}

#[test]
fn taint_flows_through_arithmetic() {
    let steps = [
        call("getenv", Some(10), &[None]),
        op(Some(11), &[Some(10), Some(2)]),
        call("popen", None, &[None, Some(11)]),
    ];
    let found = reach(&steps);
    assert_eq!(found.len(), 1);
    assert_eq!(found[0].source, "getenv");
    assert_eq!(found[0].sink, "popen");
}

#[test]
fn a_constant_argument_is_not_reported() {
    let steps = [
        call("recv", Some(10), &[None, Some(1)]),
        call("system", None, &[None, Some(3)]),
    ];
    assert!(reach(&steps).is_empty());
}

#[test]
fn the_call_target_slot_is_not_an_argument() {
    let steps = [
        call("getenv", Some(5), &[None]),
        call("execl", None, &[Some(5), None]),
    ];
    assert!(reach(&steps).is_empty());
}

#[test]
fn a_sink_that_is_not_listed_is_ignored() {
    let steps = [
        call("recv", Some(10), &[None, Some(1)]),
        call("strlen", None, &[None, Some(10)]),
    ];
    assert!(reach(&steps).is_empty());
}
