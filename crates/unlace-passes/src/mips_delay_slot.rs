//! MIPS branch delay-slot fold.
//!
//! MIPS branch instructions execute the *next* instruction (the delay slot)
//! before the branch takes effect. Source semantics treat the delay slot as
//! happening "before" the branch in program order.
//!
//! This module recognizes branch+delay-slot pairs in lifted IR and reorders
//! them so the delay slot's IR comes before the branch's IR.

/// MIPS opcodes that have a delay slot.
pub fn is_mips_delay_slot_branch(mnemonic: &str) -> bool {
    let mn = mnemonic.to_lowercase();
    matches!(
        mn.as_str(),
        "j" | "jal"
            | "jr"
            | "jalr"
            | "beq"
            | "bne"
            | "bgtz"
            | "blez"
            | "bgez"
            | "bltz"
            | "bgezal"
            | "bltzal"
            | "beql"
            | "bnel"
            | "bgtzl"
            | "blezl"
            | "bgezl"
            | "bltzl"
            | "bc"
            | "balc"
    )
}

/// MIPS-likely branches that nullify the delay slot if not taken.
pub fn is_likely_branch(mnemonic: &str) -> bool {
    let mn = mnemonic.to_lowercase();
    matches!(
        mn.as_str(),
        "beql" | "bnel" | "bgtzl" | "blezl" | "bgezl" | "bltzl"
    )
}

/// Fold result: which instruction order to emit.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum DelaySlotFold {
    /// Reorder: emit delay slot IR first, then branch.
    EmitDelayThenBranch,
    /// Likely branch with nullified slot: emit branch with conditional delay-slot.
    LikelyConditional,
    /// No fold (not a branch).
    NotABranch,
}

/// Decide how to fold a branch + following instruction.
pub fn classify_pair(branch_mnemonic: &str) -> DelaySlotFold {
    if is_likely_branch(branch_mnemonic) {
        return DelaySlotFold::LikelyConditional;
    }
    if is_mips_delay_slot_branch(branch_mnemonic) {
        return DelaySlotFold::EmitDelayThenBranch;
    }
    DelaySlotFold::NotABranch
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_mips_delay_slot_branches() {
        assert!(is_mips_delay_slot_branch("j"));
        assert!(is_mips_delay_slot_branch("jal"));
        assert!(is_mips_delay_slot_branch("beq"));
        assert!(!is_mips_delay_slot_branch("add"));
        assert!(!is_mips_delay_slot_branch("lw"));
    }

    #[test]
    fn test_mips_likely_branches() {
        assert!(is_likely_branch("beql"));
        assert!(is_likely_branch("bnel"));
        assert!(!is_likely_branch("beq"));
        assert!(!is_likely_branch("j"));
    }

    #[test]
    fn test_mips_classify_pair() {
        assert_eq!(classify_pair("beq"), DelaySlotFold::EmitDelayThenBranch);
        assert_eq!(classify_pair("beql"), DelaySlotFold::LikelyConditional);
        assert_eq!(classify_pair("add"), DelaySlotFold::NotABranch);
    }

    #[test]
    fn test_mips_jalr_has_delay_slot() {
        assert!(is_mips_delay_slot_branch("jalr"));
        assert_eq!(classify_pair("jalr"), DelaySlotFold::EmitDelayThenBranch);
    }

    #[test]
    fn test_mips_case_insensitive() {
        assert!(is_mips_delay_slot_branch("BEQ"));
        assert!(is_mips_delay_slot_branch("Jal"));
    }
}
