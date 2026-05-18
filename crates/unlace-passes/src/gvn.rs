//! Global value numbering.
//!
//! Assigns a "value number" to every SSA varnode such that two varnodes
//! receive the same number iff their defining expressions are guaranteed
//! to evaluate to the same value.  Redundant computations are then
//! rewritten as `COPY` of an available canonical varnode bearing that
//! number.
//!
//! # Relationship to CSE
//!
//! [`CsePass`](crate::CsePass) is dominator-tree-scoped CSE: an expression
//! is only considered redundant if a syntactically identical earlier
//! expression strictly dominates it.  GVN additionally canonicalizes through
//! value identity, so expressions whose operands are equivalent SSA values can
//! match even when the raw syntax differs.  The final rewrite is still
//! dominance-checked: a `COPY` source must dominate the replacement site.
//!
//! Concretely, GVN here uses an RPO walk and groups pure computations that
//! share the same `(opcode, operand value numbers, output size)` key.
//! Constants are interned so `c5 + c5` and `(c2 + c3) + (c2 + c3)` both end
//! up with the same value number once their operand value numbers match.
//!
//! # Algorithm
//!
//! 1. Compute reverse post-order of the CFG starting from the entry.
//! 2. Walk blocks in RPO; within each block walk instructions in order.
//! 3. For each *eligible* (pure) instruction, build a key from
//!    `(opcode, output_size, sorted-or-ordered input value numbers)`.
//!    Inputs are mapped through the existing value number table; constants
//!    receive a stable per-`Varnode` identity-based number.
//! 4. If the key has already been seen and one of its canonical definitions
//!    dominates the current instruction, record a rewrite to `COPY canonical`.
//!    Reuse that canonical's value number for this output.
//! 5. Otherwise, mint a fresh value number for the output and store this
//!    instruction as another available definition for the key.
//!
//! # Commutativity
//!
//! Inputs of `INT_ADD`, `INT_MULT`, `INT_AND`, `INT_OR`, `INT_XOR`,
//! `INT_EQUAL`, `INT_NOTEQUAL`, `BOOL_AND`, `BOOL_OR`, `BOOL_XOR` are
//! sorted by value number before keying.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Identifier for an equivalence class of values.  Two SSA varnodes with
/// the same `ValueNumber` are guaranteed to hold the same value at any
/// program point where both are defined.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
struct ValueNumber(u32);

/// Canonical key for an instruction's expression: opcode, output bit-size,
/// and the value numbers of its operands (sorted for commutative ops).
type ValueKey = (IrOp, u8, Vec<ValueNumber>);

/// Returns `true` if `op` is pure and its result is fully determined by
/// its operands' value numbers.
const fn is_eligible(op: IrOp) -> bool {
    matches!(
        op,
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
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal
            | IrOp::IntCarry
            | IrOp::IntScarry
            | IrOp::IntSborrow
            | IrOp::BoolNegate
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
            | IrOp::Piece
            | IrOp::Subpiece
            | IrOp::Popcount
            | IrOp::Lzcount
    )
}

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

/// GVN-by-RPO pass.
///
/// Replaces every redundant pure computation with a `COPY` of the
/// canonical (first-numbered) SSA varnode in its equivalence class.
pub struct GvnPass;

impl Pass for GvnPass {
    fn name(&self) -> &str {
        "gvn"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::GlobalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let rewrites = compute_rewrites(func);
        if rewrites.is_empty() {
            return Ok(false);
        }
        apply_rewrites(func, rewrites);
        Ok(true)
    }
}

#[derive(Clone, Debug)]
struct Rewrite {
    block: BlockId,
    insn_idx: usize,
    canonical: Varnode,
    canonical_sv: SsaVarnode,
}

#[derive(Copy, Clone, Debug)]
struct CanonicalDef {
    sv: SsaVarnode,
    vn: ValueNumber,
    block: BlockId,
    insn_idx: usize,
}

/// Allocator for fresh [`ValueNumber`]s.
struct VnAllocator(u32);

