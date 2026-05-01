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

        ARM64_CS.with(|cell| {
            let mut slot = cell.borrow_mut();
            if slot.is_none() {
                *slot = Some(Self::make_capstone());
            }
            let cs = slot.as_ref().expect("thread-local Capstone initialized");

            let insns = cs
                .disasm_count(bytes, addr, 1)
                .map_err(|e| LiftError::Decode(format!("{e}")))?;

            let insn = insns.as_ref().first().ok_or_else(|| {
                LiftError::Decode(format!("no instruction decoded at {addr:#x}"))
            })?;

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

        Arm64Insn::ARM64_INS_AND => bitwise::lift_and(ctx, &ops),
        Arm64Insn::ARM64_INS_ORR => bitwise::lift_orr(ctx, &ops),
        Arm64Insn::ARM64_INS_EOR => bitwise::lift_eor(ctx, &ops),
        Arm64Insn::ARM64_INS_LSL => bitwise::lift_lsl(ctx, &ops),
        Arm64Insn::ARM64_INS_LSR => bitwise::lift_lsr(ctx, &ops),
        Arm64Insn::ARM64_INS_ASR => bitwise::lift_asr(ctx, &ops),
        Arm64Insn::ARM64_INS_MVN => bitwise::lift_mvn(ctx, &ops),

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

        Arm64Insn::ARM64_INS_B => control_flow::lift_b(ctx, &ops, detail),
        Arm64Insn::ARM64_INS_BL => control_flow::lift_bl(ctx, &ops),
        Arm64Insn::ARM64_INS_BR => control_flow::lift_br(ctx, &ops),
        Arm64Insn::ARM64_INS_BLR => control_flow::lift_blr(ctx, &ops),
        Arm64Insn::ARM64_INS_CBZ => control_flow::lift_cbz(ctx, &ops),
        Arm64Insn::ARM64_INS_CBNZ => control_flow::lift_cbnz(ctx, &ops),
        Arm64Insn::ARM64_INS_RET => control_flow::lift_ret(ctx, &ops),

        _ => ctx.emit_unimplemented(),
    }
}
