//! AArch64 lifting context and top-level mnemonic dispatch.

use std::cell::RefCell;

use capstone::Insn;
use capstone::arch::arm64::{Arm64Insn, Arm64OpMem, Arm64OperandType, Arm64Shift};
use capstone::prelude::*;
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::ops::{arithmetic, bitwise, control_flow, data_move};
use crate::register_file::{aarch64_register_file, reg_varnode};

thread_local! {
    static ARM64_CS: RefCell<Option<Capstone>> = const { RefCell::new(None) };
}

pub struct ArmLifter {
    reg_file: RegisterFile,
}

impl ArmLifter {
    pub fn new() -> Self {
        Self {
            reg_file: aarch64_register_file(),
        }
    }

    fn make_capstone() -> Capstone {
        Capstone::new()
            .arm64()
            .mode(arch::arm64::ArchMode::Arm)
            .detail(true)
            .build()
            .expect("failed to build capstone arm64")
    }
}

impl Default for ArmLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for ArmLifter {
    fn arch(&self) -> ArchId {
        ArchId::AArch64
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }

        let raw = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
        if try_pac_bti_nop(raw) {
            return Ok(LiftedInsn {
                ir_ops: Vec::new(),
                len: 4,
            });
        }
        let rewritten = pac_auth_branch_rewrite(raw).map(u32::to_le_bytes);
        let decode_bytes: &[u8] = rewritten.as_ref().map(|b| &b[..]).unwrap_or(bytes);

        ARM64_CS.with(|cell| {
            let mut slot = cell.borrow_mut();
            if slot.is_none() {
                *slot = Some(Self::make_capstone());
            }
            let cs = slot.as_ref().expect("thread-local Capstone initialized");

            let insns = cs
                .disasm_count(decode_bytes, addr, 1)
                .map_err(|e| LiftError::Decode(format!("{e}")))?;

            let insn = insns
                .as_ref()
                .first()
                .ok_or_else(|| LiftError::Decode(format!("no instruction decoded at {addr:#x}")))?;

            let detail = cs
                .insn_detail(insn)
                .map_err(|e| LiftError::Decode(format!("{e}")))?;

            let mut ctx = LiftCtx::new(addr);
            dispatch_mnemonic(&mut ctx, insn, &detail);

            Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: insn.len(),
            })
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }
}

pub struct LiftCtx {
    pub ops: Vec<IrInsn>,
    pub addr: u64,
    unique_counter: u64,
}

impl LiftCtx {
    fn new(addr: u64) -> Self {
        Self {
            ops: Vec::new(),
            addr,
            unique_counter: 0,
        }
    }

    pub fn alloc_unique(&mut self) -> u64 {
        let id = self.unique_counter;
        self.unique_counter += 1;
        id
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

    pub fn emit_store(&mut self, mem_addr: Varnode, value: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, mem_addr, value],
            self.addr,
        ));
    }

    pub fn emit_load(&mut self, size: u8, mem_addr: Varnode) -> Varnode {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        let loaded = Varnode::unique(self.alloc_unique(), size);
        self.emit(IrInsn::with_output(
            IrOp::Load,
            loaded,
            smallvec![ram_space, mem_addr],
            self.addr,
        ));
        loaded
    }

    pub fn emit_copy(&mut self, dst: Varnode, src: Varnode) {
        self.emit(IrInsn::with_output(
            IrOp::Copy,
            dst,
            smallvec![src],
            self.addr,
        ));
    }
}

/// Extract the ARM64-specific operands from a detail.
pub fn arm64_operands(detail: &InsnDetail) -> Vec<(Arm64OperandType, Arm64Shift)> {
    let arch = detail.arch_detail();
    let mut result = Vec::new();
    if let Some(arm64) = arch.arm64() {
        for op in arm64.operands() {
            result.push((op.op_type, op.shift));
        }
    }
    result
}