impl VnAllocator {
    fn new() -> Self {
        Self(0)
    }
    fn next(&mut self) -> ValueNumber {
        let vn = ValueNumber(self.0);
        self.0 = self.0.checked_add(1).expect("value number overflow");
        vn
    }
}

/// Walks the function in reverse post-order and produces the list of
/// instructions to rewrite as `COPY` of an earlier equivalent.
fn compute_rewrites(func: &SsaFunction) -> Vec<Rewrite> {
    let order = reverse_post_order(func);

    let mut alloc = VnAllocator::new();

    // sv → vn for SSA-varnode operands seen as inputs or outputs.
    let mut sv_vn: BTreeMap<SsaVarnode, ValueNumber> = BTreeMap::new();
    // raw constant Varnode → vn, since constants are not SSA-renamed.
    let mut const_vn: BTreeMap<Varnode, ValueNumber> = BTreeMap::new();
    // Expression key → available canonical defs for that expression.
    let mut expr_table: BTreeMap<ValueKey, Vec<CanonicalDef>> = BTreeMap::new();

    let mut rewrites: Vec<Rewrite> = Vec::new();

    for bid in order {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => continue,
        };

        for (insn_idx, insn) in block.insns.iter().enumerate() {
            // For ineligible ops we still need a value number for the
            // output (so future eligible ops referring to it can be keyed),
            // but we never look the op itself up in expr_table.
            let Some(out_sv) = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Output))
                .copied()
            else {
                continue;
            };

            if !is_eligible(insn.op) {
                ensure_vn(&mut sv_vn, &mut alloc, out_sv);
                continue;
            }

            let key = match build_key(
                func,
                bid,
                insn_idx,
                insn,
                &mut sv_vn,
                &mut const_vn,
                &mut alloc,
            ) {
                Some(k) => k,
                None => {
                    ensure_vn(&mut sv_vn, &mut alloc, out_sv);
                    continue;
                }
            };

            let available = expr_table.get(&key).and_then(|defs| {
                defs.iter().copied().find(|def| {
                    definition_dominates_use(func, def.block, def.insn_idx, bid, insn_idx)
                })
            });

            match available {
                Some(canonical) => {
                    // Redundant: this output joins the existing equivalence
                    // class.  Reuse the canonical's vn so any later op
                    // operating on `out_sv` keys identically.
                    sv_vn.insert(out_sv, canonical.vn);
                    rewrites.push(Rewrite {
                        block: bid,
                        insn_idx,
                        canonical: canonical.sv.base,
                        canonical_sv: canonical.sv,
                    });
                }
                None => {
                    let vn = alloc.next();
                    sv_vn.insert(out_sv, vn);
                    expr_table.entry(key).or_default().push(CanonicalDef {
                        sv: out_sv,
                        vn,
                        block: bid,
                        insn_idx,
                    });
                }
            }
        }
    }

    rewrites
}

fn definition_dominates_use(
    func: &SsaFunction,
    def_bid: BlockId,
    def_idx: usize,
    use_bid: BlockId,
    use_idx: usize,
) -> bool {
    if def_bid == use_bid {
        return def_idx < use_idx;
    }
    block_dominates(&func.dom_tree, def_bid, use_bid)
}

fn block_dominates(
    dom_tree: &unlace_ir::ssa::DominatorTree,
    dominator: BlockId,
    block: BlockId,
) -> bool {
    if dominator == block {
        return true;
    }

    let mut cur = block;
    while let Some(parent) = dom_tree.idom(cur) {
        if parent == dominator {
            return true;
        }
        if parent == cur {
            break;
        }
        cur = parent;
    }

    false
}

