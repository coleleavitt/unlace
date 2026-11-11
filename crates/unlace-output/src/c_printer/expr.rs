//! c_printer: expr.

use super::*;

// ---------------------------------------------------------------------------
// Expression emission
// ---------------------------------------------------------------------------

pub(super) fn emit_expr(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let _span = cprinter_detail_phase("cprinter.emit.expr");
    trace_full(format_args!(
        "emit-expr-enter stmt={stmt_idx} addr=0x{:x} op={:?} inputs={:?} output={:?}",
        insn.addr, insn.op, insn.inputs, insn.output
    ));
    let rendered = emit_expr_with_prec(insn, stmt_idx, ParentCtx::top(), ctx);
    trace_full(format_args!(
        "emit-expr-result stmt={stmt_idx} addr=0x{:x} op={:?} rendered={rendered:?}",
        insn.addr, insn.op
    ));
    rendered
}

pub(super) fn emit_expr_with_prec(
    insn: &IrInsn,
    stmt_idx: u32,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    let _span = cprinter_detail_phase("cprinter.emit.operand");
    trace_full(format_args!(
        "emit-expr-prec-enter stmt={stmt_idx} addr=0x{:x} op={:?} parent={parent:?} inputs={:?} output={:?}",
        insn.addr, insn.op, insn.inputs, insn.output
    ));
    let rendered = match insn.op {
        // -- Binary arithmetic/bitwise --
        IrOp::IntAdd if instruction_pointer_operand(insn, stmt_idx, ctx).is_some() => {
            // The x86 lifter adds the RIP register to a displacement the
            // decoder already resolved to the absolute target, so the sum is
            // that target.
            let other = 1 - instruction_pointer_operand(insn, stmt_idx, ctx).unwrap_or(0);
            emit_operand_resolved(&insn.inputs[other], other, stmt_idx, ctx)
        }
        IrOp::IntAdd | IrOp::IntSub | IrOp::Ptradd
            if let Some(sum) = try_typed_pointer_sum(insn, stmt_idx, ctx) =>
        {
            if needs_parens(IrOp::IntAdd, parent) {
                format!("({sum})")
            } else {
                sum
            }
        }
        IrOp::IntAdd | IrOp::FloatAdd => emit_binop(insn, "+", stmt_idx, parent, ctx),
        IrOp::IntSub | IrOp::FloatSub => emit_binop(insn, "-", stmt_idx, parent, ctx),
        IrOp::IntMult | IrOp::FloatMult => emit_binop(insn, "*", stmt_idx, parent, ctx),
        IrOp::IntSdiv | IrOp::FloatDiv => emit_binop(insn, "/", stmt_idx, parent, ctx),
        IrOp::IntDiv => emit_unsigned_binop(insn, "/", stmt_idx, parent, ctx),
        IrOp::IntSrem => emit_binop(insn, "%", stmt_idx, parent, ctx),
        IrOp::IntRem => emit_unsigned_binop(insn, "%", stmt_idx, parent, ctx),
        IrOp::IntAnd => {
            if insn.inputs.len() >= 2
                && insn.inputs[1].space == SpaceId::Const
                && insn.inputs[1].offset == 0
            {
                return "0".to_string();
            }
            // t255: recognize IDA-style byte/word truncation masks.
            //   `x & 0xFF`   → LOBYTE(x)
            //   `x & 0xFFFF` → LOWORD(x)
            // These render as Hex-Rays macros (declared in IDA_TYPEDEFS)
            // rather than raw `&`-expressions to match decompiler output.
            if let Some(macro_str) = try_emit_int_and_byte_macro(insn, stmt_idx, ctx) {
                return macro_str;
            }
            emit_binop(insn, "&", stmt_idx, parent, ctx)
        }
        IrOp::IntOr => {
            if insn.inputs.len() >= 2
                && insn.inputs[1].space == SpaceId::Const
                && insn.inputs[1].offset == 0
            {
                return emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
            }
            emit_binop(insn, "|", stmt_idx, parent, ctx)
        }
        IrOp::IntXor => {
            if insn.inputs.len() >= 2
                && insn.inputs[0] == insn.inputs[1]
                && insn.inputs[0].space != SpaceId::Const
            {
                return "0".to_string();
            }
            emit_binop(insn, "^", stmt_idx, parent, ctx)
        }
        IrOp::IntLeft => emit_binop(insn, "<<", stmt_idx, parent, ctx),
        IrOp::IntSright => emit_binop(insn, ">>", stmt_idx, parent, ctx),
        IrOp::IntRight => {
            // t255: recognize Hex-Rays byte-extract / dword-extract patterns.
            //   `(x & 0xFF00) >> 8`  → BYTE1(x)
            //   `(x & 0xFF0000) >> 16` (DWORD result) → BYTE2(x)
            //   `(x & 0xFF000000) >> 24` (DWORD result) → BYTE3(x)
            //   `x >> 16` (DWORD)    → HIWORD(x)
            //   `x >> 32` (QWORD)    → HIDWORD(x)
            if let Some(macro_str) = try_emit_int_right_byte_macro(insn, stmt_idx, ctx) {
                return macro_str;
            }
            emit_unsigned_binop(insn, ">>", stmt_idx, parent, ctx)
        }

        // -- Boolean ops --
        IrOp::BoolAnd => emit_binop(insn, "&&", stmt_idx, parent, ctx),
        IrOp::BoolOr => emit_binop(insn, "||", stmt_idx, parent, ctx),
        IrOp::BoolXor => emit_binop(insn, "^", stmt_idx, parent, ctx),

        // -- Comparisons --
        IrOp::IntEqual | IrOp::FloatEqual => emit_binop(insn, "==", stmt_idx, parent, ctx),
        IrOp::IntNotequal | IrOp::FloatNotequal => emit_binop(insn, "!=", stmt_idx, parent, ctx),
        IrOp::IntSless | IrOp::FloatLess => {
            // t256: recognize the open-coded signed-overflow polynomial
            //   (a^b^-1) & (a^(a+b)) < 0  → __OFADD__(a, b)
            //   (a^b)    & (a^(a-b)) < 0  → __OFSUB__(a, b)
            // These are what compilers emit for `__builtin_add_overflow_p`
            // when the carry flag is rematerialized from operands rather
            // than read from CF. IntScarry / IntSborrow ops are emitted
            // separately above; this peephole catches the rebuilt form
            // that survives into typed IR after copy-prop.
            if let Some(macro_str) = try_emit_open_overflow_macro(insn, stmt_idx, ctx) {
                return macro_str;
            }
            emit_binop(insn, "<", stmt_idx, parent, ctx)
        }
        IrOp::IntLess => emit_unsigned_binop(insn, "<", stmt_idx, parent, ctx),
        IrOp::IntSlessequal | IrOp::FloatLessequal => emit_binop(insn, "<=", stmt_idx, parent, ctx),
        IrOp::IntLessequal => emit_unsigned_binop(insn, "<=", stmt_idx, parent, ctx),

        // -- Unary ops --
        IrOp::IntNegate => emit_unaryop(insn, "~", stmt_idx, parent, ctx),
        IrOp::BoolNegate => emit_bool_negate(insn, stmt_idx, parent, ctx),
        IrOp::Int2comp | IrOp::FloatNeg => emit_unaryop(insn, "-", stmt_idx, parent, ctx),

        // -- Conditional select (ternary) --
        IrOp::Select => {
            let cond = if !insn.inputs.is_empty() {
                emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
            } else {
                "0".to_string()
            };
            let true_val = if insn.inputs.len() > 1 {
                emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx)
            } else {
                "0".to_string()
            };
            let false_val = if insn.inputs.len() > 2 {
                emit_operand_resolved(&insn.inputs[2], 2, stmt_idx, ctx)
            } else {
                "0".to_string()
            };
            let expr = format!("{} ? {} : {}", cond, true_val, false_val);
            let rendered = if needs_parens(IrOp::Select, parent) {
                format!("({expr})")
            } else {
                expr
            };
            tracing::debug!(
                target: "unlace::cprinter",
                "emit-select stmt={stmt_idx} parent={parent:?} rendered={rendered:?}"
            );
            rendered
        }

        // -- Copy / move --
        IrOp::Copy => {
            if insn.inputs.is_empty() {
                "0".to_string()
            } else {
                // For a `COPY const → reg`, pick the rendering context from
                // the *destination*'s recovered primitive type:
                //   * `Ptr`   → render `0` as `nullptr`
                //   * `Float` / `Double` → render the bits as a float literal
                //   * otherwise → plain signed integer
                // Non-constant copies fall through to the SSA-name lookup
                // and never reach `format_constant_ctx`, so the context they
                // pass is irrelevant.
                let out_ty = ctx
                    .stmt_outputs
                    .get(&stmt_idx)
                    .cloned()
                    .flatten()
                    .and_then(|sv| ctx.var_types.get(&sv).copied());
                let copy_ctx = if insn.inputs[0].space == SpaceId::Const {
                    match out_ty {
                        Some(PrimitiveType::Ptr) if insn.inputs[0].offset == 0 => {
                            ConstContext::Pointer
                        }
                        Some(PrimitiveType::Float) | Some(PrimitiveType::Double) => {
                            ConstContext::Float
                        }
                        _ => ConstContext::Signed,
                    }
                } else {
                    ConstContext::Signed
                };
                emit_operand_with_prec(&insn.inputs[0], 0, stmt_idx, copy_ctx, parent, ctx)
            }
        }

        // -- Load --
        IrOp::Load => {
            let load_size = insn.output.map_or(8, |o| o.size);
            let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
            if addr_idx < insn.inputs.len() {
                trace_load_render("enter", stmt_idx, insn, addr_idx, load_size, None, None);
                if let Some(canary) = try_fs_canary_load(&insn.inputs[addr_idx], load_size) {
                    trace_load_render(
                        "fs-canary",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(canary.as_str()),
                    );
                    return canary;
                }
                if let Some(canary) = try_macos_canary_load(&insn.inputs[addr_idx], ctx) {
                    trace_load_render(
                        "macos-canary",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(canary.as_str()),
                    );
                    return canary;
                }
                if let Some(value) = try_readonly_scalar_load(
                    &insn.inputs[addr_idx],
                    Some(addr_idx),
                    stmt_idx,
                    load_size,
                    ctx,
                ) {
                    trace_load_render(
                        "readonly",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(value.as_str()),
                    );
                    return value;
                }
                if let Some(object) =
                    try_object_access(&insn.inputs[addr_idx], stmt_idx, load_size, ctx)
                {
                    trace_load_render(
                        "object",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(object.as_str()),
                    );
                    return object;
                }
                if let Some(local) = try_stack_frame_access_name(
                    &insn.inputs[addr_idx],
                    Some(addr_idx),
                    stmt_idx,
                    load_size,
                    ctx,
                ) {
                    trace_load_render(
                        "stack",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(local.as_str()),
                    );
                    return local;
                }
                if let Some(global) = try_global_var_name(
                    &insn.inputs[addr_idx],
                    Some(addr_idx),
                    stmt_idx,
                    load_size,
                    ctx,
                ) {
                    trace_load_render(
                        "global",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(global.as_str()),
                    );
                    return global;
                }
                if let Some(resolved) =
                    try_typed_access(&insn.inputs[addr_idx], stmt_idx, load_size, ctx)
                {
                    trace_load_render(
                        "field-from-addr",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(resolved.as_str()),
                    );
                    return resolved;
                }
                // t231: array-of-struct field access — runs before the
                // generic field/subscript paths so the typed form
                // `arr<N>[i].field_<offset>` wins over the raw
                // `*(arr + STRIDE*i + offset)` rendering whenever the
                // base pointer was recovered into `array_struct_layouts`.
                if let Some(field) =
                    try_array_struct_field_access(&insn.inputs[addr_idx], stmt_idx, load_size, ctx)
                {
                    trace_load_render(
                        "array-struct-field",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(field.as_str()),
                    );
                    return field;
                }
                if let Some(sub) =
                    try_array_subscript(&insn.inputs[addr_idx], stmt_idx, load_size, ctx)
                {
                    // Batch 11 slice 2: route subscript loads through CExpr.
                    trace_pipeline(format!(
                        "emit-load stmt={stmt_idx} size={load_size} form=subscript base={:?} index={:?}",
                        sub.base, sub.index
                    ));
                    let rendered =
                        CExpr::index(CExpr::lit(sub.base), CExpr::lit(sub.index)).to_string();
                    trace_load_render(
                        "array-subscript",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        None,
                        Some(rendered.as_str()),
                    );
                    return rendered;
                }
                let is_mmio = insn.inputs[addr_idx].space == SpaceId::Const
                    && ctx.mmio_addrs.contains(&insn.inputs[addr_idx].offset);
                if let Some(memory) =
                    try_emit_memory_annotation(&insn.inputs[addr_idx], stmt_idx, ctx)
                {
                    // t257: wrap MEMORY[…] with load-sized cast. t259: add
                    // `volatile` when classified as MMIO.
                    //
                    // TODO(Batch 11 slice 2): this path emits
                    // `*(_QWORD *)MEMORY[…]` — no parens around the
                    // MEMORY[…] subexpression.  Routing through
                    // `CExpr::deref(CExpr::cast(...))` would insert them
                    // (CExpr::Cast always wraps its inner), which changes
                    // the t257 golden assertion at the MEMORY[…] test.
                    // Leave as-is until CExpr::Cast learns to elide parens
                    // around already-postfix operands.
                    let cast = ida_ptr_type(load_size);
                    let cast_prim = cast.trim_end_matches(" *");
                    let rendered = if load_size == 1 && !is_mmio {
                        memory
                    } else if is_mmio {
                        format!("*(volatile {} *){}", cast_prim, memory)
                    } else {
                        format!("*({} *){}", cast_prim, memory)
                    };
                    trace_load_render(
                        "memory-annotation",
                        stmt_idx,
                        insn,
                        addr_idx,
                        load_size,
                        Some(is_mmio),
                        Some(rendered.as_str()),
                    );
                    return rendered;
                }
                let addr =
                    emit_memory_address_operand(&insn.inputs[addr_idx], addr_idx, stmt_idx, ctx);
                let cast = ida_ptr_type(load_size);
                // t259: when the address was classified as MMIO by the
                // tight-succession heuristic, qualify the dereference cast
                // with `volatile`.
                // Batch 11 slice 2: route `*(T*)(addr)` loads through CExpr.
                let cast_ty = if is_mmio {
                    format!("volatile {}", cast)
                } else {
                    cast.to_string()
                };
                // Emit-time form trace: this is the raw `*(T *)(addr)` fallback —
                // the form a conflated pointer/scalar base (`*(c7)`) renders as.
                // Logging the base here shows exactly which value is being
                // dereferenced as a pointer (cross-check against its decl type).
                trace_pipeline(format!(
                    "emit-load stmt={stmt_idx} size={load_size} form=raw-deref addr={addr:?}"
                ));
                let rendered = CExpr::deref(CExpr::cast(cast_ty, CExpr::lit(addr))).to_string();
                trace_load_render(
                    "raw-deref",
                    stmt_idx,
                    insn,
                    addr_idx,
                    load_size,
                    Some(is_mmio),
                    Some(rendered.as_str()),
                );
                rendered
            } else {
                trace_load_render("bad-arity", stmt_idx, insn, addr_idx, load_size, None, None);
                "/* LOAD (bad arity) */ 0".to_string()
            }
        }

        // -- Extensions --
        // `IntZext` / `IntSext` are explicit type-changing ops, but the
        // surface cast is redundant when flow-sensitive inference already
        // knows the operand has the extension source type and signedness.
        // This catches patterns like `(int)(short)x` where `x` is already a
        // signed 16-bit value: the C usual integer promotions perform the same
        // widening in expression context, so the printed cast is pure noise.
        IrOp::IntZext | IrOp::IntSext => {
            if !insn.inputs.is_empty() {
                let from_ty = flow_type_for_input(&insn.inputs[0], stmt_idx, ctx);
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    if is_redundant_widen(insn.op, &insn.inputs[0], output.size)
                        || is_redundant_typed_extension(
                            insn.op,
                            from_ty,
                            insn.inputs[0].size,
                            output.size,
                        )
                    {
                        return op;
                    }
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
                let from_ty = flow_type_for_input(&insn.inputs[0], stmt_idx, ctx);
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    if is_redundant_same_size_cast(&insn.inputs[0], output.size) {
                        return op;
                    }
                    let to_ty = primitive_for_size(output.size, true);
                    if !should_emit_cast(from_ty, to_ty) {
                        return op;
                    }
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
        IrOp::Ptradd => emit_binop(insn, "+", stmt_idx, parent, ctx),
        IrOp::Ptrsub => emit_binop(insn, "-", stmt_idx, parent, ctx),

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
        IrOp::Popcount => {
            if !insn.inputs.is_empty()
                && insn.inputs[0].space == SpaceId::Const
                && insn.inputs[0].offset == 0
            {
                return "0".to_string();
            }
            emit_call1(insn, "__builtin_popcount", stmt_idx, ctx)
        }
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
                let byte_offset = insn.inputs[1].offset;
                let output_size = insn.output.map_or(0, |v| v.size);
                let input_size = insn.inputs[0].size;
                emit_subpiece_macro(&src, byte_offset, output_size, input_size)
            } else {
                "0".to_string()
            }
        }

        // -- Carry / borrow (emit as comparison) --
        // INT_CARRY: unsigned carry — true when (a + b) wraps around.
        IrOp::IntCarry => {
            if insn.inputs.len() >= 2 {
                let a = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let b = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                format!("({} + {}) < {}", a, b, a)
            } else {
                "0".to_string()
            }
        }
        // INT_SCARRY: signed overflow on addition.
        IrOp::IntScarry => {
            if insn.inputs.len() >= 2 {
                let a = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let b = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                format!("__OFADD__({}, {})", a, b)
            } else {
                "0".to_string()
            }
        }
        // INT_SBORROW: signed overflow on subtraction.
        IrOp::IntSborrow => {
            if insn.inputs.len() >= 2 {
                let a = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                let b = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
                format!("__OFSUB__({}, {})", a, b)
            } else {
                "0".to_string()
            }
        }

        // -- Call with output --
        IrOp::Call | IrOp::Callind => {
            let base = if insn.op == IrOp::Callind {
                emit_callind_cast(insn, stmt_idx, ctx)
            } else {
                emit_direct_call_expr(insn, stmt_idx, ctx)
            };
            if let Some(c) = forwarded_call_comment(insn, ctx) {
                format!("{} {}", base, c)
            } else {
                base
            }
        }

        // -- Unknown / unimplemented instruction --
        IrOp::Unimplemented => format!("__unknown_insn_0x{:X}()", insn.addr),

        // -- SIMD vector operations --
        IrOp::VectorInsert => {
            let args = emit_input_args(insn, stmt_idx, ctx);
            format!("__vector_insert({})", args)
        }
        IrOp::VectorExtract => {
            let args = emit_input_args(insn, stmt_idx, ctx);
            format!("__vector_extract({})", args)
        }
        IrOp::VectorShuffle => {
            let args = emit_input_args(insn, stmt_idx, ctx);
            format!("__vector_shuffle({})", args)
        }

        // -- Atomic / memory-ordering operations --
        IrOp::Fence => {
            let ordering = insn.inputs.first().map(|v| v.offset).unwrap_or(4);
            let name = atomic_ordering_name(ordering);
            format!("__atomic_thread_fence({})", name)
        }
        IrOp::AtomicLoad => {
            let args = emit_input_args(insn, stmt_idx, ctx);
            format!("__atomic_load({})", args)
        }
        IrOp::AtomicStore => {
            let args = emit_input_args(insn, stmt_idx, ctx);
            format!("__atomic_store({})", args)
        }
        IrOp::AtomicRmw => {
            let args = emit_input_args(insn, stmt_idx, ctx);
            format!("__atomic_rmw({})", args)
        }
        IrOp::AtomicCas => {
            let args = emit_input_args(insn, stmt_idx, ctx);
            format!("__atomic_cas({})", args)
        }

        // -- CALLOTHER: resolve to intrinsic name if known --
        IrOp::Callother => emit_callother(insn, stmt_idx, ctx),

        // -- Fallback --
        //
        // Batch 19 DOD: "The printer can fail gracefully with annotated
        // helper calls, but it does not emit invalid C for ordinary
        // supported constructs." We render unsupported opcodes as
        // `__unlace_<opname>(args)` — a syntactically-valid call
        // expression that preserves both the opcode identifier *and* the
        // input operands, so downstream passes / readers still see the
        // dataflow rather than a bare `0` placeholder.
        _ => emit_unsupported_op_helper(insn, stmt_idx, ctx),
    };
    trace_full(format_args!(
        "emit-expr-prec-result stmt={stmt_idx} addr=0x{:x} op={:?} parent={parent:?} rendered={rendered:?}",
        insn.addr, insn.op
    ));
    rendered
}

