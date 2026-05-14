//! Motorola 68000 / 68020 / ColdFire -> unlace IR lifter.
//!
//! This crate implements a pragmatic core decoder/lifter for the common integer
//! and control-flow subset shared by classic M68k and ColdFire: data/address
//! registers, big-endian variable-length opcodes, common effective-address
//! forms, MOVE/MOVEQ/LEA, integer ALU, quick arithmetic, branches, calls, jumps,
//! link/unlink, stack push/pop idioms, and basic 020/ColdFire extensions such as
//! 32-bit branch displacements and long absolute addressing.

use smallvec::SmallVec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const D_BASE: u64 = 0;
const A_BASE: u64 = 32;
const REG_PC: u64 = 64;
const REG_SR: u64 = 68;
const REG_X: u64 = 72;
const REG_N: u64 = 73;
const REG_Z: u64 = 74;
const REG_V: u64 = 75;
const REG_C: u64 = 76;
const UNIQUE_BASE: u64 = 0x6800_0000;

#[inline]
fn dreg(n: u8, size: u8) -> Varnode {
    Varnode::reg(D_BASE + (n as u64) * 4, size)
}
#[inline]
fn areg(n: u8) -> Varnode {
    Varnode::reg(A_BASE + (n as u64) * 4, 4)
}
#[inline]
fn reg(off: u64, size: u8) -> Varnode {
    Varnode::reg(off, size)
}
#[inline]
fn cst(v: u64, size: u8) -> Varnode {
    Varnode::constant(v, size)
}
#[inline]
fn target(v: u64) -> Varnode {
    Varnode::constant(v, 4)
}
#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 16, size)
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Size {
    Byte,
    Word,
    Long,
}
impl Size {
    fn bytes(self) -> u8 {
        match self {
            Size::Byte => 1,
            Size::Word => 2,
            Size::Long => 4,
        }
    }
    fn from_move(bits: u16) -> Option<Self> {
        match bits {
            1 => Some(Self::Byte),
            3 => Some(Self::Word),
            2 => Some(Self::Long),
            _ => None,
        }
    }
    fn from_alu(bits: u16) -> Option<Self> {
        match bits {
            0 => Some(Self::Byte),
            1 => Some(Self::Word),
            2 => Some(Self::Long),
            _ => None,
        }
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum EaLoc {
    Data(u8),
    Addr(u8),
    Mem(Varnode),
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct Ea {
    loc: EaLoc,
    value: Varnode,
}

struct Reader<'a> {
    bytes: &'a [u8],
    pos: usize,
}
impl<'a> Reader<'a> {
    fn new(bytes: &'a [u8]) -> Self {
        Self { bytes, pos: 0 }
    }
    fn u16(&mut self) -> Result<u16, LiftError> {
        if self.pos + 2 > self.bytes.len() {
            return Err(LiftError::ShortBuffer);
        }
        let v = u16::from_be_bytes([self.bytes[self.pos], self.bytes[self.pos + 1]]);
        self.pos += 2;
        Ok(v)
    }
    fn i16(&mut self) -> Result<i16, LiftError> {
        Ok(self.u16()? as i16)
    }
    fn u32(&mut self) -> Result<u32, LiftError> {
        if self.pos + 4 > self.bytes.len() {
            return Err(LiftError::ShortBuffer);
        }
        let v = u32::from_be_bytes([
            self.bytes[self.pos],
            self.bytes[self.pos + 1],
            self.bytes[self.pos + 2],
            self.bytes[self.pos + 3],
        ]);
        self.pos += 4;
        Ok(v)
    }
    fn len(&self) -> usize {
        self.pos
    }
}

#[derive(Default)]
struct Ctx {
    ops: Vec<IrInsn>,
    next_tmp: u64,
}
impl Ctx {
    fn t(&mut self, size: u8) -> Varnode {
        let t = tmp(self.next_tmp, size);
        self.next_tmp += 1;
        t
    }
    fn push(&mut self, insn: IrInsn) {
        self.ops.push(insn);
    }
    fn unary(&mut self, op: IrOp, out: Varnode, a: Varnode, addr: u64) {
        self.push(IrInsn::with_output(
            op,
            out,
            SmallVec::from_slice(&[a]),
            addr,
        ));
    }
    fn bin(&mut self, op: IrOp, out: Varnode, a: Varnode, b: Varnode, addr: u64) {
        self.push(IrInsn::with_output(
            op,
            out,
            SmallVec::from_slice(&[a, b]),
            addr,
        ));
    }
    fn noout(&mut self, op: IrOp, a: &[Varnode], addr: u64) {
        self.push(IrInsn::without_output(op, SmallVec::from_slice(a), addr));
    }
}

fn sext(v: u64, bits: u32) -> u64 {
    (((v << (64 - bits)) as i64) >> (64 - bits)) as u64
}
fn quick(op: u16) -> u64 {
    let n = ((op >> 9) & 7) as u64;
    if n == 0 { 8 } else { n }
}

fn ea_addr(
    mode: u16,
    r: u16,
    size: Size,
    rd: &mut Reader<'_>,
    ctx: &mut Ctx,
    addr: u64,
) -> Result<Ea, LiftError> {
    let sz = size.bytes();
    match mode {
        0 => Ok(Ea {
            loc: EaLoc::Data(r as u8),
            value: dreg(r as u8, sz),
        }),
        1 if size != Size::Byte => Ok(Ea {
            loc: EaLoc::Addr(r as u8),
            value: areg(r as u8),
        }),
        2 => {
            let a = areg(r as u8);
            let out = ctx.t(sz);
            ctx.unary(IrOp::Load, out, a, addr);
            Ok(Ea {
                loc: EaLoc::Mem(a),
                value: out,
            })
        }
        3 => {
            let a = areg(r as u8);
            let out = ctx.t(sz);
            ctx.unary(IrOp::Load, out, a, addr);
            ctx.bin(IrOp::IntAdd, a, a, cst(sz as u64, 4), addr);
            Ok(Ea {
                loc: EaLoc::Mem(a),
                value: out,
            })
        }
        4 => {
            let a = areg(r as u8);
            ctx.bin(IrOp::IntSub, a, a, cst(sz as u64, 4), addr);
            let out = ctx.t(sz);
            ctx.unary(IrOp::Load, out, a, addr);
            Ok(Ea {
                loc: EaLoc::Mem(a),
                value: out,
            })
        }
        5 => {
            let disp = rd.i16()? as i64 as u64;
            let a = areg(r as u8);
            let p = ctx.t(4);
            ctx.bin(IrOp::IntAdd, p, a, cst(disp, 4), addr);
            let out = ctx.t(sz);
            ctx.unary(IrOp::Load, out, p, addr);
            Ok(Ea {
                loc: EaLoc::Mem(p),
                value: out,
            })
        }
        6 => {
            let ext = rd.u16()?;
            let ix_reg = if (ext & 0x8000) == 0 {
                dreg(
                    ((ext >> 12) & 7) as u8,
                    if ext & 0x0800 != 0 { 4 } else { 2 },
                )
            } else {
                areg(((ext >> 12) & 7) as u8)
            };
            let disp = sext((ext & 0xff) as u64, 8);
            let p1 = ctx.t(4);
            let p2 = ctx.t(4);
            ctx.bin(IrOp::IntAdd, p1, areg(r as u8), ix_reg, addr);
            ctx.bin(IrOp::IntAdd, p2, p1, cst(disp, 4), addr);
            let out = ctx.t(sz);
            ctx.unary(IrOp::Load, out, p2, addr);
            Ok(Ea {
                loc: EaLoc::Mem(p2),
                value: out,
            })
        }
        7 => match r {
            0 => {
                let a = rd.u16()? as i16 as i64 as u64;
                let p = cst(a, 4);
                let out = ctx.t(sz);
                ctx.unary(IrOp::Load, out, p, addr);
                Ok(Ea {
                    loc: EaLoc::Mem(p),
                    value: out,
                })
            }
            1 => {
                let a = rd.u32()? as u64;
                let p = cst(a, 4);
                let out = ctx.t(sz);
                ctx.unary(IrOp::Load, out, p, addr);
                Ok(Ea {
                    loc: EaLoc::Mem(p),
                    value: out,
                })
            }
            2 => {
                let disp = rd.i16()? as i64;
                let p = cst((addr as i64 + 2 + disp) as u64, 4);
                let out = ctx.t(sz);
                ctx.unary(IrOp::Load, out, p, addr);
                Ok(Ea {
                    loc: EaLoc::Mem(p),
                    value: out,
                })
            }
            4 => {
                let v = match size {
                    Size::Byte => (rd.u16()? & 0xff) as u64,
                    Size::Word => rd.u16()? as u64,
                    Size::Long => rd.u32()? as u64,
                };
                Ok(Ea {
                    loc: EaLoc::Mem(cst(0, 4)),
                    value: cst(v, sz),
                })
            }
            _ => Err(LiftError::Unsupported),
        },
        _ => Err(LiftError::Unsupported),
    }
}

fn write_ea(ea: Ea, val: Varnode, size: Size, ctx: &mut Ctx, addr: u64) -> Result<(), LiftError> {
    match ea.loc {
        EaLoc::Data(n) => ctx.unary(IrOp::Copy, dreg(n, size.bytes()), val, addr),
        EaLoc::Addr(n) => ctx.unary(IrOp::Copy, areg(n), val, addr),
        EaLoc::Mem(p) => ctx.noout(IrOp::Store, &[p, val], addr),
    }
    Ok(())
}

fn flags_result(ctx: &mut Ctx, result: Varnode, addr: u64) {
    ctx.bin(
        IrOp::IntEqual,
        reg(REG_Z, 1),
        result,
        cst(0, result.size),
        addr,
    );
    let sign_bit = cst((result.size as u64 * 8).saturating_sub(1), result.size);
    let shifted = ctx.t(result.size);
    ctx.bin(IrOp::IntRight, shifted, result, sign_bit, addr);
    ctx.bin(
        IrOp::IntAnd,
        reg(REG_N, 1),
        shifted,
        cst(1, result.size),
        addr,
    );
}

fn lift_branch(
    op: u16,
    rd: &mut Reader<'_>,
    addr: u64,
    ctx: &mut Ctx,
) -> Result<LiftedInsn, LiftError> {
    let cc = ((op >> 8) & 0xf) as u8;
    let lo = (op & 0xff) as u8;
    let (disp, extra): (i64, usize) = match lo {
        0 => (rd.i16()? as i64, 2),
        0xff => (rd.u32()? as i32 as i64, 4),
        x => (x as i8 as i64, 0),
    };
    let len = 2 + extra;
    let dst = target((addr as i64 + len as i64 + disp) as u64);
    match cc {
        0 => ctx.noout(IrOp::Branch, &[dst], addr),
        1 => ctx.noout(IrOp::Call, &[dst], addr),
        _ => ctx.noout(IrOp::Cbranch, &[dst, cst(cc as u64, 1)], addr),
    }
    Ok(LiftedInsn {
        ir_ops: std::mem::take(&mut ctx.ops),
        len,
    })
}

/// M68k/68020/ColdFire architecture lifter.
pub struct M68kLifter {
    register_file: RegisterFile,
}
impl M68kLifter {
    pub fn new() -> Self {
        let mut registers = Vec::new();
        for i in 0..8 {
            registers.push(RegisterDef {
                name: Box::leak(format!("D{i}").into_boxed_str()),
                varnode: dreg(i, 4),
            });
        }
        for i in 0..8 {
            registers.push(RegisterDef {
                name: Box::leak(format!("A{i}").into_boxed_str()),
                varnode: areg(i),
            });
        }
        registers.extend([
            RegisterDef {
                name: "SP",
                varnode: areg(7),
            },
            RegisterDef {
                name: "PC",
                varnode: reg(REG_PC, 4),
            },
            RegisterDef {
                name: "SR",
                varnode: reg(REG_SR, 2),
            },
            RegisterDef {
                name: "X",
                varnode: reg(REG_X, 1),
            },
            RegisterDef {
                name: "N",
                varnode: reg(REG_N, 1),
            },
            RegisterDef {
                name: "Z",
                varnode: reg(REG_Z, 1),
            },
            RegisterDef {
                name: "V",
                varnode: reg(REG_V, 1),
            },
            RegisterDef {
                name: "C",
                varnode: reg(REG_C, 1),
            },
        ]);
        Self {
            register_file: RegisterFile { registers },
        }
    }

    fn lift_move(
        &self,
        op: u16,
        rd: &mut Reader<'_>,
        addr: u64,
        ctx: &mut Ctx,
    ) -> Result<LiftedInsn, LiftError> {
        let size = Size::from_move((op >> 12) & 3).ok_or(LiftError::Unsupported)?;
        let dst_reg = (op >> 9) & 7;
        let dst_mode = (op >> 6) & 7;
        let src_mode = (op >> 3) & 7;
        let src_reg = op & 7;
        let src = ea_addr(src_mode, src_reg, size, rd, ctx, addr)?;
        let dst = match (dst_mode, dst_reg) {
            (0, r) => Ea {
                loc: EaLoc::Data(r as u8),
                value: dreg(r as u8, size.bytes()),
            },
            (1, r) if size != Size::Byte => Ea {
                loc: EaLoc::Addr(r as u8),
                value: areg(r as u8),
            },
            _ => ea_addr(dst_mode, dst_reg, size, rd, ctx, addr)?,
        };
        write_ea(dst, src.value, size, ctx, addr)?;
        flags_result(ctx, src.value, addr);
        Ok(LiftedInsn {
            ir_ops: std::mem::take(&mut ctx.ops),
            len: rd.len(),
        })
    }

    fn lift_alu_dn_ea(
        &self,
        op: u16,
        ir: IrOp,
        rd: &mut Reader<'_>,
        addr: u64,
        ctx: &mut Ctx,
    ) -> Result<LiftedInsn, LiftError> {
        let dn = ((op >> 9) & 7) as u8;
        let dir_to_ea = (op & 0x100) != 0;
        let size = Size::from_alu((op >> 6) & 3).ok_or(LiftError::Unsupported)?;
        let ea = ea_addr((op >> 3) & 7, op & 7, size, rd, ctx, addr)?;
        let d = dreg(dn, size.bytes());
        let out = ctx.t(size.bytes());
        if dir_to_ea {
            ctx.bin(ir, out, ea.value, d, addr);
            write_ea(ea, out, size, ctx, addr)?;
        } else {
            ctx.bin(ir, out, d, ea.value, addr);
            ctx.unary(IrOp::Copy, d, out, addr);
        }
        flags_result(ctx, out, addr);
        Ok(LiftedInsn {
            ir_ops: std::mem::take(&mut ctx.ops),
            len: rd.len(),
        })
    }

    fn lift_quick(
        &self,
        op: u16,
        rd: &mut Reader<'_>,
        addr: u64,
        ctx: &mut Ctx,
    ) -> Result<LiftedInsn, LiftError> {
        let is_sub = (op & 0x0100) != 0;
        let size = Size::from_alu((op >> 6) & 3).ok_or(LiftError::Unsupported)?;
        let ea = ea_addr((op >> 3) & 7, op & 7, size, rd, ctx, addr)?;
        let out = ctx.t(size.bytes());
        let ir = if is_sub { IrOp::IntSub } else { IrOp::IntAdd };
        ctx.bin(ir, out, ea.value, cst(quick(op), size.bytes()), addr);
        write_ea(ea, out, size, ctx, addr)?;
        flags_result(ctx, out, addr);
        Ok(LiftedInsn {
            ir_ops: std::mem::take(&mut ctx.ops),
            len: rd.len(),
        })
    }
}
impl Default for M68kLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for M68kLifter {
    fn arch(&self) -> ArchId {
        ArchId::M68k
    }
    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let mut rd = Reader::new(bytes);
        let op = rd.u16()?;
        let mut ctx = Ctx::default();
        match op {
            0x4e71 => {
                ctx.noout(IrOp::Copy, &[cst(0, 1)], addr);
                return Ok(LiftedInsn {
                    ir_ops: ctx.ops,
                    len: 2,
                });
            }
            0x4e75 => {
                ctx.noout(IrOp::Return, &[areg(7)], addr);
                return Ok(LiftedInsn {
                    ir_ops: ctx.ops,
                    len: 2,
                });
            }
            0x4e73 | 0x4e77 => {
                ctx.noout(IrOp::Return, &[areg(7)], addr);
                return Ok(LiftedInsn {
                    ir_ops: ctx.ops,
                    len: 2,
                });
            }
            _ => {}
        }
        if (op & 0xffc0) == 0x4ec0 || (op & 0xffc0) == 0x4e80 {
            // JMP/JSR <ea>
            let ea = ea_addr((op >> 3) & 7, op & 7, Size::Long, &mut rd, &mut ctx, addr)?;
            ctx.noout(
                if (op & 0xffc0) == 0x4e80 {
                    IrOp::Call
                } else {
                    IrOp::Branchind
                },
                &[ea.value],
                addr,
            );
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: rd.len(),
            });
        }
        if (op & 0xfff8) == 0x41f8 || (op & 0xf1c0) == 0x41c0 {
            // LEA <ea>,An
            let an = ((op >> 9) & 7) as u8;
            let ea = ea_addr((op >> 3) & 7, op & 7, Size::Long, &mut rd, &mut ctx, addr)?;
            let val = match ea.loc {
                EaLoc::Mem(p) => p,
                _ => ea.value,
            };
            ctx.unary(IrOp::Copy, areg(an), val, addr);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: rd.len(),
            });
        }
        if (op & 0xf100) == 0x7000 {
            // MOVEQ #imm,Dn
            let dn = ((op >> 9) & 7) as u8;
            let imm = (op & 0xff) as u8 as i8 as i64 as u64;
            ctx.unary(IrOp::Copy, dreg(dn, 4), cst(imm, 4), addr);
            flags_result(&mut ctx, dreg(dn, 4), addr);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: 2,
            });
        }
        if (op & 0xf000) == 0x6000 {
            return lift_branch(op, &mut rd, addr, &mut ctx);
        }
        if (op & 0xf100) == 0x5000 {
            return self.lift_quick(op, &mut rd, addr, &mut ctx);
        } // ADDQ/SUBQ
        if (op & 0xf000) == 0x1000 || (op & 0xf000) == 0x2000 || (op & 0xf000) == 0x3000 {
            return self.lift_move(op, &mut rd, addr, &mut ctx);
        }
        if (op & 0xf000) == 0xd000 {
            return self.lift_alu_dn_ea(op, IrOp::IntAdd, &mut rd, addr, &mut ctx);
        }
        if (op & 0xf000) == 0x9000 {
            return self.lift_alu_dn_ea(op, IrOp::IntSub, &mut rd, addr, &mut ctx);
        }
        if (op & 0xf000) == 0xb000 {
            return self.lift_alu_dn_ea(op, IrOp::IntSub, &mut rd, addr, &mut ctx);
        } // CMP modeled as subtraction to temp/flags
        if (op & 0xf000) == 0xc000 {
            return self.lift_alu_dn_ea(op, IrOp::IntAnd, &mut rd, addr, &mut ctx);
        }
        if (op & 0xf000) == 0x8000 {
            return self.lift_alu_dn_ea(op, IrOp::IntOr, &mut rd, addr, &mut ctx);
        }
        if (op & 0xffc0) == 0x4840 {
            // SWAP Dn
            let d = dreg((op & 7) as u8, 4);
            let hi = ctx.t(4);
            let lo = ctx.t(4);
            let out = ctx.t(4);
            ctx.bin(IrOp::IntRight, hi, d, cst(16, 4), addr);
            ctx.bin(IrOp::IntLeft, lo, d, cst(16, 4), addr);
            ctx.bin(IrOp::IntOr, out, hi, lo, addr);
            ctx.unary(IrOp::Copy, d, out, addr);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: 2,
            });
        }
        if (op & 0xfff8) == 0x4e58 {
            // UNLK An
            let an = areg((op & 7) as u8);
            ctx.unary(IrOp::Copy, areg(7), an, addr);
            ctx.unary(IrOp::Load, an, areg(7), addr);
            ctx.bin(IrOp::IntAdd, areg(7), areg(7), cst(4, 4), addr);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: 2,
            });
        }
        if (op & 0xfff8) == 0x4e50 {
            // LINK An,#disp
            let an = areg((op & 7) as u8);
            let disp = rd.i16()? as i64 as u64;
            ctx.bin(IrOp::IntSub, areg(7), areg(7), cst(4, 4), addr);
            ctx.noout(IrOp::Store, &[areg(7), an], addr);
            ctx.unary(IrOp::Copy, an, areg(7), addr);
            ctx.bin(IrOp::IntAdd, areg(7), areg(7), cst(disp, 4), addr);
            return Ok(LiftedInsn {
                ir_ops: ctx.ops,
                len: rd.len(),
            });
        }
        Err(LiftError::Unsupported)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    fn lift(bytes: &[u8]) -> LiftedInsn {
        M68kLifter::new().lift_insn(bytes, 0x1000).unwrap()
    }
    #[test]
    fn arch_and_registers() {
        let l = M68kLifter::new();
        assert_eq!(l.arch(), ArchId::M68k);
        assert!(l.register_file().registers.len() >= 24);
        assert_eq!(l.register_file().registers[0].name, "D0");
    }
    #[test]
    fn nop_rts() {
        assert_eq!(lift(&[0x4e, 0x71]).ir_ops[0].op, IrOp::Copy);
        assert_eq!(lift(&[0x4e, 0x75]).ir_ops[0].op, IrOp::Return);
    }
    #[test]
    fn moveq() {
        let r = lift(&[0x70, 0x2a]);
        assert_eq!(r.len, 2);
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy && i.output == Some(dreg(0, 4)))
        );
    }
    #[test]
    fn branch_word_and_long() {
        let r = lift(&[0x60, 0x00, 0x00, 0x04]);
        assert_eq!(r.ir_ops[0].inputs[0], target(0x1008));
        let r = lift(&[0x60, 0xff, 0, 0, 0, 8]);
        assert_eq!(r.len, 6);
        assert_eq!(r.ir_ops[0].inputs[0], target(0x100e));
    }
    #[test]
    fn move_long_d0_d1() {
        let r = lift(&[0x22, 0x00]);
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy && i.output == Some(dreg(1, 4)))
        );
    }
    #[test]
    fn add_sub_or_and() {
        assert!(
            lift(&[0xd2, 0x80])
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntAdd)
        );
        assert!(
            lift(&[0x90, 0x81])
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSub)
        );
        assert!(
            lift(&[0x82, 0x80])
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntOr)
        );
        assert!(
            lift(&[0xc2, 0x80])
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntAnd)
        );
    }
    #[test]
    fn jsr_absolute_long() {
        let r = lift(&[0x4e, 0xb9, 0x00, 0x12, 0x34, 0x56]);
        assert_eq!(r.len, 6);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Call));
    }
    #[test]
    fn lea_absolute_word() {
        let r = lift(&[0x41, 0xf8, 0x12, 0x34]);
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::Copy && i.output == Some(areg(0)))
        );
    }
    #[test]
    fn short_buffer() {
        assert!(matches!(
            M68kLifter::new().lift_insn(&[0x60], 0),
            Err(LiftError::ShortBuffer)
        ));
    }
