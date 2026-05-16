//! C++ constructor/destructor detection + `this`-pointer propagation.
//!
//! Recognises Itanium-ABI mangled method symbols (`_ZN3FooC1Ev`,
//! `_ZN3FooD0Ev`, `_ZN3Foo3barEi`, …) and stamps:
//!
//! 1. `SsaFunction::cpp_kind` — `Ctor` / `Dtor` / `RegularMethod`.
//! 2. `SsaFunction::cpp_class_name` — demangled class identifier.
//! 3. Rename the first inferred parameter `a1` → `this`.
//! 4. Type that parameter as `class T *` via `composite_var_types`.
//! 5. Propagate `this` through C++ vtable call sites already recognised by
//!    [`CppVtablePass`](crate::CppVtablePass) — the first argument register
//!    of those calls is the receiver, so we also stamp `class T *` on its
//!    SSA varnode and record the site in `cpp_this_args`.
//!
//! Hand-rolled detection — we do not depend on the `cpp_demangle` crate
//! (it is only a transitive dep through `symbolic-demangle`). The mangling
//! shape we recognise is intentionally narrow:
//!
//! ```text
//! _ZN <len1> <name1> [<len2> <name2> …] C[123] E <argchars>*
//! _ZN <len1> <name1> [<len2> <name2> …] D[012] E <argchars>*
//! _ZN <len1> <name1> [<len2> <name2> …] <len> <method> E <argchars>*
//! ```
//!
//! The argchars are restricted to `[a-zA-Z_]*` per the spec in the task
//! brief — that is wide enough for the common `Ev` / `Ei` / `EPKc` shapes
//! while staying within the conservative ASCII subset.
//!
//! Virtual-call rendering (e.g. surfacing the resolved method name at the
//! call site) is intentionally out of scope for this slice — that needs
//! RTTI/vtable cross-referencing and is tracked separately.

use std::collections::BTreeSet;

use unlace_ir::ssa::{CppKind, PrimitiveType, SsaFunction, SsaVarnode, TargetSet, VarnodeSlot};
use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{BlockId, SpaceId};

use crate::pass::{Pass, PassError};

/// SSA-level pass that recovers C++ method classification + `this` typing.
#[derive(Default)]
pub struct CppMethodPass;

impl Pass for CppMethodPass {
    fn name(&self) -> &'static str {
        "cpp-method"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let Some(parsed) = parse_mangled_method(&func.function.name) else {
            return Ok(false);
        };

        let prev_kind = func.cpp_kind;
        let prev_class = func.cpp_class_name.clone();
        let prev_this_args = func.cpp_this_args.clone();
        let prev_indirect_targets = func.indirect_call_targets.clone();
        let prev_first_param_name: Option<String> = func
            .inferred_params
            .first()
            .map(|(n, _)| n.clone());

        func.cpp_kind = Some(parsed.kind);
        func.cpp_class_name = Some(parsed.class_name.clone());

        // (a) Rename the first inferred parameter `a1` → `this`. Every
        // variant of `parsed.kind` represents a member function so the
        // first parameter is the receiver.
        let mut renamed = false;
        if let Some(first) = func.inferred_params.first_mut() {
            if first.0 != "this" {
                first.0 = "this".to_string();
                renamed = true;
            }
            // Force pointer-width primitive so downstream consumers that
            // only look at `inferred_params` (not `composite_var_types`)
            // see the right size class.
            if !matches!(first.1, PrimitiveType::Ptr) {
                first.1 = PrimitiveType::Ptr;
            }
        }

        // (b) Stamp `class T *` on the SSA varnode that carries the first
        // parameter register on entry to the function.
        let class_ptr = make_class_ptr(&parsed.class_name);
        if let Some(this_sv) = first_param_input(func) {
            func.composite_var_types
                .insert(this_sv, class_ptr.clone());
            func.var_role_names.insert(this_sv, "this".to_string());
        }

