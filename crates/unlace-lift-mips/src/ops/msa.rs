use capstone::RegId;
use capstone::arch::mips::{MipsInsn, MipsOperand};
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{msa_reg, msa_reg_index};

pub const CALLOTHER_MSA_ADDV: u64 = 0x4d53_4101;
pub const CALLOTHER_MSA_ADDVI: u64 = 0x4d53_4102;
pub const CALLOTHER_MSA_SUBV: u64 = 0x4d53_4103;
pub const CALLOTHER_MSA_SUBVI: u64 = 0x4d53_4104;
pub const CALLOTHER_MSA_MULV: u64 = 0x4d53_4105;
pub const CALLOTHER_MSA_FADD: u64 = 0x4d53_4106;
pub const CALLOTHER_MSA_FSUB: u64 = 0x4d53_4107;
pub const CALLOTHER_MSA_FMUL: u64 = 0x4d53_4108;
pub const CALLOTHER_MSA_BITWISE: u64 = 0x4d53_4109;
pub const CALLOTHER_MSA_CMP: u64 = 0x4d53_410a;
pub const CALLOTHER_MSA_MINMAX: u64 = 0x4d53_410b;
pub const CALLOTHER_MSA_SHIFT: u64 = 0x4d53_410c;
pub const CALLOTHER_MSA_PACK: u64 = 0x4d53_410d;
pub const CALLOTHER_MSA_SPLAT: u64 = 0x4d53_410e;
pub const CALLOTHER_MSA_INSERT: u64 = 0x4d53_410f;
pub const CALLOTHER_MSA_COPY: u64 = 0x4d53_4110;
pub const CALLOTHER_MSA_LDI: u64 = 0x4d53_4111;
pub const CALLOTHER_MSA_LD: u64 = 0x4d53_4112;
pub const CALLOTHER_MSA_ST: u64 = 0x4d53_4113;
pub const CALLOTHER_MSA_GENERIC: u64 = 0x4d53_41ff;

/// Lift MIPS SIMD Architecture (MSA) instructions.
///
/// The base IR has no lane-wise vector opcodes.  For MSA arithmetic,
/// comparisons, shuffles, and scalar lane transfers we therefore emit a
/// CALLOTHER whose first input identifies the intrinsic and whose second input
/// records the element width in bytes.  Vector operands are represented as the
/// 128-bit `$w0..$w31` register varnodes.  This keeps 128-bit vector dataflow
/// visible to later analyses without incorrectly modelling lane semantics as a
/// scalar 128-bit integer operation.
pub fn lift_if_msa(ctx: &mut LiftCtx, insn_id: u32, ops: &[MipsOperand], mnemonic: &str) -> bool {
    if !ops.iter().any(is_msa_operand) && !is_msa_only_insn_id(insn_id) {
        return false;
    }

    let element_bytes = element_bytes(mnemonic).unwrap_or(0);
    let tag = callother_tag(insn_id, mnemonic);

    if tag == CALLOTHER_MSA_LD {
        lift_msa_load(ctx, ops, tag, element_bytes);
    } else if tag == CALLOTHER_MSA_ST {
        lift_msa_store(ctx, ops, tag, element_bytes);
    } else {
        lift_msa_callother(ctx, ops, tag, element_bytes);
    }
    true
}

fn is_msa_operand(op: &MipsOperand) -> bool {
    matches!(op, MipsOperand::Reg(reg) if is_msa_reg(*reg))
}

fn is_msa_reg(reg: RegId) -> bool {
    msa_reg_index(reg).is_some()
}

