use super::*;

#[test]
fn element_id() {
    assert_eq!(ELEM_CONDSTMTS.get_id(), 4178);
    assert_eq!(ELEM_CONDSTMTS.get_name(), "condstmts");
}

#[test]
fn parses_off_and_counts() {
    assert_eq!(OptionCondStmts.apply("off").unwrap().0, -1);
    assert_eq!(OptionCondStmts.apply("0").unwrap().0, 0);
    assert_eq!(OptionCondStmts.apply("2").unwrap().0, 2);
    assert_eq!(OptionCondStmts.apply(" 7 ").unwrap().0, 7);
    for bad in ["", "on", "-1", "2.5", "1001"] {
        assert!(
            OptionCondStmts.apply(bad).is_err(),
            "{bad:?} must be refused"
        );
    }
}

#[test]
fn condfold_budget_is_bounded_by_the_cap() {
    assert_eq!(condfold_budget(0, 2), 0);
    assert_eq!(condfold_budget(5, -1), 5);
    assert_eq!(condfold_budget(5, 2), 3);
    assert_eq!(condfold_budget(9, 0), 1);
    assert_eq!(condfold_budget(5, 10), 5);
}
