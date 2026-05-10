//! AArch64 lifting context and top-level mnemonic dispatch.
//!
//! Also hosts the ARM 32-bit / Thumb scaffolding (`ArmLiftMode::Arm32` /
//! `ArmLiftMode::Thumb`). Those modes do not yet wire up Capstone — the
//! `capstone` crate would need its `arch_arm` feature enabled at the
//! workspace level. The scaffold intercepts the encodings the existing
//! decoder helpers (`decode_arm_ldm_stm`, `decode_thumb1_*`, `decode_it`)
//! recognise and falls through to `Unimplemented` for everything else.
//! See `TODO(t127)` markers for the follow-up work.

use std::cell::RefCell;
use std::sync::Mutex;

use capstone::Insn;
use capstone::arch::arm::{ArmCC, ArmInsn, ArmOpMem, ArmOperandType, ArmReg, ArmShift};
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
    static ARM32_CS: RefCell<Option<Capstone>> = const { RefCell::new(None) };
    static THUMB_CS: RefCell<Option<Capstone>> = const { RefCell::new(None) };
}

/// Which ARM ISA variant a given `ArmLifter` instance is configured for.
/// `Aarch64` is the legacy default (Capstone arm64). `Arm32` and `Thumb`
/// are 32-bit modes that currently only dispatch the bespoke decoder
/// helpers in this crate; instructions outside that set fall through to
/// `Unimplemented` (see `TODO(t127)`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ArmLiftMode {
    Aarch64,
    Arm32,
    Thumb,
}

pub struct ArmLifter {
    reg_file: RegisterFile,
    mode: ArmLiftMode,
    /// Live Thumb-2 IT-block state. When `Some`, the next instruction(s)
    /// are conditional with the head condition popped from `conds`.
    /// Wrapped in `Mutex` because `Lifter::lift_insn` is `&self` but the
    /// IT-state machine threads across consecutive calls. Aarch64 mode
    /// never touches this field.
    it_state: Mutex<Option<ItState>>,
}

impl ArmLifter {
    /// Default AArch64 lifter (existing behaviour, unchanged).
    pub fn new() -> Self {
        Self {
            reg_file: aarch64_register_file(),
            mode: ArmLiftMode::Aarch64,
            it_state: Mutex::new(None),
        }
    }

    /// 32-bit ARM scaffold. Decodes LDM/STM via the in-crate helpers and
    /// emits proper Load/Store IR; every other encoding falls through to
    /// `Unimplemented` until Capstone's `arch_arm` feature is enabled.
    pub fn new_arm32() -> Self {
        Self {
            reg_file: arm32_register_file(),
            mode: ArmLiftMode::Arm32,
            it_state: Mutex::new(None),
        }
    }

    /// Thumb scaffold. Recognises IT-blocks (tracking conditional state
    /// across subsequent calls), PUSH/POP, and 16-bit LDM/STM; everything
    /// else falls through to `Unimplemented`.
    pub fn new_thumb() -> Self {
        Self {
            reg_file: arm32_register_file(),
            mode: ArmLiftMode::Thumb,
            it_state: Mutex::new(None),
        }
    }

    pub fn mode(&self) -> ArmLiftMode {
        self.mode
    }

    /// Inspect the current IT-state (cloned). Tests use this to assert
    /// that an IT-instruction advanced the state machine.
    pub fn current_it_state(&self) -> Option<ItState> {
        self.it_state.lock().ok().and_then(|g| g.clone())
    }

    fn make_capstone() -> Capstone {
        Capstone::new()
            .arm64()
            .mode(arch::arm64::ArchMode::Arm)
            .detail(true)
            .build()
            .expect("failed to build capstone arm64")
    }

    fn make_capstone_arm32() -> Capstone {
        Capstone::new()
            .arm()
            .mode(arch::arm::ArchMode::Arm)
            .detail(true)
            .build()
            .expect("failed to build capstone arm32")
    }

    fn make_capstone_thumb() -> Capstone {
        Capstone::new()
            .arm()
            .mode(arch::arm::ArchMode::Thumb)
            .detail(true)
            .build()
            .expect("failed to build capstone thumb")
    }
}

impl Default for ArmLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for ArmLifter {
    fn arch(&self) -> ArchId {
        // Arm32 / Thumb still report AArch64 today; a dedicated `ArchId::Arm`
        // requires plumbing through the loader/dispatcher and is out of MVP scope.
        // TODO(t127): introduce ArchId::Arm and wire it through.
        ArchId::AArch64
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        match self.mode {
            ArmLiftMode::Aarch64 => self.lift_aarch64(bytes, addr),
            ArmLiftMode::Arm32 => self.lift_arm32(bytes, addr),
            ArmLiftMode::Thumb => self.lift_thumb(bytes, addr),
        }
    }

    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }
}

impl ArmLifter {
    fn lift_aarch64(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
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

    fn lift_arm32(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }
        let raw = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);

        if let Some(decoded) = decode_arm_ldm_stm(raw) {
            let mut ctx = LiftCtx::new(addr);
            emit_ldm_stm(&mut ctx, decoded);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: 4,
            });
        }

        ARM32_CS.with(|cell| {
            let mut slot = cell.borrow_mut();
            if slot.is_none() {
                *slot = Some(Self::make_capstone_arm32());
            }
            let cs = slot.as_ref().expect("thread-local Capstone arm32 initialized");
            decode_one_arm32(cs, bytes, addr, 4)
        })
    }

    fn lift_thumb(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        let half = u16::from_le_bytes([bytes[0], bytes[1]]);

        if let Some(state) = decode_it(half) {
            if let Ok(mut guard) = self.it_state.lock() {
                *guard = Some(state);
            }
            // IT itself has no architectural effect besides arming the
            // following slots; emit no IR.
            return Ok(LiftedInsn {
                ir_ops: Vec::new(),
                len: 2,
            });
        }

        let pending_cond = self.pop_pending_it_cond();

        if let Some(decoded) = decode_thumb1_push_pop(half) {
            let mut ctx = LiftCtx::new(addr);
            emit_ldm_stm(&mut ctx, decoded);
            apply_guard(&mut ctx.ops, pending_cond);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: 2,
            });
        }
        if let Some(decoded) = decode_thumb1_ldm_stm(half) {
            let mut ctx = LiftCtx::new(addr);
            emit_ldm_stm(&mut ctx, decoded);
            apply_guard(&mut ctx.ops, pending_cond);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: 2,
            });
        }

        // t178: Thumb-2 (32-bit) LDM/STM. Tried before Capstone so we
        // own the lowering (matching the A32 / Thumb-1 LDM precedent) —
        // this keeps writeback semantics + per-register Load/Store
        // expansion uniform across all ARM modes.
        if bytes.len() >= 4 {
            let hw1 = half;
            let hw2 = u16::from_le_bytes([bytes[2], bytes[3]]);
            if let Some(decoded) = decode_thumb2_ldm_stm(hw1, hw2) {
                let mut ctx = LiftCtx::new(addr);
                emit_ldm_stm(&mut ctx, decoded);
                apply_guard(&mut ctx.ops, pending_cond);
                return Ok(LiftedInsn {
                    ir_ops: ctx.ops,
                    len: 4,
                });
            }
        }

        let mut lifted = THUMB_CS.with(|cell| {
            let mut slot = cell.borrow_mut();
            if slot.is_none() {
                *slot = Some(Self::make_capstone_thumb());
            }
            let cs = slot.as_ref().expect("thread-local Capstone thumb initialized");
            decode_one_arm32(cs, bytes, addr, 2)
        })?;
        apply_guard(&mut lifted.ir_ops, pending_cond);
        Ok(lifted)
    }

    /// Pop the head condition off the active IT-block, if any. Returns
    /// `None` once the block is exhausted (and clears the slot).
    fn pop_pending_it_cond(&self) -> Option<u8> {
        let mut guard = self.it_state.lock().ok()?;
        let state = guard.as_mut()?;
        if state.conds.is_empty() {
            *guard = None;
            return None;
        }
        let cond = state.conds.remove(0);
        if state.conds.is_empty() {
            *guard = None;
        }
        Some(cond)
    }
}

/// Minimal 32-bit ARM register file — r0..r15 (where r13=SP, r14=LR,
/// r15=PC) plus an APSR slot for the condition flags. Mirrors the layout
/// `expand_reg_list` produces (`u8` register numbers 0..15) so a `Varnode`
/// can be derived as `Varnode::reg(reg_num * 4, 4)`.
pub fn arm32_register_file() -> RegisterFile {
    use unlace_ir::RegisterDef;
    const NAMES: [&str; 16] = [
        "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7",
        "R8", "R9", "R10", "R11", "R12", "SP", "LR", "PC",
    ];
    let mut regs = Vec::with_capacity(17);
    for (i, name) in NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg((i as u64) * 4, 4),
        });
    }
    regs.push(RegisterDef {
        name: "APSR",
        varnode: Varnode::reg(64, 4),
    });
    RegisterFile { registers: regs }
}

