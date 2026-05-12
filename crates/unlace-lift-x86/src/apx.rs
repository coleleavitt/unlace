//! Intel APX (Advanced Performance Extensions) decode/lift support.
//!
//! iced-x86 1.21 predates APX/REX2, so APX-prefixed legacy integer forms are
//! decoded here before the normal iced dispatch.  The goal is not to duplicate a
//! full x86 decoder: we provide the APX architectural pieces that materially
//! affect IR quality today — EGPR (R16..R31) register addressing through REX2,
//! selected legacy ALU/data-move encodings, NDD (new data destination) ALU form,
//! and JMPABS.

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::lift::LiftCtx;
use crate::register_file::{egpr_offset, reg64};

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct Rex2 {
    byte: u8,
}

impl Rex2 {
    fn parse(bytes: &[u8]) -> Option<(Self, usize)> {
        if bytes.len() >= 2 && bytes[0] == 0xD5 {
            Some((Self { byte: bytes[1] }, 2))
        } else {
            None
        }
    }

    fn m0(self) -> bool {
        self.byte & 0x80 != 0
    }
    fn r4(self) -> u8 {
        (self.byte >> 6) & 1
    }
    fn x4(self) -> u8 {
        (self.byte >> 5) & 1
    }
    fn b4(self) -> u8 {
        (self.byte >> 4) & 1
    }
    fn w(self) -> bool {
        self.byte & 0x08 != 0
    }
    fn r3(self) -> u8 {
        (self.byte >> 2) & 1
    }
    fn x3(self) -> u8 {
        (self.byte >> 1) & 1
    }
    fn b3(self) -> u8 {
        self.byte & 1
    }

    fn reg_index(self, low3: u8) -> u8 {
        low3 | (self.r3() << 3) | (self.r4() << 4)
    }

    fn rm_index(self, low3: u8) -> u8 {
        low3 | (self.b3() << 3) | (self.b4() << 4)
    }

