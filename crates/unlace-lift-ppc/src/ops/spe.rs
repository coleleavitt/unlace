//! PowerPC SPE (Signal Processing Engine / e500) helpers.
//!
//! Capstone decodes many SPE opcodes by mnemonic, but the core unlace IR has no
//! first-class SIMD/vector opcodes.  We therefore lower common lane-wise integer
//! operations to scalar IR on the 64-bit GPR/EVR storage where the operation is
//! bit-exact for the packed register value, and preserve richer packed,
//! saturating, accumulator, and scalar-float forms as tagged `Callother`
//! intrinsics for later analyses/printers.

use capstone::arch::ppc::PpcOperand;
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::{LiftCtx, operand_mem_addr, operand_reg};

/// Base tag for generic SPE intrinsics. The low 16 bits are a stable FNV-1a
/// hash of the Capstone mnemonic, so unknown/future SPE opcodes are still
/// distinguished instead of collapsing to a single `Unimplemented` marker.
pub const CALLOTHER_PPC_SPE_BASE: u64 = 0x500;
pub const CALLOTHER_PPC_SPE_GENERIC_BASE: u64 = 0x5_0000;

pub const CALLOTHER_PPC_SPE_ABS: u64 = CALLOTHER_PPC_SPE_BASE;
pub const CALLOTHER_PPC_SPE_EQV: u64 = CALLOTHER_PPC_SPE_BASE + 1;
pub const CALLOTHER_PPC_SPE_NAND: u64 = CALLOTHER_PPC_SPE_BASE + 2;
pub const CALLOTHER_PPC_SPE_NOR: u64 = CALLOTHER_PPC_SPE_BASE + 3;
pub const CALLOTHER_PPC_SPE_ANDC: u64 = CALLOTHER_PPC_SPE_BASE + 4;
pub const CALLOTHER_PPC_SPE_ORC: u64 = CALLOTHER_PPC_SPE_BASE + 5;
pub const CALLOTHER_PPC_SPE_EXTSB: u64 = CALLOTHER_PPC_SPE_BASE + 6;
pub const CALLOTHER_PPC_SPE_EXTSH: u64 = CALLOTHER_PPC_SPE_BASE + 7;
pub const CALLOTHER_PPC_SPE_LD_SPLAT: u64 = CALLOTHER_PPC_SPE_BASE + 9;
pub const CALLOTHER_PPC_SPE_FLOAT: u64 = CALLOTHER_PPC_SPE_BASE + 10;
pub const CALLOTHER_PPC_SPE_PACKED: u64 = CALLOTHER_PPC_SPE_BASE + 11;

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub(crate) enum SpeClass {
    IntAdd,
    IntSubf,
    IntMul,
    IntDivU,
    IntDivS,
    And,
    Or,
    Xor,
    Eq,
    GtS,
    GtU,
    LtS,
    LtU,
    Cntlzw,
    Neg,
    Abs,
    Eqv,
    Nand,
    Nor,
    Andc,
    Orc,
    Extsb,
    Extsh,
    Load,
    Store,
    Move,
    Float,
    Packed,
    Unknown,
}

/// Classify a Capstone PowerPC mnemonic beginning with `ev`.
pub(crate) fn classify_spe_mnemonic(mnemonic: &str) -> Option<SpeClass> {
    let m = mnemonic.trim().trim_end_matches('.').to_ascii_lowercase();
    if !m.starts_with("ev") {
        return None;
    }

    let class = match m.as_str() {
        "evaddw" | "evaddiw" => SpeClass::IntAdd,
        "evsubfw" => SpeClass::IntSubf,
        "evmwlumi" | "evmwsmi" | "evmwumi" | "evmhesmf" | "evmhesmi" | "evmheumi" | "evmhessf"
        | "evmhossf" | "evmhosmf" | "evmhosmi" | "evmhoumi" => SpeClass::IntMul,
        "evdivwu" => SpeClass::IntDivU,
        "evdivws" => SpeClass::IntDivS,
        "evand" => SpeClass::And,
        "evor" => SpeClass::Or,
        "evxor" => SpeClass::Xor,
        "evcmpeq" => SpeClass::Eq,
        "evcmpgts" => SpeClass::GtS,
        "evcmpgtu" => SpeClass::GtU,
        "evcmplts" => SpeClass::LtS,
        "evcmpltu" => SpeClass::LtU,
        "evcntlzw" => SpeClass::Cntlzw,
        "evneg" => SpeClass::Neg,
        "evabs" => SpeClass::Abs,
        "eveqv" => SpeClass::Eqv,
        "evnand" => SpeClass::Nand,
        "evnor" => SpeClass::Nor,
        "evandc" => SpeClass::Andc,
        "evorc" => SpeClass::Orc,
        "evextsb" => SpeClass::Extsb,
        "evextsh" => SpeClass::Extsh,
        "evmra" | "evmergehi" | "evmergehilo" | "evmergelo" | "evmergelohi" => SpeClass::Move,
        _ if m.starts_with("evld") || m.starts_with("evl") => SpeClass::Load,
        _ if m.starts_with("evst") => SpeClass::Store,
        _ if m.starts_with("evfs") => SpeClass::Float,
        _ if m.starts_with("evmh")
            || m.starts_with("evmw")
            || m.contains("mia")
            || m.contains("sia") =>
        {
            SpeClass::Packed
        }
        _ => SpeClass::Unknown,
    };
    Some(class)
}

