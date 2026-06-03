//! Xtensa -> IR lifter (MVP).
//!
//! Covers the Xtensa core ISA subset:
//!   ADD/SUB/AND/OR/XOR   -> Int{Add,Sub,And,Or,Xor}
//!   L32I/S32I            -> Load / Store (offset = imm8 << 2)
//!   MOVI                 -> Copy(constant)
//!   CALL0 / CALLX0       -> Call (link in a0)
//!   RET / RETW           -> Return
//!   J                    -> Branch
//!   BEQ / BNE            -> IntEqual    / IntNotequal + Cbranch
//!   BEQZ / BNEZ          -> same, compared against 0
//!   NOP                  -> single effect-free Copy
//!
//! Default instruction width is 24 bits (3 bytes, little-endian) with optional
//! 16-bit narrow encodings (Code Density) detected and reported with `len=2`
//! but otherwise lifted as Unimplemented.

mod decode;
mod lift;

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

const XTENSA_REG_NAMES: [&str; 16] = [
    "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8", "a9", "a10", "a11", "a12", "a13", "a14",
    "a15",
];

/// Public lifter handle.
pub struct XtensaLifter {
    register_file: RegisterFile,
}

impl XtensaLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(XTENSA_REG_NAMES.len() + 1);
        for (i, name) in XTENSA_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg((i as u64) * 8, 4),
            });
        }
        regs.push(RegisterDef {
            name: "PC",
            varnode: Varnode::reg(16 * 8, 4),
        });
        Self {
            register_file: RegisterFile { registers: regs },
        }
    }
}

impl Default for XtensaLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for XtensaLifter {
    fn arch(&self) -> ArchId {
        ArchId::Xtensa
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }
        let decoded = decode::decode(bytes).ok_or(LiftError::ShortBuffer)?;
        let ctx = lift::lift(&decoded, addr);
        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: decoded.len,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::IrOp;

    fn lift_bytes(bytes: &[u8], addr: u64) -> LiftedInsn {
        XtensaLifter::new()
            .lift_insn(bytes, addr)
            .expect("lift should succeed")
    }

    // ---- 1. Register file layout ----