/// Render an unsupported opcode as `__unlace_<opname>(arg, arg, ...)`.
///
/// Used by the expression and statement fallbacks; the resulting
/// expression is well-formed C and keeps the input dataflow visible
/// (a `/* OP */ 0` placeholder would silently drop both the operands
/// and the name from any downstream textual analysis).
pub(super) fn unsupported_helper_name(insn: &IrInsn) -> String {
    let mut s = String::with_capacity("__unlace_".len() + 12);
    s.push_str("__unlace_");
    for ch in insn.op.name().chars() {
        s.push(ch.to_ascii_lowercase());
    }
    s
}

pub(super) fn emit_unsupported_op_helper(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    let name = unsupported_helper_name(insn);
    let args = emit_input_args(insn, stmt_idx, ctx);
    format!("{name}({args})")
}

/// Render all inputs of an instruction as a comma-separated argument list.
pub(super) fn emit_input_args(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    insn.inputs
        .iter()
        .enumerate()
        .map(|(i, vn)| emit_operand_resolved(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ")
}

/// Map an atomic ordering constant to its C11 name.
pub(super) fn atomic_ordering_name(ordering: u64) -> &'static str {
    match ordering {
        0 => "memory_order_relaxed",
        1 => "memory_order_acquire",
        2 => "memory_order_release",
        3 => "memory_order_acq_rel",
        _ => "memory_order_seq_cst",
    }
}

pub(super) fn emit_binop(
    insn: &IrInsn,
    op: &str,
    stmt_idx: u32,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    let const_ctx = const_context_for_op(insn.op);
    let lhs_ctx = if insn.inputs.len() >= 2 {
        const_context_for_binop_pair(insn, 0, stmt_idx, ctx)
    } else {
        const_ctx
    };
    let rhs_ctx = if insn.inputs.len() >= 2 {
        const_context_for_binop_pair(insn, 1, stmt_idx, ctx)
    } else {
        const_ctx
    };
    let lhs = if !insn.inputs.is_empty() {
        emit_operand_with_prec(
            &insn.inputs[0],
            0,
            stmt_idx,
            lhs_ctx,
            ParentCtx::lhs_of(insn.op),
            ctx,
        )
    } else {
        "0".to_string()
    };
    let rhs = if insn.inputs.len() >= 2 {
        emit_operand_with_prec(
            &insn.inputs[1],
            1,
            stmt_idx,
            rhs_ctx,
            ParentCtx::rhs_of(insn.op),
            ctx,
        )
    } else {
        "0".to_string()
    };

    let bare = if const_ctx == ConstContext::Signed
        && op == "+"
        && insn.inputs.len() >= 2
        && insn.inputs[1].space == SpaceId::Const
    {
        let v = insn.inputs[1].offset;
        let sz = insn.inputs[1].size;
        let msb = match sz {
            1 => 0x80u64,
            2 => 0x8000,
            4 => 0x8000_0000,
            8 => 0x8000_0000_0000_0000,
            _ => u64::MAX,
        };
        if sz <= 8 && v >= msb {
            let signed = sign_extend(v, sz);
            let abs_val = signed.unsigned_abs();
            let should_negate = sz >= 4 || (sz == 2 && abs_val <= 128);
            if should_negate {
                Some(format!("{} - {}", lhs, abs_val))
            } else {
                None
            }
        } else {
            None
        }
    } else {
        None
    };

    let expr = bare.unwrap_or_else(|| format!("{} {} {}", lhs, op, rhs));
    if needs_parens(insn.op, parent) {
        format!("({})", expr)
    } else {
        expr
    }
}

pub(super) fn emit_unaryop(
    insn: &IrInsn,
    op: &str,
    stmt_idx: u32,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    // Operand of a unary prefix is in unary context — for a leaf operand
    // this won't paren, but a binary sub-expression beneath the unary will
    // be forced to paren by the "parent strictly tighter" branch.
    let operand = if !insn.inputs.is_empty() {
        emit_operand_with_prec(
            &insn.inputs[0],
            0,
            stmt_idx,
            ConstContext::Signed,
            ParentCtx::lhs_of(insn.op),
            ctx,
        )
    } else {
        "0".to_string()
    };
    let bare = format!("{}{}", op, operand);
    if needs_parens(insn.op, parent) {
        format!("({})", bare)
    } else {
        bare
    }
}

pub(super) fn negate_comparison(op: IrOp) -> Option<&'static str> {
    match op {
        IrOp::IntLess => Some(">="),
        IrOp::IntLessequal => Some(">"),
        IrOp::IntEqual | IrOp::FloatEqual => Some("!="),
        IrOp::IntNotequal | IrOp::FloatNotequal => Some("=="),
        IrOp::IntSless | IrOp::FloatLess => Some(">="),
        IrOp::IntSlessequal | IrOp::FloatLessequal => Some(">"),
        _ => None,
    }
}