/// Resolve an ARM64 operand to a Varnode for reading.
pub fn operand_to_varnode(ctx: &mut LiftCtx, op_type: &Arm64OperandType) -> Option<Varnode> {
    match op_type {
        Arm64OperandType::Reg(reg) => reg_varnode(*reg),
        Arm64OperandType::Imm(imm) => Some(Varnode::constant(*imm as u64, 8)),
        Arm64OperandType::Mem(mem) => {
            let addr = compute_mem_address(ctx, mem)?;
            Some(addr)
        }
        Arm64OperandType::Cimm(imm) => Some(Varnode::constant(*imm as u64, 8)),
        _ => None,
    }
}

/// Compute a memory address from an Arm64OpMem (base + disp).
pub fn compute_mem_address(ctx: &mut LiftCtx, mem: &Arm64OpMem) -> Option<Varnode> {
    let base = reg_varnode(mem.base())?;
    let disp = mem.disp();
    if disp == 0 {
        Some(base)
    } else {
        let disp_vn = Varnode::constant(disp as i64 as u64, 8);
        let result = Varnode::unique(ctx.alloc_unique(), 8);
        ctx.emit(IrInsn::with_output(
            IrOp::IntAdd,
            result,
            smallvec![base, disp_vn],
            ctx.addr,
        ));
        Some(result)
    }
}

