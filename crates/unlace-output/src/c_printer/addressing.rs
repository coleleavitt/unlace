//! c_printer: addressing.

use super::*;

// ---------------------------------------------------------------------------
// Array subscript recovery
// ---------------------------------------------------------------------------

/// Result of array subscript pattern matching on an address expression.
pub(super) struct ArraySubscript {
    /// The base expression (already rendered as a C string).
    pub(super) base: String,
    /// The index expression (already rendered as a C string).
    pub(super) index: String,
}

/// Parenthesise a base expression for use as the array operand of a `[...]`
/// subscript when it is not a postfix-atomic expression. The subscript operator
/// `[]` binds tighter than a prefix cast/deref, so `*(_QWORD *)(p)[i]` parses as
/// `*( ((_QWORD*)p)[i] )` — i.e. the cast applies to `p[i]`, not the indexed
/// value. A base such as `*(_QWORD *)(buf + 8)` must therefore be wrapped:
/// `(*(_QWORD *)(buf + 8))[i]`. A bare identifier, an already-parenthesised
/// expression, or a postfix chain (ends with `]`/`)` and starts atomically) is
/// left as-is.
pub(super) fn paren_if_non_atomic_base(base: &str) -> String {
    let b = base.trim();
    // Bare identifier (incl. `a1`, `v3`, `buf`, dotted/`->` chains, postfix
    // `x[...]`/`x(...)`): atomic enough that `b[i]` binds correctly.
    let is_ident_char = |c: char| c.is_ascii_alphanumeric() || c == '_';
    let atomic_ident = !b.is_empty()
        && b.chars()
            .next()
            .is_some_and(|c| c.is_ascii_alphabetic() || c == '_')
        && b.chars().all(is_ident_char);
    // Already fully wrapped in one pair of parens.
    let fully_parenthesised = b.starts_with('(') && b.ends_with(')') && {
        // Verify the leading '(' matches the trailing ')'.
        let mut depth = 0i32;
        let mut matched_at_end = true;
        for (i, c) in b.char_indices() {
            match c {
                '(' => depth += 1,
                ')' => {
                    depth -= 1;
                    if depth == 0 && i != b.len() - 1 {
                        matched_at_end = false;
                    }
                }
                _ => {}
            }
        }
        matched_at_end && depth == 0
    };
    if atomic_ident || fully_parenthesised {
        base.to_string()
    } else {
        format!("({base})")
    }
}

/// Try to recognise an array subscript pattern in the address computation of a
/// LOAD or STORE instruction.
///
/// Patterns recognised (all single-level only):
///
/// 1. `INT_ADD(base, INT_MULT(index, Const(stride)))` where `stride == access_size`
/// 2. `PTRADD(base, index, Const(stride))` where `stride == access_size`
/// 3. `INT_ADD(base, Const(offset))` where `offset % access_size == 0` (constant index)
///
/// Returns `None` if no pattern matches or if the stride doesn't match the
/// access size (keeping the existing pointer dereference form).
///
/// Decomposition of an address SSA chain for a frame-base-relative,
/// variable-indexed access. The address has the shape
/// `frame_base (+/- const) + index*stride` in any associativity; this collects
/// the accumulated constant displacement (relative to the frame base) and the
/// single non-constant `index*stride` term. The frame base itself contributes
/// `0` (it is the origin of `resolve_stack_offset_for_addr`).
pub(super) struct FrameIndexedDecomp {
    /// Frame-relative byte offset of the array base (the recovered local lives
    /// here). This is the sum of every constant displacement folded into the
    /// address, plus the frame-base origin (0).
    pub(super) frame_offset: i64,
    /// SSA varnode of the index operand (multiplied by `stride`).
    pub(super) index_vn: Varnode,
    /// The statement in which `index_vn` is an operand (the INT_MULT/INT_LEFT
    /// term), used to resolve the index expression to the right SSA version.
    pub(super) index_stmt: u32,
    /// Raw operand position of `index_vn` in `index_stmt`, if known.
    pub(super) index_raw_idx: Option<usize>,
    /// Element stride in bytes (the multiplier / `1 << shift`).
    pub(super) stride: u64,
}

