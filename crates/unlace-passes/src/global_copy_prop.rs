//! Global copy propagation pass.
//!
//! Replaces uses of a varnode `v` with the source `s` of a dominating
//! `v = COPY s` instruction.  Unlike [`CopyPropagationPass`](crate::CopyPropagationPass),
//! which collects all `COPY` definitions function-wide and resolves them as
//! a flat map, this pass walks the dominator tree so that an equivalence
//! `v = COPY s` is only applied at use sites where the COPY *strictly
//! dominates* the use.  This is the same scoping discipline used by
//! [`CsePass`](crate::CsePass).
//!
//! # Why "global"?
//!
//! "Global" here means *cross-block within a single function* — not
//! whole-program.  The local pass already propagates within a block; the
//! interesting case is propagating into uses in dominated successor blocks.
//!
//! # Algorithm
//!
//! 1. Walk the dominator tree iteratively in pre-order.
//! 2. Maintain a [`BTreeMap`] of currently-live SSA `dst -> src`
//!    equivalences. Entries are pushed when entering a block and popped when
//!    leaving the dominator subtree, so an equivalence is only used at uses
//!    dominated by its definition.
//! 3. At each instruction in a block:
//!    - Replace each input that has a known dominating equivalent.
//!    - If the instruction defines an output, kill any equivalences whose
//!      source or destination is the redefined base (the SSA renamer
//!      should already make this rare, but it's required for soundness on
//!      raw register/stack varnodes that are reassigned).
//!    - If the instruction is `COPY dst, src`, record `dst → resolved(src)`
//!      so chains collapse to their root.
//! 4. After traversal, apply the recorded input rewrites.
//!
//! # Comparison with the local pass
//!
//! `CopyPropagationPass` handles the within-block case.  Cross-block
//! propagation must key equivalences by SSA varnode, not raw [`Varnode`]
//! base, because loop headers and joins often reuse the same machine
//! register base for a distinct phi-defined value.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Global copy propagation across the dominator tree.
pub struct GlobalCopyPropPass;

impl Pass for GlobalCopyPropPass {
    fn name(&self) -> &str {
        "global-copy-propagation"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::GlobalOpt
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

/// One input slot to rewrite: `(block, insn_idx, input_idx) → new value`.
#[derive(Clone, Debug)]
struct InputRewrite {
    block: BlockId,
    insn_idx: usize,
    input_idx: usize,
    new_input: Varnode,
    new_ssa: Option<SsaVarnode>,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
struct CopySource {
    raw: Varnode,
    ssa: Option<SsaVarnode>,
}

/// Walk the dominator tree iteratively and record which input slots should
/// be rewritten to a dominating COPY source.
fn collect_rewrites(func: &SsaFunction) -> Vec<InputRewrite> {
    // Live SSA `dst -> src` equivalences scoped by dominator subtree.
    let mut equiv: BTreeMap<SsaVarnode, CopySource> = BTreeMap::new();
    // Per-block log of mutations to `equiv`, replayed in reverse on cleanup.
    let mut log_per_block: BTreeMap<BlockId, Vec<EquivMutation>> = BTreeMap::new();
    let mut rewrites: Vec<InputRewrite> = Vec::new();

    // (block, is_cleanup): cleanup visit pops the scoped entries.
    let root = func.dom_tree.root();
    let mut stack: Vec<(BlockId, bool)> = vec![(root, false)];

    while let Some((bid, is_cleanup)) = stack.pop() {
        if is_cleanup {
            if let Some(log) = log_per_block.remove(&bid) {
                // Replay in reverse to restore state at scope entry.
                for mutation in log.into_iter().rev() {
                    apply_mutation_reverse(&mut equiv, mutation);
                }
            }
            continue;
        }

        // Schedule cleanup after children finish.
        stack.push((bid, true));

        let mut local_log: Vec<EquivMutation> = Vec::new();

        if let Some(block) = func.function.blocks.get(&bid) {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                // Step 1: rewrite inputs that have a known dominating
                // equivalent. Skip constants and self-equivalences.
                for (input_idx, raw) in insn.inputs.iter().enumerate() {
                    if raw.space == SpaceId::Const {
                        continue;
                    }
                    let Some(input_sv) = input_ssa(func, bid, insn_idx, input_idx) else {
                        continue;
                    };
                    let Some(&source) = equiv.get(&input_sv) else {
                        continue;
                    };
                    let source = resolve_chain(&equiv, source);
                    let new_ssa = if source.raw.space == SpaceId::Const {
                        None
                    } else {
                        source.ssa
                    };
                    if *raw != source.raw || Some(input_sv) != new_ssa {
                        rewrites.push(InputRewrite {
                            block: bid,
                            insn_idx,
                            input_idx,
                            new_input: source.raw,
                            new_ssa,
                        });
                    }
                }

                // Step 2: record a new COPY equivalence. Resolve the source
                // through any existing equivalence so chains collapse to their
                // ultimate origin in one pass.
                if insn.op == IrOp::Copy {
                    if let (Some(out), Some(&raw_src)) = (insn.output, insn.inputs.first()) {
                        if out.space != SpaceId::Const && out != raw_src {
                            let Some(output_sv) = output_ssa(func, bid, insn_idx) else {
                                continue;
                            };
                            let source_ssa = if raw_src.space == SpaceId::Const {
                                None
                            } else {
                                let Some(sv) = input_ssa(func, bid, insn_idx, 0) else {
                                    continue;
                                };
                                Some(sv)
                            };
                            let source = resolve_chain(
                                &equiv,
                                CopySource {
                                    raw: raw_src,
                                    ssa: source_ssa,
                                },
                            );
                            if source.raw != out || source.ssa != Some(output_sv) {
                                let prev = equiv.insert(output_sv, source);
                                local_log.push(EquivMutation::Inserted {
                                    key: output_sv,
                                    previous: prev,
                                });
                            }
                        }
                    }
                }

                let _ = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output));
            }
        }

        log_per_block.insert(bid, local_log);

        // Push children; reverse so left-most child is processed first.
        let children = func.dom_tree.children(bid);
        for &child in children.iter().rev() {
            stack.push((child, false));
        }
    }

