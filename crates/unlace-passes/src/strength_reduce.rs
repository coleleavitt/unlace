//! Strength reduction for variable-multiplier induction patterns.
//!
//! Sister to `iv_elim`: handles `j = i * x_sv` where `x_sv` is loop-invariant
//! but variable (not a compile-time constant). Replaces with an additive IV
//! whose step is precomputed once in the preheader.
//!
//! Conservative MVP — assumes preheader exists.

use smallvec::smallvec;

use unlace_ir::ssa::{PhiNode, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::iv_elim::BasicIv;
use crate::licm::find_natural_loops;
use crate::pass::{Pass, PassError};

const MAX_INNER_ITERS: usize = 3;

#[derive(Default)]
pub struct StrengthReducePass;

impl Pass for StrengthReducePass {
    fn name(&self) -> &str {
        "strength-reduce"
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
                let basic_ivs = crate::iv_elim::detect_basic_ivs(func, header, &body);
                if basic_ivs.is_empty() {
                    continue;
                }
                let derived = collect_var_derived(func, &body, &basic_ivs);
                for d in derived {
                    if rewrite_var_iv(func, header, preheader, &d) {
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
struct VarDerivedIv {
    block: BlockId,
    idx: usize,
    output_sv: SsaVarnode,
    iv: BasicIv,
    /// Loop-invariant variable multiplier (input(1) of the IntMult).
    multiplier_varnode: Varnode,
}

fn collect_var_derived(
    func: &SsaFunction,
    body: &[BlockId],
    basic_ivs: &[BasicIv],
) -> Vec<VarDerivedIv> {
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
            // Second input must NOT be a constant (that's iv_elim's job).
            if insn.inputs[1].space == SpaceId::Const {
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
            // Multiplier must be loop-invariant.
            let in1 = match func.var_map.get(&(bid, idx, VarnodeSlot::Input(1))) {
                Some(sv) => *sv,
                None => continue,
            };
            if !is_invariant(func, in1, body) {
                continue;
            }
            let output_sv = match func.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                Some(sv) => *sv,
                None => continue,
            };
            out.push(VarDerivedIv {
                block: bid,
                idx,
                output_sv,
                iv,
                multiplier_varnode: insn.inputs[1],
            });
        }
    }
    out
}

fn is_invariant(func: &SsaFunction, sv: SsaVarnode, body: &[BlockId]) -> bool {
    for ((bid, _idx, slot), v) in &func.var_map {
        if matches!(slot, VarnodeSlot::Output) && *v == sv {
            return !body.contains(bid);
        }
    }
    for (phi_block, phis) in &func.phi_map {
        for phi in phis {
            if phi.output == sv {
                return !body.contains(phi_block);
            }
        }
    }
    true
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

fn rewrite_var_iv(
    func: &mut SsaFunction,
    header: BlockId,
    preheader: BlockId,
    d: &VarDerivedIv,
) -> bool {
    let base = d.output_sv.base;
    let v_init = fresh_version(func, base);
    let init_sv = SsaVarnode {
        base,
        version: v_init,
    };
    let v_step = v_init + 1;
    let step_sv = SsaVarnode {
        base,
        version: v_step,
    };
    let v_iv = v_init + 2;
    let iv_sv = SsaVarnode {
        base,
        version: v_iv,
    };
    let v_next = v_init + 3;
    let next_sv = SsaVarnode {
        base,
        version: v_next,
    };

    let init_i_varnode = d.iv.init_sv.base;
    let mult_varnode = d.multiplier_varnode;

    // Preheader: 2 new IntMults — init_j = init_i * x; step_j = const(step) * x.
    let pre_term_idx = match func.function.blocks.get(&preheader) {
        Some(b) => b.insns.len().saturating_sub(1),
        None => return false,
    };
    let pre_addr = func
        .function
        .blocks
        .get(&preheader)
        .and_then(|b| b.insns.last().map(|i| i.addr))
        .unwrap_or(0);

    // Insert at pre_term_idx: init_sv = IntMult(init_i, x)
    shift_var_map(func, preheader, pre_term_idx, 2);
    let pre = func.function.blocks.get_mut(&preheader).unwrap();
    pre.insns.insert(
        pre_term_idx,
        IrInsn::with_output(
            IrOp::IntMult,
            base,
            smallvec![init_i_varnode, mult_varnode],
            pre_addr,
        ),
    );
    pre.insns.insert(
        pre_term_idx + 1,
        IrInsn::with_output(
            IrOp::IntMult,
            base,
            smallvec![Varnode::constant(d.iv.step as u64, base.size), mult_varnode],
            pre_addr,
        ),
    );
    func.var_map
        .insert((preheader, pre_term_idx, VarnodeSlot::Output), init_sv);
    func.var_map.insert(
        (preheader, pre_term_idx, VarnodeSlot::Input(0)),
        d.iv.init_sv,
    );
    func.var_map
        .insert((preheader, pre_term_idx + 1, VarnodeSlot::Output), step_sv);

    // Latch: next_sv = IntAdd(iv_sv, step_sv)
    let latch_term_idx = match func.function.blocks.get(&d.iv.latch_block) {
        Some(b) => b.insns.len().saturating_sub(1),
        None => return false,
    };
    let latch_addr = func
        .function
        .blocks
        .get(&d.iv.latch_block)
        .and_then(|b| b.insns.last().map(|i| i.addr))
        .unwrap_or(0);
    shift_var_map(func, d.iv.latch_block, latch_term_idx, 1);
    let latch = func.function.blocks.get_mut(&d.iv.latch_block).unwrap();
    latch.insns.insert(
        latch_term_idx,
        IrInsn::with_output(IrOp::IntAdd, base, smallvec![base, base], latch_addr),
    );
    func.var_map.insert(
        (d.iv.latch_block, latch_term_idx, VarnodeSlot::Output),
        next_sv,
    );
    func.var_map.insert(
        (d.iv.latch_block, latch_term_idx, VarnodeSlot::Input(0)),
        iv_sv,
    );
    func.var_map.insert(
        (d.iv.latch_block, latch_term_idx, VarnodeSlot::Input(1)),
        step_sv,
    );

    // Header phi.
    let phi = PhiNode {
        output: iv_sv,
        inputs: vec![(preheader, init_sv), (d.iv.latch_block, next_sv)],
    };
    func.phi_map.entry(header).or_default().push(phi);

    // Original IntMult → Copy(iv_sv).
    if let Some(block) = func.function.blocks.get_mut(&d.block) {
        if let Some(insn) = block.insns.get_mut(d.idx) {
            insn.op = IrOp::Copy;
            insn.inputs = smallvec![base];
        }
    }
    func.var_map
        .insert((d.block, d.idx, VarnodeSlot::Input(0)), iv_sv);
    func.var_map
        .remove(&(d.block, d.idx, VarnodeSlot::Input(1)));
    true
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    /// Build a loop where `j = i * x` and x comes from outside.
    fn build_var_mul_loop() -> SsaFunction {
        let i = Varnode::reg(0, 4);
        let j = Varnode::reg(8, 4);
        let x = Varnode::reg(16, 4);
        let cond = Varnode::reg(64, 1);

        let mut func = Function::new("srtest", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            i,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            x,
            smallvec![Varnode::constant(7, 4)],
            0x1004,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1008));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            j,
            smallvec![i, x],
            0x1100,
        ));
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
    fn strength_reduce_variable_multiplier() {
        let mut ssa = build_var_mul_loop();
        let pre = &ssa.function.blocks[&BlockId(0)];
        let pre_mult_before = pre.insns.iter().filter(|i| i.op == IrOp::IntMult).count();
        let phi_before = ssa.phi_map.get(&BlockId(1)).map_or(0, |v| v.len());

        let _ = StrengthReducePass.run(&mut ssa).expect("ok");

        let pre = &ssa.function.blocks[&BlockId(0)];
        let pre_mult_after = pre.insns.iter().filter(|i| i.op == IrOp::IntMult).count();
        assert!(
            pre_mult_after >= pre_mult_before + 2,
            "expected 2 new IntMults in preheader (before={}, after={})",
            pre_mult_before,
            pre_mult_after,
        );
        let phi_after = ssa.phi_map.get(&BlockId(1)).map_or(0, |v| v.len());
        assert!(phi_after > phi_before, "header phi count should grow");

        let header = &ssa.function.blocks[&BlockId(1)];
        let copy_present = header
            .insns
            .iter()
            .any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(8, 4)));
        let mult_still = header
            .insns
            .iter()
            .any(|i| i.op == IrOp::IntMult && i.output == Some(Varnode::reg(8, 4)));
        assert!(copy_present, "j should now be a Copy");
        assert!(!mult_still, "original IntMult should have been replaced");
    }
}
