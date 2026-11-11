//! Intel AMX (Advanced Matrix Extensions) instruction lifting → Callother IR.
//!
//! AMX adds eight 1 KiB *tile registers* `TMM0..TMM7` plus a small instruction
//! family that loads/stores tiles from memory (via SIB) and computes dot-product
//! style outer products into a destination tile. The semantics (tile
//! configuration via `LDTILECFG`, dynamic shape via `palette_id`, stride from
//! the SIB index register) are far too rich to model in p-code-style IR at this
//! stage, so each AMX op is emitted as a [`Callother`](unlace_ir::IrOp::Callother)
//! with a stable tag from [`tag`]. The decompiler back-end renders these as the
//! corresponding `_tile_*` intrinsics (see `c_printer::callother_intrinsic_name`).
//!
//! Tag range: `0x500..=0x50B` — kept out of the x86 SSE/AVX/x87/perf blocks
//! and the AArch64 `0x400..0x429` block used by the shared C printer.
//!
//! Operand encoding shape for each Callother:
//! - `TILELOADD  tmm, sibmem`         → `dst_tmm = Callother(TILELOADD, mem_addr)`
//! - `TILELOADDT1 tmm, sibmem`        → `dst_tmm = Callother(TILELOADDT1, mem_addr)`
//! - `TILESTORED sibmem, tmm`         → `Callother(TILESTORED, mem_addr, src_tmm)`
//! - `TILERELEASE`                    → `Callother(TILERELEASE)` (no inputs after tag, no output)
//! - `LDTILECFG m512`                 → `Callother(LDTILECFG, mem_addr)` (no output; loads tile config)
//! - `STTILECFG m512`                 → `Callother(STTILECFG, mem_addr)` (no output; stores tile config)
//! - `TILEZERO  tmm`                  → `dst_tmm = Callother(TILEZERO)` (zeroes one tile, no inputs after tag)
//! - `TDPB{SSD,SUD,USD,UUD,F16PS}`    → `dst_tmm = Callother(TDP*, dst_tmm, src1_tmm, src2_tmm)`
//!   (destructive: op0 is read-modify-write, identical shape to the AES binop)
use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

/// Constant tags for AMX Callother `inputs[0]`.
///
/// Values sit in the dedicated AMX block `0x500..=0x50B` — one slot per
/// lifted mnemonic. Keep these in sync with
/// `unlace-output/src/c_printer.rs::callother_intrinsic_name`.
pub mod tag {
    /// `TILELOADD tmm, sibmem` — load a tile from memory.
    pub const TILELOADD: u64 = 0x500;
    /// `TILELOADDT1 tmm, sibmem` — streaming load with T1 locality hint.
    pub const TILELOADDT1: u64 = 0x501;
    /// `TILESTORED sibmem, tmm` — store a tile to memory.
    pub const TILESTORED: u64 = 0x502;
    /// `TILERELEASE` — release all tile registers (no operands).
    pub const TILERELEASE: u64 = 0x503;
    /// `TDPBSSD tmm1, tmm2, tmm3` — tile dot-product signed×signed → int32 accumulate.
    pub const TDPBSSD: u64 = 0x504;
    /// `TDPBSUD tmm1, tmm2, tmm3` — tile dot-product signed×unsigned → int32.
    pub const TDPBSUD: u64 = 0x505;
    /// `TDPBUSD tmm1, tmm2, tmm3` — tile dot-product unsigned×signed → int32.
    pub const TDPBUSD: u64 = 0x506;
    /// `TDPBUUD tmm1, tmm2, tmm3` — tile dot-product unsigned×unsigned → int32.
    pub const TDPBUUD: u64 = 0x507;
    /// `TDPBF16PS tmm1, tmm2, tmm3` — tile dot-product BF16 → FP32.
    pub const TDPBF16PS: u64 = 0x508;
    /// `LDTILECFG m512` — load tile configuration (palette/shapes) from memory.
    pub const LDTILECFG: u64 = 0x509;
    /// `STTILECFG m512` — store the current tile configuration to memory.
    pub const STTILECFG: u64 = 0x50A;
    /// `TILEZERO tmm` — zero a single destination tile register.
    pub const TILEZERO: u64 = 0x50B;
}

