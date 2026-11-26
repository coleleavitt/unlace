use super::*;
#[test]
fn loops_require_an_empty_entry_path() {
    use Effect::*;
    let graph = vec![vec![], vec![0, 1], vec![1]];
    assert_eq!(
        states(&graph, &[Empty, Preserve, Preserve]).1,
        vec![false, true, true]
    );
    assert_eq!(
        states(&graph, &[Preserve, Preserve, Preserve]).1,
        vec![false, false, false]
    );
    assert_eq!(
        states(&graph, &[Empty, Unknown, Preserve]).1,
        vec![false, false, false]
    );
}
#[test]
fn joins_require_all_reachable_predecessors() {
    use Effect::*;
    let graph = vec![vec![], vec![0], vec![0], vec![1, 2, 4], vec![4]];
    let (reachable, input) = states(&graph, &[Preserve, Empty, Empty, Preserve, Unknown]);
    assert_eq!(reachable, vec![true, true, true, true, false]);
    assert!(input[3]);
    assert!(!states(&graph, &[Preserve, Empty, Unknown, Preserve, Unknown]).1[3]);
}
