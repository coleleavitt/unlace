use capstone::arch::arm64::{Arm64CC, Arm64OperandType, Arm64Shift};
use capstone::prelude::*;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::{LiftCtx, operand_to_varnode};
use crate::register_file::{ARM_NZCV, CF, NF, VF, X30, ZF};

type Ops = [(Arm64OperandType, Arm64Shift)];

pub fn lift_b(ctx: &mut LiftCtx, ops: &Ops, detail: &InsnDetail) {
    let arch = detail.arch_detail();
    let cc = arch.arm64().map(|a| a.cc());

    let target = match ops.first() {
        Some((Arm64OperandType::Imm(imm), _)) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    match cc {
        Some(cc) if cc != Arm64CC::ARM64_CC_AL && cc != Arm64CC::ARM64_CC_INVALID => {
            let cond = build_condition(ctx, cc);
            match cond {
                Some(cond) => {
                    ctx.emit(IrInsn::without_output(
                        IrOp::Cbranch,
                        smallvec![target, cond],
                        ctx.addr,
                    ));
                }
                None => ctx.emit_unimplemented(),
            }
        }
        _ => {
            ctx.emit(IrInsn::without_output(
                IrOp::Branch,
                smallvec![target],
                ctx.addr,
            ));
        }
    }
}

pub fn lift_bl(ctx: &mut LiftCtx, ops: &Ops) {
    let target = match ops.first() {
        Some((Arm64OperandType::Imm(imm), _)) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let lr = Varnode::reg(X30, 8);
    let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), 8);
    ctx.emit_copy(lr, return_addr);

    ctx.emit(IrInsn::without_output(
        IrOp::Call,
        smallvec![target],
        ctx.addr,
    ));
}