/// Resolve a Capstone `ArmReg` constant to its 0..15 register index.
/// Returns `None` for non-GPR registers (FPSCR, CPSR, …) or invalid IDs.
fn arm32_reg_index(reg: capstone::RegId) -> Option<u8> {
    let raw = reg.0 as u32;
    match raw {
        ArmReg::ARM_REG_R0 => Some(0),
        ArmReg::ARM_REG_R1 => Some(1),
        ArmReg::ARM_REG_R2 => Some(2),
        ArmReg::ARM_REG_R3 => Some(3),
        ArmReg::ARM_REG_R4 => Some(4),
        ArmReg::ARM_REG_R5 => Some(5),
        ArmReg::ARM_REG_R6 => Some(6),
        ArmReg::ARM_REG_R7 => Some(7),
        ArmReg::ARM_REG_R8 => Some(8),
        ArmReg::ARM_REG_R9 => Some(9),
        ArmReg::ARM_REG_R10 => Some(10),
        ArmReg::ARM_REG_R11 => Some(11),
        ArmReg::ARM_REG_R12 => Some(12),
        ArmReg::ARM_REG_SP => Some(13),
        ArmReg::ARM_REG_LR => Some(14),
        ArmReg::ARM_REG_PC => Some(15),
        _ => None,
    }
}

fn arm32_operand_to_varnode(ctx: &mut LiftCtx, op_type: &ArmOperandType) -> Option<Varnode> {
    match op_type {
        ArmOperandType::Reg(reg) => arm32_reg_index(*reg).map(arm32_reg_varnode),
        ArmOperandType::Imm(imm) => Some(Varnode::constant(*imm as i64 as u64, 4)),
        ArmOperandType::Cimm(imm) => Some(Varnode::constant(*imm as i64 as u64, 4)),
        ArmOperandType::Pimm(imm) => Some(Varnode::constant(*imm as i64 as u64, 4)),
        ArmOperandType::Mem(mem) => arm32_compute_mem_address(ctx, mem),
        _ => None,
    }
}

fn arm32_compute_mem_address(ctx: &mut LiftCtx, mem: &ArmOpMem) -> Option<Varnode> {
    let base_idx = arm32_reg_index(mem.base())?;
    let base = arm32_reg_varnode(base_idx);
    let disp = mem.disp();
    if disp == 0 {
        Some(base)
    } else {
        let disp_vn = Varnode::constant(disp as i64 as u64, 4);
        let result = Varnode::unique(ctx.alloc_unique(), 4);
        ctx.emit(IrInsn::with_output(
            IrOp::IntAdd,
            result,
            smallvec![base, disp_vn],
            ctx.addr,
        ));
        Some(result)
    }
}

/// Run Capstone over `bytes` for a single A32/T32 instruction, dispatch
/// the recognised mnemonics into IR, and report `Unimplemented` for the
/// long tail.
fn decode_one_arm32(
    cs: &Capstone,
    bytes: &[u8],
    addr: u64,
    default_len: usize,
) -> Result<LiftedInsn, LiftError> {
    let insns = cs
        .disasm_count(bytes, addr, 1)
        .map_err(|e| LiftError::Decode(format!("{e}")))?;
    let Some(insn) = insns.as_ref().first() else {
        let mut ctx = LiftCtx::new(addr);
        ctx.emit_unimplemented();
        return Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: default_len,
        });
    };
    let detail = cs
        .insn_detail(insn)
        .map_err(|e| LiftError::Decode(format!("{e}")))?;
    let mut ctx = LiftCtx::new(addr);
    dispatch_arm32_mnemonic(&mut ctx, insn, &detail);
    Ok(LiftedInsn {
        ir_ops: ctx.ops,
        len: insn.len(),
    })
}

fn arm32_operands(detail: &InsnDetail) -> Vec<ArmOperandType> {
    let arch = detail.arch_detail();
    let mut out = Vec::new();
    if let Some(arm) = arch.arm() {
        for op in arm.operands() {
            out.push(op.op_type);
        }
    }
    out
}

/// Parallel accessor returning the per-operand `ArmShift` slot Capstone
/// reports. The vector aligns 1:1 with `arm32_operands(detail)` — index
/// `i` here is the shift applied to operand `i` there. Most operands have
/// `ArmShift::Invalid`; only register operands in data-processing forms
/// like `ADD Rd, Rn, Rm, LSL #imm` carry a meaningful shift.
fn arm32_operand_shifts(detail: &InsnDetail) -> Vec<ArmShift> {
    let arch = detail.arch_detail();
    let mut out = Vec::new();
    if let Some(arm) = arch.arm() {
        for op in arm.operands() {
            out.push(op.shift);
        }
    }
    out
}

/// Apply an `ArmShift` to a Varnode `v`, emitting the required shift IR
/// and returning the shifted result. `Invalid` is a no-op (returns `v`
/// unchanged). Reg-by-reg shifts read the shift count from a GPR;
/// imm shifts use a constant operand.
fn apply_arm32_shift(ctx: &mut LiftCtx, v: Varnode, shift: ArmShift) -> Varnode {
    let (op, amount): (IrOp, Varnode) = match shift {
        ArmShift::Invalid => return v,
        ArmShift::Lsl(n) => {
            if n == 0 {
                return v;
            }
            (IrOp::IntLeft, Varnode::constant(n as u64, 4))
        }
        ArmShift::Lsr(n) => {
            if n == 0 {
                return v;
            }
            (IrOp::IntRight, Varnode::constant(n as u64, 4))
        }
        ArmShift::Asr(n) => {
            if n == 0 {
                return v;
            }
            (IrOp::IntSright, Varnode::constant(n as u64, 4))
        }
        ArmShift::Ror(n) => {
            if n == 0 {
                return v;
            }
            // ROR is modeled as IntRight for the MVP; a follow-up can
            // introduce a dedicated rotate-right Callother or compose
            // (src >> n) | (src << (32 - n)).
            (IrOp::IntRight, Varnode::constant(n as u64, 4))
        }
        ArmShift::Rrx(_) => {
            // RRX needs the carry flag; route through the same Callother
            // tag the standalone RRX emitter uses (0x351).
            let dst = Varnode::unique(ctx.alloc_unique(), 4);
            ctx.emit(IrInsn::with_output(
                IrOp::Callother,
                dst,
                smallvec![Varnode::constant(0x351, 8), v],
                ctx.addr,
            ));
            return dst;
        }
        ArmShift::LslReg(reg) => {
            let Some(idx) = arm32_reg_index(reg) else { return v };
            (IrOp::IntLeft, arm32_reg_varnode(idx))
        }
        ArmShift::LsrReg(reg) => {
            let Some(idx) = arm32_reg_index(reg) else { return v };
            (IrOp::IntRight, arm32_reg_varnode(idx))
        }
        ArmShift::AsrReg(reg) => {
            let Some(idx) = arm32_reg_index(reg) else { return v };
            (IrOp::IntSright, arm32_reg_varnode(idx))
        }
        ArmShift::RorReg(reg) => {
            let Some(idx) = arm32_reg_index(reg) else { return v };
            (IrOp::IntRight, arm32_reg_varnode(idx))
        }
        ArmShift::RrxReg(_) => return v,
    };
    let out = Varnode::unique(ctx.alloc_unique(), v.size);
    ctx.emit(IrInsn::with_output(op, out, smallvec![v, amount], ctx.addr));
    out
}

fn arm32_updates_flags(detail: &InsnDetail) -> bool {
    detail
        .arch_detail()
        .arm()
        .map(|a| a.update_flags())
        .unwrap_or(false)
}