fn dispatch_mnemonic(ctx: &mut LiftCtx, insn: &Insn, detail: &InsnDetail) {
    let ops = arm64_operands(detail);
    let id = Arm64Insn::from(insn.id().0);

    match id {
        Arm64Insn::ARM64_INS_ADD => arithmetic::lift_add(ctx, &ops),
        Arm64Insn::ARM64_INS_SUB => arithmetic::lift_sub(ctx, &ops),
        Arm64Insn::ARM64_INS_CMP => arithmetic::lift_cmp(ctx, &ops),
        Arm64Insn::ARM64_INS_CMN => arithmetic::lift_cmn(ctx, &ops),
        Arm64Insn::ARM64_INS_TST => arithmetic::lift_tst(ctx, &ops),
        Arm64Insn::ARM64_INS_NEG => arithmetic::lift_neg(ctx, &ops),
        Arm64Insn::ARM64_INS_MUL => arithmetic::lift_mul(ctx, &ops),
        Arm64Insn::ARM64_INS_SDIV => arithmetic::lift_sdiv(ctx, &ops),
        Arm64Insn::ARM64_INS_UDIV => arithmetic::lift_udiv(ctx, &ops),
        Arm64Insn::ARM64_INS_MADD => arithmetic::lift_madd(ctx, &ops),
        Arm64Insn::ARM64_INS_MSUB => arithmetic::lift_msub(ctx, &ops),

        Arm64Insn::ARM64_INS_AND => bitwise::lift_and(ctx, &ops),
        Arm64Insn::ARM64_INS_ORR => bitwise::lift_orr(ctx, &ops),
        Arm64Insn::ARM64_INS_EOR => bitwise::lift_eor(ctx, &ops),
        Arm64Insn::ARM64_INS_LSL => bitwise::lift_lsl(ctx, &ops),
        Arm64Insn::ARM64_INS_LSR => bitwise::lift_lsr(ctx, &ops),
        Arm64Insn::ARM64_INS_ASR => bitwise::lift_asr(ctx, &ops),
        Arm64Insn::ARM64_INS_MVN => bitwise::lift_mvn(ctx, &ops),
        Arm64Insn::ARM64_INS_UBFM => bitwise::lift_ubfm(ctx, &ops),
        Arm64Insn::ARM64_INS_UBFX => bitwise::lift_ubfx(ctx, &ops),
        Arm64Insn::ARM64_INS_SBFM => bitwise::lift_sbfm(ctx, &ops),
        Arm64Insn::ARM64_INS_SBFX => bitwise::lift_sbfx(ctx, &ops),
        Arm64Insn::ARM64_INS_SXTB => bitwise::lift_sxt(ctx, &ops, 1),
        Arm64Insn::ARM64_INS_SXTH => bitwise::lift_sxt(ctx, &ops, 2),
        Arm64Insn::ARM64_INS_SXTW => bitwise::lift_sxt(ctx, &ops, 4),
        Arm64Insn::ARM64_INS_EXTR => bitwise::lift_extr(ctx, &ops),

        Arm64Insn::ARM64_INS_MOV => data_move::lift_mov(ctx, &ops),
        Arm64Insn::ARM64_INS_MOVZ => data_move::lift_movz(ctx, &ops),
        Arm64Insn::ARM64_INS_MOVK => data_move::lift_movk(ctx, &ops),
        Arm64Insn::ARM64_INS_MOVN => data_move::lift_movn(ctx, &ops),
        Arm64Insn::ARM64_INS_NOP => data_move::lift_nop(ctx),
        Arm64Insn::ARM64_INS_ADR => data_move::lift_adr(ctx, &ops),
        Arm64Insn::ARM64_INS_ADRP => data_move::lift_adr(ctx, &ops),

        Arm64Insn::ARM64_INS_LDR => data_move::lift_ldr(ctx, &ops),
        Arm64Insn::ARM64_INS_LDRB => data_move::lift_ldr_sized(ctx, &ops, 1),
        Arm64Insn::ARM64_INS_LDRH => data_move::lift_ldr_sized(ctx, &ops, 2),
        Arm64Insn::ARM64_INS_LDRSW => data_move::lift_ldrsw(ctx, &ops),
        Arm64Insn::ARM64_INS_LDP => data_move::lift_ldp(ctx, &ops),
        Arm64Insn::ARM64_INS_STR => data_move::lift_str(ctx, &ops),
        Arm64Insn::ARM64_INS_STRB => data_move::lift_str_sized(ctx, &ops, 1),
        Arm64Insn::ARM64_INS_STRH => data_move::lift_str_sized(ctx, &ops, 2),
        Arm64Insn::ARM64_INS_STP => data_move::lift_stp(ctx, &ops),
        Arm64Insn::ARM64_INS_LDXR | Arm64Insn::ARM64_INS_LDAXR => {
            data_move::lift_exclusive_load(ctx, &ops)
        }
        Arm64Insn::ARM64_INS_STXR | Arm64Insn::ARM64_INS_STLXR => {
            data_move::lift_exclusive_store(ctx, &ops)
        }
        Arm64Insn::ARM64_INS_DMB => data_move::lift_barrier(ctx, 0x342),
        Arm64Insn::ARM64_INS_DSB => data_move::lift_barrier(ctx, 0x343),
        Arm64Insn::ARM64_INS_ISB => data_move::lift_barrier(ctx, 0x344),

        Arm64Insn::ARM64_INS_B => control_flow::lift_b(ctx, &ops, detail),
        Arm64Insn::ARM64_INS_BL => control_flow::lift_bl(ctx, &ops),
        Arm64Insn::ARM64_INS_BR => control_flow::lift_br(ctx, &ops),
        Arm64Insn::ARM64_INS_BLR => control_flow::lift_blr(ctx, &ops),
        Arm64Insn::ARM64_INS_CBZ => control_flow::lift_cbz(ctx, &ops),
        Arm64Insn::ARM64_INS_CBNZ => control_flow::lift_cbnz(ctx, &ops),
        Arm64Insn::ARM64_INS_RET => control_flow::lift_ret(ctx, &ops),
        Arm64Insn::ARM64_INS_CSEL => control_flow::lift_csel(ctx, &ops, detail, 0x330),
        Arm64Insn::ARM64_INS_CSINC => control_flow::lift_csel(ctx, &ops, detail, 0x331),
        Arm64Insn::ARM64_INS_CSINV => control_flow::lift_csel(ctx, &ops, detail, 0x332),
        Arm64Insn::ARM64_INS_CSNEG => control_flow::lift_csel(ctx, &ops, detail, 0x333),

        _ => ctx.emit_unimplemented(),
    }
}