        // (c) Propagate through every vtable call site already recognised
        // by `CppVtablePass`: the first argument register of the
        // CALLIND IS the receiver. Stamp the same class pointer type.
        //
        // Same loop also feeds the printer's semantic-rendering channel:
        // record `TargetSet::VtableSlot { class_name, slot_idx }` against
        // every recognised dispatch so the C printer can emit
        // `this->__vftable->method_<N>(args)` instead of the IDA-style
        // `((ret (*)(args))*((__int64 *)this + N))(this, args)` cast.
        let mut this_args: BTreeSet<(BlockId, usize)> = BTreeSet::new();
        let call_sites: Vec<(BlockId, usize)> = func.cpp_vtable_calls.keys().copied().collect();
        for (bid, idx) in call_sites {
            if let Some(arg_sv) = first_call_arg_input(func, bid, idx) {
                func.composite_var_types
                    .insert(arg_sv, class_ptr.clone());
                this_args.insert((bid, idx));
            }
            // Slot index lookup is infallible at this point — the key
            // came straight out of `cpp_vtable_calls.keys()`.
            if let Some(info) = func.cpp_vtable_calls.get(&(bid, idx)) {
                // `slot_index` is a `usize` (effectively the SSA / IR
                // type for a vtable byte-offset / 8). `TargetSet::VtableSlot`
                // narrows to `u16` to keep the metadata compact; the cast
                // is safe for any vtable we can lift (the largest
                // observed vtable is `_ZTVNSt8ios_base*` at ~80 slots; the
                // hard ceiling is 2^16 - 1 = 65535 slots, far beyond what
                // any real C++ binary ships).
                let slot_idx_u16 = u16::try_from(info.slot_index).unwrap_or(u16::MAX);
                func.indirect_call_targets.insert(
                    (bid, idx),
                    TargetSet::VtableSlot {
                        class_name: parsed.class_name.clone(),
                        slot_idx: slot_idx_u16,
                    },
                );
            }
        }
        func.cpp_this_args = this_args;

        let changed = prev_kind != func.cpp_kind
            || prev_class != func.cpp_class_name
            || prev_this_args != func.cpp_this_args
            || prev_indirect_targets != func.indirect_call_targets
            || renamed
            || prev_first_param_name.as_deref()
                != func.inferred_params.first().map(|(n, _)| n.as_str());

        Ok(changed)
    }
}

/// Result of parsing a mangled C++ method symbol.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ParsedMethod {
    pub kind: CppKind,
    /// Class name (last nested-name component for ctors/dtors; outermost
    /// component for regular methods).
    pub class_name: String,
}

/// Parse a mangled Itanium-ABI method symbol.
///
/// Returns `Some` for `_ZN…C[123]E…`, `_ZN…D[012]E…`, and the generic
/// `_ZN<nested>E<argchars>` member-function shape. Returns `None` for
/// unmangled names, vendor extensions outside the recognised window, and
/// anything whose argchar suffix contains characters outside
/// `[a-zA-Z_]*`.
pub fn parse_mangled_method(name: &str) -> Option<ParsedMethod> {
    let rest = name.strip_prefix("_ZN")?;
    // Parse one or more `<len><ident>` segments.
    let mut segments: Vec<String> = Vec::new();
    let mut cursor = rest;
    loop {
        if cursor.is_empty() {
            return None;
        }
        let first = cursor.as_bytes()[0];
        if !first.is_ascii_digit() {
            break;
        }
        let (len, after_len) = take_length_prefix(cursor)?;
        if after_len.len() < len {
            return None;
        }
        let (seg, after_seg) = after_len.split_at(len);
        if !seg.chars().all(is_ident_char) {
            return None;
        }
        segments.push(seg.to_string());
        cursor = after_seg;
    }

    if segments.is_empty() {
        return None;
    }

    // After all length-prefixed segments, the cursor is at the
    // ctor/dtor/method tag. Three shapes:
    //   * `C[123]E…`          → ctor; class = last segment.
    //   * `D[012]E…`          → dtor; class = last segment.
    //   * `E<argchars>`       → regular method; the method name is the
    //                          LAST segment, the class is the second-to-
    //                          last segment when there are ≥ 2 segments.
    if cursor.starts_with('E') {
        if !args_are_valid(&cursor[1..]) {
            return None;
        }
        let class_name = if segments.len() >= 2 {
            segments[segments.len() - 2].clone()
        } else {
            // `_ZN3fooE…` — a single nested-name component is a
            // namespaced free function, not a method. Reject.
            return None;
        };
        return Some(ParsedMethod {
            kind: CppKind::RegularMethod,
            class_name,
        });
    }

    let cb = cursor.as_bytes();
    if cb.len() < 3 || cb[2] != b'E' {
        return None;
    }
    let tag = cb[0];
    let variant = cb[1];
    let argchars = &cursor[3..];
    if !args_are_valid(argchars) {
        return None;
    }

    let kind = match (tag, variant) {
        (b'C', b'1' | b'2' | b'3') => CppKind::Ctor,
        (b'D', b'0' | b'1' | b'2') => CppKind::Dtor,
        _ => return None,
    };
    let class_name = segments.last().cloned()?;
    Some(ParsedMethod { kind, class_name })
}