/// Dispatch a decoded ARM/Thumb instruction to its IR emitter. The MVP
/// covers MOV/ADD/SUB/AND/ORR/EOR/BIC/LSL/LSR/ASR/ROR/LDR/STR/CMP/CMN/
/// TST/TEQ/B/BL/BX/NOP; the long tail still emits `Unimplemented` so the
/// caller can keep walking the byte stream.
fn dispatch_arm32_mnemonic(ctx: &mut LiftCtx, insn: &Insn, detail: &InsnDetail) {
    let ops = arm32_operands(detail);
    let shifts = arm32_operand_shifts(detail);
    let id = ArmInsn::from(insn.id().0);

    match id {
        ArmInsn::ARM_INS_NOP => {}

        ArmInsn::ARM_INS_MOV | ArmInsn::ARM_INS_MOVS | ArmInsn::ARM_INS_MOVW => {
            emit_arm32_copy(ctx, &ops, &shifts, false)
        }
        ArmInsn::ARM_INS_MVN => emit_arm32_copy(ctx, &ops, &shifts, true),
        ArmInsn::ARM_INS_MOVT => emit_arm32_movt(ctx, &ops),

        ArmInsn::ARM_INS_ADD => {
            emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntAdd);
            if arm32_updates_flags(detail) {
                emit_arm32_adds_subs_flags(ctx, &ops, IrOp::IntAdd);
            }
        }
        ArmInsn::ARM_INS_SUB => {
            emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntSub);
            if arm32_updates_flags(detail) {
                emit_arm32_adds_subs_flags(ctx, &ops, IrOp::IntSub);
            }
        }
        ArmInsn::ARM_INS_RSB => emit_arm32_binop_rev(ctx, &ops, IrOp::IntSub),

        ArmInsn::ARM_INS_MUL => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntMult),
        ArmInsn::ARM_INS_MLA => emit_arm32_mla(ctx, &ops, false),
        ArmInsn::ARM_INS_MLS => emit_arm32_mla(ctx, &ops, true),
        ArmInsn::ARM_INS_UMULL => emit_arm32_long_mul(ctx, &ops, false),
        ArmInsn::ARM_INS_SMULL => emit_arm32_long_mul(ctx, &ops, true),
        ArmInsn::ARM_INS_UMLAL => emit_arm32_long_mul_acc(ctx, &ops, false),
        ArmInsn::ARM_INS_SMLAL => emit_arm32_long_mul_acc(ctx, &ops, true),
        ArmInsn::ARM_INS_UDIV => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntDiv),
        ArmInsn::ARM_INS_SDIV => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntSdiv),

        ArmInsn::ARM_INS_AND => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntAnd),
        ArmInsn::ARM_INS_ORR => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntOr),
        ArmInsn::ARM_INS_EOR => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntXor),
        ArmInsn::ARM_INS_BIC => emit_arm32_bic(ctx, &ops),
        // t172: ORN Rd, Rn, Op2 — Thumb-2-only OR-Not, `Rd = Rn | ~Op2`.
        // Mirrors BIC's structure (which is `Rn & ~Op2`) but combines with
        // OR instead of AND.
        ArmInsn::ARM_INS_ORN => emit_arm32_orn(ctx, &ops),

        ArmInsn::ARM_INS_LSL => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntLeft),
        ArmInsn::ARM_INS_LSR => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntRight),
        ArmInsn::ARM_INS_ASR => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntSright),
        ArmInsn::ARM_INS_ROR => emit_arm32_binop(ctx, &ops, &shifts, IrOp::IntRight),
        ArmInsn::ARM_INS_RRX => emit_arm32_rrx(ctx, &ops),

        ArmInsn::ARM_INS_LDR => emit_arm32_load(ctx, &ops, 4),
        ArmInsn::ARM_INS_LDRB | ArmInsn::ARM_INS_LDRSB => emit_arm32_load(ctx, &ops, 1),
        ArmInsn::ARM_INS_LDRH | ArmInsn::ARM_INS_LDRSH => emit_arm32_load(ctx, &ops, 2),
        ArmInsn::ARM_INS_LDRD => emit_arm32_load_pair(ctx, &ops),
        ArmInsn::ARM_INS_LDREX | ArmInsn::ARM_INS_LDREXB | ArmInsn::ARM_INS_LDREXH => {
            emit_arm32_exclusive_load(ctx, &ops)
        }
        ArmInsn::ARM_INS_STR => emit_arm32_store(ctx, &ops, 4),
        ArmInsn::ARM_INS_STRB => emit_arm32_store(ctx, &ops, 1),
        ArmInsn::ARM_INS_STRH => emit_arm32_store(ctx, &ops, 2),
        ArmInsn::ARM_INS_STRD => emit_arm32_store_pair(ctx, &ops),
        ArmInsn::ARM_INS_STREX | ArmInsn::ARM_INS_STREXB | ArmInsn::ARM_INS_STREXH => {
            emit_arm32_exclusive_store(ctx, &ops)
        }

        ArmInsn::ARM_INS_CMP => emit_arm32_flags(ctx, &ops, IrOp::IntSub),
        ArmInsn::ARM_INS_CMN => emit_arm32_flags(ctx, &ops, IrOp::IntAdd),
        ArmInsn::ARM_INS_TST => emit_arm32_flags(ctx, &ops, IrOp::IntAnd),
        ArmInsn::ARM_INS_TEQ => emit_arm32_flags(ctx, &ops, IrOp::IntXor),

        ArmInsn::ARM_INS_B => emit_arm32_branch(ctx, &ops, insn, detail),
        ArmInsn::ARM_INS_BL | ArmInsn::ARM_INS_BLX => emit_arm32_call(ctx, &ops, insn),
        ArmInsn::ARM_INS_BX => emit_arm32_bx(ctx, &ops),
        ArmInsn::ARM_INS_CBZ => emit_arm32_cbz(ctx, &ops, false),
        ArmInsn::ARM_INS_CBNZ => emit_arm32_cbz(ctx, &ops, true),
        ArmInsn::ARM_INS_TBB | ArmInsn::ARM_INS_TBH => emit_arm32_tbb(ctx, &ops),

        ArmInsn::ARM_INS_MRS => emit_arm32_mrs(ctx, &ops),
        ArmInsn::ARM_INS_MSR => emit_arm32_msr(ctx, &ops),

        ArmInsn::ARM_INS_BFI => emit_arm32_bfi(ctx, &ops),
        ArmInsn::ARM_INS_UBFX => emit_arm32_ubfx(ctx, &ops, false),
        ArmInsn::ARM_INS_SBFX => emit_arm32_ubfx(ctx, &ops, true),

        ArmInsn::ARM_INS_REV => emit_arm32_byte_rev(ctx, &ops, ArmReverseKind::Rev),
        ArmInsn::ARM_INS_REV16 => emit_arm32_byte_rev(ctx, &ops, ArmReverseKind::Rev16),
        ArmInsn::ARM_INS_RBIT => emit_arm32_byte_rev(ctx, &ops, ArmReverseKind::Rbit),

        _ => ctx.emit_unimplemented(),
    }
}

const CALLOTHER_ARM_MRS: u64 = 0x363;
const CALLOTHER_ARM_MSR: u64 = 0x364;

fn arm32_sysreg_const(op: &ArmOperandType) -> Option<Varnode> {
    match op {
        ArmOperandType::SysReg(reg) => Some(Varnode::constant(reg.0 as u64, 4)),
        ArmOperandType::Pimm(imm) => Some(Varnode::constant(*imm as i64 as u64, 4)),
        ArmOperandType::Cimm(imm) => Some(Varnode::constant(*imm as i64 as u64, 4)),
        ArmOperandType::Imm(imm) => Some(Varnode::constant(*imm as i64 as u64, 4)),
        _ => None,
    }
}

fn emit_arm32_mrs(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let sysreg = ops
        .get(1)
        .and_then(arm32_sysreg_const)
        .unwrap_or_else(|| Varnode::constant(0, 4));
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![Varnode::constant(CALLOTHER_ARM_MRS, 8), sysreg],
        ctx.addr,
    ));
}

fn emit_arm32_msr(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let sysreg = ops
        .first()
        .and_then(arm32_sysreg_const)
        .unwrap_or_else(|| Varnode::constant(0, 4));
    let Some(src) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![Varnode::constant(CALLOTHER_ARM_MSR, 8), sysreg, src],
        ctx.addr,
    ));
}

fn arm32_first_dst(ops: &[ArmOperandType]) -> Option<Varnode> {
    let ArmOperandType::Reg(reg) = ops.first()? else {
        return None;
    };
    arm32_reg_index(*reg).map(arm32_reg_varnode)
}

fn emit_arm32_copy(
    ctx: &mut LiftCtx,
    ops: &[ArmOperandType],
    shifts: &[ArmShift],
    invert: bool,
) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let src_shift = shifts.get(1).copied().unwrap_or(ArmShift::Invalid);
    let src = apply_arm32_shift(ctx, src, src_shift);
    if invert {
        ctx.emit(IrInsn::with_output(
            IrOp::IntNegate,
            dst,
            smallvec![src],
            ctx.addr,
        ));
    } else {
        ctx.emit_copy(dst, src);
    }
}

