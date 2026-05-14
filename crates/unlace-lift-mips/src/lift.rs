use std::sync::Mutex;

use capstone::arch::mips::{MipsInsn, MipsOperand};
use capstone::prelude::*;
use capstone::{Capstone, InsnId};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::ops::{arithmetic, bitwise, control_flow, data_move, dsp, memory};
use crate::ops::{arithmetic, bitwise, control_flow, data_move, fpu, memory};
use crate::register_file::{self, ZERO, capstone_reg_to_offset, mips64_register_file};

// Capstone contains a raw `*mut c_void` handle to the C library.
// The capstone C library documents that each cs_handle is independent and
// may be used from any one thread at a time. Wrapping in Mutex<> ensures
// exclusive access, making Send+Sync safe.
struct SendCapstone(Capstone);
unsafe impl Send for SendCapstone {}

pub struct MipsLifter {
    reg_file: RegisterFile,
    cs: Mutex<SendCapstone>,
}

fn make_capstone() -> Capstone {
    Capstone::new()
        .mips()
        .mode(capstone::arch::mips::ArchMode::Mips64)
        .endian(capstone::Endian::Big)
        .detail(true)
        .build()
        .expect("capstone MIPS64 init should not fail")
}

impl MipsLifter {
    pub fn new() -> Self {
        Self {
            reg_file: mips64_register_file(),
            cs: Mutex::new(SendCapstone(make_capstone())),
        }
    }
}

impl Default for MipsLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for MipsLifter {
    fn arch(&self) -> ArchId {
        ArchId::Mips64
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }

        let guard = self
            .cs
            .lock()
            .map_err(|e| LiftError::Decode(format!("lock poisoned: {e}")))?;
        let cs = &guard.0;

        let insns = cs
            .disasm_count(bytes, addr, 1)
            .map_err(|e| LiftError::Decode(format!("capstone: {e}")))?;

        let insn = insns
            .iter()
            .next()
            .ok_or_else(|| LiftError::Decode(format!("no instruction at {addr:#x}")))?;

        let detail = cs
            .insn_detail(&insn)
            .map_err(|e| LiftError::Decode(format!("no detail: {e}")))?;

        let arch_detail = detail.arch_detail();
        let mips_detail = arch_detail
            .mips()
            .ok_or_else(|| LiftError::Decode("not MIPS detail".into()))?;

        let operands: Vec<MipsOperand> = mips_detail.operands().collect();

        let mut ctx = LiftCtx::new(addr, bytes);
        dispatch_insn(&mut ctx, insn.id(), &operands);

        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: insn.len(),
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }
}

pub struct LiftCtx<'a> {
    pub ops: Vec<IrInsn>,
    pub addr: u64,
    pub bytes: &'a [u8],
    unique_counter: u64,
}

impl<'a> LiftCtx<'a> {
    fn new(addr: u64, bytes: &'a [u8]) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            bytes,
            unique_counter: 0,
        }
    }

    pub fn alloc_unique(&mut self, size: u8) -> Varnode {
        let id = self.unique_counter;
        self.unique_counter += 1;
        Varnode::unique(id, size)
    }

    pub fn emit(&mut self, insn: IrInsn) {
        self.ops.push(insn);
    }

    pub fn emit_unimplemented(&mut self) {
        self.ops.push(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            self.addr,
        ));
    }

    pub fn emit_load(&mut self, dst: Varnode, addr_vn: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::with_output(
            IrOp::Load,
            dst,
            smallvec![ram_space, addr_vn],
            self.addr,
        ));
    }

    pub fn emit_store(&mut self, addr_vn: Varnode, value: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, addr_vn, value],
            self.addr,
        ));
    }

    pub fn read_reg(&self, reg_id: RegId) -> Option<Varnode> {
        let offset = capstone_reg_to_offset(reg_id)?;
        if offset == ZERO {
            Some(Varnode::constant(0, 8))
        } else {
            Some(register_file::reg64(offset))
        }
    }

    pub fn write_reg(&self, reg_id: RegId) -> Option<Varnode> {
        let offset = capstone_reg_to_offset(reg_id)?;
        if offset == ZERO {
            return None;
        }
        Some(register_file::reg64(offset))
    }

    pub fn read_operand(&self, op: &MipsOperand) -> Option<Varnode> {
        match op {
            MipsOperand::Reg(reg) => self.read_reg(*reg),
            MipsOperand::Imm(imm) => Some(Varnode::constant(*imm as u64, 8)),
            _ => None,
        }
    }

    pub fn mem_addr(&mut self, op: &MipsOperand) -> Option<Varnode> {
        match op {
            MipsOperand::Mem(mem) => {
                let base = self.read_reg(mem.base())?;
                let disp = mem.disp();
                if disp == 0 {
                    Some(base)
                } else {
                    let disp_vn = Varnode::constant(disp as u64, 8);
                    let t = self.alloc_unique(8);
                    self.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![base, disp_vn],
                        self.addr,
                    ));
                    Some(t)
                }
            }
            _ => None,
        }
    }

    pub fn write_to_reg(&mut self, dst: Varnode, value: Varnode) {
        self.emit(IrInsn::with_output(
            IrOp::Copy,
            dst,
            smallvec![value],
            self.addr,
        ));
    }

    

