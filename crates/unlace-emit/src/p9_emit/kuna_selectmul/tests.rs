use super::*;
use unlace_num::opcodes::OpCode::*;

#[test]
fn strict_and_non_strict_compares_are_complements_with_swapped_operands() {
    assert_eq!(
        complementary_compares(CPUI_INT_SLESS, CPUI_INT_SLESSEQUAL),
        Some(true)
    );
    assert_eq!(
        complementary_compares(CPUI_INT_LESSEQUAL, CPUI_INT_LESS),
        Some(true)
    );
    assert_eq!(
        complementary_compares(CPUI_INT_EQUAL, CPUI_INT_NOTEQUAL),
        Some(false)
    );
}

#[test]
fn mixed_signedness_and_same_compare_are_not_complements() {
    assert_eq!(
        complementary_compares(CPUI_INT_SLESS, CPUI_INT_LESSEQUAL),
        None
    );
    assert_eq!(complementary_compares(CPUI_INT_LESS, CPUI_INT_LESS), None);
    assert_eq!(
        complementary_compares(CPUI_FLOAT_LESS, CPUI_FLOAT_LESSEQUAL),
        None
    );
}

#[test]
fn strict_compare_reads_before_its_complement() {
    let rank = condition_rank;
    assert!(rank(Some(CPUI_INT_SLESS), false) > rank(Some(CPUI_INT_SLESS), true));
    assert!(rank(Some(CPUI_INT_EQUAL), true) > rank(Some(CPUI_INT_EQUAL), false));
    assert!(rank(Some(CPUI_INT_NOTEQUAL), false) > rank(Some(CPUI_INT_EQUAL), false));
    assert!(rank(None, false) > rank(None, true));
}
