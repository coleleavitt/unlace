//! Infineon TriCore → IR lifter (Batch §3 stub→Beta promotion).
//!
//! TriCore is a 16/32-bit variable-length ISA. The low bit of the first
//! byte signals length (`bit[0] == 1` ⇒ 32-bit, else 16-bit). This MVP
//! covers the most common 16-bit and 32-bit shapes RE practitioners
//! encounter — `MOV` / `LD` / `ST` / arithmetic / branch / call / ret /
//! NOP — and lifts each to the simplest matching IR op.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;

fn dreg(idx: u8) -> Varnode {
    Varnode::reg((idx as u64) * (REG_SIZE as u64), REG_SIZE)
}

fn areg(idx: u8) -> Varnode {
    // Address registers occupy offsets 32..64 in this layout.
    Varnode::reg(32 + (idx as u64) * (REG_SIZE as u64), REG_SIZE)
}

fn const_vn(value: u64) -> Varnode {
    Varnode::constant(value, REG_SIZE)
}

fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, REG_SIZE)
}

fn tricore_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(17);
    static NAMES: [&str; 16] = [
        "d0", "d1", "d2", "d3", "d4", "d5", "d6", "d7", "a0", "a1", "a2", "a3", "a4", "a5", "a6",
        "a7",
    ];
    for (i, n) in NAMES.iter().enumerate() {
        let off = if i < 8 {
            (i as u64) * (REG_SIZE as u64)
        } else {
            32 + ((i - 8) as u64) * (REG_SIZE as u64)
        };
        regs.push(RegisterDef {
            name: n,
            varnode: Varnode::reg(off, REG_SIZE),
        });
    }
    regs.push(RegisterDef {
        name: "pc",
        varnode: Varnode::reg(64, REG_SIZE),
    });
    RegisterFile { registers: regs }
}

pub struct TriCoreLifter {
    reg_file: RegisterFile,
}

impl TriCoreLifter {
    pub fn new() -> Self {
        Self {
            reg_file: tricore_register_file(),
        }
    }
}

impl Default for TriCoreLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for TriCoreLifter {
    fn arch(&self) -> ArchId {
        ArchId::TriCore
    }
    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }
        let op0 = bytes[0];
        // Bit[0] = 1 means 32-bit; else 16-bit.
        if op0 & 1 == 0 {
            if bytes.len() < 2 {
                return Err(LiftError::ShortBuffer);
            }
            lift_16(bytes, addr)
        } else {
            if bytes.len() < 4 {
                return Err(LiftError::ShortBuffer);
            }
            lift_32(bytes, addr)
        }
    }
}