/// `[a-zA-Z_]*` per task spec.
fn args_are_valid(s: &str) -> bool {
    s.bytes()
        .all(|b| b.is_ascii_alphabetic() || b == b'_')
}

fn is_ident_char(c: char) -> bool {
    c.is_ascii_alphanumeric() || c == '_'
}

fn take_length_prefix(s: &str) -> Option<(usize, &str)> {
    let mut end = 0usize;
    for b in s.bytes() {
        if b.is_ascii_digit() {
            end += 1;
        } else {
            break;
        }
    }
    if end == 0 {
        return None;
    }
    let (digits, rest) = s.split_at(end);
    let len: usize = digits.parse().ok()?;
    Some((len, rest))
}

/// Construct `Type::Ptr(Type::Struct { name: T, fields: [] })` as a
/// placeholder `class T *` — the printer renders this as a pointer to an
/// opaque struct named after the demangled class.
fn make_class_ptr(class_name: &str) -> Type {
    let class = Type::Struct {
        name: class_name.to_string(),
        fields: Vec::<StructFieldType>::new(),
    };
    Type::Ptr(Box::new(class))
}

/// Find the SSA varnode that represents the *first parameter register*
/// on entry to the function. The lookup is calling-convention-aware:
/// SysV/AArch64 use offset-0 (RDI / X0), Microsoft x64 uses offset 24
/// (RCX) on x86_64.
fn first_param_input(func: &SsaFunction) -> Option<SsaVarnode> {
    let entry_bid = func.function.entry;
    let entry = func.function.blocks.get(&entry_bid)?;
    // Identify candidate register offsets.
    let candidate_offsets: &[u64] = match func.calling_convention {
        unlace_ir::ssa::CallingConvention::MicrosoftX64 => &[24],
        unlace_ir::ssa::CallingConvention::Thiscall => &[8],
        // SysV / AArch64 / Cdecl / Stdcall / Unknown — fall back to the
        // most common ABI convention (first arg in offset-0 reg) so we
        // still catch x86_64 / aarch64 binaries with no CC detected.
        _ => &[0, 24],
    };
    for (idx, insn) in entry.insns.iter().enumerate() {
        for (input_idx, input) in insn.inputs.iter().enumerate() {
            if input.space != SpaceId::Register || input.size != 8 {
                continue;
            }
            if !candidate_offsets.contains(&input.offset) {
                continue;
            }
            if let Some(sv) = func
                .var_map
                .get(&(entry_bid, idx, VarnodeSlot::Input(input_idx)))
                .copied()
            {
                return Some(sv);
            }
        }
    }
    None
}

