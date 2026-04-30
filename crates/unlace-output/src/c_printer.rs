//! C pretty-printer — emit valid C syntax from HIR.
//!
//! Translates a [`HirFunction`] into a C source string that passes
//! `gcc -fsyntax-only`. Output is deterministic: identical input produces
//! byte-identical output.

use std::collections::{BTreeMap, BTreeSet};
use std::fmt::Write;

use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};
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
    /// SSA version counter per base varnode. Stores the next version to assign.
    ssa_next_version: BTreeMap<Varnode, u32>,
    /// The most recently assigned version per base varnode.
    ssa_current: BTreeMap<Varnode, u32>,
    /// Pre-computed output SsaVarnode per statement (keyed by walk-order index).
    stmt_outputs: BTreeMap<u32, Option<SsaVarnode>>,
    /// Pre-computed input SsaVarnodes per statement (keyed by walk-order index).
    /// One entry per non-const input, in order.
    stmt_inputs: BTreeMap<u32, Vec<SsaVarnode>>,
    /// Next statement index (incremented during collection).
    next_stmt: u32,
    /// Current statement index during emission.
    emit_stmt: u32,
    /// The IrInsn for each statement, stored during collection for inline folding.
    stmt_insns: BTreeMap<u32, IrInsn>,
    /// Statements whose output is single-use and non-side-effecting → fold inline.
    foldable_stmts: BTreeSet<u32>,
    /// Maps a foldable SsaVarnode to the statement index that defines it.
    sv_defining_stmt: BTreeMap<SsaVarnode, u32>,
}

