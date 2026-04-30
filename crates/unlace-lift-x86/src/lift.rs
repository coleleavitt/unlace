use iced_x86::{Decoder, DecoderOptions, Instruction, Mnemonic, OpKind};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::ops::{arithmetic, bitwise, control_flow, data_move, stack, string_ops, sse};
use crate::register_file::{iced_reg_to_varnode, x86_64_register_file};

pub struct X86Lifter {
    reg_file: RegisterFile,
}

impl X86Lifter {
    pub fn new() -> Self {
        Self {
            reg_file: x86_64_register_file(),
        }
    }
}

impl Default for X86Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for X86Lifter {
    fn arch(&self) -> ArchId {
        ArchId::X86_64
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }

        let mut decoder = Decoder::with_ip(64, bytes, addr, DecoderOptions::NONE);
        let insn = decoder.decode();

        if insn.is_invalid() {
            return Err(LiftError::Decode(format!(
                "invalid instruction at {addr:#x}"
            )));
        }

        let mut ctx = LiftCtx::new(addr);
        dispatch_mnemonic(&mut ctx, &insn);

        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: insn.len(),
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
        self.ops
            .push(IrInsn::without_output(IrOp::Unimplemented, smallvec![], self.addr));
    }

    pub fn emit_store(&mut self, mem_addr: Varnode, value: Varnode) {
        let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
        self.emit(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram_space, mem_addr, value],
            self.addr,
        ));
    }

    pub fn write_operand_insn(&mut self, insn: &Instruction, idx: u32, dst: Varnode, value: Varnode) {
        if insn.op_kind(idx) == OpKind::Memory {
            self.emit_store(dst, value);
        } else {
            self.emit(IrInsn::with_output(IrOp::Copy, dst, smallvec![value], self.addr));
        }
    }

    pub fn operand_read(&mut self, insn: &Instruction, idx: u32) -> Option<Varnode> {
        match insn.op_kind(idx) {
            OpKind::Register => {
                let reg = insn.op_register(idx);
                let (offset, size) = iced_reg_to_varnode(reg)?;
                Some(Varnode::new(SpaceId::Register, offset, size))
            }
            OpKind::Immediate8 => Some(Varnode::constant(insn.immediate8() as u64, 1)),
            OpKind::Immediate8_2nd => Some(Varnode::constant(insn.immediate8_2nd() as u64, 1)),
            OpKind::Immediate16 => Some(Varnode::constant(insn.immediate16() as u64, 2)),
            OpKind::Immediate32 => {
                let op_size = operand_size(insn, idx);
                Some(Varnode::constant(insn.immediate32() as i32 as i64 as u64, op_size))
            }
            OpKind::Immediate64 => Some(Varnode::constant(insn.immediate64(), 8)),
            OpKind::Immediate8to16 => Some(Varnode::constant(insn.immediate8to16() as u64, 2)),
            OpKind::Immediate8to32 => {
                let op_size = operand_size(insn, idx);
                Some(Varnode::constant(insn.immediate8to32() as i32 as i64 as u64, op_size))
            }
            OpKind::Immediate8to64 => {
                Some(Varnode::constant(insn.immediate8to64() as u64, 8))
            }
            OpKind::Immediate32to64 => {
                Some(Varnode::constant(insn.immediate32to64() as u64, 8))
            }
            OpKind::Memory => {
                let mem_size = insn.memory_size().size() as u8;
                let addr_vn = self.compute_memory_address(insn)?;
                let ram_space = Varnode::constant(SpaceId::Ram as u64, 8);
                let loaded = Varnode::unique(self.alloc_unique(), mem_size);
                self.emit(IrInsn::with_output(
                    IrOp::Load,
                    loaded,
                    smallvec![ram_space, addr_vn],
                    self.addr,
                ));
                Some(loaded)
            }
            OpKind::NearBranch16 | OpKind::NearBranch32 | OpKind::NearBranch64 => {
                Some(Varnode::constant(insn.near_branch_target(), 8))
            }
            _ => None,
        }
    }

    pub fn operand_write(&mut self, insn: &Instruction, idx: u32) -> Option<Varnode> {
        match insn.op_kind(idx) {
            OpKind::Register => {
                let reg = insn.op_register(idx);
                let (offset, size) = iced_reg_to_varnode(reg)?;
                Some(Varnode::new(SpaceId::Register, offset, size))
            }
            OpKind::Memory => {
                self.compute_memory_address(insn)
            }
            _ => None,
        }
    }

    pub fn memory_address(&mut self, insn: &Instruction) -> Option<Varnode> {
        self.compute_memory_address(insn)
    }

    fn compute_memory_address(&mut self, insn: &Instruction) -> Option<Varnode> {
        let mut addr = None;

        let base_reg = insn.memory_base();
        if base_reg != iced_x86::Register::None {
            let (offset, size) = iced_reg_to_varnode(base_reg)?;
            addr = Some(Varnode::new(SpaceId::Register, offset, size));
        }

        let index_reg = insn.memory_index();
        if index_reg != iced_x86::Register::None {
            let (offset, size) = iced_reg_to_varnode(index_reg)?;
            let idx_vn = Varnode::new(SpaceId::Register, offset, size);

            let scale = insn.memory_index_scale();
            let scaled = if scale > 1 {
                let scale_vn = Varnode::constant(scale as u64, size);
                let t = Varnode::unique(self.alloc_unique(), size);
                self.emit(IrInsn::with_output(
                    IrOp::IntMult,
                    t,
                    smallvec![idx_vn, scale_vn],
                    self.addr,
                ));
                t
            } else {
                idx_vn
            };

            addr = Some(match addr {
                Some(base) => {
                    let t = Varnode::unique(self.alloc_unique(), base.size);
                    self.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![base, scaled],
                        self.addr,
                    ));
                    t
                }
                None => scaled,
            });
        }

        let disp = insn.memory_displacement64();
        if disp != 0 {
            let addr_size = addr.map_or(8u8, |a| a.size);
            let disp_vn = Varnode::constant(disp, addr_size);
            addr = Some(match addr {
                Some(base) => {
                    let t = Varnode::unique(self.alloc_unique(), addr_size);
                    self.emit(IrInsn::with_output(
                        IrOp::IntAdd,
                        t,
                        smallvec![base, disp_vn],
                        self.addr,
                    ));
                    t
                }
                None => disp_vn,
            });
        }

        // RIP-relative addressing
        if insn.memory_base() == iced_x86::Register::RIP {
            // iced already resolves RIP-relative to absolute in memory_displacement64
            // when using Decoder::with_ip, so the base+disp is already correct
        }

        if addr.is_none() {
            addr = Some(Varnode::constant(0, 8));
        }

        addr
    }
}

