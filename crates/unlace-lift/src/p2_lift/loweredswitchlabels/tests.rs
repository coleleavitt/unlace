use super::*;

#[test]
fn range_opcodes_carry_signedness() {
    assert_eq!(
        LoweredSwitchSignedness::from_range_opcode(OpCode::CPUI_INT_SLESS),
        Some(LoweredSwitchSignedness::Signed)
    );
    assert_eq!(
        LoweredSwitchSignedness::from_range_opcode(OpCode::CPUI_INT_LESSEQUAL),
        Some(LoweredSwitchSignedness::Unsigned)
    );
    assert_eq!(
        LoweredSwitchSignedness::from_range_opcode(OpCode::CPUI_INT_EQUAL),
        None
    );
}

#[test]
fn mixed_or_ambiguous_evidence_is_rejected() {
    let signed = reconcile_range_signedness(None, Some(LoweredSwitchSignedness::Signed));
    assert_eq!(signed, Some(LoweredSwitchSignedness::Signed));
    assert_eq!(
        reconcile_range_signedness(signed, Some(LoweredSwitchSignedness::Unsigned)),
        None
    );
    assert_eq!(reconcile_range_signedness(signed, None), None);
}