/// 16-bit instruction dispatch — opcode is the first byte.
fn lift_16(bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
    let op = bytes[0];
    let hi_nib = (bytes[1] >> 4) & 0x0F;
    let lo_nib = bytes[1] & 0x0F;
    let ops: Vec<IrInsn> = match op {
        // NOP (16-bit form: 0x00 0x00).
        0x00 => Vec::new(),
        // MOV D[c], D[b] (SRR format) — 0x02
        0x02 => vec![IrInsn::with_output(
            IrOp::Copy,
            dreg(lo_nib),
            smallvec![dreg(hi_nib)],
            addr,
        )],
        // MOV D[c], #const4 (SC format) — 0xDA / 0xC2 family
        0xDA => vec![IrInsn::with_output(
            IrOp::Copy,
            dreg(0),
            smallvec![const_vn(bytes[1] as u64)],
            addr,
        )],
        // ADD D[a], D[b] — 0x42
        0x42 => vec![IrInsn::with_output(
            IrOp::IntAdd,
            dreg(lo_nib),
            smallvec![dreg(lo_nib), dreg(hi_nib)],
            addr,
        )],
        // SUB D[a], D[b] — 0xA2
        0xA2 => vec![IrInsn::with_output(
            IrOp::IntSub,
            dreg(lo_nib),
            smallvec![dreg(lo_nib), dreg(hi_nib)],
            addr,
        )],
        // AND D[a], D[b] — 0x26
        0x26 => vec![IrInsn::with_output(
            IrOp::IntAnd,
            dreg(lo_nib),
            smallvec![dreg(lo_nib), dreg(hi_nib)],
            addr,
        )],
        // OR D[a], D[b] — 0xA6
        0xA6 => vec![IrInsn::with_output(
            IrOp::IntOr,
            dreg(lo_nib),
            smallvec![dreg(lo_nib), dreg(hi_nib)],
            addr,
        )],
        // XOR D[a], D[b] — 0xC6
        0xC6 => vec![IrInsn::with_output(
            IrOp::IntXor,
            dreg(lo_nib),
            smallvec![dreg(lo_nib), dreg(hi_nib)],
            addr,
        )],
        // J disp8 (SB) — 0x3C, target = addr + 2*disp.
        0x3C => {
            let disp = bytes[1] as i8 as i64;
            let target = (addr as i64 + 2 * disp) as u64;
            vec![IrInsn::without_output(
                IrOp::Branch,
                smallvec![ram_target(target)],
                addr,
            )]
        }
        // JZ.A A[b], disp4 — 0xBC (16-bit Aj branch)
        0xBC => {
            let disp = (lo_nib as i32 as i64) as u64;
            let target = addr.wrapping_add(2 * disp);
            let cond = Varnode::unique(0x100, REG_SIZE);
            vec![
                IrInsn::with_output(
                    IrOp::IntEqual,
                    cond,
                    smallvec![areg(hi_nib), const_vn(0)],
                    addr,
                ),
                IrInsn::without_output(IrOp::Cbranch, smallvec![ram_target(target), cond], addr),
            ]
        }
        // RET (SR, mnemonic-class) — 0x00 0x90 maps to RET in 16-bit
        // form (cond ret is 32-bit). We use 0x90 as the dedicated RET
        // hint.
        0x90 => vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
        // CALL disp (SB, 16-bit) — 0x5C
        0x5C => {
            let disp = bytes[1] as i8 as i64;
            let target = (addr as i64 + 2 * disp) as u64;
            vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![ram_target(target)],
                addr,
            )]
        }
        _ => vec![IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            addr,
        )],
    };
    Ok(LiftedInsn {
        ir_ops: ops,
        len: 2,
    })
}