/// Compute reverse post-order of the CFG starting from the entry block.
/// Falls back to the natural BlockId order if any unreachable blocks
/// exist (so we still process them deterministically).
fn reverse_post_order(func: &SsaFunction) -> Vec<BlockId> {
    let entry = func.dom_tree.root();
    let mut visited: BTreeMap<BlockId, bool> = BTreeMap::new();
    let mut post: Vec<BlockId> = Vec::new();

    // Iterative DFS with explicit stack: (node, is_post_visit).
    let mut stack: Vec<(BlockId, bool)> = vec![(entry, false)];

    while let Some((bid, is_post)) = stack.pop() {
        if is_post {
            post.push(bid);
            continue;
        }
        if visited.insert(bid, true).is_some() {
            continue;
        }

        stack.push((bid, true));

        if let Some(block) = func.function.blocks.get(&bid) {
            for &succ in block.successors.iter().rev() {
                if !visited.contains_key(&succ) {
                    stack.push((succ, false));
                }
            }
        }
    }

    let mut rpo: Vec<BlockId> = post.into_iter().rev().collect();

    // Append any blocks the DFS missed (unreachable from entry) so we
    // still number their outputs deterministically.
    for &bid in func.function.blocks.keys() {
        if !visited.contains_key(&bid) {
            rpo.push(bid);
        }
    }

    rpo
}

/// Get-or-mint a value number for an SSA varnode.
fn ensure_vn(
    sv_vn: &mut BTreeMap<SsaVarnode, ValueNumber>,
    alloc: &mut VnAllocator,
    sv: SsaVarnode,
) -> ValueNumber {
    if let Some(&vn) = sv_vn.get(&sv) {
        return vn;
    }
    let vn = alloc.next();
    sv_vn.insert(sv, vn);
    vn
}

/// Get-or-mint a value number for a constant varnode (keyed by the raw
/// Varnode triple — equal constants share a value number regardless of
/// where they appear).
fn ensure_const_vn(
    const_vn: &mut BTreeMap<Varnode, ValueNumber>,
    alloc: &mut VnAllocator,
    raw: Varnode,
) -> ValueNumber {
    if let Some(&vn) = const_vn.get(&raw) {
        return vn;
    }
    let vn = alloc.next();
    const_vn.insert(raw, vn);
    vn
}

/// Build the [`ValueKey`] for the eligible instruction at
/// `(bid, insn_idx)`.  Returns `None` if any input cannot be assigned a
/// value number (e.g. missing var_map entry for a non-constant input).
fn build_key(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
    sv_vn: &mut BTreeMap<SsaVarnode, ValueNumber>,
    const_vn: &mut BTreeMap<Varnode, ValueNumber>,
    alloc: &mut VnAllocator,
) -> Option<ValueKey> {
    let out = insn.output?;

    let mut input_vns: Vec<ValueNumber> = Vec::with_capacity(insn.inputs.len());
    for (i, raw) in insn.inputs.iter().enumerate() {
        let vn = if raw.space == SpaceId::Const {
            ensure_const_vn(const_vn, alloc, *raw)
        } else {
            let sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(i)))
                .copied()?;
            ensure_vn(sv_vn, alloc, sv)
        };
        input_vns.push(vn);
    }

    if is_commutative(insn.op) {
        input_vns.sort();
    }

    Some((insn.op, out.size, input_vns))
}

