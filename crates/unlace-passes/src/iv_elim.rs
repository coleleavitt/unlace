//! Induction-Variable Elimination.
//!
//! Replaces derived induction variables of the form `j = i * c` (where
//! `i` is a loop's basic IV and `c` is a loop-invariant constant) with
//! their own canonical IV computed by addition each iteration. The
//! original `IntMult` becomes a `Copy` of the new IV so all downstream
//! uses keep working.
//!
//! Conservative MVP — assumes a preheader already exists (LICM normally
//! creates one before this pass runs). Loops without a preheader are
//! skipped.

use smallvec::smallvec;

use unlace_ir::ssa::{PhiNode, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::licm::find_natural_loops;
use crate::pass::{Pass, PassError};

const MAX_INNER_ITERS: usize = 3;

#[derive(Default)]
pub struct IvElimPass;

impl Pass for IvElimPass {
    fn name(&self) -> &str {
        "iv-elim"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut any = false;
        for _ in 0..MAX_INNER_ITERS {
            let loops = find_natural_loops(func);
            if loops.is_empty() {
                break;
            }
            let mut changed = false;
            for nat in loops {
                let header = nat.header;
                let body: Vec<BlockId> = nat.body.iter().copied().collect();
                let preheader = match find_unique_preheader(func, header, &body) {
                    Some(p) => p,
                    None => continue,
                };
                let basic_ivs: Vec<_> = detect_basic_ivs(func, header, &body)
                    .into_iter()
                    .filter(|iv| iv.latch_block != header)
                    .collect();
                if basic_ivs.is_empty() {
                    continue;
                }
                let derived = collect_derived_ivs(func, &body, &basic_ivs);
                for d in derived {
                    if rewrite_derived_iv(func, header, preheader, &d) {
                        changed = true;
                        any = true;
                    }
                }
            }
            if !changed {
                break;
            }
        }
        Ok(any)
    }
}

fn find_unique_preheader(func: &SsaFunction, header: BlockId, body: &[BlockId]) -> Option<BlockId> {
    let mut outside: Vec<BlockId> = func
        .cfg
        .predecessors(header)
        .into_iter()
        .filter(|p| !body.contains(p))
        .filter(|p| *p != func.cfg.exit_block() && *p != func.cfg.unknown_block())
        .collect();
    outside.sort();
    outside.dedup();
    if outside.len() == 1 {
        Some(outside[0])
    } else {
        None
    }
}

#[derive(Clone, Debug)]
pub(crate) struct BasicIv {
    pub phi_output: SsaVarnode,
    pub init_sv: SsaVarnode,
    pub step: i64,
    pub latch_block: BlockId,
}

pub(crate) fn detect_basic_ivs(
    func: &SsaFunction,
    header: BlockId,
    body: &[BlockId],
) -> Vec<BasicIv> {
    let mut out = Vec::new();
    let phis = match func.phi_map.get(&header) {
        Some(p) => p,
        None => return out,
    };
    for phi in phis {
        let Some((init_sv, latch_pred, back_sv)) = phi
            .inputs
            .iter()
            .filter(|(pred, _)| body.contains(pred))
            .find_map(|&(latch_pred, back_sv)| {
                let init_sv = phi
                    .inputs
                    .iter()
                    .find(|(pred, _)| !body.contains(pred))
                    .map(|(_, sv)| *sv)?;
                Some((init_sv, latch_pred, back_sv))
            })
        else {
            continue;
        };
        let Some((bid, idx, op, inputs_const_step)) = find_def_with_step(func, back_sv, body)
        else {
            continue;
        };
        if op != IrOp::IntAdd {
            continue;
        }
        let step = inputs_const_step;
        if step == i64::MIN {
            continue;
        }
        // Confirm input(0) of that IntAdd is the phi output.
        let input0_sv = func
            .var_map
            .get(&(bid, idx, VarnodeSlot::Input(0)))
            .copied();
        if input0_sv != Some(phi.output) {
            continue;
        }
        out.push(BasicIv {
            phi_output: phi.output,
            init_sv,
            step,
            latch_block: latch_pred,
        });
    }
    out
}

/// Find the (block, idx, op) defining `sv`, plus the constant step if
/// the instruction is `IntAdd(_, const)`. Returns `i64::MIN` for step
/// when input(1) isn't a constant.
fn find_def_with_step(
    func: &SsaFunction,
    sv: SsaVarnode,
    body: &[BlockId],
) -> Option<(BlockId, usize, IrOp, i64)> {
    find_def_with_step_inner(func, sv, body, 4)
}

fn find_def_with_step_inner(
    func: &SsaFunction,
    sv: SsaVarnode,
    body: &[BlockId],
    depth: usize,
) -> Option<(BlockId, usize, IrOp, i64)> {
    for ((bid, idx, slot), v) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) {
            continue;
        }
        if *v != sv {
            continue;
        }
        if !body.contains(bid) {
            return None;
        }
        let block = func.function.blocks.get(bid)?;
        let insn = block.insns.get(*idx)?;
        if depth > 0 && matches!(insn.op, IrOp::Copy | IrOp::Cast) && insn.inputs.len() == 1 {
            let input_sv = func
                .var_map
                .get(&(*bid, *idx, VarnodeSlot::Input(0)))
                .copied()?;
            return find_def_with_step_inner(func, input_sv, body, depth - 1);
        }
        let step = if insn.inputs.len() == 2 && insn.inputs[1].space == SpaceId::Const {
            insn.inputs[1].offset as i64
        } else {
            i64::MIN
        };
        return Some((*bid, *idx, insn.op, step));
    }
    None
}