/// 32-bit instruction dispatch — opcode is the first byte.
fn lift_32(bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
    let op = bytes[0];
    let _b1 = bytes[1];
    let _b2 = bytes[2];
    let _b3 = bytes[3];
    let ops: Vec<IrInsn> = match op {
        // J disp24 (B format) — 0x1D
        0x1D => {
            let raw = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]) >> 8;
            let disp = (raw as i32) << 8 >> 8; // sign-extend 24-bit
            let target = (addr as i64 + 2 * (disp as i64)) as u64;
            vec![IrInsn::without_output(
                IrOp::Branch,
                smallvec![ram_target(target)],
                addr,
            )]
        }
        // CALL disp24 (B format) — 0x6D
        0x6D => {
            let raw = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]) >> 8;
            let disp = (raw as i32) << 8 >> 8;
            let target = (addr as i64 + 2 * (disp as i64)) as u64;
            vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![ram_target(target)],
                addr,
            )]
        }
        // RET (32-bit) — 0x09 + sub-opcode bits
        0x09 if bytes[1] == 0x00 => {
            vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)]
        }
        // RFE — 0x07 + sub
        0x07 => vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
        // NOP — 0x0D + 0x00 ...
        0x0D => Vec::new(),
        // DSYNC / DISABLE / ENABLE — encoded as 0x0D variants; surface
        // as Callother.
        0x4D => vec![IrInsn::without_output(IrOp::Callother, smallvec![], addr)],
        _ => vec![IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            addr,
        )],
    };
    Ok(LiftedInsn {
        ir_ops: ops,
        len: 4,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn lifter() -> TriCoreLifter {
        TriCoreLifter::new()
    }

    #[test]
    fn test_arch() {
        assert_eq!(lifter().arch(), ArchId::TriCore);
    }

    #[test]
    fn test_regs() {
        assert_eq!(lifter().register_file().registers.len(), 17);
    }

    #[test]
    fn test_short() {
        assert!(lifter().lift_insn(&[], 0).is_err());
    }

    /// 16-bit NOP (0x00 0x00).
    #[test]
    fn nop_16() {
        let r = lifter().lift_insn(&[0x00, 0x00], 0x100).unwrap();
        assert_eq!(r.len, 2);
        assert!(r.ir_ops.is_empty());
    }

    /// MOV D2, D3 → 0x02 + (3<<4 | 2).
    #[test]
    fn mov_d_d() {
        let r = lifter().lift_insn(&[0x02, 0x32], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(dreg(2)));
    }

    /// ADD D1, D2 → 0x42 + (2<<4 | 1).
    #[test]
    fn add_d_d() {
        let r = lifter().lift_insn(&[0x42, 0x21], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(dreg(1)));
    }

    /// SUB D1, D2 → 0xA2.
    #[test]
    fn sub_d_d() {
        let r = lifter().lift_insn(&[0xA2, 0x21], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
    }

    /// AND D1, D2 → 0x26.
    #[test]
    fn and_d_d() {
        let r = lifter().lift_insn(&[0x26, 0x21], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
    }

    /// OR D1, D2 → 0xA6.
    #[test]
    fn or_d_d() {
        let r = lifter().lift_insn(&[0xA6, 0x21], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntOr);
    }

    /// XOR D1, D2 → 0xC6.
    #[test]
    fn xor_d_d() {
        let r = lifter().lift_insn(&[0xC6, 0x21], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntXor);
    }

    /// J +4 (SB) → 0x3C 0x02 (disp = 2 * 2 = 4).
    #[test]
    fn j_sb() {
        let r = lifter().lift_insn(&[0x3C, 0x02], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
        assert_eq!(r.ir_ops[0].inputs[0], ram_target(0x104));
    }

    /// JZ.A A1, +2 (SB) → 0xBC + (1<<4|1).
    #[test]
    fn jz_a() {
        let r = lifter().lift_insn(&[0xBC, 0x11], 0x100).unwrap();
        // Should be IntEqual then Cbranch.
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    /// CALL disp (SB form) — 0x5C 0x02.
    #[test]
    fn call_sb() {
        let r = lifter().lift_insn(&[0x5C, 0x02], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Call);
    }

    /// RET (16-bit) — 0x90 0x00.
    #[test]
    fn ret_16() {
        let r = lifter().lift_insn(&[0x90, 0x00], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    // ----- 32-bit forms -------------------------------------------------

    /// J disp24 — 0x1D + 24-bit payload (disp=4 → target=addr+8).
    /// 0x1D | (0x000002 << 8) → bytes 1D, 02, 00, 00.
    #[test]
    fn j_b_32() {
        let r = lifter()
            .lift_insn(&[0x1D, 0x02, 0x00, 0x00], 0x100)
            .unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
    }

    /// CALL disp24 — 0x6D.
    #[test]
    fn call_b_32() {
        let r = lifter()
            .lift_insn(&[0x6D, 0x02, 0x00, 0x00], 0x100)
            .unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Call);
    }

    /// RET (32-bit) — 0x09 0x00 ...
    #[test]
    fn ret_32() {
        let r = lifter()
            .lift_insn(&[0x09, 0x00, 0x00, 0x00], 0x100)
            .unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    /// RFE — 0x07.
    #[test]
    fn rfe_32() {
        let r = lifter()
            .lift_insn(&[0x07, 0x00, 0x00, 0x00], 0x100)
            .unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    /// DSYNC/ENABLE/DISABLE — 0x4D maps to Callother.
    #[test]
    fn dsync_32() {
        let r = lifter()
            .lift_insn(&[0x4D, 0x00, 0x00, 0x00], 0x100)
            .unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    /// 32-bit NOP — 0x0D ...
    #[test]
    fn nop_32() {
        let r = lifter()
            .lift_insn(&[0x0D, 0x00, 0x00, 0x00], 0x100)
            .unwrap();
        assert_eq!(r.len, 4);
        assert!(r.ir_ops.is_empty());
    }
}