/// ARM 32-bit LDM/STM addressing mode (Increment/Decrement, After/Before).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LdmStmAddressing {
    Ia,
    Ib,
    Da,
    Db,
}

/// Walk a 16-bit ARM register-list mask and produce `(offset, regnum)` pairs
/// describing the per-register transfer addresses for an LDM/STM (or
/// PUSH/POP) instruction. Offsets are relative to the base register `Rn`
/// *before* writeback. The lowest-numbered register always occupies the
/// lowest address; the variants differ only in how the offset sequence
/// aligns to `Rn`.
pub fn expand_reg_list(reg_list: u16, addressing: LdmStmAddressing) -> Vec<(i32, u8)> {
    let regs: Vec<u8> = (0..16u8).filter(|i| (reg_list >> i) & 1 == 1).collect();
    let n = regs.len() as i32;
    let mut out = Vec::with_capacity(regs.len());
    match addressing {
        LdmStmAddressing::Ia => {
            for (i, r) in regs.iter().enumerate() {
                out.push((4 * i as i32, *r));
            }
        }
        LdmStmAddressing::Ib => {
            for (i, r) in regs.iter().enumerate() {
                out.push((4 * (i as i32 + 1), *r));
            }
        }
        LdmStmAddressing::Da => {
            let base = -4 * (n - 1);
            for (i, r) in regs.iter().enumerate() {
                out.push((base + 4 * i as i32, *r));
            }
        }
        LdmStmAddressing::Db => {
            let base = -4 * n;
            for (i, r) in regs.iter().enumerate() {
                out.push((base + 4 * i as i32, *r));
            }
        }
    }
    out
}

/// Decoded LDM/STM fields: `(addressing, Rn, reg_list, writeback, load_not_store)`.
pub type LdmStmDecoded = (LdmStmAddressing, u8, u16, bool, bool);

/// Decode an ARM A1 LDM/STM encoding: `cond:4 100:3 P U S W L:5 Rn:4 reg_list:16`.
/// Returns `None` if bits[27:25] are not `100`.
pub fn decode_arm_ldm_stm(insn: u32) -> Option<LdmStmDecoded> {
    if (insn >> 25) & 0b111 != 0b100 {
        return None;
    }
    let p = (insn >> 24) & 1 == 1;
    let u = (insn >> 23) & 1 == 1;
    let w = (insn >> 21) & 1 == 1;
    let l = (insn >> 20) & 1 == 1;
    let rn = ((insn >> 16) & 0xF) as u8;
    let reg_list = (insn & 0xFFFF) as u16;
    let addressing = match (p, u) {
        (false, false) => LdmStmAddressing::Da,
        (false, true) => LdmStmAddressing::Ia,
        (true, false) => LdmStmAddressing::Db,
        (true, true) => LdmStmAddressing::Ib,
    };
    Some((addressing, rn, reg_list, w, l))
}

/// Decode a Thumb T1 LDM/STM encoding (`1100 L Rn:3 reg_list:8`).
/// Always IA addressing, writeback iff `Rn` is not in `reg_list` (LDM) or
/// always for STM — but per ARM ARM the encoded `W` for the Thumb form is
/// implicit: writeback is conventional, so we report `writeback=true`.
pub fn decode_thumb1_ldm_stm(insn: u16) -> Option<LdmStmDecoded> {
    if (insn >> 12) & 0xF != 0b1100 {
        return None;
    }
    let l = (insn >> 11) & 1 == 1;
    let rn = ((insn >> 8) & 0b111) as u8;
    let reg_list = insn & 0xFF;
    Some((LdmStmAddressing::Ia, rn, reg_list, true, l))
}

