//! c_printer: annotations.

use super::*;

/// User-authored annotations scoped to the function being printed.
///
/// Built by the CLI from a persistent `AnnotationDb`: the per-function fields
/// (`function_comment`, `line_comments`) are keyed in by the caller so the
/// printer never has to know the function's own address. `custom_names` is
/// the global address→name map and is consulted for *any* address mentioned
/// in this function (own name, callees, tail-call targets, …).
#[derive(Default, Debug, Clone)]
pub struct SsaStatementSlots {
    pub output: Option<SsaVarnode>,
    pub inputs: BTreeMap<usize, SsaVarnode>,
}

#[derive(Default, Debug, Clone, PartialEq, Eq)]
pub struct StackLvarAnnotation {
    pub name: String,
    pub c_type: Option<String>,
    pub ty: Option<TypeKind>,
    pub size: u64,
    pub source_byte_size: Option<u64>,
    pub raw_span: Option<DwarfStackLocalSpan>,
    pub calibrated_span: Option<DwarfStackLocalSpan>,
    pub is_buffer: bool,
    pub from_debug: bool,
}

/// A DWARF aggregate *array* local (e.g. `int32_t buf[16]`), parsed from the
/// function's debug-info locals. Carries enough to materialize the array as a
/// real stack declaration with its source name and dimensions.
#[derive(Debug, Clone, PartialEq, Eq)]
pub(super) struct DwarfArrayLocal {
    /// Source variable name (`buf`).
    pub(super) name: String,
    /// The C element type spelling (`int`), for the declaration.
    pub(super) elem_c_type: String,
    /// Element size in bytes (4 for `int`).
    pub(super) elem_size: u64,
    /// Element count (16 for `int[16]`).
    pub(super) elem_count: u64,
}

