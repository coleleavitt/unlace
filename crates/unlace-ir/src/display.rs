//! `Display` implementations for IR types matching the canonical text form
//! defined in IR spec SS2.

use std::fmt;

use crate::{BasicBlock, Function, IrInsn, IrOp, SpaceId, Varnode};

/// Format a Varnode as its canonical text literal (e.g. `r0`, `c0x10`, `u3`, `s-8`).
fn fmt_varnode_literal(vn: &Varnode, f: &mut fmt::Formatter<'_>) -> fmt::Result {
    match vn.space {
        SpaceId::Register => write!(f, "r{}", vn.offset),
        SpaceId::Ram => write!(f, "m0x{:x}", vn.offset),
        SpaceId::Const => {
            if vn.offset < 10 {
                write!(f, "c{}", vn.offset)
            } else {
                write!(f, "c0x{:x}", vn.offset)
            }
        }
        SpaceId::Unique => write!(f, "u{}", vn.offset),
        SpaceId::Stack => {
            let signed = vn.offset as i64;
            write!(f, "s{signed}")
        }
    }
}

/// Format a type tag (e.g. `:i32`, `:f64`, `:b8`).
fn fmt_type_tag(family: char, size_bytes: u8, f: &mut fmt::Formatter<'_>) -> fmt::Result {
    write!(f, ":{}{}", family, (size_bytes as u32) * 8)
}

/// Format a typed Varnode for output position: `<literal>:<type>`.
fn fmt_typed_output(vn: &Varnode, op: IrOp, f: &mut fmt::Formatter<'_>) -> fmt::Result {
    fmt_varnode_literal(vn, f)?;
    if let Some(family) = op.type_family() {
        fmt_type_tag(family, vn.size, f)?;
    }
    Ok(())
}

/// Format a typed Varnode for input position: `<literal>:<type>`.
fn fmt_typed_input(
    vn: &Varnode,
    op: IrOp,
    index: usize,
    f: &mut fmt::Formatter<'_>,
) -> fmt::Result {
    fmt_varnode_literal(vn, f)?;
    let family = op.input_type_family(index);
    fmt_type_tag(family, vn.size, f)
}

impl fmt::Display for Varnode {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        fmt_varnode_literal(self, f)
    }
}

impl fmt::Display for IrInsn {
    /// Format as canonical instruction line (without leading indent).
    ///
    /// With output: `v3:i32 = INT_ADD v1:i32, v2:i32`
    /// Without output: `STORE m, v4:i64, v3:i32`
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        if let Some(ref out) = self.output {
            fmt_typed_output(out, self.op, f)?;
            write!(f, " = ")?;
        }

        write!(f, "{}", self.op)?;

        for (i, input) in self.inputs.iter().enumerate() {
            if i == 0 {
                write!(f, " ")?;
            } else {
                write!(f, ", ")?;
            }
            fmt_typed_input(input, self.op, i, f)?;
        }

        Ok(())
    }
}

impl fmt::Display for BasicBlock {
    /// Format as block header + indented instructions.
    ///
    /// ```text
    /// BB_0 [entry]:
    ///   v3:i32 = INT_ADD v1:i32, v2:i32
    /// ```
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        // Block header
        write!(f, "{}:", self.id)?;
        writeln!(f)?;

        // Instructions, each indented by 2 spaces
        for insn in &self.insns {
            writeln!(f, "  {insn}")?;
        }

        Ok(())
    }
}

impl fmt::Display for Function {
    /// Format as the complete canonical text form for a function.
    ///
    /// ```text
    /// func max3 @ 0x401120 {
    /// BB_0 [entry]:
    ///   ...
    /// }
    /// ```
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        writeln!(f, "func {} @ 0x{:x} {{", self.name, self.addr)?;

        for block in self.blocks.values() {
            write!(f, "{block}")?;
        }

        writeln!(f, "}}")
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;

    #[test]
    fn display_varnode_register() {
        let vn = Varnode::reg(0, 8);
        assert_eq!(vn.to_string(), "r0");
    }

    #[test]
    fn display_varnode_const_hex() {
        let vn = Varnode::constant(0x10, 4);
        assert_eq!(vn.to_string(), "c0x10");
    }

    #[test]
    fn display_varnode_const_decimal() {
        let vn = Varnode::constant(4, 4);
        assert_eq!(vn.to_string(), "c4");
    }

    #[test]
    fn display_varnode_stack_negative() {
        // -8 as u64 two's complement
        let vn = Varnode::stack((-8i64) as u64, 8);
        assert_eq!(vn.to_string(), "s-8");
    }

    #[test]
    fn display_varnode_unique() {
        let vn = Varnode::unique(17, 4);
        assert_eq!(vn.to_string(), "u17");
    }

    #[test]
    fn display_varnode_ram() {
        let vn = Varnode::ram(0xdeadbeef, 8);
        assert_eq!(vn.to_string(), "m0xdeadbeef");
    }

    #[test]
    fn varnode_equality() {
        let a = Varnode::reg(0, 4);
        let b = Varnode::reg(0, 4);
        let c = Varnode::reg(0, 8);
        assert_eq!(a, b);
        assert_ne!(a, c);
    }

    #[test]
    fn irop_variant_count() {
        assert_eq!(crate::IROP_COUNT, 84);
        assert_eq!(IrOp::Unimplemented as u8, 74);
        assert_eq!(IrOp::Copy as u8, 0);
    }

