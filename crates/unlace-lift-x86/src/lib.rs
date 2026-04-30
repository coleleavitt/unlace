//! x86 / x86-64 → IR lifter (via iced-x86).

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
        let result = lifter().lift_insn(&[0x48, 0x89, 0xd8], 0x1000).expect("should decode");
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
    fn test_add_reg_reg() {
        // 48 01 d8 = add rax, rbx
        let result = lifter().lift_insn(&[0x48, 0x01, 0xd8], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        // Should also emit flag computations
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntCarry));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntScarry));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn test_sub_reg_reg() {
        // 48 29 d8 = sub rax, rbx
        let result = lifter().lift_insn(&[0x48, 0x29, 0xd8], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSborrow));
    }

    #[test]
    fn test_cmp() {
        // 48 39 d8 = cmp rax, rbx
        let result = lifter().lift_insn(&[0x48, 0x39, 0xd8], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        // CMP should not write to a register destination
        assert!(result
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::Copy)
            .all(|i| {
                i.output
                    .map_or(true, |o| o.space == unlace_ir::SpaceId::Register)
            }));
    }

    #[test]
    fn test_test() {
        // 48 85 c0 = test rax, rax
        let result = lifter().lift_insn(&[0x48, 0x85, 0xc0], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_and() {
        // 48 21 d8 = and rax, rbx
        let result = lifter().lift_insn(&[0x48, 0x21, 0xd8], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_or() {
        // 48 09 d8 = or rax, rbx
        let result = lifter().lift_insn(&[0x48, 0x09, 0xd8], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    #[test]
    fn test_xor() {
        // 48 31 c0 = xor rax, rax
        let result = lifter().lift_insn(&[0x48, 0x31, 0xc0], 0x1000).expect("should decode");
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
        let result = lifter().lift_insn(&[0x48, 0xf7, 0xd0], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntNegate));
    }

    #[test]
    fn test_neg() {
        // 48 f7 d8 = neg rax
        let result = lifter().lift_insn(&[0x48, 0xf7, 0xd8], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Int2comp));
    }

    #[test]
    fn test_jmp() {
        // eb 10 = jmp short +0x10 (relative to next insn at 0x1002 -> target 0x1012)
        let result = lifter().lift_insn(&[0xeb, 0x10], 0x1000).expect("should decode");
        assert_eq!(result.len, 2);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branch));
    }

    #[test]
    fn test_je() {
        // 74 10 = je short +0x10 (target 0x1012)
        let result = lifter().lift_insn(&[0x74, 0x10], 0x1000).expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    #[test]
    fn test_jne() {
        // 75 10 = jne short +0x10
        let result = lifter().lift_insn(&[0x75, 0x10], 0x1000).expect("should decode");
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
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy || i.op == IrOp::IntAdd));
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
        assert!(result
            .ir_ops
            .iter()
            .any(|i| matches!(i.op, IrOp::Unimplemented)));
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
        let result = lifter().lift_insn(&[0x48, 0xf7, 0xf3], 0x1000).expect("should decode");
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
            &[0xcc],             // int3
            &[0xf4],             // hlt
            &[0x0f, 0x05],      // syscall
            &[0x0f, 0x0b],      // ud2
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
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x1, 8), "tag should be MEMCPY=0x1");
    }

    #[test]
    fn test_rep_movsq() {
        // F3 48 A5 = REP MOVSQ
        let result = lifter()
            .lift_insn(&[0xf3, 0x48, 0xa5], 0x1000)
            .expect("should decode REP MOVSQ");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x1, 8));
        assert_eq!(co.inputs[4], unlace_ir::Varnode::constant(8, 8), "elem_size should be 8");
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
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x2, 8), "tag should be MEMSET=0x2");
    }

    #[test]
    fn test_rep_stosd() {
        // F3 AB = REP STOSD
        let result = lifter()
            .lift_insn(&[0xf3, 0xab], 0x1000)
            .expect("should decode REP STOSD");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callother));
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x2, 8));
        assert_eq!(co.inputs[4], unlace_ir::Varnode::constant(4, 8), "elem_size should be 4");
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
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(0x3, 8), "tag should be MEMCMP=0x3");
        assert!(co.output.is_some(), "CMPS Callother should produce a result");
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
            result.ir_ops.iter().any(|i| {
                i.op == IrOp::Copy && i.output == Some(rcx) && i.inputs[0] == zero
            }),
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
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
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
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
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
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
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
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert_eq!(co.inputs[1], co.inputs[2], "pxor xmm0,xmm0 sources should be equal");
    }

    #[test]
    fn test_lift_sse_paddq() {
        // 66 0F D4 D3 = paddq xmm2, xmm3
        assert_callother_tag(&[0x66, 0x0F, 0xD4, 0xD3], sse_tag::PADDQ);
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0xD4, 0xD3], 0x1000)
            .unwrap();
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
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

    #[test]
    fn test_lift_sse_movdqa_store() {
        // 66 0F 7F 07 = movdqa [rdi], xmm0
        let result = lifter()
            .lift_insn(&[0x66, 0x0F, 0x7F, 0x07], 0x1000)
            .expect("should decode movdqa store");
        let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert!(co.output.is_none(), "store form should have no output");
        assert_eq!(co.inputs[0], unlace_ir::Varnode::constant(sse_tag::MOVDQA, 8));
    }
}