fn emit_arm32_binop(
    ctx: &mut LiftCtx,
    ops: &[ArmOperandType],
    shifts: &[ArmShift],
    op: IrOp,
) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let (lhs_idx, rhs_idx) = match ops.len() {
        2 => (0usize, 1usize),
        _ => (1usize, 2usize),
    };
    let Some(lhs) = arm32_operand_to_varnode(ctx, &ops[lhs_idx]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rhs) = arm32_operand_to_varnode(ctx, &ops[rhs_idx]) else {
        ctx.emit_unimplemented();
        return;
    };
    let lhs_shift = shifts.get(lhs_idx).copied().unwrap_or(ArmShift::Invalid);
    let rhs_shift = shifts.get(rhs_idx).copied().unwrap_or(ArmShift::Invalid);
    let lhs = apply_arm32_shift(ctx, lhs, lhs_shift);
    let rhs = apply_arm32_shift(ctx, rhs, rhs_shift);
    ctx.emit(IrInsn::with_output(op, dst, smallvec![lhs, rhs], ctx.addr));
}

fn emit_arm32_binop_rev(ctx: &mut LiftCtx, ops: &[ArmOperandType], op: IrOp) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let (lhs_op, rhs_op) = match ops.len() {
        2 => (&ops[1], &ops[0]),
        _ => (&ops[2], &ops[1]),
    };
    let Some(lhs) = arm32_operand_to_varnode(ctx, lhs_op) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rhs) = arm32_operand_to_varnode(ctx, rhs_op) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(op, dst, smallvec![lhs, rhs], ctx.addr));
}

fn emit_arm32_bic(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let (lhs_op, rhs_op) = match ops.len() {
        2 => (&ops[0], &ops[1]),
        _ => (&ops[1], &ops[2]),
    };
    let Some(lhs) = arm32_operand_to_varnode(ctx, lhs_op) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rhs) = arm32_operand_to_varnode(ctx, rhs_op) else {
        ctx.emit_unimplemented();
        return;
    };
    let inverted = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntNegate,
        inverted,
        smallvec![rhs],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        dst,
        smallvec![lhs, inverted],
        ctx.addr,
    ));
}

/// ORN Rd, Rn, Op2 — Thumb-2-only OR-Not. Lowers to `Rd = Rn | ~Op2`,
/// the dual of BIC (`Rd = Rn & ~Op2`). No A32 encoding exists, but the
/// Capstone insn id (`ARM_INS_ORN`) is shared with the synthetic disasm
/// path, so a single emitter covers both dispatch sources. Operand layout
/// matches the other 3-operand data-processing forms: `[Rd, Rn, Op2]` for
/// register-register and `[Rn, Op2]` when Capstone elides the destination
/// (always 3-op in practice for ORN, but we tolerate both).
fn emit_arm32_orn(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let (lhs_op, rhs_op) = match ops.len() {
        2 => (&ops[0], &ops[1]),
        _ => (&ops[1], &ops[2]),
    };
    let Some(lhs) = arm32_operand_to_varnode(ctx, lhs_op) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rhs) = arm32_operand_to_varnode(ctx, rhs_op) else {
        ctx.emit_unimplemented();
        return;
    };
    let inverted = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntNegate,
        inverted,
        smallvec![rhs],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        dst,
        smallvec![lhs, inverted],
        ctx.addr,
    ));
}

fn emit_arm32_load(ctx: &mut LiftCtx, ops: &[ArmOperandType], size: u8) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(addr_vn) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let loaded = ctx.emit_load(size, addr_vn);
    ctx.emit_copy(dst, loaded);
}

fn emit_arm32_store(ctx: &mut LiftCtx, ops: &[ArmOperandType], _size: u8) {
    let Some(value) = ops.first().and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(addr_vn) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit_store(addr_vn, value);
}

// t151: NZCV flag varnodes for ARM32.
//
// AArch32 lacks the discrete register-file slots that AArch64 has for NZCV;
// to keep flag-producing instructions and conditional branches connected at
// the IR level we synthesize four 1-byte register-space varnodes outside the
// 16-register GPR range (`Varnode::reg(0..0x40, 4)`). 0x500 is well past the
// GPR file and any future banked-register expansion.
pub const ARM_NZCV_BASE: u64 = 0x500;
pub const ARM_FLAG_N: Varnode = Varnode::reg(ARM_NZCV_BASE, 1);
pub const ARM_FLAG_Z: Varnode = Varnode::reg(ARM_NZCV_BASE + 1, 1);
pub const ARM_FLAG_C: Varnode = Varnode::reg(ARM_NZCV_BASE + 2, 1);
pub const ARM_FLAG_V: Varnode = Varnode::reg(ARM_NZCV_BASE + 3, 1);

/// Emit `N = (result < 0)` and `Z = (result == 0)` writes for a flag-setting
/// arithmetic op. C/V are emitted by [`emit_arm32_add_cv_flags`] /
/// [`emit_arm32_sub_cv_flags`] which are op-specific (Add: unsigned overflow;
/// Sub: NOT-borrow). Logical-op carry-out (shifter carry) is still deferred.
fn emit_arm32_nz_flags(ctx: &mut LiftCtx, result: Varnode) {
    let zero = Varnode::constant(0, result.size);
    ctx.emit(IrInsn::with_output(
        IrOp::IntSless,
        ARM_FLAG_N,
        smallvec![result, zero],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntEqual,
        ARM_FLAG_Z,
        smallvec![result, zero],
        ctx.addr,
    ));
}

/// Emit C/V writes for an ADD-shaped flag-setting op (ADDS/CMN).
///
/// * `C = INT_CARRY(a, b)` — unsigned overflow of `a + b`.
/// * `V = INT_SCARRY(a, b)` — signed overflow of `a + b`.
fn emit_arm32_add_cv_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode) {
    ctx.emit(IrInsn::with_output(
        IrOp::IntCarry,
        ARM_FLAG_C,
        smallvec![a, b],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntScarry,
        ARM_FLAG_V,
        smallvec![a, b],
        ctx.addr,
    ));
}

/// Emit C/V writes for a SUB-shaped flag-setting op (SUBS/CMP).
///
/// On ARM, `C` for subtraction is **NOT borrow** — i.e. `C = (a >= b)`
/// unsigned. We synthesize this as `BoolNegate(IntLess(a, b))` to mirror the
/// AArch64 lifter's idiom and to keep `IntLess` available for further fold
/// passes. `V = INT_SBORROW(a, b)` is the signed-overflow primitive.
fn emit_arm32_sub_cv_flags(ctx: &mut LiftCtx, a: Varnode, b: Varnode) {
    let borrow = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntLess,
        borrow,
        smallvec![a, b],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::BoolNegate,
        ARM_FLAG_C,
        smallvec![borrow],
        ctx.addr,
    ));
    ctx.emit(IrInsn::with_output(
        IrOp::IntSborrow,
        ARM_FLAG_V,
        smallvec![a, b],
        ctx.addr,
    ));
}

/// For ADDS/SUBS, the dispatch first runs the regular binop emitter (which
/// writes the GPR `dst`), then this helper recomputes the operand varnodes
/// and emits N/Z/C/V from them. Re-resolving the operands is cheaper than
/// threading lhs/rhs back out of `emit_arm32_binop` and keeps that helper
/// reusable for the flag-less variants. If either operand fails to resolve
/// we silently skip flag emission — the binop itself already ran.
fn emit_arm32_adds_subs_flags(ctx: &mut LiftCtx, ops: &[ArmOperandType], op: IrOp) {
    let Some(dst) = arm32_first_dst(ops) else {
        return;
    };
    let (lhs_op, rhs_op) = match ops.len() {
        2 => (&ops[0], &ops[1]),
        _ => (&ops[1], &ops[2]),
    };
    let Some(lhs) = arm32_operand_to_varnode(ctx, lhs_op) else {
        return;
    };
    let Some(rhs) = arm32_operand_to_varnode(ctx, rhs_op) else {
        return;
    };
    emit_arm32_nz_flags(ctx, dst);
    match op {
        IrOp::IntAdd => emit_arm32_add_cv_flags(ctx, lhs, rhs),
        IrOp::IntSub => emit_arm32_sub_cv_flags(ctx, lhs, rhs),
        _ => {}
    }
}

