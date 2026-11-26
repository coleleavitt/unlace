use super::*;

#[test]
fn complete_register_work_is_required() {
    let body = |writes, stores, complete, count| {
        CalleeReturnWrites::from_parts_sized(writes, stores, complete, count)
    };
    assert!(register_only_body(
        &body(vec![(1, 0, 4), (1, 16, 4)], vec![], true, 2),
        1,
        (16, 4)
    ));
    assert!(!register_only_body(
        &body(vec![(1, 16, 4)], vec![], true, 1),
        1,
        (16, 4)
    ));
    assert!(!register_only_body(
        &body(vec![(1, 16, 4)], vec![], true, 2),
        1,
        (16, 4)
    ));
    assert!(!register_only_body(
        &body(vec![(1, 0, 4)], vec![], false, 2),
        1,
        (16, 4)
    ));
    assert!(!register_only_body(
        &body(vec![(1, 0, 4)], vec![2], true, 2),
        1,
        (16, 4)
    ));
    assert!(!register_only_body(
        &body(vec![(2, 0x1000, 4)], vec![], true, 2),
        1,
        (16, 4)
    ));
    assert!(!register_only_body(
        &body(vec![(1, 0, 4), (1, 16, 4)], vec![], true, 2).reading_memory(),
        1,
        (16, 4)
    ));
    let return_only =
        body(vec![(1, 32, 4), (1, 16, 4)], vec![], true, 2).returning_through(1, 32, 4);
    assert!(!register_only_body(&return_only, 1, (16, 4)));
}
