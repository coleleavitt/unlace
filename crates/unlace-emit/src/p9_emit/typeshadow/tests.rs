use super::*;

#[test]
fn solved_from_bits_names_each_class() {
    assert_eq!(Solved::from_bits(0), Solved::None);
    assert_eq!(Solved::from_bits(SIGNED), Solved::Signed);
    assert_eq!(Solved::from_bits(UNSIGNED), Solved::Unsigned);
    assert_eq!(Solved::from_bits(SIGNED | UNSIGNED), Solved::Conflict);
}

#[test]
fn signed_compare_demands_signed_and_shift_only_its_operand() {
    assert_eq!(reader_demand(OpCode::CPUI_INT_SLESS, 0), Some(SIGNED));
    assert_eq!(reader_demand(OpCode::CPUI_INT_SRIGHT, 0), Some(SIGNED));
    assert_eq!(reader_demand(OpCode::CPUI_INT_SRIGHT, 1), None);
    assert_eq!(reader_demand(OpCode::CPUI_INT_LESS, 1), Some(UNSIGNED));
    assert_eq!(reader_demand(OpCode::CPUI_INT_ADD, 0), None);
}

#[test]
fn classify_matches_the_vote_and_names_each_gap() {
    assert_eq!(classify(Solved::None, Evidence::None), ShadowKind::Agree);
    assert_eq!(
        classify(Solved::Signed, Evidence::Signed),
        ShadowKind::Agree
    );
    assert_eq!(
        classify(Solved::Conflict, Evidence::Veto),
        ShadowKind::Agree
    );
    assert_eq!(
        classify(Solved::Signed, Evidence::Veto),
        ShadowKind::VoteVetoed
    );
    assert_eq!(
        classify(Solved::None, Evidence::Unsigned),
        ShadowKind::SolverMissed
    );
    assert_eq!(
        classify(Solved::Unsigned, Evidence::None),
        ShadowKind::VoteMissed
    );
    assert_eq!(
        classify(Solved::Signed, Evidence::Unsigned),
        ShadowKind::Flip
    );
    assert_eq!(
        classify(Solved::Conflict, Evidence::Signed),
        ShadowKind::Flip
    );
}
