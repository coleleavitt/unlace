use super::*;

#[test]
fn a_chain_decompiles_callees_first_and_every_step_parks() {
    let edges = vec![vec![1], vec![2], vec![]];
    for cycles in [false, true] {
        assert_eq!(
            plan_from_components(&edges, &[false; 3], cycles),
            vec![(2, true), (1, true), (0, true)]
        );
    }
}

#[test]
fn a_function_that_calls_itself_parks_only_under_cycles() {
    let edges = vec![vec![1], vec![]];
    let recursive = [false, true];
    assert_eq!(
        plan_from_components(&edges, &recursive, false),
        vec![(1, false), (0, true)]
    );
    assert_eq!(
        plan_from_components(&edges, &recursive, true),
        vec![(1, true), (0, true)]
    );
}

#[test]
fn a_cycle_member_called_from_outside_decompiles_after_its_partner() {
    // 2 calls 0; 0 and 1 call each other.
    let edges = vec![vec![1], vec![0], vec![0]];
    assert_eq!(
        plan_from_components(&edges, &[false; 3], false),
        vec![(0, false), (1, false), (2, true)]
    );
    assert_eq!(
        plan_from_components(&edges, &[false; 3], true),
        vec![(1, true), (0, true), (2, true)]
    );
}

#[test]
fn every_member_of_a_larger_cycle_decompiles_once_before_its_callers() {
    // 3 calls 0; 0 -> 1 -> 2 -> 0, and 2 also calls 1.
    let edges = vec![vec![1], vec![2], vec![0, 1], vec![0]];
    assert_eq!(
        plan_from_components(&edges, &[false; 4], true),
        vec![(2, true), (1, true), (0, true), (3, true)]
    );
}

#[test]
fn the_cycle_order_starts_from_the_members_called_from_outside() {
    let edges = vec![vec![1], vec![0], vec![]];
    assert_eq!(
        cycle_order(&[0, 1], &edges, &[false, true, false]),
        vec![0, 1]
    );
    assert_eq!(
        cycle_order(&[0, 1], &edges, &[true, false, false]),
        vec![1, 0]
    );
    assert_eq!(
        cycle_order(&[0, 1], &edges, &[false, false, false]),
        vec![1, 0]
    );
}

#[test]
fn small_graphs_keep_recursive_components_and_callee_order() {
    for nodes in 0..=4 {
        let pairs: Vec<_> = (0..nodes)
            .flat_map(|from| {
                (0..nodes)
                    .filter(move |&to| from != to)
                    .map(move |to| (from, to))
            })
            .collect();
        for bits in 0usize..(1 << pairs.len()) {
            let mut edges = vec![Vec::new(); nodes];
            let mut reaches = vec![vec![false; nodes]; nodes];
            for node in 0..nodes {
                reaches[node][node] = true;
            }
            for (bit, &(from, to)) in pairs.iter().enumerate() {
                if bits & (1 << bit) != 0 {
                    edges[from].push(to);
                    reaches[from][to] = true;
                }
            }
            for via in 0..nodes {
                for from in 0..nodes {
                    for to in 0..nodes {
                        reaches[from][to] |= reaches[from][via] && reaches[via][to];
                    }
                }
            }
            for cycles in [false, true] {
                let plan = plan_from_components(&edges, &vec![false; nodes], cycles);
                assert_eq!(plan.len(), nodes);
                let mut position = vec![usize::MAX; nodes];
                for (at, &(node, parks)) in plan.iter().enumerate() {
                    assert!(node < nodes);
                    assert_eq!(position[node], usize::MAX, "duplicate node");
                    position[node] = at;
                    let recursive = (0..nodes)
                        .any(|other| other != node && reaches[node][other] && reaches[other][node]);
                    assert_eq!(parks, cycles || !recursive);
                }
                for from in 0..nodes {
                    for &to in &edges[from] {
                        if !reaches[to][from] {
                            assert!(position[to] < position[from], "callee follows caller");
                        }
                    }
                }
            }
        }
    }
}

#[test]
fn a_hundred_thousand_function_chain_does_not_recurse() {
    let count = 100_000;
    let edges: Vec<Vec<usize>> = (0..count)
        .map(|node| {
            if node + 1 < count {
                vec![node + 1]
            } else {
                Vec::new()
            }
        })
        .collect();
    let expected: Vec<_> = (0..count).rev().map(|node| (node, true)).collect();
    for cycles in [false, true] {
        assert_eq!(
            plan_from_components(&edges, &vec![false; count], cycles),
            expected
        );
    }
}
