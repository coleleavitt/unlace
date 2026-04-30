//! C pretty-printer — emit valid C syntax from HIR.
//!
//! Translates a [`HirFunction`] into a C source string that passes
//! `gcc -fsyntax-only`. Output is deterministic: identical input produces
//! byte-identical output.

use std::collections::BTreeMap;
use std::fmt::Write;

use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
use unlace_ir::{IrInsn, IrOp, SpaceId};
use unlace_struct::{HirFunction, HirNode, SwitchCase};

// ---------------------------------------------------------------------------
// Public API
// ---------------------------------------------------------------------------

/// Render a [`HirFunction`] as valid C source.
///
/// Variables are named `v1, v2, ...` (monotonic, deterministic).
/// Indentation is 4 spaces per nesting level.
///
/// If the function name is a mangled C++/Rust/Swift/MSVC symbol, the
/// emitted name is the demangled short form (sanitized for C) and a
/// comment with the full demangled signature is prepended.
pub fn print_c(func: &HirFunction) -> String {
    let mut ctx = PrintCtx::new();

    collect_varnodes(&func.body, &mut ctx);

    let mut out = String::with_capacity(1024);

    let demangled = crate::demangle::demangle(&func.name);
    let emit_name = match &demangled {
        Some(dr) => {
            let _ = writeln!(out, "// {}", dr.full_signature);
            crate::demangle::sanitize_for_c(&dr.short_name)
        }
        None => func.name.clone(),
    };

    let _ = write!(
        out,
        "{} {}(",
        c_type(&func.return_type),
        emit_name,
    );
    for (i, (pname, pty)) in func.params.iter().enumerate() {
        if i > 0 {
            out.push_str(", ");
        }
        let _ = write!(out, "{} {}", c_type(pty), pname);
    }
    if func.params.is_empty() {
        out.push_str("void");
    }
    let _ = writeln!(out, ") {{");

    for (sv, name) in &ctx.var_names {
        let ty = ctx.var_types.get(sv).copied().unwrap_or(PrimitiveType::Unknown);
        let _ = writeln!(out, "    {} {};", c_type(&ty), name);
    }
    if !ctx.var_names.is_empty() {
        out.push('\n');
    }

    emit_nodes(&func.body, 1, &mut ctx, &mut out);

    out.push_str("}\n");
    out
}

// ---------------------------------------------------------------------------
// Context
// ---------------------------------------------------------------------------

struct PrintCtx {
    next_var: u32,
    var_names: BTreeMap<SsaVarnode, String>,
    var_types: BTreeMap<SsaVarnode, PrimitiveType>,
}

impl PrintCtx {
    fn new() -> Self {
        Self {
            next_var: 1,
            var_names: BTreeMap::new(),
            var_types: BTreeMap::new(),
        }
    }

    fn name_of(&mut self, sv: &SsaVarnode) -> String {
        if let Some(n) = self.var_names.get(sv) {
            return n.clone();
        }
        let name = format!("v{}", self.next_var);
        self.next_var += 1;
        self.var_names.insert(*sv, name.clone());
        name
    }
}

// ---------------------------------------------------------------------------
// Varnode collection — pre-walk to assign names deterministically
// ---------------------------------------------------------------------------