    rewrites
}

/// One mutation applied to `equiv` while visiting a block.  Stored so the
/// cleanup pass can undo it precisely when leaving the dominator subtree.
#[derive(Clone, Debug)]
enum EquivMutation {
    /// `equiv.insert(key, _)` — restore by either re-inserting `previous`
    /// or removing `key` if there was no previous binding.
    Inserted {
        key: SsaVarnode,
        previous: Option<CopySource>,
    },
}

fn apply_mutation_reverse(equiv: &mut BTreeMap<SsaVarnode, CopySource>, m: EquivMutation) {
    match m {
        EquivMutation::Inserted { key, previous } => match previous {
            Some(prev) => {
                equiv.insert(key, prev);
            }
            None => {
                equiv.remove(&key);
            }
        },
    }
}

/// Chase `v` through the equivalence map until we reach a varnode with no
/// further equivalence.  Bounded by map size to defeat any pathological
/// cycles (none should exist after `kill_for_def`, but be safe).
fn resolve_chain(equiv: &BTreeMap<SsaVarnode, CopySource>, start: CopySource) -> CopySource {
    let mut current = start;
    let limit = equiv.len();
    let mut depth = 0;
    while let Some(source_sv) = current.ssa {
        let Some(&next) = equiv.get(&source_sv) else {
            break;
        };
        if depth >= limit || next == current {
            break;
        }
        current = next;
        depth += 1;
    }
    current
}

/// Apply all collected input rewrites to the function in place.
fn apply_rewrites(func: &mut SsaFunction, rewrites: Vec<InputRewrite>) {
    for rw in rewrites {
        let block = match func.function.blocks.get_mut(&rw.block) {
            Some(b) => b,
            None => continue,
        };
        let insn = match block.insns.get_mut(rw.insn_idx) {
            Some(i) => i,
            None => continue,
        };
        let Some(input) = insn.inputs.get_mut(rw.input_idx) else {
            continue;
        };
        if *input != rw.new_input {
            *input = rw.new_input;
        }

        let key = (rw.block, rw.insn_idx, VarnodeSlot::Input(rw.input_idx));
        if rw.new_input.space == SpaceId::Const {
            func.var_map.remove(&key);
        } else if let Some(new_ssa) = rw.new_ssa {
            func.var_map.insert(key, new_ssa);
        } else {
            func.var_map.remove(&key);
        }
    }
}

fn input_ssa(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .copied()
}

