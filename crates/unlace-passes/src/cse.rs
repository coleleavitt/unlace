//! Common subexpression elimination (CSE).
//!
//! Detects duplicate pure computations within a function and replaces every
//! later occurrence with a `COPY` of the earlier result.
//!
//! # Algorithm
//!
//! Dominator-tree-based CSE (Cooper & Torczon, *Engineering a Compiler*,
//! Section 8.6.1):
//!
//! 1. Walk the SSA function in dominator-tree pre-order.
//! 2. For each instruction, build a `CseKey = (IrOp, Vec<SsaVarnode>)` from
//!    the opcode and SSA inputs (commutative operands sorted for canonical
//!    matching).
//! 3. Maintain a [`BTreeMap<CseKey, SsaVarnode>`] of available expressions.
//!    Entries are scoped: when entering a dominator-tree subtree, remember
//!    which keys were added so they can be popped on the way out.  This
//!    guarantees that a redundant computation is only replaced when the
//!    earlier definition strictly dominates it.
//! 4. If an instruction's key is already in the table the instruction is
//!    rewritten to `COPY <earlier_result>`.  Otherwise, the instruction's
//!    output is added to the table.
//!
//! # Eligible operations
//!
//! Only **pure** computations participate.  Memory operations (`LOAD`,
//! `STORE`), side-effecting calls (`CALL`, `CALLIND`, `CALLOTHER`, `NEW`,
//! `CPOOLREF`, `INDIRECT`), control flow (`BRANCH`, `CBRANCH`, `BRANCHIND`,
//! `RETURN`) and SSA pseudos (`MULTIEQUAL`/phi) are skipped.
//!
//! # Commutativity
//!
//! Inputs of `INT_ADD`, `INT_MULT`, `INT_AND`, `INT_OR`, `INT_XOR`,
//! `INT_EQUAL`, `INT_NOTEQUAL`, `BOOL_AND`, `BOOL_OR`, `BOOL_XOR` are sorted
//! by [`SsaVarnode`]'s natural ordering before keying.  `a + b` and `b + a`
//! therefore produce identical keys and are considered equivalent.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

// ---------------------------------------------------------------------------
// Key construction
// ---------------------------------------------------------------------------

/// Canonical key for an instruction: opcode + (output size) + ordered SSA
/// inputs.  Constants are encoded as an `SsaVarnode` with `version = 0` and
/// the constant value in the base offset.
type CseKey = (IrOp, u8, Vec<SsaVarnode>);

/// Returns `true` if `op` participates in CSE.  Only pure, deterministic
/// computations whose result depends solely on their SSA operands are
/// eligible.
const fn is_eligible(op: IrOp) -> bool {
    matches!(
        op,
        // Arithmetic
        IrOp::IntAdd
            | IrOp::IntSub
            | IrOp::IntMult
            | IrOp::IntDiv
            | IrOp::IntSdiv
            | IrOp::IntRem
            | IrOp::IntSrem
            | IrOp::IntNegate
            | IrOp::Int2comp
            | IrOp::IntZext
            | IrOp::IntSext
            // Bitwise & shift
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            // Comparison
            | IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal
            | IrOp::IntCarry
            | IrOp::IntScarry
            | IrOp::IntSborrow
            // Boolean
            | IrOp::BoolNegate
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
            // Bit & field
            | IrOp::Piece
            | IrOp::Subpiece
            | IrOp::Popcount
            | IrOp::Lzcount
    )
}

/// Returns `true` if `op`'s operand order is irrelevant.  Inputs of
/// commutative ops are sorted before keying so that `a + b` and `b + a`
/// hash equal.
const fn is_commutative(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::IntAdd
            | IrOp::IntMult
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntCarry
            | IrOp::IntScarry
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
    )
}

/// Encode a raw [`Varnode`] input as an [`SsaVarnode`].  Constants are
/// represented as a synthetic SSA varnode with version 0 (constants have no
/// SSA version anyway — the base carries their value).  Non-constant inputs
/// must already exist in `var_map`.
fn encode_input(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    raw: &Varnode,
) -> Option<SsaVarnode> {
    if raw.space == SpaceId::Const {
        return Some(SsaVarnode {
            base: *raw,
            version: 0,
        });
    }
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .copied()
}