fn emit_arm32_flags(ctx: &mut LiftCtx, ops: &[ArmOperandType], op: IrOp) {
    let Some(lhs) = ops.first().and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rhs) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let result = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(op, result, smallvec![lhs, rhs], ctx.addr));
    match op {
        IrOp::IntSub => {
            emit_arm32_nz_flags(ctx, result);
            emit_arm32_sub_cv_flags(ctx, lhs, rhs);
        }
        IrOp::IntAdd => {
            emit_arm32_nz_flags(ctx, result);
            emit_arm32_add_cv_flags(ctx, lhs, rhs);
        }
        // TST/TEQ (IntAnd/IntXor) still defer flag emission to the original
        // t151 boundary; logical-op C is the shifter carry-out (not derived
        // from result) and V is unaffected.
        _ => {}
    }
}

fn emit_arm32_branch(ctx: &mut LiftCtx, ops: &[ArmOperandType], insn: &Insn, detail: &InsnDetail) {
    let target = ops
        .first()
        .and_then(|o| arm32_operand_to_varnode(ctx, o))
        .unwrap_or_else(|| Varnode::constant(insn.address(), 4));
    let cc = detail.arch_detail().arm().map(|a| a.cc()).unwrap_or(ArmCC::ARM_CC_AL);
    if cc == ArmCC::ARM_CC_AL || cc == ArmCC::ARM_CC_INVALID {
        ctx.emit(IrInsn::without_output(
            IrOp::Branch,
            smallvec![target],
            ctx.addr,
        ));
        return;
    }

    // t151 MVP: EQ/NE/MI/PL consume the NZCV varnodes emitted by CMP/SUBS.
    // The remaining cond codes still depend on C/V (HI, LS, GE, LT, GT, LE,
    // CS, CC, VS, VC), which a future task will lift once C/V emission is
    // wired into every flag-setting op.
    let cond = match cc {
        ArmCC::ARM_CC_EQ => Some(ARM_FLAG_Z),
        ArmCC::ARM_CC_MI => Some(ARM_FLAG_N),
        ArmCC::ARM_CC_NE => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![ARM_FLAG_Z],
                ctx.addr,
            ));
            Some(t)
        }
        ArmCC::ARM_CC_PL => {
            let t = Varnode::unique(ctx.alloc_unique(), 1);
            ctx.emit(IrInsn::with_output(
                IrOp::BoolNegate,
                t,
                smallvec![ARM_FLAG_N],
                ctx.addr,
            ));
            Some(t)
        }
        _ => None,
    };

    let cond = cond.unwrap_or_else(|| {
        let c = Varnode::unique(ctx.alloc_unique(), 1);
        ctx.emit(IrInsn::with_output(
            IrOp::Callother,
            c,
            smallvec![Varnode::constant(0x360, 8), Varnode::constant(cc as u32 as u64, 1)],
            ctx.addr,
        ));
        c
    });
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![target, cond],
        ctx.addr,
    ));
}

/// BL/BLX — branch with link. Writes the return address (insn addr +
/// `insn.len()`) into LR (R14) before the call, mirroring the
/// architectural side effect.
fn emit_arm32_call(ctx: &mut LiftCtx, ops: &[ArmOperandType], insn: &Insn) {
    let Some(target) = ops.first().and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let return_addr = insn.address().wrapping_add(insn.len() as u64);
    let lr = arm32_reg_varnode(14);
    ctx.emit_copy(lr, Varnode::constant(return_addr, 4));
    ctx.emit(IrInsn::without_output(
        IrOp::Call,
        smallvec![target],
        ctx.addr,
    ));
}

/// Stamp every IR instruction emitted for the current source insn with
/// the active IT-block condition code. Called after lifting when the
/// IT-state machine popped a cond for this slot.
fn apply_guard(ops: &mut [IrInsn], cond: Option<u8>) {
    let Some(cond) = cond else { return };
    for insn in ops.iter_mut() {
        insn.guard = Some(cond);
    }
}

fn emit_arm32_bx(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let target_reg = match ops.first() {
        Some(ArmOperandType::Reg(reg)) => arm32_reg_index(*reg),
        _ => None,
    };
    if target_reg == Some(14) {
        ctx.emit(IrInsn::without_output(IrOp::Return, smallvec![], ctx.addr));
        return;
    }
    let Some(idx) = target_reg else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Branchind,
        smallvec![arm32_reg_varnode(idx)],
        ctx.addr,
    ));
}

/// MOVT Rd, #imm — write `imm` to bits 31:16 of `Rd`, leaving 15:0 intact.
/// Lowers to `Rd = (Rd & 0xFFFF) | (imm << 16)`.
fn emit_arm32_movt(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(imm) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let mask = Varnode::constant(0xFFFF, 4);
    let low = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(IrOp::IntAnd, low, smallvec![dst, mask], ctx.addr));
    let shift_amt = Varnode::constant(16, 4);
    let high = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(IrOp::IntLeft, high, smallvec![imm, shift_amt], ctx.addr));
    ctx.emit(IrInsn::with_output(IrOp::IntOr, dst, smallvec![low, high], ctx.addr));
}

/// MLA Rd, Rn, Rm, Ra → `Rd = Ra + Rn*Rm`. MLS → `Rd = Ra - Rn*Rm`.
fn emit_arm32_mla(ctx: &mut LiftCtx, ops: &[ArmOperandType], subtract: bool) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rn) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rm) = arm32_operand_to_varnode(ctx, &ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(ra) = arm32_operand_to_varnode(ctx, &ops[3]) else {
        ctx.emit_unimplemented();
        return;
    };
    let prod = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(IrOp::IntMult, prod, smallvec![rn, rm], ctx.addr));
    let op = if subtract { IrOp::IntSub } else { IrOp::IntAdd };
    ctx.emit(IrInsn::with_output(op, dst, smallvec![ra, prod], ctx.addr));
}

/// UMULL/SMULL Rdlo, Rdhi, Rn, Rm — 64-bit multiply with the result split
/// across two 32-bit registers. We emit `Rdlo = IntMult(Rn, Rm)` for the
/// low half, and `Rdhi = Callother(MULT_HIGH, Rn, Rm)` for the high half.
/// The `Callother` tag (`CALLOTHER_INT_MULT_HIGH` / `CALLOTHER_INT_SMULT_HIGH`)
/// is the canonical high-half intrinsic — downstream passes (e.g.
/// divisor-by-constant magic-number recognition) match on it to recover the
/// upper word of a 2N-bit product. Signed/unsigned must be tracked because
/// the high half differs between the two; the low half is identical.
fn emit_arm32_long_mul(ctx: &mut LiftCtx, ops: &[ArmOperandType], signed: bool) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(rdlo) = arm32_operand_to_varnode(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rdhi) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rn) = arm32_operand_to_varnode(ctx, &ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rm) = arm32_operand_to_varnode(ctx, &ops[3]) else {
        ctx.emit_unimplemented();
        return;
    };
    let tag = if signed {
        CALLOTHER_INT_SMULT_HIGH
    } else {
        CALLOTHER_INT_MULT_HIGH
    };
    ctx.emit(IrInsn::with_output(IrOp::IntMult, rdlo, smallvec![rn, rm], ctx.addr));
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        rdhi,
        smallvec![Varnode::constant(tag, 8), rn, rm],
        ctx.addr,
    ));
}

