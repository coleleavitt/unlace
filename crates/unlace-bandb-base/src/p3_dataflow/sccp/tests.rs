use super::*;

fn add_one(a: &[u64]) -> u64 {
    a[0].wrapping_add(1)
}

fn value(block: usize, def: SccpDef) -> SccpValue {
    SccpValue { block, def }
}

/// Entry branches on constant `cond` to block 1 or 2; both join at block 3,
/// whose phi takes block 1's value (1) or block 2's value (2).
fn diamond(cond: u64) -> SccpGraph {
    SccpGraph {
        values: vec![
            value(0, SccpDef::Const(cond)),
            value(1, SccpDef::Const(1)),
            value(2, SccpDef::Const(2)),
            value(3, SccpDef::Phi(vec![(1, 1), (2, 2)])),
        ],
        terms: vec![
            SccpTerm::Branch {
                cond: 0,
                taken: 1,
                fallthru: 2,
            },
            SccpTerm::Goto(3),
            SccpTerm::Goto(3),
            SccpTerm::Exit,
        ],
    }
}

#[test]
fn constants_fold_through_an_op() {
    let g = SccpGraph {
        values: vec![
            value(0, SccpDef::Const(3)),
            value(
                0,
                SccpDef::Op {
                    inputs: vec![0],
                    eval: add_one,
                },
            ),
        ],
        terms: vec![SccpTerm::Exit],
    };
    let s = solve_sccp(&g, 0).unwrap();
    assert_eq!(s.values, vec![SccpLat::Const(3), SccpLat::Const(4)]);
    assert!(s.dead_edges(&g).is_empty());
}

#[test]
fn a_constant_branch_makes_the_phi_constant_and_kills_the_other_arm() {
    let g = diamond(0);
    let s = solve_sccp(&g, 0).unwrap();
    assert_eq!(s.reachable, vec![true, false, true, true]);
    assert_eq!(s.values[3], SccpLat::Const(2));
    assert_eq!(s.dead_edges(&g), vec![(0, 1)]);
}

#[test]
fn a_nonzero_constant_takes_the_taken_arm() {
    let g = diamond(7);
    let s = solve_sccp(&g, 0).unwrap();
    assert_eq!(s.reachable, vec![true, true, false, true]);
    assert_eq!(s.values[3], SccpLat::Const(1));
    assert_eq!(s.dead_edges(&g), vec![(0, 2)]);
}

#[test]
fn an_unknown_condition_keeps_both_arms_and_the_phi_overdefined() {
    let mut g = diamond(0);
    g.values[0] = value(0, SccpDef::External);
    let s = solve_sccp(&g, 0).unwrap();
    assert_eq!(s.reachable, vec![true, true, true, true]);
    assert_eq!(s.values[3], SccpLat::Bottom);
    assert!(s.dead_edges(&g).is_empty());
}

#[test]
fn a_block_nothing_reaches_stays_top_and_its_values_are_not_evaluated() {
    let g = SccpGraph {
        values: vec![value(0, SccpDef::Const(0)), value(1, SccpDef::Const(9))],
        terms: vec![
            SccpTerm::Branch {
                cond: 0,
                taken: 1,
                fallthru: 2,
            },
            SccpTerm::Exit,
            SccpTerm::Exit,
        ],
    };
    let s = solve_sccp(&g, 0).unwrap();
    assert_eq!(s.values[1], SccpLat::Top);
    assert!(!s.reachable[1]);
}

#[test]
fn a_loop_on_a_constant_never_exits() {
    // block 0: x = 5; goto 1. block 1: y = phi(0:x, 1:y); branch on y to 1 or 2.
    // The back edge carries y itself, so y stays 5, the branch always takes the
    // back edge, and the exit (block 2) is never reached.
    let g = SccpGraph {
        values: vec![
            value(0, SccpDef::Const(5)),
            value(1, SccpDef::Phi(vec![(0, 0), (1, 2)])),
            value(1, SccpDef::Copy(1)),
        ],
        terms: vec![
            SccpTerm::Goto(1),
            SccpTerm::Branch {
                cond: 1,
                taken: 1,
                fallthru: 2,
            },
            SccpTerm::Exit,
        ],
    };
    let s = solve_sccp(&g, 0).unwrap();
    assert_eq!(s.values[1], SccpLat::Const(5));
    assert_eq!(s.reachable, vec![true, true, false]);
    assert_eq!(s.dead_edges(&g), vec![(1, 2)]);
}

#[test]
fn the_work_budget_stops_the_solve() {
    let g = diamond(0);
    assert_eq!(
        solve_sccp(&g, 1),
        Err(SccpError::WorkBudgetExceeded { limit: 1 })
    );
}

#[test]
fn a_dangling_index_is_rejected_not_panicked_on() {
    let mut g = diamond(0);
    g.terms[1] = SccpTerm::Goto(9);
    assert_eq!(solve_sccp(&g, 0), Err(SccpError::Malformed));
    assert_eq!(
        solve_sccp(&SccpGraph::default(), 0),
        Err(SccpError::Malformed)
    );
}

#[test]
fn meet_is_the_greatest_lower_bound() {
    assert_eq!(SccpLat::Top.meet(SccpLat::Const(4)), SccpLat::Const(4));
    assert_eq!(SccpLat::Const(4).meet(SccpLat::Const(4)), SccpLat::Const(4));
    assert_eq!(SccpLat::Const(4).meet(SccpLat::Const(5)), SccpLat::Bottom);
    assert_eq!(SccpLat::Bottom.meet(SccpLat::Top), SccpLat::Bottom);
}
