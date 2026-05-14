//! Constant-time violation detector (t376).
//!
//! Scans an [`SsaFunction`] for non-constant-time patterns that leak secret
//! data through timing or cache side channels. Three classes of violation
//! are reported:
//!
//! - **[`BranchOnSecret`](CtViolationKind::BranchOnSecret)** — a `CBRANCH`
//!   whose condition is data-dependent on a secret. Differing branch
//!   directions take different cycle counts and pollute the BTB.
//! - **[`MemoryAccessOnSecret`](CtViolationKind::MemoryAccessOnSecret)** —
//!   a `LOAD` or `STORE` whose effective address is a function of a secret
//!   (e.g. a table lookup `T[secret_byte]`). The cache-line that becomes
//!   resident leaks the index.
//! - **[`VariableShift`](CtViolationKind::VariableShift)** — an `INT_LEFT`
//!   / `INT_RIGHT` / `INT_SRIGHT` whose shift-amount is secret-derived.
//!   Many CPUs implement variable shifts with data-dependent latency.
//!
//! ## Algorithm
//!
//! 1. Seed a *tainted* set with the caller-supplied secret SSA varnodes.
//! 2. Propagate taint forward through the SSA def-use graph until fixed
//!    point: any instruction whose **value-producing** input is tainted
//!    produces a tainted output. (Address operands of `LOAD`/`STORE` are
//!    treated specially — see step 3.)
//! 3. Walk every instruction once more and report violations.
//!
//! Taint propagation is **flow-insensitive** over the SSA graph — phi
//! nodes propagate taint from any tainted incoming, and there is no
//! `untaint` operator. This is the standard conservative direction for
//! a CT auditor: a false positive is a code-review pointer, a false
//! negative is a vulnerability.

use std::collections::BTreeSet;

use unlace_ir::ssa::{PhiNode, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp};

/// Kind of constant-time violation detected.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum CtViolationKind {
    /// Conditional branch on a secret-derived value.
    BranchOnSecret,
    /// LOAD/STORE whose address is secret-derived (table lookup leak).
    MemoryAccessOnSecret,
    /// Variable-length shift whose count is secret-derived.
    VariableShift,
}

/// A single constant-time violation found in an [`SsaFunction`].
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct CtViolation {
    pub kind: CtViolationKind,
    /// `(block_id, insn_index)` of the offending instruction.
    pub location: (BlockId, usize),
}

/// Detect non-constant-time patterns in `func`, seeded by `secrets`.
///
/// Returns the violations in deterministic order (by `(block, insn, kind)`).
pub fn detect_ct_violations(func: &SsaFunction, secrets: &[SsaVarnode]) -> Vec<CtViolation> {
    let tainted = propagate_taint(func, secrets);

    let mut violations: BTreeSet<CtViolation> = BTreeSet::new();

    for (&bid, block) in &func.function.blocks {
        for (i, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Cbranch => {
                    // CBRANCH operands are [target, condition]; the
                    // condition is what leaks.
                    if input_is_tainted(func, &tainted, bid, i, 1) {
                        violations.insert(CtViolation {
                            kind: CtViolationKind::BranchOnSecret,
                            location: (bid, i),
                        });
                    }
                }
                IrOp::Load => {
                    // LOAD inputs may be either [addr] or [space_id, addr]
                    // depending on the lifter; treat every non-constant
                    // input as a potential address operand. Constant
                    // space-id inputs never appear in `var_map`, so they
                    // can never be tainted.
                    for idx in 0..insn.inputs.len() {
                        if input_is_tainted(func, &tainted, bid, i, idx) {
                            violations.insert(CtViolation {
                                kind: CtViolationKind::MemoryAccessOnSecret,
                                location: (bid, i),
                            });
                            break;
                        }
                    }
                }
                IrOp::Store => {
                    // STORE: address operands are every input *except* the
                    // last one (which is the value being written). The
                    // value being secret is not a CT problem — it's the
                    // address that picks the cache line.
                    let n = insn.inputs.len();
                    if n >= 2 {
                        for idx in 0..(n - 1) {
                            if input_is_tainted(func, &tainted, bid, i, idx) {
                                violations.insert(CtViolation {
                                    kind: CtViolationKind::MemoryAccessOnSecret,
                                    location: (bid, i),
                                });
                                break;
                            }
                        }
                    }
                }
                IrOp::IntLeft | IrOp::IntRight | IrOp::IntSright
                    // Variable shift: operand 1 is the shift amount. A
                    // constant shift amount lives in `SpaceId::Const` and
                    // is never present in `var_map`, so a tainted lookup
                    // hit implies a register-sourced (variable) shift.
                    if input_is_tainted(func, &tainted, bid, i, 1) => {
                        violations.insert(CtViolation {
                            kind: CtViolationKind::VariableShift,
                            location: (bid, i),
                        });
                    }
                _ => {}
            }
        }
    }

    violations.into_iter().collect()
}

/// Forward-propagate taint through the SSA graph until fixed point.
///
/// Seeded with `secrets`. An instruction taints its `output` if **any**
/// input is tainted. Phi nodes taint their output if **any** incoming
/// is tainted.
fn propagate_taint(func: &SsaFunction, secrets: &[SsaVarnode]) -> BTreeSet<SsaVarnode> {
    let mut tainted: BTreeSet<SsaVarnode> = secrets.iter().copied().collect();

    loop {
        let before = tainted.len();

        // Walk phi nodes first.
        for phis in func.phi_map.values() {
            for phi in phis {
                if phi_has_tainted_input(phi, &tainted) {
                    tainted.insert(phi.output);
                }
            }
        }

        // Then regular instructions.
        for (&bid, block) in &func.function.blocks {
            for (i, insn) in block.insns.iter().enumerate() {
                let Some(out_sv) = func.var_map.get(&(bid, i, VarnodeSlot::Output)).copied() else {
                    continue;
                };
                if tainted.contains(&out_sv) {
                    continue;
                }
                let mut any_in_tainted = false;
                for idx in 0..insn.inputs.len() {
                    if let Some(in_sv) = func
                        .var_map
                        .get(&(bid, i, VarnodeSlot::Input(idx)))
                        .copied()
                    {
                        if tainted.contains(&in_sv) {
                            any_in_tainted = true;
                            break;
                        }
                    }
                }
                if any_in_tainted {
                    tainted.insert(out_sv);
                }
            }
        }

        if tainted.len() == before {
            break;
        }
    }

    tainted
}