/// UMLAL / SMLAL — 64-bit multiply-accumulate:
///
/// ```text
///   RdHi:RdLo  =  RdHi:RdLo  +  (Rn * Rm)
/// ```
///
/// Capstone reports operands in the order `RdLo, RdHi, Rn, Rm` (same as
/// UMULL/SMULL). The lifter snapshots `RdLo_in` / `RdHi_in` into uniques
/// before doing any writes, computes the multiply low/high halves via the
/// same `IntMult` + `Callother(MULT_HIGH)` pair the long-multiply lifter
/// uses, then performs the 64-bit add with an explicit carry-out from the
/// low half into the high half:
///
/// ```text
///   prod_lo   = Rn  *  Rm
///   prod_hi   = MULT_HIGH(Rn, Rm)   // signed/unsigned selected by `signed`
///   new_lo    = RdLo_in  +  prod_lo
///   carry32   = zext1→32 ( INT_CARRY(RdLo_in, prod_lo) )
///   new_hi    = RdHi_in  +  prod_hi  +  carry32
///   RdLo      = new_lo
///   RdHi      = new_hi
/// ```
///
/// Snapshotting matters: `RdLo` and `RdHi` may alias `Rn`/`Rm`, and even
/// when they don't, writing `RdLo` first would clobber the input we still
/// need for the carry-out into `RdHi`.
fn emit_arm32_long_mul_acc(ctx: &mut LiftCtx, ops: &[ArmOperandType], signed: bool) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(rdlo) = arm32_operand_to_varnode(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rdhi) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rn) = arm32_operand_to_varnode(ctx, &ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rm) = arm32_operand_to_varnode(ctx, &ops[3]) else {
        ctx.emit_unimplemented();
        return;
    };

    // Snapshot RdLo_in and RdHi_in into uniques *before* any writes.
    let rdlo_in = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit_copy(rdlo_in, rdlo);
    let rdhi_in = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit_copy(rdhi_in, rdhi);

    // prod_lo / prod_hi.
    let prod_lo = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntMult,
        prod_lo,
        smallvec![rn, rm],
        ctx.addr,
    ));
    let tag = if signed {
        CALLOTHER_INT_SMULT_HIGH
    } else {
        CALLOTHER_INT_MULT_HIGH
    };
    let prod_hi = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        prod_hi,
        smallvec![Varnode::constant(tag, 8), rn, rm],
        ctx.addr,
    ));

    // new_lo = RdLo_in + prod_lo  (and capture the carry-out).
    let new_lo = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAdd,
        new_lo,
        smallvec![rdlo_in, prod_lo],
        ctx.addr,
    ));
    let carry1 = Varnode::unique(ctx.alloc_unique(), 1);
    ctx.emit(IrInsn::with_output(
        IrOp::IntCarry,
        carry1,
        smallvec![rdlo_in, prod_lo],
        ctx.addr,
    ));
    let carry32 = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntZext,
        carry32,
        smallvec![carry1],
        ctx.addr,
    ));

    // new_hi = RdHi_in + prod_hi + carry32.
    let hi_tmp = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAdd,
        hi_tmp,
        smallvec![rdhi_in, prod_hi],
        ctx.addr,
    ));
    let new_hi = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAdd,
        new_hi,
        smallvec![hi_tmp, carry32],
        ctx.addr,
    ));

    // Commit.
    ctx.emit_copy(rdlo, new_lo);
    ctx.emit_copy(rdhi, new_hi);
}

/// Canonical high-half multiply intrinsics. Emitted as
/// `Callother(<tag>, Rn, Rm) -> Rdhi`. Pairs with an `IntMult(Rn, Rm) -> Rdlo`
/// to model UMULL/SMULL on ARM A32 and stand-alone on AArch64 UMULH/SMULH.
pub const CALLOTHER_INT_MULT_HIGH: u64 = 0x361;
/// Signed counterpart of [`CALLOTHER_INT_MULT_HIGH`].
pub const CALLOTHER_INT_SMULT_HIGH: u64 = 0x363;

/// RRX Rd, Rm — rotate-right-with-extend by 1: `Rd = (C << 31) | (Rm >> 1)`.
/// MVP routes this as a Callother intrinsic since the carry flag isn't
/// modeled as a first-class IR varnode in the AArch32 register file.
fn emit_arm32_rrx(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![Varnode::constant(0x351, 8), src],
        ctx.addr,
    ));
}

/// LDRD Rt, Rt2, [Rn{, #imm}] — load two consecutive 32-bit words.
fn emit_arm32_load_pair(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst1) = arm32_operand_to_varnode(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(dst2) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(addr_vn) = arm32_operand_to_varnode(ctx, &ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    let lo = ctx.emit_load(4, addr_vn);
    ctx.emit_copy(dst1, lo);
    let four = Varnode::constant(4, 4);
    let addr2 = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(IrOp::IntAdd, addr2, smallvec![addr_vn, four], ctx.addr));
    let hi = ctx.emit_load(4, addr2);
    ctx.emit_copy(dst2, hi);
}

/// STRD Rt, Rt2, [Rn{, #imm}] — store two consecutive 32-bit words.
fn emit_arm32_store_pair(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(v1) = arm32_operand_to_varnode(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(v2) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(addr_vn) = arm32_operand_to_varnode(ctx, &ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit_store(addr_vn, v1);
    let four = Varnode::constant(4, 4);
    let addr2 = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(IrOp::IntAdd, addr2, smallvec![addr_vn, four], ctx.addr));
    ctx.emit_store(addr2, v2);
}

/// LDREX/LDREXB/LDREXH — exclusive load. Lowered as a `Callother` intrinsic
/// (tag 0x352) so analyses that care about lock/atomic semantics can find it.
fn emit_arm32_exclusive_load(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(addr_vn) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![Varnode::constant(0x352, 8), addr_vn],
        ctx.addr,
    ));
}

/// STREX/STREXB/STREXH Rd, Rt, [Rn] — exclusive store. `Rd` receives the
/// success status (0 = succeeded). Tag 0x353.
fn emit_arm32_exclusive_store(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    if ops.len() < 3 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(status) = arm32_operand_to_varnode(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(value) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(addr_vn) = arm32_operand_to_varnode(ctx, &ops[2]) else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        status,
        smallvec![Varnode::constant(0x353, 8), value, addr_vn],
        ctx.addr,
    ));
}

/// BFI Rd, Rn, #lsb, #width — replace `Rd[lsb+width-1:lsb]` with
/// `Rn[width-1:0]`, leaving the rest of `Rd` intact.
///
/// Lowering:
///   field_mask  = ((1 << width) - 1) << lsb
///   src_bits    = (Rn & ((1 << width) - 1)) << lsb
///   Rd          = (Rd & !field_mask) | src_bits
fn emit_arm32_bfi(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rn) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let (Some(lsb), Some(width)) = (arm32_operand_imm(&ops[2]), arm32_operand_imm(&ops[3])) else {
        ctx.emit_unimplemented();
        return;
    };
    if width == 0 || width > 32 || lsb >= 32 || lsb + width > 32 {
        ctx.emit_unimplemented();
        return;
    }
    let width_mask: u32 = if width == 32 { 0xFFFF_FFFF } else { (1u32 << width) - 1 };
    let field_mask: u32 = width_mask.checked_shl(lsb).unwrap_or(0);

    // src_low = Rn & width_mask
    let src_low = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        src_low,
        smallvec![rn, Varnode::constant(width_mask as u64, 4)],
        ctx.addr,
    ));
    // src_bits = src_low << lsb
    let src_bits = if lsb == 0 {
        src_low
    } else {
        let s = Varnode::unique(ctx.alloc_unique(), 4);
        ctx.emit(IrInsn::with_output(
            IrOp::IntLeft,
            s,
            smallvec![src_low, Varnode::constant(lsb as u64, 4)],
            ctx.addr,
        ));
        s
    };
    // keep = Rd & !field_mask
    let inv_mask: u32 = !field_mask;
    let keep = Varnode::unique(ctx.alloc_unique(), 4);
    ctx.emit(IrInsn::with_output(
        IrOp::IntAnd,
        keep,
        smallvec![dst, Varnode::constant(inv_mask as u64, 4)],
        ctx.addr,
    ));
    // Rd = keep | src_bits
    ctx.emit(IrInsn::with_output(
        IrOp::IntOr,
        dst,
        smallvec![keep, src_bits],
        ctx.addr,
    ));
}

/// UBFX/SBFX Rd, Rn, #lsb, #width — extract `width` bits starting at
/// `lsb` from `Rn`, zero-extend (UBFX) or sign-extend (SBFX) the result
/// into the 32-bit `Rd`.
///
/// Lowering (UBFX): Rd = (Rn >> lsb) & ((1 << width) - 1)
/// Lowering (SBFX): Rd = (Rn << (32 - lsb - width)) s>> (32 - width)
fn emit_arm32_ubfx(ctx: &mut LiftCtx, ops: &[ArmOperandType], signed: bool) {
    if ops.len() < 4 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(rn) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let (Some(lsb), Some(width)) = (arm32_operand_imm(&ops[2]), arm32_operand_imm(&ops[3])) else {
        ctx.emit_unimplemented();
        return;
    };
    if width == 0 || width > 32 || lsb >= 32 || lsb + width > 32 {
        ctx.emit_unimplemented();
        return;
    }

    if signed {
        // (Rn << left) s>> right, where left = 32 - lsb - width, right = 32 - width.
        let left = 32 - lsb - width;
        let right = 32 - width;
        let shifted_left = if left == 0 {
            rn
        } else {
            let t = Varnode::unique(ctx.alloc_unique(), 4);
            ctx.emit(IrInsn::with_output(
                IrOp::IntLeft,
                t,
                smallvec![rn, Varnode::constant(left as u64, 4)],
                ctx.addr,
            ));
            t
        };
        if right == 0 {
            ctx.emit_copy(dst, shifted_left);
        } else {
            ctx.emit(IrInsn::with_output(
                IrOp::IntSright,
                dst,
                smallvec![shifted_left, Varnode::constant(right as u64, 4)],
                ctx.addr,
            ));
        }
    } else {
        // (Rn >> lsb) & mask
        let shifted = if lsb == 0 {
            rn
        } else {
            let t = Varnode::unique(ctx.alloc_unique(), 4);
            ctx.emit(IrInsn::with_output(
                IrOp::IntRight,
                t,
                smallvec![rn, Varnode::constant(lsb as u64, 4)],
                ctx.addr,
            ));
            t
        };
        let width_mask: u32 = if width == 32 { 0xFFFF_FFFF } else { (1u32 << width) - 1 };
        ctx.emit(IrInsn::with_output(
            IrOp::IntAnd,
            dst,
            smallvec![shifted, Varnode::constant(width_mask as u64, 4)],
            ctx.addr,
        ));
    }
}

