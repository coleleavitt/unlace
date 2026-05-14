//! Custom decoder for a subset of the Renesas RX 32-bit ISA.
//!
//! The RX family ISA is little-endian and uses byte-stream variable-length
//! instructions from 1 to 15 bytes. This MVP decoder recognises the core
//! integer / control-flow opcodes used by lifter tests.

/// A decoded RX instruction.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RxInsn {
    pub op: RxOp,
    pub len: usize,
}

/// RX operations supported by this MVP lifter.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RxOp {
    Nop,
    Rts,
    MovImm4L { dst: u8, imm: u32 },
    MovRegL { dst: u8, src: u8 },
    MovLoadL { dst: u8, src: u8 },
    MovStoreL { dst: u8, src: u8 },
    Add { dst: u8, src: u8 },
    Sub { dst: u8, src: u8 },
    And { dst: u8, src: u8 },
    Or { dst: u8, src: u8 },
    Xor { dst: u8, src: u8 },
    Mul { dst: u8, src: u8 },
    Cmp { src1: u8, src2: u8 },
    BraB { disp: i32 },
    BsrW { disp: i32 },
    BcondB { cond: BranchCond, disp: i32 },
    Unknown,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BranchCond {
    Eq,
    Ne,
    Ge,
    Le,
}

pub fn decode(bytes: &[u8]) -> Option<RxInsn> {
    let b0 = *bytes.first()?;

    match b0 {
        0x03 => {
            return Some(RxInsn {
                op: RxOp::Nop,
                len: 1,
            });
        }
        0x02 => {
            return Some(RxInsn {
                op: RxOp::Rts,
                len: 1,
            });
        }
        _ => {}
    }

    if matches!(b0, 0x20 | 0x21 | 0x28 | 0x2B) {
        if bytes.len() < 2 {
            return None;
        }
        let disp = bytes[1] as i8 as i32;
        let cond = match b0 {
            0x20 => BranchCond::Eq,
            0x21 => BranchCond::Ne,
            0x28 => BranchCond::Ge,
            0x2B => BranchCond::Le,
            _ => unreachable!(),
        };
        return Some(RxInsn {
            op: RxOp::BcondB { cond, disp },
            len: 2,
        });
    }

    if b0 == 0x2E {
        if bytes.len() < 2 {
            return None;
        }
        let disp = bytes[1] as i8 as i32;
        return Some(RxInsn {
            op: RxOp::BraB { disp },
            len: 2,
        });
    }

    if b0 == 0x39 {
        if bytes.len() < 3 {
            return None;
        }
        let disp = i16::from_le_bytes([bytes[1], bytes[2]]) as i32;
        return Some(RxInsn {
            op: RxOp::BsrW { disp },
            len: 3,
        });
    }

    let two_byte_regreg: &[(u8, fn(u8, u8) -> RxOp)] = &[
        (0xCF, |src, dst| RxOp::MovRegL { dst, src }),
        (0xCC, |src, dst| RxOp::MovLoadL { dst, src }),
        (0xCE, |src, dst| RxOp::MovStoreL { dst, src }),
        (0x4B, |src, dst| RxOp::Add { dst, src }),
        (0x43, |src, dst| RxOp::Sub { dst, src }),
        (0x53, |src, dst| RxOp::And { dst, src }),
        (0x55, |src, dst| RxOp::Or { dst, src }),
        (0x4F, |src, dst| RxOp::Mul { dst, src }),
        (0x47, |src, dst| RxOp::Cmp {
            src1: src,
            src2: dst,
        }),
    ];
    for &(op, ctor) in two_byte_regreg {
        if b0 == op {
            if bytes.len() < 2 {
                return None;
            }
            let b1 = bytes[1];
            let src = (b1 >> 4) & 0x0F;
            let dst = b1 & 0x0F;
            return Some(RxInsn {
                op: ctor(src, dst),
                len: 2,
            });
        }
    }

    if b0 == 0x66 {
        if bytes.len() < 2 {
            return None;
        }
        let b1 = bytes[1];
        let imm = ((b1 >> 4) & 0x0F) as u32;
        let dst = b1 & 0x0F;
        return Some(RxInsn {
            op: RxOp::MovImm4L { dst, imm },
            len: 2,
        });
    }

    if b0 == 0xFC {
        if bytes.len() < 3 {
            return None;
        }
        if bytes[1] == 0x33 {
            let b2 = bytes[2];
            let src = (b2 >> 4) & 0x0F;
            let dst = b2 & 0x0F;
            return Some(RxInsn {
                op: RxOp::Xor { dst, src },
                len: 3,
            });
        }
        return Some(RxInsn {
            op: RxOp::Unknown,
            len: 1,
        });
    }

    Some(RxInsn {
        op: RxOp::Unknown,
        len: 1,
    })
        0x03 => return Some(RxInsn { op: RxOp::Nop, len: 1 }),
        0x02 => return Some(RxInsn { op: RxOp::Rts, len: 1 }),
        _ => {}
    }

    if matches!(b0, 0x20 | 0x21 | 0x28 | 0x2B) {
        if bytes.len() < 2 {
            return None;
        }
        let disp = bytes[1] as i8 as i32;
        let cond = match b0 {
            0x20 => BranchCond::Eq,
            0x21 => BranchCond::Ne,
            0x28 => BranchCond::Ge,
            0x2B => BranchCond::Le,
            _ => unreachable!(),
        };
        return Some(RxInsn { op: RxOp::BcondB { cond, disp }, len: 2 });
    }

    if b0 == 0x2E {
        if bytes.len() < 2 {
            return None;
        }
        let disp = bytes[1] as i8 as i32;
        return Some(RxInsn { op: RxOp::BraB { disp }, len: 2 });
    }

    if b0 == 0x39 {
        if bytes.len() < 3 {
            return None;
        }
        let disp = i16::from_le_bytes([bytes[1], bytes[2]]) as i32;
        return Some(RxInsn { op: RxOp::BsrW { disp }, len: 3 });
    }

    let two_byte_regreg: &[(u8, fn(u8, u8) -> RxOp)] = &[
        (0xCF, |src, dst| RxOp::MovRegL { dst, src }),
        (0xCC, |src, dst| RxOp::MovLoadL { dst, src }),
        (0xCE, |src, dst| RxOp::MovStoreL { dst, src }),
        (0x4B, |src, dst| RxOp::Add { dst, src }),
        (0x43, |src, dst| RxOp::Sub { dst, src }),
        (0x53, |src, dst| RxOp::And { dst, src }),
        (0x55, |src, dst| RxOp::Or { dst, src }),
        (0x4F, |src, dst| RxOp::Mul { dst, src }),
        (0x47, |src, dst| RxOp::Cmp { src1: src, src2: dst }),
    ];
    for &(op, ctor) in two_byte_regreg {
        if b0 == op {
            if bytes.len() < 2 {
                return None;
            }
            let b1 = bytes[1];
            let src = (b1 >> 4) & 0x0F;
            let dst = b1 & 0x0F;
            return Some(RxInsn { op: ctor(src, dst), len: 2 });
        }
    }

    if b0 == 0x66 {
        if bytes.len() < 2 {
            return None;
        }
        let b1 = bytes[1];
        let imm = ((b1 >> 4) & 0x0F) as u32;
        let dst = b1 & 0x0F;
        return Some(RxInsn { op: RxOp::MovImm4L { dst, imm }, len: 2 });
    }

    if b0 == 0xFC {
        if bytes.len() < 3 {
            return None;
        }
        if bytes[1] == 0x33 {
            let b2 = bytes[2];
            let src = (b2 >> 4) & 0x0F;
            let dst = b2 & 0x0F;
            return Some(RxInsn { op: RxOp::Xor { dst, src }, len: 3 });
        }
        return Some(RxInsn { op: RxOp::Unknown, len: 1 });
    }

    Some(RxInsn { op: RxOp::Unknown, len: 1 })
}
