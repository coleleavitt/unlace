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
//! Tag range: `0x1F0..=0x1F7` — sits above the AES-NI / SHA-NI block
//! (`0x1E0..0x1EC`) without colliding with existing SSE/SSE4 tags.
//!
//! Operand encoding shape for each Callother:
//! - `TILELOADD  tmm, sibmem`         → `dst_tmm = Callother(TILELOADD, mem_addr)`
//! - `TILESTORED sibmem, tmm`         → `Callother(TILESTORED, mem_addr, src_tmm)`
//! - `TILERELEASE`                    → `Callother(TILERELEASE)` (no inputs after tag, no output)
//! - `TDPB{SSD,SUD,USD,UUD,F16PS}`    → `dst_tmm = Callother(TDP*, dst_tmm, src1_tmm, src2_tmm)`
//!   (destructive: op0 is read-modify-write, identical shape to the AES binop)

use smallvec::smallvec;
use unlace_ir::{IrInsn, IrOp, Varnode};

use crate::lift::LiftCtx;

/// Constant tags for AMX Callother `inputs[0]`.
///
/// Values sit in the dedicated AMX block `0x1F0..=0x1F7` — eight slots, one
/// per lifted mnemonic. Keep these in sync with
/// `unlace-output/src/c_printer.rs::callother_intrinsic_name`.
pub mod tag {
    /// `TILELOADD tmm, sibmem` — load a tile from memory.
    pub const TILELOADD: u64 = 0x1F0;
    /// `TILESTORED sibmem, tmm` — store a tile to memory.
    pub const TILESTORED: u64 = 0x1F1;
    /// `TILERELEASE` — release all tile registers (no operands).
    pub const TILERELEASE: u64 = 0x1F2;
    /// `TDPBSSD tmm1, tmm2, tmm3` — tile dot-product signed×signed → int32 accumulate.
    pub const TDPBSSD: u64 = 0x1F3;
    /// `TDPBSUD tmm1, tmm2, tmm3` — tile dot-product signed×unsigned → int32.
    pub const TDPBSUD: u64 = 0x1F4;
    /// `TDPBUSD tmm1, tmm2, tmm3` — tile dot-product unsigned×signed → int32.
    pub const TDPBUSD: u64 = 0x1F5;
    /// `TDPBUUD tmm1, tmm2, tmm3` — tile dot-product unsigned×unsigned → int32.
    pub const TDPBUUD: u64 = 0x1F6;
    /// `TDPBF16PS tmm1, tmm2, tmm3` — tile dot-product BF16 → FP32.
    pub const TDPBF16PS: u64 = 0x1F7;
}

/// Lift `TILELOADD tmm, sibmem` to `dst_tmm = Callother(TILELOADD, mem_addr)`.
///
/// The memory operand is SIB-encoded (base, index*stride) but
/// [`LiftCtx::memory_address`] already resolves that to a single address
/// varnode, so the back-end recovers `_tile_loadd(dst, addr, stride)` from a
/// follow-up pass without needing the stride exposed here. The dst tile is
/// pulled through the standard `operand_write` path so the register file
/// entry for `TMM0..TMM7` produces a 1024-byte varnode.
pub fn lift_tile_loadd(ctx: &mut LiftCtx, insn: &iced_x86::Instruction) {
    let tag_vn = Varnode::constant(tag::TILELOADD, 8);

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
    ///    accidental edits to the 0x1F0..=0x1F7 block.
    #[test]
    fn t309_amx_tag_block_is_stable() {
        assert_eq!(tag::TILELOADD, 0x1F0);
        assert_eq!(tag::TILESTORED, 0x1F1);
        assert_eq!(tag::TILERELEASE, 0x1F2);
        assert_eq!(tag::TDPBSSD, 0x1F3);
        assert_eq!(tag::TDPBSUD, 0x1F4);
        assert_eq!(tag::TDPBUSD, 0x1F5);
        assert_eq!(tag::TDPBUUD, 0x1F6);
        assert_eq!(tag::TDPBF16PS, 0x1F7);

        // All eight must be distinct.
        let tags = [
            tag::TILELOADD,
            tag::TILESTORED,
            tag::TILERELEASE,
            tag::TDPBSSD,
            tag::TDPBSUD,
            tag::TDPBUSD,
            tag::TDPBUUD,
            tag::TDPBF16PS,
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
}