#[cfg(test)]
    pub fn ir_ops(&self) -> &[IrInsn] {
        &self.ops
    }
}

fn raw_word(ctx: &LiftCtx) -> Option<u32> {
    ctx.bytes
        .get(..4)
        .map(|bytes| u32::from_be_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]))
}

fn try_dispatch_raw_fpu(ctx: &mut LiftCtx, _id: InsnId, ops: &[MipsOperand]) -> bool {
    let Some(word) = raw_word(ctx) else {
        return false;
    };

    let opcode = (word >> 26) & 0x3f;
    match opcode {
        0x11 => dispatch_cop1_fpu(ctx, word, ops),
        0x31 => {
            fpu::lift_fpu_load(ctx, ops, 4);
            true
        }
        0x35 => {
            fpu::lift_fpu_load(ctx, ops, 8);
            true
        }
        0x39 => {
            fpu::lift_fpu_store(ctx, ops, 4);
            true
        }
        0x3d => {
            fpu::lift_fpu_store(ctx, ops, 8);
            true
        }
        _ => false,
    }
}

fn dispatch_cop1_fpu(ctx: &mut LiftCtx, word: u32, ops: &[MipsOperand]) -> bool {
    let fmt = ((word >> 21) & 0x1f) as u8;
    let funct = (word & 0x3f) as u8;
    let size = match fmt {
        16 => 4, // .s
        17 => 8, // .d
        _ => 0,
    };

    match fmt {
        0 => fpu::lift_mfc1(ctx, ops, 4),
        1 => fpu::lift_dmfc1(ctx, ops),
        2 => fpu::lift_cfc1(ctx, ops),
        4 => fpu::lift_mtc1(ctx, ops, 4),
        5 => fpu::lift_dmtc1(ctx, ops),
        6 => fpu::lift_ctc1(ctx, ops),
        8 => {
            let tf = ((word >> 16) & 1) != 0;
            fpu::lift_bc1(ctx, ops, tf);
        }
        16 | 17 => match funct {
            0x00 => fpu::lift_fp_add(ctx, ops, size),
            0x01 => fpu::lift_fp_sub(ctx, ops, size),
            0x02 => fpu::lift_fp_mul(ctx, ops, size),
            0x03 => fpu::lift_fp_div(ctx, ops, size),
            0x04 => fpu::lift_fp_sqrt(ctx, ops, size),
            0x05 => fpu::lift_fp_abs(ctx, ops, size),
            0x06 => fpu::lift_fp_mov(ctx, ops, size),
            0x07 => fpu::lift_fp_neg(ctx, ops, size),
            0x20 => fpu::lift_fp_convert(ctx, ops, 4, size), // cvt.s
            0x21 => fpu::lift_fp_convert(ctx, ops, 8, size), // cvt.d
            0x24 => fpu::lift_fp_round_to_int(ctx, ops, 4, size, IrOp::FloatRound),
            0x25 => fpu::lift_fp_round_to_int(ctx, ops, 4, size, IrOp::FloatTrunc),
            0x26 => fpu::lift_fp_round_to_int(ctx, ops, 4, size, IrOp::FloatCeil),
            0x27 => fpu::lift_fp_round_to_int(ctx, ops, 4, size, IrOp::FloatFloor),
            0x30 | 0x32 => fpu::lift_fp_compare(ctx, ops, size, IrOp::FloatLess),
            0x31 | 0x33 => fpu::lift_fp_compare(ctx, ops, size, IrOp::FloatEqual),
            0x34 | 0x36 => fpu::lift_fp_compare(ctx, ops, size, IrOp::FloatLessequal),
            0x35 | 0x37 => fpu::lift_fp_compare(ctx, ops, size, IrOp::FloatNotequal),
            _ => fpu::lift_fp_unimplemented_callother(ctx, u64::from(funct), ops),
        },
        20 | 21 => match funct {
            0x20 => fpu::lift_fp_int_to_float(ctx, ops, 4, fmt),
            0x21 => fpu::lift_fp_int_to_float(ctx, ops, 8, fmt),
            _ => fpu::lift_fp_unimplemented_callother(ctx, u64::from(funct), ops),
        },
        _ => return false,
    }
    true

/// MIPS ISA mode for mixed-mode binaries.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MipsIsaMode {
    /// Standard MIPS32/MIPS64 (32-bit instructions).
    Mips32,
    /// MIPS16e compact encoding (16/32-bit mixed).
    Mips16e,
    /// microMIPS compact encoding (16/32-bit mixed).
    MicroMips,
}

/// Detect the ISA mode at a given address from the function's entry point.
pub fn detect_isa_mode(addr: u64, has_micromips: bool) -> (u64, MipsIsaMode) {
    if addr & 1 != 0 {
        let real_addr = addr & !1u64;
        let mode = if has_micromips {
            MipsIsaMode::MicroMips
        } else {
            MipsIsaMode::Mips16e
        };
        (real_addr, mode)
    } else {
        (addr, MipsIsaMode::Mips32)
    }
}