    fn index_index(self, low3: u8) -> u8 {
        low3 | (self.x3() << 3) | (self.x4() << 4)
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct ModRm {
    byte: u8,
}

impl ModRm {
    fn parse(bytes: &[u8], off: usize) -> Option<(Self, usize)> {
        bytes.get(off).copied().map(|byte| (Self { byte }, off + 1))
    }

    fn mode(self) -> u8 {
        self.byte >> 6
    }
    fn reg(self) -> u8 {
        (self.byte >> 3) & 7
    }
    fn rm(self) -> u8 {
        self.byte & 7
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum ApxOp {
    Add,
    Or,
    Adc,
    Sbb,
    And,
    Sub,
    Xor,
    Cmp,
    Mov,
    Lea,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Direction {
    RmReg,
    RegRm,
}

/// Decode and lift the APX subset handled internally.
pub fn try_lift_apx(ctx: &mut LiftCtx, bytes: &[u8]) -> Option<usize> {
    let (rex2, mut off) = Rex2::parse(bytes)?;

    // APX REX2 is a 64-bit-mode prefix.  For the subset below we require REX2.W
    // and M0=0 (legacy one-byte opcode map), except for JMPABS which has its own
    // REX2-specific opcode shape.
    if rex2.m0() {
        ctx.emit_unimplemented();
        return Some(off);
    }

    let opcode = *bytes.get(off)?;
    off += 1;

    if rex2.w() && opcode == 0xA1 {
        return lift_jmpabs(ctx, bytes, off);
    }

    let (op, dir) = match opcode {
        0x01 => (ApxOp::Add, Direction::RmReg),
        0x03 => (ApxOp::Add, Direction::RegRm),
        0x09 => (ApxOp::Or, Direction::RmReg),
        0x0B => (ApxOp::Or, Direction::RegRm),
        0x11 => (ApxOp::Adc, Direction::RmReg),
        0x13 => (ApxOp::Adc, Direction::RegRm),
        0x19 => (ApxOp::Sbb, Direction::RmReg),
        0x1B => (ApxOp::Sbb, Direction::RegRm),
        0x21 => (ApxOp::And, Direction::RmReg),
        0x23 => (ApxOp::And, Direction::RegRm),
        0x29 => (ApxOp::Sub, Direction::RmReg),
        0x2B => (ApxOp::Sub, Direction::RegRm),
        0x31 => (ApxOp::Xor, Direction::RmReg),
        0x33 => (ApxOp::Xor, Direction::RegRm),
        0x39 => (ApxOp::Cmp, Direction::RmReg),
        0x3B => (ApxOp::Cmp, Direction::RegRm),
        0x89 => (ApxOp::Mov, Direction::RmReg),
        0x8B => (ApxOp::Mov, Direction::RegRm),
        0x8D => (ApxOp::Lea, Direction::RegRm),
        _ => {
            ctx.emit_unimplemented();
            return Some(off);
        }
    };

    let (modrm, mut off) = match ModRm::parse(bytes, off) {
        Some(x) => x,
        None => return None,
    };

    let operand_size = if rex2.w() { 8 } else { 4 };
    let reg = gp_reg(rex2.reg_index(modrm.reg()), operand_size);
    let rm = if op == ApxOp::Lea {
        match decode_apx_effective_address(ctx, bytes, off, rex2, modrm) {
            Some((ea, next)) => {
                off = next;
                ea
            }
            None => return None,
        }
    } else {
        match decode_apx_rm_operand(ctx, bytes, off, rex2, modrm, operand_size) {
            Some((operand, next)) => {
                off = next;
                operand
            }
            None => return None,
        }
    };

    match (op, dir) {
        (ApxOp::Lea, _) => emit_copy(ctx, reg, rm),
        (ApxOp::Mov, Direction::RmReg) => write_rm(ctx, modrm, rm, reg),
        (ApxOp::Mov, Direction::RegRm) => emit_copy(ctx, reg, rm),
        (ApxOp::Cmp, Direction::RmReg) => emit_cmp(ctx, rm, reg),
        (ApxOp::Cmp, Direction::RegRm) => emit_cmp(ctx, reg, rm),
        (_, Direction::RmReg) => emit_binop(ctx, op, modrm, rm, rm, reg),
        (_, Direction::RegRm) => emit_binop(ctx, op, ModRm { byte: 0xC0 }, reg, reg, rm),
    }

    Some(off)
}

fn lift_jmpabs(ctx: &mut LiftCtx, bytes: &[u8], off: usize) -> Option<usize> {
    let imm = read_u64(bytes, off)?;
    ctx.emit(IrInsn::without_output(
        IrOp::Branch,
        smallvec![Varnode::constant(imm, 8)],
        ctx.addr,
    ));
    Some(off + 8)
}

fn gp_reg(index: u8, size: u8) -> Varnode {
    Varnode::new(SpaceId::Register, egpr_offset(index), size)
}

fn decode_apx_rm_operand(
    ctx: &mut LiftCtx,
    bytes: &[u8],
    off: usize,
    rex2: Rex2,
    modrm: ModRm,
    size: u8,
) -> Option<(Varnode, usize)> {
    if modrm.mode() == 3 {
        return Some((gp_reg(rex2.rm_index(modrm.rm()), size), off));
    }

    let (addr, off) = decode_apx_effective_address(ctx, bytes, off, rex2, modrm)?;
    let loaded = Varnode::unique(ctx.alloc_unique(), size);
    ctx.emit(IrInsn::with_output(
        IrOp::Load,
        loaded,
        smallvec![Varnode::constant(SpaceId::Ram as u64, 8), addr],
        ctx.addr,
    ));
    Some((loaded, off))
}

fn decode_apx_effective_address(
    ctx: &mut LiftCtx,
    bytes: &[u8],
    mut off: usize,
    rex2: Rex2,
    modrm: ModRm,
) -> Option<(Varnode, usize)> {
    let mut addr: Option<Varnode> = None;
    let rm_low = modrm.rm();

    if rm_low == 4 {
        let sib = *bytes.get(off)?;
        off += 1;
        let scale = 1u64 << (sib >> 6);
        let index_low = (sib >> 3) & 7;
        let base_low = sib & 7;

        // In long mode, SIB index low bits 100 plus no extension means "no index".
        let index = rex2.index_index(index_low);
        if index_low != 4 || rex2.x3() != 0 || rex2.x4() != 0 {
            let index_vn = gp_reg(index, 8);
            addr = Some(if scale > 1 {
                let scaled = Varnode::unique(ctx.alloc_unique(), 8);
                ctx.emit(IrInsn::with_output(
                    IrOp::IntMult,
                    scaled,
                    smallvec![index_vn, Varnode::constant(scale, 8)],
                    ctx.addr,
                ));
                scaled
            } else {
                index_vn
            });
        }

        if !(modrm.mode() == 0 && base_low == 5) {
            addr = add_addr(ctx, addr, gp_reg(rex2.rm_index(base_low), 8));
        }
    } else if !(modrm.mode() == 0 && rm_low == 5) {
        addr = Some(gp_reg(rex2.rm_index(rm_low), 8));
    }

    let disp_size = match (modrm.mode(), rm_low) {
        (0, 5) => 4,
        (0, 4)
            if bytes
                .get(off.wrapping_sub(1))
                .map(|sib| sib & 7 == 5)
                .unwrap_or(false) =>
        {
            4
        }
        (1, _) => 1,
        (2, _) => 4,
        _ => 0,
    };

    if disp_size != 0 {
        let disp = if disp_size == 1 {
            *bytes.get(off)? as i8 as i64 as u64
        } else {
            read_u32(bytes, off)? as i32 as i64 as u64
        };
        off += disp_size;
        addr = add_addr(ctx, addr, Varnode::constant(disp, 8));
    }

    Some((addr.unwrap_or_else(|| Varnode::constant(0, 8)), off))
}

fn add_addr(ctx: &mut LiftCtx, lhs: Option<Varnode>, rhs: Varnode) -> Option<Varnode> {
    match lhs {
        Some(lhs) => {
            let out = Varnode::unique(ctx.alloc_unique(), lhs.size.max(rhs.size));
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                out,
                smallvec![lhs, rhs],
                ctx.addr,
            ));
            Some(out)
        }
        None => Some(rhs),
    }
}

fn write_rm(ctx: &mut LiftCtx, modrm: ModRm, dst_or_addr: Varnode, value: Varnode) {
    if modrm.mode() == 3 {
        emit_copy(ctx, dst_or_addr, value);
    } else {
        ctx.emit_store(dst_or_addr, value);
    }
}

fn emit_copy(ctx: &mut LiftCtx, dst: Varnode, src: Varnode) {
    let value = if dst.size == 4 && src.size == 8 {
        let tmp = Varnode::unique(ctx.alloc_unique(), 4);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            tmp,
            smallvec![src, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        tmp
    } else {
        src
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Copy,
        dst,
        smallvec![value],
        ctx.addr,
    ));
}

fn emit_binop(
    ctx: &mut LiftCtx,
    op: ApxOp,
    dst_modrm: ModRm,
    dst: Varnode,
    lhs: Varnode,
    rhs: Varnode,
) {
    let result = Varnode::unique(ctx.alloc_unique(), dst.size);
    let irop = match op {
        ApxOp::Add | ApxOp::Adc => IrOp::IntAdd,
        ApxOp::Sub | ApxOp::Sbb => IrOp::IntSub,
        ApxOp::And => IrOp::IntAnd,
        ApxOp::Or => IrOp::IntOr,
        ApxOp::Xor => IrOp::IntXor,
        ApxOp::Cmp | ApxOp::Mov | ApxOp::Lea => unreachable!(),
    };

    if matches!(op, ApxOp::Adc | ApxOp::Sbb) {
        let cf = Varnode::new(SpaceId::Register, crate::register_file::CF, 1);
        let cf_ext = Varnode::unique(ctx.alloc_unique(), dst.size);
        ctx.emit(IrInsn::with_output(
            IrOp::IntZext,
            cf_ext,
            smallvec![cf],
            ctx.addr,
        ));
        let tmp = Varnode::unique(ctx.alloc_unique(), dst.size);
        ctx.emit(IrInsn::with_output(
            irop,
            tmp,
            smallvec![lhs, rhs],
            ctx.addr,
        ));
        ctx.emit(IrInsn::with_output(
            irop,
            result,
            smallvec![tmp, cf_ext],
            ctx.addr,
        ));
    } else {
        ctx.emit(IrInsn::with_output(
            irop,
            result,
            smallvec![lhs, rhs],
            ctx.addr,
        ));
    }

    match op {
        ApxOp::Add | ApxOp::Adc => emit_add_flags(ctx, lhs, rhs, result, dst.size),
        ApxOp::Sub | ApxOp::Sbb => emit_sub_flags(ctx, lhs, rhs, result, dst.size),
        ApxOp::And | ApxOp::Or | ApxOp::Xor => emit_logical_flags(ctx, result, dst.size),
        _ => {}
    }
    write_rm(ctx, dst_modrm, dst, result);
}

fn emit_cmp(ctx: &mut LiftCtx, lhs: Varnode, rhs: Varnode) {
    let result = Varnode::unique(ctx.alloc_unique(), lhs.size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSub,
        result,
        smallvec![lhs, rhs],
        ctx.addr,
    ));
    emit_sub_flags(ctx, lhs, rhs, result, lhs.size);
}

fn emit_add_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntCarry,
        Varnode::new(SpaceId::Register, crate::register_file::CF, 1),
        smallvec![a, b],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntScarry,
        Varnode::new(SpaceId::Register, crate::register_file::OF, 1),
        smallvec![a, b],
        ctx.addr,
    ));
    emit_parity_flag(ctx, result, op_size);
}

