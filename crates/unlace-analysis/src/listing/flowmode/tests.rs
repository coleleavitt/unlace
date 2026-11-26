use super::mode_runs;

#[test]
fn same_mode_neighbours_merge_and_a_mode_change_splits() {
    let decoded = [
        (0x00, 0x04, 0),
        (0x04, 0x08, 0),
        (0x40, 0x42, 1),
        (0x42, 0x44, 1),
        (0x80, 0x84, 0),
        (0x84, 0x88, 0),
    ];
    assert_eq!(
        mode_runs(decoded.into_iter()),
        vec![(0x00, 0x08, 0), (0x40, 0x44, 1), (0x80, 0x88, 0)]
    );
}

#[test]
fn a_gap_splits_a_run_even_in_one_mode() {
    let decoded = [(0x00, 0x04, 0), (0x08, 0x0c, 0), (0x0c, 0x0e, 1)];
    assert_eq!(
        mode_runs(decoded.into_iter()),
        vec![(0x00, 0x04, 0), (0x08, 0x0c, 0), (0x0c, 0x0e, 1)]
    );
}
