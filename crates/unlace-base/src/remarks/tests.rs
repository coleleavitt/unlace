use super::*;

fn remark(pass: &str, kind: RemarkKind) -> OptimizationRemark {
    OptimizationRemark {
        pass: pass.into(),
        kind,
        site: "0x401000".into(),
        reason: "overlap".into(),
    }
}

#[test]
fn enabled_sink_keeps_remarks_in_order() {
    let mut sink = RemarkSink::enabled();
    sink.push(remark("sroa", RemarkKind::Missed));
    sink.push(remark("callerargs", RemarkKind::Passed));
    assert!(sink.is_enabled());
    assert_eq!(sink.remarks().len(), 2);
    assert_eq!(sink.remarks()[0].pass, "sroa");
    assert_eq!(sink.remarks()[1].kind, RemarkKind::Passed);
}

#[test]
fn default_sink_is_off_and_drops_pushes() {
    let mut sink = RemarkSink::default();
    sink.push(remark("sroa", RemarkKind::Missed));
    assert!(!sink.is_enabled());
    assert!(sink.remarks().is_empty());
}

#[test]
fn kind_prints_lowercase() {
    assert_eq!(RemarkKind::Passed.as_str(), "passed");
    assert_eq!(RemarkKind::Missed.as_str(), "missed");
    assert_eq!(RemarkKind::Analysis.as_str(), "analysis");
}
