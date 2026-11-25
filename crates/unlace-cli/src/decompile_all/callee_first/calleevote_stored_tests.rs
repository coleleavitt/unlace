use super::*;

#[test]
fn budget_admission_ties_use_space_then_address() {
    let queue = vec![(40, (2, 0x1000)), (40, (1, 0x3000)), (40, (1, 0x2000))];
    for queue in [queue.clone(), queue.into_iter().rev().collect()] {
        let mut budget = 40;
        let mut spent = 0;
        let (admitted, declined) = admit_within_budget(queue, &mut budget, &mut spent);
        assert_eq!(admitted.len(), 1);
        assert!(admitted.contains(&(1, 0x2000)));
        assert_eq!(declined, [(40, (1, 0x3000)), (40, (2, 0x1000))]);
        assert_eq!((budget, spent), (0, 40));
    }
}

/// (unlace `calleevote`) What a redo is charged: the lines it reprints, and a
/// function that failed has no body to measure.
#[test]
fn a_redo_is_charged_the_lines_it_reprints() {
    let getter = "long get_cap(void *a0)\n{\n  return *(long *)((long)a0 + 0x18);\n}\n";
    assert_eq!(redo_charge(Some(getter)), 4);
    let long: String = (0..=CALLEE_VOTE_MAX_LINES)
        .map(|i| format!("  v{i} = v{i} + 1;\n"))
        .collect();
    assert_eq!(redo_charge(Some(&long)), CALLEE_VOTE_MAX_LINES + 1);
    assert_eq!(redo_charge(None), 0);
}

/// (unlace `calleevote`) The budget is a share of what the binary printed:
/// a long body is bought where the run has room for it and refused where it
/// is not, while a short one is redone either way.
#[test]
fn the_budget_is_a_share_of_what_the_first_pass_printed() {
    /// One round through the real admission, over a binary that printed
    /// `printed` lines: the charges admitted and the charges declined (both
    /// sorted), what is left of the budget, and what was spent.
    fn spend(printed: usize, charges: &[usize]) -> (Vec<usize>, Vec<usize>, usize, usize) {
        let queue: Vec<(usize, (i32, u64))> = charges
            .iter()
            .enumerate()
            .map(|(i, &c)| (c, (1i32, 0x1000 + i as u64)))
            .collect();
        let by_key: std::collections::HashMap<(i32, u64), usize> =
            queue.iter().map(|&(c, k)| (k, c)).collect();
        let mut budget = printed * CALLEE_VOTE_BUDGET_PCT / 100;
        let mut spent = 0usize;
        let (admitted, declined) = admit_within_budget(queue, &mut budget, &mut spent);
        let mut taken: Vec<usize> = admitted.iter().map(|k| by_key[k]).collect();
        taken.sort_unstable();
        (
            taken,
            declined.iter().map(|&(c, _)| c).collect(),
            budget,
            spent,
        )
    }
    // A 20,000-line binary buys a 90-line and a 300-line body; a 2,000-line
    // one buys only the 90; a 1,000-line one buys neither.
    assert_eq!(spend(20_000, &[300, 90]).0, vec![90, 300]);
    assert_eq!(spend(2_000, &[300, 90]), (vec![90], vec![300], 10, 90));
    assert_eq!(spend(1_000, &[300, 90]), (vec![], vec![90, 300], 50, 0));
    // The short bodies the vote exists for are redone whatever is left, and
    // what they spend is what leaves no room for a long one. Once the budget
    // is gone it stays at zero rather than wrapping.
    assert_eq!(spend(400, &[30, 30, 90]), (vec![30, 30], vec![90], 0, 60));
    assert_eq!(spend(40, &[30, 30]), (vec![30, 30], vec![], 0, 60));
    // Shortest first is by charge, not by the order the plan lists them:
    // the 40-line body is bought and the 60-line one declined either way.
    let budgeted = spend(1_000, &[60, 40]);
    assert_eq!(budgeted, (vec![40], vec![60], 10, 40));
    assert_eq!(spend(1_000, &[40, 60]), budgeted);
}

/// (unlace `structsynth`) The convergence sweep redoes what its share of the
/// first pass covers, shortest first, and declines the long bodies past it.
#[test]
fn the_struct_sweep_declines_long_bodies_past_its_share() {
    let mut budget = (40_000 * STRUCT_SWEEP_BUDGET_PCT / 100).max(STRUCT_SWEEP_MIN_LINES);
    let queue = vec![
        (1_500, (1, 0x4000)),
        (12, (1, 0x1000)),
        (1_500, (1, 0x3000)),
        (300, (1, 0x2000)),
    ];
    let (admitted, declined) = admit_within_budget(queue, &mut budget, &mut 0);
    let mut admitted: Vec<u64> = admitted.into_iter().map(|k| k.1).collect();
    admitted.sort_unstable();
    assert_eq!(admitted, [0x1000, 0x2000, 0x3000]);
    assert_eq!(declined, [(1_500, (1, 0x4000))]);
}

/// (unlace `calleevote`) The budget is one pass-wide allowance: what an early
/// round spends a later one no longer has.
#[test]
fn the_budget_carries_across_rounds() {
    let mut budget = 100usize;
    let mut spent = 0usize;
    let first = admit_within_budget(vec![(90, (1, 0x2000))], &mut budget, &mut spent);
    assert_eq!(
        (first.0.len(), first.1.len(), budget, spent),
        (1, 0, 10, 90)
    );
    let second = admit_within_budget(vec![(90, (1, 0x3000))], &mut budget, &mut spent);
    assert_eq!(
        (second.0.len(), second.1.len(), budget, spent),
        (0, 1, 10, 90)
    );
}
