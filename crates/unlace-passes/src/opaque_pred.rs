//! Opaque-predicate detection (t399).
//!
//! An *opaque predicate* is a `CBRANCH` whose condition is **provably** the
//! same value at every execution — typically inserted by obfuscators to
//! confuse a CFG recoverer with bogus branches.  Once detected, the
//! optimizer can rewrite the `CBRANCH` into an unconditional `BRANCH` and
//! drop the unreachable side, simplifying the CFG dramatically.
//!
//! # Heuristic
//!
//! For every `CBRANCH` we inspect the condition operand (input #1):
//!
//! 1. **Constant condition** — the condition Varnode itself lives in the
//!    constant space.  This is what a fully-folded SCCP output looks like.
//! 2. **Trivially-derivable from a binop** — the condition is the output of
//!    a single instruction whose result is determinable from one operand:
//!    - `INT_AND(x, 0)`  → always 0 → always-false
//!    - `INT_AND(x, x)` *with x constant* → handled by case 1 after folding
//!    - `INT_OR (x, -1)` → all-ones → always-nonzero → always-true
//!    - `INT_OR (x, 0)`  on its own does *not* prove a value; skipped
//!    - `INT_XOR(x, x)` → always 0 (same SSA varnode on both sides)
//!    - `INT_SUB(x, x)` → always 0 (same SSA varnode on both sides)
//!    - `INT_EQUAL(x, x)` → always 1
//!    - `INT_NOTEQUAL(x, x)` → always 0
//!
//! The truthiness convention follows P-code semantics: a condition is
//! "true" iff its low byte is non-zero.
//!
//! # Returned shape
//!
//! `Vec<(BlockId, usize, bool)>` — one entry per detected opaque predicate.
//! The `usize` is the index of the `CBRANCH` instruction within the
//! block's `insns` vector; the `bool` is `true` iff the predicate is
//! always-true (i.e. the "true" successor — `successors[0]` — is the only
//! feasible target).
//!
//! Returning a plain `Vec` keeps the analysis side-effect-free.  A later
//! pass can rewrite the SSA based on the report.

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

/// Scan `func` for `CBRANCH` instructions whose condition is provably
/// constant and return one entry per opaque predicate found.
///
/// Output is deterministic: blocks are visited in `BlockId` order, then
/// instructions in source order.
pub fn opaque_predicate_detect(func: &SsaFunction) -> Vec<(BlockId, usize, bool)> {
    let mut hits = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Cbranch {
                continue;
            }
            // CBRANCH layout: input0 = target, input1 = condition.
            let Some(cond) = insn.inputs.get(1).copied() else {
                continue;
            };

            if let Some(value) = evaluate_condition(cond, &block.insns[..idx]) {
                hits.push((bid, idx, value));
            }
        }
    }

    hits
}

/// Try to prove `cond` is a known boolean at this program point.
///
/// `prior` is the slice of instructions in the same block preceding the
/// `CBRANCH` — we limit ourselves to single-block, single-step reasoning
/// to keep this cheap and avoid double-counting work SCCP already did.
fn evaluate_condition(cond: Varnode, prior: &[IrInsn]) -> Option<bool> {
    // Case 1: condition is itself a constant (e.g. CBRANCH cond=#0).
    if cond.space == SpaceId::Const {
        return Some(cond.offset != 0);
    }

    // Case 2: condition is the output of a recent simple binop we can
    // resolve. Walk backwards so the *latest* def wins (P-code semantics
    // for non-SSA temporaries).
    let def = prior.iter().rev().find(|i| i.output == Some(cond))?;
    let a = *def.inputs.first()?;
    let b = def.inputs.get(1).copied();

    match def.op {
        IrOp::Copy => {
            // COPY of a constant collapses to that constant's truthiness.
            if a.space == SpaceId::Const {
                Some(a.offset != 0)
            } else {
                None
            }
        }
        IrOp::IntAnd => {
            let b = b?;
            // x & 0  → 0  (always-false). Constant may be on either side.
            if is_const_zero(a) || is_const_zero(b) {
                Some(false)
            } else if a == b {
                // x & x → x — only resolvable if x is itself a constant.
                if a.space == SpaceId::Const {
                    Some(a.offset != 0)
                } else {
                    None
                }
            } else {
                None
            }
        }
        IrOp::IntOr => {
            let b = b?;
            // x | -1 → -1 (all-ones, low byte non-zero → always-true).
            // We check the relevant low bits given the operand's size.
            if is_const_allones(a) || is_const_allones(b) {
                Some(true)
            } else if a == b && a.space == SpaceId::Const {
                Some(a.offset != 0)
            } else {
                None
            }
        }
        IrOp::IntXor | IrOp::IntSub => {
            let b = b?;
            // x ^ x → 0, x - x → 0 (same SSA varnode).
            if a == b { Some(false) } else { None }
            if a == b {
                Some(false)
            } else {
                None
            }
        }
        IrOp::IntEqual => {
            let b = b?;
            if a == b {
                // x == x → 1 (always-true). Reflexivity holds for any
                // varnode, including registers, since both sides denote
                // the same SSA value.
                Some(true)
            } else if a.space == SpaceId::Const && b.space == SpaceId::Const {
                Some(a.offset == b.offset)
            } else {
                None
            }
        }
        IrOp::IntNotequal => {
            let b = b?;
            if a == b {
                Some(false)
            } else if a.space == SpaceId::Const && b.space == SpaceId::Const {
                Some(a.offset != b.offset)
            } else {
                None
            }
        }
        _ => None,
    }
}