/// Decode a Thumb T1 PUSH/POP encoding:
/// PUSH = `1011 010 M reg_list:8` (M=bit8 → LR in list at bit 14),
/// POP  = `1011 110 P reg_list:8` (P=bit8 → PC in list at bit 15).
/// Both have base `sp` (r13) and writeback.
pub fn decode_thumb1_push_pop(insn: u16) -> Option<LdmStmDecoded> {
    let top7 = (insn >> 9) & 0b111_1111;
    let is_push = top7 == 0b101_1010;
    let is_pop = top7 == 0b101_1110;
    if !is_push && !is_pop {
        return None;
    }
    let extra = (insn >> 8) & 1;
    let low = insn & 0xFF;
    let reg_list = if is_push {
        low | (extra << 14)
    } else {
        low | (extra << 15)
    };
    let addressing = if is_push {
        LdmStmAddressing::Db
    } else {
        LdmStmAddressing::Ia
    };
    Some((addressing, 13, reg_list, true, is_pop))
}

/// Thumb-2 IT-block state: the leading condition plus the per-instruction
/// condition codes for each slot in the block (1..=4 entries).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ItState {
    pub firstcond: u8,
    pub conds: Vec<u8>,
}

/// Decode a Thumb IT instruction (`1011 1111 firstcond:4 mask:4`). Returns
/// `None` if not an IT, or if `mask` is `0b0000` (reserved / NOP-hint
/// encoding per ARM ARM B1.5.5).
pub fn decode_it(insn: u16) -> Option<ItState> {
    if (insn >> 8) & 0xFF != 0b1011_1111 {
        return None;
    }
    let firstcond = ((insn >> 4) & 0xF) as u8;
    let mask = (insn & 0xF) as u8;
    if mask == 0 {
        return None;
    }
    let tz = mask.trailing_zeros();
    let count = (4 - tz) as usize;
    let inv = firstcond ^ 1;
    let fc_lsb = firstcond & 1;
    let mut conds = Vec::with_capacity(count);
    conds.push(firstcond);
    for i in 1..count {
        let bit = (mask >> (4 - i)) & 1;
        conds.push(if bit == fc_lsb { firstcond } else { inv });
    }
    Some(ItState { firstcond, conds })
}

/// Return `true` if `insn` is an AArch64 pointer-authentication or BTI
/// instruction with no architectural effects relevant to lifting; the
/// caller should consume 4 bytes and emit no IR.
pub fn try_pac_bti_nop(insn: u32) -> bool {
    if (insn & 0xFFFF_0000) == 0xDAC1_0000 {
        let opcode = (insn >> 10) & 0x3F;
        if opcode <= 0x11 {
            return true;
        }
    }

    const HINT_NOPS: &[u32] = &[
        0xD503_233F,
        0xD503_237F,
        0xD503_23BF,
        0xD503_23FF,
        0xD503_231F,
        0xD503_235F,
        0xD503_239F,
        0xD503_23DF,
        0xD503_22FF,
        0xD503_241F,
        0xD503_245F,
        0xD503_249F,
        0xD503_24DF,
    ];
    HINT_NOPS.contains(&insn)
}

/// If `insn` is a PAC-authenticated branch (BR*A*/BLR*A*/RET*A*), return the
/// equivalent unauthenticated encoding so Capstone can lift it normally.
fn pac_auth_branch_rewrite(insn: u32) -> Option<u32> {
    const AUTH_MASK: u32 = 0xFFFF_F800;
    match insn & AUTH_MASK {
        0xD61F_0800 | 0xD71F_0800 => {
            let rn = (insn >> 5) & 0x1F;
            Some(0xD61F_0000 | (rn << 5))
        }
        0xD63F_0800 | 0xD73F_0800 => {
            let rn = (insn >> 5) & 0x1F;
            Some(0xD63F_0000 | (rn << 5))
        }
        _ => {
            if insn == 0xD65F_0BFF || insn == 0xD65F_0FFF {
                Some(0xD65F_03C0)
            } else {
                None
            }
        }
    }
}