pub(crate) fn lift_spe(ctx: &mut LiftCtx, mnemonic: &str, ops: &[PpcOperand]) {
    let Some(class) = classify_spe_mnemonic(mnemonic) else {
        return ctx.emit_unimplemented();
    };

    match class {
        SpeClass::IntAdd => lift_binop(ctx, ops, IrOp::IntAdd),
        SpeClass::IntSubf => lift_subf(ctx, ops),
        SpeClass::IntMul => lift_binop(ctx, ops, IrOp::IntMult),
        SpeClass::IntDivU => lift_binop(ctx, ops, IrOp::IntDiv),
        SpeClass::IntDivS => lift_binop(ctx, ops, IrOp::IntSdiv),
        SpeClass::And => lift_binop(ctx, ops, IrOp::IntAnd),
        SpeClass::Or => lift_binop(ctx, ops, IrOp::IntOr),
        SpeClass::Xor => lift_binop(ctx, ops, IrOp::IntXor),
        SpeClass::Eq => lift_binop(ctx, ops, IrOp::IntEqual),
        SpeClass::GtS => lift_reversed_compare(ctx, ops, IrOp::IntSless),
        SpeClass::GtU => lift_reversed_compare(ctx, ops, IrOp::IntLess),
        SpeClass::LtS => lift_binop(ctx, ops, IrOp::IntSless),
        SpeClass::LtU => lift_binop(ctx, ops, IrOp::IntLess),
        SpeClass::Cntlzw => lift_unop(ctx, ops, IrOp::Lzcount),
        SpeClass::Neg => lift_unop(ctx, ops, IrOp::IntNegate),
        SpeClass::Load => lift_load(ctx, ops, mnemonic),
        SpeClass::Store => lift_store(ctx, ops),
        SpeClass::Move => lift_move_or_callother(ctx, ops, mnemonic),
        SpeClass::Abs => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_ABS, Some(8)),
        SpeClass::Eqv => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_EQV, Some(8)),
        SpeClass::Nand => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_NAND, Some(8)),
        SpeClass::Nor => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_NOR, Some(8)),
        SpeClass::Andc => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_ANDC, Some(8)),
        SpeClass::Orc => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_ORC, Some(8)),
        SpeClass::Extsb => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_EXTSB, Some(8)),
        SpeClass::Extsh => emit_callother(ctx, ops, CALLOTHER_PPC_SPE_EXTSH, Some(8)),
        SpeClass::Float => emit_callother(
            ctx,
            ops,
            CALLOTHER_PPC_SPE_FLOAT + mnemonic_hash(mnemonic),
            Some(8),
        ),
        SpeClass::Packed | SpeClass::Unknown => {
            emit_callother(ctx, ops, generic_tag(mnemonic), destination_size(ops))
        }
    }
}

fn lift_binop(ctx: &mut LiftCtx, ops: &[PpcOperand], op: IrOp) {
    let (rd, ra, rb) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
        ops.get(2).and_then(operand_reg),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), rd.size);
    ctx.emit(IrInsn::with_output(op, result, smallvec![ra, rb], ctx.addr));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rd,
        smallvec![result],
        ctx.addr,
    ));
}

fn lift_subf(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let (rd, ra, rb) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
        ops.get(2).and_then(operand_reg),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), rd.size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSub,
        result,
        smallvec![rb, ra],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rd,
        smallvec![result],
        ctx.addr,
    ));
}

fn lift_reversed_compare(ctx: &mut LiftCtx, ops: &[PpcOperand], op: IrOp) {
    let (rd, ra, rb) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
        ops.get(2).and_then(operand_reg),
    ) {
        (Some(d), Some(a), Some(b)) => (d, a, b),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(op, result, smallvec![rb, ra], ctx.addr));
    let extended = Varnode::unique(ctx.alloc_unique(), rd.size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntZext,
        extended,
        smallvec![result],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rd,
        smallvec![extended],
        ctx.addr,
    ));
}