fn collect_varnodes(nodes: &[HirNode], ctx: &mut PrintCtx) {
    for node in nodes {
        match node {
            HirNode::Block(children) => collect_varnodes(children, ctx),

            HirNode::Statement(insn) => {
                if let Some(output) = insn.output {
                    let sv = SsaVarnode { base: output, version: 0 };
                    ctx.name_of(&sv);
                    infer_type_from_insn(insn, &sv, ctx);
                }
                for input in &insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let sv = SsaVarnode { base: *input, version: 0 };
                    ctx.name_of(&sv);
                }
            }

            HirNode::If { cond, then_body, else_body } => {
                ctx.name_of(cond);
                collect_varnodes(then_body, ctx);
                if let Some(eb) = else_body {
                    collect_varnodes(eb, ctx);
                }
            }

            HirNode::While { cond, body } => {
                ctx.name_of(cond);
                collect_varnodes(body, ctx);
            }

            HirNode::DoWhile { body, cond } => {
                collect_varnodes(body, ctx);
                ctx.name_of(cond);
            }

            HirNode::Switch { cond, cases, default } => {
                ctx.name_of(cond);
                for (_case, body) in cases {
                    collect_varnodes(body, ctx);
                }
                if let Some(def) = default {
                    collect_varnodes(def, ctx);
                }
            }

            HirNode::Return(Some(sv)) => {
                ctx.name_of(sv);
            }

            HirNode::Return(None) | HirNode::Goto(_) | HirNode::Label(_) => {}
        }
    }
}

/// Heuristic: derive C type from opcode family and operand size.
fn infer_type_from_insn(insn: &IrInsn, output_sv: &SsaVarnode, ctx: &mut PrintCtx) {
    let ty = match insn.op.type_family() {
        Some('b') => PrimitiveType::Bool,
        Some('f') => {
            if output_sv.base.size == 4 {
                PrimitiveType::Float
            } else {
                PrimitiveType::Double
            }
        }
        Some('i') | Some(_) | None => {
            match insn.op {
                IrOp::Ptradd | IrOp::Ptrsub | IrOp::Load => PrimitiveType::Ptr,
                IrOp::IntDiv | IrOp::IntRem | IrOp::IntZext | IrOp::IntLess
                | IrOp::IntLessequal | IrOp::IntCarry => {
                    PrimitiveType::UnsignedInt(output_sv.base.size)
                }
                _ => PrimitiveType::Int(output_sv.base.size),
            }
        }
    };
    ctx.var_types.entry(*output_sv).or_insert(ty);
}

// ---------------------------------------------------------------------------
// Type printing
// ---------------------------------------------------------------------------

fn c_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "int",
        PrimitiveType::Bool => "_Bool",
        PrimitiveType::Int(w) => match w {
            1 => "signed char",
            2 => "short",
            4 => "int",
            8 => "long long",
            _ => "int",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "unsigned char",
            2 => "unsigned short",
            4 => "unsigned int",
            8 => "unsigned long long",
            _ => "unsigned int",
        },
        PrimitiveType::Float => "float",
        PrimitiveType::Double => "double",
        PrimitiveType::Ptr => "void *",
    }
}

// ---------------------------------------------------------------------------
// Node emission
// ---------------------------------------------------------------------------

fn emit_nodes(nodes: &[HirNode], depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    for node in nodes {
        emit_node(node, depth, ctx, out);
    }
}