/// Recursively decompose `vn` (an address operand of stmt `stmt_idx`) into a
/// constant frame-relative displacement plus one variable `index*stride` term,
/// rooted at the frame-base register. Returns `None` if the chain is not of that
/// shape (e.g. no frame base, no single index term, two index terms, etc.).
///
/// Handles both outer associativities (`(frame+idx*s)+C` and `(frame+C)+idx*s`,
/// and the `INT_SUB`-outer `(frame+idx*s)-C` form) and both index encodings
/// (`INT_MULT(index, Const(stride))` and `INT_LEFT(index, Const(shift))`).
pub(super) fn decompose_frame_indexed(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> Option<FrameIndexedDecomp> {
    const MAX_DEPTH: u8 = 12;
    if depth > MAX_DEPTH {
        return None;
    }

    // Reaching the frame base contributes a zero displacement and no index term;
    // a higher frame must supply the index for this to be a valid array access.
    if is_frame_base_reg_ctx(vn, ctx) || is_x86_frame_base(vn) {
        return Some(FrameIndexedDecomp {
            frame_offset: frame_base_offset_ctx(vn, stmt_idx, ctx),
            index_vn: *vn,
            index_stmt: stmt_idx,
            index_raw_idx: raw_idx,
            stride: 0,
        });
    }
    if vn.space == SpaceId::Const || vn.space == SpaceId::Stack {
        return None;
    }

    let sv = input_or_latest_sv_for_operand(vn, raw_idx, stmt_idx, ctx)?;
    let def_stmt = defining_stmt_for_sv(&sv, ctx)?;
    let def = ctx.stmt_insns.get(&def_stmt)?.clone();

    match def.op {
        IrOp::Copy if !def.inputs.is_empty() => {
            decompose_frame_indexed(&def.inputs[0], Some(0), def_stmt, ctx, depth + 1)
        }
        IrOp::IntAdd | IrOp::IntSub if def.inputs.len() >= 2 => {
            let (a, b) = (&def.inputs[0], &def.inputs[1]);
            // Constant displacement folded in (INT_SUB negates the rhs const).
            if b.space == SpaceId::Const {
                let mut inner = decompose_frame_indexed(a, Some(0), def_stmt, ctx, depth + 1)?;
                let c = signed_const_value(b);
                inner.frame_offset = inner.frame_offset.wrapping_add(if def.op == IrOp::IntSub {
                    c.wrapping_neg()
                } else {
                    c
                });
                return Some(inner);
            }
            if a.space == SpaceId::Const && def.op == IrOp::IntAdd {
                let mut inner = decompose_frame_indexed(b, Some(1), def_stmt, ctx, depth + 1)?;
                inner.frame_offset = inner.frame_offset.wrapping_add(signed_const_value(a));
                return Some(inner);
            }
            // Neither operand is constant: one side must carry the frame base /
            // accumulated offset and the other the single index*stride term.
            for (frame_pos, idx_pos) in [(0, 1), (1, 0)] {
                let frame_input = &def.inputs[frame_pos];
                let idx_input = &def.inputs[idx_pos];
                let Some(mut inner) =
                    decompose_frame_indexed(frame_input, Some(frame_pos), def_stmt, ctx, depth + 1)
                else {
                    continue;
                };
                // The frame side must not itself already carry an index term.
                if inner.stride != 0 {
                    continue;
                }
                let Some((index_vn, index_stmt, index_raw_idx, stride)) =
                    extract_index_term(idx_input, Some(idx_pos), def_stmt, ctx)
                else {
                    continue;
                };
                inner.index_vn = index_vn;
                inner.index_stmt = index_stmt;
                inner.index_raw_idx = index_raw_idx;
                inner.stride = stride;
                return Some(inner);
            }
            None
        }
        _ => None,
    }
}

/// Recognise an `index*stride` term: either `INT_MULT(index, Const(stride))` or
/// `INT_LEFT(index, Const(shift))` (with `stride = 1 << shift`, a power of two).
/// Returns the index varnode, the statement it is an operand of (for SSA
/// resolution of the index expression), its operand position, and the byte
/// stride.
pub(super) fn extract_index_term(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<(Varnode, u32, Option<usize>, u64)> {
    let (mut vn, mut raw_idx, mut stmt_idx) = (*vn, raw_idx, stmt_idx);
    // Copy chains can be cyclic (loop-carried copies resolved by statement
    // order), so stop at the first revisited definition.
    let mut visited = BTreeSet::new();
    let (def, def_stmt) = loop {
        if vn.space == SpaceId::Const {
            return None;
        }
        let sv = input_or_latest_sv_for_operand(&vn, raw_idx, stmt_idx, ctx)?;
        let def_stmt = defining_stmt_for_sv(&sv, ctx)?;
        if !visited.insert(def_stmt) {
            return None;
        }
        let def = ctx.stmt_insns.get(&def_stmt)?.clone();
        match def.op {
            IrOp::Copy if !def.inputs.is_empty() => {
                (vn, raw_idx, stmt_idx) = (def.inputs[0], Some(0), def_stmt);
            }
            _ => break (def, def_stmt),
        }
    };
    match def.op {
        IrOp::IntMult if def.inputs.len() == 2 => {
            let (idx_vn, stride) = if def.inputs[1].space == SpaceId::Const {
                (&def.inputs[0], def.inputs[1].offset)
            } else if def.inputs[0].space == SpaceId::Const {
                (&def.inputs[1], def.inputs[0].offset)
            } else {
                return None;
            };
            if stride == 0 {
                return None;
            }
            Some((*idx_vn, def_stmt, idx_index_in(&def, idx_vn), stride))
        }
        IrOp::IntLeft if def.inputs.len() == 2 && def.inputs[1].space == SpaceId::Const => {
            let shift = def.inputs[1].offset;
            if shift >= 63 {
                return None;
            }
            let stride = 1u64 << shift;
            let idx_vn = &def.inputs[0];
            Some((*idx_vn, def_stmt, idx_index_in(&def, idx_vn), stride))
        }
        _ => None,
    }
}

pub(super) fn idx_index_in(def: &IrInsn, idx_vn: &Varnode) -> Option<usize> {
    def.inputs.iter().position(|v| v == idx_vn)
}

/// Interpret a constant varnode's `offset` as a signed value at its bit width.
pub(super) fn signed_const_value(vn: &Varnode) -> i64 {
    let bits = (vn.size as u32) * 8;
    if bits == 0 || bits >= 64 {
        return vn.offset as i64;
    }
    let mask = (1u64 << bits) - 1;
    let v = vn.offset & mask;
    let sign_bit = 1u64 << (bits - 1);
    if v & sign_bit != 0 {
        (v | !mask) as i64
    } else {
        v as i64
    }
}

/// Rebase a frame-base-relative, variable-indexed access onto the recovered
/// stack local at the resolved frame offset, rendering a real array subscript on
/// that local's *address* (`((cast *)&v_N)[index]`). This is the single place
/// that turns `buf[i]` (variable index) into a subscript instead of leaking the
/// uninitialised frame-pointer register; the base it produces is the same
/// `&v_N` the address-taken reads use, so the recompiled behaviour matches.
pub(super) fn try_frame_local_indexed_subscript(
    addr_vn: &Varnode,
    stmt_idx: u32,
    access_size: u8,
    ctx: &mut PrintCtx,
) -> Option<ArraySubscript> {
    let decomp = decompose_frame_indexed(addr_vn, Some(1), stmt_idx, ctx, 0)?;
    // A genuine indexed array access needs a real index term.
    if decomp.stride == 0 {
        return None;
    }
    // Only handle the case where the element stride matches the access width;
    // otherwise the subscript element type would not match the access and the
    // raw deref form stays more faithful.
    if decomp.stride != access_size as u64 {
        return None;
    }
    let slot = stack_slot_for_address_offset(decomp.frame_offset, ctx)?;
    // Render the index expression and the rebased base.
    let idx_expr = emit_operand_resolved(
        &decomp.index_vn,
        decomp.index_raw_idx.unwrap_or(0),
        decomp.index_stmt,
        ctx,
    );
    if idx_expr.is_empty() {
        return None;
    }
    let cast = ida_ptr_type(access_size);
    // Build a pointer to the array's first element, then subscript it. The
    // cast-of-pointer is non-atomic, so wrap it: `((_DWORD *)buf_80)[i]` (else
    // the `[i]` binds before the cast). For a buffer slot the name is already an
    // array (decays to a pointer); for a scalar slot we take its address. An
    // interior `delta` adds a byte offset via a `char *` rebase.
    let elem_ptr = if slot.is_buffer {
        // Array name decays to `&name[0]`.
        if slot.delta == 0 {
            format!("({cast}){}", slot.name)
        } else {
            format!("({cast})((char *){} + {})", slot.name, slot.delta)
        }
    } else if slot.delta == 0 {
        format!("({cast})&{}", slot.name)
    } else {
        format!("({cast})((char *)&{} + {})", slot.name, slot.delta)
    };
    Some(ArraySubscript {
        base: paren_if_non_atomic_base(&elem_ptr),
        index: idx_expr,
    })
}

/// `buf[i]` for a variable-indexed access into a recovered stack local.
///
/// Pointer bases are subscripted only through a declared element type (see
/// `cpa`); an untyped `base + k*i` stays a raw `*(T *)(...)`, as in
/// Hex-Rays, because the base is declared as a scalar and `base[i]` would
/// neither compile nor say which width it reads.
pub(super) fn try_array_subscript(
    addr_vn: &Varnode,
    stmt_idx: u32,
    access_size: u8,
    ctx: &mut PrintCtx,
) -> Option<ArraySubscript> {
    if access_size == 0 || addr_vn.space == SpaceId::Const {
        return None;
    }
    try_frame_local_indexed_subscript(addr_vn, stmt_idx, access_size, ctx)
}

// ---------------------------------------------------------------------------
// t231 — Array-of-struct field access recovery
// ---------------------------------------------------------------------------
//
// Pairs with `struct_field_recovery::decompose_address` (in
// `unlace_passes`) and `emit_inferred_struct_preamble` above:
//
// 1. `recover_structs` walks every Load / Store inside a natural loop and
//    decomposes `addr = base + STRIDE*iv + offset`.  The `(base_sv,
//    stride)` pairs become `InferredStruct` entries in
//    `SsaFunction::array_struct_layouts`.
// 2. `emit_inferred_struct_preamble` emits one `struct __anon<N> { … };`
//    per layout (after the t147 stack-frame composites), numbered in
//    BTreeMap iteration order.
// 3. *Here* — `try_array_struct_field_access` — runs the same
//    decomposition against the printer's own SSA bookkeeping
//    (`ctx.stmt_inputs` + `ctx.sv_defining_stmt` + `ctx.stmt_insns`) and,
//    when `base_sv` is a key in `ctx.array_struct_layouts`, emits the
//    typed access form `arr<N>[<iv>].field_<offset>`.
//
// The IV name comes from `ctx.name_overrides` (populated by
// `compute_loop_counter_names` with `i`/`j`/`k`/…) which `name_of`
// already consults, so we can just call `name_of(iv_sv)`.
//
// The `arr<N>` name uses the same `__anon<N>` index baked into
// `ctx.array_struct_indices` so the typed access and the preamble
// declaration stay in lockstep.

/// Decomposed address chain as seen from the printer's data structures.
/// Mirrors `unlace_passes::struct_field_recovery::AddrDecomp` but is
/// derived from `PrintCtx` (which carries only foldable statements) so
/// the printer doesn't need a borrow of the SsaFunction at emit time.
pub(super) struct PrintAddrDecomp {
    pub(super) base_sv: SsaVarnode,
    pub(super) stride: u64,
    pub(super) offset: u64,
    pub(super) iv_sv: SsaVarnode,
}

/// Walk an address SSA varnode looking for the canonical
/// `base + STRIDE*iv + offset` shape using the printer's foldable
/// statement map. Returns `None` if any leg of the chain is not foldable
/// or the multiplicative IV term is missing.
///
/// The decomposer matches the t213 pass's algorithm: const+ssa folds
/// into `offset`, `IntMult(sv, const)` contributes `stride * iv`, and
/// the SSA+SSA `IntAdd` case tries both branches as the IV-bearing one.
pub(super) fn decompose_print_addr(
    sv: SsaVarnode,
    iv_candidates: &BTreeSet<SsaVarnode>,
    ctx: &PrintCtx,
) -> Option<PrintAddrDecomp> {
    let (base_sv, stride, iv_sv, offset) = walk_print_addr(sv, iv_candidates, ctx, 0, 0)?;
    if stride == 0 {
        return None;
    }
    Some(PrintAddrDecomp {
        base_sv,
        stride,
        offset,
        iv_sv,
    })
}

pub(super) fn walk_print_addr(
    sv: SsaVarnode,
    iv_candidates: &BTreeSet<SsaVarnode>,
    ctx: &PrintCtx,
    acc_stride: u64,
    acc_offset: u64,
) -> Option<(SsaVarnode, u64, SsaVarnode, u64)> {
    let &def_stmt = ctx.sv_defining_stmt.get(&sv)?;
    let insn = ctx.stmt_insns.get(&def_stmt)?;
    let inputs = ctx.stmt_inputs.get(&def_stmt);

    fn input_sv(ctx: &PrintCtx, stmt: u32, vn: &unlace_ir::Varnode) -> Option<SsaVarnode> {
        ctx.stmt_inputs
            .get(&stmt)
            .and_then(|svs| svs.iter().find(|s| s.base == *vn).copied())
    }

    match insn.op {
        IrOp::IntAdd if insn.inputs.len() == 2 => {
            let lhs = &insn.inputs[0];
            let rhs = &insn.inputs[1];
            let lhs_const = (lhs.space == SpaceId::Const).then_some(lhs.offset);
            let rhs_const = (rhs.space == SpaceId::Const).then_some(rhs.offset);

            // Const + SSA → fold const into offset, recurse on SSA side.
            if let (Some(c), false) = (lhs_const, rhs.space == SpaceId::Const) {
                let other = input_sv(ctx, def_stmt, rhs)?;
                return walk_print_addr(
                    other,
                    iv_candidates,
                    ctx,
                    acc_stride,
                    acc_offset.wrapping_add(c),
                );
            }
            if let (Some(c), false) = (rhs_const, lhs.space == SpaceId::Const) {
                let other = input_sv(ctx, def_stmt, lhs)?;
                return walk_print_addr(
                    other,
                    iv_candidates,
                    ctx,
                    acc_stride,
                    acc_offset.wrapping_add(c),
                );
            }

            // SSA + SSA — try both sides as the IV-bearing branch.
            let lhs_sv = input_sv(ctx, def_stmt, lhs);
            let rhs_sv = input_sv(ctx, def_stmt, rhs);
            if let (Some(a), Some(b)) = (lhs_sv, rhs_sv) {
                if let Some(left) = walk_print_addr(a, iv_candidates, ctx, acc_stride, acc_offset)
                    && left.1 != 0
                {
                    return Some((b, left.1, left.2, left.3));
                }
                if let Some(right) = walk_print_addr(b, iv_candidates, ctx, acc_stride, acc_offset)
                    && right.1 != 0
                {
                    return Some((a, right.1, right.2, right.3));
                }
            }
            None
        }
        IrOp::IntMult if insn.inputs.len() == 2 => {
            let lhs = &insn.inputs[0];
            let rhs = &insn.inputs[1];
            let (iv_sv_in, k) = if rhs.space == SpaceId::Const {
                let sv_in = input_sv(ctx, def_stmt, lhs)?;
                (sv_in, rhs.offset)
            } else if lhs.space == SpaceId::Const {
                let sv_in = input_sv(ctx, def_stmt, rhs)?;
                (sv_in, lhs.offset)
            } else {
                return None;
            };
            let _ = inputs; // silence unused
            if iv_candidates.contains(&iv_sv_in) {
                Some((iv_sv_in, acc_stride.wrapping_add(k), iv_sv_in, acc_offset))
            } else {
                None
            }
        }
        IrOp::Copy if !insn.inputs.is_empty() => {
            let in_sv = input_sv(ctx, def_stmt, &insn.inputs[0])?;
            walk_print_addr(in_sv, iv_candidates, ctx, acc_stride, acc_offset)
        }
        _ => {
            // Atom — surface as base. The iv slot stays as `sv` and is
            // only meaningful when a sibling branch supplied a non-zero
            // stride (the caller filters `stride == 0` before use).
            Some((sv, acc_stride, sv, acc_offset))
        }
    }
}

/// Try to recognise an array-of-struct access of the shape
/// `*(base + STRIDE*iv + offset)` where `base` matches a recovered
/// layout in `ctx.array_struct_layouts`.
///
/// Returns `Some("arr<N>[<iv>].field_<offset>")` when the access matches.
/// `None` falls through to the `try_array_subscript` / raw `*(T*)(addr)`
/// ladder.
pub(super) fn try_array_struct_field_access(
    addr_vn: &Varnode,
    stmt_idx: u32,
    _access_size: u8,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if ctx.array_struct_layouts.is_empty() || addr_vn.space == SpaceId::Const {
        return None;
    }

    let addr_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *addr_vn).copied())?;

    // Candidate IVs = every SSA varnode whose base [`Varnode`] has a
    // loop-counter name override.  `compute_loop_counter_names` populates
    // `ctx.name_overrides` (keyed by base [`Varnode`]) with `i`/`j`/`k`/…
    // for every `HirNode::For` whose init+update fits the
    // `i = const; i = i + step` shape, so we scan every recorded SSA use
    // for a base with a matching override.
    let mut iv_candidates: BTreeSet<SsaVarnode> = BTreeSet::new();
    for inputs in ctx.stmt_inputs.values() {
        for sv in inputs {
            if ctx.name_overrides.contains_key(&sv.base) {
                iv_candidates.insert(*sv);
            }
        }
    }
    for sv in ctx.stmt_outputs.values().flatten() {
        if ctx.name_overrides.contains_key(&sv.base) {
            iv_candidates.insert(*sv);
        }
    }
    if iv_candidates.is_empty() {
        return None;
    }

    let decomp = decompose_print_addr(addr_sv, &iv_candidates, ctx)?;

    let layout = ctx.array_struct_layouts.get(&decomp.base_sv)?;
    // Stride must agree with the recovered layout, otherwise we'd
    // emit field offsets into the wrong record type.
    if layout.size != decomp.stride {
        return None;
    }
    // Offset must be a known field of the recovered layout.
    if !layout.fields.iter().any(|f| f.offset == decomp.offset) {
        return None;
    }
    let idx = *ctx.array_struct_indices.get(&decomp.base_sv)?;

    let iv_name = ctx.name_of(&decomp.iv_sv);
    Some(format!("arr{}[{}].field_{}", idx, iv_name, decomp.offset))
}