/// Convert each redundant instruction into `COPY <canonical>`.  The
/// resulting COPY's input slot var_map entry is set to the canonical SSA
/// varnode so downstream passes (SCCP, expression tree, etc.) see the
/// correct definition.
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

        *insn = IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec::smallvec![rw.canonical],
            insn.addr,
        );

        // Drop stale input mappings that no longer correspond to a real
        // input slot.
        for i in 0..original_input_count {
            func.var_map
                .remove(&(rw.block, rw.insn_idx, VarnodeSlot::Input(i)));
        }

        // Map the new sole input to the exact canonical SSA varnode chosen
        // during rewrite planning.
        if rw.canonical.space != SpaceId::Const {
            func.var_map.insert(
                (rw.block, rw.insn_idx, VarnodeSlot::Input(0)),
                rw.canonical_sv,
            );
        }
    }
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

    fn u(off: u64) -> Varnode {
        Varnode::unique(off, 4)
    }

    /// `v3 = a + b; v7 = a + b;` — second becomes `COPY v3` like CSE.
    #[test]
    fn test_gvn_basic_redundancy() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![a, b], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        let changed = GvnPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntAdd);
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], v3);
    }

    /// Sibling-block redundancies cannot be rewritten unless one definition
    /// dominates the other.  CFG: BB0 -> {BB1, BB2}; BB1: v3 = a + b;
    /// BB2: v7 = a + b.  Neither dominates the other, so both expressions
    /// must remain as real definitions.
    #[test]
    fn test_gvn_sibling_blocks_do_not_rewrite_non_dominating_definitions() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let cond = Varnode::reg(16, 1);
        let v3 = u(0);
        let v7 = u(16);

        let mut func = Function::new("siblings", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x2000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v3,
            smallvec![a, b],
            0x2010,
        ));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v7,
            smallvec![a, b],
            0x2020,
        ));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let changed = GvnPass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "GVN must not rewrite from a non-dominating sibling block"
        );

        let bb1_op = ssa.function.blocks[&BlockId(1)].insns[0].op;
        let bb2_op = ssa.function.blocks[&BlockId(2)].insns[0].op;
        assert_eq!(bb1_op, IrOp::IntAdd);
        assert_eq!(bb2_op, IrOp::IntAdd);
    }

    /// A definition in a dominator can still be used as the canonical source
    /// for an equivalent expression in a successor block.
    #[test]
    fn test_gvn_rewrites_when_canonical_dominates_successor() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let mut func = Function::new("dominated", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v3,
            smallvec![a, b],
            0x3000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x3004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v7,
            smallvec![a, b],
            0x3010,
        ));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3014));

        func.insert_block(bb0);
        func.insert_block(bb1);

        let mut ssa = build_ssa(func);
        let changed = GvnPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let bb0_op = ssa.function.blocks[&BlockId(0)].insns[0].op;
        let bb1_insn = &ssa.function.blocks[&BlockId(1)].insns[0];
        assert_eq!(bb0_op, IrOp::IntAdd);
        assert_eq!(bb1_insn.op, IrOp::Copy);
        assert_eq!(bb1_insn.inputs[0], v3);
    }

    /// `v3 = b + a` matches `v0 = a + b` via commutativity.
    #[test]
    fn test_gvn_commutative() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![b, a], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        let changed = GvnPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[1].op, IrOp::Copy);
        assert_eq!(block.insns[1].inputs[0], v3);
    }

    /// Non-commutative `INT_SUB` must not be merged on operand swap.
    #[test]
    fn test_gvn_non_commutative_no_match() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntSub, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntSub, v7, smallvec![b, a], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        let changed = GvnPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::IntSub);
        assert_eq!(block.insns[1].op, IrOp::IntSub);
    }

    /// LOAD/STORE/CALL must not be GVN'd — same key, different observable
    /// behaviour.
    #[test]
    fn test_gvn_skips_side_effecting() {
        let p = Varnode::reg(0, 8);
        let v3 = u(0);
        let v7 = u(16);
        let space = Varnode::constant(0, 8);

        let l1 = IrInsn::with_output(IrOp::Load, v3, smallvec![space, p], 0x1000);
        let l2 = IrInsn::with_output(IrOp::Load, v7, smallvec![space, p], 0x1004);

        let mut ssa = make_single_block_ssa(vec![l1, l2]);
        let changed = GvnPass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "two LOADs from the same address must not be merged"
        );

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(block.insns[0].op, IrOp::Load);
        assert_eq!(block.insns[1].op, IrOp::Load);
    }

    /// Pass is idempotent: a second run after the first reaches a fixed
    /// point and reports no change.
    #[test]
    fn test_gvn_idempotent() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = u(0);
        let v7 = u(16);

        let i1 = IrInsn::with_output(IrOp::IntAdd, v3, smallvec![a, b], 0x1000);
        let i2 = IrInsn::with_output(IrOp::IntAdd, v7, smallvec![a, b], 0x1004);

        let mut ssa = make_single_block_ssa(vec![i1, i2]);
        assert!(GvnPass.run(&mut ssa).expect("first run"));
        assert!(
            !GvnPass.run(&mut ssa).expect("second run"),
            "GVN must reach a fixed point"
        );
    }
}
