//! c_printer: casts.

use super::*;

// ---------------------------------------------------------------------------

/// Emit `depth` indent steps of `tab_width` spaces each.
///
/// Replaces the previous hard-coded `"    "` literal so callers can drive
/// the indent step from [`PrintCtx::config`] (and ultimately from the
/// `[printer]` config table or IDA's `module_data + 592` indent
/// configuration). With `tab_width = 4` (the default) output remains
/// byte-identical to the pre-config behaviour.
pub(super) fn indent(depth: usize, tab_width: usize, out: &mut String) {
    for _ in 0..(depth * tab_width) {
        out.push(' ');
    }
}

pub(super) fn type_for_size(size: u8, signed: bool) -> &'static str {
    if signed {
        match size {
            1 => "char",
            2 => "__int16",
            4 => "int",
            8 => "__int64",
            16 => "__int128",
            _ => "int",
        }
    } else {
        match size {
            1 => "_BYTE",
            2 => "_WORD",
            4 => "_DWORD",
            8 => "_QWORD",
            16 => "_OWORD",
            _ => "_DWORD",
        }
    }
}

/// Decide whether `(type)(operand)` is redundant for an `INT_ZEXT` / `INT_SEXT`.
///
/// Two cases qualify:
///
/// * **Same size** – the lifter sometimes emits a degenerate widen where the
///   operand is already the target width.  This produces noise like
///   `(__int64)(v)` over an already-`__int64` `v` and contributes nothing.
///
/// * **Implicit C widening to `long long`** – any narrower integer source
///   widens to `long long` automatically when assigned or passed.  `_QWORD`
///   targets (size==8) reading from a 4-byte source therefore do not need an
///   explicit cast in expression position; the surrounding context performs
///   the same conversion.  We elide only when the source is itself a
///   non-constant operand (constants get their own width suffix and would
///   change semantics if we dropped a sign- vs zero-extending cast).
pub(super) fn is_redundant_widen(op: IrOp, input: &Varnode, output_size: u8) -> bool {
    if input.size == output_size {
        return true;
    }
    if op == IrOp::IntZext && input.size == 4 && output_size == 8 && input.space != SpaceId::Const {
        return true;
    }
    false
}

/// Returns true when a typed source already carries the same signedness that an
/// integer extension would impose. In that case the C usual integer promotions
/// make the explicit wider cast cosmetic: e.g. `(int)(short)x` when `x` is
/// already `short`, or `(unsigned int)(unsigned short)x`.
pub(super) fn is_redundant_typed_extension(
    op: IrOp,
    from_ty: PrimitiveType,
    input_size: u8,
    output_size: u8,
) -> bool {
    if output_size <= input_size {
        return false;
    }

    match (op, from_ty) {
        (IrOp::IntSext, PrimitiveType::Int(width)) => width == input_size,
        (IrOp::IntZext, PrimitiveType::UnsignedInt(width)) => width == input_size,
        _ => false,
    }
}

/// `(type)(x)` is redundant when the operand already has the target width.
pub(super) fn is_redundant_same_size_cast(input: &Varnode, output_size: u8) -> bool {
    input.size == output_size
}

// (Doc block for a former `is_cast_informative` predicate removed when the
// function it documented was deleted; the rule list lives in the printer's
// design notes now.)

/// Look up the inferred flow-sensitive type of a *use* of `input` at the
/// statement `stmt_idx`. Returns [`PrimitiveType::Unknown`] when the input
/// is a constant (no SSA name) or the type inference pass did not assign
/// a concrete type. This is the bridge between the raw `Varnode` operands
/// the printer sees and the SSA-keyed `var_types` map produced by
/// `TypeInferPass`.
pub(super) fn flow_type_for_input(input: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> PrimitiveType {
    if input.space == SpaceId::Const {
        return PrimitiveType::Unknown;
    }
    let sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *input).copied());
    match sv {
        Some(sv) => ctx
            .var_types
            .get(&sv)
            .copied()
            .unwrap_or(PrimitiveType::Unknown),
        None => PrimitiveType::Unknown,
    }
}

/// Map an IDA-style integer type name (the kind emitted by [`type_for_size`])
/// plus an explicit signedness flag to a [`PrimitiveType`]. Used as the
/// destination side of [`should_emit_cast`] at cast sites where we already
/// know the target width and signed/unsigned-ness.
pub(super) fn primitive_for_size(size: u8, signed: bool) -> PrimitiveType {
    if signed {
        PrimitiveType::Int(size)
    } else {
        PrimitiveType::UnsignedInt(size)
    }
}

pub(crate) fn should_emit_cast(from: PrimitiveType, to: PrimitiveType) -> bool {
    use PrimitiveType::*;
    // Unknown on either side: suppress noise.
    if matches!(from, Unknown) || matches!(to, Unknown) {
        return false;
    }
    // Identical types: trivially redundant.
    if from == to {
        return false;
    }
    match (from, to) {
        // Pointer ↔ integer or pointer ↔ pointer-typed mismatch: always cast.
        (Ptr, Int(_)) | (Ptr, UnsignedInt(_)) | (Int(_), Ptr) | (UnsignedInt(_), Ptr) => true,
        // Integer width / signedness changes.
        (Int(w1), Int(w2)) | (UnsignedInt(w1), UnsignedInt(w2)) if w1 == w2 => false,
        (Int(_), Int(_)) | (UnsignedInt(_), UnsignedInt(_)) => true, // width differs
        // Mixed signedness — same width is purely cosmetic in C semantics for
        // values that fit, but the printer surfaces it for IDA parity.
        (Int(w1), UnsignedInt(w2)) | (UnsignedInt(w1), Int(w2)) if w1 != w2 => true,
        (Int(_), UnsignedInt(_)) | (UnsignedInt(_), Int(_)) => true,
        // Bool conversions.
        (Bool, Bool) => false,
        (Bool, _) | (_, Bool) => true,
        // Float family.
        (Float, Float) | (Double, Double) => false,
        (Float, Double) | (Double, Float) => true,
        (Float, _) | (_, Float) | (Double, _) | (_, Double) => true,
        // Pointer ↔ pointer with the same width is suppressed by the early
        // `from == to` check above; differing pointer-like types fall through
        // here as a defensive default.
        _ => true,
    }
}

/// IDA-style pointer cast for memory dereference based on access size.
///
/// Returns e.g. `_QWORD *` for 8-byte access, `_DWORD *` for 4-byte, etc.
pub(super) fn ida_ptr_type(size: u8) -> &'static str {
    match size {
        1 => "_BYTE *",
        2 => "_WORD *",
        4 => "_DWORD *",
        8 => "_QWORD *",
        16 => "_OWORD *",
        _ => "_QWORD *",
    }
}

pub(super) fn calling_convention_annotation(convention: &str) -> Option<&'static str> {
    match convention {
        "Microsoft x64" => Some("__fastcall"),
        "AArch64 AAPCS64" => Some("__aapcs"),
        "cdecl" => Some("__cdecl"),
        "stdcall" => Some("__stdcall"),
        "thiscall" => Some("__thiscall"),
        _ => None,
    }
}
