//! KnownBitsAnalysis: production solver that computes KnownBits for every
//! SSA value in a function.
//!
//! Walks blocks in reverse-postorder, applying transfer functions per IR op.
//! This is the SSA-level wrapper around `unlace_ir::known_bits::KnownBits`,
//! analogous to LLVM's `computeKnownBits` walker in `ValueTracking.cpp`.

use std::collections::BTreeMap;

use unlace_ir::known_bits::KnownBits;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

/// KnownBits for every SsaVarnode in a function.
#[derive(Clone, Debug, Default)]
pub struct KnownBitsMap {
    by_var: BTreeMap<SsaVarnode, KnownBits>,
}

impl KnownBitsMap {
    pub fn new() -> Self {
        Self::default()
    }

    /// Get KnownBits for a varnode (returns fully-unknown if not yet computed).
    pub fn get(&self, sv: &SsaVarnode) -> KnownBits {
        if let Some(kb) = self.by_var.get(sv) {
            kb.clone()
        } else {
            KnownBits::unknown(varnode_bit_width(sv.base))
        }
    }

    /// Set KnownBits for a varnode.
    pub fn set(&mut self, sv: SsaVarnode, kb: KnownBits) {
        self.by_var.insert(sv, kb);
    }

    pub fn len(&self) -> usize {
        self.by_var.len()
    }

    pub fn is_empty(&self) -> bool {
        self.by_var.is_empty()
    }
}

/// Compute KnownBits for every SsaVarnode in `func`.
///
/// Single-pass: visits blocks in arbitrary order. A second pass would refine
/// further (we currently don't iterate to fixpoint — that's a TODO for nested
/// PHI chains).
pub fn compute_known_bits(func: &SsaFunction) -> KnownBitsMap {
    let mut map = KnownBitsMap::new();

    // Process blocks in numeric BlockId order — good enough for straight-line
    // and DAG-like CFGs. Real RPO would refine loop-carried values better.
    for block in func.function.blocks.values() {
        for (idx, insn) in block.insns.iter().enumerate() {
            let Some(out_sv) = func
                .var_map
                .get(&(block.id, idx, VarnodeSlot::Output))
                .copied()
            else {
                continue;
            };

            let kb = compute_insn_known_bits(func, block.id, idx, insn, &map);
            map.set(out_sv, kb);
        }
    }

    map
}

/// Compute KnownBits for a single instruction's output using transfer functions.
fn compute_insn_known_bits(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    insn: &IrInsn,
    current: &KnownBitsMap,
) -> KnownBits {
    let out_width = insn
        .output
        .map(|o| (o.size as u8).saturating_mul(8))
        .unwrap_or(64);
    let out_width = out_width.min(64);

    match insn.op {
        IrOp::Copy if insn.inputs.len() == 1 => {
            input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width)
        }
        IrOp::IntAnd if insn.inputs.len() == 2 => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let b = input_known_bits(func, bid, idx, 1, &insn.inputs[1], current, out_width);
            a.and(&b)
        }
        IrOp::IntOr if insn.inputs.len() == 2 => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let b = input_known_bits(func, bid, idx, 1, &insn.inputs[1], current, out_width);
            a.or(&b)
        }
        IrOp::IntXor if insn.inputs.len() == 2 => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let b = input_known_bits(func, bid, idx, 1, &insn.inputs[1], current, out_width);
            a.xor(&b)
        }
        IrOp::IntLeft if insn.inputs.len() == 2 && insn.inputs[1].space == SpaceId::Const => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let shamt = insn.inputs[1].offset as u32;
            a.shl(shamt)
        }
        IrOp::IntRight if insn.inputs.len() == 2 && insn.inputs[1].space == SpaceId::Const => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let shamt = insn.inputs[1].offset as u32;
            a.lshr(shamt)
        }
        IrOp::IntSright if insn.inputs.len() == 2 && insn.inputs[1].space == SpaceId::Const => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let shamt = insn.inputs[1].offset as u32;
            a.ashr(shamt)
        }
        IrOp::IntZext if insn.inputs.len() == 1 => {
            let in_width = (insn.inputs[0].size as u8).saturating_mul(8).min(64);
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, in_width);
            a.zext(out_width)
        }
        IrOp::IntSext if insn.inputs.len() == 1 => {
            let in_width = (insn.inputs[0].size as u8).saturating_mul(8).min(64);
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, in_width);
            a.sext(out_width)
        }
        IrOp::IntAdd if insn.inputs.len() == 2 => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let b = input_known_bits(func, bid, idx, 1, &insn.inputs[1], current, out_width);
            a.add(&b)
        }
        IrOp::IntSub if insn.inputs.len() == 2 => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let b = input_known_bits(func, bid, idx, 1, &insn.inputs[1], current, out_width);
            a.sub(&b)
        }
        IrOp::IntMult if insn.inputs.len() == 2 => {
            let a = input_known_bits(func, bid, idx, 0, &insn.inputs[0], current, out_width);
            let b = input_known_bits(func, bid, idx, 1, &insn.inputs[1], current, out_width);
            a.mul(&b)
        }
        _ => KnownBits::unknown(out_width),
    }
}