/// Distinguish REV/REV16/RBIT in the byte-reverse Callother dispatch.
#[derive(Clone, Copy)]
enum ArmReverseKind {
    Rev,
    Rev16,
    Rbit,
}

/// Canonical byte/bit-reverse intrinsic tags. Lowered as
/// `Callother(<tag>, Rn) -> Rd`. A future task can replace these with
/// explicit byte-extraction + OR sequences if a downstream pass needs
/// to reason about individual bits.
pub const CALLOTHER_ARM_REV: u64 = 0x354;
pub const CALLOTHER_ARM_REV16: u64 = 0x355;
pub const CALLOTHER_ARM_RBIT: u64 = 0x356;

fn emit_arm32_byte_rev(ctx: &mut LiftCtx, ops: &[ArmOperandType], kind: ArmReverseKind) {
    let Some(dst) = arm32_first_dst(ops) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ops.get(1).and_then(|o| arm32_operand_to_varnode(ctx, o)) else {
        ctx.emit_unimplemented();
        return;
    };
    let tag = match kind {
        ArmReverseKind::Rev => CALLOTHER_ARM_REV,
        ArmReverseKind::Rev16 => CALLOTHER_ARM_REV16,
        ArmReverseKind::Rbit => CALLOTHER_ARM_RBIT,
    };
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![Varnode::constant(tag, 8), src],
        ctx.addr,
    ));
}

/// Resolve an immediate-typed Capstone operand to its `u32` value.
/// Returns `None` for non-immediate operand kinds. Used by bitfield
/// emitters (BFI/UBFX/SBFX) where the lsb/width slots are always Imm.
fn arm32_operand_imm(op: &ArmOperandType) -> Option<u32> {
    match op {
        ArmOperandType::Imm(i) => Some(*i as u32),
        ArmOperandType::Cimm(i) => Some(*i as u32),
        ArmOperandType::Pimm(i) => Some(*i as u32),
        _ => None,
    }
}

/// CBZ/CBNZ Rn, label — Thumb-2 compare-branch-zero. Lowers to a flag
/// computation (Rn ==/!= 0) plus a `Cbranch` to the immediate target.
fn emit_arm32_cbz(ctx: &mut LiftCtx, ops: &[ArmOperandType], not_zero: bool) {
    if ops.len() < 2 {
        ctx.emit_unimplemented();
        return;
    }
    let Some(reg) = arm32_operand_to_varnode(ctx, &ops[0]) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(target) = arm32_operand_to_varnode(ctx, &ops[1]) else {
        ctx.emit_unimplemented();
        return;
    };
    let zero = Varnode::constant(0, reg.size);
    let cond = Varnode::unique(ctx.alloc_unique(), 1);
    let cmp_op = if not_zero { IrOp::IntNotequal } else { IrOp::IntEqual };
    ctx.emit(IrInsn::with_output(cmp_op, cond, smallvec![reg, zero], ctx.addr));
    ctx.emit(IrInsn::without_output(
        IrOp::Cbranch,
        smallvec![target, cond],
        ctx.addr,
    ));
}

/// TBB [Rn, Rm] / TBH [Rn, Rm, LSL #1] — table branch. The actual target
/// is computed from a memory table; we lower as a `Branchind` so the
/// per-arch jump-table classifier picks it up downstream.
fn emit_arm32_tbb(ctx: &mut LiftCtx, ops: &[ArmOperandType]) {
    let target = ops.first().and_then(|o| arm32_operand_to_varnode(ctx, o));
    match target {
        Some(t) => ctx.emit(IrInsn::without_output(IrOp::Branchind, smallvec![t], ctx.addr)),
        None => ctx.emit_unimplemented(),
    }
}

/// Emit IR for a decoded LDM/STM (or PUSH/POP) tuple. Generates one
/// Load/Store per register in the list and, when `writeback` is set,
/// adjusts `Rn` by `±4 * count` after the transfers.
fn emit_ldm_stm(ctx: &mut LiftCtx, decoded: LdmStmDecoded) {
    let (addressing, rn, reg_list, writeback, is_load) = decoded;
    let pairs = expand_reg_list(reg_list, addressing);
    if pairs.is_empty() {
        return;
    }
    let base_vn = arm32_reg_varnode(rn);

    for (offset, reg_num) in &pairs {
        let target_addr = if *offset == 0 {
            base_vn
        } else {
            let disp = Varnode::constant(*offset as i64 as u64, 4);
            let tmp = Varnode::unique(ctx.alloc_unique(), 4);
            ctx.emit(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![base_vn, disp],
                ctx.addr,
            ));
            tmp
        };
        if is_load {
            let loaded = ctx.emit_load(4, target_addr);
            ctx.emit_copy(arm32_reg_varnode(*reg_num), loaded);
        } else {
            ctx.emit_store(target_addr, arm32_reg_varnode(*reg_num));
        }
    }

    if writeback {
        let count = pairs.len() as i64;
        let delta: i64 = match addressing {
            LdmStmAddressing::Ia | LdmStmAddressing::Ib => 4 * count,
            LdmStmAddressing::Da | LdmStmAddressing::Db => -4 * count,
        };
        let delta_vn = Varnode::constant(delta as u64, 4);
        ctx.emit(IrInsn::with_output(
            IrOp::IntAdd,
            base_vn,
            smallvec![base_vn, delta_vn],
            ctx.addr,
        ));
    }
}

fn arm32_reg_varnode(reg_num: u8) -> Varnode {
    Varnode::reg((reg_num as u64) * 4, 4)
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
        Arm64Insn::ARM64_INS_ADDS => arithmetic::lift_adds(ctx, &ops),
        Arm64Insn::ARM64_INS_SUBS => arithmetic::lift_subs(ctx, &ops),
        Arm64Insn::ARM64_INS_CMP => arithmetic::lift_cmp(ctx, &ops),
        Arm64Insn::ARM64_INS_CMN => arithmetic::lift_cmn(ctx, &ops),
        Arm64Insn::ARM64_INS_TST => arithmetic::lift_tst(ctx, &ops),
        Arm64Insn::ARM64_INS_NEG => arithmetic::lift_neg(ctx, &ops),
        Arm64Insn::ARM64_INS_MUL => arithmetic::lift_mul(ctx, &ops),
        Arm64Insn::ARM64_INS_SDIV => arithmetic::lift_sdiv(ctx, &ops),
        Arm64Insn::ARM64_INS_UDIV => arithmetic::lift_udiv(ctx, &ops),
        Arm64Insn::ARM64_INS_MADD => arithmetic::lift_madd(ctx, &ops),
        Arm64Insn::ARM64_INS_MSUB => arithmetic::lift_msub(ctx, &ops),
        Arm64Insn::ARM64_INS_UMULH => arithmetic::lift_mul_high(ctx, &ops, false),
        Arm64Insn::ARM64_INS_SMULH => arithmetic::lift_mul_high(ctx, &ops, true),

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
        Arm64Insn::ARM64_INS_CSET => control_flow::lift_cset(ctx, &ops, detail, 0x331),
        Arm64Insn::ARM64_INS_CSETM => control_flow::lift_cset(ctx, &ops, detail, 0x332),
        Arm64Insn::ARM64_INS_CCMP => control_flow::lift_ccmp(ctx, &ops, detail, false),
        Arm64Insn::ARM64_INS_CCMN => control_flow::lift_ccmp(ctx, &ops, detail, true),

        Arm64Insn::ARM64_INS_MRS => emit_aarch64_mrs(ctx, &ops),
        Arm64Insn::ARM64_INS_MSR => emit_aarch64_msr(ctx, &ops),

        _ => ctx.emit_unimplemented(),
    }
}