fn phi_has_tainted_input(phi: &PhiNode, tainted: &BTreeSet<SsaVarnode>) -> bool {
    phi.inputs.iter().any(|(_, sv)| tainted.contains(sv))
}

fn input_is_tainted(
    func: &SsaFunction,
    tainted: &BTreeSet<SsaVarnode>,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
) -> bool {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .is_some_and(|sv| tainted.contains(sv))
}

// =========================================================================
// Tests
// =========================================================================

#[cfg(test)]
mod tests {
    use super::*;

    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    /// Resolve the lowest-version SSA mapping for a base varnode in the
    /// constructed `SsaFunction`. The SSA builder assigns versions during
    /// renaming; we don't want test code to hard-code them.
    fn find_first_def(ssa: &unlace_ir::ssa::SsaFunction, base: Varnode) -> SsaVarnode {
        // Prefer the earliest *output* binding (the def); fall back to
        // earliest input mapping (live-on-entry).
        let mut best: Option<SsaVarnode> = None;
        for (&(_b, _i, ref slot), sv) in &ssa.var_map {
            if sv.base != base {
                continue;
            }
            if matches!(slot, VarnodeSlot::Output)
                && best.map_or(true, |b| sv.version < b.version) {
                    best = Some(*sv);
                }
        }
        if best.is_none() {
            for sv in ssa.var_map.values() {
                if sv.base == base && best.map_or(true, |b| sv.version < b.version) {
                    best = Some(*sv);
                }
            }
        }
        best.unwrap_or_else(|| panic!("no SSA mapping for {:?}", base))
    }

    fn reg(off: u64) -> Varnode {
        Varnode::reg(off, 8)
    }

    fn c(value: u64) -> Varnode {
        Varnode::constant(value, 8)
    }

    #[test]
    fn detects_branch_on_secret() {
        // r0  := r10 ^ r11           ; r10 is the secret
        // cmp := r0 == 0
        // CBRANCH target, cmp
        let r0 = reg(0);
        let r10 = reg(10);
        let r11 = reg(11);
        let cmp = reg(20);
        let target = c(0x2000);

        let mut func = Function::new("brc_secret", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntXor,
            r0,
            smallvec![r10, r11],
            0x1000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp,
            smallvec![r0, c(0)],
            0x1004,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target, cmp],
            0x1008,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let secret = find_first_def(&ssa, r10);

        let violations = detect_ct_violations(&ssa, &[secret]);
        assert_eq!(
            violations.len(),
            1,
            "expected exactly one branch-on-secret, got: {:?}",
            violations
        );
        assert_eq!(violations[0].kind, CtViolationKind::BranchOnSecret);
        assert_eq!(violations[0].location, (BlockId(0), 2));
    }

    #[test]
    fn detects_memory_access_on_secret() {
        // Models a table lookup T[secret_byte]:
        //   addr := table_base + r10   ; r10 is secret
        //   val  := LOAD addr
        //   RETURN
        let table = reg(8);
        let r10 = reg(10);
        let addr = reg(20);
        let val = reg(30);

        let mut func = Function::new("table_lookup", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![table, r10],
            0x1000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            val,
            smallvec![addr],
            0x1004,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let secret = find_first_def(&ssa, r10);

        let violations = detect_ct_violations(&ssa, &[secret]);
        assert_eq!(violations.len(), 1, "got: {:?}", violations);
        assert_eq!(violations[0].kind, CtViolationKind::MemoryAccessOnSecret);
        assert_eq!(violations[0].location, (BlockId(0), 1));
    }

    #[test]
    fn detects_variable_shift_on_secret() {
        //   shifted := r0 >> r10        ; r10 is the secret shift amount
        let r0 = reg(0);
        let r10 = reg(10);
        let shifted = reg(20);

        let mut func = Function::new("var_shift", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntRight,
            shifted,
            smallvec![r0, r10],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let secret = find_first_def(&ssa, r10);

        let violations = detect_ct_violations(&ssa, &[secret]);
        assert_eq!(violations.len(), 1, "got: {:?}", violations);
        assert_eq!(violations[0].kind, CtViolationKind::VariableShift);
        assert_eq!(violations[0].location, (BlockId(0), 0));
    }

    #[test]
    fn clean_function_yields_no_violations() {
        // A textbook constant-time XOR keystream step:
        //   t  := r10 ^ r11      ; treat r10 as secret
        //   r0 := t              ; pure data flow, no branch, no
        //   RETURN               ; secret-addressed memory, no var shift.
        let r0 = reg(0);
        let r10 = reg(10);
        let r11 = reg(11);
        let t = reg(20);

        let mut func = Function::new("clean_ct", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntXor,
            t,
            smallvec![r10, r11],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, r0, smallvec![t], 0x1004));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        func.insert_block(bb0);

        let ssa = build_ssa(func);
        let secret = find_first_def(&ssa, r10);

        let violations = detect_ct_violations(&ssa, &[secret]);
        assert!(
            violations.is_empty(),
            "clean function should yield zero violations, got: {:?}",
            violations
        );
    }
}