pub fn lift_br(ctx: &mut LiftCtx, ops: &Ops) {
    let target = match ops.first() {
        Some((op_type, _)) => operand_to_varnode(ctx, op_type),
        None => None,
    };
    match target {
        Some(t) => {
            ctx.emit(IrInsn::without_output(
                IrOp::Branchind,
                smallvec![t],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_blr(ctx: &mut LiftCtx, ops: &Ops) {
    let target = match ops.first() {
        Some((op_type, _)) => operand_to_varnode(ctx, op_type),
        None => None,
    };
    match target {
        Some(t) => {
            let lr = Varnode::reg(X30, 8);
            let return_addr = Varnode::constant(ctx.addr.wrapping_add(4), 8);
            ctx.emit_copy(lr, return_addr);

            ctx.emit(IrInsn::without_output(
                IrOp::Callind,
                smallvec![t],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_cbz(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let reg_vn = operand_to_varnode(ctx, &ops[0].0);
    let target = match &ops[1].0 {
        Arm64OperandType::Imm(imm) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    match reg_vn {
        Some(reg) => {
            let zero = Varnode::constant(0, reg.size);
            let cond = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntEqual,
                cond,
                smallvec![reg, zero],
                ctx.addr,
            ));
            ctx.emit(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![target, cond],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_cbnz(ctx: &mut LiftCtx, ops: &Ops) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let reg_vn = operand_to_varnode(ctx, &ops[0].0);
    let target = match &ops[1].0 {
        Arm64OperandType::Imm(imm) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    match reg_vn {
        Some(reg) => {
            let zero = Varnode::constant(0, reg.size);
            let cond = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::IntNotequal,
                cond,
                smallvec![reg, zero],
                ctx.addr,
            ));
            ctx.emit(IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![target, cond],
                ctx.addr,
            ));
        }
        None => ctx.emit_unimplemented(),
    }
}

pub fn lift_tbz(ctx: &mut LiftCtx, ops: &Ops, branch_on_zero: bool) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(reg) = operand_to_varnode(ctx, &ops[0].0) else {
        ctx.emit_unimplemented();
        return;
    };
    let bit = match &ops[1].0 {
        Arm64OperandType::Imm(imm) => *imm as u64,
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let target = match &ops[2].0 {
        Arm64OperandType::Imm(imm) => Varnode::constant(*imm as u64, 8),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let shifted = Varnode::unique(ctx.alloc_unique(), reg.size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntRight,
        shifted,
        smallvec![reg, Varnode::constant(bit, 1)],
        ctx.addr,
    ));
    let masked = Varnode::unique(ctx.alloc_unique(), reg.size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        masked,
        smallvec![shifted, Varnode::constant(1, reg.size)],
        ctx.addr,
    ));
    let cond = Varnode::unique(ctx.alloc_unique(), 1);
    let cmp_op = if branch_on_zero {
        IrOp::IntEqual
    } else {
        IrOp::IntNotequal
    };
    ctx.emit(IrInsn::with_output(
        cmp_op,
        cond,
        smallvec![masked, Varnode::constant(0, reg.size)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![target, cond],
        ctx.addr,
    ));
}

pub fn lift_ret(ctx: &mut LiftCtx, ops: &Ops) {
    let target = if ops.is_empty() {
        Varnode::reg(X30, 8)
    } else {
        match operand_to_varnode(ctx, &ops[0].0) {
            Some(v) => v,
            None => Varnode::reg(X30, 8),
        }
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Return,
        smallvec![target],
        ctx.addr,
    ));
}

/// CSET Rd, cond  ≡  CSINC Rd, XZR, XZR, !cond  ≡  `Rd = (cond) ? 1 : 0`.
/// CSETM Rd, cond ≡  CSINV Rd, XZR, XZR, !cond  ≡  `Rd = (cond) ? -1 : 0`.
/// Capstone reports only the destination register; the condition lives in
/// the detail. We lower to the same `Callother` shape as CSEL with constant
/// inputs for `Rn`/`Rm` so downstream consumers can render uniformly.
pub fn lift_cset(ctx: &mut LiftCtx, ops: &Ops, detail: &InsnDetail, tag: u64) {
    let cc = detail.arch_detail().arm64().map(|a| a.cc());
    let cond = match cc.and_then(|cc| build_condition(ctx, cc)) {
        Some(cond) => cond,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let dst = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) if !crate::register_file::is_zero_reg(*reg) => {
            crate::register_file::reg_varnode(*reg)
        }
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let Some(dst) = dst else {
        ctx.emit_unimplemented();
        return;
    };
    let (true_val, false_val): (u64, u64) = if tag == 0x331 { (1, 0) } else { (u64::MAX, 0) };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![
            Varnode::constant(tag, 8),
            cond,
            Varnode::constant(true_val, dst.size),
            Varnode::constant(false_val, dst.size),
        ],
        ctx.addr,
    ));
}

/// CCMP/CCMN Rn, Rm/#imm5, #nzcv, cond — conditional compare.
///
/// Semantics: if `cond` evaluates true, NZCV is set to `compare(Rn, Rm)`
/// (CCMP subtracts, CCMN adds); otherwise NZCV is set to the literal 4-bit
/// `#nzcv` immediate (bit3=N, bit2=Z, bit1=C, bit0=V).
///
/// IR shape (t162):
///   1. Emit the canonical `Callother(CALLOTHER_AARCH64_CCMP, …)` so the
///      intrinsic remains recoverable for higher-level rendering.
///   2. Compute the "compare-succeeds" flags (N/Z/C/V) into unique temps —
///      mirroring `emit_add_flags` / `emit_sub_flags` for CMN/CMP.
///   3. For each of N/Z/C/V, blend `cond ? computed : nzcv_bit` and write
///      the result to the NF/ZF/CF/VF register varnodes. Downstream
///      consumers (CSEL/CSET via `build_condition`) read those varnodes
///      directly so the predicate now propagates.
pub fn lift_ccmp(ctx: &mut LiftCtx, ops: &Ops, detail: &InsnDetail, is_neg: bool) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }

    let cc = detail.arch_detail().arm64().map(|a| a.cc());
    let cond = match cc.and_then(|cc| build_condition(ctx, cc)) {
        Some(cond) => cond,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };

    let rn_opt = operand_to_varnode(ctx, &ops[0].0);
    // Second operand is either Rm (register) or an immediate. Both lift to
    // a Varnode without distinguishing here — the tag carries semantics.
    let rm_or_imm_opt = operand_to_varnode(ctx, &ops[1].0);
    let nzcv_imm = match ops.get(2).map(|p| &p.0) {
        Some(Arm64OperandType::Imm(v)) => (*v as u64) & 0xF,
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };
    let nzcv_vn = Varnode::constant(nzcv_imm, 1);

    let tag = Varnode::constant(crate::lift::CALLOTHER_AARCH64_CCMP, 8);
    let neg_flag = Varnode::constant(u64::from(is_neg), 1);

    let (rn, rm_or_imm) = match (rn_opt, rm_or_imm_opt) {
        (Some(rn), Some(rm)) => (rn, rm),
        _ => {
            ctx.emit_unimplemented();
            return;
        }
    };

    // 1. Canonical intrinsic anchor — kept for downstream recognition.
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag, cond, rn, rm_or_imm, nzcv_vn, neg_flag],
        ctx.addr,
    ));

    // Size the second operand to Rn's width so the arithmetic-flag ops
    // are well-typed. The immediate form arrives as an 8-byte constant
    // from `operand_to_varnode`; re-issue at op_size. A wider register
    // (illegal mix in real code) is defensively narrowed via Subpiece.
    let op_size = rn.size;
    let rm_sized = if rm_or_imm.size == op_size {
        rm_or_imm
    } else if rm_or_imm.space == SpaceId::Const {
        Varnode::constant(rm_or_imm.offset, op_size)
    } else {
        let trunc = Varnode::unique(ctx.alloc_unique(), op_size);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            trunc,
            smallvec![rm_or_imm, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        trunc
    };

    // 2. Compute the "compare-succeeds" flags into temps.
    let (comp_nf, comp_zf, comp_cf, comp_vf) =
        compute_ccmp_flags(ctx, rn, rm_sized, op_size, is_neg);

    // 3. Blend `cond ? computed : nzcv_bit` for each flag and commit to
    //    the architectural flag varnodes.
    //    NZCV layout (4-bit immediate): bit3=N, bit2=Z, bit1=C, bit0=V.
    let nf_imm = Varnode::constant((nzcv_imm >> 3) & 1, 1);
    let zf_imm = Varnode::constant((nzcv_imm >> 2) & 1, 1);
    let cf_imm = Varnode::constant((nzcv_imm >> 1) & 1, 1);
    let vf_imm = Varnode::constant(nzcv_imm & 1, 1);

    let nf_reg = Varnode::reg(NF, 1);
    let zf_reg = Varnode::reg(ZF, 1);
    let cf_reg = Varnode::reg(CF, 1);
    let vf_reg = Varnode::reg(VF, 1);

    blend_flag(ctx, cond, comp_nf, nf_imm, nf_reg);
    blend_flag(ctx, cond, comp_zf, zf_imm, zf_reg);
    blend_flag(ctx, cond, comp_cf, cf_imm, cf_reg);
    blend_flag(ctx, cond, comp_vf, vf_imm, vf_reg);

    // 4. t170: also commit the packed PSTATE.NZCV varnode so consumers
    //    (CSEL/Bcc) can read NZCV in one dataflow hop instead of four.
    //    Layout: N<<31 | Z<<30 | C<<29 | V<<28. On the cond=true side we
    //    pack the computed flag temps; on the cond=false side we pack
    //    the immediate `#nzcv` (which already uses the same N/Z/C/V bit
    //    order, just at bit positions 3..0 → shift up by 28).
    let packed_imm = nzcv_imm << 28;
    let packed_imm_vn = Varnode::constant(packed_imm, 4);
    let packed_computed = pack_computed_nzcv(ctx, comp_nf, comp_zf, comp_cf, comp_vf);
    blend_word_nzcv(ctx, cond, packed_computed, packed_imm_vn);
}

/// Pack four 1-byte flag temps into a 4-byte unique varnode in PSTATE
/// layout `N<<31 | Z<<30 | C<<29 | V<<28`.
fn pack_computed_nzcv(
    ctx: &mut LiftCtx,
    nf: Varnode,
    zf: Varnode,
    cf: Varnode,
    vf: Varnode,
) -> Varnode {
    fn shifted(ctx: &mut LiftCtx, flag: Varnode, shift: u64) -> Varnode {
        let wide = Varnode::unique(ctx.alloc_unique(), 4);
        ctx.emit(IrInsn::with_output(
            IrOp::IntZext,
            wide,
            smallvec![flag],
            ctx.addr,
        ));
        let out = Varnode::unique(ctx.alloc_unique(), 4);
        ctx.emit(IrInsn::with_output(
            IrOp::IntLeft,
            out,
            smallvec![wide, Varnode::constant(shift, 1)],
            ctx.addr,
        ));
        out
    }
    let n = shifted(ctx, nf, 31);
    let z = shifted(ctx, zf, 30);
    let c = shifted(ctx, cf, 29);
    let v = shifted(ctx, vf, 28);
    let nz = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        nz,
        smallvec![n, z],
        ctx.addr,
    ));
    let nzc = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        nzc,
        smallvec![nz, c],
        ctx.addr,
    ));
    let packed = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        packed,
        smallvec![nzc, v],
        ctx.addr,
    ));
    packed
}