/// Build the [`CseKey`] for an instruction at `(bid, insn_idx)`.  Returns
/// `None` if the instruction is ineligible or if any input cannot be
/// resolved (which would make CSE unsafe).
fn build_key(func: &SsaFunction, bid: BlockId, insn_idx: usize, insn: &IrInsn) -> Option<CseKey> {
    if !is_eligible(insn.op) {
        return None;
    }
    let out = insn.output?;

    let mut inputs: Vec<SsaVarnode> = Vec::with_capacity(insn.inputs.len());
    for (i, raw) in insn.inputs.iter().enumerate() {
        inputs.push(encode_input(func, bid, insn_idx, i, raw)?);
    }

    if is_commutative(insn.op) {
        inputs.sort();
    }

    Some((insn.op, out.size, inputs))
}

// ---------------------------------------------------------------------------
// Pass implementation
// ---------------------------------------------------------------------------

/// Common-subexpression-elimination pass.
///
/// Pure computations whose key already appears in a dominating block are
/// rewritten as `COPY` of the earlier result.  The pass is conservative:
/// any instruction that may read or modify state outside its SSA inputs is
/// skipped (see [`is_eligible`]).
pub struct CsePass;

impl Pass for CsePass {
    fn name(&self) -> &str {
        "cse"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let rewrites = collect_rewrites(func);
        if rewrites.is_empty() {
            return Ok(false);
        }
        apply_rewrites(func, rewrites);
        Ok(true)
    }
}

/// One redundant instruction to rewrite into `COPY <earlier>`.
#[derive(Clone, Debug)]
struct Rewrite {
    block: BlockId,
    insn_idx: usize,
    /// The varnode of the earlier (dominating) result.  Becomes the sole
    /// input of the rewritten `COPY`.
    earlier: Varnode,
}

/// Walk the dominator tree iteratively (pre-order with cleanup actions) and
/// collect every redundant instruction.
fn collect_rewrites(func: &SsaFunction) -> Vec<Rewrite> {
    let mut table: BTreeMap<CseKey, SsaVarnode> = BTreeMap::new();
    // Per-block log: keys added while processing that block, so they can be
    // removed when we finish the entire dominator subtree rooted at it.
    let mut added_per_block: BTreeMap<BlockId, Vec<CseKey>> = BTreeMap::new();
    let mut rewrites: Vec<Rewrite> = Vec::new();

    // (block, is_cleanup) — `is_cleanup` indicates this is the second visit
    // (after all descendants are processed), used to drop scoped entries.
    let root = func.dom_tree.root();
    let mut stack: Vec<(BlockId, bool)> = vec![(root, false)];

    while let Some((bid, is_cleanup)) = stack.pop() {
        if is_cleanup {
            if let Some(keys) = added_per_block.remove(&bid) {
                for k in keys {
                    table.remove(&k);
                }
            }
            continue;
        }

        // Schedule cleanup after children finish.
        stack.push((bid, true));

        // Process every instruction in this block.
        if let Some(block) = func.function.blocks.get(&bid) {
            let mut local_added: Vec<CseKey> = Vec::new();

            for (insn_idx, insn) in block.insns.iter().enumerate() {
                let Some(key) = build_key(func, bid, insn_idx, insn) else {
                    continue;
                };
                let Some(out_sv) = func
                    .var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Output))
                    .copied()
                else {
                    continue;
                };

                match table.get(&key) {
                    Some(&earlier_sv) => {
                        // Redundant — rewrite later.  We must not insert
                        // this output into the table (the earlier one is
                        // canonical and dominates).
                        rewrites.push(Rewrite {
                            block: bid,
                            insn_idx,
                            earlier: earlier_sv.base,
                        });
                    }
                    None => {
                        table.insert(key.clone(), out_sv);
                        local_added.push(key);
                    }
                }
            }

            added_per_block.insert(bid, local_added);
        }

        // Push children in reverse so left-most child is processed first.
        let children = func.dom_tree.children(bid);
        for &child in children.iter().rev() {
            stack.push((child, false));
        }
    }

    rewrites
}