fn lift_unop(ctx: &mut LiftCtx, ops: &[PpcOperand], op: IrOp) {
    let (rd, ra) = match (
        ops.first().and_then(operand_reg),
        ops.get(1).and_then(operand_reg),
    ) {
        (Some(d), Some(a)) => (d, a),
        _ => return ctx.emit_unimplemented(),
    };
    let result = Varnode::unique(ctx.alloc_unique(), rd.size);
    ctx.emit(IrInsn::with_output(op, result, smallvec![ra], ctx.addr));
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        rd,
        smallvec![result],
        ctx.addr,
    ));
}

fn lift_load(ctx: &mut LiftCtx, ops: &[PpcOperand], mnemonic: &str) {
    let rd = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };

    if mnemonic.contains("splat") || mnemonic.contains("whe") || mnemonic.contains("who") {
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            rd,
            smallvec![Varnode::constant(CALLOTHER_PPC_SPE_LD_SPLAT, 8), mem_addr],
            ctx.addr,
        ));
    } else {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let loaded = Varnode::unique(ctx.alloc_unique(), rd.size);
        ctx.emit(IrInsn::with_output(
            IrOp::Load,
            loaded,
            smallvec![ram_space, mem_addr],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            IrOp::Copy,
            rd,
            smallvec![loaded],
            ctx.addr,
        ));
    }
}

fn lift_store(ctx: &mut LiftCtx, ops: &[PpcOperand]) {
    let rs = match ops.first().and_then(operand_reg) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    let mem_addr = match ops.get(1).and_then(|o| operand_mem_addr(ctx, o)) {
        Some(v) => v,
        None => return ctx.emit_unimplemented(),
    };
    // SPE memory forms are 64-bit EVR/GPR stores or partial stores. Preserve the
    // low 64-bit register value; partial-store opcodes remain distinguishable in
    // disassembly and can be refined by later vector-aware lowering.
    ctx.emit_store(mem_addr, rs);
}

fn lift_move_or_callother(ctx: &mut LiftCtx, ops: &[PpcOperand], mnemonic: &str) {
    if mnemonic.eq_ignore_ascii_case("evmra") {
        if let (Some(rd), Some(rs)) = (
            ops.first().and_then(operand_reg),
            ops.get(1).and_then(operand_reg),
        ) {
            ctx.emit(IrInsn::with_output(IrOp::Copy, rd, smallvec![rs], ctx.addr));
            return;
        }
    }
    emit_callother(
        ctx,
        ops,
        CALLOTHER_PPC_SPE_PACKED + mnemonic_hash(mnemonic),
        destination_size(ops),
    );
}

fn emit_callother(ctx: &mut LiftCtx, ops: &[PpcOperand], tag: u64, output_size: Option<u8>) {
    let inputs = std::iter::once(Varnode::constant(tag, 8))
        .chain(ops.iter().skip(1).filter_map(operand_reg))
        .collect::<smallvec::SmallVec<[Varnode; 3]>>();

    if let (Some(rd), Some(_)) = (ops.first().and_then(operand_reg), output_size) {
        ctx.emit(IrInsn::with_output(IrOp::Callother, rd, inputs, ctx.addr));
    } else {
        ctx.emit(IrInsn::without_output(IrOp::Callother, inputs, ctx.addr));
    }
}

fn destination_size(ops: &[PpcOperand]) -> Option<u8> {
    ops.first().and_then(operand_reg).map(|v| v.size)
}

fn generic_tag(mnemonic: &str) -> u64 {
    CALLOTHER_PPC_SPE_GENERIC_BASE | mnemonic_hash(mnemonic)
}

fn mnemonic_hash(mnemonic: &str) -> u64 {
    let mut h = 0xcbf2_9ce4_8422_2325u64;
    for b in mnemonic.bytes().map(|b| b.to_ascii_lowercase()) {
        h ^= b as u64;
        h = h.wrapping_mul(0x0000_0100_0000_01b3);
    }
    h & 0xffff
}

#[cfg(test)]
mod tests {
    use super::{SpeClass, classify_spe_mnemonic};

    #[test]
    fn classifies_common_spe_mnemonics() {
        assert_eq!(classify_spe_mnemonic("evaddw"), Some(SpeClass::IntAdd));
        assert_eq!(classify_spe_mnemonic("evsubfw"), Some(SpeClass::IntSubf));
        assert_eq!(classify_spe_mnemonic("evldw"), Some(SpeClass::Load));
        assert_eq!(classify_spe_mnemonic("evstw"), Some(SpeClass::Store));
        assert_eq!(classify_spe_mnemonic("evfsadd"), Some(SpeClass::Float));
        assert_eq!(classify_spe_mnemonic("evmhessfaaw"), Some(SpeClass::Packed));
        assert_eq!(classify_spe_mnemonic("add"), None);
    }
}