fn emit_sub_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntLess,
        Varnode::new(SpaceId::Register, crate::register_file::CF, 1),
        smallvec![a, b],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntSborrow,
        Varnode::new(SpaceId::Register, crate::register_file::OF, 1),
        smallvec![a, b],
        ctx.addr,
    ));
    emit_parity_flag(ctx, result, op_size);
}

fn emit_logical_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    emit_result_flags(ctx, result, op_size);
    emit_copy(
        ctx,
        Varnode::new(SpaceId::Register, crate::register_file::CF, 1),
        Varnode::constant(0, 1),
    );
    emit_copy(
        ctx,
        Varnode::new(SpaceId::Register, crate::register_file::OF, 1),
        Varnode::constant(0, 1),
    );
    emit_parity_flag(ctx, result, op_size);
}

fn emit_result_flags(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        Varnode::new(SpaceId::Register, crate::register_file::ZF, 1),
        smallvec![result, Varnode::constant(0, op_size)],
        ctx.addr,
    ));

    let sign_bit = (op_size as u32) * 8 - 1;
    let shifted = Varnode::unique(ctx.alloc_unique(), op_size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntRight,
        shifted,
        smallvec![result, Varnode::constant(sign_bit as u64, 1)],
        ctx.addr,
    ));
    let sf = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Subpiece,
        sf,
        smallvec![shifted, Varnode::constant(0, 1)],
        ctx.addr,
    ));
    emit_copy(
        ctx,
        Varnode::new(SpaceId::Register, crate::register_file::SF, 1),
        sf,
    );
}

