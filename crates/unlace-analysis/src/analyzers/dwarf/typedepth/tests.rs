use super::*;

/// The cycle guard admits an acyclic chain of any realistic length and
/// refuses the third entry of a repeated offset — upstream's `case 3`.
#[test]
fn cycle_guard_admits_chains_and_refuses_cycles() {
    let mut w = TypeWalk::with_gate(true);
    // 32 distinct offsets: every one admitted (the budget would stop at 3).
    for off in 0..32usize {
        assert!(w.enter(off), "distinct offset {off} refused");
    }
    for off in (0..32usize).rev() {
        w.leave(off);
    }
    // The same offset: two entries admitted, the third refused.
    assert!(w.enter(7));
    assert!(w.enter(7));
    assert!(!w.enter(7), "third entry of the same DIE must be refused");
    w.leave(7);
    w.leave(7);
    // ...and the refusal is path-local: after unwinding it is admissible again.
    assert!(w.enter(7));
    w.leave(7);
}

/// The nesting backstop bounds a long acyclic chain (the forged-DWARF case
/// the cycle counter alone cannot bound below the DIE count).
#[test]
fn cycle_guard_bounds_nesting() {
    let mut w = TypeWalk::with_gate(true);
    for off in 0..MAX_NESTING as usize {
        assert!(w.enter(off));
    }
    assert!(
        !w.enter(9999),
        "nesting bound must refuse beyond MAX_NESTING"
    );
}

/// (unlace `dwarfstructs`) The aggregate-in-progress claim is exact and
/// path-local: the same name cannot be claimed twice, and releasing it makes
/// it claimable again (a struct reached a second time on a SIBLING branch
/// must still be populatable).
#[test]
fn aggregate_claim_is_path_local() {
    let mut w = TypeWalk::with_gate(true);
    assert!(w.begin_aggregate("node"));
    assert!(
        !w.begin_aggregate("node"),
        "a re-entrant claim must be refused"
    );
    assert!(w.begin_aggregate("other"), "a different name is unaffected");
    w.end_aggregate("node");
    assert!(
        w.begin_aggregate("node"),
        "released names are claimable again"
    );
}

/// The gate-off arm is the pre-fix budget: three hops, whatever they are.
#[test]
fn depth_guard_reproduces_the_budget() {
    let mut w = TypeWalk::with_gate(false);
    assert!(w.enter(1));
    assert!(w.enter(2));
    assert!(w.enter(3));
    assert!(!w.enter(4), "the pre-fix budget is three hops");
    w.leave(3);
    assert!(w.enter(4), "unwinding one hop frees the budget again");
    assert!(
        !w.collapse_qualifiers(),
        "the off arm keeps the C++-only collapse"
    );
}
