use super::*;

/// Budget used by the unit tests (the production default is set by the caller).
const TEST_LIMIT: usize = 64;

fn lbl_t(id: u32) -> EdgeLabel {
    EdgeLabel::True(id)
}
fn lbl_f(id: u32) -> EdgeLabel {
    EdgeLabel::False(id)
}

#[test]
fn header_condition_is_true() {
    let region = Region {
        header: 0,
        edges: vec![(0, 1, EdgeLabel::Always)],
    };
    let rc = compute_reaching_conditions(&region, TEST_LIMIT);
    assert_eq!(rc.conditions[&0], Cond::True);
    assert_eq!(rc.conditions[&1], Cond::True);
}

#[test]
fn diamond_merges_to_or_of_both_arms() {
    // 0 -t-> 1 -> 3 ; 0 -f-> 2 -> 3. cr(3) = p0 OR !p0, kept as an Or of both arms.
    let region = Region {
        header: 0,
        edges: vec![
            (0, 1, lbl_t(0)),
            (0, 2, lbl_f(0)),
            (1, 3, EdgeLabel::Always),
            (2, 3, EdgeLabel::Always),
        ],
    };
    let rc = compute_reaching_conditions(&region, TEST_LIMIT);
    assert!(!rc.limited);
    assert_eq!(rc.conditions[&1], Cond::Pred(0));
    assert_eq!(rc.conditions[&2], Cond::NotPred(0));
    match &rc.conditions[&3] {
        Cond::Or(a, b) => {
            let set: BTreeSet<&Cond> = [a.as_ref(), b.as_ref()].into_iter().collect();
            assert!(set.contains(&Cond::Pred(0)));
            assert!(set.contains(&Cond::NotPred(0)));
        }
        other => panic!("expected Or, got {other:?}"),
    }
}

#[test]
fn condition_budget_marks_limited_before_or_tree_growth() {
    let region = Region {
        header: 0,
        edges: vec![
            (0, 1, lbl_t(0)),
            (0, 2, lbl_f(0)),
            (1, 3, EdgeLabel::Always),
            (2, 3, EdgeLabel::Always),
        ],
    };
    let rc = compute_reaching_conditions(&region, 2);
    assert!(rc.limited);
    assert!(
        !rc.conditions.contains_key(&3),
        "limited node should not be materialized"
    );
}

#[test]
fn nested_guard_conjoins() {
    // 0 -t(0)-> 1 -t(1)-> 2. cr(2) = p0 AND p1.
    let region = Region {
        header: 0,
        edges: vec![(0, 1, lbl_t(0)), (1, 2, lbl_t(1))],
    };
    let rc = compute_reaching_conditions(&region, TEST_LIMIT);
    assert_eq!(
        rc.conditions[&2],
        Cond::And(Box::new(Cond::Pred(0)), Box::new(Cond::Pred(1)))
    );
}

#[test]
fn back_edge_detected_and_excluded() {
    // 0 -> 1 -> 2 -> 1. The back-edge (2, 1) is reported and not folded into cr(1).
    let region = Region {
        header: 0,
        edges: vec![
            (0, 1, EdgeLabel::Always),
            (1, 2, EdgeLabel::Always),
            (2, 1, EdgeLabel::Always),
        ],
    };
    let rc = compute_reaching_conditions(&region, TEST_LIMIT);
    assert!(rc.back_edges.contains(&(2, 1)));
    assert_eq!(rc.conditions[&1], Cond::True);
    assert_eq!(rc.conditions[&2], Cond::True);
}

#[test]
fn notcaseeq_variant_constructs_and_compares() {
    let a = Cond::NotCaseEq(Box::new(Cond::CaseEq(7, 3)));
    let b = Cond::NotCaseEq(Box::new(Cond::CaseEq(7, 3)));
    assert_eq!(a, b);
    assert_ne!(a, Cond::CaseEq(7, 3));
    assert_eq!(a.clone().and(Cond::True), a);
    assert_eq!(Cond::False.or(b.clone()), b);
}

#[test]
fn and_or_identities() {
    assert_eq!(Cond::True.and(Cond::Pred(0)), Cond::Pred(0));
    assert_eq!(Cond::False.and(Cond::Pred(0)), Cond::False);
    assert_eq!(Cond::True.or(Cond::Pred(0)), Cond::True);
    assert_eq!(Cond::False.or(Cond::Pred(0)), Cond::Pred(0));
    assert_eq!(Cond::Pred(0).and(Cond::Pred(0)), Cond::Pred(0));
}

#[test]
fn irreducible_two_entry_loop_classifies_back_edge() {
    // 0 -t-> 1 -> 2 ; 0 -f-> 2 -> 1. Exactly one of (1, 2) and (2, 1) is a back-edge.
    let region = Region {
        header: 0,
        edges: vec![
            (0, 1, lbl_t(0)),
            (0, 2, lbl_f(0)),
            (1, 2, EdgeLabel::Always),
            (2, 1, EdgeLabel::Always),
        ],
    };
    let rc = compute_reaching_conditions(&region, TEST_LIMIT);
    assert_eq!(rc.back_edges.len(), 1);
    assert!(rc.conditions.contains_key(&1));
    assert!(rc.conditions.contains_key(&2));
}