    #[test]
    fn register_file_has_a0_through_a15_and_pc() {
        let l = XtensaLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 17);
        assert_eq!(rf.registers[0].name, "a0");
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[15].name, "a15");
        assert_eq!(rf.registers[16].name, "PC");
        assert_eq!(l.arch(), ArchId::Xtensa);
    }

    // ---- 2. Length detection: 24-bit default, 16-bit narrow ----

    #[test]
    fn narrow_insn_reports_len_two() {
        // op0 = 0xD selects 16-bit narrow.
        let lifted = lift_bytes(&[0x0D, 0x00], 0x1000);
        assert_eq!(lifted.len, 2);
        // Narrow ops fall through to Unimplemented in this MVP.
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn default_insn_is_three_bytes() {
        let lifted = lift_bytes(&[0x0F, 0x20, 0x20], 0x1000); // NOP
        assert_eq!(lifted.len, 3);
    }

    // ---- 3. Arithmetic / bitwise lift to Int* ----

    #[test]
    fn add_sub_and_or_xor_lift_correctly() {
        // ADD a3, a4, a5 (op2=8): byte0=(t<<4)|0=0x50, byte1=s|(r<<4)=4|0x30=0x34, byte2=(op2<<4)=0x80
        let add = lift_bytes(&[(5u8 << 4), 4 | (3 << 4), 0x80], 0x1000);
        assert!(add.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));

        // SUB a3, a4, a5 (op2=0xC)
        let sub = lift_bytes(&[(5u8 << 4), 4 | (3 << 4), 0xC0], 0x1000);
        assert!(sub.ir_ops.iter().any(|i| i.op == IrOp::IntSub));

        // AND a3, a4, a5 (op2=1)
        let and = lift_bytes(&[(5u8 << 4), 4 | (3 << 4), 0x10], 0x1000);
        assert!(and.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));

        // OR a3, a4, a5 (op2=2)
        let or = lift_bytes(&[(5u8 << 4), 4 | (3 << 4), 0x20], 0x1000);
        assert!(or.ir_ops.iter().any(|i| i.op == IrOp::IntOr));

        // XOR a3, a4, a5 (op2=3)
        let xor = lift_bytes(&[(5u8 << 4), 4 | (3 << 4), 0x30], 0x1000);
        assert!(xor.ir_ops.iter().any(|i| i.op == IrOp::IntXor));

        // Result should target a3 — register offset 3*8 = 24.
        let writes_a3 = add
            .ir_ops
            .iter()
            .any(|i| i.output.is_some_and(|v| v.offset == 24 && v.size == 4));
        assert!(writes_a3, "ADD should write to a3");
    }

    // ---- 4. Load / Store / MOVI ----

    #[test]
    fn l32i_s32i_movi_lift_to_load_store_copy() {
        // L32I a2, a1, 4 (imm=1, offset = 1<<2 = 4): r=2, s=1, t=2
        // byte0 = (2<<4)|2 = 0x22, byte1 = 1|(2<<4) = 0x21, byte2 = 1
        let l32 = lift_bytes(&[0x22, 0x21, 0x01], 0x1000);
        assert!(l32.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(l32.ir_ops.iter().any(|i| i.op == IrOp::IntAdd)); // EA computation

        // S32I a2, a1, 4: r=6
        // byte0 = (2<<4)|2 = 0x22, byte1 = 1|(6<<4) = 0x61, byte2 = 1
        let s32 = lift_bytes(&[0x22, 0x61, 0x01], 0x1000);
        assert!(s32.ir_ops.iter().any(|i| i.op == IrOp::Store));
        // STORE has no output.
        assert!(
            s32.ir_ops
                .iter()
                .find(|i| i.op == IrOp::Store)
                .unwrap()
                .output
                .is_none()
        );

        // MOVI a3, 0x42: r=0xA, t=3
        // byte0 = (3<<4)|2 = 0x32, byte1 = 0|(0xA<<4) = 0xA0, byte2 = 0x42
        let movi = lift_bytes(&[0x32, 0xA0, 0x42], 0x1000);
        let copy = movi
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("MOVI should emit Copy");
        // a3 -> offset 24.
        assert_eq!(copy.output.unwrap().offset, 24);
        // Constant input matches.
        assert_eq!(copy.inputs[0].offset, 0x42);
    }

    // ---- 5. Control flow: CALL0 / CALLX0 / RET / J ----

    #[test]
    fn call0_callx0_ret_j_lift_to_call_return_branch() {
        // CALL0 with offset = 0x1234 (le16). byte0=0x05, byte1=0x34, byte2=0x12
        let call0 = lift_bytes(&[0x05, 0x34, 0x12], 0x1000);
        assert!(call0.ir_ops.iter().any(|i| i.op == IrOp::Call));
        // Should also write a0 (link).
        assert!(
            call0
                .ir_ops
                .iter()
                .any(|i| { i.op == IrOp::Copy && i.output.is_some_and(|v| v.offset == 0) })
        );

        // CALLX0 a5: op0=0, op1=0, op2=0, r=0, s=5, t=0xC
        // byte0 = (0xC<<4)|0 = 0xC0, byte1 = 5|(0<<4) = 0x05, byte2 = 0
        let callx = lift_bytes(&[0xC0, 0x05, 0x00], 0x1000);
        assert!(callx.ir_ops.iter().any(|i| i.op == IrOp::Call));

        // RET: t=8, op0=0, others=0 -> byte0=0x80, byte1=0, byte2=0
        let ret = lift_bytes(&[0x80, 0x00, 0x00], 0x1000);
        assert!(ret.ir_ops.iter().any(|i| i.op == IrOp::Return));

        // RETW: t=9 -> byte0=0x90
        let retw = lift_bytes(&[0x90, 0x00, 0x00], 0x1000);
        assert!(retw.ir_ops.iter().any(|i| i.op == IrOp::Return));

        // J with offset 0x0010: byte0=0x06, byte1=0x10, byte2=0x00
        let j = lift_bytes(&[0x06, 0x10, 0x00], 0x1000);
        let br = j
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Branch)
            .expect("J should emit Branch");
        // Target = addr + insn_len + offset = 0x1000 + 3 + 0x10 = 0x1013
        assert_eq!(br.inputs[0].offset, 0x1013);
    }

    // ---- 6. Conditional branches ----

    #[test]
    fn beq_bne_beqz_bnez_lift_to_cbranch() {
        // BEQ a5, a6, 4: r=1, s=5, t=6 -> byte0=(6<<4)|7=0x67, byte1=5|(1<<4)=0x15, byte2=4
        let beq = lift_bytes(&[0x67, 0x15, 0x04], 0x1000);
        assert!(beq.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(beq.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));

        // BNE a5, a6, 4: r=9 -> byte1=5|(9<<4)=0x95
        let bne = lift_bytes(&[0x67, 0x95, 0x04], 0x1000);
        assert!(bne.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(bne.ir_ops.iter().any(|i| i.op == IrOp::IntNotequal));

        // BEQZ a5, 4: r=0xA -> byte1=5|(0xA<<4)=0xA5
        let beqz = lift_bytes(&[0x07, 0xA5, 0x04], 0x1000);
        assert!(beqz.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(beqz.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));

        // BNEZ a5, -8 (offset = 0xF8 as i8 = -8): r=0xB
        let bnez = lift_bytes(&[0x07, 0xB5, 0xF8], 0x1000);
        let cbr = bnez
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Cbranch)
            .expect("BNEZ should emit Cbranch");
        // Target = 0x1000 + 3 + (-8) = 0xFFB
        assert_eq!(cbr.inputs[0].offset, 0xFFB);
    }

    // ---- 7. NOP + short-buffer error path ----

    #[test]
    fn nop_lifts_and_short_buffer_errors() {
        let nop = lift_bytes(&[0x0F, 0x20, 0x20], 0x1000);
        assert_eq!(nop.len, 3);
        assert!(nop.ir_ops.iter().any(|i| i.op == IrOp::Copy));

        let l = XtensaLifter::new();
        assert!(matches!(l.lift_insn(&[], 0), Err(LiftError::ShortBuffer)));
        // 3-byte insn header with only 1 byte
        assert!(matches!(
            l.lift_insn(&[0x00], 0),
            Err(LiftError::ShortBuffer)
        ));
        // 2-byte narrow header with only 1 byte
        assert!(matches!(
            l.lift_insn(&[0x0D], 0),
            Err(LiftError::ShortBuffer)
        ));
    }
}