#[derive(Default, Debug, Clone)]
pub struct PrinterAnnotations {
    /// Prose to render immediately above the function header block.
    pub function_comment: Option<String>,
    /// Per-instruction notes keyed by instruction VA (within this function).
    pub line_comments: BTreeMap<u64, String>,
    /// User overrides for synthesized `sub_<addr>` names. Merged on top of
    /// the symbol table at print time.
    pub custom_names: BTreeMap<u64, String>,
    /// Pre-computed `hash → string` table from `StringHashSwitchPass`.
    /// When a switch case constant matches a key the printer emits the
    /// original string as a trailing comment (`case 0x...: /* "name" */`).
    pub string_hash_table: BTreeMap<u64, String>,
    /// Read-only scalar data indexed by `(virtual_address, byte_width)`.
    ///
    /// The CLI populates this from non-writable data sections so a load from
    /// `.rodata` like `mov rax, [rip+0x...]` can render as a literal constant
    /// instead of as a mutable `qword_XXXX` pseudo-global.
    pub readonly_scalars: BTreeMap<(u64, u8), u64>,
    /// Exact SSA inputs/outputs for visible HIR statements, keyed by
    /// `(instruction_address, opcode)`.
    ///
    /// The C printer normally reconstructs SSA versions while walking HIR,
    /// but prologue/canary suppression can hide IR definitions that still
    /// affect later raw temporary versions. The CLI fills this from the final
    /// SSA var_map so address and static-load recovery can use the true
    /// versions instead of guessing from raw lifter temporaries.
    pub ssa_statement_slots: BTreeMap<(u64, IrOp), Vec<SsaStatementSlots>>,
    /// SSA values consumed only by phi edges that no longer exist as explicit
    /// HIR statements after structuring.
    ///
    /// The printer's dead-code and folding prepass works over HIR statements,
    /// so without this side channel a loop preheader seed like `i = 0` can be
    /// misclassified as dead when its only remaining use is a loop-header phi.
    pub ssa_phi_uses: Vec<SsaVarnode>,
    /// Return SSA aliases recovered from final SSA phis that the HIR no
    /// longer carries as statements, such as stack-protector failure joins.
    ///
    /// Keyed by the `HirNode::Return(Some(_))` value and mapped to the
    /// normal-path value that should be printed/read for standalone C.
    pub return_value_aliases: BTreeMap<SsaVarnode, SsaVarnode>,
    /// Stack lvar storage metadata recovered before HIR structuring.
    ///
    /// `HirFunction` keeps the physical `StackFrame`, but the lvar layer
    /// owns user-facing names, source provenance, and type hints. The CLI
    /// copies those facts through this map so stack declarations and
    /// accesses use lvar storage metadata instead of re-deriving names in
    /// the printer.
    pub stack_lvars: BTreeMap<i64, StackLvarAnnotation>,
    /// PDB constant-pool reverse index (`value → names`) from
    /// [`unlace_loader::PdbTypes::constants_by_value`].
    pub pdb_constants_by_value: BTreeMap<i64, Vec<String>>,
    /// ObjC classes whose synthetic ivar struct layouts should be emitted
    /// at the top of the C output preamble.  Classes without ivars are
    /// skipped (no empty `struct {};` would be a C constraint violation).
    pub objc_classes: Vec<unlace_loader::ObjcClass>,
    /// ObjC categories whose `@interface ClassName (CategoryName)` method
    /// summaries should be emitted at the top of the C output preamble,
    /// underneath the class layout block.  Categories with zero methods
    /// still render — an empty `@interface … @end` block makes the
    /// runtime-recovered category name visible even when no methods
    /// survived the scan (e.g. swizzles that the analyst can fill in
    /// later via per-line comments).  Wired from
    /// [`unlace_loader::ObjcInfo::categories`] by the CLI pipeline.
    pub objc_categories: Vec<unlace_loader::ObjcCategory>,
    /// Resolved PE forwarder chains: IAT slot VA → `target_dll!target_symbol`.
    ///
    /// Populated from [`unlace_loader::BinaryImage::forwarded_resolutions`].
    /// When a CALL's target address (the constant `inputs[0]` of an
    /// `IrOp::Call`) is a key in this map, the printer appends a
    /// `/* -> ntdll!RtlAllocateHeap */` trailing comment so analysts can
    /// see the final landing site of a forwarder chain without leaving
    /// the C view.
    pub forwarded_resolutions: BTreeMap<u64, String>,
    /// Recovered Go types keyed by `runtime._type` VA (t181/t191).
    ///
    /// Populated from [`unlace_loader::BinaryImage::go_types`]. Every
    /// entry is rendered in a preamble block immediately above the
    /// function header — interfaces as Go-style
    /// `// interface { Method() }`, slices as `// []elem`, maps as
    /// `// map[K]V`. Empty for non-Go binaries.
    ///
    /// The field name is kept as `go_interfaces` for backwards
    /// compatibility with t181 call sites; despite the name it carries
    /// every recovered Go type variant the printer knows how to render.
    pub go_interfaces: BTreeMap<u64, unlace_ir::types::Type>,
    /// PAC-authenticated indirect call annotations keyed by the call
    /// instruction's VA (t201). When a `Callind` / `Callother` site is
    /// present in this map, the printer emits the call as
    /// `__builtin_arm_authcall(target, /*key=*/K, /*disc=*/0xDDDD)`
    /// instead of the IDA-style `((ret (*)(...))target)(...)` cast.
    ///
    /// Populated by [`unlace_passes::resolve_auth_calls`] from a
    /// [`unlace_loader::BinaryImage::auth_pointers`] table. Empty for
    /// every non-cache image and for v1–v4 dyld_shared_caches.
    pub auth_calls: BTreeMap<u64, unlace_passes::AuthCallAnnotation>,
    /// t298 — Go iface-to-concrete devirtualization keyed by indirect-call
    /// instruction VA. When an indirect call target can be tied to a unique
    /// `runtime.itab` method slot, the pipeline records the resolved concrete
    /// callee symbol here. The printer prefers this name over the raw
    /// function-pointer expression so `iface.Method()`-style calls surface as
    /// direct source-like calls when the concrete receiver type is statically
    /// determinable.
    pub go_iface_devirtualized_calls: BTreeMap<u64, String>,
    /// C++ ABI/runtime action sites keyed by call instruction VA.
    ///
    /// Populated by the CLI from `unlace_passes::cxx_eh::collect_eh_sites`
    /// after call-target resolution. This carries the compiler/runtime
    /// classification into the printer even when the final call expression is
    /// indirect, such as a PE IAT thunk resolved by the SSA pipeline.
    pub cxx_eh_actions: BTreeMap<u64, unlace_passes::cxx_eh::CxxEhAction>,
    /// MSVC RTTI classes recovered by the PE loader.
    ///
    /// The Itanium path is passed as the explicit `rtti` argument. MSVC RTTI
    /// already lives on `BinaryImage`, so the CLI transports it through
    /// annotations to avoid widening the public printer entry points.
    pub msvc_rtti: Option<unlace_loader::msvc_rtti::MsvcRtti>,
    /// Pre-rendered preamble block for synthesised composite types
    /// recovered by the SSA analyses (t147 stack-frame composites in
    /// `SsaFunction::inferred_structs` and t213 array-of-structs layouts
    /// in `SsaFunction::array_struct_layouts`).  Built by
    /// [`emit_inferred_struct_preamble`] from the `SsaFunction` before
    /// HIR structuring, and emitted immediately above the function header
    /// alongside the ObjC class / Go type preamble blocks.
    ///
    /// `None` (the default) suppresses the preamble entirely.  An empty
    /// string is also treated as "nothing to emit" so callers can compute
    /// the string unconditionally.
    pub inferred_struct_preamble: Option<String>,
    /// Canonical libc family name keyed by Call instruction VA (t229).
    ///
    /// Populated by the pipeline from `SsaFunction::libc_call_annotations`,
    /// which `annotate_libc_calls` writes when a Call's target symbol is
    /// a known libc alias (`__memcpy_chk`, `_Znwm`, `__aeabi_memcpy4`, …).
    /// When `resolve_call_target` finds an entry for the current Call's
    /// VA it uses the canonical name (`memcpy`, `malloc`) instead of the
    /// raw symbol, so the rendered output reads as portable libc rather
    /// than per-platform spellings. Empty for calls to unknown / non-libc
    /// targets — those follow the legacy symbol-table path.
    pub libc_call_canonical: BTreeMap<u64, String>,
    /// t262 — original (pre-canonicalization) symbol name at a libc
    /// call site, keyed by Call instruction VA. When this map and
    /// [`Self::libc_call_canonical`] both have an entry for a Call,
    /// AND the values differ (e.g. `__memcpy_chk` vs canonical
    /// `memcpy`), the printer emits a leading comment
    /// `// memcpy(...) — recognized from __memcpy_chk` so a reader
    /// can see why the rendered symbol no longer matches the binary's
    /// import table. When canonical == original (the rendered name
    /// already matches the binary), no comment is emitted.
    pub libc_call_original: BTreeMap<u64, String>,
    /// t265 — direct-call cross-reference table: for each
    /// callee-function entry VA, the list of `(caller_entry_va,
    /// call_site_va)` pairs describing every direct call site that
    /// targets it. Sourced from
    /// [`unlace_ir::xref::CallGraph::callers_of`] paired with the
    /// caller's per-instruction VA.
    ///
    /// When the function currently being printed has an entry in
    /// this map, the printer emits a leading comment listing up to
    /// five caller sites in `sub_<caller_entry>+<delta>` form, where
    /// `delta` is `call_site_va - caller_entry_va`. The cap matches
    /// IDA's default xref summary width — beyond five, an "..." is
    /// appended.
    ///
    /// Empty by default; functions with no in-bound direct calls
    /// (leaves of the call graph, library entry points, statics not
    /// referenced inside the binary) get no xref comment.
    pub xref_callers: BTreeMap<u64, Vec<(u64, u64)>>,
    /// t231: per-function map from array-base SSA varnode → recovered
    /// `InferredStruct` layout (size + field offsets/widths).  Sourced
    /// from [`unlace_ir::ssa::SsaFunction::array_struct_layouts`].
    ///
    /// When a `Load` / `Store` address decomposes into
    /// `base_sv + stride * iv + offset` and `base_sv` is a key in this
    /// map, the printer rewrites the raw `*(arr + 16*i + 8) = …` form
    /// as `arr<N>[i].field_<offset> = …` where `<N>` matches the
    /// `struct __anon<N>` index emitted by
    /// [`emit_inferred_struct_preamble`].
    pub array_struct_layouts: BTreeMap<SsaVarnode, unlace_ir::types::InferredStruct>,
    /// t231: per-array-base index into the `__anon<N>` numbering used by
    /// [`emit_inferred_struct_preamble`].  Must follow the same enumeration
    /// order — stack composites first, then array-of-struct layouts in
    /// `BTreeMap` order — so the typed access rendered in the body refers
    /// to the same `struct __anon<N>` declared in the preamble.
    pub array_struct_indices: BTreeMap<SsaVarnode, usize>,
    /// Recovered Go `defer` registrations in the current function.
    pub go_defer_sites: Vec<GoDeferSite>,
    /// t258: per-byref-parameter union-tag types.
    pub byref_union_types: BTreeMap<u32, Vec<PrimitiveType>>,
    /// t260: __usercall / __userpurge spec for functions whose register-
    /// passing scheme diverges from the active ABI's canonical sequence.
    pub usercall: Option<UsercallSpec>,
    /// §5.5: per-callee-VA FLIRT match annotation. Key is the *target*
    /// function's entry address (the Const operand of a direct Call);
    /// value is `(canonical_name, confidence ∈ [0.5, 1.0])`. When a Call
    /// instruction's target lands in this map, the printer appends a
    /// trailing `/* flirt: <name>@<conf> */` comment so the reader can
    /// see which calls were recognised by signature matching and how
    /// strong the evidence was. Empty when no FLIRT matches occurred.
    pub flirt_call_annotations: BTreeMap<u64, (String, f32)>,
    /// SCEV-backed source recovery for optimized triangular sums.
    ///
    /// The SSA pipeline sets this only after loop analysis has found a
    /// side-effect-free induction-variable reduction equivalent to
    /// `for (int i = 0; i < n; i++) s += i`. The printer still performs the
    /// final textual replacement because HIR has no source-level synthetic
    /// reduction node yet, but the decision is analysis-gated rather than a
    /// translation-unit-wide string peephole.
    pub recover_triangular_sum_loop: bool,
    /// Target architecture of the function being printed, when the caller knows
    /// it (whole-program CLI path). Used to resolve the per-arch stack/frame
    /// pointer register offsets via [`unlace_ir::stack::StackSpec::for_arch`] so
    /// frame-relative `base->field` / `base[i]` accesses are recognised and
    /// rendered as raw derefs on every architecture — not just the x86/AArch64
    /// offsets the printer historically hard-coded. `None` (the default and the
    /// value passed by unit tests) preserves the legacy hard-coded behaviour.
    pub arch: Option<unlace_ir::ArchId>,
    /// SIMD types `TypeInferPass` recovered for SSA varnodes. The printer
    /// otherwise types values from their defining opcode alone, which sees
    /// a 16-byte register as a plain `__int128`.
    pub vector_var_types: BTreeMap<SsaVarnode, unlace_ir::types::VectorType>,
    /// Types `ObjectWidenPass` synthesised for whole memory objects, from
    /// [`SsaFunction::object_types`]. Accesses into these objects print
    /// through the type (`stru_404080[i].fld_1`) and the objects are
    /// declared with it.
    pub object_types: BTreeMap<unlace_ir::mem_object::MemObject, Type>,
}