pub(super) fn emit_bool_negate(
    insn: &IrInsn,
    stmt_idx: u32,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    if !insn.inputs.is_empty() && insn.inputs[0].space != SpaceId::Const {
        let input_vn = &insn.inputs[0];
        let resolved_sv = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .cloned()
            .and_then(|inputs| inputs.iter().find(|sv| sv.base == *input_vn).copied());
        let sv = resolved_sv.unwrap_or(SsaVarnode {
            base: *input_vn,
            version: 0,
        });

        if let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv)
            && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
            && let Some(negated_op) = negate_comparison(def_insn.op)
        {
            let is_unsigned = matches!(def_insn.op, IrOp::IntLess | IrOp::IntLessequal);
            if is_unsigned {
                return emit_unsigned_binop(&def_insn, negated_op, def_stmt, parent, ctx);
            }
            return emit_binop(&def_insn, negated_op, def_stmt, parent, ctx);
        }
    }

    emit_unaryop(insn, "!", stmt_idx, parent, ctx)
}

pub(super) fn emit_call1(insn: &IrInsn, func: &str, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let arg = if !insn.inputs.is_empty() {
        emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
    } else {
        "0".to_string()
    };
    format!("{}({})", func, arg)
}

pub(super) fn emit_unsigned_binop(
    insn: &IrInsn,
    op: &str,
    stmt_idx: u32,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    let const_ctx = ConstContext::Bitwise;
    let lhs = if !insn.inputs.is_empty() {
        let raw = emit_operand_with_prec(
            &insn.inputs[0],
            0,
            stmt_idx,
            const_ctx,
            ParentCtx::lhs_of(insn.op),
            ctx,
        );
        let ty = type_for_size(insn.inputs[0].size, false);
        format!("({}){}", ty, raw)
    } else {
        "0".to_string()
    };
    let rhs = if insn.inputs.len() >= 2 {
        if op == ">>" {
            emit_operand_with_prec(
                &insn.inputs[1],
                1,
                stmt_idx,
                const_ctx,
                ParentCtx::rhs_of(insn.op),
                ctx,
            )
        } else {
            let raw = emit_operand_with_prec(
                &insn.inputs[1],
                1,
                stmt_idx,
                const_ctx,
                ParentCtx::rhs_of(insn.op),
                ctx,
            );
            let ty = type_for_size(insn.inputs[1].size, false);
            format!("({}){}", ty, raw)
        }
    } else {
        "0".to_string()
    };
    let expr = format!("{} {} {}", lhs, op, rhs);
    if needs_parens(insn.op, parent) {
        format!("({})", expr)
    } else {
        expr
    }
}