/// Loongson-specific MIPS extension detection.
///
/// Loongson CPUs (used in Chinese domestic processors) add proprietary
/// multimedia and fixed-point extensions to the MIPS ISA. These include
/// MMI (Multi-Media Instructions) and Loongson-EXT (extended operations).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct LoongsonExtensions {
    /// Loongson MMI (Multi-Media Instructions): SIMD ops on GPRs.
    pub mmi: bool,
    /// Loongson EXT: additional bit-manipulation and atomic ops.
    pub ext: bool,
    /// Loongson EXT2: further extensions (cam, gsexc, etc.).
    pub ext2: bool,
}

impl LoongsonExtensions {
    /// Detect Loongson extensions from ELF e_flags or .MIPS.abiflags.
    pub fn from_elf_flags(flags: u32) -> Self {
        Self {
            // EF_MIPS_MACH_LS2E = 0x00A00000
            // EF_MIPS_MACH_LS2F = 0x00A10000
            // EF_MIPS_MACH_LS3A = 0x00A20000
            mmi: (flags & 0x00FF0000) >= 0x00A00000,
            ext: (flags & 0x00FF0000) >= 0x00A10000,
            ext2: (flags & 0x00FF0000) >= 0x00A20000,
        }
    }
}

/// Loongson MMI callother IDs for multimedia SIMD-on-GPR instructions.
pub const CALLOTHER_LOONGSON_PADDW: u64 = 0x700;
pub const CALLOTHER_LOONGSON_PSUBW: u64 = 0x701;
pub const CALLOTHER_LOONGSON_PMULUW: u64 = 0x702;
pub const CALLOTHER_LOONGSON_PSHUFH: u64 = 0x703;
pub const CALLOTHER_LOONGSON_PUNPCKL: u64 = 0x704;
pub const CALLOTHER_LOONGSON_PUNPCKH: u64 = 0x705;