fn emit_node(node: &HirNode, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    match node {
        HirNode::Block(children) => emit_nodes(children, depth, ctx, out),

        HirNode::Statement(insn) => emit_statement(insn, depth, ctx, out),

        HirNode::If { cond, then_body, else_body } => {
            let cond_name = ctx.name_of(cond);
            indent(depth, out);
            let _ = writeln!(out, "if ({}) {{", cond_name);
            emit_nodes(then_body, depth + 1, ctx, out);
            if let Some(eb) = else_body {
                indent(depth, out);
                let _ = writeln!(out, "}} else {{");
                emit_nodes(eb, depth + 1, ctx, out);
            }
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::While { cond, body } => {
            let cond_name = ctx.name_of(cond);
            indent(depth, out);
            let _ = writeln!(out, "while ({}) {{", cond_name);
            emit_nodes(body, depth + 1, ctx, out);
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::DoWhile { body, cond } => {
            indent(depth, out);
            let _ = writeln!(out, "do {{");
            emit_nodes(body, depth + 1, ctx, out);
            let cond_name = ctx.name_of(cond);
            indent(depth, out);
            let _ = writeln!(out, "}} while ({});", cond_name);
        }

        HirNode::Switch { cond, cases, default } => {
            let cond_name = ctx.name_of(cond);
            indent(depth, out);
            let _ = writeln!(out, "switch ({}) {{", cond_name);
            for (case, body) in cases {
                indent(depth, out);
                match case {
                    SwitchCase::Value(v) => {
                        let _ = writeln!(out, "case {}:", v);
                    }
                    SwitchCase::Range(lo, hi) => {
                        let _ = writeln!(out, "case {} ... {}:", lo, hi);
                    }
                }
                emit_nodes(body, depth + 1, ctx, out);
                indent(depth + 1, out);
                let _ = writeln!(out, "break;");
            }
            if let Some(def) = default {
                indent(depth, out);
                let _ = writeln!(out, "default:");
                emit_nodes(def, depth + 1, ctx, out);
                indent(depth + 1, out);
                let _ = writeln!(out, "break;");
            }
            indent(depth, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Return(Some(sv)) => {
            let name = ctx.name_of(sv);
            indent(depth, out);
            let _ = writeln!(out, "return {};", name);
        }

        HirNode::Return(None) => {
            indent(depth, out);
            let _ = writeln!(out, "return;");
        }

        HirNode::Goto(label) => {
            indent(depth, out);
            let _ = writeln!(out, "goto {};", label);
        }

        HirNode::Label(label) => {
            if depth > 0 {
                indent(depth - 1, out);
            }
            let _ = writeln!(out, "{}:;", label);
        }
    }
}

// ---------------------------------------------------------------------------
// Statement emission (single IR instruction)
// ---------------------------------------------------------------------------

fn emit_statement(insn: &IrInsn, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    indent(depth, out);

    if let Some(output) = insn.output {
        let sv = SsaVarnode { base: output, version: 0 };
        let lhs = ctx.name_of(&sv);
        let rhs = emit_expr(insn, ctx);
        let _ = writeln!(out, "{} = {};", lhs, rhs);
    } else {
        match insn.op {
            IrOp::Store => {
                if insn.inputs.len() >= 3 {
                    let addr = emit_operand(&insn.inputs[1], ctx);
                    let val = emit_operand(&insn.inputs[2], ctx);
                    let _ = writeln!(out, "*(void **)({}) = {};", addr, val);
                } else {
                    let _ = writeln!(out, "/* STORE (bad arity) */;");
                }
            }
            IrOp::Call | IrOp::Callind => {
                let target = if !insn.inputs.is_empty() {
                    emit_operand(&insn.inputs[0], ctx)
                } else {
                    "/* unknown */".to_string()
                };
                let _ = writeln!(out, "{}();", target);
            }
            IrOp::Unimplemented => {
                let _ = writeln!(out, "__unknown_insn_0x{:X}();", insn.addr);
            }
            _ => {
                let _ = writeln!(out, "/* {} */;", insn.op.name());
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Expression emission
// ---------------------------------------------------------------------------

fn emit_expr(insn: &IrInsn, ctx: &mut PrintCtx) -> String {
    match insn.op {
        // -- Binary arithmetic/bitwise --
        IrOp::IntAdd | IrOp::FloatAdd => emit_binop(insn, "+", ctx),
        IrOp::IntSub | IrOp::FloatSub => emit_binop(insn, "-", ctx),
        IrOp::IntMult | IrOp::FloatMult => emit_binop(insn, "*", ctx),
        IrOp::IntDiv | IrOp::IntSdiv | IrOp::FloatDiv => emit_binop(insn, "/", ctx),
        IrOp::IntRem | IrOp::IntSrem => emit_binop(insn, "%", ctx),
        IrOp::IntAnd => emit_binop(insn, "&", ctx),
        IrOp::IntOr => emit_binop(insn, "|", ctx),
        IrOp::IntXor => emit_binop(insn, "^", ctx),
        IrOp::IntLeft => emit_binop(insn, "<<", ctx),
        IrOp::IntRight | IrOp::IntSright => emit_binop(insn, ">>", ctx),

        // -- Boolean ops --
        IrOp::BoolAnd => emit_binop(insn, "&&", ctx),
        IrOp::BoolOr => emit_binop(insn, "||", ctx),
        IrOp::BoolXor => emit_binop(insn, "!=", ctx),

        // -- Comparisons --
        IrOp::IntEqual | IrOp::FloatEqual => emit_binop(insn, "==", ctx),
        IrOp::IntNotequal | IrOp::FloatNotequal => emit_binop(insn, "!=", ctx),
        IrOp::IntLess | IrOp::IntSless | IrOp::FloatLess => emit_binop(insn, "<", ctx),
        IrOp::IntLessequal | IrOp::IntSlessequal | IrOp::FloatLessequal => {
            emit_binop(insn, "<=", ctx)
        }

        // -- Unary ops --
        IrOp::IntNegate | IrOp::BoolNegate => emit_unaryop(insn, "!", ctx),
        IrOp::Int2comp | IrOp::FloatNeg => emit_unaryop(insn, "-", ctx),

        // -- Copy / move --
        IrOp::Copy => {
            if insn.inputs.is_empty() {
                "0".to_string()
            } else {
                emit_operand(&insn.inputs[0], ctx)
            }
        }

        // -- Load --
        IrOp::Load => {
            if insn.inputs.len() >= 2 {
                let addr = emit_operand(&insn.inputs[1], ctx);
                format!("*(void **)({})", addr)
            } else if !insn.inputs.is_empty() {
                let addr = emit_operand(&insn.inputs[0], ctx);
                format!("*(void **)({})", addr)
            } else {
                "/* LOAD (bad arity) */ 0".to_string()
            }
        }

        // -- Extensions --
        IrOp::IntZext | IrOp::IntSext => {
            if !insn.inputs.is_empty() {
                let op = emit_operand(&insn.inputs[0], ctx);
                if let Some(output) = insn.output {
                    let ty = type_for_size(output.size, insn.op == IrOp::IntSext);
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0".to_string()
            }
        }

        // -- Cast --
        IrOp::Cast => {
            if !insn.inputs.is_empty() {
                let op = emit_operand(&insn.inputs[0], ctx);
                if let Some(output) = insn.output {
                    let ty = type_for_size(output.size, true);
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0".to_string()
            }
        }

        // -- Pointer arithmetic --
        IrOp::Ptradd => emit_binop(insn, "+", ctx),
        IrOp::Ptrsub => emit_binop(insn, "-", ctx),

        // -- Float conversions --
        IrOp::FloatInt2float => {
            if !insn.inputs.is_empty() {
                let op = emit_operand(&insn.inputs[0], ctx);
                if let Some(output) = insn.output {
                    let ty = if output.size == 4 { "float" } else { "double" };
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0.0".to_string()
            }
        }
        IrOp::FloatFloat2float => {
            if !insn.inputs.is_empty() {
                let op = emit_operand(&insn.inputs[0], ctx);
                if let Some(output) = insn.output {
                    let ty = if output.size == 4 { "float" } else { "double" };
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0.0".to_string()
            }
        }
        IrOp::FloatFloat2int => {
            if !insn.inputs.is_empty() {
                let op = emit_operand(&insn.inputs[0], ctx);
                if let Some(output) = insn.output {
                    let ty = type_for_size(output.size, true);
                    format!("({})({})", ty, op)
                } else {
                    op
                }
            } else {
                "0".to_string()
            }
        }

        // -- Float unary --
        IrOp::FloatAbs => emit_call1(insn, "fabs", ctx),
        IrOp::FloatSqrt => emit_call1(insn, "sqrt", ctx),
        IrOp::FloatCeil => emit_call1(insn, "ceil", ctx),
        IrOp::FloatFloor => emit_call1(insn, "floor", ctx),
        IrOp::FloatRound => emit_call1(insn, "round", ctx),
        IrOp::FloatTrunc => emit_call1(insn, "trunc", ctx),
        IrOp::FloatNan => emit_call1(insn, "isnan", ctx),

        // -- Bit manipulation --
        IrOp::Popcount => emit_call1(insn, "__builtin_popcount", ctx),
        IrOp::Lzcount => emit_call1(insn, "__builtin_clz", ctx),

        // -- Piece/Subpiece --
        IrOp::Piece => {
            if insn.inputs.len() >= 2 {
                let hi = emit_operand(&insn.inputs[0], ctx);
                let lo = emit_operand(&insn.inputs[1], ctx);
                let shift = (insn.inputs[1].size as u32) * 8;
                format!("(({}) << {}) | ({})", hi, shift, lo)
            } else {
                "0".to_string()
            }
        }
        IrOp::Subpiece => {
            if insn.inputs.len() >= 2 {
                let src = emit_operand(&insn.inputs[0], ctx);
                let shift_bytes = insn.inputs[1].offset;
                if shift_bytes == 0 {
                    src
                } else {
                    format!("({}) >> {}", src, shift_bytes * 8)
                }
            } else {
                "0".to_string()
            }
        }

        // -- Carry / borrow (emit as comparison) --
        IrOp::IntCarry => {
            if insn.inputs.len() >= 2 {
                let a = emit_operand(&insn.inputs[0], ctx);
                let b = emit_operand(&insn.inputs[1], ctx);
                format!("({} + {}) < {}", a, b, a)
            } else {
                "0".to_string()
            }
        }
        // INT_SCARRY/INT_SBORROW: no clean C equivalent, emit 0.
        IrOp::IntScarry | IrOp::IntSborrow => {
            "0".to_string()
        }

        // -- Call with output --
        IrOp::Call | IrOp::Callind => {
            let target = if !insn.inputs.is_empty() {
                emit_operand(&insn.inputs[0], ctx)
            } else {
                "/* unknown */".to_string()
            };
            format!("{}()", target)
        }

        // -- Unknown / unimplemented instruction --
        IrOp::Unimplemented => format!("__unknown_insn_0x{:X}()", insn.addr),

        // -- Fallback --
        _ => format!("/* {} */ 0", insn.op.name()),
    }
}

fn emit_binop(insn: &IrInsn, op: &str, ctx: &mut PrintCtx) -> String {
    let lhs = if !insn.inputs.is_empty() {
        emit_operand(&insn.inputs[0], ctx)
    } else {
        "0".to_string()
    };
    let rhs = if insn.inputs.len() >= 2 {
        emit_operand(&insn.inputs[1], ctx)
    } else {
        "0".to_string()
    };
    format!("{} {} {}", lhs, op, rhs)
}

fn emit_unaryop(insn: &IrInsn, op: &str, ctx: &mut PrintCtx) -> String {
    let operand = if !insn.inputs.is_empty() {
        emit_operand(&insn.inputs[0], ctx)
    } else {
        "0".to_string()
    };
    format!("{}{}", op, operand)
}

fn emit_call1(insn: &IrInsn, func: &str, ctx: &mut PrintCtx) -> String {
    let arg = if !insn.inputs.is_empty() {
        emit_operand(&insn.inputs[0], ctx)
    } else {
        "0".to_string()
    };
    format!("{}({})", func, arg)
}

// ---------------------------------------------------------------------------
// Operand rendering
// ---------------------------------------------------------------------------

fn emit_operand(vn: &unlace_ir::Varnode, ctx: &mut PrintCtx) -> String {
    if vn.space == SpaceId::Const {
        return format_constant(vn.offset, vn.size);
    }
    let sv = SsaVarnode { base: *vn, version: 0 };
    ctx.name_of(&sv)
}

fn format_constant(value: u64, size: u8) -> String {
    let threshold = match size {
        1 => 0x80u64,
        2 => 0x8000,
        4 => 0x8000_0000,
        8 => 0x8000_0000_0000_0000,
        _ => u64::MAX,
    };
    if size <= 8 && value >= threshold {
        format!("0x{:x}ULL", value)
    } else if value < 10 {
        format!("{}", value)
    } else {
        format!("0x{:x}", value)
    }
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

fn indent(depth: usize, out: &mut String) {
    for _ in 0..depth {
        out.push_str("    ");
    }
}

fn type_for_size(size: u8, signed: bool) -> &'static str {
    if signed {
        match size {
            1 => "signed char",
            2 => "short",
            4 => "int",
            8 => "long long",
            _ => "int",
        }
    } else {
        match size {
            1 => "unsigned char",
            2 => "unsigned short",
            4 => "unsigned int",
            8 => "unsigned long long",
            _ => "unsigned int",
        }
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};
    use unlace_struct::{HirFunction, HirNode, LabelId};

    use super::print_c;

    fn make_func(name: &str, body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: name.to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
        }
    }

    fn reg(offset: u64, size: u8) -> Varnode {
        Varnode::reg(offset, size)
    }

    fn con(value: u64, size: u8) -> Varnode {
        Varnode::constant(value, size)
    }

    fn sv(offset: u64, size: u8) -> SsaVarnode {
        SsaVarnode { base: Varnode::reg(offset, size), version: 0 }
    }

    #[test]
    fn test_print_simple() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("simple", body);
        let output = print_c(&func);

        assert!(output.contains("int simple(void)"), "function signature: {output}");
        assert!(output.contains("v1 = v1 + 1;"), "assignment: {output}");
        assert!(output.contains("return v1;"), "return: {output}");
        assert!(output.ends_with("}\n"), "closing brace: {output}");
    }

    #[test]
    fn test_print_if_else() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let c1 = con(1, 4);
        let c0 = con(0, 4);

        let body = vec![
            HirNode::If {
                cond: sv(0, 4),
                then_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    r8,
                    smallvec![r0, c1],
                    0x1000,
                ))],
                else_body: Some(vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::Copy,
                    r8,
                    smallvec![c0],
                    0x1010,
                ))]),
            },
            HirNode::Return(Some(sv(8, 4))),
        ];

        let func = make_func("if_else", body);
        let output = print_c(&func);

        assert!(output.contains("if (v1)"), "if: {output}");
        assert!(output.contains("} else {"), "else: {output}");
        assert!(output.contains("return v2;"), "return: {output}");
    }

    #[test]
    fn test_print_while() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::While {
                cond: sv(0, 4),
                body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntSub,
                    r0,
                    smallvec![r0, c1],
                    0x1000,
                ))],
            },
            HirNode::Return(None),
        ];

        let func = make_func("while_func", body);
        let output = print_c(&func);

        assert!(output.contains("while (v1)"), "while: {output}");
        assert!(output.contains("v1 = v1 - 1;"), "body: {output}");
        assert!(output.contains("return;"), "return: {output}");
    }

    #[test]
    fn test_print_deterministic() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r8, c1],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("deterministic", body);
        let out1 = print_c(&func);
        let out2 = print_c(&func);

        assert_eq!(out1, out2, "print_c must be deterministic");
    }

    #[test]
    fn test_print_compiles() {
        let gcc_available = std::process::Command::new("gcc")
            .arg("--version")
            .output()
            .is_ok();
        if !gcc_available {
            eprintln!("gcc not found, skipping test_print_compiles");
            return;
        }

        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let c1 = con(1, 4);
        let c0 = con(0, 4);

        let body = vec![
            HirNode::If {
                cond: sv(0, 4),
                then_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    r8,
                    smallvec![r0, c1],
                    0x1000,
                ))],
                else_body: Some(vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::Copy,
                    r8,
                    smallvec![c0],
                    0x1010,
                ))]),
            },
            HirNode::Return(Some(sv(8, 4))),
        ];

        let func = make_func("test_func", body);
        let source = print_c(&func);

        let result = std::process::Command::new("gcc")
            .args(["-fsyntax-only", "-x", "c", "-", "-std=c11"])
            .stdin(std::process::Stdio::piped())
            .stdout(std::process::Stdio::piped())
            .stderr(std::process::Stdio::piped())
            .spawn();

        let Ok(mut child) = result else {
            eprintln!("Failed to spawn gcc, skipping");
            return;
        };

        {
            use std::io::Write;
            let stdin = child.stdin.as_mut().expect("stdin pipe");
            stdin.write_all(source.as_bytes()).expect("write to stdin");
        }

        let output = child.wait_with_output().expect("wait for gcc");
        assert!(
            output.status.success(),
            "gcc -fsyntax-only failed:\n--- source ---\n{}\n--- stderr ---\n{}",
            source,
            String::from_utf8_lossy(&output.stderr),
        );
    }

    #[test]
    fn test_print_goto_label() {
        let body = vec![
            HirNode::Goto(LabelId(0)),
            HirNode::Label(LabelId(0)),
            HirNode::Return(None),
        ];

        let func = make_func("goto_test", body);
        let output = print_c(&func);

        assert!(output.contains("goto label_0;"), "goto: {output}");
        assert!(output.contains("label_0:;"), "label: {output}");
    }

    #[test]
    fn test_print_do_while() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::DoWhile {
                body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntSub,
                    r0,
                    smallvec![r0, c1],
                    0x1000,
                ))],
                cond: sv(0, 4),
            },
            HirNode::Return(None),
        ];

        let func = make_func("do_while_func", body);
        let output = print_c(&func);

        assert!(output.contains("do {"), "do: {output}");
        assert!(output.contains("} while (v1);"), "while cond: {output}");
    }

    #[test]
    fn test_print_types() {
        assert_eq!(super::c_type(&PrimitiveType::Bool), "_Bool");
        assert_eq!(super::c_type(&PrimitiveType::Int(1)), "signed char");
        assert_eq!(super::c_type(&PrimitiveType::Int(2)), "short");
        assert_eq!(super::c_type(&PrimitiveType::Int(4)), "int");
        assert_eq!(super::c_type(&PrimitiveType::Int(8)), "long long");
        assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(1)), "unsigned char");
        assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(4)), "unsigned int");
        assert_eq!(super::c_type(&PrimitiveType::Float), "float");
        assert_eq!(super::c_type(&PrimitiveType::Double), "double");
        assert_eq!(super::c_type(&PrimitiveType::Ptr), "void *");
        assert_eq!(super::c_type(&PrimitiveType::Unknown), "int");
    }

    #[test]
    fn test_print_indentation() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);

        let body = vec![HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::If {
                cond: sv(0, 4),
                then_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    r0,
                    smallvec![r0, c1],
                    0x1000,
                ))],
                else_body: None,
            }],
            else_body: None,
        }];

        let func = make_func("nested", body);
        let output = print_c(&func);

        // Depth 3: function body (1) + outer if (2) + inner if (3) = 12 spaces.
        let add_line = output
            .lines()
            .find(|l| l.contains("v1 = v1 + 1;"))
            .expect("should find add line");
        assert!(
            add_line.starts_with("            "),
            "expected 12 spaces (3 levels): {add_line:?}"
        );
    }

    #[test]
    fn test_print_params() {
        let func = HirFunction {
            name: "with_params".to_string(),
            params: vec![
                ("a".to_string(), PrimitiveType::Int(4)),
                ("b".to_string(), PrimitiveType::Ptr),
            ],
            return_type: PrimitiveType::Ptr,
            body: vec![HirNode::Return(None)],
            addr: 0x2000,
        };

        let output = print_c(&func);
        assert!(
            output.contains("void * with_params(int a, void * b)"),
            "params: {output}"
        );
    }
}