/// 4-byte blend: `ARM_NZCV = cond ? on_true : on_false`, lowered as
/// `(zext(cond)*-1 & on_true) | (zext(!cond)*-1 & on_false)` — i.e.
/// classic bit-mask blend extended from `blend_flag`'s 1-byte form.
fn blend_word_nzcv(ctx: &mut LiftCtx, cond: Varnode, on_true: Varnode, on_false: Varnode) {
    // Widen cond to a 4-byte mask: 0x0000_0000 or 0xFFFF_FFFF.
    let cond_w = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntZext,
        cond_w,
        smallvec![cond],
        ctx.addr,
    ));
    let true_mask = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::Int2comp,
        true_mask,
        smallvec![cond_w],
        ctx.addr,
    ));
    // not_cond = !cond (1-byte boolean) → widen + 2comp the same way.
    let not_cond = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::BoolNegate,
        not_cond,
        smallvec![cond],
        ctx.addr,
    ));
    let nc_w = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntZext,
        nc_w,
        smallvec![not_cond],
        ctx.addr,
    ));
    let false_mask = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::Int2comp,
        false_mask,
        smallvec![nc_w],
        ctx.addr,
    ));

    let t_side = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        t_side,
        smallvec![true_mask, on_true],
        ctx.addr,
    ));
    let f_side = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        f_side,
        smallvec![false_mask, on_false],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        Varnode::reg(ARM_NZCV, 4),
        smallvec![t_side, f_side],
        ctx.addr,
    ));
}