/// Convert final SSA lvar metadata into the stack-name side channel consumed
/// by the C printer after HIR structuring.
pub fn stack_lvar_annotations_from_ssa(func: &SsaFunction) -> BTreeMap<i64, StackLvarAnnotation> {
    let mut out: BTreeMap<i64, StackLvarAnnotation> = BTreeMap::new();
    for lv in &func.lvars {
        let LvarStorage::Stack { offset } = &lv.storage else {
            continue;
        };
        let offset = *offset;
        let frame_size = func
            .stack_frame
            .as_ref()
            .and_then(|frame| frame.locals.get(&offset))
            .map(|local| local.size);
        let stack_var_size = func
            .stack_vars
            .get(&offset)
            .and_then(|sv| primitive_size_hint(sv.ty).map(u64::from));
        let size = frame_size
            .or(stack_var_size)
            .or_else(|| type_kind_size_hint(lv.ty))
            .unwrap_or(8);
        let fallback_name = if size > 8 {
            format!("buf_{}", offset.unsigned_abs())
        } else {
            format!("v_{}", offset.unsigned_abs())
        };
        let raw_name = lv.name.as_deref().unwrap_or(&fallback_name);
        let name = crate::demangle::sanitize_for_c(raw_name);
        let from_debug =
            matches!(lv.source, LvarSource::FromDebug) || lv.flags.contains(LvarFlags::FROM_DEBUG);
        let c_type = from_debug.then(|| stack_lvar_type_name(lv.ty)).flatten();
        let ann = StackLvarAnnotation {
            name,
            c_type,
            ty: Some(lv.ty),
            size,
            source_byte_size: None,
            raw_span: None,
            calibrated_span: None,
            is_buffer: size > 8,
            from_debug,
        };
        trace_stack_text(format_args!(
            "lvar-export func={} offset={} name={} source={:?} flags={:?} ty={:?} c_type={:?} size={} buffer={} from_debug={}",
            func.function.name,
            offset,
            ann.name,
            lv.source,
            lv.flags,
            lv.ty,
            ann.c_type,
            ann.size,
            ann.is_buffer,
            ann.from_debug,
        ));
        out.entry(offset)
            .and_modify(|existing| merge_stack_lvar_annotation(existing, &ann))
            .or_insert(ann);
    }
    for pending in &func.pending_dwarf_locals {
        if !pending.is_aggregate || pending.name.is_empty() {
            continue;
        }
        let Some(raw_span) = pending.raw_span else {
            continue;
        };
        let size = pending.byte_size.unwrap_or(raw_span.byte_size);
        let name = crate::demangle::sanitize_for_c(&pending.name);
        let ann = StackLvarAnnotation {
            name,
            c_type: pending.type_name.clone(),
            ty: None,
            size,
            source_byte_size: pending.byte_size,
            raw_span: Some(raw_span),
            calibrated_span: pending.calibrated_span,
            is_buffer: size > 8,
            from_debug: true,
        };
        trace_stack_text(format_args!(
            "lvar-export-aggregate func={} raw={} calibrated={:?} name={} c_type={:?} source_size={:?}",
            func.function.name,
            raw_span.start,
            ann.calibrated_span.map(|span| (span.start, span.byte_size)),
            ann.name,
            ann.c_type,
            ann.source_byte_size,
        ));
        out.entry(raw_span.start)
            .and_modify(|existing| merge_stack_lvar_annotation(existing, &ann))
            .or_insert(ann);
    }
    out
}

