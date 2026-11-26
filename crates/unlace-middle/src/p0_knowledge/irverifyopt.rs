//! (unlace `irverify`) The option that checks the IR after each pass and names the first pass that
//! breaks an invariant. The check runs in `substrate/irverify.rs`; the scheduler reads the flag in
//! `ActionContext::irverify`. Off by default: it is a diagnostic, and it walks the function once per pass.

crate::unlace_flag!(
    /// (unlace) `option irverify`: check the IR after each pass and report the first pass that breaks an
    /// op, varnode or block link, or a definition that does not dominate a read. Diagnostic only; shipped off.
    IrVerifyPasses,
    "irverify",
    "IR invariant check after each pass",
    unset: false,
    shipped: false
);

#[cfg(test)]
mod tests {
    use super::IrVerifyPasses;
    use crate::optionset::UnlaceOption;

    #[test]
    fn the_option_ships_off() {
        assert!(!IrVerifyPasses::unset().0);
        assert!(!IrVerifyPasses::shipped().0);
        assert!(IrVerifyPasses::parse("on").unwrap().0.0);
    }
}
