//! Copy propagation pass: replace uses of `v2 = COPY v1` with `v1`.
//!
//! ## Alias-category barrier
//!
//! `LOAD` instructions whose `category` is
//! [`unlace_ir::AliasCategory::Mmio`] or
//! [`unlace_ir::AliasCategory::Volatile`] act as a propagation barrier:
//! we must not collapse a `COPY` whose source (or destination) is the
//! output of a preserved LOAD, because each downstream use must observe
//! the explicit memory access. Each preserved LOAD found bumps the
//! global [`unlace_ir::alias::record_preserved`] counter.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct CopyPropagationPass;

impl Pass for CopyPropagationPass {
    fn name(&self) -> &str {
        "copy-propagation"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let preserved_load_outputs = collect_preserved_load_outputs(func);
        let input_rewrites = collect_input_rewrites(func, &preserved_load_outputs);
        if input_rewrites.is_empty() {
            return Ok(false);
        }

        Ok(apply_input_rewrites(func, input_rewrites))
    }
}

/// Outputs of `LOAD` instructions whose [`unlace_ir::AliasCategory`] is
/// preserved (`Mmio` or `Volatile`). Copy-prop must never resolve any
/// varnode equivalent to one of these to its source — the LOAD has
/// observable side-effects that downstream accesses must not skip over.
///
/// Each preserved LOAD found also bumps the global preservation
/// counter via [`unlace_ir::alias::record_preserved`].
fn collect_preserved_load_outputs(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut set = BTreeSet::new();
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load {
                continue;
            }
            if let (Some(c), Some(out)) = (insn.category, insn.output)
                && c.is_preserved()
            {
                if let Some(out_ssa) = output_ssa(func, bid, insn_idx) {
                    set.insert(out_ssa);
                } else {
                    set.insert(SsaVarnode {
                        base: out,
                        version: 0,
                    });
                }
                unlace_ir::alias::record_preserved();
            }
        }
    }
    set
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
struct CopySource {
    raw: Varnode,
    ssa: Option<SsaVarnode>,
}

/// One input slot to rewrite.
#[derive(Clone, Debug)]
struct InputRewrite {
    block: unlace_ir::BlockId,
    insn_idx: usize,
    input_idx: usize,
    new_input: Varnode,
    new_ssa: Option<SsaVarnode>,
}

fn input_ssa(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    insn_idx: usize,
    input_idx: usize,
) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .copied()
}

fn output_ssa(func: &SsaFunction, bid: unlace_ir::BlockId, insn_idx: usize) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Output))
        .copied()
}

fn collect_input_rewrites(
    func: &SsaFunction,
    preserved_load_outputs: &BTreeSet<SsaVarnode>,
) -> Vec<InputRewrite> {
    let mut rewrites = Vec::new();

    for (&bid, block) in &func.function.blocks {
        let mut active: BTreeMap<SsaVarnode, CopySource> = BTreeMap::new();
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            for (input_idx, &raw) in insn.inputs.iter().enumerate() {
                if is_propagation_barrier_input(insn, input_idx, raw) {
                    continue;
                }
                if raw.space == SpaceId::Const {
                    continue;
                }
                let Some(input_sv) = input_ssa(func, bid, insn_idx, input_idx) else {
                    continue;
                };
                let Some(&source) = active.get(&input_sv) else {
                    continue;
                };
                let source = resolve_active_source(&active, source);
                let new_ssa = if source.raw.space == SpaceId::Const {
                    None
                } else {
                    source.ssa
                };
                if raw != source.raw || Some(input_sv) != new_ssa {
                    rewrites.push(InputRewrite {
                        block: bid,
                        insn_idx,
                        input_idx,
                        new_input: source.raw,
                        new_ssa,
                    });
                }
            }

            if let Some(output) = insn.output {
                kill_active_for_def(&mut active, output);
            }

            if insn.op == IrOp::Copy {
                record_copy_equiv(
                    func,
                    bid,
                    insn_idx,
                    insn,
                    preserved_load_outputs,
                    &mut active,
                );
            }
        }
    }

    rewrites
}