impl PrintCtx {
    fn new() -> Self {
        Self {
            next_var: 1,
            var_names: BTreeMap::new(),
            var_types: BTreeMap::new(),
            ssa_next_version: BTreeMap::new(),
            ssa_current: BTreeMap::new(),
            stmt_outputs: BTreeMap::new(),
            stmt_inputs: BTreeMap::new(),
            next_stmt: 0,
            emit_stmt: 0,
            stmt_insns: BTreeMap::new(),
            foldable_stmts: BTreeSet::new(),
            sv_defining_stmt: BTreeMap::new(),
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

    /// Return the current SSA version for a base varnode (0 if never defined).
    fn current_version(&self, base: &Varnode) -> u32 {
        self.ssa_current.get(base).copied().unwrap_or(0)
    }

    fn next_version(&mut self, base: &Varnode) -> u32 {
        let ver = self.ssa_next_version.entry(*base).or_insert(0);
        let v = *ver;
        *ver += 1;
        self.ssa_current.insert(*base, v);
        v
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
                let idx = ctx.next_stmt;
                ctx.next_stmt += 1;

                let mut input_svs = Vec::new();
                for input in &insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode { base: *input, version: ver };
                    ctx.name_of(&sv);
                    input_svs.push(sv);
                }
                ctx.stmt_inputs.insert(idx, input_svs);

                let output_sv = if let Some(output) = insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode { base: output, version: ver };
                    ctx.name_of(&sv);
                    infer_type_from_insn(insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(idx, output_sv);
                ctx.stmt_insns.insert(idx, insn.clone());
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

            HirNode::Ternary { cond, then_insn, else_insn, output: _ } => {
                ctx.name_of(cond);

                let then_idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                let mut then_inputs = Vec::new();
                for input in &then_insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode { base: *input, version: ver };
                    ctx.name_of(&sv);
                    then_inputs.push(sv);
                }
                ctx.stmt_inputs.insert(then_idx, then_inputs);
                let then_out_sv = if let Some(output) = then_insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode { base: output, version: ver };
                    ctx.name_of(&sv);
                    infer_type_from_insn(then_insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(then_idx, then_out_sv);

                let else_idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                let mut else_inputs = Vec::new();
                for input in &else_insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode { base: *input, version: ver };
                    ctx.name_of(&sv);
                    else_inputs.push(sv);
                }
                ctx.stmt_inputs.insert(else_idx, else_inputs);
                let else_out_sv = if let Some(output) = else_insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode { base: output, version: ver };
                    ctx.name_of(&sv);
                    infer_type_from_insn(else_insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(else_idx, else_out_sv);
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

        HirNode::Ternary { cond, then_insn, else_insn, output: _ } => {
            let then_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let else_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;

            let lhs = if let Some(Some(sv)) = ctx.stmt_outputs.get(&then_idx).cloned() {
                ctx.name_of(&sv)
            } else {
                "/* ternary */".to_string()
            };

            let then_expr = emit_expr(then_insn, then_idx, ctx);
            let else_expr = emit_expr(else_insn, else_idx, ctx);
            let cond_name = ctx.name_of(cond);

            indent(depth, out);
            let _ = writeln!(out, "{} = {} ? {} : {};", lhs, cond_name, then_expr, else_expr);
        }
    }
}

// ---------------------------------------------------------------------------
// Statement emission (single IR instruction)
// ---------------------------------------------------------------------------

fn emit_statement(insn: &IrInsn, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let idx = ctx.emit_stmt;
    ctx.emit_stmt += 1;

    indent(depth, out);

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
        let lhs = ctx.name_of(&sv);
        let rhs = emit_expr(insn, idx, ctx);
        let _ = writeln!(out, "{} = {};", lhs, rhs);
    } else {
        match insn.op {
            IrOp::Store => {
                if insn.inputs.len() >= 3 {
                    let addr = emit_operand_resolved(&insn.inputs[1], 1, idx, ctx);
                    let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                    let _ = writeln!(out, "*(void **)({}) = {};", addr, val);
                } else {
                    let _ = writeln!(out, "/* STORE (bad arity) */;");
                }
            }
            IrOp::Call | IrOp::Callind => {
                let target = if !insn.inputs.is_empty() {
                    emit_operand_resolved(&insn.inputs[0], 0, idx, ctx)
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

fn emit_expr(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    match insn.op {
        // -- Binary arithmetic/bitwise --
        IrOp::IntAdd | IrOp::FloatAdd => emit_binop(insn, "+", stmt_idx, ctx),
        IrOp::IntSub | IrOp::FloatSub => emit_binop(insn, "-", stmt_idx, ctx),
        IrOp::IntMult | IrOp::FloatMult => emit_binop(insn, "*", stmt_idx, ctx),
        IrOp::IntDiv | IrOp::IntSdiv | IrOp::FloatDiv => emit_binop(insn, "/", stmt_idx, ctx),
        IrOp::IntRem | IrOp::IntSrem => emit_binop(insn, "%", stmt_idx, ctx),
        IrOp::IntAnd => emit_binop(insn, "&", stmt_idx, ctx),
        IrOp::IntOr => emit_binop(insn, "|", stmt_idx, ctx),
        IrOp::IntXor => emit_binop(insn, "^", stmt_idx, ctx),
        IrOp::IntLeft => emit_binop(insn, "<<", stmt_idx, ctx),
        IrOp::IntRight | IrOp::IntSright => emit_binop(insn, ">>", stmt_idx, ctx),

        // -- Boolean ops --
        IrOp::BoolAnd => emit_binop(insn, "&&", stmt_idx, ctx),
        IrOp::BoolOr => emit_binop(insn, "||", stmt_idx, ctx),
        IrOp::BoolXor => emit_binop(insn, "!=", stmt_idx, ctx),

        // -- Comparisons --
        IrOp::IntEqual | IrOp::FloatEqual => emit_binop(insn, "==", stmt_idx, ctx),
        IrOp::IntNotequal | IrOp::FloatNotequal => emit_binop(insn, "!=", stmt_idx, ctx),
        IrOp::IntLess | IrOp::IntSless | IrOp::FloatLess => emit_binop(insn, "<", stmt_idx, ctx),
        IrOp::IntLessequal | IrOp::IntSlessequal | IrOp::FloatLessequal => {
            emit_binop(insn, "<=", stmt_idx, ctx)
        }

        // -- Unary ops --
        IrOp::IntNegate | IrOp::BoolNegate => emit_unaryop(insn, "!", stmt_idx, ctx),
        IrOp::Int2comp | IrOp::FloatNeg => emit_unaryop(insn, "-", stmt_idx, ctx),

        // -- Copy / move --
        IrOp::Copy => {
            if insn.inputs.is_empty() {
                "0".to_string()
            } else {
                emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
            }
        }

        // -- Load --
        IrOp::Load => {
            if insn.inputs.len() >= 2 {
                let addr = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                format!("*(void **)({})", addr)
            } else if !insn.inputs.is_empty() {
                let addr = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                format!("*(void **)({})", addr)
            } else {
                "/* LOAD (bad arity) */ 0".to_string()
            }
        }

        // -- Extensions --
        IrOp::IntZext | IrOp::IntSext => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
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
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
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
        IrOp::Ptradd => emit_binop(insn, "+", stmt_idx, ctx),
        IrOp::Ptrsub => emit_binop(insn, "-", stmt_idx, ctx),

        // -- Float conversions --
        IrOp::FloatInt2float => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
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
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
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
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
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
        IrOp::FloatAbs => emit_call1(insn, "fabs", stmt_idx, ctx),
        IrOp::FloatSqrt => emit_call1(insn, "sqrt", stmt_idx, ctx),
        IrOp::FloatCeil => emit_call1(insn, "ceil", stmt_idx, ctx),
        IrOp::FloatFloor => emit_call1(insn, "floor", stmt_idx, ctx),
        IrOp::FloatRound => emit_call1(insn, "round", stmt_idx, ctx),
        IrOp::FloatTrunc => emit_call1(insn, "trunc", stmt_idx, ctx),
        IrOp::FloatNan => emit_call1(insn, "isnan", stmt_idx, ctx),

        // -- Bit manipulation --
        IrOp::Popcount => emit_call1(insn, "__builtin_popcount", stmt_idx, ctx),
        IrOp::Lzcount => emit_call1(insn, "__builtin_clz", stmt_idx, ctx),

        // -- Piece/Subpiece --
        IrOp::Piece => {
            if insn.inputs.len() >= 2 {
                let hi = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let lo = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                let shift = (insn.inputs[1].size as u32) * 8;
                format!("(({}) << {}) | ({})", hi, shift, lo)
            } else {
                "0".to_string()
            }
        }
        IrOp::Subpiece => {
            if insn.inputs.len() >= 2 {
                let src = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
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
                let a = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let b = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
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
                emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
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

fn emit_binop(insn: &IrInsn, op: &str, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let lhs = if !insn.inputs.is_empty() {
        emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
    } else {
        "0".to_string()
    };
    let rhs = if insn.inputs.len() >= 2 {
        emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx)
    } else {
        "0".to_string()
    };
    format!("{} {} {}", lhs, op, rhs)
}

fn emit_unaryop(insn: &IrInsn, op: &str, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let operand = if !insn.inputs.is_empty() {
        emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
    } else {
        "0".to_string()
    };
    format!("{}{}", op, operand)
}

fn emit_call1(insn: &IrInsn, func: &str, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let arg = if !insn.inputs.is_empty() {
        emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
    } else {
        "0".to_string()
    };
    format!("{}({})", func, arg)
}

// ---------------------------------------------------------------------------
// Operand rendering
// ---------------------------------------------------------------------------

fn emit_operand_resolved(
    vn: &unlace_ir::Varnode,
    _raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    if vn.space == SpaceId::Const {
        return format_constant(vn.offset, vn.size);
    }
    if let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx).cloned() {
        for sv in &inputs {
            if sv.base == *vn {
                return ctx.name_of(sv);
            }
        }
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
            foldable_exprs: std::collections::BTreeSet::new(),
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
            foldable_exprs: std::collections::BTreeSet::new(),
        };

        let output = print_c(&func);
        assert!(
            output.contains("void * with_params(int a, void * b)"),
            "params: {output}"
        );
    }

    #[test]
    fn test_ssa_version_names() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);
        let c2 = con(2, 4);
        let c3 = con(3, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r0,
                smallvec![c1],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c2],
                0x1004,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c3],
                0x1008,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: r0,
                version: 2,
            })),
        ];

        let func = make_func("ssa_test", body);
        let output = print_c(&func);

        let var_decls: Vec<&str> = output
            .lines()
            .filter(|l| l.trim_start().starts_with("int v") && l.trim_end().ends_with(';'))
            .collect();

        assert!(
            var_decls.len() >= 3,
            "expected at least 3 variable declarations, got {}: {var_decls:?}\n\nfull output:\n{output}",
            var_decls.len(),
        );

        let assignment_lhs: Vec<&str> = output
            .lines()
            .filter_map(|l| {
                let trimmed = l.trim();
                if trimmed.contains(" = ") && !trimmed.starts_with("if") {
                    trimmed.split(" = ").next()
                } else {
                    None
                }
            })
            .collect();

        assert!(
            assignment_lhs.len() >= 3,
            "expected at least 3 assignments, got {}: {assignment_lhs:?}\n\nfull output:\n{output}",
            assignment_lhs.len(),
        );

        let unique: std::collections::BTreeSet<&&str> = assignment_lhs.iter().collect();
        assert_eq!(
            unique.len(),
            assignment_lhs.len(),
            "expected all assignment LHS names to be distinct: {assignment_lhs:?}\n\nfull output:\n{output}",
        );

        // Second statement should read the first's output, not its own.
        let second_line = output
            .lines()
            .find(|l| l.contains(" + 2;"))
            .expect("should find second add line");
        let parts: Vec<&str> = second_line.trim().splitn(2, " = ").collect();
        assert_eq!(parts.len(), 2);
        let lhs_name = parts[0];
        let rhs = parts[1];
        assert!(
            !rhs.starts_with(lhs_name),
            "RHS should read a different variable than LHS: {second_line}\n\nfull output:\n{output}",
        );
    }

    #[test]
    fn test_print_ternary() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);
        let c2 = con(2, 4);