#[derive(Clone, Debug)]
struct DerivedIv {
    block: BlockId,
    idx: usize,
    output_sv: SsaVarnode,
    iv: BasicIv,
    multiplier: i64,
}

fn collect_derived_ivs(
    func: &SsaFunction,
    body: &[BlockId],
    basic_ivs: &[BasicIv],
) -> Vec<DerivedIv> {
    let mut out = Vec::new();
    for &bid in body {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => continue,
        };
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::IntMult {
                continue;
            }
            if insn.inputs.len() != 2 {
                continue;
            }
            if insn.inputs[1].space != SpaceId::Const {
                continue;
            }
            let in0 = match func.var_map.get(&(bid, idx, VarnodeSlot::Input(0))) {
                Some(sv) => *sv,
                None => continue,
            };
            let iv = match basic_ivs.iter().find(|iv| iv.phi_output == in0) {
                Some(iv) => iv.clone(),
                None => continue,
            };
            let output_sv = match func.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                Some(sv) => *sv,
                None => continue,
            };
            out.push(DerivedIv {
                block: bid,
                idx,
                output_sv,
                iv,
                multiplier: insn.inputs[1].offset as i64,
            });
        }
    }
    out
}

fn fresh_version(func: &SsaFunction, base: Varnode) -> u32 {
    let mut max_v = 0u32;
    for sv in func.var_map.values() {
        if sv.base == base {
            max_v = max_v.max(sv.version + 1);
        }
    }
    for phis in func.phi_map.values() {
        for phi in phis {
            if phi.output.base == base {
                max_v = max_v.max(phi.output.version + 1);
            }
            for (_, sv) in &phi.inputs {
                if sv.base == base {
                    max_v = max_v.max(sv.version + 1);
                }
            }
        }
    }
    max_v
}