fn is_msa_only_insn_id(insn_id: u32) -> bool {
    use MipsInsn::*;
    matches!(insn_id,
        x if x == MIPS_INS_ADDV as u32
            || x == MIPS_INS_ADDVI as u32
            || x == MIPS_INS_SUBV as u32
            || x == MIPS_INS_SUBVI as u32
            || x == MIPS_INS_MULV as u32
            || x == MIPS_INS_FADD as u32
            || x == MIPS_INS_FSUB as u32
            || x == MIPS_INS_FMUL as u32
            || x == MIPS_INS_CEQ as u32
            || x == MIPS_INS_CEQI as u32
            || x == MIPS_INS_CLT_S as u32
            || x == MIPS_INS_CLT_U as u32
            || x == MIPS_INS_CLTI_S as u32
            || x == MIPS_INS_CLTI_U as u32
            || x == MIPS_INS_CLE_S as u32
            || x == MIPS_INS_CLE_U as u32
            || x == MIPS_INS_CLEI_S as u32
            || x == MIPS_INS_CLEI_U as u32
            || x == MIPS_INS_MAX_S as u32
            || x == MIPS_INS_MAX_U as u32
            || x == MIPS_INS_MAX_A as u32
            || x == MIPS_INS_MIN_S as u32
            || x == MIPS_INS_MIN_U as u32
            || x == MIPS_INS_MIN_A as u32
            || x == MIPS_INS_SLLI as u32
            || x == MIPS_INS_SRAI as u32
            || x == MIPS_INS_SRLI as u32
            || x == MIPS_INS_PCKEV as u32
            || x == MIPS_INS_PCKOD as u32
            || x == MIPS_INS_ILVEV as u32
            || x == MIPS_INS_ILVOD as u32
            || x == MIPS_INS_ILVL as u32
            || x == MIPS_INS_ILVR as u32
            || x == MIPS_INS_SPLAT as u32
            || x == MIPS_INS_SPLATI as u32
            || x == MIPS_INS_INSERT as u32
            || x == MIPS_INS_COPY_S as u32
            || x == MIPS_INS_COPY_U as u32
            || x == MIPS_INS_LDI as u32)
}

fn callother_tag(insn_id: u32, mnemonic: &str) -> u64 {
    use MipsInsn::*;
    match insn_id {
        x if x == MIPS_INS_ADDV as u32 => CALLOTHER_MSA_ADDV,
        x if x == MIPS_INS_ADDVI as u32 => CALLOTHER_MSA_ADDVI,
        x if x == MIPS_INS_SUBV as u32 => CALLOTHER_MSA_SUBV,
        x if x == MIPS_INS_SUBVI as u32 => CALLOTHER_MSA_SUBVI,
        x if x == MIPS_INS_MULV as u32 => CALLOTHER_MSA_MULV,
        x if x == MIPS_INS_FADD as u32 => CALLOTHER_MSA_FADD,
        x if x == MIPS_INS_FSUB as u32 => CALLOTHER_MSA_FSUB,
        x if x == MIPS_INS_FMUL as u32 => CALLOTHER_MSA_FMUL,
        x if x == MIPS_INS_LD as u32 && mnemonic.starts_with("ld.") => CALLOTHER_MSA_LD,
        x if x == MIPS_INS_ST as u32 && mnemonic.starts_with("st.") => CALLOTHER_MSA_ST,
        x if x == MIPS_INS_LDI as u32 => CALLOTHER_MSA_LDI,
        x if x == MIPS_INS_AND as u32 || x == MIPS_INS_OR as u32 || x == MIPS_INS_XOR as u32 => {
            CALLOTHER_MSA_BITWISE
        }
        x if x == MIPS_INS_CEQ as u32
            || x == MIPS_INS_CEQI as u32
            || x == MIPS_INS_CLT_S as u32
            || x == MIPS_INS_CLT_U as u32
            || x == MIPS_INS_CLTI_S as u32
            || x == MIPS_INS_CLTI_U as u32
            || x == MIPS_INS_CLE_S as u32
            || x == MIPS_INS_CLE_U as u32
            || x == MIPS_INS_CLEI_S as u32
            || x == MIPS_INS_CLEI_U as u32 =>
        {
            CALLOTHER_MSA_CMP
        }
        x if x == MIPS_INS_MAX_S as u32
            || x == MIPS_INS_MAX_U as u32
            || x == MIPS_INS_MAX_A as u32
            || x == MIPS_INS_MIN_S as u32
            || x == MIPS_INS_MIN_U as u32
            || x == MIPS_INS_MIN_A as u32 =>
        {
            CALLOTHER_MSA_MINMAX
        }
        x if x == MIPS_INS_SLL as u32
            || x == MIPS_INS_SLLI as u32
            || x == MIPS_INS_SRA as u32
            || x == MIPS_INS_SRAI as u32
            || x == MIPS_INS_SRL as u32
            || x == MIPS_INS_SRLI as u32 =>
        {
            CALLOTHER_MSA_SHIFT
        }
        x if x == MIPS_INS_PCKEV as u32
            || x == MIPS_INS_PCKOD as u32
            || x == MIPS_INS_ILVEV as u32
            || x == MIPS_INS_ILVOD as u32
            || x == MIPS_INS_ILVL as u32
            || x == MIPS_INS_ILVR as u32 =>
        {
            CALLOTHER_MSA_PACK
        }
        x if x == MIPS_INS_SPLAT as u32 || x == MIPS_INS_SPLATI as u32 => CALLOTHER_MSA_SPLAT,
        x if x == MIPS_INS_INSERT as u32 => CALLOTHER_MSA_INSERT,
        x if x == MIPS_INS_COPY_S as u32 || x == MIPS_INS_COPY_U as u32 => CALLOTHER_MSA_COPY,
        _ => CALLOTHER_MSA_GENERIC,
    }
}