/// Compute NF/ZF/CF/VF as if `Rn op (±Rm)` had retired, returning the
/// four 1-byte temp varnodes (caller blends them with the #nzcv literal).
///
/// `is_neg=true` means CCMN — addition; otherwise CCMP uses subtraction.
fn compute_ccmp_flags(
    ctx: &mut LiftCtx,
    a: Varnode,
    b: Varnode,
    op_size: u8,
    is_neg: bool,
) -> (Varnode, Varnode, Varnode, Varnode) {
    let result = Varnode::unique(ctx.alloc_unique(), op_size);
    let arith_op = if is_neg { IrOp::IntAdd } else { IrOp::IntSub };
    ctx.emit(IrInsn::with_output(
        arith_op,
        result,
        smallvec![a, b],
        ctx.addr,
    ));

    // ZF: result == 0
    let zero = Varnode::constant(0, op_size);
    let zf = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        zf,
        smallvec![result, zero],
        ctx.addr,
    ));

    // NF: sign bit of result.
    let sign_bit = (op_size as u64) * 8 - 1;
    let shifted = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntRight,
        shifted,
        smallvec![result, Varnode::constant(sign_bit, 1)],
        ctx.addr,
    ));
    let nf = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        nf,
        smallvec![shifted, Varnode::constant(0, 1)],
        ctx.addr,
    ));

    // CF / VF: differ between add and sub. Matches the patterns in
    // arithmetic::emit_add_flags / emit_sub_flags.
    let cf = Varnode::unique(ctx.alloc_unique(), 1);
    let vf = Varnode::unique(ctx.alloc_unique(), 1);
    if is_neg {
        // CCMN → add: C = unsigned carry, V = signed overflow of add.
        ctx.emit(IrInsn::with_output(
            IrOp::IntCarry,
            cf,
            smallvec![a, b],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::IntScarry,
            vf,
            smallvec![a, b],
            ctx.addr,
        ));
    } else {
        // CCMP → sub: C = NOT borrow, V = signed borrow of sub.
        let borrow = Varnode::unique(ctx.alloc_unique(), 1);
        ctx.emit(IrInsn::with_output(
            IrOp::IntLess,
            borrow,
            smallvec![a, b],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::BoolNegate,
            cf,
            smallvec![borrow],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::IntSborrow,
            vf,
            smallvec![a, b],
            ctx.addr,
        ));
    }

    (nf, zf, cf, vf)
}

/// Emit `dst = (cond) ? when_true : when_false` for 1-byte flag values.
///
/// Lowering: `dst = (cond & when_true) | (!cond & when_false)`.
fn blend_flag(
    ctx: &mut LiftCtx,
    cond: Varnode,
    when_true: Varnode,
    when_false: Varnode,
    dst: Varnode,
) {
    let true_side = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::BoolAnd,
        true_side,
        smallvec![cond, when_true],
        ctx.addr,
    ));
    let not_cond = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::BoolNegate,
        not_cond,
        smallvec![cond],
        ctx.addr,
    ));
    let false_side = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::BoolAnd,
        false_side,
        smallvec![not_cond, when_false],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::BoolOr,
        dst,
        smallvec![true_side, false_side],
        ctx.addr,
    ));
}