/// Rewrite `j = IntMult(i, c)` into a derived IV with its own phi.
/// Returns `true` on success.
fn rewrite_derived_iv(
    func: &mut SsaFunction,
    header: BlockId,
    preheader: BlockId,
    d: &DerivedIv,
) -> bool {
    let base = d.output_sv.base;
    let v_init = fresh_version(func, base);
    let init_sv = SsaVarnode {
        base,
        version: v_init,
    };
    let v_iv = v_init + 1;
    let iv_sv = SsaVarnode {
        base,
        version: v_iv,
    };
    let v_next = v_init + 2;
    let next_sv = SsaVarnode {
        base,
        version: v_next,
    };

    let step_j = d.iv.step.wrapping_mul(d.multiplier);
    let mult_const = Varnode::constant(d.multiplier as u64, base.size);
    let step_const = Varnode::constant(step_j as u64, base.size);

    // Insert preheader IntMult(init_i, c) -> init_sv before its terminator.
    let pre_block = match func.function.blocks.get_mut(&preheader) {
        Some(b) => b,
        None => return false,
    };
    let pre_term_idx = pre_block.insns.len().saturating_sub(1);
    let init_i_varnode = d.iv.init_sv.base;
    let pre_insn = IrInsn::with_output(
        IrOp::IntMult,
        base,
        smallvec![init_i_varnode, mult_const],
        pre_block.insns.last().map_or(0, |i| i.addr),
    );
    // Shift var_map entries at pre_term_idx down by 1.
    shift_var_map(func, preheader, pre_term_idx, 1);
    let pre_block = func.function.blocks.get_mut(&preheader).unwrap();
    pre_block.insns.insert(pre_term_idx, pre_insn);
    func.var_map
        .insert((preheader, pre_term_idx, VarnodeSlot::Output), init_sv);
    func.var_map.insert(
        (preheader, pre_term_idx, VarnodeSlot::Input(0)),
        d.iv.init_sv,
    );

    // Insert latch IntAdd(iv_sv, step_const) -> next_sv before terminator.
    let latch_block = match func.function.blocks.get_mut(&d.iv.latch_block) {
        Some(b) => b,
        None => return false,
    };
    let latch_term_idx = latch_block.insns.len().saturating_sub(1);
    let latch_insn = IrInsn::with_output(
        IrOp::IntAdd,
        base,
        smallvec![base, step_const],
        latch_block.insns.last().map_or(0, |i| i.addr),
    );
    shift_var_map(func, d.iv.latch_block, latch_term_idx, 1);
    let latch_block = func.function.blocks.get_mut(&d.iv.latch_block).unwrap();
    latch_block.insns.insert(latch_term_idx, latch_insn);
    func.var_map.insert(
        (d.iv.latch_block, latch_term_idx, VarnodeSlot::Output),
        next_sv,
    );
    func.var_map.insert(
        (d.iv.latch_block, latch_term_idx, VarnodeSlot::Input(0)),
        iv_sv,
    );

    // Add phi to header: iv_sv = phi((preheader, init_sv), (latch, next_sv)).
    let phi = PhiNode {
        output: iv_sv,
        inputs: vec![(preheader, init_sv), (d.iv.latch_block, next_sv)],
    };
    func.phi_map.entry(header).or_default().push(phi);

    // Rewrite original IntMult to Copy(iv_sv).
    if let Some(block) = func.function.blocks.get_mut(&d.block) {
        if let Some(insn) = block.insns.get_mut(d.idx) {
            insn.op = IrOp::Copy;
            insn.inputs = smallvec![base];
        }
    }
    // var_map: keep Output, replace Input(0), drop Input(1).
    func.var_map
        .insert((d.block, d.idx, VarnodeSlot::Input(0)), iv_sv);
    func.var_map
        .remove(&(d.block, d.idx, VarnodeSlot::Input(1)));
    true
}