#[inline]
fn is_const_zero(v: Varnode) -> bool {
    v.space == SpaceId::Const && v.offset == 0
}

/// All-ones for the operand's width — `INT_OR(x, -1)` regardless of size.
#[inline]
fn is_const_allones(v: Varnode) -> bool {
    if v.space != SpaceId::Const {
        return false;
    }
    let bits = (v.size as u32).saturating_mul(8);
    if bits == 0 || bits >= 64 {
        v.offset == u64::MAX
    } else {
        let mask = (1u64 << bits) - 1;
        (v.offset & mask) == mask
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa_with_cbranch(prior: Vec<IrInsn>, cond: Varnode) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);

        // BB0: prior insns + CBRANCH(target, cond).
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns = prior;
        // CBRANCH target = constant address; condition = `cond`.
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x1100, 8), cond],
            0x10F0,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        // BB1 / BB2 simple sinks so the CFG is well-formed.
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1100,
        ));
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1200,
        ));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        build_ssa(func)
    }

    /// CBRANCH whose condition is the literal constant 1 — the textbook
    /// post-SCCP shape — must be flagged as always-true.
    #[test]
    fn test_constant_one_is_always_true() {
        let ssa = make_ssa_with_cbranch(vec![], Varnode::constant(1, 1));
        let hits = opaque_predicate_detect(&ssa);
        assert_eq!(hits.len(), 1);
        assert_eq!(hits[0].0, BlockId(0));
        assert!(hits[0].2, "constant 1 should be always-true");
    }

    /// `cond = x & 0` → always-false, regardless of `x`.
    #[test]
    fn test_int_and_zero_is_always_false() {
        let x = Varnode::reg(0, 4);
        let cond = Varnode::unique(0, 1);
        let prior = vec![IrInsn::with_output(
            IrOp::IntAnd,
            cond,
            smallvec![x, Varnode::constant(0, 4)],
            0x1000,
        )];
        let ssa = make_ssa_with_cbranch(prior, cond);
        let hits = opaque_predicate_detect(&ssa);
        assert_eq!(hits.len(), 1, "x & 0 must be detected");
        assert!(!hits[0].2, "x & 0 is always-false");
    }

    /// `cond = x | -1` → always-true (low byte is 0xFF ≠ 0).
    /// Also exercises the width-aware all-ones check: `-1 : u32` is
    /// `0xFFFFFFFF`, not the full `u64::MAX`.
    #[test]
    fn test_int_or_allones_is_always_true() {
        let x = Varnode::reg(0, 4);
        let cond = Varnode::unique(0, 4);
        let neg_one_u32 = Varnode::constant(0xFFFF_FFFF, 4);
        let prior = vec![IrInsn::with_output(
            IrOp::IntOr,
            cond,
            smallvec![x, neg_one_u32],
            0x1000,
        )];
        let ssa = make_ssa_with_cbranch(prior, cond);
        let hits = opaque_predicate_detect(&ssa);
        assert_eq!(hits.len(), 1, "x | -1 must be detected");
        assert!(hits[0].2, "x | -1 is always-true");
    }

    /// Genuinely opaque-looking but actually *non-constant* condition:
    /// `cond = x & y` with neither operand constant and not the same
    /// varnode — the detector must **not** flag this (no false positive).
    /// Pairs with a separate `INT_XOR(x, x)` which *should* be flagged,
    /// so this also verifies multiple-CBRANCH ordering.
    #[test]
    fn test_no_false_positive_and_real_xor_self_hit() {
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(4, 4);
        let cond_unknown = Varnode::unique(0, 4);
        let cond_zero = Varnode::unique(8, 4);

        // Build two adjacent CBRANCHes in the same block: the first with
        // an unknowable condition (`x & y`), the second with `x ^ x` → 0.
        let mut func = Function::new("two", BlockId(0), 0x2000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            cond_unknown,
            smallvec![x, y],
            0x2000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x2100, 8), cond_unknown],
            0x2004,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntXor,
            cond_zero,
            smallvec![x, x],
            0x2008,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x2200, 8), cond_zero],
            0x200C,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2100,
        ));
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2200,
        ));
        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        let ssa = build_ssa(func);

        let hits = opaque_predicate_detect(&ssa);
        assert_eq!(hits.len(), 1, "exactly one of the two CBRANCHes is opaque");
        // The opaque CBRANCH is the second instruction-pair, at insn index 3.
        assert_eq!(hits[0], (BlockId(0), 3, false));
    }
}