/// Lift `TILELOADD tmm, sibmem` to `dst_tmm = Callother(TILELOADD, mem_addr)`.
///
/// The memory operand is SIB-encoded (base, index*stride) but
/// [`LiftCtx::memory_address`] already resolves that to a single address
/// varnode, so the back-end recovers `_tile_loadd(dst, addr, stride)` from a
/// follow-up pass without needing the stride exposed here. The dst tile is
/// pulled through the standard `operand_write` path so the register file
/// entry for `TMM0..TMM7` produces a 1024-byte varnode.
pub fn lift_tile_loadd(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(mem_addr) = ctx.memory_address(insn) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, mem_addr],
        ctx.addr,
    ));
}

/// Lift `TILESTORED sibmem, tmm` to `Callother(TILESTORED, mem_addr, src_tmm)`.
///
/// Store-shaped: no output varnode — the side effect is on memory at
/// `mem_addr`. The src tile is read via `operand_read` so the register-file
/// 1024-byte varnode flows through correctly.
pub fn lift_tile_stored(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::TILESTORED, 8);

    // op0 is the memory destination; op1 is the source tile register.
    let Some(mem_addr) = ctx.memory_address(insn) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn, mem_addr, src],
        ctx.addr,
    ));
}

/// Lift `TILERELEASE` to `Callother(TILERELEASE)` with no inputs after the tag
/// and no output. Side effect: implementation-defined reset of every TMMn
/// — modelled here as an opaque intrinsic.
pub fn lift_tile_release(ctx: &mut LiftCtx, _insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::TILERELEASE, 8);
    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn],
        ctx.addr,
    ));
}

/// Lift `LDTILECFG m512` to `Callother(LDTILECFG, mem_addr)`.
///
/// Config-load is store-shaped from the IR's perspective: there is no register
/// output (the 64-byte tile-config struct lives in the implicit `TILECFG` MSR
/// state, which we do not model), only the memory source address. The back-end
/// recovers `_tile_loadconfig(addr)` from the [`tag::LDTILECFG`] tag.
pub fn lift_ldtilecfg(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::LDTILECFG, 8);

    let Some(mem_addr) = ctx.memory_address(insn) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn, mem_addr],
        ctx.addr,
    ));
}

/// Lift `STTILECFG m512` to `Callother(STTILECFG, mem_addr)`.
///
/// The mirror of [`lift_ldtilecfg`]: a store to the 64-byte memory operand of
/// the current tile configuration. No register output; the implicit config
/// state is the (unmodelled) source. Back-end recovers `_tile_storeconfig(addr)`.
pub fn lift_sttilecfg(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::STTILECFG, 8);

    let Some(mem_addr) = ctx.memory_address(insn) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::without_output(
        IrOp::Callother,
        smallvec![tag_vn, mem_addr],
        ctx.addr,
    ));
}

/// Lift `TILEZERO tmm` to `dst_tmm = Callother(TILEZERO)`.
///
/// Single-operand: the only effect is to zero the destination tile. We route
/// the dst through `operand_write` so the 1024-byte TMM varnode flows through;
/// there are no inputs after the tag.
pub fn lift_tilezero(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::TILEZERO, 8);

    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn],
        ctx.addr,
    ));
}