fn is_propagation_barrier_input(insn: &unlace_ir::IrInsn, input_idx: usize, raw: Varnode) -> bool {
    (matches!(insn.op, IrOp::Call | IrOp::Callind) && input_idx > 0)
        || (matches!(insn.op, IrOp::Load | IrOp::Store) && input_idx == 1)
        || (insn.op == IrOp::Copy && input_idx == 0 && insn.output == Some(raw))
        || (insn.op == IrOp::Copy
            && input_idx == 0
            && insn.output.is_some_and(is_x86_64_call_arg_register))
        || (insn.op == IrOp::Copy
            && input_idx == 0
            && insn.output.is_some_and(is_x86_64_frame_register))
        || (matches!(insn.op, IrOp::IntAdd | IrOp::IntSub) && is_x86_64_frame_register(raw))
}

fn is_x86_64_call_arg_register(vn: Varnode) -> bool {
    vn.space == SpaceId::Register && matches!(vn.offset, 56 | 48 | 16 | 8 | 64 | 72)
}

fn is_x86_64_frame_register(vn: Varnode) -> bool {
    vn.space == SpaceId::Register && matches!(vn.offset, 32 | 40)
}

fn resolve_active_source(
    active: &BTreeMap<SsaVarnode, CopySource>,
    source: CopySource,
) -> CopySource {
    let mut current = source;
    let mut depth = 0usize;
    let limit = active.len();

    while let Some(source_ssa) = current.ssa {
        if depth >= limit {
            break;
        }
        let Some(&next) = active.get(&source_ssa) else {
            break;
        };
        if next == current {
            break;
        }
        current = next;
        depth += 1;
    }

    current
}

fn kill_active_for_def(active: &mut BTreeMap<SsaVarnode, CopySource>, def: Varnode) {
    if def.space == SpaceId::Const {
        return;
    }
    active.retain(|key, source| {
        key.base != def && source.raw != def && source.ssa.is_none_or(|ssa| ssa.base != def)
    });
}

fn record_copy_equiv(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    preserved_load_outputs: &BTreeSet<SsaVarnode>,
    active: &mut BTreeMap<SsaVarnode, CopySource>,
) {
    let (Some(output), Some(&source_raw)) = (insn.output, insn.inputs.first()) else {
        return;
    };
    if output.space == SpaceId::Const {
        return;
    }
    if output == source_raw {
        return;
    }
    if is_x86_64_frame_register(output) || is_x86_64_frame_register(source_raw) {
        return;
    }
    let Some(output_ssa) = output_ssa(func, bid, insn_idx) else {
        return;
    };
    if preserved_load_outputs.contains(&output_ssa) {
        return;
    }

    let source_ssa = if source_raw.space == SpaceId::Const {
        None
    } else {
        input_ssa(func, bid, insn_idx, 0)
    };
    if source_ssa.is_some_and(|ssa| preserved_load_outputs.contains(&ssa)) {
        return;
    }

    let source = resolve_active_source(
        active,
        CopySource {
            raw: source_raw,
            ssa: source_ssa,
        },
    );
    if source.raw != output || source.ssa != Some(output_ssa) {
        active.insert(output_ssa, source);
    }
}