fn operand_size(insn: &Instruction, _idx: u32) -> u8 {
    match insn.memory_size().size() {
        0 => {
            // Non-memory operand: infer from first register operand or default to 4
            for i in 0..insn.op_count() {
                if insn.op_kind(i) == OpKind::Register {
                    if let Some((_, size)) = iced_reg_to_varnode(insn.op_register(i)) {
                        return size;
                    }
                }
            }
            4
        }
        s => s as u8,
    }
}

fn dispatch_mnemonic(ctx: &mut LiftCtx, insn: &Instruction) {
    // REP-prefixed string operations get first priority since iced-x86 decodes
    // them as plain MOVSB/STOSB/CMPSB mnemonics with the rep flag set.
    if string_ops::try_lift_rep_string(ctx, insn) {
        return;
    }

    use Mnemonic as M;

    match insn.mnemonic() {
        M::Mov | M::Movzx | M::Movsx | M::Movsxd | M::Cmove | M::Cmovne
        | M::Cmovb | M::Cmovae | M::Cmova | M::Cmovbe | M::Cmovl
        | M::Cmovge | M::Cmovg | M::Cmovle | M::Cmovs | M::Cmovns => {
            data_move::lift_mov(ctx, insn);
        }

        M::Lea => data_move::lift_lea(ctx, insn),
        M::Nop => data_move::lift_nop(ctx, insn),
        M::Xchg => data_move::lift_xchg(ctx, insn),

        M::Add => arithmetic::lift_add(ctx, insn),
        M::Sub => arithmetic::lift_sub(ctx, insn),
        M::Cmp => arithmetic::lift_cmp(ctx, insn),
        M::Test => arithmetic::lift_test(ctx, insn),
        M::Imul => arithmetic::lift_imul(ctx, insn),
        M::Mul => arithmetic::lift_mul(ctx, insn),
        M::Div => arithmetic::lift_div(ctx, insn),
        M::Idiv => arithmetic::lift_idiv(ctx, insn),
        M::Neg => arithmetic::lift_neg(ctx, insn),
        M::Inc => arithmetic::lift_inc(ctx, insn),
        M::Dec => arithmetic::lift_dec(ctx, insn),
        M::Cbw => arithmetic::lift_cbw(ctx, insn),
        M::Cwde => arithmetic::lift_cwde(ctx, insn),
        M::Cdqe => arithmetic::lift_cdqe(ctx, insn),
        M::Cdq => arithmetic::lift_cdq(ctx, insn),
        M::Cqo => arithmetic::lift_cqo(ctx, insn),

        M::And => bitwise::lift_and(ctx, insn),
        M::Or => bitwise::lift_or(ctx, insn),
        M::Xor => bitwise::lift_xor(ctx, insn),
        M::Not => bitwise::lift_not(ctx, insn),
        M::Shl => bitwise::lift_shl(ctx, insn),
        M::Shr => bitwise::lift_shr(ctx, insn),
        M::Sar => bitwise::lift_sar(ctx, insn),

        M::Jmp => control_flow::lift_jmp(ctx, insn),

        M::Je | M::Jne | M::Jb | M::Jae | M::Ja | M::Jbe | M::Jl | M::Jge
        | M::Jg | M::Jle | M::Js | M::Jns | M::Jo | M::Jno | M::Jp | M::Jnp => {
            control_flow::lift_jcc(ctx, insn);
        }

        M::Call => control_flow::lift_call(ctx, insn),
        M::Ret => control_flow::lift_ret(ctx, insn),

        M::Sete | M::Setne | M::Setb | M::Setae | M::Seta | M::Setbe
        | M::Setl | M::Setge | M::Setg | M::Setle | M::Sets | M::Setns
        | M::Seto | M::Setno | M::Setp | M::Setnp => {
            data_move::lift_setcc(ctx, insn);
        }

        M::Push => stack::lift_push(ctx, insn),
        M::Pop => stack::lift_pop(ctx, insn),
        M::Leave => stack::lift_leave(ctx, insn),

        M::Movdqa => sse::lift_sse_mov(ctx, insn, sse::tag::MOVDQA),
        M::Movdqu => sse::lift_sse_mov(ctx, insn, sse::tag::MOVDQU),

        M::Paddb => sse::lift_sse_binop(ctx, insn, sse::tag::PADDB),
        M::Paddw => sse::lift_sse_binop(ctx, insn, sse::tag::PADDW),
        M::Paddd => sse::lift_sse_binop(ctx, insn, sse::tag::PADDD),
        M::Paddq => sse::lift_sse_binop(ctx, insn, sse::tag::PADDQ),

        M::Psubb => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBB),
        M::Psubw => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBW),
        M::Psubd => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBD),
        M::Psubq => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBQ),

        M::Pand => sse::lift_sse_binop(ctx, insn, sse::tag::PAND),
        M::Por  => sse::lift_sse_binop(ctx, insn, sse::tag::POR),
        M::Pxor => sse::lift_sse_binop(ctx, insn, sse::tag::PXOR),

        _ => ctx.emit_unimplemented(),
    }
}