fn output_ssa(func: &SsaFunction, bid: BlockId, insn_idx: usize) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Output))
        .copied()
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

    /// Cross-block: BB0 defines `v3 = COPY a`; BB1 (dominated by BB0) uses
    /// `v3`. After the pass the use of v3 in BB1 must read `a` directly.
    #[test]
    fn test_global_copy_prop_dominates() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let cond = Varnode::reg(16, 1);
        let v3 = Varnode::unique(0, 4);
        let v7 = Varnode::unique(16, 4);

        let mut func = Function::new("dom_yes", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, v3, smallvec![a], 0x2000));
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
            smallvec![v3, b],
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
        let changed = GlobalCopyPropPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(
            changed,
            "BB0 dominates BB1; v3 use in BB1 must be rewritten to a"
        );

        let bb1_after = &ssa.function.blocks[&BlockId(1)];
        assert_eq!(bb1_after.insns[0].op, IrOp::IntAdd);
        assert_eq!(
            bb1_after.insns[0].inputs[0], a,
            "use of v3 in dominated BB1 must propagate to a"
        );
        assert_eq!(bb1_after.insns[0].inputs[1], b);
    }

    /// Sibling blocks: BB1 defines a COPY but does not dominate BB2, so
    /// BB2's use of the destination must NOT be rewritten.
    #[test]
    fn test_global_copy_prop_no_dominance() {
        let a = Varnode::reg(0, 4);
        let cond = Varnode::reg(16, 1);
        let v3 = Varnode::unique(0, 4);

        let mut func = Function::new("dom_no", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x3000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::with_output(IrOp::Copy, v3, smallvec![a], 0x3010));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x3014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        // BB2 uses v3 but BB1 does not dominate BB2.  The pass must not
        // propagate `a` here — v3 may be uninitialised on this path.
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v3], 0x3020));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let _ = GlobalCopyPropPass
            .run(&mut ssa)
            .expect("pass should succeed");

        // v3 in BB2 must still be v3 (BB1 does not dominate BB2).
        let bb2_after = &ssa.function.blocks[&BlockId(2)];
        assert_eq!(
            bb2_after.insns[0].inputs[0], v3,
            "BB2's use of v3 must not be rewritten — BB1 doesn't dominate BB2"
        );
    }

    /// Chains across blocks: BB0 has `v3 = COPY a`; BB1 (dominated) has
    /// `v7 = COPY v3`; BB2 (dominated by BB1) uses `v7`. The use must
    /// resolve all the way back to `a`.
    #[test]
    fn test_global_copy_prop_chain_across_blocks() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = Varnode::unique(0, 4);
        let v7 = Varnode::unique(16, 4);
        let v11 = Varnode::unique(32, 4);

        let mut func = Function::new("chain", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, v3, smallvec![a], 0x4000));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x4004));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::with_output(IrOp::Copy, v7, smallvec![v3], 0x4010));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x4014));
        bb1.successors = smallvec![BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v11,
            smallvec![v7, b],
            0x4020,
        ));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v11], 0x4024));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let mut ssa = build_ssa(func);
        let changed = GlobalCopyPropPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let bb2_after = &ssa.function.blocks[&BlockId(2)];
        assert_eq!(
            bb2_after.insns[0].inputs[0], a,
            "v7 → v3 → a chain must collapse to a in the dominated use"
        );
    }

    /// A pre-loop copy to a register base must not rewrite the loop-header
    /// phi's use of that same raw register. The phi is a distinct SSA value
    /// even though its raw base is still `r0`.
    #[test]
    fn test_global_copy_prop_preserves_loop_phi_register_use() {
        let r0 = Varnode::reg(0, 4);
        let cond = Varnode::reg(16, 1);
        let next = Varnode::unique(0, 4);
        let c0 = Varnode::constant(0, 4);
        let c2 = Varnode::constant(2, 4);

        let mut func = Function::new("loop_phi", BlockId(0), 0x4500);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, r0, smallvec![c0], 0x4500));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x4504));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            next,
            smallvec![r0, c2],
            0x4510,
        ));
        bb1.insns
            .push(IrInsn::with_output(IrOp::Copy, r0, smallvec![next], 0x4514));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x4510, 8), cond],
            0x4518,
        ));
        bb1.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![r0], 0x4520));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let mut ssa = build_ssa(func);
        let add_input_key = (BlockId(1), 0, VarnodeSlot::Input(0));
        let phi_input = ssa.var_map[&add_input_key];

        let _ = GlobalCopyPropPass
            .run(&mut ssa)
            .expect("pass should succeed");

        let bb1_after = &ssa.function.blocks[&BlockId(1)];
        assert_eq!(bb1_after.insns[0].op, IrOp::IntAdd);
        assert_eq!(
            bb1_after.insns[0].inputs[0], r0,
            "loop phi use must not be rewritten to the pre-loop constant"
        );
        assert_eq!(bb1_after.insns[0].inputs[1], c2);
        assert_eq!(
            ssa.var_map[&add_input_key], phi_input,
            "input SSA mapping must remain the loop-header phi"
        );
    }

    /// Pass is a no-op when there are no COPY instructions.
    #[test]
    fn test_global_copy_prop_no_copies() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = Varnode::unique(0, 4);

        let mut func = Function::new("nocopy", BlockId(0), 0x5000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v3,
            smallvec![a, b],
            0x5000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v3], 0x5004));
        func.insert_block(bb0);

        let mut ssa = build_ssa(func);
        let changed = GlobalCopyPropPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed, "no COPYs => nothing to propagate");
    }

    /// Single block: equivalent to local copy propagation.  This guarantees
    /// the pass at least matches local behaviour when there's only one
    /// block in the dominator tree.
    #[test]
    fn test_global_copy_prop_single_block() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(8, 4);
        let v3 = Varnode::unique(0, 4);
        let v7 = Varnode::unique(16, 4);

        let mut func = Function::new("single", BlockId(0), 0x6000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, v3, smallvec![a], 0x6000));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v7,
            smallvec![v3, b],
            0x6004,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![v7], 0x6008));
        func.insert_block(bb0);

        let mut ssa = build_ssa(func);
        let changed = GlobalCopyPropPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let bb0 = &ssa.function.blocks[&BlockId(0)];
        assert_eq!(bb0.insns[1].inputs[0], a);
    }
}