pub(super) fn merge_stack_lvar_annotation(
    existing: &mut StackLvarAnnotation,
    incoming: &StackLvarAnnotation,
) {
    let before = existing.clone();
    existing.size = existing.size.max(incoming.size);
    existing.is_buffer |= incoming.is_buffer;
    if existing.c_type.is_none() {
        existing.c_type = incoming.c_type.clone();
    }
    if existing.source_byte_size.is_none() {
        existing.source_byte_size = incoming.source_byte_size;
    }
    if existing.raw_span.is_none() {
        existing.raw_span = incoming.raw_span;
    }
    if existing.calibrated_span.is_none() {
        existing.calibrated_span = incoming.calibrated_span;
    }
    if incoming.from_debug && !existing.from_debug {
        existing.name = incoming.name.clone();
        existing.c_type = incoming.c_type.clone().or_else(|| existing.c_type.clone());
        existing.from_debug = true;
    } else if existing.name.is_empty() {
        existing.name = incoming.name.clone();
    }
    trace_stack_text(format_args!(
        "lvar-merge existing_before={before:?} incoming={incoming:?} merged={existing:?}"
    ));
}

pub(super) fn primitive_size_hint(ty: PrimitiveType) -> Option<u8> {
    match ty {
        PrimitiveType::Unknown => None,
        PrimitiveType::Bool => Some(1),
        PrimitiveType::Int(width) | PrimitiveType::UnsignedInt(width) => Some(width),
        PrimitiveType::Float => Some(4),
        PrimitiveType::Double => Some(8),
        PrimitiveType::Ptr => Some(8),
        PrimitiveType::Vector(v) => Some(v.size()),
    }
}

pub(super) fn type_kind_size_hint(ty: TypeKind) -> Option<u64> {
    match ty {
        TypeKind::Void => None,
        TypeKind::Int | TypeKind::UInt => Some(4),
        TypeKind::Long
        | TypeKind::ULong
        | TypeKind::SizeT
        | TypeKind::SSizeT
        | TypeKind::OffT
        | TypeKind::CharPtr
        | TypeKind::ConstCharPtr
        | TypeKind::CharPtrPtr
        | TypeKind::VoidPtr
        | TypeKind::ConstVoidPtr
        | TypeKind::FilePtr => Some(8),
    }
}

pub(super) fn stack_lvar_type_name(ty: TypeKind) -> Option<String> {
    (!matches!(ty, TypeKind::Void)).then(|| ty.c_name().to_string())
}

/// t260: per-function `__usercall` / `__userpurge` annotation payload.
#[derive(Default, Debug, Clone)]
pub struct UsercallSpec {
    pub return_reg: String,
    pub param_regs: Vec<String>,
    pub purge: bool,
}