pub fn lift_csel(ctx: &mut LiftCtx, ops: &Ops, detail: &InsnDetail, tag: u64) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }

    let cc = detail.arch_detail().arm64().map(|a| a.cc());
    let cond = match cc.and_then(|cc| build_condition(ctx, cc)) {
        Some(cond) => cond,
        None => {
            ctx.emit_unimplemented();
            return;
        }
    };
    // Capstone returns `Arm64CC` here; we want the raw u8 (1..=14) so the
    // structurer can pick the right Int* comparison opcode without
    // re-doing the cond-varnode dataflow analysis. `cc` is non-None
    // because `build_condition` above already short-circuited the None
    // branch via `emit_unimplemented`.
    let cc_u8 = cc.map(|c| c as u8).unwrap_or(0);
    let rn = operand_to_varnode(ctx, &ops[1].0);
    let rm = operand_to_varnode(ctx, &ops[2].0);
    let dst = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) if !crate::register_file::is_zero_reg(*reg) => {
            crate::register_file::reg_varnode(*reg)
        }
        Some((Arm64OperandType::Reg(_), _)) => return,
        _ => None,
    };

    match (dst, rn, rm) {
        (Some(dst), Some(rn), Some(rm)) => ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            dst,
            smallvec![
                Varnode::constant(tag, 8),
                cond,
                rn,
                rm,
                Varnode::constant(cc_u8 as u64, 1),
            ],
            ctx.addr,
        )),
        _ => ctx.emit_unimplemented(),
    }
}

fn build_condition(ctx: &mut LiftCtx, cc: Arm64CC) -> Option<Varnode> {
    let zf = Varnode::reg(ZF, 1);
    let nf = Varnode::reg(NF, 1);
    let cf = Varnode::reg(CF, 1);
    let vf = Varnode::reg(VF, 1);

    match cc {
        // EQ: Z == 1
        Arm64CC::ARM64_CC_EQ => Some(zf),

        // NE: Z == 0
        Arm64CC::ARM64_CC_NE => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![zf],
                ctx.addr,
            ));
            Some(t)
        }

        // HS/CS: C == 1
        Arm64CC::ARM64_CC_HS => Some(cf),

        // LO/CC: C == 0
        Arm64CC::ARM64_CC_LO => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![cf],
                ctx.addr,
            ));
            Some(t)
        }

        // MI: N == 1
        Arm64CC::ARM64_CC_MI => Some(nf),

        // PL: N == 0
        Arm64CC::ARM64_CC_PL => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![nf],
                ctx.addr,
            ));
            Some(t)
        }

        // VS: V == 1
        Arm64CC::ARM64_CC_VS => Some(vf),

        // VC: V == 0
        Arm64CC::ARM64_CC_VC => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![vf],
                ctx.addr,
            ));
            Some(t)
        }

        // HI: C == 1 && Z == 0
        Arm64CC::ARM64_CC_HI => {
            let not_zf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_zf,
                smallvec![zf],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolAnd,
                t,
                smallvec![cf, not_zf],
                ctx.addr,
            ));
            Some(t)
        }

        // LS: C == 0 || Z == 1
        Arm64CC::ARM64_CC_LS => {
            let not_cf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_cf,
                smallvec![cf],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![not_cf, zf],
                ctx.addr,
            ));
            Some(t)
        }

        // GE: N == V
        Arm64CC::ARM64_CC_GE => {
            let ne = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                ne,
                smallvec![nf, vf],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![ne],
                ctx.addr,
            ));
            Some(t)
        }

        // LT: N != V
        Arm64CC::ARM64_CC_LT => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                t,
                smallvec![nf, vf],
                ctx.addr,
            ));
            Some(t)
        }

        // GT: Z == 0 && N == V
        Arm64CC::ARM64_CC_GT => {
            let not_zf = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                not_zf,
                smallvec![zf],
                ctx.addr,
            ));
            let n_ne_v = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                n_ne_v,
                smallvec![nf, vf],
                ctx.addr,
            ));
            let n_eq_v = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                n_eq_v,
                smallvec![n_ne_v],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolAnd,
                t,
                smallvec![not_zf, n_eq_v],
                ctx.addr,
            ));
            Some(t)
        }

        // LE: Z == 1 || N != V
        Arm64CC::ARM64_CC_LE => {
            let n_ne_v = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolXor,
                n_ne_v,
                smallvec![nf, vf],
                ctx.addr,
            ));
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolOr,
                t,
                smallvec![zf, n_ne_v],
                ctx.addr,
            ));
            Some(t)
        }

        _ => None,
    }
}