/// Minimum address to consider as a global (below this is likely stack-relative).
pub(super) const GLOBAL_ADDR_THRESHOLD: u64 = 0x10000;

/// Minimum address to consider as an instruction-pointer-relative static
/// reference. Small PIE/shared-library fixtures often have data symbols in
/// the 0x3000..0x5000 range, while ordinary raw constants still use the
/// stricter global threshold above to avoid naming small immediates as data.
pub(super) const IP_REL_GLOBAL_ADDR_THRESHOLD: u64 = 0x1000;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(super) struct StaticAddr {
    pub(super) addr: u64,
    pub(super) from_instruction_pointer: bool,
}

pub(super) fn try_global_var_name(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    access_size: u8,
    ctx: &PrintCtx,
) -> Option<String> {
    let static_addr = try_static_addr_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx)?;
    if !is_global_addr_candidate(static_addr) {
        return None;
    }
    let addr = static_addr.addr;
    if let Some(sym) = ctx.symbols.get(&addr) {
        return Some(sym.clone());
    }
    let prefix = match access_size {
        1 => "byte",
        2 => "word",
        4 => "dword",
        8 => "qword",
        _ => "unk",
    };
    Some(format!("{}_{:X}", prefix, addr))
}

pub(super) fn try_readonly_scalar_load(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    access_size: u8,
    ctx: &PrintCtx,
) -> Option<String> {
    let static_addr = try_static_addr_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx)?;
    if !static_addr.from_instruction_pointer {
        return None;
    }
    if access_size == 16 {
        let low = *ctx.readonly_scalars.get(&(static_addr.addr, 8))?;
        let high = *ctx
            .readonly_scalars
            .get(&(static_addr.addr.wrapping_add(8), 8))?;
        let value = format!("(((unsigned __int128)0x{high:x}ULL << 64) | 0x{low:x}ULL)");
        trace_readonly_resolution(stmt_idx, addr_vn, static_addr.addr, access_size, &value);
        return Some(value);
    }
    let value = ctx.readonly_scalars.get(&(static_addr.addr, access_size))?;
    let value = format_constant_ctx(*value, access_size, ConstContext::Unsigned);
    trace_readonly_resolution(stmt_idx, addr_vn, static_addr.addr, access_size, &value);
    Some(value)
}