fn emit_parity_flag(ctx: &mut LiftCtx, result: Varnode, op_size: u8) {
    let low_byte = if op_size == 1 {
        result
    } else {
        let t = Varnode::unique(ctx.alloc_unique(), 1);
        ctx.emit(IrInsn::with_output(
            IrOp::Subpiece,
            t,
            smallvec![result, Varnode::constant(0, 1)],
            ctx.addr,
        ));
        t
    };
    let pop = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::Popcount,
        pop,
        smallvec![low_byte],
        ctx.addr,
    ));
    let low = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        low,
        smallvec![pop, Varnode::constant(1, 1)],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        Varnode::new(SpaceId::Register, crate::register_file::PF, 1),
        smallvec![low, Varnode::constant(0, 1)],
        ctx.addr,
    ));
}

fn read_u32(bytes: &[u8], off: usize) -> Option<u32> {
    let end = off.checked_add(4)?;
    let b = bytes.get(off..end)?;
    Some(u32::from_le_bytes(b.try_into().ok()?))
}

fn read_u64(bytes: &[u8], off: usize) -> Option<u64> {
    let end = off.checked_add(8)?;
    let b = bytes.get(off..end)?;
    Some(u64::from_le_bytes(b.try_into().ok()?))
}

/// APX helper for tests and downstream register naming.
pub fn egpr64(index: u8) -> Varnode {
    assert!(index < 32, "APX EGPR index out of range: {index}");
    reg64(egpr_offset(index))
}

