use iced_x86::{Decoder, DecoderOptions, Instruction, Mnemonic, OpKind};
use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterFile, SpaceId, Varnode,
};

use crate::ops::{arithmetic, bitwise, control_flow, data_move, fpu, sse, stack, string_ops};
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

    pub fn write_operand_insn(
        &mut self,
        insn: &Instruction,
        idx: u32,
        dst: Varnode,
        value: Varnode,
    ) {
        if insn.op_kind(idx) == OpKind::Memory {
            self.emit_store(dst, value);
        } else {
            self.emit(IrInsn::with_output(
                IrOp::Copy,
                dst,
                smallvec![value],
                self.addr,
            ));
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
                Some(Varnode::constant(
                    insn.immediate32() as i32 as i64 as u64,
                    op_size,
                ))
            }
            OpKind::Immediate64 => Some(Varnode::constant(insn.immediate64(), 8)),
            OpKind::Immediate8to16 => Some(Varnode::constant(insn.immediate8to16() as u64, 2)),
            OpKind::Immediate8to32 => {
                let op_size = operand_size(insn, idx);
                Some(Varnode::constant(
                    insn.immediate8to32() as i32 as i64 as u64,
                    op_size,
                ))
            }
            OpKind::Immediate8to64 => Some(Varnode::constant(insn.immediate8to64() as u64, 8)),
            OpKind::Immediate32to64 => Some(Varnode::constant(insn.immediate32to64() as u64, 8)),
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
            OpKind::Memory => self.compute_memory_address(insn),
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
        M::Mov | M::Movzx | M::Movsx | M::Movsxd => {
            data_move::lift_mov(ctx, insn);
        }

        M::Cmove
        | M::Cmovne
        | M::Cmovb
        | M::Cmovae
        | M::Cmova
        | M::Cmovbe
        | M::Cmovl
        | M::Cmovge
        | M::Cmovg
        | M::Cmovle
        | M::Cmovs
        | M::Cmovns => {
            data_move::lift_cmov(ctx, insn);
        }

        M::Lea => data_move::lift_lea(ctx, insn),
        M::Nop => data_move::lift_nop(ctx, insn),
        M::Xchg => data_move::lift_xchg(ctx, insn),

        M::Add => arithmetic::lift_add(ctx, insn),
        M::Sub => arithmetic::lift_sub(ctx, insn),
        M::Adc => arithmetic::lift_adc(ctx, insn),
        M::Sbb => arithmetic::lift_sbb(ctx, insn),
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
        M::Cmpxchg => arithmetic::lift_cmpxchg(ctx, insn),
        M::Xadd => arithmetic::lift_xadd(ctx, insn),
        M::Bswap => data_move::lift_bswap(ctx, insn),
        M::Movbe => data_move::lift_movbe(ctx, insn),

        M::And => bitwise::lift_and(ctx, insn),
        M::Or => bitwise::lift_or(ctx, insn),
        M::Xor => bitwise::lift_xor(ctx, insn),
        M::Not => bitwise::lift_not(ctx, insn),
        M::Shl => bitwise::lift_shl(ctx, insn),
        M::Shr => bitwise::lift_shr(ctx, insn),
        M::Sar => bitwise::lift_sar(ctx, insn),
        M::Rol => bitwise::lift_rol(ctx, insn),
        M::Ror => bitwise::lift_ror(ctx, insn),
        M::Bt => bitwise::lift_bt(ctx, insn),
        M::Bsf => bitwise::lift_bsf(ctx, insn),
        M::Bsr => bitwise::lift_bsr(ctx, insn),
        M::Tzcnt => bitwise::lift_tzcnt(ctx, insn),
        M::Lzcnt => bitwise::lift_lzcnt(ctx, insn),
        M::Popcnt => bitwise::lift_popcnt(ctx, insn),

        M::Ud2 => bitwise::lift_ud2(ctx, insn),

        M::Jmp => control_flow::lift_jmp(ctx, insn),

        M::Je
        | M::Jne
        | M::Jb
        | M::Jae
        | M::Ja
        | M::Jbe
        | M::Jl
        | M::Jge
        | M::Jg
        | M::Jle
        | M::Js
        | M::Jns
        | M::Jo
        | M::Jno
        | M::Jp
        | M::Jnp => {
            control_flow::lift_jcc(ctx, insn);
        }

        M::Call => control_flow::lift_call(ctx, insn),
        M::Ret => control_flow::lift_ret(ctx, insn),

        M::Sete
        | M::Setne
        | M::Setb
        | M::Setae
        | M::Seta
        | M::Setbe
        | M::Setl
        | M::Setge
        | M::Setg
        | M::Setle
        | M::Sets
        | M::Setns
        | M::Seto
        | M::Setno
        | M::Setp
        | M::Setnp => {
            data_move::lift_setcc(ctx, insn);
        }

        M::Push => stack::lift_push(ctx, insn),
        M::Pop => stack::lift_pop(ctx, insn),
        M::Leave => stack::lift_leave(ctx, insn),

        M::Movdqa => sse::lift_sse_mov(ctx, insn, sse::tag::MOVDQA),
        M::Movdqu => sse::lift_sse_mov(ctx, insn, sse::tag::MOVDQU),
        M::Movaps => sse::lift_sse_mov(ctx, insn, sse::tag::MOVAPS),
        M::Movups => sse::lift_sse_mov(ctx, insn, sse::tag::MOVUPS),
        M::Movsd => sse::lift_sse_mov_scalar(ctx, insn, sse::tag::MOVSD),

        M::Paddb => sse::lift_sse_binop(ctx, insn, sse::tag::PADDB),
        M::Paddw => sse::lift_sse_binop(ctx, insn, sse::tag::PADDW),
        M::Paddd => sse::lift_sse_binop(ctx, insn, sse::tag::PADDD),
        M::Paddq => sse::lift_sse_binop(ctx, insn, sse::tag::PADDQ),

        M::Psubb => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBB),
        M::Psubw => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBW),
        M::Psubd => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBD),
        M::Psubq => sse::lift_sse_binop(ctx, insn, sse::tag::PSUBQ),

        M::Pand => sse::lift_sse_binop(ctx, insn, sse::tag::PAND),
        M::Por => sse::lift_sse_binop(ctx, insn, sse::tag::POR),
        M::Pxor => sse::lift_sse_binop(ctx, insn, sse::tag::PXOR),

        M::Pmulld => sse::lift_sse_binop(ctx, insn, sse::tag::PMULLD),
        M::Pmuludq => sse::lift_sse_binop(ctx, insn, sse::tag::PMULUDQ),

        M::Pcmpeqb => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQB),
        M::Pcmpeqw => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQW),
        M::Pcmpeqd => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQD),

        M::Addps => sse::lift_sse_binop(ctx, insn, sse::tag::ADDPS),
        M::Subps => sse::lift_sse_binop(ctx, insn, sse::tag::SUBPS),
        M::Mulps => sse::lift_sse_binop(ctx, insn, sse::tag::MULPS),
        M::Divps => sse::lift_sse_binop(ctx, insn, sse::tag::DIVPS),
        M::Minps => sse::lift_sse_binop(ctx, insn, sse::tag::MINPS),
        M::Maxps => sse::lift_sse_binop(ctx, insn, sse::tag::MAXPS),
        M::Sqrtps => sse::lift_sse_unop(ctx, insn, sse::tag::SQRTPS),

        M::Pshufd => sse::lift_sse_binop(ctx, insn, sse::tag::PSHUFD),
        M::Pshufb => sse::lift_sse_binop(ctx, insn, sse::tag::PSHUFB),
        M::Punpcklbw => sse::lift_sse_binop(ctx, insn, sse::tag::PUNPCKLBW),

        // SSSE3 packed integer ops (t174).
        M::Phaddw => sse::lift_sse_binop(ctx, insn, sse::tag::PHADDW),
        M::Phaddd => sse::lift_sse_binop(ctx, insn, sse::tag::PHADDD),
        M::Phsubw => sse::lift_sse_binop(ctx, insn, sse::tag::PHSUBW),
        M::Phsubd => sse::lift_sse_binop(ctx, insn, sse::tag::PHSUBD),
        M::Palignr => sse::lift_sse_blend(ctx, insn, sse::tag::PALIGNR),
        M::Pmaddubsw => sse::lift_sse_binop(ctx, insn, sse::tag::PMADDUBSW),
        M::Psignb => sse::lift_sse_binop(ctx, insn, sse::tag::PSIGNB),
        M::Psignw => sse::lift_sse_binop(ctx, insn, sse::tag::PSIGNW),
        M::Psignd => sse::lift_sse_binop(ctx, insn, sse::tag::PSIGND),

        M::Pmovmskb => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVMSKB),

        M::Packsswb => sse::lift_sse_binop(ctx, insn, sse::tag::PACKSSWB),
        M::Packuswb => sse::lift_sse_binop(ctx, insn, sse::tag::PACKUSWB),

        M::Blendps => sse::lift_sse_blend(ctx, insn, sse::tag::BLENDPS),
        M::Pblendvb => sse::lift_sse_blend(ctx, insn, sse::tag::PBLENDVB),

        // ── SSE4.1 / SSE4.2 packed ops (t185) ───────────────────
        M::Pcmpeqq => sse::lift_sse_binop(ctx, insn, sse::tag::PCMPEQQ),

        M::Pmovzxbw => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXBW),
        M::Pmovzxbd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXBD),
        M::Pmovzxbq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXBQ),
        M::Pmovzxwd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXWD),
        M::Pmovzxwq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXWQ),
        M::Pmovzxdq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVZXDQ),

        M::Pmovsxbw => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXBW),
        M::Pmovsxbd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXBD),
        M::Pmovsxbq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXBQ),
        M::Pmovsxwd => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXWD),
        M::Pmovsxwq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXWQ),
        M::Pmovsxdq => sse::lift_sse_unop(ctx, insn, sse::tag::PMOVSXDQ),

        M::Pmuldq => sse::lift_sse_binop(ctx, insn, sse::tag::PMULDQ),

        M::Pminsd => sse::lift_sse_binop(ctx, insn, sse::tag::PMINSD),
        M::Pminud => sse::lift_sse_binop(ctx, insn, sse::tag::PMINUD),
        M::Pmaxsd => sse::lift_sse_binop(ctx, insn, sse::tag::PMAXSD),
        M::Pmaxud => sse::lift_sse_binop(ctx, insn, sse::tag::PMAXUD),

        // PINSR* is a 3-operand RMW: dst (xmm) is read + written.
        M::Pinsrb => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRB),
        M::Pinsrw => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRW),
        M::Pinsrd => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRD),
        M::Pinsrq => sse::lift_sse_blend(ctx, insn, sse::tag::PINSRQ),

        // PEXTR* writes a small GP/mem operand; dedicated helper.
        M::Pextrb => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRB),
        M::Pextrw => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRW),
        M::Pextrd => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRD),
        M::Pextrq => sse::lift_sse_extract(ctx, insn, sse::tag::PEXTRQ),

        // PCMPESTRI/PCMPISTRI set ECX/flags implicitly. iced exposes a
        // 64-bit variant `Pcmpestri64` for REX.W; both map to the same
        // string-compare semantics.
        M::Pcmpestri | M::Pcmpestri64 => {
            sse::lift_sse_string_compare(ctx, insn, sse::tag::PCMPESTRI)
        }
        M::Pcmpistri => sse::lift_sse_string_compare(ctx, insn, sse::tag::PCMPISTRI),

        // ── AVX/AVX2 packed integer ops (t192) ──────────────────
        //
        // VEX-encoded 3-operand layout (dst, src1, src2). VPBLENDD
        // additionally consumes a 4th imm8 mask operand. The shared
        // `lift_avx_binop` helper differs from `lift_sse_binop` in
        // that op0 is treated as write-only — non-destructive AVX
        // doesn't read the destination.
        M::Vpaddd => sse::lift_avx_binop(ctx, insn, sse::tag::VPADDD),
        M::Vpsubd => sse::lift_avx_binop(ctx, insn, sse::tag::VPSUBD),
        M::Vpmulld => sse::lift_avx_binop(ctx, insn, sse::tag::VPMULLD),
        M::Vpshufb => sse::lift_avx_binop(ctx, insn, sse::tag::VPSHUFB),
        M::Vpermd => sse::lift_avx_binop(ctx, insn, sse::tag::VPERMD),
        M::Vpand => sse::lift_avx_binop(ctx, insn, sse::tag::VPAND),
        M::Vpor => sse::lift_avx_binop(ctx, insn, sse::tag::VPOR),
        M::Vpxor => sse::lift_avx_binop(ctx, insn, sse::tag::VPXOR),
        M::Vpblendd => sse::lift_avx_blend(ctx, insn, sse::tag::VPBLENDD),

        // ── AVX-512 EVEX 64-bit-lane packed ops (t205) ──────────
        //
        // The same iced mnemonic `Vpaddq`/`Vpsubq` covers both the
        // 256-bit VEX form (ymm dst) and the 512-bit EVEX form (zmm
        // dst). We only emit the EVEX tags here; the 256-bit AVX2
        // form is handled by a sibling task. `Vpmullq` is AVX-512
        // exclusive so it always takes the 512-bit tag.
        M::Vpaddq if sse::is_zmm_dst(insn) => {
            sse::lift_avx_binop(ctx, insn, sse::tag::VPADDQ_512)
        }
        M::Vpsubq if sse::is_zmm_dst(insn) => {
            sse::lift_avx_binop(ctx, insn, sse::tag::VPSUBQ_512)
        }
        M::Vpmullq => sse::lift_avx_binop(ctx, insn, sse::tag::VPMULLQ_512),

        M::Fld => fpu::lift_fld(ctx, insn),
        M::Fst => fpu::lift_fst(ctx, insn),
        M::Fstp => fpu::lift_fstp(ctx, insn),

        M::Fadd => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FADD, false),
        M::Faddp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FADD, false),
        M::Fsub => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUB, false),
        M::Fsubp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUB, false),
        M::Fsubr => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUB, true),
        M::Fsubrp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FSUB, true),

        M::Fmul => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FMUL, false),
        M::Fmulp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FMUL, false),
        M::Fdiv => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIV, false),
        M::Fdivp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIV, false),
        M::Fdivr => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIV, true),
        M::Fdivrp => fpu::lift_fpu_binop(ctx, insn, fpu::fpu_tag::FDIV, true),

        M::Fcom => fpu::lift_fcom(ctx, insn),
        M::Fcomp => fpu::lift_fcom(ctx, insn),
        M::Fcompp => fpu::lift_fcom(ctx, insn),
        M::Fucom => fpu::lift_fcom(ctx, insn),
        M::Fucomp => fpu::lift_fcom(ctx, insn),
        M::Fucompp => fpu::lift_fcom(ctx, insn),
        M::Fxch => fpu::lift_fxch(ctx, insn),

        _ => ctx.emit_unimplemented(),
    }
}