fn element_bytes(mnemonic: &str) -> Option<u64> {
    let suffix = mnemonic.rsplit_once('.')?.1;
    match suffix.chars().next()? {
        'b' => Some(1),
        'h' => Some(2),
        'w' | 's' => Some(4),
        'd' => Some(8),
        _ => None,
    }
}

fn operand_to_varnode(ctx: &mut LiftCtx, op: &MipsOperand) -> Option<Varnode> {
    match op {
        MipsOperand::Reg(reg) => msa_reg(*reg).or_else(|| ctx.read_reg(*reg)),
        MipsOperand::Imm(imm) => Some(Varnode::constant(*imm as u64, 8)),
        MipsOperand::Mem(_) => ctx.mem_addr(op),
        MipsOperand::Invalid => None,
    }
}

fn lift_msa_callother(ctx: &mut LiftCtx, ops: &[MipsOperand], tag: u64, element_bytes: u64) {
    let mut inputs = smallvec![
        Varnode::constant(tag, 8),
        Varnode::constant(element_bytes, 1)
    ];
    for op in ops.iter().skip(1) {
        if let Some(vn) = operand_to_varnode(ctx, op) {
            inputs.push(vn);
        } else {
            ctx.emit_unimplemented();
            return;
        }
    }

    let Some(dst) = ops.first().and_then(|op| match op {
        MipsOperand::Reg(reg) => msa_reg(*reg).or_else(|| ctx.write_reg(*reg)),
        _ => None,
    }) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(IrOp::Callother, dst, inputs, ctx.addr));
}

fn lift_msa_load(ctx: &mut LiftCtx, ops: &[MipsOperand], tag: u64, element_bytes: u64) {
    if let [MipsOperand::Reg(dst_reg), mem, ..] = ops {
        let Some(dst) = msa_reg(*dst_reg) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(addr) = ctx.mem_addr(mem) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            dst,
            smallvec![
                Varnode::constant(tag, 8),
                Varnode::constant(element_bytes, 1),
                addr
            ],
            ctx.addr,
        ));
    } else {
        ctx.emit_unimplemented();
    }
}

fn lift_msa_store(ctx: &mut LiftCtx, ops: &[MipsOperand], tag: u64, element_bytes: u64) {
    if let [MipsOperand::Reg(src_reg), mem, ..] = ops {
        let Some(src) = msa_reg(*src_reg) else {
            ctx.emit_unimplemented();
            return;
        };
        let Some(addr) = ctx.mem_addr(mem) else {
            ctx.emit_unimplemented();
            return;
        };
        ctx.emit(IrInsn::without_output(
            IrOp::Callother,
            smallvec![
                Varnode::constant(tag, 8),
                Varnode::constant(element_bytes, 1),
                addr,
                src
            ],
            ctx.addr,
        ));
    } else {
        ctx.emit_unimplemented();
    }
}
