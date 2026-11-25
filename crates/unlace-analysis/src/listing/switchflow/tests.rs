use super::*;

/// Agreeing predecessors keep the value, a disagreeing one loses it, and
/// one that says nothing (undecoded, or the question itself) is skipped.
#[test]
fn the_meet_keeps_agreement_and_skips_silence() {
    let a = Reached::Known(Val::Const(0x1000));
    let b = Reached::Known(Val::Const(0x2000));
    assert_eq!(a.meet(a), a);
    assert_eq!(a.meet(Reached::Nothing), a);
    assert_eq!(Reached::Nothing.meet(Reached::Nothing), Reached::Nothing);
    assert_eq!(a.meet(b), Reached::Unknown);
    assert_eq!(Reached::Unknown.meet(Reached::Nothing), Reached::Unknown);
}

#[test]
fn edges_answer_the_predecessors_of_one_address() {
    let edges = Edges::new(vec![(0x30, 0x10), (0x20, 0x10), (0x30, 0x20), (0x30, 0x20)]);
    assert_eq!(edges.preds(0x30).collect::<Vec<_>>(), [0x10, 0x20]);
    assert_eq!(edges.preds(0x20).collect::<Vec<_>>(), [0x10]);
    assert_eq!(edges.preds(0x10).count(), 0);
}
