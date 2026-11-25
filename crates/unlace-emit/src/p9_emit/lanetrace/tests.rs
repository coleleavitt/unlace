use super::*;
use slotmap::KeyData;

fn vn(n: u64) -> VarnodeId {
    VarnodeId::from(KeyData::from_ffi(n))
}

/// A trace's footprint is its root and what it reached.
fn read(root: VarnodeId, reached: &[VarnodeId]) -> FxHashSet<VarnodeId> {
    std::iter::once(root)
        .chain(reached.iter().copied())
        .collect()
}

fn fail(failed: &mut FailedTraces, root: u64, reached: &[u64]) {
    let start = failed.start();
    failed.reach(reached.iter().map(|&n| vn(n)));
    failed.fail(vn(root), start);
}

fn split(failed: &mut FailedTraces, root: u64, reached: &[u64]) {
    let start = failed.start();
    failed.reach(reached.iter().map(|&n| vn(n)));
    failed.split(vn(root), start, read);
}

#[test]
fn a_failure_holds_until_a_split_touches_what_it_read() {
    let mut failed = FailedTraces::default();
    fail(&mut failed, 1, &[2, 3]);
    fail(&mut failed, 4, &[5]);
    assert!(failed.holds(vn(1)) && failed.holds(vn(4)));
    split(&mut failed, 6, &[7]);
    assert!(failed.holds(vn(1)) && failed.holds(vn(4)));
    split(&mut failed, 7, &[3]);
    assert!(!failed.holds(vn(1)));
    assert!(failed.holds(vn(4)));
}

#[test]
fn a_retraced_failure_is_held_again() {
    let mut failed = FailedTraces::default();
    fail(&mut failed, 1, &[2]);
    split(&mut failed, 2, &[]);
    assert!(!failed.holds(vn(1)));
    fail(&mut failed, 1, &[8]);
    split(&mut failed, 2, &[]);
    assert!(failed.holds(vn(1)));
    split(&mut failed, 8, &[]);
    assert!(!failed.holds(vn(1)));
}

#[test]
fn a_footprint_is_built_only_when_a_split_follows() {
    let mut failed = FailedTraces::default();
    let mut built = 0;
    fail(&mut failed, 1, &[2]);
    fail(&mut failed, 3, &[]);
    let start = failed.start();
    failed.split(vn(9), start, |root, reached| {
        built += 1;
        read(root, reached)
    });
    assert_eq!(built, 3);
    let start = failed.start();
    failed.split(vn(9), start, |root, reached| {
        built += 1;
        read(root, reached)
    });
    assert_eq!(built, 4);
    assert!(failed.holds(vn(1)) && failed.holds(vn(3)));
}

#[test]
fn a_split_with_no_failure_held_builds_nothing() {
    let mut failed = FailedTraces::default();
    let start = failed.start();
    failed.reach([vn(1), vn(2)]);
    failed.split(vn(3), start, |_, _| panic!("no footprint is needed"));
    assert_eq!(failed.start(), 0);
}