/// Convert each redundant instruction to `COPY <earlier>` in place.
///
/// Input slots in `var_map` for the rewritten instruction are dropped (the
/// new `COPY` has only one input, replacing the original input slots).
fn apply_rewrites(func: &mut SsaFunction, rewrites: Vec<Rewrite>) {
    for rw in rewrites {
        let block = match func.function.blocks.get_mut(&rw.block) {
            Some(b) => b,
            None => continue,
        };
        let insn = match block.insns.get_mut(rw.insn_idx) {
            Some(i) => i,
            None => continue,
        };
        let Some(out) = insn.output else {
            continue;
        };

        let original_input_count = insn.inputs.len();

        *insn = IrInsn::with_output(IrOp::Copy, out, smallvec::smallvec![rw.earlier], insn.addr);

        // Purge stale input mappings that no longer correspond to a real
        // input slot, then map the new sole input.
        for i in 0..original_input_count {
            func.var_map
                .remove(&(rw.block, rw.insn_idx, VarnodeSlot::Input(i)));
        }

        // The earlier result is the SSA varnode of the previously-defined
        // output; locate it via reverse lookup so the new COPY input slot
        // points at the right SSA version.
        if rw.earlier.space != SpaceId::Const {
            if let Some(earlier_sv) = find_ssa_for_base(func, &rw.earlier) {
                func.var_map
                    .insert((rw.block, rw.insn_idx, VarnodeSlot::Input(0)), earlier_sv);
            }
        }
    }
}