    #[test]
    fn display_roundtrip_int_add() {
        let insn = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(3, 4),
            smallvec![Varnode::unique(1, 4), Varnode::unique(2, 4)],
            0x1000,
        );
        let text = insn.to_string();
        assert_eq!(text, "u3:i32 = INT_ADD u1:i32, u2:i32");
    }

    #[test]
    fn display_roundtrip_store() {
        let insn = IrInsn::without_output(
            IrOp::Store,
            smallvec![
                Varnode::constant(SpaceId::Ram as u64, 8),
                Varnode::unique(4, 8),
                Varnode::unique(3, 4),
            ],
            0x1000,
        );
        let text = insn.to_string();
        assert_eq!(text, "STORE c1:i64, u4:i64, u3:i32");
    }

    #[test]
    fn display_roundtrip_cbranch() {
        let insn = IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x2000, 8), Varnode::unique(5, 1)],
            0x1000,
        );
        let text = insn.to_string();
        assert_eq!(text, "CBRANCH c0x2000:i64, u5:b8");
    }

    #[test]
    fn display_roundtrip_float_add() {
        let insn = IrInsn::with_output(
            IrOp::FloatAdd,
            Varnode::unique(3, 8),
            smallvec![Varnode::unique(1, 8), Varnode::unique(2, 8)],
            0x1000,
        );
        let text = insn.to_string();
        assert_eq!(text, "u3:f64 = FLOAT_ADD u1:f64, u2:f64");
    }

    #[test]
    fn display_roundtrip_int_sless() {
        let insn = IrInsn::with_output(
            IrOp::IntSless,
            Varnode::unique(4, 1),
            smallvec![Varnode::unique(3, 4), Varnode::unique(2, 4)],
            0x1000,
        );
        let text = insn.to_string();
        assert_eq!(text, "u4:b8 = INT_SLESS u3:i32, u2:i32");
    }

    #[test]
    fn basic_block_construction() {
        let mut bb = BasicBlock::new(crate::BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(1, 4),
            smallvec![Varnode::reg(0, 4)],
            0x1000,
        ));
        bb.successors.push(crate::BlockId(1));

        assert_eq!(bb.id, crate::BlockId(0));
        assert_eq!(bb.insns.len(), 1);
        assert_eq!(bb.successors.len(), 1);
    }

    #[test]
    fn function_construction() {
        let entry = crate::BlockId(0);
        let mut func = Function::new("test_func", entry, 0x401000);

        let mut bb0 = BasicBlock::new(entry);
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(3, 4),
            smallvec![Varnode::unique(1, 4), Varnode::unique(2, 4)],
            0x401000,
        ));
        bb0.successors.push(crate::BlockId(1));
        func.insert_block(bb0);

        let bb1 = BasicBlock::new(crate::BlockId(1));
        func.insert_block(bb1);

        assert_eq!(func.name, "test_func");
        assert_eq!(func.entry, entry);
        assert_eq!(func.blocks.len(), 2);
        assert_eq!(func.addr, 0x401000);
    }

    #[test]
    fn display_function() {
        let entry = crate::BlockId(0);
        let mut func = Function::new("max3", entry, 0x401120);

        let mut bb0 = BasicBlock::new(entry);
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(3, 4),
            smallvec![Varnode::unique(1, 4), Varnode::unique(2, 4)],
            0x401120,
        ));
        func.insert_block(bb0);

        let text = func.to_string();
        assert!(text.starts_with("func max3 @ 0x401120 {\n"));
        assert!(text.contains("u3:i32 = INT_ADD u1:i32, u2:i32"));
        assert!(text.ends_with("}\n"));
    }

    #[test]
    fn display_block_header() {
        let bb = BasicBlock::new(crate::BlockId(0));
        let text = bb.to_string();
        assert!(text.starts_with("BB_0:\n"));
    }

    #[test]
    fn display_roundtrip_bool_negate() {
        let insn = IrInsn::with_output(
            IrOp::BoolNegate,
            Varnode::unique(3, 1),
            smallvec![Varnode::unique(2, 1)],
            0x1000,
        );
        assert_eq!(insn.to_string(), "u3:b8 = BOOL_NEGATE u2:b8");
    }

    #[test]
    fn display_roundtrip_copy() {
        let insn = IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(2, 4),
            smallvec![Varnode::unique(1, 4)],
            0x1000,
        );
        assert_eq!(insn.to_string(), "u2:i32 = COPY u1:i32");
    }

    #[test]
    fn display_roundtrip_unimplemented() {
        let insn = IrInsn::without_output(IrOp::Unimplemented, smallvec![], 0x1000);
        assert_eq!(insn.to_string(), "UNIMPLEMENTED");
    }

    #[test]
    fn display_roundtrip_return() {
        let insn = IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 8), Varnode::unique(3, 4)],
            0x1000,
        );
        assert_eq!(insn.to_string(), "RETURN u0:i64, u3:i32");
    }

    #[test]
    fn display_roundtrip_float_int2float() {
        let insn = IrInsn::with_output(
            IrOp::FloatInt2float,
            Varnode::unique(2, 8),
            smallvec![Varnode::unique(1, 4)],
            0x1000,
        );
        assert_eq!(insn.to_string(), "u2:f64 = FLOAT_INT2FLOAT u1:i32");
    }
}