/// Lift any three-operand TDPB* (destructive) family member to
/// `dst_tmm = Callother(tag, dst_tmm, src1_tmm, src2_tmm)`.
///
/// All five members (`TDPBSSD`, `TDPBSUD`, `TDPBUSD`, `TDPBUUD`, `TDPBF16PS`)
/// share the same encoding shape; only the [`tag`] constant differs. The
/// destructive read-modify-write of op0 follows the same convention as the
/// SSE/AES binop helpers — the decompiler's SSA pass then renames the second
/// definition of op0 to a fresh value.
pub fn lift_tdpb(ctx: &mut LiftCtx, insn: &iced_x86::Instruction, callother_tag: u64) {
    let tag_vn = Varnode::constant(callother_tag, 8);

    let Some(src0) = ctx.operand_read(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src1) = ctx.operand_read(insn, 1) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(src2) = ctx.operand_read(insn, 2) else {
        ctx.emit_unimplemented();
        return;
    };
    let Some(dst) = ctx.operand_write(insn, 0) else {
        ctx.emit_unimplemented();
        return;
    };

    ctx.emit(IrInsn::with_output(
        IrOp::Callother,
        dst,
        smallvec![tag_vn, src0, src1, src2],
        ctx.addr,
    ));
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::lift::X86Lifter;
    use unlace_ir::{IrOp, Lifter, SpaceId};

    /// Assemble one instruction via iced's `BlockEncoder`-free path (we own
    /// the `Instruction` builder directly) so the test fixtures stay
    /// human-readable. Returns the encoded bytes.
    fn encode(insn: iced_x86::Instruction) -> Vec<u8> {
        let mut enc = iced_x86::Encoder::new(64);
        enc.encode(&insn, 0x1000)
            .expect("AMX encoding should succeed");
        enc.take_buffer()
    }

    /// Walk a lifted instruction's IR and return the (first) Callother op.
    fn find_callother(ops: &[unlace_ir::IrInsn]) -> &unlace_ir::IrInsn {
        ops.iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("expected a Callother in lifted IR")
    }

    /// 1. Tag constants are stable and non-overlapping — guarding against
    ///    accidental edits to the 0x500..=0x508 block.
    #[test]
    fn t309_amx_tag_block_is_stable() {
        assert_eq!(tag::TILELOADD, 0x500);
        assert_eq!(tag::TILELOADDT1, 0x501);
        assert_eq!(tag::TILESTORED, 0x502);
        assert_eq!(tag::TILERELEASE, 0x503);
        assert_eq!(tag::TDPBSSD, 0x504);
        assert_eq!(tag::TDPBSUD, 0x505);
        assert_eq!(tag::TDPBUSD, 0x506);
        assert_eq!(tag::TDPBUUD, 0x507);
        assert_eq!(tag::TDPBF16PS, 0x508);
        assert_eq!(tag::LDTILECFG, 0x509);
        assert_eq!(tag::STTILECFG, 0x50A);
        assert_eq!(tag::TILEZERO, 0x50B);

        // All twelve must be distinct.
        let tags = [
            tag::TILELOADD,
            tag::TILELOADDT1,
            tag::TILESTORED,
            tag::TILERELEASE,
            tag::TDPBSSD,
            tag::TDPBSUD,
            tag::TDPBUSD,
            tag::TDPBUUD,
            tag::TDPBF16PS,
            tag::LDTILECFG,
            tag::STTILECFG,
            tag::TILEZERO,
        ];
        for (i, &a) in tags.iter().enumerate() {
            for &b in &tags[i + 1..] {
                assert_ne!(a, b, "duplicate AMX tag {a:#x}");
            }
        }
    }

    /// 2. `TILELOADD tmm0, [rax + rcx*4]` lifts to a Callother whose output
    ///    is the 1024-byte TMM0 register varnode and inputs[0] is the
    ///    TILELOADD tag.
    #[test]
    fn t309_tile_loadd_lifts_to_callother() {
        let mem = iced_x86::MemoryOperand::new(
            iced_x86::Register::RAX,
            iced_x86::Register::RCX,
            4,
            0,
            0,
            false,
            iced_x86::Register::None,
        );
        let insn = iced_x86::Instruction::with2(
            iced_x86::Code::VEX_Tileloadd_tmm_sibmem,
            iced_x86::Register::TMM0,
            mem,
        )
        .unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("TILELOADD should decode");
        let co = find_callother(&result.ir_ops);
        assert_eq!(co.inputs[0].space, SpaceId::Const);
        assert_eq!(co.inputs[0].offset, tag::TILELOADD);

        let dst = co.output.expect("TILELOADD writes TMM0");
        assert_eq!(dst.space, SpaceId::Register);
        assert_eq!(dst.size, crate::register_file::TMM_SIZE);
    }

    /// 2b. `TILELOADDT1` has the same operand shape as `TILELOADD`, but it
    ///     must preserve its streaming-load tag for the printer/recoverer.
    #[test]
    fn t309_tile_loaddt1_lifts_with_stream_tag() {
        let mem = iced_x86::MemoryOperand::new(
            iced_x86::Register::RAX,
            iced_x86::Register::RCX,
            4,
            0,
            0,
            false,
            iced_x86::Register::None,
        );
        let insn = iced_x86::Instruction::with2(
            iced_x86::Code::VEX_Tileloaddt1_tmm_sibmem,
            iced_x86::Register::TMM0,
            mem,
        )
        .unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("TILELOADDT1 should decode");
        let co = find_callother(&result.ir_ops);
        assert_eq!(co.inputs[0].offset, tag::TILELOADDT1);
        assert!(co.output.is_some(), "TILELOADDT1 writes a tile register");
    }

    /// 3. `TILESTORED [rax + rcx*4], tmm1` lifts to a store-shaped
    ///    Callother — no output, inputs carry the tag, address, and source
    ///    tile register.
    #[test]
    fn t309_tile_stored_lifts_to_store_callother() {
        let mem = iced_x86::MemoryOperand::new(
            iced_x86::Register::RAX,
            iced_x86::Register::RCX,
            4,
            0,
            0,
            false,
            iced_x86::Register::None,
        );
        let insn = iced_x86::Instruction::with2(
            iced_x86::Code::VEX_Tilestored_sibmem_tmm,
            mem,
            iced_x86::Register::TMM1,
        )
        .unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("TILESTORED should decode");
        let co = find_callother(&result.ir_ops);
        assert!(
            co.output.is_none(),
            "TILESTORED is store-shaped — no output varnode"
        );
        assert_eq!(co.inputs.len(), 3, "TILESTORED: (tag, mem_addr, src_tmm)");
        assert_eq!(co.inputs[0].offset, tag::TILESTORED);
    }

    /// 4. `TILERELEASE` lifts to a Callother with only the tag — no operands,
    ///    no output. Models the all-tiles reset as an opaque intrinsic.
    #[test]
    fn t309_tile_release_lifts_to_tag_only_callother() {
        let insn = iced_x86::Instruction::with(iced_x86::Code::VEX_Tilerelease);
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("TILERELEASE should decode");
        let co = find_callother(&result.ir_ops);
        assert!(co.output.is_none());
        assert_eq!(co.inputs.len(), 1, "TILERELEASE carries only its tag");
        assert_eq!(co.inputs[0].offset, tag::TILERELEASE);
    }

    /// 5. `TDPBSSD tmm1, tmm2, tmm3` lifts to a destructive three-operand
    ///    Callother: dst is TMM1, inputs are (tag, TMM1, TMM2, TMM3).
    #[test]
    fn t309_tdpbssd_lifts_to_three_operand_callother() {
        let insn = iced_x86::Instruction::with3(
            iced_x86::Code::VEX_Tdpbssd_tmm_tmm_tmm,
            iced_x86::Register::TMM1,
            iced_x86::Register::TMM2,
            iced_x86::Register::TMM3,
        )
        .unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("TDPBSSD should decode");
        let co = find_callother(&result.ir_ops);
        assert_eq!(co.inputs[0].offset, tag::TDPBSSD);
        assert_eq!(co.inputs.len(), 4, "TDPBSSD: (tag, dst, src1, src2)");
        let dst = co.output.expect("TDPBSSD writes its dst tile");
        assert_eq!(dst.space, SpaceId::Register);

        // Re-read inputs[1] (the destructive op0) — must be the same TMM1
        // varnode that flows into `output`.
        assert_eq!(co.inputs[1].space, SpaceId::Register);
        assert_eq!(co.inputs[1].offset, dst.offset);
    }

    /// 6. `TDPBF16PS tmm0, tmm1, tmm2` routes through the same lifter but
    ///    carries the BF16 tag — guards against the dispatch table swapping
    ///    a TDPBF16PS for one of the integer TDPB* tags.
    #[test]
    fn t309_tdpbf16ps_lifts_with_bf16_tag() {
        let insn = iced_x86::Instruction::with3(
            iced_x86::Code::VEX_Tdpbf16ps_tmm_tmm_tmm,
            iced_x86::Register::TMM0,
            iced_x86::Register::TMM1,
            iced_x86::Register::TMM2,
        )
        .unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("TDPBF16PS should decode");
        let co = find_callother(&result.ir_ops);
        assert_eq!(co.inputs[0].offset, tag::TDPBF16PS);
        assert_eq!(co.inputs.len(), 4);
        assert!(
            co.output.is_some(),
            "TDPBF16PS produces a tile result in TMM0"
        );
    }

    /// 7. `LDTILECFG [rax]` lifts to a store-shaped Callother carrying the
    ///    LDTILECFG tag and the memory address — no register output.
    #[test]
    fn t309_ldtilecfg_lifts_to_config_callother() {
        let mem = iced_x86::MemoryOperand::with_base(iced_x86::Register::RAX);
        let insn = iced_x86::Instruction::with1(iced_x86::Code::VEX_Ldtilecfg_m512, mem).unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("LDTILECFG should decode");
        // Must NOT be unimplemented.
        assert!(
            result.ir_ops.iter().all(|i| i.op != IrOp::Unimplemented),
            "LDTILECFG must not fall through to Unimplemented"
        );
        let co = find_callother(&result.ir_ops);
        assert_eq!(co.inputs[0].space, SpaceId::Const);
        assert_eq!(co.inputs[0].offset, tag::LDTILECFG);
        assert!(co.output.is_none(), "LDTILECFG has no register output");
        assert_eq!(co.inputs.len(), 2, "LDTILECFG: (tag, mem_addr)");
    }

    /// 8. `STTILECFG [rax]` mirrors LDTILECFG with the STTILECFG tag.
    #[test]
    fn t309_sttilecfg_lifts_to_config_callother() {
        let mem = iced_x86::MemoryOperand::with_base(iced_x86::Register::RAX);
        let insn = iced_x86::Instruction::with1(iced_x86::Code::VEX_Sttilecfg_m512, mem).unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("STTILECFG should decode");
        assert!(
            result.ir_ops.iter().all(|i| i.op != IrOp::Unimplemented),
            "STTILECFG must not fall through to Unimplemented"
        );
        let co = find_callother(&result.ir_ops);
        assert_eq!(co.inputs[0].offset, tag::STTILECFG);
        assert!(co.output.is_none());
        assert_eq!(co.inputs.len(), 2);
    }

    /// 9. `TILEZERO tmm3` lifts to a tag-only Callother writing TMM3 — no
    ///    inputs after the tag, output is the 1024-byte tile varnode. Also
    ///    guards against the AMX dispatch regressing to Unimplemented.
    #[test]
    fn t309_tilezero_lifts_to_callother() {
        let insn = iced_x86::Instruction::with1(
            iced_x86::Code::VEX_Tilezero_tmm,
            iced_x86::Register::TMM3,
        )
        .unwrap();
        let bytes = encode(insn);

        let result = X86Lifter::new()
            .lift_insn(&bytes, 0x1000)
            .expect("TILEZERO should decode");
        assert!(
            result.ir_ops.iter().all(|i| i.op != IrOp::Unimplemented),
            "TILEZERO must not fall through to Unimplemented"
        );
        let co = find_callother(&result.ir_ops);
        assert_eq!(co.inputs[0].offset, tag::TILEZERO);
        assert_eq!(co.inputs.len(), 1, "TILEZERO carries only its tag");
        let dst = co.output.expect("TILEZERO writes a tile register");
        assert_eq!(dst.space, SpaceId::Register);
        assert_eq!(dst.size, crate::register_file::TMM_SIZE);
    }
}