fn apply_input_rewrites(func: &mut SsaFunction, rewrites: Vec<InputRewrite>) -> bool {
    let mut changed = false;

    for rw in rewrites {
        let Some(block) = func.function.blocks.get_mut(&rw.block) else {
            continue;
        };
        let Some(insn) = block.insns.get_mut(rw.insn_idx) else {
            continue;
        };
        let Some(input) = insn.inputs.get_mut(rw.input_idx) else {
            continue;
        };
        if *input != rw.new_input {
            *input = rw.new_input;
            changed = true;
        }

        let key = (rw.block, rw.insn_idx, VarnodeSlot::Input(rw.input_idx));
        if rw.new_input.space == SpaceId::Const {
            if func.var_map.remove(&key).is_some() {
                changed = true;
            }
        } else if let Some(new_ssa) = rw.new_ssa {
            if func.var_map.insert(key, new_ssa) != Some(new_ssa) {
                changed = true;
            }
        } else if func.var_map.remove(&key).is_some() {
            changed = true;
        }
    }

    changed
}

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

    #[test]
    fn test_copy_prop_simple() {
        let v1 = Varnode::reg(0, 4);
        let v2 = Varnode::unique(0, 4);
        let v3 = Varnode::unique(4, 4);

        let copy_insn = IrInsn::with_output(IrOp::Copy, v2, smallvec![v1], 0x1000);
        let use_insn = IrInsn::with_output(
            IrOp::IntAdd,
            v3,
            smallvec![v2, Varnode::constant(1, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![copy_insn, use_insn]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let add_insn = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[1];
        assert_eq!(add_insn.inputs[0], v1);
    }

    #[test]
    fn test_copy_prop_preserves_call_argument_inputs() {
        let rdi = Varnode::reg(56, 8);
        let loaded = Varnode::unique(0x1000, 8);
        let target = Varnode::constant(0x401000, 8);

        let mut ssa = make_single_block_ssa(vec![
            IrInsn::with_output(IrOp::Copy, rdi, smallvec![loaded], 0x1000),
            IrInsn::without_output(IrOp::Call, smallvec![target, rdi], 0x1004),
        ]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(
            !changed,
            "call argument inputs are a boundary for recovered ABI names"
        );

        let call = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[1];
        assert_eq!(call.inputs[0], target);
        assert_eq!(call.inputs[1], rdi);
    }

    #[test]
    fn test_copy_prop_chain() {
        let v1 = Varnode::reg(0, 4);
        let v2 = Varnode::unique(0, 4);
        let v3 = Varnode::unique(4, 4);
        let v4 = Varnode::unique(8, 4);

        let copy1 = IrInsn::with_output(IrOp::Copy, v2, smallvec![v1], 0x1000);
        let copy2 = IrInsn::with_output(IrOp::Copy, v3, smallvec![v2], 0x1004);
        let use_insn = IrInsn::with_output(
            IrOp::IntAdd,
            v4,
            smallvec![v3, Varnode::constant(1, 4)],
            0x1008,
        );

        let mut ssa = make_single_block_ssa(vec![copy1, copy2, use_insn]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let add_insn = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[2];
        assert_eq!(add_insn.inputs[0], v1, "v3 should resolve through v2 to v1");
    }

    #[test]
    fn test_copy_prop_preserves_ssa_only_renames() {
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);

        let seed = IrInsn::with_output(
            IrOp::IntAdd,
            u0,
            smallvec![Varnode::reg(32, 8), Varnode::constant(8, 8)],
            0x1000,
        );
        let rename = IrInsn::with_output(IrOp::Copy, u0, smallvec![u0], 0x1004);
        let use_insn = IrInsn::with_output(
            IrOp::IntAdd,
            u1,
            smallvec![u0, Varnode::constant(1, 8)],
            0x1008,
        );

        let mut ssa = make_single_block_ssa(vec![seed, rename, use_insn]);
        let before_input = ssa
            .var_map
            .get(&(BlockId(0), 1, VarnodeSlot::Input(0)))
            .copied();
        let before_use = ssa
            .var_map
            .get(&(BlockId(0), 2, VarnodeSlot::Input(0)))
            .copied();
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(
            !changed,
            "raw-identical COPYs are SSA version edges, not value simplifications"
        );
        assert_eq!(
            ssa.var_map
                .get(&(BlockId(0), 1, VarnodeSlot::Input(0)))
                .copied(),
            before_input
        );
        assert_eq!(
            ssa.var_map
                .get(&(BlockId(0), 2, VarnodeSlot::Input(0)))
                .copied(),
            before_use
        );
    }

    #[test]
    fn test_copy_prop_keeps_register_redefinitions_scoped() {
        let rsp = Varnode::reg(32, 8);
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let u2 = Varnode::unique(16, 8);

        let derive_stack_addr = IrInsn::with_output(
            IrOp::IntSub,
            u0,
            smallvec![rsp, Varnode::constant(8, 8)],
            0x1000,
        );
        let move_rsp = IrInsn::with_output(IrOp::Copy, rsp, smallvec![u0], 0x1004);
        let use_adjusted_rsp = IrInsn::with_output(
            IrOp::IntAdd,
            u1,
            smallvec![rsp, Varnode::constant(16, 8)],
            0x1008,
        );
        let clobber_rsp =
            IrInsn::with_output(IrOp::Copy, rsp, smallvec![Varnode::constant(0, 8)], 0x100C);
        let use_clobbered_rsp = IrInsn::with_output(
            IrOp::IntAdd,
            u2,
            smallvec![rsp, Varnode::constant(1, 8)],
            0x1010,
        );

        let mut ssa = make_single_block_ssa(vec![
            derive_stack_addr,
            move_rsp,
            use_adjusted_rsp,
            clobber_rsp,
            use_clobbered_rsp,
        ]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(
            !changed,
            "frame-register copies are stack-recovery boundaries"
        );

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(
            block.insns[0].inputs[0], rsp,
            "later rsp copies must not rewrite earlier rsp inputs"
        );
        assert_eq!(
            block.insns[2].inputs[0], rsp,
            "uses of RSP after frame-register writes must preserve the raw frame register"
        );
        assert_eq!(
            block.insns[4].inputs[0], rsp,
            "uses of RSP after frame-register writes must preserve the raw frame register"
        );

        let adjusted_input_ssa = ssa
            .var_map
            .get(&(BlockId(0), 2, VarnodeSlot::Input(0)))
            .expect("rewritten input keeps source SSA metadata");
        assert_eq!(adjusted_input_ssa.base, rsp);
        assert!(
            ssa.var_map
                .contains_key(&(BlockId(0), 4, VarnodeSlot::Input(0))),
            "unrewritten frame-register uses keep their SSA metadata"
        );
    }

    #[test]
    fn test_copy_prop_no_change() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);

        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }

    /// Barrier test: `v2 = LOAD<Volatile> addr ; v3 = COPY v2 ; use v3`.
    /// Copy-prop must NOT rewrite `use v3` to `use v2` because the
    /// COPY's source is the output of a preserved LOAD. (Even though
    /// the rewrite is semantically equivalent here, leaving the COPY in
    /// place keeps later passes from collapsing the volatile read.)
    #[test]
    fn test_copy_prop_volatile_load_barrier() {
        let addr = Varnode::reg(0, 8);
        let v_load = Varnode::unique(0, 8);
        let v_copy = Varnode::unique(8, 8);
        let v_use = Varnode::unique(16, 8);

        let mut load = IrInsn::with_output(IrOp::Load, v_load, smallvec![addr], 0x1000);
        load.category = Some(unlace_ir::AliasCategory::Volatile);
        let copy_insn = IrInsn::with_output(IrOp::Copy, v_copy, smallvec![v_load], 0x1004);
        let use_insn = IrInsn::with_output(
            IrOp::IntAdd,
            v_use,
            smallvec![v_copy, Varnode::constant(1, 8)],
            0x1008,
        );

        let mut ssa = make_single_block_ssa(vec![load, copy_insn, use_insn]);
        let before = unlace_ir::alias::preserved_count();
        let _ = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        let after = unlace_ir::alias::preserved_count();

        // The use must still reference v_copy — NOT v_load.
        let add_insn = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[2];
        assert_eq!(
            add_insn.inputs[0], v_copy,
            "volatile-LOAD barrier must keep COPY chain intact"
        );
        assert!(after > before, "preservation counter must have incremented");
    }
}