fn dispatch_insn(ctx: &mut LiftCtx, id: InsnId, ops: &[MipsOperand]) {
    use MipsInsn::*;
    let insn_id = id.0;

    if try_dispatch_raw_fpu(ctx, id, ops) {
        return;
    }

    match insn_id {
        x if x == MIPS_INS_NOP as u32 => data_move::lift_nop(ctx),
        x if x == MIPS_INS_MOVE as u32 => data_move::lift_move(ctx, ops),
        x if x == MIPS_INS_LUI as u32 => data_move::lift_lui(ctx, ops),
        x if x == MIPS_INS_MFHI as u32 => data_move::lift_mfhi(ctx, ops),
        x if x == MIPS_INS_MFLO as u32 => data_move::lift_mflo(ctx, ops),

        x if x == MIPS_INS_ADD as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_ADDU as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_ADDI as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_ADDIU as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_DADD as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_DADDU as u32 => arithmetic::lift_add(ctx, ops),
        x if x == MIPS_INS_DADDI as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_DADDIU as u32 => arithmetic::lift_addi(ctx, ops),
        x if x == MIPS_INS_SUB as u32 => arithmetic::lift_sub(ctx, ops),
        x if x == MIPS_INS_SUBU as u32 => arithmetic::lift_sub(ctx, ops),
        x if x == MIPS_INS_DSUBU as u32 => arithmetic::lift_sub(ctx, ops),
        x if x == MIPS_INS_MULT as u32 => arithmetic::lift_mult(ctx, ops),
        x if x == MIPS_INS_MULTU as u32 => arithmetic::lift_mult(ctx, ops),
        x if x == MIPS_INS_DIV as u32 => arithmetic::lift_div(ctx, ops),
        x if x == MIPS_INS_DIVU as u32 => arithmetic::lift_div(ctx, ops),
        x if x == MIPS_INS_SLT as u32 => arithmetic::lift_slt(ctx, ops),
        x if x == MIPS_INS_SLTU as u32 => arithmetic::lift_sltu(ctx, ops),
        x if x == MIPS_INS_SLTI as u32 => arithmetic::lift_slt(ctx, ops),
        x if x == MIPS_INS_SLTIU as u32 => arithmetic::lift_sltu(ctx, ops),
        x if x == MIPS_INS_NEGU as u32 => arithmetic::lift_negu(ctx, ops),

        x if x == MIPS_INS_AND as u32 => bitwise::lift_and(ctx, ops),
        x if x == MIPS_INS_ANDI as u32 => bitwise::lift_andi(ctx, ops),
        x if x == MIPS_INS_OR as u32 => bitwise::lift_or(ctx, ops),
        x if x == MIPS_INS_ORI as u32 => bitwise::lift_ori(ctx, ops),
        x if x == MIPS_INS_XOR as u32 => bitwise::lift_xor(ctx, ops),
        x if x == MIPS_INS_XORI as u32 => bitwise::lift_xori(ctx, ops),
        x if x == MIPS_INS_NOR as u32 => bitwise::lift_nor(ctx, ops),
        x if x == MIPS_INS_SLL as u32 => bitwise::lift_sll(ctx, ops),
        x if x == MIPS_INS_SRL as u32 => bitwise::lift_srl(ctx, ops),
        x if x == MIPS_INS_SRA as u32 => bitwise::lift_sra(ctx, ops),
        x if x == MIPS_INS_SLLV as u32 => bitwise::lift_sllv(ctx, ops),
        x if x == MIPS_INS_SRLV as u32 => bitwise::lift_srlv(ctx, ops),
        x if x == MIPS_INS_SRAV as u32 => bitwise::lift_srav(ctx, ops),
        x if x == MIPS_INS_DSLL as u32 => bitwise::lift_sll(ctx, ops),
        x if x == MIPS_INS_DSRL as u32 => bitwise::lift_srl(ctx, ops),
        x if x == MIPS_INS_DSRA as u32 => bitwise::lift_sra(ctx, ops),
        x if x == MIPS_INS_ADDQ as u32 => dsp::lift_addq(ctx, ops),
        x if x == MIPS_INS_ADDQ_S as u32 => dsp::lift_addq_s(ctx, ops),
        x if x == MIPS_INS_ADDQH as u32 => dsp::lift_addqh(ctx, ops),
        x if x == MIPS_INS_ADDQH_R as u32 => dsp::lift_addqh_r(ctx, ops),
        x if x == MIPS_INS_SUBQ as u32 => dsp::lift_subq(ctx, ops),
        x if x == MIPS_INS_SUBQ_S as u32 => dsp::lift_subq_s(ctx, ops),
        x if x == MIPS_INS_SUBQH as u32 => dsp::lift_subqh(ctx, ops),
        x if x == MIPS_INS_SUBQH_R as u32 => dsp::lift_subqh_r(ctx, ops),
        x if x == MIPS_INS_APPEND as u32 => dsp::lift_append(ctx, ops),
        x if x == MIPS_INS_BALIGN as u32 => dsp::lift_balign(ctx, ops),
        x if x == MIPS_INS_PREPEND as u32 => dsp::lift_prepend(ctx, ops),
        x if x == MIPS_INS_PACKRL as u32 => dsp::lift_packrl(ctx, ops),
        x if x == MIPS_INS_PICK as u32 => dsp::lift_pick(ctx, ops),
        x if x == MIPS_INS_PRECEQ as u32 => dsp::lift_preceq(ctx, ops),
        x if x == MIPS_INS_PRECEQU as u32 => dsp::lift_precequ(ctx, ops),
        x if x == MIPS_INS_PRECEU as u32 => dsp::lift_preceu(ctx, ops),
        x if x == MIPS_INS_PRECRQ as u32 => dsp::lift_precrq(ctx, ops),
        x if x == MIPS_INS_PRECRQU_S as u32 => dsp::lift_precrqu_s(ctx, ops),
        x if x == MIPS_INS_PRECRQ_RS as u32 => dsp::lift_precrq_rs(ctx, ops),
        x if x == MIPS_INS_PRECR as u32 => dsp::lift_precr(ctx, ops),
        x if x == MIPS_INS_PRECR_SRA as u32 => dsp::lift_precr_sra(ctx, ops),
        x if x == MIPS_INS_PRECR_SRA_R as u32 => dsp::lift_precr_sra_r(ctx, ops),
        x if x == MIPS_INS_REPL as u32 => dsp::lift_repl(ctx, ops),
        x if x == MIPS_INS_REPLV as u32 => dsp::lift_replv(ctx, ops),
        x if x == MIPS_INS_CMP as u32 => dsp::lift_cmp(ctx, ops),
        x if x == MIPS_INS_DPA as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQ_S as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQ_SA as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQX_S as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAQX_SA as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAU as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPAX as u32 => dsp::lift_dpa(ctx, ops),
        x if x == MIPS_INS_DPS as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQ_S as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQ_SA as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQX_S as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSQX_SA as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSU as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_DPSX as u32 => dsp::lift_dps(ctx, ops),
        x if x == MIPS_INS_MULQ_RS as u32 => dsp::lift_mulq(ctx, ops),
        x if x == MIPS_INS_MULQ_S as u32 => dsp::lift_mulq(ctx, ops),
        x if x == MIPS_INS_SHILO as u32 => dsp::lift_shilo(ctx, ops),
        x if x == MIPS_INS_SHILOV as u32 => dsp::lift_shilov(ctx, ops),
        x if x == MIPS_INS_SHLL as u32 => dsp::lift_shll(ctx, ops),
        x if x == MIPS_INS_SHLL_S as u32 => dsp::lift_shll_s(ctx, ops),
        x if x == MIPS_INS_SHRA as u32 => dsp::lift_shra(ctx, ops),
        x if x == MIPS_INS_SHRA_R as u32 => dsp::lift_shra_r(ctx, ops),
        x if x == MIPS_INS_SHRL as u32 => dsp::lift_shrl(ctx, ops),
        x if x == MIPS_INS_SHLLV as u32 => dsp::lift_shllv(ctx, ops),
        x if x == MIPS_INS_SHLLV_S as u32 => dsp::lift_shllv_s(ctx, ops),
        x if x == MIPS_INS_SHRAV as u32 => dsp::lift_shrav(ctx, ops),
        x if x == MIPS_INS_SHRAV_R as u32 => dsp::lift_shrav_r(ctx, ops),
        x if x == MIPS_INS_SHRLV as u32 => dsp::lift_shrlv(ctx, ops),
        x if x == MIPS_INS_EXTP as u32 => dsp::lift_extp(ctx, ops),
        x if x == MIPS_INS_EXTPV as u32 => dsp::lift_extpv(ctx, ops),
        x if x == MIPS_INS_EXTPDP as u32 => dsp::lift_extpdp(ctx, ops),
        x if x == MIPS_INS_EXTPDPV as u32 => dsp::lift_extpdpv(ctx, ops),
        x if x == MIPS_INS_INSV as u32 => dsp::lift_insv(ctx, ops),
        x if x == MIPS_INS_RDDSP as u32 => dsp::lift_rddsp(ctx, ops),
        x if x == MIPS_INS_WRDSP as u32 => dsp::lift_wrdsp(ctx, ops),

        x if x == MIPS_INS_BEQ as u32 => control_flow::lift_beq(ctx, ops),
        x if x == MIPS_INS_BNE as u32 => control_flow::lift_bne(ctx, ops),
        x if x == MIPS_INS_BEQZ as u32 => control_flow::lift_beqz(ctx, ops),
        x if x == MIPS_INS_BNEZ as u32 => control_flow::lift_bnez(ctx, ops),
        x if x == MIPS_INS_BGEZ as u32 => control_flow::lift_bgez(ctx, ops),
        x if x == MIPS_INS_BLTZ as u32 => control_flow::lift_bltz(ctx, ops),
        x if x == MIPS_INS_BGTZ as u32 => control_flow::lift_bgtz(ctx, ops),
        x if x == MIPS_INS_BLEZ as u32 => control_flow::lift_blez(ctx, ops),
        x if x == MIPS_INS_BGEZAL as u32 => control_flow::lift_bgezal(ctx, ops),
        x if x == MIPS_INS_BLTZAL as u32 => control_flow::lift_bltzal(ctx, ops),
        x if x == MIPS_INS_B as u32 => control_flow::lift_b(ctx, ops),
        x if x == MIPS_INS_BAL as u32 => control_flow::lift_bal(ctx, ops),
        x if x == MIPS_INS_J as u32 => control_flow::lift_j(ctx, ops),
        x if x == MIPS_INS_JAL as u32 => control_flow::lift_jal(ctx, ops),
        x if x == MIPS_INS_JR as u32 => control_flow::lift_jr(ctx, ops),
        x if x == MIPS_INS_JALR as u32 => control_flow::lift_jalr(ctx, ops),

        x if x == MIPS_INS_LW as u32 => memory::lift_load(ctx, ops, 4),
        x if x == MIPS_INS_LD as u32 => memory::lift_load(ctx, ops, 8),
        x if x == MIPS_INS_LH as u32 => memory::lift_load(ctx, ops, 2),
        x if x == MIPS_INS_LHU as u32 => memory::lift_load(ctx, ops, 2),
        x if x == MIPS_INS_LB as u32 => memory::lift_load(ctx, ops, 1),
        x if x == MIPS_INS_LBU as u32 => memory::lift_load(ctx, ops, 1),
        x if x == MIPS_INS_SW as u32 => memory::lift_store(ctx, ops, 4),
        x if x == MIPS_INS_SD as u32 => memory::lift_store(ctx, ops, 8),
        x if x == MIPS_INS_SH as u32 => memory::lift_store(ctx, ops, 2),
        x if x == MIPS_INS_SB as u32 => memory::lift_store(ctx, ops, 1),

        // MIPS Coprocessor 1 / FPU loads, stores, register moves, and branches.
        x if x == MIPS_INS_LWC1 as u32 => fpu::lift_fpu_load(ctx, ops, 4),
        x if x == MIPS_INS_LDC1 as u32 => fpu::lift_fpu_load(ctx, ops, 8),
        x if x == MIPS_INS_SWC1 as u32 => fpu::lift_fpu_store(ctx, ops, 4),
        x if x == MIPS_INS_SDC1 as u32 => fpu::lift_fpu_store(ctx, ops, 8),
        x if x == MIPS_INS_MFC1 as u32 => fpu::lift_mfc1(ctx, ops, 4),
        x if x == MIPS_INS_DMFC1 as u32 => fpu::lift_mfc1(ctx, ops, 8),
        x if x == MIPS_INS_MTC1 as u32 => fpu::lift_mtc1(ctx, ops, 4),
        x if x == MIPS_INS_DMTC1 as u32 => fpu::lift_mtc1(ctx, ops, 8),
        x if x == MIPS_INS_CFC1 as u32 => fpu::lift_cfc1(ctx, ops),
        x if x == MIPS_INS_CTC1 as u32 => fpu::lift_ctc1(ctx, ops),
        x if x == MIPS_INS_BC1F as u32 => fpu::lift_bc1(ctx, ops, false),
        x if x == MIPS_INS_BC1T as u32 => fpu::lift_bc1(ctx, ops, true),

        // Capstone's MIPS ids distinguish float single-precision aliases for
        // arithmetic and comparisons.  Generic ids cover fmt-qualified forms
        // such as add.d/sub.d/mov.d; the raw decoder below refines their sizes.
        x if x == MIPS_INS_MUL_S as u32 => fpu::lift_fp_mul(ctx, ops, 4),
        x if x == MIPS_INS_DIV_S as u32 => fpu::lift_fp_div(ctx, ops, 4),
        x if x == MIPS_INS_CMPGDU as u32 => fpu::lift_fp_compare(ctx, ops, 4, IrOp::FloatLess),
        x if x == MIPS_INS_CMPGU as u32 => fpu::lift_fp_compare(ctx, ops, 4, IrOp::FloatLess),
        x if x == MIPS_INS_CMPU as u32 => fpu::lift_fp_compare(ctx, ops, 4, IrOp::FloatEqual),

        _ => ctx.emit_unimplemented(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::IrOp;

    fn lifter() -> MipsLifter {
        MipsLifter::new()
    }

    #[test]
    fn test_arch_is_mips64() {
        assert_eq!(lifter().arch(), ArchId::Mips64);
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 78);
        assert_eq!(rf.registers.len(), 69);
        assert_eq!(rf.registers[0].name, "$zero");
        assert_eq!(rf.registers[31].name, "$ra");
        assert_eq!(rf.registers[32].name, "HI");
        assert_eq!(rf.registers[33].name, "LO");
        assert_eq!(rf.registers[34].name, "PC");
        assert_eq!(rf.registers[35].name, "DSPCARRY");
        assert_eq!(rf.registers[36].name, "DSPCCOND");
        assert_eq!(rf.registers[37].name, "DSPOUTFLAG");
        assert_eq!(rf.registers[38].name, "DSPPOS");
        assert_eq!(rf.registers[39].name, "DSPSCOUNT");
        assert_eq!(rf.registers[40].name, "AC0");
        assert_eq!(rf.registers[43].name, "AC3");
        assert_eq!(rf.registers[35].name, "$f0");
        assert_eq!(rf.registers[66].name, "$f31");
        assert_eq!(rf.registers[67].name, "FCC0");
        assert_eq!(rf.registers[68].name, "FCSR");
    }

    #[test]
    fn test_short_buffer() {
        let l = lifter();
        assert!(matches!(
            l.lift_insn(&[0x00, 0x00], 0x1000),
            Err(LiftError::ShortBuffer)
        ));
    }

    // NOP: sll $zero, $zero, 0 = 0x00000000 (big-endian)
    #[test]
    fn test_nop() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x00, 0x00, 0x00], 0x1000)
            .expect("should decode NOP");
        assert_eq!(result.len, 4);
        assert_eq!(result.ir_ops.len(), 1);
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
    }

    // ADDIU $v0, $zero, 42 = 0x2402002A (big-endian)
    // opcode=001001 rs=00000($zero) rt=00010($v0) imm=0x002A
    #[test]
    fn test_addiu_immediate() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x24, 0x02, 0x00, 0x2A], 0x1000)
            .expect("should decode ADDIU");
        assert_eq!(result.len, 4);
        let has_add = result.ir_ops.iter().any(|op| op.op == IrOp::IntAdd);
        assert!(has_add, "ADDIU should produce IntAdd: {:?}", result.ir_ops);
    }

    // ADDU $v0, $a0, $a1 = 0x00852021 (big-endian)
    // opcode=000000 rs=00100($a0) rt=00101($a1) rd=00010($v0) shamt=00000 funct=100001
    #[test]
    fn test_addu() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x20, 0x21], 0x1000)
            .expect("should decode ADDU");
        assert_eq!(result.len, 4);
        let has_add = result.ir_ops.iter().any(|op| op.op == IrOp::IntAdd);
        assert!(has_add, "ADDU should produce IntAdd: {:?}", result.ir_ops);
    }

    // LW $v0, 0($sp) = 0x8FA20000 (big-endian)
    // opcode=100011 base=11101($sp) rt=00010($v0) offset=0
    #[test]
    fn test_lw() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x8F, 0xA2, 0x00, 0x00], 0x1000)
            .expect("should decode LW");
        assert_eq!(result.len, 4);
        let has_load = result.ir_ops.iter().any(|op| op.op == IrOp::Load);
        assert!(has_load, "LW should produce Load: {:?}", result.ir_ops);
    }

    // SW $v0, 0($sp) = 0xAFA20000 (big-endian)
    // opcode=101011 base=11101($sp) rt=00010($v0) offset=0
    #[test]
    fn test_sw() {
        let l = lifter();
        let result = l
            .lift_insn(&[0xAF, 0xA2, 0x00, 0x00], 0x1000)
            .expect("should decode SW");
        assert_eq!(result.len, 4);
        let has_store = result.ir_ops.iter().any(|op| op.op == IrOp::Store);
        assert!(has_store, "SW should produce Store: {:?}", result.ir_ops);
    }

    // BEQ $v0, $zero, +8 = 0x10400002 (big-endian)
    // opcode=000100 rs=00010($v0) rt=00000($zero) offset=0x0002
    #[test]
    fn test_beq() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x10, 0x40, 0x00, 0x02], 0x1000)
            .expect("should decode BEQ");
        assert_eq!(result.len, 4);
        let has_cbranch = result.ir_ops.iter().any(|op| op.op == IrOp::Cbranch);
        assert!(
            has_cbranch,
            "BEQ should produce Cbranch: {:?}",
            result.ir_ops
        );
    }

    // J 0x00400100 = 0x08100040 (big-endian)
    // opcode=000010 target=0x00100040 (shifted left by 2 = 0x00400100)
    #[test]
    fn test_j() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x08, 0x10, 0x00, 0x40], 0x1000)
            .expect("should decode J");
        assert_eq!(result.len, 4);
        let has_branch = result.ir_ops.iter().any(|op| op.op == IrOp::Branch);
        assert!(has_branch, "J should produce Branch: {:?}", result.ir_ops);
    }

    // JAL 0x00400100 = 0x0C100040 (big-endian)
    #[test]
    fn test_jal() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x0C, 0x10, 0x00, 0x40], 0x1000)
            .expect("should decode JAL");
        assert_eq!(result.len, 4);
        let has_call = result.ir_ops.iter().any(|op| op.op == IrOp::Call);
        assert!(has_call, "JAL should produce Call: {:?}", result.ir_ops);
    }

    // JR $ra = 0x03E00008 (big-endian)
    // opcode=000000 rs=11111($ra) funct=001000
    #[test]
    fn test_jr_ra() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x03, 0xE0, 0x00, 0x08], 0x1000)
            .expect("should decode JR");
        assert_eq!(result.len, 4);
        let has_return = result.ir_ops.iter().any(|op| op.op == IrOp::Return);
        assert!(
            has_return,
            "JR $ra should produce Return: {:?}",
            result.ir_ops
        );
    }

    // LUI $at, 0x0040 = 0x3C010040 (big-endian)
    // opcode=001111 rs=00000 rt=00001($at) imm=0x0040
    #[test]
    fn test_lui() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x3C, 0x01, 0x00, 0x40], 0x1000)
            .expect("should decode LUI");
        assert_eq!(result.len, 4);
        let has_left = result.ir_ops.iter().any(|op| op.op == IrOp::IntLeft);
        assert!(
            has_left,
            "LUI should produce IntLeft (shift left 16): {:?}",
            result.ir_ops
        );
    }

    // AND $v0, $a0, $a1 = 0x00852024 (big-endian)
    #[test]
    fn test_and() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x20, 0x24], 0x1000)
            .expect("should decode AND");
        assert_eq!(result.len, 4);
        let has_and = result.ir_ops.iter().any(|op| op.op == IrOp::IntAnd);
        assert!(has_and, "AND should produce IntAnd: {:?}", result.ir_ops);
    }

    // SLL $v0, $v0, 2 = 0x00021080 (big-endian)
    // opcode=000000 rs=00000 rt=00010($v0) rd=00010($v0) shamt=00010 funct=000000
    #[test]
    fn test_sll() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x02, 0x10, 0x80], 0x1000)
            .expect("should decode SLL");
        assert_eq!(result.len, 4);
        let has_left = result.ir_ops.iter().any(|op| op.op == IrOp::IntLeft);
        assert!(has_left, "SLL should produce IntLeft: {:?}", result.ir_ops);
    }

    // SLT $v0, $a0, $a1 = 0x0085102A (big-endian)
    #[test]
    fn test_slt() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x10, 0x2A], 0x1000)
            .expect("should decode SLT");
        assert_eq!(result.len, 4);
        let has_sless = result.ir_ops.iter().any(|op| op.op == IrOp::IntSless);
        assert!(
            has_sless,
            "SLT should produce IntSless: {:?}",
            result.ir_ops
        );
    }

    // MULT $a0, $a1 = 0x00850018 (big-endian)
    // opcode=000000 rs=00100($a0) rt=00101($a1) rd=00000 shamt=00000 funct=011000
    #[test]
    fn test_mult() {
        let l = lifter();
        let result = l
            .lift_insn(&[0x00, 0x85, 0x00, 0x18], 0x1000)
            .expect("should decode MULT");
        assert_eq!(result.len, 4);
        let has_mult = result.ir_ops.iter().any(|op| op.op == IrOp::IntMult);
        assert!(has_mult, "MULT should produce IntMult: {:?}", result.ir_ops);
    }

    #[test]
    fn test_fpu_add_s() {
        let l = lifter();
        // add.s $f0, $f1, $f2 = COP1 fmt=S ft=2 fs=1 fd=0 funct=0
        let result = l
            .lift_insn(&[0x46, 0x02, 0x08, 0x00], 0x1000)
            .expect("should decode add.s");
        assert_eq!(result.len, 4);
        assert!(
            result.ir_ops.iter().any(|op| op.op == IrOp::FloatAdd),
            "add.s should produce FloatAdd: {:?}",
            result.ir_ops
        );
    }

    #[test]
    fn test_fpu_add_d() {
        let l = lifter();
        // add.d $f0, $f1, $f2 = COP1 fmt=D ft=2 fs=1 fd=0 funct=0
        let result = l
            .lift_insn(&[0x46, 0x22, 0x08, 0x00], 0x1000)
            .expect("should decode add.d");
        assert_eq!(result.len, 4);
        assert!(
            result.ir_ops.iter().any(|op| op.op == IrOp::FloatAdd),
            "add.d should produce FloatAdd: {:?}",
            result.ir_ops
        );
    }

    #[test]
    fn test_lwc1_and_swc1() {
        let l = lifter();
        let load = l
            .lift_insn(&[0xC7, 0xA0, 0x00, 0x00], 0x1000)
            .expect("should decode lwc1");
        assert!(
            load.ir_ops.iter().any(|op| op.op == IrOp::Load),
            "lwc1 should produce Load: {:?}",
            load.ir_ops
        );

        let store = l
            .lift_insn(&[0xE7, 0xA0, 0x00, 0x00], 0x1000)
            .expect("should decode swc1");
        assert!(
            store.ir_ops.iter().any(|op| op.op == IrOp::Store),
            "swc1 should produce Store: {:?}",
            store.ir_ops
        );
    }

    #[test]
    fn test_mfc1_mtc1_moves() {
        let l = lifter();
        let mfc1 = l
            .lift_insn(&[0x44, 0x02, 0x00, 0x00], 0x1000)
            .expect("should decode mfc1");
        assert!(
            mfc1.ir_ops.iter().any(|op| op.op == IrOp::Copy),
            "mfc1 should copy from FPR to GPR: {:?}",
            mfc1.ir_ops
        );

        let mtc1 = l
            .lift_insn(&[0x44, 0x82, 0x00, 0x00], 0x1000)
            .expect("should decode mtc1");
        assert!(
            mtc1.ir_ops.iter().any(|op| op.op == IrOp::Copy),
            "mtc1 should copy from GPR to FPR: {:?}",
            mtc1.ir_ops
        );
    }

    // $zero writes are suppressed (write to $zero is no-op)
    #[test]
    fn test_zero_hardwired() {
        let l = lifter();
        // ADDIU $zero, $zero, 5 = 0x24000005
        let result = l
            .lift_insn(&[0x24, 0x00, 0x00, 0x05], 0x1000)
            .expect("should decode");
        // Should NOT have a Copy to $zero register
        for op in &result.ir_ops {
            if op.op == IrOp::Copy {
                if let Some(output) = &op.output {
                    assert!(
                        !(output.space == SpaceId::Register && output.offset == 0),
                        "should not write to $zero register"
                    );
                }
            }
        }
    }


    #[test]
    fn test_addq_updates_dsp_outflag() {
        let mut ctx = LiftCtx::new(0x1000);
        let ops = [
            MipsOperand::Reg(capstone::RegId(capstone::arch::mips::MipsReg::MIPS_REG_2 as u16)),
            MipsOperand::Reg(capstone::RegId(capstone::arch::mips::MipsReg::MIPS_REG_4 as u16)),
            MipsOperand::Reg(capstone::RegId(capstone::arch::mips::MipsReg::MIPS_REG_5 as u16)),
        ];
        crate::ops::dsp::lift_addq(&mut ctx, &ops);
        assert!(ctx.ir_ops().iter().any(|op| op.op == IrOp::IntAdd));
        assert!(ctx.ir_ops().iter().any(|op| op.output == Some(Varnode::reg(crate::register_file::DSPOUTFLAG, 8))));
    }

    #[test]
    fn test_rddsp_lowers_to_callother() {
        let mut ctx = LiftCtx::new(0x1000);
        let ops = [
            MipsOperand::Reg(capstone::RegId(capstone::arch::mips::MipsReg::MIPS_REG_2 as u16)),
            MipsOperand::Imm(0x1f),
        ];
        crate::ops::dsp::lift_rddsp(&mut ctx, &ops);
        assert!(ctx.ir_ops().iter().any(|op| op.op == IrOp::Callother));
    }

    // Unknown instruction falls back to Unimplemented
    #[test]
    fn test_unknown_insn() {
        let l = lifter();
        // Try a less common instruction that we don't handle
        // BREAK = 0x0000000D
        let result = l.lift_insn(&[0x00, 0x00, 0x00, 0x0D], 0x1000);
        match result {
            Ok(lifted) => {
                assert!(lifted.ir_ops.iter().any(|op| op.op == IrOp::Unimplemented));
            }
            Err(_) => {} // decode failure is also acceptable
        }
    }

    #[test]
    fn detect_isa_mode_standard() {
        let (addr, mode) = detect_isa_mode(0x80001000, false);
        assert_eq!(addr, 0x80001000);
        assert_eq!(mode, MipsIsaMode::Mips32);
    }

    #[test]
    fn detect_isa_mode_mips16e() {
        let (addr, mode) = detect_isa_mode(0x80001001, false);
        assert_eq!(addr, 0x80001000);
        assert_eq!(mode, MipsIsaMode::Mips16e);
    }

    #[test]
    fn detect_isa_mode_micromips() {
        let (addr, mode) = detect_isa_mode(0x80001001, true);
        assert_eq!(addr, 0x80001000);
        assert_eq!(mode, MipsIsaMode::MicroMips);
    fn loongson_ext_from_ls3a_flags() {
        let ext = LoongsonExtensions::from_elf_flags(0x00A20000);
        assert!(ext.mmi);
        assert!(ext.ext);
        assert!(ext.ext2);
    }

    #[test]
    fn loongson_ext_from_generic_mips() {
        let ext = LoongsonExtensions::from_elf_flags(0x00000000);
        assert!(!ext.mmi);
        assert!(!ext.ext);
        assert!(!ext.ext2);
    }
}
