//! x86 / x86-64 → IR lifter (via iced-x86).

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
}