pub(super) fn try_readonly_scalar_value_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<String> {
    if ctx.readonly_scalars.is_empty() || !ctx.load_output_svs.contains(sv) {
        return None;
    }
    let def_stmt = defining_stmt_for_sv(sv, ctx)?;
    let def = ctx.stmt_insns.get(&def_stmt)?;
    if def.op != IrOp::Load {
        return None;
    }
    let load_size = def.output.map_or(8, |o| o.size);
    let addr_idx = if def.inputs.len() >= 2 { 1 } else { 0 };
    let addr = def.inputs.get(addr_idx)?;
    try_readonly_scalar_load(addr, Some(addr_idx), def_stmt, load_size, ctx)
}

pub(super) fn is_global_addr_candidate(static_addr: StaticAddr) -> bool {
    let threshold = if static_addr.from_instruction_pointer {
        IP_REL_GLOBAL_ADDR_THRESHOLD
    } else {
        GLOBAL_ADDR_THRESHOLD
    };
    static_addr.addr >= threshold
}

pub(super) fn try_static_addr_for_addr(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<StaticAddr> {
    resolve_static_addr_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0)
}

pub(super) fn resolve_static_addr_for_addr(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> Option<StaticAddr> {
    const MAX_DEPTH: u8 = 16;
    if depth > MAX_DEPTH {
        return None;
    }
    if vn.space == SpaceId::Const {
        return Some(StaticAddr {
            addr: vn.offset,
            from_instruction_pointer: false,
        });
    }
    if is_instruction_pointer_reg(vn) {
        return None;
    }

    let sv = input_or_latest_sv_for_operand(vn, raw_idx, stmt_idx, ctx)?;
    let def_stmt = defining_stmt_for_sv(&sv, ctx)?;
    let def = ctx.stmt_insns.get(&def_stmt)?;

    match def.op {
        IrOp::Copy if !def.inputs.is_empty() => {
            resolve_static_addr_for_addr(&def.inputs[0], Some(0), def_stmt, ctx, depth + 1)
        }
        IrOp::IntAdd if def.inputs.len() >= 2 => {
            resolve_static_addr_add(&def.inputs[0], &def.inputs[1], def_stmt, ctx, depth + 1)
        }
        IrOp::IntSub if def.inputs.len() >= 2 => {
            let lhs =
                resolve_static_addr_for_addr(&def.inputs[0], Some(0), def_stmt, ctx, depth + 1)?;
            let rhs = &def.inputs[1];
            if rhs.space == SpaceId::Const {
                Some(StaticAddr {
                    addr: lhs.addr.wrapping_sub(rhs.offset),
                    from_instruction_pointer: lhs.from_instruction_pointer,
                })
            } else {
                None
            }
        }
        _ => None,
    }
}

pub(super) fn resolve_static_addr_add(
    a: &Varnode,
    b: &Varnode,
    stmt_idx: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> Option<StaticAddr> {
    match (is_instruction_pointer_reg(a), is_instruction_pointer_reg(b)) {
        (true, false) if b.space == SpaceId::Const => {
            return Some(StaticAddr {
                addr: b.offset,
                from_instruction_pointer: true,
            });
        }
        (false, true) if a.space == SpaceId::Const => {
            return Some(StaticAddr {
                addr: a.offset,
                from_instruction_pointer: true,
            });
        }
        _ => {}
    }

    if b.space == SpaceId::Const {
        let base = resolve_static_addr_for_addr(a, Some(0), stmt_idx, ctx, depth)?;
        return Some(StaticAddr {
            addr: base.addr.wrapping_add(b.offset),
            from_instruction_pointer: base.from_instruction_pointer,
        });
    }
    if a.space == SpaceId::Const {
        let base = resolve_static_addr_for_addr(b, Some(1), stmt_idx, ctx, depth)?;
        return Some(StaticAddr {
            addr: base.addr.wrapping_add(a.offset),
            from_instruction_pointer: base.from_instruction_pointer,
        });
    }
    None
}

/// Index of the instruction-pointer operand of a two-operand `IntAdd` whose
/// other operand is a constant.
pub(super) fn instruction_pointer_operand(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<usize> {
    if insn.inputs.len() != 2 {
        return None;
    }
    (0..2).find(|&idx| {
        insn.inputs[1 - idx].space == SpaceId::Const
            && input_or_latest_sv_for_operand(&insn.inputs[idx], Some(idx), stmt_idx, ctx)
                .is_some_and(|sv| is_instruction_pointer_reg(&sv.base))
    })
}

pub(super) fn is_instruction_pointer_reg(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register
        && matches!(x86_64_register_name(vn.offset, vn.size), "rip" | "eip")
}

/// Recognize an x86-64 stack-canary read of the form `*(FS:0x28)` and emit
/// the corresponding IDA-style intrinsic.
///
/// The Ghidra/iced lifters model FS-relative TLS access as a `Load` whose
/// address operand is a small constant (the segment offset). The canonical
/// canary location is `fs:0x28` for 64-bit and `fs:0x14` for 32-bit; we
/// also accept `0x14` as a `__readfsdword` site since some variants use it.
pub(super) fn try_fs_canary_load(addr_vn: &Varnode, access_size: u8) -> Option<String> {
    if addr_vn.space != SpaceId::Const {
        return None;
    }
    match (addr_vn.offset, access_size) {
        (0x28, 8) => Some("__readfsqword(0x28u)".to_string()),
        (0x14, 4) => Some("__readfsdword(0x14u)".to_string()),
        _ => None,
    }
}

/// If the switch discriminant is a `char`/`u8` and the case value is a
/// printable ASCII character that isn't in the C escape set, render the
/// case label as a character literal (e.g. `case 'A':`).
pub(super) fn format_char_case(v: u64, is_char: bool) -> Option<String> {
    if !is_char {
        return None;
    }
    if !(0x20..=0x7E).contains(&v) {
        return None;
    }
    let c = v as u8 as char;
    // Skip characters that need C escaping — emit as integer for clarity.
    match c {
        '\'' | '"' | '\\' | '?' => return None,
        _ => {}
    }
    Some(format!("'{}'", c))
}

/// Recognize the macOS/Darwin stack-canary read: a `Load` whose address is a
/// symbol named `__stack_chk_guard`. Emits `*__stack_chk_guard` (a pointer
/// indirection through the libSystem-supplied guard global).
pub(super) fn try_macos_canary_load(addr_vn: &Varnode, ctx: &PrintCtx) -> Option<String> {
    if addr_vn.space != SpaceId::Const {
        return None;
    }
    let sym = ctx.symbols.get(&addr_vn.offset)?;
    if sym == "__stack_chk_guard" || sym.ends_with("___stack_chk_guard") {
        Some("*__stack_chk_guard".to_string())
    } else {
        None
    }
}

/// t258: render a BYREF parameter as a `union { T1 *a; T2 *b; … } *name`
/// when its consumption sites pinned down ≥ 2 incompatible primitive types.
///
/// Returns `None` (and lets the caller emit the regular `T *name` form)
/// when:
///   * the parameter is not in `byref_params` (no BYREF observed at all);
///   * `union_types` has no entry for this index;
///   * the entry has 0 or 1 distinct types (no conflict to surface).
///
/// Distinct-type counting uses set semantics on the primitive type, so a
/// `[Int(4), Int(4), Ptr]` list collapses to two members. Member labels
/// are `a`, `b`, `c`, … (positional), matching the Hex-Rays convention
/// for anonymous union members it discovers post-hoc.
pub(super) fn try_emit_byref_union_param(
    idx: u32,
    pname: &str,
    byref_params: &std::collections::BTreeSet<u32>,
    union_types: &BTreeMap<u32, Vec<PrimitiveType>>,
) -> Option<String> {
    if !byref_params.contains(&idx) {
        return None;
    }
    let observed = union_types.get(&idx)?;
    // Collapse duplicates while keeping first-seen order.
    let mut distinct: Vec<PrimitiveType> = Vec::new();
    for t in observed {
        if !distinct.iter().any(|d| d == t) {
            distinct.push(*t);
        }
    }
    if distinct.len() < 2 {
        return None;
    }
    let mut s = String::from("union { ");
    for (k, t) in distinct.iter().enumerate() {
        // Member name: a, b, c, … (z+ wraps to two-letter)
        let label = if k < 26 {
            ((b'a' + k as u8) as char).to_string()
        } else {
            format!("m{}", k)
        };
        let _ = write!(s, "{} *{}; ", c_sig_type(t), label);
    }
    let _ = write!(s, "}} *{}", pname);
    Some(s)
}

/// Hex-Rays-style `MEMORY[addr]` annotation for absolute addresses that the
/// rest of the pipeline (string table, globals, struct fields, arrays) failed
/// to give a name to. Limited to constant addresses outside the canonical
/// stack-canary range to avoid stomping on `__readfsqword(0x28u)`. Skipped
/// when the address is in the string table — string inlining must win.
pub(super) fn try_emit_memory_annotation(
    addr_vn: &Varnode,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<String> {
    let addr = try_static_addr_for_addr(addr_vn, None, stmt_idx, ctx)?.addr;
    if addr < 0x1000 {
        return None;
    }
    if ctx.string_table.contains_key(&addr) {
        return None;
    }
    Some(format!("MEMORY[0x{addr:X}]"))
}