/// Find the highest-version `SsaVarnode` that currently maps to `base` as an
/// instruction output.  CSE rewrites point at a definition that strictly
/// dominates the use, so any extant mapping is correct as long as the base
/// matches.
///
/// In practice the table stored the exact `SsaVarnode` of the earlier
/// definition; we already saved `base` from that varnode.  When the earlier
/// SSA varnode was retained, *some* mapping `(bid, idx, Output) → SsaVarnode`
/// has the same base.  We pick the first such match — version selection is
/// deterministic because `var_map` is a [`BTreeMap`].
fn find_ssa_for_base(func: &SsaFunction, base: &Varnode) -> Option<SsaVarnode> {
    for (&(_b, _i, ref slot), sv) in &func.var_map {
        if matches!(slot, VarnodeSlot::Output) && sv.base == *base {
            return Some(*sv);
        }
    }
    None
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// Distinct unique-space varnodes for unambiguous SSA naming.
    fn u(off: u64) -> Varnode {
        Varnode::unique(off, 4)
    }

    /// `v3 = a + b; v7 = a + b;` — second becomes `v7 = COPY v3`.
    #[test]
    fn test_simple_cse() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![a, b], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "second a+b must be eliminated");

        let block = ssa.function.blocks.values().next().expect("has block");
        // First instruction unchanged.
        assert_eq!(block.insns[0].op, IrOp::IntAdd);
        // Second rewritten to COPY of v3.
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].output, Some(v7));
        assert_eq!(block.insns[1].inputs.len(), 1);
        assert_eq!(block.insns[1].inputs[0], v3);
    }

    /// `v3 = a + b; v7 = b + a;` — commutativity match → CSE.
    #[test]
    fn test_commutative_cse() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![b, a], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "commutative duplicate must be eliminated");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], v3);
    }

    /// In SSA, redefining `a` produces a new version so the inputs of the
    /// second `INT_ADD` differ from the first — automatic non-match.
    ///
    /// We seed `a` with an explicit COPY so the SSA renamer assigns it a
    /// definite first version; the subsequent redefinition then bumps to
    /// version 1 and the second add reads `a v1` instead of `a v0`.
    #[test]
    fn test_no_cse_after_intervening_def() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);
        let c1 = Varnode::constant(1, 4);
        let c0 = Varnode::constant(0, 4);

        let seed = IrInsn::with_output(IrOp::Copy, a, smallvec![c0], 0x0FFC);
        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i_redef = IrInsn::with_output(IrOp::IntAdd, a, smallvec![a, c1], 0x1004);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![a, b], 0x1008);

        let mut ssa = make_single_block_ssa(vec![seed, i1, i_redef, i2]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "redefined operand must prevent CSE in SSA form");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::IntAdd);
        assert_eq!(block.insns[3].op, IrOp::IntAdd);
    }

    /// Two LOADs from the same address must not be CSE'd — memory may be
    /// modified between them by another path.
    #[test]
    fn test_no_cse_loads() {
        let p = Varnode::reg(0, 8);
        let v3 = u(0);
        let v7 = u(16);
        let space = Varnode::constant(0, 8);

        let l1 = IrInsn::with_output(IrOp::Load, v3, smallvec![space, p], 0x1000);
        let l2 = IrInsn::with_output(IrOp::Load, v7, smallvec![space, p], 0x1004);

        let mut ssa = make_single_block_ssa(vec![l1, l2]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "LOAD must never be CSE'd");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Load);
        assert_eq!(block.insns[1].op, IrOp::Load);
    }

    /// Two identical CALLs must not be merged — calls have side effects.
    #[test]
    fn test_no_cse_calls() {
        let target = Varnode::ram(0x4000, 8);
        let v3 = u(0);
        let v7 = u(16);

        let c1 = IrInsn::with_output(IrOp::Call, v3, smallvec![target], 0x1000);
        let c2 = IrInsn::with_output(IrOp::Call, v7, smallvec![target], 0x1004);

        let mut ssa = make_single_block_ssa(vec![c1, c2]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "CALL must never be CSE'd");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Call);
        assert_eq!(block.insns[1].op, IrOp::Call);
    }

    /// `v3 = a + b; v7 = a + b; v11 = a + b;` — both later defs become
    /// `COPY v3`.
    #[test]
    fn test_chain_cse() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);
        let v11 = u(32);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![a, b], 0x1004);
        let i3 = IrInsn::with_output(IrOp::IntAdd, v11, smallvec![a, b], 0x1008);

        let mut ssa = make_single_block_ssa(vec![i1, i2, i3]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntAdd);
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], v3);
        assert_eq!(block.insns[2].op, IrOp::Copy);
        assert_eq!(block.insns[2].inputs[0], v3);
    }

    /// CSE happens across blocks when the earlier definition dominates the
    /// later one.
    ///
    /// CFG:
    /// ```text
    ///   BB0: v3 = a + b; CBRANCH → BB1, BB2
    ///   BB1: v7 = a + b   ← BB0 dominates BB1, CSE applies
    ///   BB2: ...
    /// ```
    #[test]
    fn test_dominance_required_dominates() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let cond = Varnode::reg(16, 1);
        let v3 = u(0);
        let v7 = u(16);

        let mut func = Function::new("dom_yes", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v3,
            smallvec![a, b],
            0x2000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x2004,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v7,
            smallvec![a, b],
            0x2010,
        ));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v7], 0x2014));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v3], 0x2020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let mut ssa = build_ssa(func);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(
            changed,
            "BB0 dominates BB1, so v7 = a+b must become COPY v3"
        );

        let bb1_after = &ssa.function.blocks[&BlockId(1)];
        assert_eq!(bb1_after.insns[0].op, IrOp::Copy);
        assert_eq!(bb1_after.insns[0].inputs[0], v3);
    }

    /// CSE must NOT happen between sibling blocks: BB1 does not dominate
    /// BB2, so the computation in BB1 is not available in BB2.
    ///
    /// CFG:
    /// ```text
    ///   BB0: CBRANCH → BB1, BB2
    ///   BB1: v3 = a + b; → BB3
    ///   BB2: v7 = a + b; → BB3   ← BB1 does NOT dominate BB2
    ///   BB3: RETURN
    /// ```
    #[test]
    fn test_dominance_required_no_dom() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let cond = Varnode::reg(16, 1);
        let v3 = u(0);
        let v7 = u(16);

        let mut func = Function::new("dom_no", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x3000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v3,
            smallvec![a, b],
            0x3010,
        ));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x3014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v7,
            smallvec![a, b],
            0x3020,
        ));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x3024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "siblings BB1, BB2 do not dominate each other; no CSE allowed"
        );

        // Both INT_ADDs must remain.
        assert_eq!(ssa.function.blocks[&BlockId(1)].insns[0].op, IrOp::IntAdd);
        assert_eq!(ssa.function.blocks[&BlockId(2)].insns[0].op, IrOp::IntAdd);
    }

    /// A non-commutative operation (`INT_SUB`) should match `a-b` but not
    /// `b-a`.
    #[test]
    fn test_non_commutative_no_swap() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntSub, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntSub, v7, smallvec![b, a], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "INT_SUB is not commutative");

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntSub);
        assert_eq!(block.insns[1].op, IrOp::IntSub);
    }

    /// Different opcodes with the same inputs must not match.
    #[test]
    fn test_different_op_no_match() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntMult, v7, smallvec![a, b], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        let changed = CsePass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "different opcodes must not be CSE'd");
    }

    /// Pass must be a no-op the second time it runs (fixed-point safe).
    #[test]
    fn test_idempotent() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![a, b], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        assert!(CsePass.run(&mut ssa).expect("first run"));
        assert!(
            !CsePass.run(&mut ssa).expect("second run"),
            "pass must be idempotent at fixed point"
        );
    }
}