//! Motorola 68000 → IR lifter (native decoder).

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;

fn m68k_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(17);
    static D_NAMES: [&str; 8] = ["d0","d1","d2","d3","d4","d5","d6","d7"];
    static A_NAMES: [&str; 8] = ["a0","a1","a2","a3","a4","a5","a6","a7"];
    for (i, n) in D_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg((i as u64) * 4, REG_SIZE) });
    }
    for (i, n) in A_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg(32 + (i as u64) * 4, REG_SIZE) });
    }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(64, REG_SIZE) });
    RegisterFile { registers: regs }
}

pub struct M68kLifter { reg_file: RegisterFile }
impl M68kLifter {
    pub fn new() -> Self { Self { reg_file: m68k_register_file() } }
}
impl Default for M68kLifter { fn default() -> Self { Self::new() } }

impl Lifter for M68kLifter {
    fn arch(&self) -> ArchId { ArchId::M68k }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
        let ops = vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)];
        Ok(LiftedInsn { ir_ops: ops, len: 2 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test] fn test_arch() { assert_eq!(M68kLifter::new().arch(), ArchId::M68k); }
    #[test] fn test_reg_file() {
        let l = M68kLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 17);
        assert_eq!(rf.registers[0].name, "d0");
        assert_eq!(rf.registers[8].name, "a0");
    }
    #[test] fn test_short() { assert!(M68kLifter::new().lift_insn(&[0], 0).is_err()); }
}