        let body = vec![
            HirNode::Ternary {
                cond: sv(0, 4),
                then_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
                else_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c2], 0x1010),
                output: r0,
            },
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("ternary_func", body);
        let output = print_c(&func);

        assert!(
            output.contains("?") && output.contains(":"),
            "should contain ternary operator: {output}"
        );
        let ternary_line = output
            .lines()
            .find(|l| l.contains("?"))
            .expect("should find ternary line");
        assert!(
            ternary_line.contains(" = ") && ternary_line.contains(" ? ") && ternary_line.contains(" : "),
            "ternary should be `lhs = cond ? a : b;`, got: {ternary_line}"
        );
    }

    #[test]
    fn test_print_ternary_compiles() {
        let gcc_available = std::process::Command::new("gcc")
            .arg("--version")
            .output()
            .is_ok();
        if !gcc_available {
            eprintln!("gcc not found, skipping test_print_ternary_compiles");
            return;
        }

        let r0 = reg(0, 4);
        let c1 = con(1, 4);
        let c2 = con(2, 4);

        let body = vec![
            HirNode::Ternary {
                cond: sv(0, 4),
                then_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
                else_insn: IrInsn::with_output(IrOp::Copy, r0, smallvec![c2], 0x1010),
                output: r0,
            },
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("ternary_compile_test", body);
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
            "gcc -fsyntax-only failed on ternary:\n--- source ---\n{}\n--- stderr ---\n{}",
            source,
            String::from_utf8_lossy(&output.stderr),
        );
    }
}