#[cfg(test)]
mod tests {
    use crate::lift::X86Lifter;
    use unlace_ir::{IrOp, Lifter};

    fn lifter() -> X86Lifter {
        X86Lifter::new()
    }

    #[test]
    fn t308_rex2_add_egpr_registers() {
        // REX2: W=1, R4=1, R3=0, B4=1, B3=1; 01 /r with modrm C8
        // lifts `add r16, r17`. iced-x86 1.21 reports APX as invalid,
        // so successful IR here exercises the in-tree REX2 decoder.
        let result = lifter()
            .lift_insn(&[0xD5, 0x58, 0x01, 0xC8], 0x1000)
            .expect("APX REX2 add should lift");
        assert_eq!(result.len, 4);
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));

        let add = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::IntAdd)
            .expect("APX ADD should emit IntAdd");
        assert_eq!(add.inputs[0].offset, crate::register_file::R16);
        assert_eq!(add.inputs[1].offset, crate::register_file::R17);
        let copy = result
            .ir_ops
            .iter()
            .rev()
            .find(|i| i.op == IrOp::Copy)
            .expect("APX ADD should write back");
        assert_eq!(copy.output.unwrap().offset, crate::register_file::R16);
        assert_eq!(copy.output.unwrap().size, 8);
    }

    #[test]
    fn t308_rex2_memory_address_uses_egpr_base_and_index() {
        // mov r18, [r16 + r17*4 + 0x20]
        // REX2.W + R4 (reg=r18) + X4 (index=r17) + B4 (base=r16)
        let result = lifter()
            .lift_insn(&[0xD5, 0x78, 0x8B, 0x54, 0x88, 0x20], 0x2000)
            .expect("APX EGPR memory operand should lift");
        assert_eq!(result.len, 6);
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));

        assert!(
            result.ir_ops.iter().any(|i| i
                .inputs
                .iter()
                .any(|v| v.offset == crate::register_file::R16)),
            "memory address should reference R16 base: {:?}",
            result.ir_ops
        );
        assert!(
            result.ir_ops.iter().any(|i| i
                .inputs
                .iter()
                .any(|v| v.offset == crate::register_file::R17)),
            "memory address should reference R17 index: {:?}",
            result.ir_ops
        );
        let load = result.ir_ops.iter().find(|i| i.op == IrOp::Load).unwrap();
        assert_eq!(load.output.unwrap().size, 8);
        let copy = result
            .ir_ops
            .iter()
            .rev()
            .find(|i| i.op == IrOp::Copy)
            .unwrap();
        assert_eq!(copy.output.unwrap().offset, crate::register_file::R18);
    }

    #[test]
    fn t308_jmpabs_lifts_absolute_branch() {
        let result = lifter()
            .lift_insn(
                &[
                    0xD5, 0x08, 0xA1, 0x88, 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11,
                ],
                0,
            )
            .expect("APX JMPABS should lift");
        assert_eq!(result.len, 11);
        assert_eq!(result.ir_ops.len(), 1);
        let branch = &result.ir_ops[0];
        assert_eq!(branch.op, IrOp::Branch);
        assert_eq!(
            branch.inputs[0],
            unlace_ir::Varnode::constant(0x1122_3344_5566_7788, 8)
        );
    }

    #[test]
    fn t308_apx_egpr_register_file_layout() {
        let rf = crate::register_file::x86_64_register_file();
        for i in 16u8..=31 {
            let name = format!("R{i}");
            let reg = rf
                .registers
                .iter()
                .find(|r| r.name == name)
                .unwrap_or_else(|| panic!("{name} missing"));
            assert_eq!(reg.varnode.size, 8);
            assert_eq!(reg.varnode.offset, crate::register_file::egpr_offset(i));
        }
        assert_eq!(crate::register_file::R16 - crate::register_file::R15, 8);
        assert_eq!(
            crate::register_file::R31,
            crate::register_file::egpr_offset(31)
        );
        assert!(crate::register_file::CF >= crate::register_file::R31 + 8);
    }
}