fn aarch64_sysreg_const(op: &Arm64OperandType) -> Option<Varnode> {
    match op {
        Arm64OperandType::RegMrs(s) | Arm64OperandType::RegMsr(s) => {
            Some(Varnode::constant(*s as u32 as u64, 4))
        }
        Arm64OperandType::Pstate(p) => Some(Varnode::constant(*p as u32 as u64, 4)),
        Arm64OperandType::Imm(i) => Some(Varnode::constant(*i as u64, 4)),
        Arm64OperandType::Cimm(i) => Some(Varnode::constant(*i as u64, 4)),
        _ => None,
    }
}

fn emit_aarch64_mrs(ctx: &mut LiftCtx, ops: &[(Arm64OperandType, Arm64Shift)]) {
    let dst = match ops.first() {
        Some((Arm64OperandType::Reg(reg), _)) => reg_varnode(*reg),
        _ => None,
    };
    let Some(dst) = dst else {
        ctx.emit_unimplemented();
        return;
    };
    let sysreg = ops
        .get(1)
        .and_then(|(o, _)| aarch64_sysreg_const(o))
        .unwrap_or_else(|| Varnode::constant(0, 4));
    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![Varnode::constant(CALLOTHER_ARM_MRS, 8), sysreg],
        ctx.addr,
    ));
}

fn emit_aarch64_msr(ctx: &mut LiftCtx, ops: &[(Arm64OperandType, Arm64Shift)]) {
    let sysreg = ops
        .first()
        .and_then(|(o, _)| aarch64_sysreg_const(o))
        .unwrap_or_else(|| Varnode::constant(0, 4));
    let src = ops.get(1).and_then(|(o, _)| operand_to_varnode(ctx, o));
    let Some(src) = src else {
        ctx.emit_unimplemented();
        return;
    };
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![Varnode::constant(CALLOTHER_ARM_MSR, 8), sysreg, src],
        ctx.addr,
    ));
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

/// Decode a Thumb-2 (T32, 32-bit) LDM/STM encoding. Two layouts share
/// the same insn class, distinguished by the P/U bits:
///
/// ```text
///   LDMIA.W / STMIA.W  ←  P=0, U=1   (increment after, U=1)
///   LDMDB.W / STMDB.W  ←  P=1, U=0   (decrement before)
/// ```
///
/// Full insn shape (input here is little-endian halfwords `hw1`, `hw2`,
/// where `hw1` is the most-significant halfword of the 32-bit insn):
///
/// ```text
///   hw1:  1110_100 P U 0 W L  Rn:4
///   hw2:  P_pc  M_lr  (0)     reg_list:13
/// ```
///
/// Returns `None` for any other encoding (including the `P==U` reserved
/// combos, which alias different instruction classes such as RFE/SRS).
/// The `reg_list` is the 16-bit register bitmap suitable for
/// [`expand_reg_list`], built from hw2's low 13 bits plus bit-14 (LR) and
/// bit-15 (PC). Bit 13 is reserved-zero in the encoding, so SP cannot
/// appear in a T32 reg list — we preserve that by masking it out.
///
/// PUSH.W / POP.W (the T2 encodings of the wide push/pop) are this same
/// class with Rn=13 and W=1; they fall out of this decoder naturally and
/// don't need a separate code path.
pub fn decode_thumb2_ldm_stm(hw1: u16, hw2: u16) -> Option<LdmStmDecoded> {
    // Top 7 bits of hw1 must be 1110_100 (the T32 load/store-multiple
    // class).
    if (hw1 >> 9) & 0x7F != 0b1110_100 {
        return None;
    }
    let p = (hw1 >> 8) & 1 == 1;
    let u = (hw1 >> 7) & 1 == 1;
    // Bit 22 (hw1 bit 6) must be 0 for LDM/STM (it's the S bit for
    // exception-return-style encodings); reject if set.
    if (hw1 >> 6) & 1 != 0 {
        return None;
    }
    let w = (hw1 >> 5) & 1 == 1;
    let l = (hw1 >> 4) & 1 == 1;
    let rn = (hw1 & 0xF) as u8;
    // P==U is the reserved combination per ARM ARM A8.6.53/55; bail
    // rather than guess.
    if p == u {
        return None;
    }
    let addressing = if p {
        LdmStmAddressing::Db
    } else {
        LdmStmAddressing::Ia
    };
    // hw2 encodes the 13-bit reg list in bits[12:0], with bit 13 RAZ,
    // bit 14 = LR-present, bit 15 = PC-present. Mask off the reserved
    // SP bit so callers can pass the result directly to expand_reg_list.
    let reg_list = hw2 & 0xDFFF;
    Some((addressing, rn, reg_list, w, l))
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

/// AArch64 conditional-select decoded fields (CSEL/CSINC/CSINV/CSNEG and
/// the CSET/CSETM aliases). `op` packs `bit30` (high) and `bit10` (low):
/// `0=CSEL`, `1=CSINC`, `2=CSINV`, `3=CSNEG`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CselDecoded {
    pub sf: bool,
    pub op: u8,
    pub rd: u8,
    pub rn: u8,
    pub rm: u8,
    pub cond: u8,
}

/// Standalone decoder for the AArch64 conditional-select group
/// (`sf 0 0 11010100 Rm:5 cond:4 op2:1 0 Rn:5 Rd:5`). Returns `None` for
/// any other encoding. Lets callers consume the bytes without spinning up
/// Capstone (used as a fast pre-filter / fallback path).
pub fn try_aarch64_csel(insn: u32) -> Option<CselDecoded> {
    if (insn & 0x7FE0_0800) != 0x1A80_0000 {
        return None;
    }
    let sf = (insn >> 31) & 1 == 1;
    let op30 = (insn >> 30) & 1;
    let op10 = (insn >> 10) & 1;
    let op = ((op30 as u8) << 1) | (op10 as u8);
    let rm = ((insn >> 16) & 0x1F) as u8;
    let cond = ((insn >> 12) & 0xF) as u8;
    let rn = ((insn >> 5) & 0x1F) as u8;
    let rd = (insn & 0x1F) as u8;
    Some(CselDecoded { sf, op, rd, rn, rm, cond })
}

/// AArch64 conditional-compare decoded fields (CCMP/CCMN, register and
/// immediate forms). `is_neg=true` ⇒ CCMN (uses addition); `is_imm=true` ⇒
/// the second operand is the 5-bit immediate field instead of Rm.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CcmpDecoded {
    pub sf: bool,
    pub is_neg: bool,
    pub rn: u8,
    pub rm_or_imm: u8,
    pub is_imm: bool,
    pub nzcv: u8,
    pub cond: u8,
}

/// Standalone decoder for the AArch64 conditional-compare group.
///
/// Register-form encoding (`bits[11:10] = 00`):
/// `sf 1 1 11010010 Rm:5 cond:4 0 0 Rn:5 0 nzcv:4`  (CCMP)
/// `sf 0 1 11010010 Rm:5 cond:4 0 0 Rn:5 0 nzcv:4`  (CCMN)
///
/// Immediate-form encoding (`bits[11:10] = 10`): same shape, with `Rm`
/// replaced by `imm5`. We accept both forms and surface the `is_imm`
/// distinction so the lifter can decide what to feed to the IR.
pub fn try_aarch64_ccmp(insn: u32) -> Option<CcmpDecoded> {
    // Required bits (with bit11 free for reg/imm distinction):
    //   bit29 = 1, bits[28:21] = 11010010, bit10 = 0, bit4 = 0.
    // Mask: 0x3FE0_0410 ; expected: 0x3A40_0000.
    if (insn & 0x3FE0_0410) != 0x3A40_0000 {
        return None;
    }
    let sf = (insn >> 31) & 1 == 1;
    let op30 = (insn >> 30) & 1;
    let is_neg = op30 == 0; // op==0 → CCMN (add); op==1 → CCMP (sub)
    let rm_or_imm = ((insn >> 16) & 0x1F) as u8;
    let cond = ((insn >> 12) & 0xF) as u8;
    let is_imm = (insn >> 11) & 1 == 1;
    let rn = ((insn >> 5) & 0x1F) as u8;
    let nzcv = (insn & 0xF) as u8;
    Some(CcmpDecoded {
        sf,
        is_neg,
        rn,
        rm_or_imm,
        is_imm,
        nzcv,
        cond,
    })
}

/// Canonical AArch64 CCMP/CCMN intrinsic tag. Emitted as
/// `Callother(CALLOTHER_AARCH64_CCMP, cond, Rn, Rm_or_imm, nzcv_or_-imm-flag, is_neg)`
/// — no IR output (NZCV is implicit architectural state). A later pass
/// can recognize the intrinsic when flag-aware analyses are added.
pub const CALLOTHER_AARCH64_CCMP: u64 = 0x362;

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