/// Shift all var_map entries with index >= `from` in `bid` up by `delta`.
fn shift_var_map(func: &mut SsaFunction, bid: BlockId, from: usize, delta: usize) {
    let keys: Vec<(BlockId, usize, VarnodeSlot)> = func
        .var_map
        .keys()
        .filter(|(b, idx, _)| *b == bid && *idx >= from)
        .cloned()
        .collect();
    let mut moves: Vec<((BlockId, usize, VarnodeSlot), SsaVarnode)> = Vec::new();
    for k in keys {
        let v = func.var_map.remove(&k).unwrap();
        moves.push(((k.0, k.1 + delta, k.2), v));
    }
    for (k, v) in moves {
        func.var_map.insert(k, v);
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// 4-block loop:
    ///   B0 (preheader): i_init = const(0); branch B1
    ///   B1 (header): /* phi i */; j = i * 4; cbranch B2, B3
    ///   B2 (latch): i_next = i + 1; branch B1
    ///   B3 (exit): return
    /// Build via build_ssa so phis materialize for `i`.
    fn build_loop(extra_in_body: Option<IrInsn>) -> SsaFunction {
        let i = Varnode::reg(0, 4);
        let j = Varnode::reg(8, 4);
        let cond = Varnode::reg(64, 1);

        let mut func = Function::new("ivtest", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            i,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1004));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            j,
            smallvec![i, Varnode::constant(4, 4)],
            0x1100,
        ));
        if let Some(insn) = extra_in_body {
            b1.insns.push(insn);
        }
        b1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x110C,
        ));
        b1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            i,
            smallvec![i, Varnode::constant(1, 4)],
            0x1110,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1114));
        b2.successors = smallvec![BlockId(1)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![j], 0x1200));

        func.insert_block(b0);
        func.insert_block(b1);
        func.insert_block(b2);
        func.insert_block(b3);

        build_ssa(func)
    }

    fn build_self_loop(extra_in_body: Option<IrInsn>) -> SsaFunction {
        let i = Varnode::reg(0, 4);
        let j = Varnode::reg(8, 4);
        let cond = Varnode::reg(64, 1);

        let mut func = Function::new("ivself", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            i,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1004));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            j,
            smallvec![i, Varnode::constant(4, 4)],
            0x1100,
        ));
        if let Some(insn) = extra_in_body {
            b1.insns.push(insn);
        }
        b1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            i,
            smallvec![i, Varnode::constant(1, 4)],
            0x1108,
        ));
        b1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            0x110C,
        ));
        b1.successors = smallvec![BlockId(1), BlockId(2)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![j], 0x1200));

        func.insert_block(b0);
        func.insert_block(b1);
        func.insert_block(b2);

        build_ssa(func)
    }

    #[test]
    fn iv_elim_replaces_basic_mul_iv() {
        let mut ssa = build_loop(None);
        let phi_count_before = ssa.phi_map.get(&BlockId(1)).map_or(0, |v| v.len());
        let _changed = IvElimPass.run(&mut ssa).expect("ok");

        let phi_count_after = ssa.phi_map.get(&BlockId(1)).map_or(0, |v| v.len());
        assert!(
            phi_count_after > phi_count_before,
            "expected new phi for derived IV (before={}, after={})",
            phi_count_before,
            phi_count_after,
        );

        // Original IntMult should now be a Copy.
        let header = &ssa.function.blocks[&BlockId(1)];
        let mult_still = header
            .insns
            .iter()
            .any(|i| i.op == IrOp::IntMult && i.output == Some(Varnode::reg(8, 4)));
        let copy_present = header
            .insns
            .iter()
            .any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 4)));
        assert!(!mult_still, "IntMult on j should have been rewritten");
        assert!(copy_present, "expected a Copy producing j");
    }

    #[test]
    fn iv_elim_skips_self_loop_basic_iv() {
        let mut ssa = build_self_loop(None);
        let changed = IvElimPass.run(&mut ssa).expect("ok");
        assert!(!changed, "self-loop IVs should be left intact");

        let header = &ssa.function.blocks[&BlockId(1)];
        assert!(
            header
                .insns
                .iter()
                .any(|i| i.op == IrOp::IntMult && i.output == Some(Varnode::reg(8, 4))),
            "self-loop IntMult should remain in the header"
        );
    }

    #[test]
    fn iv_elim_keeps_unrelated_var() {
        let extra_a = Varnode::reg(100, 4);
        let extra_b = Varnode::reg(108, 4);
        let k = Varnode::reg(116, 4);
        // k = extra_a + extra_b — both loop-invariant, but additive (not the IV pattern).
        let unrelated = IrInsn::with_output(IrOp::IntAdd, k, smallvec![extra_a, extra_b], 0x1104);

        let mut ssa = build_loop(Some(unrelated));
        let _ = IvElimPass.run(&mut ssa).expect("ok");

        let header = &ssa.function.blocks[&BlockId(1)];
        let unrelated_present = header
            .insns
            .iter()
            .any(|i| i.op == IrOp::IntAdd && i.output == Some(k));
        assert!(unrelated_present, "unrelated IntAdd must be untouched");
    }
}