/// Resolve a varnode (constant or SSA value) to KnownBits.
fn input_known_bits(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    input_idx: usize,
    operand: &Varnode,
    current: &KnownBitsMap,
    width: u8,
) -> KnownBits {
    if operand.space == SpaceId::Const {
        return KnownBits::from_constant(operand.offset, width);
    }
    let Some(sv) = func
        .var_map
        .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
        .copied()
    else {
        return KnownBits::unknown(width);
    };
    let kb = current.get(&sv);
    // Adjust width if necessary (we may not have a known width for the input).
    if kb.width == width {
        kb
    } else {
        KnownBits::unknown(width)
    }
}

fn varnode_bit_width(vn: Varnode) -> u8 {
    (vn.size as u8).saturating_mul(8).min(64)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn build_const_and_mask() -> SsaFunction {
        // x = 0xFF (constant), y = x & 0xF0 → known = 0xF0
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4);

        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            x,
            smallvec![Varnode::constant(0xFF, 4)],
            0x1000,
        ));
        b0.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            y,
            smallvec![x, Varnode::constant(0xF0, 4)],
            0x1004,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![y],
            0x1008,
        ));
        func.insert_block(b0);
        build_ssa(func)
    }

    #[test]
    fn test_known_bits_analysis_const_propagation() {
        let ssa = build_const_and_mask();
        let map = compute_known_bits(&ssa);
        assert!(!map.is_empty());

        // The output of insn 1 (y) should be exactly 0xF0.
        let y_sv = *ssa
            .var_map
            .get(&(BlockId(0), 1, VarnodeSlot::Output))
            .expect("y output");
        let y_kb = map.get(&y_sv);
        assert_eq!(y_kb.constant_value(), Some(0xF0));
    }

    #[test]
    fn test_known_bits_analysis_mask_high_bits_zero() {
        // x = unknown, y = x & 0xFF → high bits known zero.
        let x = Varnode::reg(0, 8);
        let y = Varnode::reg(8, 8);

        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            y,
            smallvec![x, Varnode::constant(0xFF, 8)],
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![y],
            0x1004,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let map = compute_known_bits(&ssa);

        let y_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("y output");
        let y_kb = map.get(&y_sv);
        // bits 8..63 should be known-zero.
        assert!((y_kb.zero & 0xFFFFFFFFFFFFFF00) == 0xFFFFFFFFFFFFFF00);
    }

    #[test]
    fn test_known_bits_analysis_shift_known_zero_low_bits() {
        // x = unknown, y = x << 4 → low 4 bits known zero.
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4);

        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::IntLeft,
            y,
            smallvec![x, Varnode::constant(4, 4)],
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![y],
            0x1004,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let map = compute_known_bits(&ssa);

        let y_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("y output");
        let y_kb = map.get(&y_sv);
        // low 4 bits should be known-zero.
        assert_eq!(y_kb.zero & 0xF, 0xF);
    }
}