/// Find the SSA varnode carrying the first call argument for a
/// `Call`/`Callind` at `(bid, idx)`. We look backward through prior
/// instructions in the same block for a write to the first argument
/// register (RDI / X0 / RCX).
fn first_call_arg_input(
    func: &SsaFunction,
    bid: BlockId,
    idx: usize,
) -> Option<SsaVarnode> {
    let block = func.function.blocks.get(&bid)?;
    let candidate_offsets: &[u64] = match func.calling_convention {
        unlace_ir::ssa::CallingConvention::MicrosoftX64 => &[24],
        unlace_ir::ssa::CallingConvention::Thiscall => &[8],
        _ => &[0, 24],
    };
    for j in (0..idx).rev() {
        let prev = &block.insns[j];
        let Some(out) = prev.output else { continue };
        if out.space != SpaceId::Register || out.size != 8 {
            continue;
        }
        if !candidate_offsets.contains(&out.offset) {
            continue;
        }
        if let Some(sv) = func
            .var_map
            .get(&(bid, j, VarnodeSlot::Output))
            .copied()
        {
            return Some(sv);
        }
    }
    // Fall back: the call instruction itself might *read* the register as
    // an explicit input.
    let call = &block.insns[idx];
    for (input_idx, input) in call.inputs.iter().enumerate() {
        if input.space != SpaceId::Register || input.size != 8 {
            continue;
        }
        if !candidate_offsets.contains(&input.offset) {
            continue;
        }
        if let Some(sv) = func
            .var_map
            .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
            .copied()
        {
            return Some(sv);
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_itanium_ctor_c1() {
        let p = parse_mangled_method("_ZN3FooC1Ev").expect("parse ok");
        assert_eq!(p.kind, CppKind::Ctor);
        assert_eq!(p.class_name, "Foo");
    }

    #[test]
    fn parses_itanium_ctor_c2_with_int_arg() {
        let p = parse_mangled_method("_ZN3FooC2Ei").expect("parse ok");
        assert_eq!(p.kind, CppKind::Ctor);
        assert_eq!(p.class_name, "Foo");
    }

    #[test]
    fn parses_itanium_dtor_d0_deleting() {
        let p = parse_mangled_method("_ZN3FooD0Ev").expect("parse ok");
        assert_eq!(p.kind, CppKind::Dtor);
        assert_eq!(p.class_name, "Foo");
    }

    #[test]
    fn parses_itanium_dtor_d1() {
        let p = parse_mangled_method("_ZN4BaseD1Ev").expect("parse ok");
        assert_eq!(p.kind, CppKind::Dtor);
        assert_eq!(p.class_name, "Base");
    }

    #[test]
    fn parses_nested_namespace_ctor() {
        // std::Foo::Foo() — three segments, last is the class.
        let p = parse_mangled_method("_ZN3std3FooC1Ev").expect("parse ok");
        assert_eq!(p.kind, CppKind::Ctor);
        assert_eq!(p.class_name, "Foo");
    }

    #[test]
    fn parses_regular_method() {
        let p = parse_mangled_method("_ZN3Foo3barEi").expect("parse ok");
        assert_eq!(p.kind, CppKind::RegularMethod);
        assert_eq!(p.class_name, "Foo");
    }

    #[test]
    fn non_mangled_name_is_none() {
        assert!(parse_mangled_method("printf").is_none());
        assert!(parse_mangled_method("main").is_none());
        // `_Z8use_baseP4Base` is non-nested (no `N`), so reject.
        assert!(parse_mangled_method("_Z8use_baseP4Base").is_none());
    }

    #[test]
    fn unsupported_argchars_rejected() {
        // Numeric tail not in `[a-zA-Z_]*`.
        assert!(parse_mangled_method("_ZN3FooC1E1").is_none());
    }

    #[test]
    fn unknown_tag_rejected() {
        // `_ZN3FooX1Ev` — `X1` is not a ctor/dtor tag, falls through to
        // the regular-method shape which requires the cursor to start
        // with `E`. `X` ≠ `E` ⇒ reject.
        assert!(parse_mangled_method("_ZN3FooX1Ev").is_none());
    }

    #[test]
    fn parser_accepts_c3_variant() {
        let p = parse_mangled_method("_ZN3FooC3Ev").expect("parse ok");
        assert_eq!(p.kind, CppKind::Ctor);
    }

    #[test]
    fn parser_accepts_d2_variant() {
        let p = parse_mangled_method("_ZN3FooD2Ev").expect("parse ok");
        assert_eq!(p.kind, CppKind::Dtor);
    }

    #[test]
    fn length_mismatch_rejected() {
        // length 99 but only 3 chars follow — invalid.
        assert!(parse_mangled_method("_ZN99FooC1Ev").is_none());
    }
}
