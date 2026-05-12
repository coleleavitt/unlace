//! x86 / x86-64 → IR lifter (via iced-x86).

pub mod apx;
pub mod intrinsics;
pub mod lift;
mod ops;
pub mod register_file;

pub use lift::X86Lifter;

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, IrOp, Lifter};

    use crate::X86Lifter;

    fn lifter() -> X86Lifter {
        X86Lifter::new()
    }

    #[test]
    fn test_arch() {
        assert_eq!(lifter().arch(), ArchId::X86_64);
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        assert!(!rf.registers.is_empty());
        assert!(rf.registers.iter().any(|r| r.name == "RAX"));
        assert!(rf.registers.iter().any(|r| r.name == "RSP"));
        assert!(rf.registers.iter().any(|r| r.name == "ZF"));
    }

    #[test]
    fn test_mov_reg_reg() {
        // 48 89 d8 = mov rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x89, 0xd8], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 3);
        assert_eq!(result.ir_ops.len(), 1);
        assert!(matches!(result.ir_ops[0].op, IrOp::Copy));
    }

    #[test]
    fn test_mov_reg_imm() {
        // 48 c7 c0 2a 00 00 00 = mov rax, 42
        let result = lifter()
            .lift_insn(&[0x48, 0xc7, 0xc0, 0x2a, 0x00, 0x00, 0x00], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 7);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_cmove_lifts_to_conditional_callother() {
        // 48 0F 44 C3 = cmove rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x0F, 0x44, 0xC3], 0x1000)
            .expect("should decode cmove rax, rbx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(
            !result.ir_ops.iter().any(|i| i.op == IrOp::Copy),
            "CMOVE must not become an unconditional Copy"
        );
        let cmov = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("CMOVE should emit a Callother");
        assert_eq!(
            cmov.inputs[0],
            unlace_ir::Varnode::constant(crate::ops::data_move::CMOV_CALLOTHER_TAG, 8)
        );
        assert_eq!(cmov.inputs.len(), 4, "CMOV takes (tag, cond, src, dst)");
        assert_eq!(
            cmov.inputs[1],
            unlace_ir::Varnode::new(unlace_ir::SpaceId::Register, crate::register_file::ZF, 1)
        );
    }

    #[test]
    fn test_cmovne_lifts_negated_condition() {
        // 48 0F 45 C3 = cmovne rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x0F, 0x45, 0xC3], 0x1000)
            .expect("should decode cmovne rax, rbx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate),
            "CMOVNE should negate ZF for its condition"
        );
        let cmov = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("CMOVNE should emit a Callother");
        assert_eq!(
            cmov.inputs[0],
            unlace_ir::Varnode::constant(crate::ops::data_move::CMOV_CALLOTHER_TAG, 8)
        );
        assert_eq!(cmov.inputs.len(), 4, "CMOVNE takes (tag, cond, src, dst)");
    }

    #[test]
    fn test_add_reg_reg() {
        // 48 01 d8 = add rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x01, 0xd8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        // Should also emit flag computations
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntCarry));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntScarry));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn test_sub_reg_reg() {
        // 48 29 d8 = sub rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x29, 0xd8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSborrow));
    }

    #[test]
    fn test_cmp() {
        // 48 39 d8 = cmp rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x39, 0xd8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        // CMP should not write to a register destination
        assert!(
            result
                .ir_ops
                .iter()
                .filter(|i| i.op == IrOp::Copy)
                .all(|i| {
                    i.output
                        .map_or(true, |o| o.space == unlace_ir::SpaceId::Register)
                })
        );
    }

    #[test]
    fn test_test() {
        // 48 85 c0 = test rax, rax
        let result = lifter()
            .lift_insn(&[0x48, 0x85, 0xc0], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_and() {
        // 48 21 d8 = and rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x21, 0xd8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_or() {
        // 48 09 d8 = or rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x09, 0xd8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    #[test]
    fn test_xor() {
        // 48 31 c0 = xor rax, rax
        let result = lifter()
            .lift_insn(&[0x48, 0x31, 0xc0], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    #[test]
    fn test_shl() {
        // 48 c1 e0 04 = shl rax, 4
        let result = lifter()
            .lift_insn(&[0x48, 0xc1, 0xe0, 0x04], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
    }

    #[test]
    fn test_shr() {
        // 48 c1 e8 04 = shr rax, 4
        let result = lifter()
            .lift_insn(&[0x48, 0xc1, 0xe8, 0x04], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
    }

    #[test]
    fn test_not() {
        // 48 f7 d0 = not rax
        let result = lifter()
            .lift_insn(&[0x48, 0xf7, 0xd0], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntNegate));
    }

    #[test]
    fn test_neg() {
        // 48 f7 d8 = neg rax
        let result = lifter()
            .lift_insn(&[0x48, 0xf7, 0xd8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Int2comp));
    }

    #[test]
    fn test_jmp() {
        // eb 10 = jmp short +0x10 (relative to next insn at 0x1002 -> target 0x1012)
        let result = lifter()
            .lift_insn(&[0xeb, 0x10], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 2);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branch));
    }

    #[test]
    fn test_je() {
        // 74 10 = je short +0x10 (target 0x1012)
        let result = lifter()
            .lift_insn(&[0x74, 0x10], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    #[test]
    fn test_jne() {
        // 75 10 = jne short +0x10
        let result = lifter()
            .lift_insn(&[0x75, 0x10], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_call() {
        // e8 10 00 00 00 = call +0x10 (relative to next insn)
        let result = lifter()
            .lift_insn(&[0xe8, 0x10, 0x00, 0x00, 0x00], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Call));
        // Should push return address: RSP decrement + STORE
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_ret() {
        // c3 = ret
        let result = lifter().lift_insn(&[0xc3], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Return));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn test_push() {
        // 50 = push rax
        let result = lifter().lift_insn(&[0x50], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_pop() {
        // 58 = pop rax
        let result = lifter().lift_insn(&[0x58], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn test_lea() {
        // 48 8d 04 0b = lea rax, [rbx+rcx]
        let result = lifter()
            .lift_insn(&[0x48, 0x8d, 0x04, 0x0b], 0x1000)
            .expect("should decode");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy || i.op == IrOp::IntAdd)
        );
    }

    #[test]
    fn test_nop() {
        // 90 = nop
        let result = lifter().lift_insn(&[0x90], 0x1000).expect("should decode");
        assert_eq!(result.len, 1);
        assert!(!result.ir_ops.is_empty());
    }

    #[test]
    fn test_unknown_insn() {
        // 66 0f 73 d0 01 = psrlq xmm0, 1 (SSE instruction)
        let result = lifter()
            .lift_insn(&[0x66, 0x0f, 0x73, 0xd0, 0x01], 0x1000)
            .expect("should not panic");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| matches!(i.op, IrOp::Unimplemented))
        );
    }

    #[test]
    fn test_empty_buffer() {
        let result = lifter().lift_insn(&[], 0x1000);
        assert!(result.is_err());
    }

    #[test]
    fn test_imul_3op() {
        // 48 6b c3 05 = imul rax, rbx, 5
        let result = lifter()
            .lift_insn(&[0x48, 0x6b, 0xc3, 0x05], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
    }

    #[test]
    fn test_div() {
        // 48 f7 f3 = div rbx
        let result = lifter()
            .lift_insn(&[0x48, 0xf7, 0xf3], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntDiv));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRem));
    }

    #[test]
    fn test_sar() {
        // 48 c1 f8 04 = sar rax, 4
        let result = lifter()
            .lift_insn(&[0x48, 0xc1, 0xf8, 0x04], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
    }

    #[test]
    fn test_mov_mem_read() {
        // 48 8b 45 f8 = mov rax, [rbp-8]
        let result = lifter()
            .lift_insn(&[0x48, 0x8b, 0x45, 0xf8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_mov_mem_write() {
        // 48 89 45 f8 = mov [rbp-8], rax
        let result = lifter()
            .lift_insn(&[0x48, 0x89, 0x45, 0xf8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_no_unwrap_in_lib() {
        // This is a meta-test: ensure various edge cases don't panic.
        // Decode bytes that aren't a clean instruction but still decodeable.
        let cases: Vec<&[u8]> = vec![
            &[0xcc],                   // int3
            &[0xf4],                   // hlt
            &[0x0f, 0x05],             // syscall
            &[0x0f, 0x0b],             // ud2
            &[0xf3, 0x0f, 0x1e, 0xfa], // endbr64
        ];
        for bytes in cases {
            let result = lifter().lift_insn(bytes, 0x1000);
            assert!(result.is_ok(), "should not panic on {bytes:?}");
            let lifted = result.expect("already asserted Ok");
            assert!(
                !lifted.ir_ops.is_empty(),
                "should produce at least one op for {bytes:?}"
            );
        }
    }

    // -- REP string operations -------------------------------------------

    #[test]
    fn test_rep_movsb() {
        // F3 A4 = REP MOVSB
        let result = lifter()
            .lift_insn(&[0xf3, 0xa4], 0x1000)
            .expect("should decode REP MOVSB");
        assert_eq!(result.len, 2);
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
            "REP MOVSB should emit Callother"
        );
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(0x1, 8),
            "tag should be MEMCPY=0x1"
        );
    }

    #[test]
    fn test_rep_movsq() {
        // F3 48 A5 = REP MOVSQ
        let result = lifter()
            .lift_insn(&[0xf3, 0x48, 0xa5], 0x1000)
            .expect("should decode REP MOVSQ");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x1, 8));
        assert_eq!(
            co.inputs[4],
            unlace_ir::Varnode::constant(8, 8),
            "elem_size should be 8"
        );
    }

    #[test]
    fn test_rep_stosb() {
        // F3 AA = REP STOSB
        let result = lifter()
            .lift_insn(&[0xf3, 0xaa], 0x1000)
            .expect("should decode REP STOSB");
        assert_eq!(result.len, 2);
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
            "REP STOSB should emit Callother"
        );
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(0x2, 8),
            "tag should be MEMSET=0x2"
        );
    }

    #[test]
    fn test_rep_stosd() {
        // F3 AB = REP STOSD
        let result = lifter()
            .lift_insn(&[0xf3, 0xab], 0x1000)
            .expect("should decode REP STOSD");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x2, 8));
        assert_eq!(
            co.inputs[4],
            unlace_ir::Varnode::constant(4, 8),
            "elem_size should be 4"
        );
    }

    #[test]
    fn test_rep_cmpsb() {
        // F3 A6 = REPE CMPSB
        let result = lifter()
            .lift_insn(&[0xf3, 0xa6], 0x1000)
            .expect("should decode REPE CMPSB");
        assert_eq!(result.len, 2);
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
            "REPE CMPSB should emit Callother"
        );
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(0x3, 8),
            "tag should be MEMCMP=0x3"
        );
        assert!(
            co.output.is_some(),
            "CMPS Callother should produce a result"
        );
    }

    #[test]
    fn test_repne_cmpsb() {
        // F2 A6 = REPNE CMPSB
        let result = lifter()
            .lift_insn(&[0xf2, 0xa6], 0x1000)
            .expect("should decode REPNE CMPSB");
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
            "REPNE CMPSB should also emit Callother"
        );
    }

    #[test]
    fn test_rep_movs_zeroes_rcx() {
        // F3 A4 = REP MOVSB — after Callother, RCX should be zeroed
        let result = lifter()
            .lift_insn(&[0xf3, 0xa4], 0x1000)
            .expect("should decode");
        let rcx = unlace_ir::Varnode::reg(0x08, 8); // RCX offset
        let zero = unlace_ir::Varnode::constant(0, 8);
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(rcx) && i.inputs[0] == zero }),
            "should zero RCX after REP MOVSB"
        );
    }

    // -- SSE2 lifting -------------------------------------------------------

    use crate::ops::sse::tag as sse_tag;

    fn assert_callother_tag(bytes: &[u8], expected_tag: u64) {
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("should decode SSE instruction");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("should emit Callother for SSE instruction");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(expected_tag, 8),
            "Callother tag mismatch"
        );
    }

    #[test]
    fn test_lift_sse_movdqa_mem_to_reg() {
        // 66 0F 6F 07 = movdqa xmm0, [rdi]
        assert_callother_tag(&[0x66, 0x0F, 0x6F, 0x07], sse_tag::MOVDQA);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x6F, 0x07], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("load form should have output");
        assert_eq!(dst.size, 16);
        assert_eq!(dst.space, unlace_ir::SpaceId::Register);
    }

    #[test]
    fn test_lift_sse_movdqu_mem_to_reg() {
        // F3 0F 6F 0E = movdqu xmm1, [rsi]
        assert_callother_tag(&[0xF3, 0x0F, 0x6F, 0x0E], sse_tag::MOVDQU);
        let result = lifter()
            .lift_insn(&[0xF3, 0x0F, 0x6F, 0x0E], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("load form should have output");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_sse_paddb() {
        // 66 0F FC C1 = paddb xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xFC, 0xC1], sse_tag::PADDB);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xFC, 0xC1], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs.len(), 3);
        let dst = co.output.expect("binop should have output");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_sse_pxor_self() {
        // 66 0F EF C0 = pxor xmm0, xmm0
        assert_callother_tag(&[0x66, 0x0F, 0xEF, 0xC0], sse_tag::PXOR);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xEF, 0xC0], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(
            co.inputs[1], co.inputs[2],
            "pxor xmm0,xmm0 sources should be equal"
        );
    }

    #[test]
    fn test_lift_sse_paddq() {
        // 66 0F D4 D3 = paddq xmm2, xmm3
        assert_callother_tag(&[0x66, 0x0F, 0xD4, 0xD3], sse_tag::PADDQ);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xD4, 0xD3], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("paddq should produce output");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_sse_pand() {
        // 66 0F DB C1 = pand xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xDB, 0xC1], sse_tag::PAND);
    }

    #[test]
    fn test_lift_sse_por() {
        // 66 0F EB C1 = por xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xEB, 0xC1], sse_tag::POR);
    }

    #[test]
    fn test_lift_sse_psubb() {
        // 66 0F F8 C1 = psubb xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xF8, 0xC1], sse_tag::PSUBB);
    }

    #[test]
    fn test_lift_sse_paddw() {
        // 66 0F FD C1 = paddw xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xFD, 0xC1], sse_tag::PADDW);
    }

    #[test]
    fn test_lift_sse_paddd() {
        // 66 0F FE C1 = paddd xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xFE, 0xC1], sse_tag::PADDD);
    }

    #[test]
    fn test_lift_sse_psubw() {
        // 66 0F F9 C1 = psubw xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xF9, 0xC1], sse_tag::PSUBW);
    }

    #[test]
    fn test_lift_sse_psubd() {
        // 66 0F FA C1 = psubd xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xFA, 0xC1], sse_tag::PSUBD);
    }

    #[test]
    fn test_lift_sse_psubq() {
        // 66 0F FB C1 = psubq xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xFB, 0xC1], sse_tag::PSUBQ);
    }

    /// t163 — PMULUDQ (SSE2 unsigned 32×32→64 of low dword per lane).
    #[test]
    fn test_lift_sse_pmuludq() {
        // 66 0F F4 C1 = pmuludq xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0xF4, 0xC1], sse_tag::PMULUDQ);

        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xF4, 0xC1], 0x1000)
            .expect("pmuludq must decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PMULUDQ must emit Callother");
        let dst = co.output.expect("PMULUDQ must produce a register output");
        assert_eq!(dst.size, 16, "PMULUDQ lane width is the full 128-bit XMM");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    // ── t174 — SSE3 / SSSE3 packed integer ops ────────────────────────
    //
    // SSSE3 opcodes are `66 0F 38 XX /r`; PALIGNR uses `66 0F 3A 0F /r ib`.
    // We assert the Callother tag matches and (for PALIGNR) that the
    // 4-input shape `(tag, dst, src, imm)` is preserved.

    #[test]
    fn test_lift_sse_pshufb_t174() {
        // 66 0F 38 00 C1 = pshufb xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x00, 0xC1], sse_tag::PSHUFB);
    }

    #[test]
    fn test_lift_sse_phaddw_t174() {
        // 66 0F 38 01 C1 = phaddw xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x01, 0xC1], sse_tag::PHADDW);
    }

    #[test]
    fn test_lift_sse_phaddd_t174() {
        // 66 0F 38 02 C1 = phaddd xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x02, 0xC1], sse_tag::PHADDD);
    }

    #[test]
    fn test_lift_sse_phsubw_t174() {
        // 66 0F 38 05 C1 = phsubw xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x05, 0xC1], sse_tag::PHSUBW);
    }

    #[test]
    fn test_lift_sse_phsubd_t174() {
        // 66 0F 38 06 C1 = phsubd xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x06, 0xC1], sse_tag::PHSUBD);
    }

    #[test]
    fn test_lift_sse_pmaddubsw_t174() {
        // 66 0F 38 04 C1 = pmaddubsw xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x04, 0xC1], sse_tag::PMADDUBSW);
    }

    #[test]
    fn test_lift_sse_psignb_t174() {
        // 66 0F 38 08 C1 = psignb xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x08, 0xC1], sse_tag::PSIGNB);
    }

    #[test]
    fn test_lift_sse_psignw_t174() {
        // 66 0F 38 09 C1 = psignw xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x09, 0xC1], sse_tag::PSIGNW);
    }

    #[test]
    fn test_lift_sse_psignd_t174() {
        // 66 0F 38 0A C1 = psignd xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x0A, 0xC1], sse_tag::PSIGND);
    }

    #[test]
    fn test_lift_sse_palignr_t174() {
        // 66 0F 3A 0F C1 04 = palignr xmm0, xmm1, 4
        //
        // PALIGNR is the only ssse3 op we touch with a 3rd operand
        // (an imm8 shift count). The lifter routes it through
        // `lift_sse_blend`, so the Callother shape is
        // `(tag, src0, src1, imm)` — four inputs total.
        let bytes = &[0x66, 0x0F, 0x3A, 0x0F, 0xC1, 0x04];
        assert_callother_tag(bytes, sse_tag::PALIGNR);

        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("palignr must decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PALIGNR must emit Callother");
        assert_eq!(
            co.inputs.len(),
            4,
            "PALIGNR Callother is (tag, src0, src1, imm)",
        );
        // The imm8 reaches the IR as a constant varnode.
        let imm = co.inputs[3];
        assert_eq!(
            imm.offset, 4,
            "PALIGNR imm8 (4) must be preserved as the 4th Callother input",
        );
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    // ── t185 — SSE4.1 / SSE4.2 packed ops ─────────────────────────────
    //
    // SSE4.1 lives mostly under the `66 0F 38 XX /r` and `66 0F 3A XX /r ib`
    // opcode escapes. Each test asserts the Callother tag and (where the
    // shape carries an imm8 or a non-XMM destination) verifies the
    // corresponding Callother input or output size — that's the contract
    // downstream recoverers rely on.

    #[test]
    fn test_lift_sse_pcmpeqq_t185() {
        // 66 0F 38 29 C1 = pcmpeqq xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x29, 0xC1], sse_tag::PCMPEQQ);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x38, 0x29, 0xC1], 0x1000)
            .expect("pcmpeqq decodes");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PCMPEQQ Callother");
        let dst = co.output.expect("PCMPEQQ produces a 128-bit result");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_sse_pmovzxbw_t185() {
        // 66 0F 38 30 C1 = pmovzxbw xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x30, 0xC1], sse_tag::PMOVZXBW);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x38, 0x30, 0xC1], 0x1000)
            .expect("pmovzxbw decodes");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PMOVZXBW Callother");
        // Widening converts are unary: (tag, src) — two inputs total.
        assert_eq!(co.inputs.len(), 2, "PMOVZXBW shape is (tag, src)");
        let dst = co.output.expect("PMOVZXBW writes XMM");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_sse_pmovzx_family_t185() {
        // The remaining PMOVZX widths share `lift_sse_unop`; assert
        // the dispatcher picks the correct tag for each.
        for (bytes, tag) in [
            (
                &[0x66u8, 0x0F, 0x38, 0x31, 0xC1] as &[u8],
                sse_tag::PMOVZXBD,
            ),
            (&[0x66, 0x0F, 0x38, 0x32, 0xC1], sse_tag::PMOVZXBQ),
            (&[0x66, 0x0F, 0x38, 0x33, 0xC1], sse_tag::PMOVZXWD),
            (&[0x66, 0x0F, 0x38, 0x34, 0xC1], sse_tag::PMOVZXWQ),
            (&[0x66, 0x0F, 0x38, 0x35, 0xC1], sse_tag::PMOVZXDQ),
        ] {
            assert_callother_tag(bytes, tag);
        }
    }

    #[test]
    fn test_lift_sse_pmovsx_family_t185() {
        for (bytes, tag) in [
            (
                &[0x66u8, 0x0F, 0x38, 0x20, 0xC1] as &[u8],
                sse_tag::PMOVSXBW,
            ),
            (&[0x66, 0x0F, 0x38, 0x21, 0xC1], sse_tag::PMOVSXBD),
            (&[0x66, 0x0F, 0x38, 0x22, 0xC1], sse_tag::PMOVSXBQ),
            (&[0x66, 0x0F, 0x38, 0x23, 0xC1], sse_tag::PMOVSXWD),
            (&[0x66, 0x0F, 0x38, 0x24, 0xC1], sse_tag::PMOVSXWQ),
            (&[0x66, 0x0F, 0x38, 0x25, 0xC1], sse_tag::PMOVSXDQ),
        ] {
            assert_callother_tag(bytes, tag);
        }
    }

    #[test]
    fn test_lift_sse_pmuldq_t185() {
        // 66 0F 38 28 C1 = pmuldq xmm0, xmm1
        assert_callother_tag(&[0x66, 0x0F, 0x38, 0x28, 0xC1], sse_tag::PMULDQ);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x38, 0x28, 0xC1], 0x1000)
            .expect("pmuldq decodes");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PMULDQ Callother");
        let dst = co.output.expect("PMULDQ writes XMM");
        assert_eq!(dst.size, 16, "PMULDQ result is 128-bit");
    }

    #[test]
    fn test_lift_sse_pmin_pmax_32_t185() {
        // PMINSD/PMINUD/PMAXSD/PMAXUD — share lift_sse_binop.
        for (bytes, tag) in [
            (&[0x66u8, 0x0F, 0x38, 0x39, 0xC1] as &[u8], sse_tag::PMINSD),
            (&[0x66, 0x0F, 0x38, 0x3B, 0xC1], sse_tag::PMINUD),
            (&[0x66, 0x0F, 0x38, 0x3D, 0xC1], sse_tag::PMAXSD),
            (&[0x66, 0x0F, 0x38, 0x3F, 0xC1], sse_tag::PMAXUD),
        ] {
            assert_callother_tag(bytes, tag);
        }
    }

    #[test]
    fn test_lift_sse_pcmpestri_t185() {
        // 66 0F 3A 61 C1 07 = pcmpestri xmm0, xmm1, 7
        let bytes = &[0x66, 0x0F, 0x3A, 0x61, 0xC1, 0x07];
        assert_callother_tag(bytes, sse_tag::PCMPESTRI);
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("pcmpestri decodes");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == sse_tag::PCMPESTRI)
            .expect("PCMPESTRI Callother");
        // (tag, xmm0, xmm1, imm) — four inputs, no IR output (ECX is
        // implicit on x86 and recovered by downstream passes).
        assert_eq!(co.inputs.len(), 4, "PCMPESTRI shape is (tag, a, b, imm)");
        assert!(co.output.is_none(), "PCMPESTRI emits no IR output");
        assert_eq!(co.inputs[3].offset, 7, "imm8 must reach Callother");
    }

    #[test]
    fn test_lift_sse_pcmpistri_t185() {
        // 66 0F 3A 63 C1 07 = pcmpistri xmm0, xmm1, 7
        let bytes = &[0x66, 0x0F, 0x3A, 0x63, 0xC1, 0x07];
        assert_callother_tag(bytes, sse_tag::PCMPISTRI);
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("pcmpistri decodes");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == sse_tag::PCMPISTRI)
            .expect("PCMPISTRI Callother");
        assert_eq!(co.inputs.len(), 4);
        assert!(co.output.is_none());
    }

    #[test]
    fn test_lift_sse_pinsrb_t185() {
        // 66 0F 3A 20 C0 03 = pinsrb xmm0, eax, 3
        let bytes = &[0x66, 0x0F, 0x3A, 0x20, 0xC0, 0x03];
        assert_callother_tag(bytes, sse_tag::PINSRB);
        let result = lifter().lift_insn(bytes, 0x1000).expect("pinsrb decodes");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PINSRB Callother");
        // PINSR* routes through lift_sse_blend → (tag, xmm_old, src, imm).
        assert_eq!(co.inputs.len(), 4, "PINSRB shape is (tag, dst, src, imm)");
        assert_eq!(co.inputs[3].offset, 3, "imm8 preserved");
        let dst = co.output.expect("PINSRB writes XMM");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_sse_pinsrw_pinsrd_pinsrq_t185() {
        for (bytes, tag) in [
            // pinsrw xmm0, eax, 3 — uses the older `66 0F C4 /r ib`.
            (&[0x66u8, 0x0F, 0xC4, 0xC0, 0x03] as &[u8], sse_tag::PINSRW),
            // pinsrd xmm0, eax, 3
            (&[0x66, 0x0F, 0x3A, 0x22, 0xC0, 0x03], sse_tag::PINSRD),
            // pinsrq xmm0, rax, 3 — REX.W
            (&[0x66, 0x48, 0x0F, 0x3A, 0x22, 0xC0, 0x03], sse_tag::PINSRQ),
        ] {
            assert_callother_tag(bytes, tag);
        }
    }

    #[test]
    fn test_lift_sse_pextrb_t185() {
        // 66 0F 3A 14 C0 03 = pextrb eax, xmm0, 3
        let bytes = &[0x66, 0x0F, 0x3A, 0x14, 0xC0, 0x03];
        assert_callother_tag(bytes, sse_tag::PEXTRB);
        let result = lifter().lift_insn(bytes, 0x1000).expect("pextrb decodes");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PEXTRB Callother");
        // (tag, xmm_src, imm) — three inputs, GP destination.
        assert_eq!(co.inputs.len(), 3, "PEXTRB shape is (tag, src, imm)");
        assert_eq!(co.inputs[2].offset, 3);
        let dst = co.output.expect("PEXTRB writes GP destination");
        assert_eq!(
            dst.space,
            unlace_ir::SpaceId::Register,
            "PEXTRB GP dest lives in the register space"
        );
    }

    #[test]
    fn test_lift_sse_pextrw_pextrd_pextrq_t185() {
        for (bytes, tag) in [
            (
                &[0x66u8, 0x0F, 0x3A, 0x15, 0xC0, 0x03] as &[u8],
                sse_tag::PEXTRW,
            ),
            (&[0x66, 0x0F, 0x3A, 0x16, 0xC0, 0x03], sse_tag::PEXTRD),
            (&[0x66, 0x48, 0x0F, 0x3A, 0x16, 0xC0, 0x03], sse_tag::PEXTRQ),
        ] {
            assert_callother_tag(bytes, tag);
        }
    }

    /// t163 — PADDQ → PSUBQ chained on XMM0 must share the XMM0 register
    /// varnode (same offset, same 16-byte size) so SSA / liveness sees
    /// the dataflow. This is the downstream-visibility contract: any
    /// pass that walks `output → later input` will pick up the chain.
    #[test]
    fn t163_paddq_psubq_chain_shares_xmm0_register_varnode() {
        use crate::register_file::XMM0;
        use unlace_ir::SpaceId;

        // 66 0F D4 C1 = paddq xmm0, xmm1   (xmm0 = xmm0 + xmm1)
        let paddq = lifter()
            .lift_insn(&[0x66, 0x0F, 0xD4, 0xC1], 0x1000)
            .expect("paddq decodes");
        // 66 0F FB C2 = psubq xmm0, xmm2   (xmm0 = xmm0 - xmm2)
        let psubq = lifter()
            .lift_insn(&[0x66, 0x0F, 0xFB, 0xC2], 0x1004)
            .expect("psubq decodes");

        let paddq_co = paddq
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == sse_tag::PADDQ)
            .expect("PADDQ Callother present");
        let psubq_co = psubq
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == sse_tag::PSUBQ)
            .expect("PSUBQ Callother present");

        let paddq_out = paddq_co.output.expect("PADDQ writes a varnode");
        assert_eq!(paddq_out.space, SpaceId::Register);
        assert_eq!(paddq_out.offset, XMM0, "PADDQ must write XMM0");
        assert_eq!(paddq_out.size, 16);

        // PSUBQ reads xmm0 (operand 0 as source) and writes xmm0 again.
        let psubq_reads_xmm0 = psubq_co.inputs.iter().any(|v| {
            v.space == SpaceId::Register && v.offset == XMM0 && v.size == 16
        });
        assert!(
            psubq_reads_xmm0,
            "PSUBQ must read the same XMM0 reg varnode PADDQ wrote — \
             inputs were: {:?}",
            psubq_co.inputs,
        );

        let psubq_out = psubq_co.output.expect("PSUBQ writes a varnode");
        assert_eq!(psubq_out.space, SpaceId::Register);
        assert_eq!(psubq_out.offset, XMM0, "PSUBQ also writes XMM0");
        assert_eq!(psubq_out.size, 16);

        // Sanity: write/read offsets agree byte-for-byte (the dataflow
        // identity matters more than the varnode struct equality, since
        // the size field is the only thing we'd ever vary).
        assert_eq!(paddq_out.offset, psubq_out.offset);
    }

    /// t163 — PADDQ on XMM8 (REX-extended) must reach the same XMM8
    /// reg-file varnode that the register file declares. Catches a
    /// class of bugs where the REX.R-extended lane is silently dropped.
    #[test]
    fn t163_paddq_xmm8_uses_declared_register_file_varnode() {
        use crate::register_file::{XMM8, x86_64_register_file};
        use unlace_ir::SpaceId;

        // 66 45 0F D4 C0 = paddq xmm8, xmm8
        let r = lifter()
            .lift_insn(&[0x66, 0x45, 0x0F, 0xD4, 0xC0], 0x1000)
            .expect("paddq xmm8,xmm8 decodes");
        let co = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == sse_tag::PADDQ)
            .expect("PADDQ Callother present");

        let out = co.output.expect("PADDQ writes a varnode");
        assert_eq!(out.space, SpaceId::Register);
        assert_eq!(out.offset, XMM8);
        assert_eq!(out.size, 16);

        // The offset must match what the public register-file declares
        // under the name "XMM8" — downstream code that looks XMM8 up by
        // name has to find this exact varnode.
        let rf = x86_64_register_file();
        let xmm8 = rf
            .registers
            .iter()
            .find(|r| r.name == "XMM8")
            .expect("register file declares XMM8");
        assert_eq!(out.offset, xmm8.varnode.offset);
        assert_eq!(out.size, xmm8.varnode.size);
    }

    #[test]
    fn paddd_emits_callother_with_lane_size_4() {
        // 66 0F FE C1 = paddd xmm0, xmm1.
        // lift-x86 uses one Callother tag per lane-width (PADDB/W/D/Q);
        // PADDD encodes the 4-byte-lane variant.
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xFE, 0xC1], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PADDD must emit Callother");
        assert_eq!(co.inputs[0].offset, sse_tag::PADDD);
        let dst = co.output.expect("PADDD has dst output");
        assert_eq!(dst.size, 16);
        assert_eq!(co.inputs.len(), 3);
    }

    #[test]
    fn psubd_emits_callother() {
        // 66 0F FA C1 = psubd xmm0, xmm1
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xFA, 0xC1], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PSUBD must emit Callother");
        assert_eq!(co.inputs[0].offset, sse_tag::PSUBD);
        assert_eq!(co.output.unwrap().size, 16);
    }

    #[test]
    fn pmulld_emits_callother() {
        // 66 0F 38 40 C1 = pmulld xmm0, xmm1 (SSE4.1)
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x38, 0x40, 0xC1], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PMULLD must emit Callother");
        assert_eq!(co.inputs[0].offset, sse_tag::PMULLD);
        assert_eq!(co.output.unwrap().size, 16);
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn pand_uses_intand_or_callother() {
        // 66 0F DB C1 = pand xmm0, xmm1.
        // lift-x86 lowers 128-bit SSE bitwise ops via Callother; accept either
        // IntAnd or Callother(tag::PAND) so future 128-bit IntAnd drops in.
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xDB, 0xC1], 0x1000)
            .unwrap();
        let is_intand = result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd);
        let is_callother_pand = result.ir_ops.iter().any(|i| {
            i.op == IrOp::Callother && i.inputs[0].offset == sse_tag::PAND
        });
        assert!(
            is_intand || is_callother_pand,
            "PAND must lift to either IntAnd or Callother(tag::PAND)"
        );
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn pcmpeqd_emits_callother() {
        // 66 0F 76 C1 = pcmpeqd xmm0, xmm1
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x76, 0xC1], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("PCMPEQD must emit Callother");
        assert_eq!(co.inputs[0].offset, sse_tag::PCMPEQD);
        assert_eq!(co.output.unwrap().size, 16);
    }

    // -- Sign extension (CDQE / CDQ / CQO / CBW / CWDE) --------------------

    #[test]
    fn test_cbw() {
        // 66 98 = CBW (sign-extend AL to AX)
        let result = lifter()
            .lift_insn(&[0x66, 0x98], 0x1000)
            .expect("should decode CBW");
        assert_eq!(result.len, 2);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn test_cwde() {
        // 98 = CWDE (sign-extend AX to EAX)
        let result = lifter()
            .lift_insn(&[0x98], 0x1000)
            .expect("should decode CWDE");
        assert_eq!(result.len, 1);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn test_cdqe() {
        // 48 98 = CDQE (sign-extend EAX to RAX)
        let result = lifter()
            .lift_insn(&[0x48, 0x98], 0x1000)
            .expect("should decode CDQE");
        assert_eq!(result.len, 2);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn test_cdq() {
        // 99 = CDQ (sign-extend EAX to EDX:EAX)
        let result = lifter()
            .lift_insn(&[0x99], 0x1000)
            .expect("should decode CDQ");
        assert_eq!(result.len, 1);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
    }

    #[test]
    fn test_cqo() {
        // 48 99 = CQO (sign-extend RAX to RDX:RAX)
        let result = lifter()
            .lift_insn(&[0x48, 0x99], 0x1000)
            .expect("should decode CQO");
        assert_eq!(result.len, 2);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
    }

    // -- LEAVE ---------------------------------------------------------------

    #[test]
    fn test_leave() {
        // C9 = LEAVE (MOV RSP,RBP; POP RBP)
        let result = lifter()
            .lift_insn(&[0xc9], 0x1000)
            .expect("should decode LEAVE");
        assert_eq!(result.len, 1);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert_eq!(
            result.ir_ops.iter().filter(|i| i.op == IrOp::Copy).count(),
            3
        );
    }

    #[test]
    fn test_lift_sse_movdqa_store() {
        // 66 0F 7F 07 = movdqa [rdi], xmm0
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x7F, 0x07], 0x1000)
            .expect("should decode movdqa store");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert!(co.output.is_none(), "store form should have no output");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(sse_tag::MOVDQA, 8)
        );
    }

    // -- SETcc lifting -------------------------------------------------------

    #[test]
    fn test_sete_sets_byte_on_zero_flag() {
        // 0F 94 C0 = sete al
        let result = lifter()
            .lift_insn(&[0x0F, 0x94, 0xC0], 0x1000)
            .expect("should decode sete al");
        assert_eq!(result.len, 3);
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_setne_uses_bool_negate() {
        // 0F 95 C0 = setne al
        let result = lifter()
            .lift_insn(&[0x0F, 0x95, 0xC0], 0x1000)
            .expect("should decode setne al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_setb_reads_carry_flag() {
        // 0F 92 C0 = setb al
        let result = lifter()
            .lift_insn(&[0x0F, 0x92, 0xC0], 0x1000)
            .expect("should decode setb al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_setg_signed_greater() {
        // 0F 9F C0 = setg al — ZF==0 AND SF==OF
        let result = lifter()
            .lift_insn(&[0x0F, 0x9F, 0xC0], 0x1000)
            .expect("should decode setg al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolAnd));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolXor));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_setl_signed_less() {
        // 0F 9C C0 = setl al — SF != OF
        let result = lifter()
            .lift_insn(&[0x0F, 0x9C, 0xC0], 0x1000)
            .expect("should decode setl al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolXor));
    }

    #[test]
    fn test_seta_unsigned_above() {
        // 0F 97 C0 = seta al — CF==0 AND ZF==0
        let result = lifter()
            .lift_insn(&[0x0F, 0x97, 0xC0], 0x1000)
            .expect("should decode seta al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolAnd));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_setle_signed_less_or_equal() {
        // 0F 9E C0 = setle al — ZF==1 OR SF!=OF
        let result = lifter()
            .lift_insn(&[0x0F, 0x9E, 0xC0], 0x1000)
            .expect("should decode setle al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolOr));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolXor));
    }

    #[test]
    fn test_setbe_unsigned_below_or_equal() {
        // 0F 96 C0 = setbe al — CF==1 OR ZF==1
        let result = lifter()
            .lift_insn(&[0x0F, 0x96, 0xC0], 0x1000)
            .expect("should decode setbe al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolOr));
    }

    #[test]
    fn test_setae_unsigned_above_or_equal() {
        // 0F 93 C0 = setae al — CF==0
        let result = lifter()
            .lift_insn(&[0x0F, 0x93, 0xC0], 0x1000)
            .expect("should decode setae al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_setge_signed_greater_or_equal() {
        // 0F 9D C0 = setge al — SF==OF
        let result = lifter()
            .lift_insn(&[0x0F, 0x9D, 0xC0], 0x1000)
            .expect("should decode setge al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolXor));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_sets_reads_sign_flag() {
        // 0F 98 C0 = sets al
        let result = lifter()
            .lift_insn(&[0x0F, 0x98, 0xC0], 0x1000)
            .expect("should decode sets al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn test_setns_negates_sign_flag() {
        // 0F 99 C0 = setns al
        let result = lifter()
            .lift_insn(&[0x0F, 0x99, 0xC0], 0x1000)
            .expect("should decode setns al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_seto_reads_overflow_flag() {
        // 0F 90 C0 = seto al
        let result = lifter()
            .lift_insn(&[0x0F, 0x90, 0xC0], 0x1000)
            .expect("should decode seto al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn test_setno_negates_overflow_flag() {
        // 0F 91 C0 = setno al
        let result = lifter()
            .lift_insn(&[0x0F, 0x91, 0xC0], 0x1000)
            .expect("should decode setno al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_setp_reads_parity_flag() {
        // 0F 9A C0 = setp al
        let result = lifter()
            .lift_insn(&[0x0F, 0x9A, 0xC0], 0x1000)
            .expect("should decode setp al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn test_setnp_negates_parity_flag() {
        // 0F 9B C0 = setnp al
        let result = lifter()
            .lift_insn(&[0x0F, 0x9B, 0xC0], 0x1000)
            .expect("should decode setnp al");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn test_setcc_memory_operand() {
        // 0F 94 07 = sete [rdi]
        let result = lifter()
            .lift_insn(&[0x0F, 0x94, 0x07], 0x1000)
            .expect("should decode sete [rdi]");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    // -- MOVAPS / MOVUPS / MOVSD lifting ------------------------------------

    #[test]
    fn test_lift_movaps_reg_to_reg() {
        // 0F 28 C1 = movaps xmm0, xmm1
        assert_callother_tag(&[0x0F, 0x28, 0xC1], sse_tag::MOVAPS);
        let result = lifter().lift_insn(&[0x0F, 0x28, 0xC1], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("reg form should have output");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_movups_mem_to_reg() {
        // 0F 10 07 = movups xmm0, [rdi]
        assert_callother_tag(&[0x0F, 0x10, 0x07], sse_tag::MOVUPS);
        let result = lifter().lift_insn(&[0x0F, 0x10, 0x07], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("load form should have output");
        assert_eq!(dst.size, 16);
    }

    #[test]
    fn test_lift_movsd_reg_to_reg() {
        // F2 0F 10 C1 = movsd xmm0, xmm1
        assert_callother_tag(&[0xF2, 0x0F, 0x10, 0xC1], sse_tag::MOVSD);
        let result = lifter()
            .lift_insn(&[0xF2, 0x0F, 0x10, 0xC1], 0x1000)
            .unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("reg form should have output");
        assert_eq!(dst.size, 16);
    }

    // -- ADC / SBB carry arithmetic -----------------------------------------

    #[test]
    fn test_adc_reg_reg() {
        // 48 11 D8 = adc rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x11, 0xD8], 0x1000)
            .expect("should decode adc rax, rbx");
        // ADC: tmp = a + b; result = tmp + zext(CF)
        let add_count = result
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::IntAdd)
            .count();
        assert!(add_count >= 2, "ADC should emit at least two IntAdd ops");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntCarry));
    }

    #[test]
    fn test_sbb_reg_reg() {
        // 48 19 D8 = sbb rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x19, 0xD8], 0x1000)
            .expect("should decode sbb rax, rbx");
        let sub_count = result
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::IntSub)
            .count();
        assert!(sub_count >= 2, "SBB should emit at least two IntSub ops");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
    }

    // -- ROL / ROR rotation -------------------------------------------------

    #[test]
    fn test_rol_reg_imm() {
        // 48 C1 C0 04 = rol rax, 4
        let result = lifter()
            .lift_insn(&[0x48, 0xC1, 0xC0, 0x04], 0x1000)
            .expect("should decode rol rax, 4");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    #[test]
    fn test_ror_reg_imm() {
        // 48 C1 C8 04 = ror rax, 4
        let result = lifter()
            .lift_insn(&[0x48, 0xC1, 0xC8, 0x04], 0x1000)
            .expect("should decode ror rax, 4");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    use crate::ops::bitwise::bit_tag;

    #[test]
    fn test_bt_reg_reg() {
        // 0F A3 D8 = bt eax, ebx
        let result = lifter()
            .lift_insn(&[0x0F, 0xA3, 0xD8], 0x1000)
            .expect("should decode bt eax, ebx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
        let cf = unlace_ir::Varnode::reg(256, 1);
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy && i.output == Some(cf)),
            "BT should write CF"
        );
    }

    #[test]
    fn test_bsf_reg_reg() {
        // 0F BC C3 = bsf eax, ebx
        let result = lifter()
            .lift_insn(&[0x0F, 0xBC, 0xC3], 0x1000)
            .expect("should decode bsf eax, ebx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(bit_tag::BSF, 8));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn test_bsr_reg_reg() {
        // 0F BD C3 = bsr eax, ebx
        let result = lifter()
            .lift_insn(&[0x0F, 0xBD, 0xC3], 0x1000)
            .expect("should decode bsr eax, ebx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(bit_tag::BSR, 8));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn test_tzcnt_reg_reg() {
        // F3 0F BC C3 = tzcnt eax, ebx
        let result = lifter()
            .lift_insn(&[0xF3, 0x0F, 0xBC, 0xC3], 0x1000)
            .expect("should decode tzcnt eax, ebx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(bit_tag::TZCNT, 8)
        );
        let eq_count = result
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::IntEqual)
            .count();
        assert!(
            eq_count >= 2,
            "TZCNT should set both ZF and CF via IntEqual"
        );
    }

    #[test]
    fn test_lzcnt_reg_reg() {
        // F3 0F BD C3 = lzcnt eax, ebx
        let result = lifter()
            .lift_insn(&[0xF3, 0x0F, 0xBD, 0xC3], 0x1000)
            .expect("should decode lzcnt eax, ebx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Lzcount));
        let eq_count = result
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::IntEqual)
            .count();
        assert!(
            eq_count >= 2,
            "LZCNT should set both ZF and CF via IntEqual"
        );
    }

    #[test]
    fn test_popcnt_reg_reg() {
        // F3 0F B8 C3 = popcnt eax, ebx
        let result = lifter()
            .lift_insn(&[0xF3, 0x0F, 0xB8, 0xC3], 0x1000)
            .expect("should decode popcnt eax, ebx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Popcount));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn test_ud2_emits_trap() {
        // 0F 0B = ud2
        let result = lifter()
            .lift_insn(&[0x0F, 0x0B], 0x1000)
            .expect("should decode ud2");
        assert_eq!(result.len, 2);
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(bit_tag::TRAP, 8));
        assert!(co.output.is_none(), "UD2 should have no output");
    }

    use crate::ops::arithmetic::atomic_tag;

    #[test]
    fn test_cmpxchg_no_lock_branchless() {
        // 48 0F B1 D8 = cmpxchg rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x0F, 0xB1, 0xD8], 0x1000)
            .expect("should decode cmpxchg rax, rbx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(
            !result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
            "non-LOCK CMPXCHG should not emit Callother"
        );
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::IntSub),
            "non-LOCK CMPXCHG should compute RAX - dst for ZF"
        );
    }

    #[test]
    fn test_cmpxchg_lock_emits_callother() {
        // F0 48 0F B1 1F = lock cmpxchg [rdi], rbx
        let result = lifter()
            .lift_insn(&[0xF0, 0x48, 0x0F, 0xB1, 0x1F], 0x1000)
            .expect("should decode lock cmpxchg");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("LOCK CMPXCHG should emit Callother");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(atomic_tag::CMPXCHG, 8),
            "tag should be CMPXCHG"
        );
        assert_eq!(
            co.inputs.len(),
            4,
            "Callother CMPXCHG takes (tag, dst, src, RAX)"
        );
        let zf = unlace_ir::Varnode::reg(259, 1);
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::IntEqual && i.output == Some(zf) }),
            "LOCK CMPXCHG should set ZF from intrinsic result"
        );
    }

    #[test]
    fn test_xadd_no_lock_reg_reg() {
        // 48 0F C1 D8 = xadd rax, rbx
        let result = lifter()
            .lift_insn(&[0x48, 0x0F, 0xC1, 0xD8], 0x1000)
            .expect("should decode xadd rax, rbx");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(
            !result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
            "non-LOCK XADD should not emit Callother"
        );
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::IntCarry),
            "XADD should set CF like ADD"
        );
    }

    #[test]
    fn test_xadd_lock_emits_callother() {
        // F0 48 0F C1 1F = lock xadd [rdi], rbx
        let result = lifter()
            .lift_insn(&[0xF0, 0x48, 0x0F, 0xC1, 0x1F], 0x1000)
            .expect("should decode lock xadd");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("LOCK XADD should emit Callother");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(atomic_tag::XADD, 8),
            "tag should be XADD"
        );
        assert_eq!(co.inputs.len(), 3, "Callother XADD takes (tag, dst, src)");
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd),
            "LOCK XADD still updates flags via add of original + src"
        );
    }

    #[test]
    fn test_bswap_64() {
        // 48 0F C8 = bswap rax
        let result = lifter()
            .lift_insn(&[0x48, 0x0F, 0xC8], 0x1000)
            .expect("should decode bswap rax");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("BSWAP should emit Callother");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(atomic_tag::BSWAP, 8),
            "tag should be BSWAP"
        );
        let result_vn = co.output.expect("BSWAP must produce a result");
        assert_eq!(result_vn.size, 8, "bswap rax produces 8-byte result");
    }

    #[test]
    fn test_bswap_32() {
        // 0F C8 = bswap eax
        let result = lifter()
            .lift_insn(&[0x0F, 0xC8], 0x1000)
            .expect("should decode bswap eax");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("BSWAP should emit Callother");
        assert_eq!(co.output.expect("output").size, 4);
    }

    #[test]
    fn test_movbe_load() {
        // 48 0F 38 F0 07 = movbe rax, [rdi]
        let result = lifter()
            .lift_insn(&[0x48, 0x0F, 0x38, 0xF0, 0x07], 0x1000)
            .expect("should decode movbe rax, [rdi]");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(
            result.ir_ops.iter().any(|i| i.op == IrOp::Load),
            "MOVBE load form should emit a Load before swapping"
        );
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("MOVBE should emit BSWAP Callother");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(atomic_tag::BSWAP, 8),
        );
    }

    #[test]
    fn test_repne_scasb() {
        // F2 AE = REPNE SCASB
        let result = lifter()
            .lift_insn(&[0xF2, 0xAE], 0x1000)
            .expect("should decode repne scasb");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("REPNE SCASB should emit Callother");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(0x4, 8),
            "tag should be MEMSCAN=0x4"
        );
        assert_eq!(
            co.inputs.len(),
            5,
            "MEMSCAN takes (tag, ptr, val, count, elem_size)"
        );
        assert_eq!(
            co.inputs[4],
            unlace_ir::Varnode::constant(1, 8),
            "elem_size should be 1 for SCASB"
        );

        let rcx = unlace_ir::Varnode::reg(8, 8);
        let zero = unlace_ir::Varnode::constant(0, 8);
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output == Some(rcx) && i.inputs[0] == zero }),
            "should zero RCX after REPNE SCASB"
        );
    }

    #[test]
    fn test_repe_scasd() {
        // F3 AF = REPE SCASD
        let result = lifter()
            .lift_insn(&[0xF3, 0xAF], 0x1000)
            .expect("should decode repe scasd");
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("REPE SCASD should emit Callother");
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x4, 8),);
        assert_eq!(
            co.inputs[4],
            unlace_ir::Varnode::constant(4, 8),
            "elem_size should be 4 for SCASD"
        );
    }

    use crate::ops::fpu::fpu_tag;

    fn assert_fpu_tag(bytes: &[u8], expected_tag: u64) {
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("should decode x87 instruction");
        assert!(
            !result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented),
            "x87 instruction should not lower to Unimplemented (bytes={bytes:02x?})"
        );
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("should emit Callother for x87 instruction");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(expected_tag, 8),
            "Callother tag mismatch"
        );
    }

    #[test]
    fn test_lift_fld_mem_dword() {
        assert_fpu_tag(&[0xD9, 0x00], fpu_tag::FLD);
        let result = lifter().lift_insn(&[0xD9, 0x00], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("FLD should write to ST(0)");
        assert_eq!(dst.size, 10, "FLD output is 80-bit ST(0)");
        assert_eq!(dst.offset, crate::register_file::ST0);
    }

    #[test]
    fn test_lift_fld_st_register() {
        assert_fpu_tag(&[0xD9, 0xC1], fpu_tag::FLD);
        let result = lifter().lift_insn(&[0xD9, 0xC1], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.output.unwrap().offset, crate::register_file::ST0);
    }

    #[test]
    fn test_lift_fstp_mem() {
        assert_fpu_tag(&[0xDD, 0x18], fpu_tag::FSTP);
        let result = lifter().lift_insn(&[0xDD, 0x18], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert!(
            co.output.is_none(),
            "FSTP m64fp does not write to a varnode output"
        );
        assert_eq!(co.inputs.len(), 3, "FSTP m: (tag, dst_addr, src=ST0)");
    }

    #[test]
    fn test_lift_fstp_st_register() {
        assert_fpu_tag(&[0xDD, 0xD9], fpu_tag::FSTP);
    }

    #[test]
    fn test_lift_fst_st_register() {
        assert_fpu_tag(&[0xDD, 0xD2], fpu_tag::FST);
        let result = lifter().lift_insn(&[0xDD, 0xD2], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("FST ST(i) writes to a register output");
        assert_eq!(dst.size, 10);
    }

    #[test]
    fn test_lift_fadd_st0_st1() {
        // D8 C1 = fadd st0, st1
        assert_fpu_tag(&[0xD8, 0xC1], fpu_tag::FADD);
        let result = lifter().lift_insn(&[0xD8, 0xC1], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs.len(), 3, "FADD st0,st1: (tag, st0, st1)");
        let dst = co.output.expect("FADD writes to ST(0)");
        assert_eq!(dst.offset, crate::register_file::ST0);
    }

    #[test]
    fn test_lift_faddp_implicit() {
        // DE C1 = faddp st1, st0
        assert_fpu_tag(&[0xDE, 0xC1], fpu_tag::FADD);
        let result = lifter().lift_insn(&[0xDE, 0xC1], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("FADDP writes to ST(1)");
        assert_eq!(dst.offset, crate::register_file::ST1);
    }

    #[test]
    fn test_lift_fsub_st0_st1() {
        // D8 E1 = fsub st0, st1
        assert_fpu_tag(&[0xD8, 0xE1], fpu_tag::FSUB);
        let result = lifter().lift_insn(&[0xD8, 0xE1], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs.len(), 3);
    }

    #[test]
    fn test_lift_fsubr_swaps_operands() {
        // D8 E9 = fsubr st0, st1   (st0 = st1 - st0)
        assert_fpu_tag(&[0xD8, 0xE9], fpu_tag::FSUB);
        let result = lifter().lift_insn(&[0xD8, 0xE9], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        // Forward FSUB st0,st1 emits (st0, st1); reverse FSUBR swaps -> (st1, st0).
        assert_eq!(
            co.inputs[1].offset,
            crate::register_file::ST1,
            "FSUBR lhs is st1"
        );
        assert_eq!(
            co.inputs[2].offset,
            crate::register_file::ST0,
            "FSUBR rhs is st0"
        );
    }

    #[test]
    fn test_lift_fadd_mem() {
        // D8 00 = fadd dword [rax]
        assert_fpu_tag(&[0xD8, 0x00], fpu_tag::FADD);
        let result = lifter().lift_insn(&[0xD8, 0x00], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("FADD m32 writes to ST(0)");
        assert_eq!(dst.offset, crate::register_file::ST0);
    }

    #[test]
    fn test_lift_fmul_st0_st1() {
        // D8 C9 = fmul st0, st1
        assert_fpu_tag(&[0xD8, 0xC9], fpu_tag::FMUL);
        let result = lifter().lift_insn(&[0xD8, 0xC9], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs.len(), 3);
        let dst = co.output.expect("FMUL writes to ST(0)");
        assert_eq!(dst.offset, crate::register_file::ST0);
    }

    #[test]
    fn test_lift_fmulp_implicit() {
        // DE C9 = fmulp st1, st0
        assert_fpu_tag(&[0xDE, 0xC9], fpu_tag::FMUL);
        let result = lifter().lift_insn(&[0xDE, 0xC9], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        let dst = co.output.expect("FMULP writes to ST(1)");
        assert_eq!(dst.offset, crate::register_file::ST1);
    }

    #[test]
    fn test_lift_fdiv_st0_st1() {
        // D8 F1 = fdiv st0, st1
        assert_fpu_tag(&[0xD8, 0xF1], fpu_tag::FDIV);
    }

    #[test]
    fn test_lift_fdivr_swaps_operands() {
        // D8 F9 = fdivr st0, st1   (st0 = st1 / st0)
        assert_fpu_tag(&[0xD8, 0xF9], fpu_tag::FDIV);
        let result = lifter().lift_insn(&[0xD8, 0xF9], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(
            co.inputs[1].offset,
            crate::register_file::ST1,
            "FDIVR lhs is st1"
        );
        assert_eq!(
            co.inputs[2].offset,
            crate::register_file::ST0,
            "FDIVR rhs is st0"
        );
    }

    #[test]
    fn test_lift_fcom_st1() {
        // D8 D1 = fcom st1
        assert_fpu_tag(&[0xD8, 0xD1], fpu_tag::FCOM);
        let result = lifter().lift_insn(&[0xD8, 0xD1], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert!(
            co.output.is_none(),
            "FCOM does not produce a varnode output"
        );
        assert_eq!(co.inputs.len(), 3, "FCOM: (tag, st0, st1)");
        assert_eq!(co.inputs[1].offset, crate::register_file::ST0);
        assert_eq!(co.inputs[2].offset, crate::register_file::ST1);
    }

    #[test]
    fn test_lift_fcompp_implicit() {
        // DE D9 = fcompp   (compare ST(0) with ST(1), pop both)
        assert_fpu_tag(&[0xDE, 0xD9], fpu_tag::FCOM);
        let result = lifter().lift_insn(&[0xDE, 0xD9], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs[1].offset, crate::register_file::ST0);
        assert_eq!(co.inputs[2].offset, crate::register_file::ST1);
    }

    #[test]
    fn test_lift_fucom_st1() {
        // DD E1 = fucom st1
        assert_fpu_tag(&[0xDD, 0xE1], fpu_tag::FCOM);
    }

    #[test]
    fn test_lift_fxch_st1() {
        // D9 C9 = fxch st1
        assert_fpu_tag(&[0xD9, 0xC9], fpu_tag::FXCH);
        let result = lifter().lift_insn(&[0xD9, 0xC9], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert!(
            co.output.is_none(),
            "FXCH does not produce a single-varnode output"
        );
        assert_eq!(co.inputs.len(), 3, "FXCH: (tag, st0, st1)");
        assert_eq!(co.inputs[1].offset, crate::register_file::ST0);
        assert_eq!(co.inputs[2].offset, crate::register_file::ST1);
    }

    #[test]
    fn test_lift_fxch_st3() {
        // D9 CB = fxch st3
        assert_fpu_tag(&[0xD9, 0xCB], fpu_tag::FXCH);
        let result = lifter().lift_insn(&[0xD9, 0xCB], 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        assert_eq!(co.inputs[2].offset, crate::register_file::ST3);
    }

    #[test]
    fn test_lift_x87_sequence_no_unimplemented() {
        // Synthetic prologue/body of an x87-using function — every instruction
        // should reach a recognised handler (no Unimplemented residue).
        let stream: &[(&str, &[u8])] = &[
            ("fld dword [rax]", &[0xD9, 0x00]),
            ("fld st(1)", &[0xD9, 0xC1]),
            ("fmul st0,st0", &[0xD8, 0xC8]),
            ("fxch st1", &[0xD9, 0xC9]),
            ("faddp st1,st0", &[0xDE, 0xC1]),
            ("fmulp st1,st0", &[0xDE, 0xC9]),
            ("fsub st0,st1", &[0xD8, 0xE1]),
            ("fdivr st0,st1", &[0xD8, 0xF9]),
            ("fcom st1", &[0xD8, 0xD1]),
            ("fcompp", &[0xDE, 0xD9]),
            ("fstp qword [rax]", &[0xDD, 0x18]),
            ("fst st2", &[0xDD, 0xD2]),
        ];

        let l = lifter();
        for (label, bytes) in stream {
            let lifted = l
                .lift_insn(bytes, 0x1000)
                .unwrap_or_else(|e| panic!("{label}: lift failed: {e:?}"));
            let unimpl = lifted
                .ir_ops
                .iter()
                .filter(|i| i.op == IrOp::Unimplemented)
                .count();
            assert_eq!(unimpl, 0, "{label}: emitted Unimplemented");
            let callother = lifted
                .ir_ops
                .iter()
                .filter(|i| i.op == IrOp::Callother)
                .count();
            assert!(callother > 0, "{label}: no Callother emitted");
        }
    }

    // ── t192 — AVX/AVX2 packed integer ops MVP ─────────────────────────
    //
    // Each AVX2 op is exercised via its canonical VEX byte encoding
    // (verified by round-tripping through iced-x86's `Encoder`). The
    // assertion shape:
    //   * Callother is emitted with the expected `sse_tag::*` constant.
    //   * The destination varnode is the 32-byte YMM register at YMM0.
    //   * No `IrOp::Unimplemented` slips through.
    // A separate sanity test confirms the register file places YMM0..
    // YMM15 at the same base offsets as XMM0..XMM15 with size=32 — the
    // alias layout AVX2 lifting relies on for clobber semantics.

    /// Helper: assert a Callother with `expected_tag` is emitted AND its
    /// output writes a `expected_dst_size`-byte register at YMM0's offset.
    fn assert_avx_lift(bytes: &[u8], expected_tag: u64, expected_dst_size: u8) {
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("AVX instruction should decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("AVX instruction should emit Callother");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(expected_tag, 8),
            "Callother tag mismatch",
        );
        let dst = co.output.expect("AVX instruction should have a YMM dst");
        assert_eq!(
            dst.size, expected_dst_size,
            "AVX destination should be {expected_dst_size}-byte YMM",
        );
        assert_eq!(
            dst.offset,
            crate::register_file::YMM0,
            "AVX destination should be YMM0",
        );
        let unimpl = result
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::Unimplemented)
            .count();
        assert_eq!(unimpl, 0, "AVX lift should not emit Unimplemented");
    }

    /// t192 — VPADDD ymm0, ymm0, ymm1 → `_mm256_add_epi32`.
    #[test]
    fn t192_vpaddd_lift() {
        // c5 fd fe c1 = vpaddd ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC5, 0xFD, 0xFE, 0xC1], sse_tag::VPADDD, 32);
    }

    /// t192 — VPSUBD ymm0, ymm0, ymm1 → `_mm256_sub_epi32`.
    #[test]
    fn t192_vpsubd_lift() {
        // c5 fd fa c1 = vpsubd ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC5, 0xFD, 0xFA, 0xC1], sse_tag::VPSUBD, 32);
    }

    /// t192 — VPMULLD ymm0, ymm0, ymm1 → `_mm256_mullo_epi32`.
    /// Encoded via the 3-byte VEX prefix (`0F 38` map) since PMULLD
    /// lives in the SSSE3 opcode block.
    #[test]
    fn t192_vpmulld_lift() {
        // c4 e2 7d 40 c1 = vpmulld ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC4, 0xE2, 0x7D, 0x40, 0xC1], sse_tag::VPMULLD, 32);
    }

    /// t192 — VPSHUFB ymm0, ymm0, ymm1 → `_mm256_shuffle_epi8`.
    #[test]
    fn t192_vpshufb_lift() {
        // c4 e2 7d 00 c1 = vpshufb ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC4, 0xE2, 0x7D, 0x00, 0xC1], sse_tag::VPSHUFB, 32);
    }

    /// t192 — VPBLENDD ymm0, ymm0, ymm1, 0 → `_mm256_blend_epi32`.
    /// Verifies the 3-source shape (src1, src2, imm8) is preserved on
    /// the Callother inputs after the tag.
    #[test]
    fn t192_vpblendd_lift() {
        // c4 e3 7d 02 c1 00 = vpblendd ymm0, ymm0, ymm1, 0.
        let bytes = &[0xC4, 0xE3, 0x7D, 0x02, 0xC1, 0x00];
        assert_avx_lift(bytes, sse_tag::VPBLENDD, 32);
        let result = lifter().lift_insn(bytes, 0x1000).unwrap();
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap();
        // Inputs: tag, src1 (ymm0), src2 (ymm1), imm8 mask.
        assert_eq!(co.inputs.len(), 4, "VPBLENDD should pass an imm8 mask");
        assert_eq!(
            co.inputs[3],
            unlace_ir::Varnode::constant(0, 1),
            "VPBLENDD mask should round-trip as imm8=0",
        );
    }

    /// t192 — VPERMD ymm0, ymm0, ymm1 → `_mm256_permutevar8x32_epi32`.
    #[test]
    fn t192_vpermd_lift() {
        // c4 e2 7d 36 c1 = vpermd ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC4, 0xE2, 0x7D, 0x36, 0xC1], sse_tag::VPERMD, 32);
    }

    /// t192 — VPAND ymm0, ymm0, ymm1 → `_mm256_and_si256`.
    #[test]
    fn t192_vpand_lift() {
        // c5 fd db c1 = vpand ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC5, 0xFD, 0xDB, 0xC1], sse_tag::VPAND, 32);
    }

    /// t192 — VPOR ymm0, ymm0, ymm1 → `_mm256_or_si256`.
    #[test]
    fn t192_vpor_lift() {
        // c5 fd eb c1 = vpor ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC5, 0xFD, 0xEB, 0xC1], sse_tag::VPOR, 32);
    }

    /// t192 — VPXOR ymm0, ymm0, ymm1 → `_mm256_xor_si256`.
    #[test]
    fn t192_vpxor_lift() {
        // c5 fd ef c1 = vpxor ymm0, ymm0, ymm1.
        assert_avx_lift(&[0xC5, 0xFD, 0xEF, 0xC1], sse_tag::VPXOR, 32);
    }

    /// t192 — YMM register-write sanity: every lifted AVX2 op produces
    /// a Callother whose destination is a 32-byte register at the YMM
    /// base offset, and that base offset matches the XMM alias of the
    /// same lane. The register-file invariant (XMM/YMM share base) is
    /// already covered in `register_file::tests`; here we confirm the
    /// *lifter* preserves it on a representative op.
    #[test]
    fn t192_ymm_register_write_sanity() {
        // c5 fd fe c1 = vpaddd ymm0, ymm0, ymm1 — picks the simplest
        // 2-byte-VEX form to keep the assertion focused on register
        // selection rather than encoding quirks.
        let result = lifter()
            .lift_insn(&[0xC5, 0xFD, 0xFE, 0xC1], 0x1000)
            .expect("vpaddd should decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("vpaddd should emit Callother");
        let dst = co.output.expect("vpaddd should write a register");

        // The destination occupies the full 256-bit YMM0 — its base
        // offset aliases XMM0, distinguished only by size=32.
        assert_eq!(dst.offset, crate::register_file::YMM0);
        assert_eq!(dst.offset, crate::register_file::XMM0);
        assert_eq!(dst.size, 32, "VPADDD writes 256 bits / 32 bytes");

        // Sources are operand 1 and operand 2 (VEX layout — op0 is
        // pure destination, *not* read). Both are 32-byte YMM reads.
        assert_eq!(co.inputs.len(), 3, "VPADDD shape: (tag, src1, src2)");
        let src1 = &co.inputs[1];
        let src2 = &co.inputs[2];
        assert_eq!(src1.size, 32, "src1 should be a YMM register");
        assert_eq!(src2.size, 32, "src2 should be a YMM register");
        assert_eq!(src1.offset, crate::register_file::YMM0);
        assert_eq!(src2.offset, crate::register_file::YMM1);
    }

    // ── t205: AVX-512 EVEX lifting ──────────────────────────────────
    //
    // EVEX byte-string layout for `vp{add,sub,mul}q zmm0, zmm1, zmm2`:
    //   62 F1 F5 48 D4 C2  vpaddq  zmm0, zmm1, zmm2
    //   62 F1 F5 48 FB C2  vpsubq  zmm0, zmm1, zmm2
    //   62 F2 F5 48 40 C2  vpmullq zmm0, zmm1, zmm2
    //
    // P0=F1 selects map=0F + high R/R'/B/X bits, P1=F5 selects W=1,
    // vvvv=~src1=~1=0b1110, pp=01 (66 prefix); P2=48 selects L'L=10
    // (512-bit) and V'=1 (high bit of src1 inverted). VPMULLQ lives in
    // the 0F38 map so its P0 byte is F2.

    /// Helper: assert a Callother with `expected_tag` is emitted AND
    /// its output writes a 64-byte register at ZMM0's offset.
    fn assert_avx512_lift(bytes: &[u8], expected_tag: u64) {
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("EVEX instruction should decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("EVEX instruction should emit Callother");
        assert_eq!(
            co.inputs[0],
            unlace_ir::Varnode::constant(expected_tag, 8),
            "Callother tag mismatch",
        );
        let dst = co.output.expect("EVEX instruction should write a ZMM");
        assert_eq!(dst.size, 64, "AVX-512 destination must be 64 bytes");
        assert_eq!(
            dst.offset,
            crate::register_file::ZMM0,
            "destination should be ZMM0",
        );
        let unimpl = result
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::Unimplemented)
            .count();
        assert_eq!(unimpl, 0, "EVEX lift should not emit Unimplemented");
    }

    /// t205 — VPADDQ zmm0, zmm1, zmm2 → `_mm512_add_epi64`.
    #[test]
    fn t205_vpaddq_zmm_lift() {
        assert_avx512_lift(
            &[0x62, 0xF1, 0xF5, 0x48, 0xD4, 0xC2],
            sse_tag::VPADDQ_512,
        );
    }

    /// t205 — VPSUBQ zmm0, zmm1, zmm2 → `_mm512_sub_epi64`.
    #[test]
    fn t205_vpsubq_zmm_lift() {
        assert_avx512_lift(
            &[0x62, 0xF1, 0xF5, 0x48, 0xFB, 0xC2],
            sse_tag::VPSUBQ_512,
        );
    }

    /// t205 — VPMULLQ zmm0, zmm1, zmm2 → `_mm512_mullo_epi64`.
    #[test]
    fn t205_vpmullq_zmm_lift() {
        assert_avx512_lift(
            &[0x62, 0xF2, 0xF5, 0x48, 0x40, 0xC2],
            sse_tag::VPMULLQ_512,
        );
    }

    /// t205 — ZMM register-write sanity. The Callother destination must
    /// land at the same base offset as XMM0/YMM0, with size 64. Sources
    /// must read 64-byte ZMM varnodes (op0 is pure dst under EVEX, so
    /// the sources come from op1 / op2 just like the AVX2 case).
    #[test]
    fn t205_zmm_register_write_sanity() {
        let result = lifter()
            .lift_insn(&[0x62, 0xF1, 0xF5, 0x48, 0xD4, 0xC2], 0x1000)
            .expect("vpaddq zmm should decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("vpaddq zmm should emit Callother");
        let dst = co.output.expect("vpaddq zmm should write a register");

        assert_eq!(dst.offset, crate::register_file::ZMM0);
        assert_eq!(dst.offset, crate::register_file::XMM0);
        assert_eq!(dst.offset, crate::register_file::YMM0);
        assert_eq!(dst.size, 64, "VPADDQ.512 writes 512 bits / 64 bytes");

        assert_eq!(co.inputs.len(), 3, "VPADDQ.512 shape: (tag, src1, src2)");
        let src1 = &co.inputs[1];
        let src2 = &co.inputs[2];
        assert_eq!(src1.size, 64);
        assert_eq!(src2.size, 64);
        assert_eq!(src1.offset, crate::register_file::ZMM1);
        assert_eq!(src2.offset, crate::register_file::ZMM2);
    }
}
