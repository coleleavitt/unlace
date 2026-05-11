//! C pretty-printer — emit valid C syntax from HIR.
//!
//! Translates a [`HirFunction`] into a C source string that passes
//! `gcc -fsyntax-only`. Output is deterministic: identical input produces
//! byte-identical output.
//!
//! # IDA `cot_xxx` expression-opcode coverage audit
//!
//! Hex-Rays' `sub_2662B0` (the citree expression dispatch, 889 lines) drives
//! every C expression form via the `cot_*` opcode table. Unlace's IR is
//! Ghidra-style PCode (see [`unlace_ir::IrOp`]) rather than Hex-Rays
//! microcode, so we don't have a 1:1 opcode mapping — but the printer must
//! still cover the same set of C surface constructs. The table below tracks
//! each cot opcode, the C construct it produces, and where (if anywhere)
//! unlace emits the equivalent.
//!
//! | cot | C form | Unlace emit site | Status |
//! |---|---|---|---|
//! | `cot_comma` (1)        | `a, b`              | n/a (lifter inlines) | implicit |
//! | `cot_asg` (2)          | `a = b`             | `emit_statement` (assignment) | ✅ |
//! | `cot_asgXxx` (3..15)   | `a += b` etc.       | `try_emit_compound_assign`   | ✅ |
//! | `cot_tern` (16)        | `c ? a : b`         | branch-collapse pass         | ✅ |
//! | `cot_lor`/`cot_land`   | `||` / `&&`         | `BoolOr` / `BoolAnd` binop   | ✅ |
//! | `cot_bor`/`cot_xor`/`cot_band` | `\|`/`^`/`&` | `IntOr`/`IntXor`/`IntAnd`   | ✅ |
//! | `cot_eq`/`cot_ne`      | `==` / `!=`         | `IntEqual` / `IntNotequal`   | ✅ |
//! | `cot_sge`..`cot_ult`   | `< <= > >=`         | `IntLess(equal)` family      | ✅ |
//! | `cot_sshl`/`cot_ushl`  | `<<`                | `IntLeft`                    | ✅ |
//! | `cot_sshr`/`cot_ushr`  | `>>`                | `IntSright`/`IntRight`       | ✅ |
//! | `cot_add`/`cot_sub`    | `+` / `-`           | `IntAdd`/`IntSub`/`Ptradd`   | ✅ |
//! | `cot_mul`/`cot_sdiv`/`cot_udiv` | `*` `/`    | `IntMult`/`IntS?div`         | ✅ |
//! | `cot_smod`/`cot_umod`  | `%`                 | `IntS?rem`                   | ✅ |
//! | `cot_fadd`..`cot_fdiv` | float `+ - * /`     | `FloatAdd`..`FloatDiv`       | ✅ |
//! | `cot_fneg`             | unary float `-`     | `FloatNeg`                   | ✅ |
//! | `cot_neg`              | unary `-`           | `Int2comp`                   | ✅ |
//! | `cot_cast` (48)        | `(T)x`              | `IrOp::Cast` + `IntZext/Sext`| ✅ |
//! | `cot_lnot`/`cot_bnot`  | `!x` / `~x`         | `BoolNegate`/`IntNegate`     | ✅ |
//! | `cot_ptr` (52)         | `*p`                | `Load` (with field/array recovery) | ✅ |
//! | `cot_ref` (51)         | `&x`                | stack-var address-taken path | ✅ |
//! | `cot_postinc` (53)     | `x++`               | `try_emit_postfix_inc_dec`   | ✅ |
//! | `cot_postdec` (54)     | `x--`               | `try_emit_postfix_inc_dec`   | ✅ |
//! | `cot_preinc` (55)      | `++x`               | folded into postinc form     | ⚠️ deferred — see note |
//! | `cot_predec` (56)      | `--x`               | folded into postdec form     | ⚠️ deferred — see note |
//! | `cot_idx` (57)         | `arr[i]`            | `try_array_subscript`, `try_struct_field_access` | ✅ |
//! | `cot_memref` (58)      | `s.m`               | `try_struct_field_access`    | ✅ |
//! | `cot_memptr` (59)      | `p->m`              | `try_resolve_field_from_addr`| ✅ |
//! | `cot_call` (60)        | `f(...)`            | `Call`/`Callind`             | ✅ |
//! | `cot_var/obj/num/...`  | name / literal      | `emit_operand_with_prec`     | ✅ |
//! | `cot_str` (63)         | `"..."`             | `emit_operand_with_prec` + `escape_c_string` | ✅ |
//! | `cot_fnum` (64)        | float literal       | `format_constant_ctx` (TODO floats) | ⚠️ partial |
//! | `cot_helper` (65)      | `__builtin_*` call  | `callother_intrinsic_name` table; `Popcount`/`Lzcount` direct | ✅ |
//! | `cot_sizeof` (66)      | `sizeof(x)`         | helper [`emit_sizeof_expr`] / [`emit_sizeof_type`] available; no IR producer yet | ⚠️ deferred |
//! | `cot_alignof` (67)     | `_Alignof(T)`       | helper [`emit_alignof_type`] available; no IR producer yet | ⚠️ deferred |
//! | `cot_label` (68)       | `&&label` (GCC ext) | not emitted (no computed-goto in IR)         | ❌ out-of-scope |
//! | `cot_type` (69)        | bare type-as-expr   | only meaningful inside `sizeof`/`offsetof` arg | ❌ out-of-scope |
//!
//! ## Deferred items
//!
//! * **`cot_preinc` / `cot_predec`**: Hex-Rays distinguishes pre- and post-
//!   increment by examining the surrounding statement context (whether the
//!   pre-bump value is consumed). Unlace's IR-level recognizer
//!   ([`try_emit_postfix_inc_dec`]) treats `x = x + 1` uniformly as `x++`.
//!   Producing the prefix form would require a use-before-definition check
//!   on the same statement; the resulting C is semantically identical for
//!   statement-position increments, so we defer.
//!
//! * **`cot_sizeof`, `cot_alignof`, `cot_type`**: These require a HIR-level
//!   `Sizeof(Type)` / `Alignof(Type)` / `Sizeof(Expr)` node. Today the IR has
//!   no such opcode (PCode doesn't have one) and the lifters never emit them.
//!   Adding them is an orthogonal task — when it lands, callers should use
//!   the formatter helpers below rather than open-coding the syntax.
//!
//! * **`cot_label`**: GCC's `&&label` / computed-goto extension. The IR has
//!   `Branchind` for indirect branches but no notion of label-as-rvalue;
//!   we'd never produce one from a binary, so this is permanently
//!   out-of-scope.
//!
//! ## String escape parity (cot_str)
//!
//! Hex-Rays' `str2user` (called from `sub_265AA0`) emits the standard C
//! single-character escapes for control bytes: `\\ \" \' \n \r \t \v \f \a
//! \b \0`, falling back to `\xHH` for other non-printable bytes. Unlace's
//! [`escape_c_string`] mirrors that table.
//!
//! # IDA token-ID compatibility note
//!
//! Hex-Rays' `sub_1AF8F0` emits a small set of fixed syntax tokens by single
//! byte ID. The IDA-tagged output stream interleaves these IDs with the
//! plain text so a downstream consumer (the `tag_remove` pass) can
//! recolour or rewrite them without re-parsing. Unlace does not produce
//! IDA-tagged output: every token below is emitted as the corresponding
//! plain ASCII string literal. Listed here as provenance for future
//! maintainers comparing unlace output against an IDA dump.
//!
//! | ID    | IDA token | Unlace emit               |
//! |-------|-----------|---------------------------|
//! | 0x41  | `(`       | literal `(`               |
//! | 0x42  | `asm`     | literal `__asm`           |
//! | 0x43  | `else`    | literal `else`            |
//! | 0x44  | `do`      | literal `do`              |
//! | 0x45  | `;`       | literal `;`               |
//! | 0x46  | `{`       | literal `{`               |
//! | 0x47  | `}`       | literal `}`               |
//! | 0x48  | `)`       | literal `)`               |
//! | 0x49  | `:`       | literal `:`               |
//! | 0x4A  | `/*pre*/` | `// ` line-comment prefix |
//! | 0x4B  | `/*post*/`| trailing `// ` comment    |
//! | 0x4C  | `try`     | literal `__try`           |

use std::collections::{BTreeMap, BTreeSet};
use std::fmt::Write;

use unlace_ir::ssa::{PanicKind, PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::types::Type;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};
use unlace_loader::DwarfInfo;
use unlace_struct::{HirFunction, HirNode, SwitchCase};

// ---------------------------------------------------------------------------
// Public API
// ---------------------------------------------------------------------------

/// Metadata for the block comment emitted above each decompiled function.
///
/// Built from [`SsaFunction`] via [`FunctionHeaderInfo::from_ssa`], or
/// constructed manually for testing.
#[derive(Clone, Debug, Default)]
pub struct FunctionHeaderInfo {
    /// Function name (e.g. `sub_401000`).
    pub name: String,
    /// Machine address of the function entry point.
    pub address: u64,
    /// Approximate code size in bytes (last instruction addr − first + est. insn size).
    pub size: u64,
    /// Detected calling convention.
    pub convention: String,
    /// Stack frame size in bytes (sum of stack variable sizes or frame extent).
    pub stack_frame: u64,
    /// Sorted list of callee names/addresses referenced by CALL instructions.
    pub callees: Vec<String>,
    /// Whether the function adjusts RSP by a non-constant amount mid-body
    /// (alloca / variable-length stack arrays). Populated from
    /// [`SsaFunction::dynamic_sp`](unlace_ir::ssa::SsaFunction).
    pub dynamic_sp: bool,
}

impl FunctionHeaderInfo {
    /// Build header metadata from an [`SsaFunction`].
    pub fn from_ssa(ssa: &SsaFunction, symbols: &BTreeMap<u64, String>) -> Self {
        let name = ssa.function.name.clone();
        let address = ssa.function.addr;
        let convention = ssa.calling_convention.to_string();

        // Approximate size: span from lowest to highest instruction address.
        let (mut min_addr, mut max_addr) = (u64::MAX, 0u64);
        for block in ssa.function.blocks.values() {
            for insn in &block.insns {
                if insn.addr != 0 {
                    min_addr = min_addr.min(insn.addr);
                    max_addr = max_addr.max(insn.addr);
                }
            }
        }
        // Add estimated last-instruction size (conservative 4 bytes).
        let size = if min_addr <= max_addr {
            (max_addr - min_addr).saturating_add(4)
        } else {
            0
        };

        // Stack frame: compute span from lowest to highest stack var offset + size.
        let stack_frame = if ssa.stack_vars.is_empty() {
            0
        } else {
            let mut lo = i64::MAX;
            let mut hi = i64::MIN;
            for sv in ssa.stack_vars.values() {
                let access_size = match sv.ty {
                    PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => w as i64,
                    PrimitiveType::Bool => 1,
                    PrimitiveType::Float => 4,
                    PrimitiveType::Double => 8,
                    PrimitiveType::Ptr => 8,
                    PrimitiveType::Unknown => 8,
                };
                lo = lo.min(sv.offset);
                hi = hi.max(sv.offset + access_size);
            }
            (hi - lo).unsigned_abs()
        };

        // Collect unique callee targets from CALL instructions (deterministic order).
        let mut callees_set = BTreeSet::new();
        for block in ssa.function.blocks.values() {
            for insn in &block.insns {
                if insn.op == IrOp::Call && !insn.inputs.is_empty() {
                    let target = &insn.inputs[0];
                    if target.space == SpaceId::Const {
                        let callee_name = symbols
                            .get(&target.offset)
                            .cloned()
                            .unwrap_or_else(|| format!("sub_{:x}", target.offset));
                        callees_set.insert(callee_name);
                    }
                }
            }
        }
        let callees: Vec<String> = callees_set.into_iter().collect();

        Self {
            name,
            address,
            size,
            convention,
            stack_frame,
            callees,
            dynamic_sp: ssa.dynamic_sp,
        }
    }
}

/// Render a [`HirFunction`] as valid C source.
///
/// Variables are named `v1, v2, ...` (monotonic, deterministic).
/// Indentation is 4 spaces per nesting level.
///
/// If the function name is a mangled C++/Rust/Swift/MSVC symbol, the
/// emitted name is the demangled short form (sanitized for C) and a
/// comment with the full demangled signature is prepended.
pub fn print_c(func: &HirFunction) -> String {
    print_c_with_dwarf(func, None)
}

pub fn print_c_with_dwarf(func: &HirFunction, dwarf: Option<&DwarfInfo>) -> String {
    print_c_full(func, dwarf, None, None, None)
}

/// Render a [`HirFunction`] with optional DWARF info and function header metadata.
///
/// When `header` is `Some`, a block comment with function metadata is emitted
/// before the function signature (after the typedefs).
///
/// When `symbols` is `Some`, CALL targets are resolved against the symbol table
/// before falling back to `sub_XXXX` names.
pub fn print_c_full(
    func: &HirFunction,
    dwarf: Option<&DwarfInfo>,
    header: Option<&FunctionHeaderInfo>,
    symbols: Option<&BTreeMap<u64, String>>,
    string_table: Option<&BTreeMap<u64, String>>,
) -> String {
    print_c_with_rtti(func, dwarf, header, symbols, string_table, None)
}

/// Keep the first IDA compatibility prelude in a multi-function translation unit
/// and remove repeated copies from subsequent function renderings.
pub fn dedupe_ida_typedefs(output: &str) -> String {
    let Some(first) = output.find(IDA_TYPEDEFS) else {
        return output.to_string();
    };
    let mut compact = String::with_capacity(output.len());
    let (head, tail) = output.split_at(first + IDA_TYPEDEFS.len());
    compact.push_str(head);
    compact.push_str(&tail.replace(IDA_TYPEDEFS, ""));
    compact
}

/// Remove the compatibility prelude for fixture/metric output. The decompiled C
/// remains pseudo-C and the prelude can dominate line-count parity metrics.
pub fn strip_ida_typedefs(output: &str) -> String {
    output.replace(IDA_TYPEDEFS, "")
}

/// Render with optional RTTI class hierarchy data.
///
/// When `rtti` is `Some`, a class hierarchy comment block is emitted at the top
/// and demangled C++ class names are used for `this` parameter types.
pub fn print_c_with_rtti(
    func: &HirFunction,
    dwarf: Option<&DwarfInfo>,
    header: Option<&FunctionHeaderInfo>,
    symbols: Option<&BTreeMap<u64, String>>,
    string_table: Option<&BTreeMap<u64, String>>,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> String {
    print_c_with_rtti_config(func, dwarf, header, symbols, string_table, rtti, None)
}

/// User-authored annotations scoped to the function being printed.
///
/// Built by the CLI from a persistent `AnnotationDb`: the per-function fields
/// (`function_comment`, `line_comments`) are keyed in by the caller so the
/// printer never has to know the function's own address. `custom_names` is
/// the global address→name map and is consulted for *any* address mentioned
/// in this function (own name, callees, tail-call targets, …).
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
}

/// Same as [`print_c_with_rtti`] but accepts an explicit [`PrintConfig`].
/// When `config` is `None` the printer falls back to [`PrintConfig::from_env`].
pub fn print_c_with_rtti_config(
    func: &HirFunction,
    dwarf: Option<&DwarfInfo>,
    header: Option<&FunctionHeaderInfo>,
    symbols: Option<&BTreeMap<u64, String>>,
    string_table: Option<&BTreeMap<u64, String>>,
    rtti: Option<&unlace_loader::RttiInfo>,
    config: Option<PrintConfig>,
) -> String {
    print_c_with_annotations(
        func,
        dwarf,
        header,
        symbols,
        string_table,
        rtti,
        config,
        None,
    )
}

/// Full-featured entry point with optional [`PrinterAnnotations`].
///
/// User-authored annotations are layered on top of the synthesized output:
/// `function_comment` becomes a `// …` line above the header, `line_comments`
/// render on the line preceding the matching instruction, and `custom_names`
/// override `sub_<addr>` synthesis for both the function's own name and any
/// referenced callee.
pub fn print_c_with_annotations(
    func: &HirFunction,
    dwarf: Option<&DwarfInfo>,
    header: Option<&FunctionHeaderInfo>,
    symbols: Option<&BTreeMap<u64, String>>,
    string_table: Option<&BTreeMap<u64, String>>,
    rtti: Option<&unlace_loader::RttiInfo>,
    config: Option<PrintConfig>,
    annotations: Option<&PrinterAnnotations>,
) -> String {
    let mut sym_owned = symbols.cloned().unwrap_or_default();
    if let Some(ann) = annotations {
        // Custom names take precedence over the synthesized symbol table —
        // overwrite so a user-rename of a known PLT symbol still wins.
        for (addr, name) in &ann.custom_names {
            sym_owned.insert(*addr, name.clone());
        }
    }
    let str_owned = string_table.cloned().unwrap_or_default();
    let mut ctx = PrintCtx::new(
        dwarf,
        func.panic_sites.clone(),
        sym_owned,
        str_owned,
        func.composite_var_types.clone(),
        func.merged_names.clone(),
    );
    if let Some(ann) = annotations {
        ctx.line_comments = ann.line_comments.clone();
        ctx.custom_names = ann.custom_names.clone();
        ctx.string_hash_table = ann.string_hash_table.clone();
        ctx.forwarded_resolutions = ann.forwarded_resolutions.clone();
    }
    if let Some(cfg) = config {
        ctx.config = cfg;
    }
    ctx.parent_returns_void = matches!(func.return_type, PrimitiveType::Unknown);
    ctx.frame_size = header.map(|h| h.stack_frame);
    ctx.objc_dispatch_calls = func.objc_dispatch_calls.clone();
    ctx.byref_boxes = func.byref_boxes.clone();

    let dwarf_func = dwarf.and_then(|d| dwarf_function_for_func(d, func, header));
    compute_dwarf_locals(dwarf_func, header, &mut ctx);
    compute_loop_counter_names(&func.body, 0, &mut ctx);
    collect_varnodes(&func.body, &mut ctx);
    compute_foldable(&mut ctx);
    compute_byref_bases(&mut ctx);
    compute_heuristic_names(&func.body, &mut ctx);
    compute_hoist_plan(&mut ctx);

    let mut out = String::with_capacity(1024);

    out.push_str(IDA_TYPEDEFS);

    if let Some(ann) = annotations {
        let mut emitted_any = false;
        for class in &ann.objc_classes {
            if let Some(s) = render_objc_class_struct(class) {
                if !emitted_any {
                    out.push_str("// ObjC class layouts (recovered from __objc_classlist)\n");
                    emitted_any = true;
                }
                out.push_str(&s);
            }
        }
        if emitted_any {
            out.push('\n');
        }
    }

    // t196: ObjC categories as `@interface ClassName (CategoryName)`
    // comment blocks. Sits just under the class-layout preamble so
    // analysts see both the class shape and any post-hoc method
    // additions when reading the recovered C.
    if let Some(ann) = annotations {
        let mut emitted_any = false;
        for cat in &ann.objc_categories {
            if !emitted_any {
                out.push_str("// ObjC categories (recovered from __objc_catlist)\n");
                emitted_any = true;
            }
            out.push_str(&render_objc_category(cat));
        }
        if emitted_any {
            out.push('\n');
        }
    }

    // t181/t191: Go-style preamble for every recovered Go type.
    // Mirrors the ObjC class block above — surfaces interface method
    // sets (t181) plus slice / map shapes (t191) so analysts can
    // correlate opaque pointer values back to their source-level type.
    if let Some(ann) = annotations {
        let mut emitted_any = false;
        for (va, ty) in &ann.go_interfaces {
            let (label, body) = match ty {
                unlace_ir::types::Type::Interface { name, .. } => {
                    let Some(rendered) = ty.render_go_interface() else {
                        continue;
                    };
                    let label = if !name.is_empty() {
                        name.clone()
                    } else {
                        format!("type_0x{va:x}")
                    };
                    (label, rendered)
                }
                unlace_ir::types::Type::Slice { .. } | unlace_ir::types::Type::Map { .. } => {
                    // Slices and maps render directly via Display
                    // (`[]int` / `map[K]V`).
                    (format!("type_0x{va:x}"), ty.to_string())
                }
                _ => continue,
            };
            if !emitted_any {
                out.push_str("// Go types (recovered from runtime.typelinks)\n");
                emitted_any = true;
            }
            let _ = writeln!(out, "// {label}: {body}");
        }
        if emitted_any {
            out.push('\n');
        }
    }

    if let Some(rtti) = rtti.filter(|r| !r.is_empty()) {
        emit_rtti_hierarchy(rtti, &mut out);
        // Emit the per-class layout block immediately above the first
        // ctor of each class — pinned at the top of the function so it
        // sits *above* the function-header comment.
        emit_class_layout_for_func(func, rtti, &mut out);
    }

    if let Some(ann) = annotations.and_then(|a| a.function_comment.as_deref()) {
        for line in ann.lines() {
            let _ = writeln!(out, "// {}", line);
        }
    }

    if let Some(hdr) = header {
        emit_function_header(hdr, &mut out);
    }

    let demangled = crate::demangle::demangle(&func.name);
    let custom_self_name = header
        .and_then(|h| ctx.custom_names.get(&h.address))
        .cloned();
    let emit_name = match (&custom_self_name, &dwarf_func, &demangled) {
        (Some(name), _, _) => name.clone(),
        (None, Some(df), _) => df.name.clone(),
        (None, None, Some(dr)) => {
            // Strip libcxx / libstdc++ inline namespaces so the header
            // comment matches the rendered `this` parameter type, which
            // routes through `recognize_stl_type` → `clean_inline_ns`.
            // Otherwise the comment shows `std::__1::vector` while the
            // signature shows `std::vector`.
            let mut sig = dr.full_signature.clone();
            for marker in ["std::__1::", "std::__cxx11::", "std::__2::"] {
                if sig.contains(marker) {
                    sig = sig.replace(marker, "std::");
                }
            }
            let _ = writeln!(out, "// {}", sig);
            // Surface lambda closures with a one-line annotation so a
            // human reader knows the enclosing class is a compiler-
            // generated closure type (`Ul…E_` / `$_<n>`).  Conservative
            // detection only — full `[capture](args) { ... }` rendering
            // would need to walk the closure's data members.
            if dr.is_lambda {
                out.push_str("// lambda closure operator()\n");
            }
            crate::demangle::sanitize_for_c(&dr.short_name)
        }
        (None, None, None) => func.name.clone(),
    };

    let return_type_str = dwarf_func
        .and_then(|df| df.return_type.as_deref())
        .map(|s| dwarf_type_to_c(s))
        .unwrap_or_else(|| c_sig_return_type(&func.return_type).to_string());

    let conv_annotation = header.and_then(|h| calling_convention_annotation(&h.convention));
    let noreturn_mod = if func.noreturn { " __noreturn" } else { "" };
    if let Some(conv) = conv_annotation {
        let _ = write!(
            out,
            "{}{} {} {}(",
            return_type_str, noreturn_mod, conv, emit_name
        );
    } else {
        let _ = write!(out, "{}{} {}(", return_type_str, noreturn_mod, emit_name);
    }

    if let Some(df) = dwarf_func.filter(|df| !df.params.is_empty()) {
        for (i, param) in df.params.iter().enumerate() {
            if i > 0 {
                out.push_str(", ");
            }
            let ty = param
                .type_name
                .as_deref()
                .map(|s| dwarf_type_to_c(s))
                .unwrap_or_else(|| "int".to_string());
            let name = param.name.as_deref().unwrap_or("arg");
            let _ = write!(out, "{} {}", ty, name);
        }
    } else {
        // Prefer the RTTI-recovered class for `this` (it pins down the
        // concrete user-defined class).  When that's unavailable, fall back
        // to STL recognition: `std::vector<int>::push_back` tells us the
        // `this` parameter is `std::vector<int>*` even when no RTTI is
        // emitted (e.g. exception-disabled or stripped C++ binaries).
        let rtti_this_type = rtti_this_param_type(&demangled, rtti);
        let stl_this_type = if rtti_this_type.is_none() {
            stl_this_param_type(&demangled)
        } else {
            None
        };
        let mut param_idx = 0;
        if let Some(ref this_ty) = rtti_this_type {
            let _ = write!(out, "{} *this", this_ty);
            param_idx = 1;
        } else if let Some(ref this_ty) = stl_this_type {
            let _ = write!(out, "{} *this", this_ty);
            param_idx = 1;
        }
        for (i, (pname, pty)) in func.params.iter().enumerate() {
            if param_idx > 0 || i > 0 {
                out.push_str(", ");
            }
            let _ = write!(out, "{} {}", c_sig_type(pty), pname);
            param_idx += 1;
        }
        if param_idx == 0 && dwarf_func.map_or(true, |df| df.params.is_empty()) {
            out.push_str("void");
        }
    }
    let _ = writeln!(out, ") {{");

    let mut foldable_svs: BTreeSet<SsaVarnode> = ctx.sv_defining_stmt.keys().copied().collect();
    // Also suppress variables that the expression tree pass marked as
    // single-use temporaries — these are inlined at their use site.
    foldable_svs.extend(&func.foldable_exprs);

    // Build the set of variable names that are actually referenced in the
    // emitted body (read as input, used as condition, or written in a
    // visible non-dead statement).  Declarations for unreferenced
    // variables are omitted to reduce noise.
    let referenced_names: BTreeSet<&str> = {
        let mut names = BTreeSet::new();
        // Variables read as inputs.
        for (sv, count) in &ctx.sv_use_counts {
            if *count > 0 {
                if let Some(n) = ctx.var_names.get(sv) {
                    names.insert(n.as_str());
                }
            }
        }
        // Variables used as conditions.
        for sv in &ctx.cond_uses {
            if let Some(n) = ctx.var_names.get(sv) {
                names.insert(n.as_str());
            }
        }
        // Variables written in visible (non-foldable) statements.
        for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
            if let Some(sv) = output_sv_opt {
                if foldable_svs.contains(sv) {
                    continue;
                }
                if let Some(insn) = ctx.stmt_insns.get(&stmt_idx) {
                    if is_dead_zero_init(insn, stmt_idx, &ctx) {
                        continue;
                    }
                }
                if let Some(n) = ctx.var_names.get(sv) {
                    names.insert(n.as_str());
                }
            }
        }
        // BYREF variables (address-taken) are always referenced.
        for base in &ctx.byref_bases {
            if let Some(n) = ctx.base_names.get(base) {
                names.insert(n.as_str());
            }
        }
        names
    };

    let mut declared_names: BTreeSet<&str> = BTreeSet::new();
    for (sv, name) in &ctx.var_names {
        if foldable_svs.contains(sv) {
            continue;
        }
        if !declared_names.insert(name.as_str()) {
            continue;
        }
        if !referenced_names.contains(name.as_str()) || should_suppress_var_decl(sv, &ctx) {
            continue;
        }
        // Hoisted decls are emitted in the function body at the point of
        // first use; skip the function-top entry so we don't emit a
        // duplicate `int v3;` line.
        if ctx.hoist_decl_plan.contains_key(&sv.base) {
            continue;
        }
        let ty = ctx
            .var_types
            .get(sv)
            .copied()
            .unwrap_or(PrimitiveType::Unknown);
        let frame_size = header.map(|h| h.stack_frame);
        // t176 — Objective-C `__block` (byref) box: render
        // `__block T name;` and skip the generic BYREF marker (the
        // address-escape *is* the whole point of the box, so the
        // standard BYREF suffix would be redundant).
        if let Some(bx) = ctx.byref_boxes.get(&sv.base) {
            let captured_c = render_type_as_c(&bx.captured_type);
            if let Some(comment) = varnode_location_comment(&sv.base, frame_size) {
                let _ = writeln!(
                    out,
                    "    __block {} {}; // {}",
                    captured_c, name, comment,
                );
            } else {
                let _ = writeln!(out, "    __block {} {};", captured_c, name);
            }
            continue;
        }
        let byref_suffix = if ctx.byref_bases.contains(&sv.base) {
            " BYREF"
        } else {
            ""
        };
        if let Some(comment) = varnode_location_comment(&sv.base, frame_size) {
            let _ = writeln!(
                out,
                "    {} {}; // {}{}",
                c_type_for_var(&ctx, &sv.base, &ty),
                name,
                comment,
                byref_suffix
            );
        } else if !byref_suffix.is_empty() {
            let _ = writeln!(
                out,
                "    {} {}; //{}",
                c_type_for_var(&ctx, &sv.base, &ty),
                name,
                byref_suffix
            );
        } else {
            let _ = writeln!(out, "    {} {};", c_type_for_var(&ctx, &sv.base, &ty), name);
        }
    }

    emit_nodes(&func.body, 1, &mut ctx, &mut out);

    out.push_str("}\n");
    out
}

// ---------------------------------------------------------------------------
// Function header comment
// ---------------------------------------------------------------------------

fn emit_function_header(hdr: &FunctionHeaderInfo, out: &mut String) {
    let display_name = match crate::demangle::demangle(&hdr.name) {
        Some(d) => d.full_signature,
        None => hdr.name.clone(),
    };
    let _ = write!(
        out,
        "/* Function:   {} | Address: 0x{:x} | Size: 0x{:x} ({} bytes) | Convention: {} | Stack frame: 0x{:x} ({} bytes)",
        display_name,
        hdr.address,
        hdr.size,
        hdr.size,
        hdr.convention,
        hdr.stack_frame,
        hdr.stack_frame,
    );
    if !hdr.callees.is_empty() {
        let demangled_callees: Vec<String> = hdr
            .callees
            .iter()
            .map(|c| match crate::demangle::demangle(c) {
                Some(d) => d.full_signature,
                None => c.clone(),
            })
            .collect();
        let _ = write!(out, " | Xrefs to:   {}", demangled_callees.join(", "));
    }
    let _ = writeln!(out, " | Xrefs from: unknown */");
    if hdr.dynamic_sp {
        let _ = writeln!(out, "// alloca / dynamic stack");
    }
}

/// Sentinel placed on the *first* line of the RTTI hierarchy block so a
/// post-pass like [`dedupe_rtti_hierarchy`] can find and dedupe it after
/// concatenating multiple per-function outputs.
const RTTI_BLOCK_BEGIN: &str = "/*__UNLACE_RTTI_BLOCK_BEGIN__";
const RTTI_BLOCK_END: &str = "__UNLACE_RTTI_BLOCK_END__*/";

fn emit_rtti_hierarchy(rtti: &unlace_loader::RttiInfo, out: &mut String) {
    let hierarchy = rtti.format_hierarchy();
    if hierarchy.is_empty() {
        return;
    }
    out.push_str(RTTI_BLOCK_BEGIN);
    out.push('\n');
    let _ = writeln!(out, " * C++ Class Hierarchy (from RTTI):");
    for line in hierarchy.lines() {
        let _ = writeln!(out, " *   {}", line);
    }

    // Resolve typeinfo addresses → demangled class names so the RTTI
    // pointer in each subtable can be printed symbolically.
    let ti_to_name: BTreeMap<u64, String> = rtti
        .classes
        .iter()
        .map(|(&addr, cls)| (addr, cls.demangled_name.clone()))
        .collect();

    for cls in rtti.classes.values() {
        let Some(layout) = cls.vtable_layout.as_ref() else {
            // Fall back to the legacy view when no structured layout
            // was reconstructed.
            if cls.vtable_methods.is_empty() {
                continue;
            }
            let _ = writeln!(out, " *");
            let _ = writeln!(out, " * {}::vtable:", cls.demangled_name);
            for (slot, va, name) in &cls.vtable_methods {
                let display = match name {
                    Some(n) => match crate::demangle::demangle(n) {
                        Some(d) => d.full_signature,
                        None => n.clone(),
                    },
                    None => format!("sub_{:x}", va),
                };
                let _ = writeln!(out, " *   [{}] {}", slot, display);
            }
            continue;
        };

        // Discover overridden methods: any vfunc whose demangled class
        // name doesn't match this class is an inherited slot we kept;
        // any vfunc whose demangled name does match (and the class has
        // bases) is an override.
        let _ = writeln!(out, " *");
        let _ = writeln!(
            out,
            " * {}::vtable @ {:#x} ({} bytes, {} subtable{}):",
            cls.demangled_name,
            layout.vtable_addr,
            layout.total_size,
            layout.subtables.len(),
            if layout.subtables.len() == 1 { "" } else { "s" },
        );

        for (sub_idx, sub) in layout.subtables.iter().enumerate() {
            let role = if sub_idx == 0 {
                "primary".to_string()
            } else {
                // For secondary subtables, identify which base they
                // cover by looking up the typeinfo (which still points
                // at the most-derived class) — we can't always tell,
                // but we *can* detect virtual-base secondary tables
                // because they're listed last in Itanium emission order.
                format!("secondary #{sub_idx}")
            };
            let _ = writeln!(
                out,
                " *   [{}] {} subtable @ {:#x}:",
                sub_idx, role, sub.address_point,
            );
            if !sub.virtual_base_offsets.is_empty() {
                for (i, off) in sub.virtual_base_offsets.iter().enumerate() {
                    let _ = writeln!(out, " *       vbase_offset[{i}] = {off}");
                }
            }
            let _ = writeln!(out, " *       offset_to_top = {}", sub.offset_to_top);
            let rtti_disp = ti_to_name
                .get(&sub.rtti_addr)
                .cloned()
                .unwrap_or_else(|| format!("{:#x}", sub.rtti_addr));
            let _ = writeln!(out, " *       typeinfo      = &typeinfo for {rtti_disp}");
            for (slot, kind) in sub.functions.iter().enumerate() {
                match kind {
                    unlace_loader::VtableSlotKind::Function {
                        va, name, is_thunk,
                    } => {
                        let display = match name {
                            Some(n) => match crate::demangle::demangle(n) {
                                Some(d) => d.full_signature,
                                None => n.clone(),
                            },
                            None => format!("sub_{:x}", va),
                        };
                        // Heuristic override marker: when the demangled
                        // class part of the symbol matches this class
                        // *and* this class has at least one base, the
                        // slot overrides an inherited virtual.
                        let mut tag = String::new();
                        if *is_thunk {
                            tag.push_str(" [thunk]");
                        } else if !cls.bases.is_empty() {
                            if let Some(n) = name {
                                if let Some(d) = crate::demangle::demangle(n) {
                                    if d.class_name.as_deref() == Some(cls.demangled_name.as_str())
                                    {
                                        tag.push_str(" [override]");
                                    }
                                }
                            }
                        }
                        let _ =
                            writeln!(out, " *       vfunc[{slot}] = {display}{tag}");
                    }
                    unlace_loader::VtableSlotKind::Zero => {
                        let _ = writeln!(out, " *       vfunc[{slot}] = (null)");
                    }
                    unlace_loader::VtableSlotKind::Raw(v) => {
                        let _ = writeln!(out, " *       vfunc[{slot}] = raw {:#x}", v);
                    }
                    // The following slot kinds are reserved for future
                    // extensions; they don't appear in our current
                    // layout reconstruction but are handled defensively.
                    unlace_loader::VtableSlotKind::VCallOffset(off) => {
                        let _ = writeln!(out, " *       vcall_offset = {off}");
                    }
                    unlace_loader::VtableSlotKind::VBaseOffset(off) => {
                        let _ = writeln!(out, " *       vbase_offset = {off}");
                    }
                    unlace_loader::VtableSlotKind::OffsetToTop(off) => {
                        let _ = writeln!(out, " *       offset_to_top = {off}");
                    }
                    unlace_loader::VtableSlotKind::Rtti(p) => {
                        let _ = writeln!(out, " *       typeinfo = {:#x}", p);
                    }
                }
            }
        }
    }

    out.push_str(" ");
    out.push_str(RTTI_BLOCK_END);
    out.push('\n');
    out.push('\n');
}

/// After concatenating per-function outputs, keep the first RTTI block
/// and strip every subsequent copy. The block is delimited by
/// [`RTTI_BLOCK_BEGIN`] / [`RTTI_BLOCK_END`] sentinels so this pass is
/// linear and never trips on user comments. After deduplication the
/// sentinels are rewritten as plain `/*` / `*/` so the output is valid C.
pub fn dedupe_rtti_hierarchy(output: &str) -> String {
    let mut out = String::with_capacity(output.len());
    let mut seen = false;
    let mut rest = output;
    while let Some(begin) = rest.find(RTTI_BLOCK_BEGIN) {
        out.push_str(&rest[..begin]);
        let after_begin = &rest[begin..];
        let Some(end_offset) = after_begin.find(RTTI_BLOCK_END) else {
            // Malformed — bail and keep the rest verbatim.
            out.push_str(after_begin);
            return out;
        };
        let block_end = end_offset + RTTI_BLOCK_END.len();
        let block = &after_begin[..block_end];
        if !seen {
            // Rewrite the sentinels so the block is valid C: `/*` for
            // the BEGIN line, ` */` for the END line.
            let rewritten = block
                .replace(RTTI_BLOCK_BEGIN, "/*")
                .replace(RTTI_BLOCK_END, "*/");
            out.push_str(&rewritten);
            seen = true;
        }
        // Skip the block + the immediate trailing newline so we don't
        // leave a blank line where stripped duplicates used to live.
        let after_block = &after_begin[block_end..];
        let after_block = after_block.strip_prefix('\n').unwrap_or(after_block);
        rest = after_block;
    }
    out.push_str(rest);
    out
}

/// Emit a per-class layout block above the first ctor of a class.
///
/// Format:
/// ```text
/// /* class MyClass : public Base {
///  *   vfunc[0] = method1
///  *   vfunc[1] = method2 [override]
///  * }; */
/// ```
fn emit_class_layout_for_func(
    func: &HirFunction,
    rtti: &unlace_loader::RttiInfo,
    out: &mut String,
) {
    let Some(class_name) = func.class_name.as_deref() else {
        return;
    };
    if !func.is_ctor {
        return;
    }
    let Some(cls) = rtti.class_by_name(class_name) else {
        return;
    };
    let Some(layout) = cls.vtable_layout.as_ref() else {
        return;
    };
    let primary = match layout.subtables.first() {
        Some(p) => p,
        None => return,
    };

    // class header — list base classes for context.
    let mut header = format!("class {class_name}");
    if !cls.bases.is_empty() {
        header.push_str(" : ");
        let mut parts = Vec::new();
        for b in &cls.bases {
            let vis = if b.is_public { "public" } else { "private" };
            let virt = if b.is_virtual { " virtual" } else { "" };
            // Resolve the base typeinfo → name when possible.
            let bname = rtti
                .classes
                .get(&b.typeinfo_addr)
                .map(|c| c.demangled_name.clone())
                .unwrap_or_else(|| format!("ti_{:x}", b.typeinfo_addr));
            parts.push(format!("{vis}{virt} {bname}"));
        }
        header.push_str(&parts.join(", "));
    }
    let _ = writeln!(out, "/* {header} {{");
    for (slot, kind) in primary.functions.iter().enumerate() {
        match kind {
            unlace_loader::VtableSlotKind::Function {
                va, name, is_thunk,
            } => {
                let display = match name {
                    Some(n) => match crate::demangle::demangle(n) {
                        Some(d) => d.full_signature,
                        None => n.clone(),
                    },
                    None => format!("sub_{:x}", va),
                };
                let mut tag = String::new();
                if *is_thunk {
                    tag.push_str(" [thunk]");
                } else if !cls.bases.is_empty() {
                    if let Some(n) = name {
                        if let Some(d) = crate::demangle::demangle(n) {
                            if d.class_name.as_deref() == Some(class_name) {
                                tag.push_str(" [override]");
                            }
                        }
                    }
                }
                let _ = writeln!(out, " *   vfunc[{slot}] = {display}{tag}");
            }
            unlace_loader::VtableSlotKind::Zero => {
                let _ = writeln!(out, " *   vfunc[{slot}] = (null)");
            }
            unlace_loader::VtableSlotKind::Raw(v) => {
                let _ = writeln!(out, " *   vfunc[{slot}] = raw {:#x}", v);
            }
            _ => {}
        }
    }
    let _ = writeln!(out, " * }}; */");
}

fn rtti_this_param_type(
    demangled: &Option<crate::demangle::DemangleResult>,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Option<String> {
    let dr = demangled.as_ref()?;
    let class_name = dr.class_name.as_ref()?;
    let rtti = rtti?;
    rtti.class_by_name(class_name)?;
    Some(class_name.clone())
}

/// Recognise STL container types (`std::vector<T>`, `std::string`, etc.)
/// from the demangled symbol's namespace path, and return the C-style
/// spelling to use for the `this` parameter.  Conservative: only fires
/// when [`crate::demangle::demangle`] already classified the symbol as a
/// member function of one of the supported classes — see
/// [`unlace_passes::recognize_stl_type`].
fn stl_this_param_type(
    demangled: &Option<crate::demangle::DemangleResult>,
) -> Option<String> {
    let dr = demangled.as_ref()?;
    let class_name = dr.class_name.as_ref()?;
    unlace_passes::recognize_stl_type(&dr.namespaces, class_name)
}

// ---------------------------------------------------------------------------
// Context
// ---------------------------------------------------------------------------

/// How and where a hoisted local declaration should be emitted.
///
/// Populated by [`compute_hoist_plan`] and consulted by both the
/// function-top declaration block (which skips entries present here) and
/// [`emit_statement`] / [`inline_statement_text`] (which fold the type
/// prefix into the matching assignment).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct HoistPlan {
    /// Statement index where the declaration is anchored.  When
    /// `fold_into_assignment` is true the assignment at this stmt becomes
    /// `<type> <name> = <expr>;` with the location comment preserved as a
    /// trailing line comment.
    stmt_idx: u32,
    /// `true` when the statement at `stmt_idx` writes the hoisted variable
    /// as a regular assignment (not foldable, not dead-zero, not compound,
    /// not CSEL) and can therefore absorb the type prefix.
    fold_into_assignment: bool,
}

/// Output formatting configuration.
///
/// Mirrors the indent / margin / format-flags fields stored in IDA's
/// `module_data` structure (offsets `592`, `600`, `719` resolved by
/// `sub_268FA0` and configured through the Options dialog `sub_33D380`).
/// Each field maps to a documented IDA default:
///
/// * `indent_width` — IDA `module_data + 592`. Number of space columns
///   added per nesting level. IDA defaults to **2**; the Unlace printer
///   has historically rendered 4-space tabs, so the tab- and indent-
///   widths are kept distinct.
/// * `tab_width` — Width of a single indent step actually emitted by
///   [`indent`]. Defaults to **4** to preserve byte-identical output for
///   the existing golden suite (and matches the literal `"    "` that
///   used to be hard-coded inside `indent`).
/// * `max_line_width` — IDA `module_data + 600`. Soft right margin used
///   by future line-wrapping logic. Defaults to **100** (Unlace's
///   historical wrap target).
/// * `wrap_floor` — Minimum line width before wrapping kicks in. Matches
///   the IDA Options-dialog default of **80**.
///
/// All four fields can be overridden at construction time via environment
/// variables read inside [`PrintCtx::new`]:
///
/// | Variable                  | Field            |
/// |---------------------------|------------------|
/// | `UNLACE_MAX_LINE_WIDTH`   | `max_line_width` |
/// | `UNLACE_TAB_WIDTH`        | `tab_width`      |
/// | `UNLACE_INDENT`           | `indent_width`   |
/// | `UNLACE_WRAP_FLOOR`       | `wrap_floor`     |
/// | `UNLACE_FORMAT_FLAGS`     | `format_flags`   |
///
/// Values that fail to parse as `usize` (or that are absent) leave the
/// corresponding field at its IDA-aligned default.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct PrintConfig {
    /// IDA `module_data + 600` — soft right margin (default 100).
    pub max_line_width: usize,
    /// Indent-step width in columns (default 4).
    pub tab_width: usize,
    /// IDA `module_data + 592` — logical indent width (default 2).
    pub indent_width: usize,
    /// Lower-bound margin honoured when wrapping (default 80, IDA's
    /// Options-dialog default).
    pub wrap_floor: usize,
    /// IDA `module_data + 719` — format-flags bitfield. Mirrors IDA's
    /// per-output toggles (e.g. emit assembly addresses, hex-only
    /// constants, drop trailing semicolons in tagged streams). Unlace
    /// does not currently consume any bits; the field is plumbed for
    /// forward compatibility so future flag-driven emits land without a
    /// signature break. Default: `0`.
    pub format_flags: u32,
}

impl Default for PrintConfig {
    fn default() -> Self {
        Self {
            max_line_width: 100,
            tab_width: 4,
            indent_width: 2,
            wrap_floor: 80,
            format_flags: 0,
        }
    }
}

impl PrintConfig {
    /// Build a [`PrintConfig`] starting from [`PrintConfig::default`] and
    /// applying any present `UNLACE_*` environment overrides. Unparseable
    /// values are silently ignored so a malformed env var never panics
    /// the printer mid-decompilation.
    pub fn from_env() -> Self {
        let mut cfg = Self::default();
        if let Some(v) = read_usize_env("UNLACE_MAX_LINE_WIDTH") {
            cfg.max_line_width = v;
        }
        if let Some(v) = read_usize_env("UNLACE_TAB_WIDTH") {
            cfg.tab_width = v;
        }
        if let Some(v) = read_usize_env("UNLACE_INDENT") {
            cfg.indent_width = v;
        }
        if let Some(v) = read_usize_env("UNLACE_WRAP_FLOOR") {
            cfg.wrap_floor = v;
        }
        if let Some(v) = read_usize_env("UNLACE_FORMAT_FLAGS") {
            cfg.format_flags = v as u32;
        }
        cfg
    }
}

fn read_usize_env(name: &str) -> Option<usize> {
    std::env::var(name).ok().and_then(|v| v.parse::<usize>().ok())
}

struct PrintCtx {
    /// Output formatting configuration (indent width, line margins, …).
    /// Populated from environment variables at [`PrintCtx::new`] time
    /// via [`PrintConfig::from_env`].
    config: PrintConfig,
    next_var: u32,
    var_names: BTreeMap<SsaVarnode, String>,
    var_types: BTreeMap<SsaVarnode, PrimitiveType>,
    base_names: BTreeMap<Varnode, String>,
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
    /// Number of times each SSA varnode is read as an input.  Populated by
    /// [`compute_foldable`] and consulted by `is_dead_zero_init` to suppress
    /// `vN = 0` writes whose final SSA version is never read (cross-block
    /// dead stores that DSE cannot eliminate within a single block).
    sv_use_counts: BTreeMap<SsaVarnode, usize>,
    cond_uses: Vec<SsaVarnode>,
    /// `(varnode, anchor stmt idx)` pairs recording which statement reads
    /// each `cond_uses` entry.  Used together with `stmt_inputs`/`stmt_outputs`
    /// to compute the LCA scope of a declared name when deciding whether to
    /// hoist its declaration to the point of first use.
    cond_use_stmts: Vec<(SsaVarnode, u32)>,
    collect_depth: u32,
    stmt_depths: BTreeMap<u32, u32>,
    /// Lexical scope path of each statement, recorded during
    /// `collect_varnodes`.  Each path element is a unique scope id assigned
    /// when entering a block-introducing construct (then-body, else-body,
    /// while-body, for-body, switch case, etc.), so two statements share an
    /// LCA iff their paths share a prefix.  The empty `Vec<u32>` denotes the
    /// function-root scope.
    stmt_scope_paths: BTreeMap<u32, Vec<u32>>,
    /// Next scope id used to label nested blocks during collection.
    next_scope_id: u32,
    /// Stack of scope ids walked during `collect_varnodes`, mutated as the
    /// walker enters/leaves block-introducing constructs.
    current_scope_path: Vec<u32>,
    /// Hoist plan: maps a base varnode to the statement index where its
    /// declaration should be emitted in the body instead of at the
    /// function-top declaration block.  Names absent from this map fall
    /// back to the function-top declaration block.  Populated by
    /// [`compute_hoist_plan`] after foldable detection.
    hoist_decl_plan: BTreeMap<Varnode, HoistPlan>,
    /// Recovered stack frame size (from the `FunctionHeaderInfo`), needed
    /// by hoisted declaration emission to render `[rsp+...] [rbp-...]`
    /// trailing comments matching the function-top decl block.
    frame_size: Option<u64>,
    field_by_offset: BTreeMap<u64, Vec<(String, String, u64)>>,
    panic_sites: BTreeMap<u64, PanicKind>,
    /// Merged symbol table: address → symbol name (PLT + function symbols).
    symbols: BTreeMap<u64, String>,
    /// Recovered string literals: virtual address → string content.
    string_table: BTreeMap<u64, String>,
    /// Base varnodes whose address is taken and passed to a CALL ("BYREF").
    byref_bases: BTreeSet<Varnode>,
    /// Override map: when present, [`PrintCtx::name_of`] returns the override
    /// for the matching base instead of the cached `vN` name.
    name_overrides: BTreeMap<Varnode, String>,
    /// DWARF local variable type overrides keyed by the same base varnode used
    /// by `name_overrides`.
    dwarf_local_types: BTreeMap<Varnode, String>,
    /// Composite (struct/array) type annotations from SSA-level type inference.
    /// Used by `try_struct_field_access` to emit `base->field_<offset>` syntax.
    composite_var_types: BTreeMap<SsaVarnode, Type>,
    source_map: BTreeMap<u64, unlace_loader::SourceLocation>,
    /// `true` when the enclosing function returns `void` (or the inferred
    /// return type is `Unknown`, which we render as `void`). Used by
    /// [`HirNode::TailCall`] emission to choose between `return foo();`
    /// (non-void) and `foo(); return;` (void), matching IDA convention.
    parent_returns_void: bool,
    /// Pre-coalesced per-SSA-varnode names from
    /// [`unlace_passes::VariableMergePass`].
    ///
    /// When this map contains an entry for an SsaVarnode, [`Self::name_of`]
    /// returns that name (after first honouring DWARF / role-based overrides
    /// keyed by the base [`Varnode`]).  Empty when the coalescer was not run,
    /// in which case naming falls back to the printer's `next_var` allocator.
    merged_names: BTreeMap<SsaVarnode, String>,
    /// User-authored per-instruction comments, keyed by instruction VA.
    /// Populated from [`PrinterAnnotations::line_comments`] at construction.
    line_comments: BTreeMap<u64, String>,
    /// User overrides for synthesized `sub_<addr>` names.  Distinct from
    /// [`Self::symbols`] so the printer can tell a *user override* apart from
    /// a name that originated in the binary's own symbol table.
    custom_names: BTreeMap<u64, String>,
    /// ObjC dispatch annotations keyed by instruction VA. Lifted from
    /// [`HirFunction::objc_dispatch_calls`].
    objc_dispatch_calls: BTreeMap<u64, String>,
    /// Recovered ObjC `__block` (byref) boxes keyed by the alloca's base
    /// [`Varnode`]. Lifted from [`HirFunction::byref_boxes`] and consulted
    /// by local-decl emission to render `__block T name;` in place of the
    /// raw 40-byte anonymous struct.
    byref_boxes: BTreeMap<Varnode, unlace_ir::ssa::ByrefBox>,
    /// Pre-computed `hash → string` table consulted by switch-case emission
    /// so a case constant matching a recognised CRC32/FNV-1a/djb2 of a
    /// binary string renders as `case 0xN: /* "name" */`.
    string_hash_table: BTreeMap<u64, String>,
    /// IAT slot VA → resolved forwarder target, lifted from
    /// [`PrinterAnnotations::forwarded_resolutions`]. Empty when the caller
    /// didn't pass annotations or the binary has no resolved forwarders.
    forwarded_resolutions: BTreeMap<u64, String>,
}

impl PrintCtx {
    fn new(
        dwarf: Option<&DwarfInfo>,
        panic_sites: BTreeMap<u64, PanicKind>,
        symbols: BTreeMap<u64, String>,
        string_table: BTreeMap<u64, String>,
        composite_var_types: BTreeMap<SsaVarnode, Type>,
        merged_names: BTreeMap<SsaVarnode, String>,
    ) -> Self {
        let field_by_offset = build_field_offset_map(dwarf);
        // Advance the fresh-name allocator past any `vN` already claimed by
        // the variable-merge pass so fallback names never collide with
        // pre-coalesced ones.
        let mut start_next: u32 = 1;
        for n in merged_names.values() {
            if let Some(rest) = n.strip_prefix('v') {
                if let Ok(idx) = rest.parse::<u32>() {
                    start_next = start_next.max(idx + 1);
                }
            }
        }
        Self {
            config: PrintConfig::from_env(),
            next_var: start_next,
            var_names: BTreeMap::new(),
            var_types: BTreeMap::new(),
            base_names: BTreeMap::new(),
            ssa_next_version: BTreeMap::new(),
            ssa_current: BTreeMap::new(),
            stmt_outputs: BTreeMap::new(),
            stmt_inputs: BTreeMap::new(),
            next_stmt: 0,
            emit_stmt: 0,
            stmt_insns: BTreeMap::new(),
            foldable_stmts: BTreeSet::new(),
            sv_defining_stmt: BTreeMap::new(),
            sv_use_counts: BTreeMap::new(),
            cond_uses: Vec::new(),
            cond_use_stmts: Vec::new(),
            collect_depth: 0,
            stmt_depths: BTreeMap::new(),
            stmt_scope_paths: BTreeMap::new(),
            next_scope_id: 0,
            current_scope_path: Vec::new(),
            hoist_decl_plan: BTreeMap::new(),
            frame_size: None,
            field_by_offset,
            panic_sites,
            symbols,
            string_table,
            byref_bases: BTreeSet::new(),
            name_overrides: BTreeMap::new(),
            dwarf_local_types: BTreeMap::new(),
            composite_var_types,
            source_map: dwarf.map(|d| d.source_map.clone()).unwrap_or_default(),
            parent_returns_void: false,
            merged_names,
            line_comments: BTreeMap::new(),
            custom_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            string_hash_table: BTreeMap::new(),
            forwarded_resolutions: BTreeMap::new(),
        }
    }

    fn name_of(&mut self, sv: &SsaVarnode) -> String {
        if let Some(n) = self.var_names.get(sv) {
            return n.clone();
        }
        let name = if let Some(override_name) = self.name_overrides.get(&sv.base) {
            // DWARF / role-based override (keyed by base) wins over coalescer.
            override_name.clone()
        } else if let Some(merged) = self.merged_names.get(sv) {
            // Variable-merge pass result (per-SsaVarnode).  Reuse the same
            // name for every SsaVarnode in the same coalesced cluster, even
            // if their base Varnodes differ (Unique-space coalescing).
            merged.clone()
        } else if let Some(existing) = self.base_names.get(&sv.base) {
            existing.clone()
        } else {
            let fresh = format!("v{}", self.next_var);
            self.next_var += 1;
            self.base_names.insert(sv.base, fresh.clone());
            fresh
        };
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

fn build_field_offset_map(dwarf: Option<&DwarfInfo>) -> BTreeMap<u64, Vec<(String, String, u64)>> {
    let mut map: BTreeMap<u64, Vec<(String, String, u64)>> = BTreeMap::new();
    let dwarf = match dwarf {
        Some(d) => d,
        None => return map,
    };
    for st in dwarf.structs.values() {
        for field in &st.fields {
            map.entry(field.offset).or_default().push((
                st.name.clone(),
                field.name.clone(),
                field.size,
            ));
        }
    }
    map
}

fn try_resolve_struct_field(
    addr_insn: &IrInsn,
    addr_stmt_idx: u32,
    _load_size: u8,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if ctx.field_by_offset.is_empty() {
        return None;
    }
    if addr_insn.op != IrOp::IntAdd || addr_insn.inputs.len() < 2 {
        return None;
    }
    let (base_input, const_offset) = if addr_insn.inputs[1].space == SpaceId::Const {
        (&addr_insn.inputs[0], addr_insn.inputs[1].offset)
    } else if addr_insn.inputs[0].space == SpaceId::Const {
        (&addr_insn.inputs[1], addr_insn.inputs[0].offset)
    } else {
        return None;
    };
    if base_input.space == SpaceId::Const {
        return None;
    }
    let entries = ctx.field_by_offset.get(&const_offset)?;
    let field_name = entries.first()?.1.clone();
    let base_sv = ctx
        .stmt_inputs
        .get(&addr_stmt_idx)
        .cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *base_input).copied());
    let base_expr = match base_sv {
        Some(sv) => {
            if let Some(&ds) = ctx.sv_defining_stmt.get(&sv) {
                if let Some(di) = ctx.stmt_insns.get(&ds).cloned() {
                    format!("({})", emit_expr(&di, ds, ctx))
                } else {
                    ctx.name_of(&sv)
                }
            } else {
                ctx.name_of(&sv)
            }
        }
        None => {
            let sv = SsaVarnode {
                base: *base_input,
                version: 0,
            };
            ctx.name_of(&sv)
        }
    };
    Some(format!("{}->{}", base_expr, field_name))
}

fn try_resolve_field_from_addr(
    addr_vn: &Varnode,
    _idx: usize,
    stmt_idx: u32,
    access_size: u8,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if ctx.field_by_offset.is_empty() || addr_vn.space == SpaceId::Const {
        return None;
    }
    let addr_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *addr_vn).copied())?;
    let &def_stmt = ctx.sv_defining_stmt.get(&addr_sv)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    try_resolve_struct_field(&def_insn, def_stmt, access_size, ctx)
}

// ---------------------------------------------------------------------------
// Array subscript recovery
// ---------------------------------------------------------------------------

/// Result of array subscript pattern matching on an address expression.
struct ArraySubscript {
    /// The base expression (already rendered as a C string).
    base: String,
    /// The index expression (already rendered as a C string).
    index: String,
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
fn try_array_subscript(
    addr_vn: &Varnode,
    stmt_idx: u32,
    access_size: u8,
    ctx: &mut PrintCtx,
) -> Option<ArraySubscript> {
    if access_size == 0 || addr_vn.space == SpaceId::Const {
        return None;
    }

    // Resolve the SSA varnode for the address operand.
    let addr_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *addr_vn).copied())?;

    // The address must be defined by a foldable statement.
    let &def_stmt = ctx.sv_defining_stmt.get(&addr_sv)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();

    let stride = access_size as u64;

    match def_insn.op {
        // Pattern 1: INT_ADD(base, INT_MULT(index, Const(stride)))
        IrOp::IntAdd if def_insn.inputs.len() == 2 => {
            // One operand must be an INT_MULT producing index*stride.
            // Check which operand is the multiply (it could be either).
            for (mult_pos, base_pos) in [(0, 1), (1, 0)] {
                let mult_vn = &def_insn.inputs[mult_pos];
                let base_vn = &def_insn.inputs[base_pos];

                // The multiply operand must not be a constant and must have
                // a foldable defining statement.
                if mult_vn.space == SpaceId::Const {
                    continue;
                }

                let mult_sv = ctx
                    .stmt_inputs
                    .get(&def_stmt)
                    .cloned()
                    .and_then(|inputs| inputs.iter().find(|sv| sv.base == *mult_vn).copied());
                let mult_sv = match mult_sv {
                    Some(sv) => sv,
                    None => continue,
                };
                let mult_def = match ctx.sv_defining_stmt.get(&mult_sv) {
                    Some(&s) => s,
                    None => continue,
                };
                let mult_insn = match ctx.stmt_insns.get(&mult_def) {
                    Some(i) => i.clone(),
                    None => continue,
                };

                if mult_insn.op != IrOp::IntMult || mult_insn.inputs.len() != 2 {
                    continue;
                }

                // One operand of the multiply must be Const(stride).
                let (idx_vn, const_vn) = if mult_insn.inputs[1].space == SpaceId::Const {
                    (&mult_insn.inputs[0], &mult_insn.inputs[1])
                } else if mult_insn.inputs[0].space == SpaceId::Const {
                    (&mult_insn.inputs[1], &mult_insn.inputs[0])
                } else {
                    continue;
                };

                if const_vn.offset != stride {
                    continue;
                }

                let idx_expr = emit_operand_resolved(idx_vn, 0, mult_def, ctx);
                let base_expr = emit_operand_resolved(base_vn, base_pos, def_stmt, ctx);

                return Some(ArraySubscript {
                    base: base_expr,
                    index: idx_expr,
                });
            }

            // Pattern 3: INT_ADD(base, Const(offset)) → base[offset / stride]
            let (base_vn, const_vn) = if def_insn.inputs[1].space == SpaceId::Const {
                (&def_insn.inputs[0], &def_insn.inputs[1])
            } else if def_insn.inputs[0].space == SpaceId::Const {
                (&def_insn.inputs[1], &def_insn.inputs[0])
            } else {
                return None;
            };
            if base_vn.space == SpaceId::Const {
                return None;
            }
            let offset = const_vn.offset;
            if offset == 0 || offset % stride != 0 {
                return None;
            }
            let computed_idx = offset / stride;
            let base_expr = emit_operand_resolved(base_vn, 0, def_stmt, ctx);
            Some(ArraySubscript {
                base: base_expr,
                index: format!("{}", computed_idx),
            })
        }

        // Pattern 2: PTRADD(base, index, Const(stride))
        IrOp::Ptradd if def_insn.inputs.len() >= 3 => {
            let stride_vn = &def_insn.inputs[2];
            if stride_vn.space != SpaceId::Const || stride_vn.offset != stride {
                return None;
            }
            let base_expr = emit_operand_resolved(&def_insn.inputs[0], 0, def_stmt, ctx);
            let idx_expr = emit_operand_resolved(&def_insn.inputs[1], 1, def_stmt, ctx);
            Some(ArraySubscript {
                base: base_expr,
                index: idx_expr,
            })
        }

        _ => None,
    }
}

// ---------------------------------------------------------------------------
// Struct field access recovery (from SSA composite_var_types)
// ---------------------------------------------------------------------------

/// Try to recognise a struct field access pattern: `INT_ADD(base, Const(offset))`
/// where `base` has a `Type::Struct` in `composite_var_types`.
///
/// Emits `base->field_<offset>` when a matching field is found at the given
/// offset, or `base->field_<offset>` with a synthetic name when the struct
/// type is known but no field matches exactly.
fn try_struct_field_access(
    addr_vn: &Varnode,
    stmt_idx: u32,
    _access_size: u8,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if ctx.composite_var_types.is_empty() || addr_vn.space == SpaceId::Const {
        return None;
    }

    let addr_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *addr_vn).copied())?;

    let &def_stmt = ctx.sv_defining_stmt.get(&addr_sv)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();

    if def_insn.op != IrOp::IntAdd || def_insn.inputs.len() < 2 {
        return None;
    }

    let (base_vn, const_offset) = if def_insn.inputs[1].space == SpaceId::Const {
        (&def_insn.inputs[0], def_insn.inputs[1].offset)
    } else if def_insn.inputs[0].space == SpaceId::Const {
        (&def_insn.inputs[1], def_insn.inputs[0].offset)
    } else {
        return None;
    };

    if base_vn.space == SpaceId::Const {
        return None;
    }

    let base_sv = ctx
        .stmt_inputs
        .get(&def_stmt)
        .cloned()
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *base_vn).copied())?;

    let base_type = ctx.composite_var_types.get(&base_sv)?;

    let struct_fields = match base_type {
        Type::Struct { fields, .. } => fields,
        Type::Ptr(inner) => match inner.as_ref() {
            Type::Struct { fields, .. } => fields,
            _ => return None,
        },
        _ => return None,
    };

    let field_name = struct_fields
        .iter()
        .find(|f| f.offset == const_offset)
        .map(|f| f.name.clone())
        .unwrap_or_else(|| format!("field_{:X}", const_offset));

    let base_expr = emit_operand_resolved(base_vn, 0, def_stmt, ctx);
    Some(format!("{}->{}", base_expr, field_name))
}

/// Minimum address to consider as a global (below this is likely stack-relative).
const GLOBAL_ADDR_THRESHOLD: u64 = 0x10000;

fn try_global_var_name(addr_vn: &Varnode, access_size: u8, ctx: &PrintCtx) -> Option<String> {
    if addr_vn.space != SpaceId::Const {
        return None;
    }
    let addr = addr_vn.offset;
    if addr < GLOBAL_ADDR_THRESHOLD {
        return None;
    }
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

/// Recognize an x86-64 stack-canary read of the form `*(FS:0x28)` and emit
/// the corresponding IDA-style intrinsic.
///
/// The Ghidra/iced lifters model FS-relative TLS access as a `Load` whose
/// address operand is a small constant (the segment offset). The canonical
/// canary location is `fs:0x28` for 64-bit and `fs:0x14` for 32-bit; we
/// also accept `0x14` as a `__readfsdword` site since some variants use it.
fn try_fs_canary_load(addr_vn: &Varnode, access_size: u8) -> Option<String> {
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
fn format_char_case(v: u64, is_char: bool) -> Option<String> {
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
fn try_macos_canary_load(addr_vn: &Varnode, ctx: &PrintCtx) -> Option<String> {
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

/// Hex-Rays-style `MEMORY[addr]` annotation for absolute addresses that the
/// rest of the pipeline (string table, globals, struct fields, arrays) failed
/// to give a name to. Limited to constant addresses outside the canonical
/// stack-canary range to avoid stomping on `__readfsqword(0x28u)`. Skipped
/// when the address is in the string table — string inlining must win.
fn try_emit_memory_annotation(addr_vn: &Varnode, ctx: &PrintCtx) -> Option<String> {
    if addr_vn.space != SpaceId::Const {
        return None;
    }
    let addr = addr_vn.offset;
    if addr < 0x1000 {
        return None;
    }
    if ctx.string_table.contains_key(&addr) {
        return None;
    }
    Some(format!("MEMORY[0x{addr:X}]"))
}

// ---------------------------------------------------------------------------
// Varnode collection — pre-walk to assign names deterministically
// ---------------------------------------------------------------------------

fn collect_insn_as_stmt(insn: &IrInsn, ctx: &mut PrintCtx) -> u32 {
    let idx = ctx.next_stmt;
    ctx.next_stmt += 1;
    ctx.stmt_depths.insert(idx, ctx.collect_depth);
    ctx.stmt_scope_paths
        .insert(idx, ctx.current_scope_path.clone());

    let mut input_svs = Vec::new();
    for input in &insn.inputs {
        if input.space == SpaceId::Const {
            continue;
        }
        let ver = ctx.current_version(input);
        let sv = SsaVarnode {
            base: *input,
            version: ver,
        };
        ctx.name_of(&sv);
        input_svs.push(sv);
    }
    ctx.stmt_inputs.insert(idx, input_svs);

    let output_sv = if let Some(output) = insn.output {
        let ver = ctx.next_version(&output);
        let sv = SsaVarnode {
            base: output,
            version: ver,
        };
        ctx.name_of(&sv);
        infer_type_from_insn(insn, &sv, ctx);
        Some(sv)
    } else {
        None
    };
    ctx.stmt_outputs.insert(idx, output_sv);
    ctx.stmt_insns.insert(idx, insn.clone());
    idx
}

fn collect_varnodes(nodes: &[HirNode], ctx: &mut PrintCtx) {
    for node in nodes {
        match node {
            HirNode::Block(children) => collect_varnodes(children, ctx),

            HirNode::Statement(insn) => {
                let idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(idx, ctx.collect_depth);
                ctx.stmt_scope_paths
                    .insert(idx, ctx.current_scope_path.clone());

                let mut input_svs = Vec::new();
                for input in &insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    input_svs.push(sv);
                }
                ctx.stmt_inputs.insert(idx, input_svs);

                let output_sv = if let Some(output) = insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode {
                        base: output,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    infer_type_from_insn(insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(idx, output_sv);
                ctx.stmt_insns.insert(idx, insn.clone());
            }

            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                // Anchor the cond read at the next-allocated stmt so the
                // hoist pass treats it as a use at the enclosing scope.
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.collect_depth += 1;
                let then_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(then_scope);
                collect_varnodes(then_body, ctx);
                ctx.current_scope_path.pop();
                if let Some(eb) = else_body {
                    let else_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(else_scope);
                    collect_varnodes(eb, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }

            HirNode::While { cond, body } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.collect_depth += 1;
                let body_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(body_scope);
                collect_varnodes(body, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
            }

            HirNode::DoWhile { body, cond } => {
                ctx.collect_depth += 1;
                let body_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(body_scope);
                collect_varnodes(body, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                // do/while reads the cond *after* the body; anchor at the
                // last-allocated stmt index inside the loop body.
                ctx.cond_use_stmts
                    .push((*cond, ctx.next_stmt.saturating_sub(1)));
            }

            HirNode::For {
                init,
                cond,
                update,
                body,
            } => {
                if let Some(init_insn) = init {
                    collect_insn_as_stmt(init_insn, ctx);
                }
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.collect_depth += 1;
                let body_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(body_scope);
                collect_varnodes(body, ctx);
                collect_insn_as_stmt(update, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
            }

            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.collect_depth += 1;
                for (_case, body, _) in cases {
                    let case_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(case_scope);
                    collect_varnodes(body, ctx);
                    ctx.current_scope_path.pop();
                }
                if let Some(def) = default {
                    let default_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(default_scope);
                    collect_varnodes(def, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }

            HirNode::Return(Some(sv)) => {
                ctx.name_of(sv);
                ctx.cond_uses.push(*sv);
                ctx.cond_use_stmts.push((*sv, ctx.next_stmt));
            }

            HirNode::Ternary {
                cond,
                then_insn,
                else_insn,
                output: _,
            } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);

                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));

                let then_idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(then_idx, ctx.collect_depth);
                ctx.stmt_scope_paths
                    .insert(then_idx, ctx.current_scope_path.clone());
                let mut then_inputs = Vec::new();
                for input in &then_insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    then_inputs.push(sv);
                }
                ctx.stmt_inputs.insert(then_idx, then_inputs);
                let then_out_sv = if let Some(output) = then_insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode {
                        base: output,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    infer_type_from_insn(then_insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(then_idx, then_out_sv);

                let else_idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(else_idx, ctx.collect_depth);
                ctx.stmt_scope_paths
                    .insert(else_idx, ctx.current_scope_path.clone());
                let mut else_inputs = Vec::new();
                for input in &else_insn.inputs {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    else_inputs.push(sv);
                }
                ctx.stmt_inputs.insert(else_idx, else_inputs);
                let else_out_sv = if let Some(output) = else_insn.output {
                    let ver = ctx.next_version(&output);
                    let sv = SsaVarnode {
                        base: output,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    infer_type_from_insn(else_insn, &sv, ctx);
                    Some(sv)
                } else {
                    None
                };
                ctx.stmt_outputs.insert(else_idx, else_out_sv);
            }

            HirNode::GuardedTernary {
                cond_code: _,
                then_insn,
                else_insn,
                output: _,
            } => {
                // Mirror the `Ternary` collection but without the
                // SsaVarnode cond bookkeeping — the predicate is an ARM
                // cond_code (architectural NZCV state), not a per-function
                // value, so it has no SsaVarnode to register. Both arms
                // are Copy ops to a shared output (enforced by the
                // structurer's fold pass); we still allocate stmt slots
                // so name resolution / type inference stay consistent.
                for insn in [then_insn, else_insn] {
                    let idx = ctx.next_stmt;
                    ctx.next_stmt += 1;
                    ctx.stmt_depths.insert(idx, ctx.collect_depth);
                    ctx.stmt_scope_paths
                        .insert(idx, ctx.current_scope_path.clone());
                    let mut inputs = Vec::new();
                    for input in &insn.inputs {
                        if input.space == SpaceId::Const {
                            continue;
                        }
                        let ver = ctx.current_version(input);
                        let sv = SsaVarnode {
                            base: *input,
                            version: ver,
                        };
                        ctx.name_of(&sv);
                        inputs.push(sv);
                    }
                    ctx.stmt_inputs.insert(idx, inputs);
                    let out_sv = if let Some(output) = insn.output {
                        let ver = ctx.next_version(&output);
                        let sv = SsaVarnode {
                            base: output,
                            version: ver,
                        };
                        ctx.name_of(&sv);
                        infer_type_from_insn(insn, &sv, ctx);
                        Some(sv)
                    } else {
                        None
                    };
                    ctx.stmt_outputs.insert(idx, out_sv);
                }
            }

            HirNode::CselTernary {
                cmp_lhs,
                cmp_rhs,
                true_val,
                false_val,
                output,
                ..
            } => {
                // Reserve one stmt slot for the CSEL ternary itself.
                let idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(idx, ctx.collect_depth);
                ctx.stmt_scope_paths
                    .insert(idx, ctx.current_scope_path.clone());

                let mut input_svs = Vec::new();
                for input in [cmp_lhs, cmp_rhs, true_val, false_val] {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    input_svs.push(sv);
                }
                ctx.stmt_inputs.insert(idx, input_svs);

                let ver = ctx.next_version(output);
                let out_sv = SsaVarnode {
                    base: *output,
                    version: ver,
                };
                ctx.name_of(&out_sv);
                ctx.stmt_outputs.insert(idx, Some(out_sv));
            }

            HirNode::IfCmp {
                cmp_lhs,
                cmp_rhs,
                then_body,
                else_body,
                ..
            } => {
                // Anchor the cmp operand reads at the next-allocated stmt
                // (mirrors the `If` branch above) so the hoist pass treats
                // them as uses at the enclosing scope.
                for input in [cmp_lhs, cmp_rhs] {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    ctx.cond_uses.push(sv);
                    ctx.cond_use_stmts.push((sv, ctx.next_stmt));
                }
                ctx.collect_depth += 1;
                let then_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(then_scope);
                collect_varnodes(then_body, ctx);
                ctx.current_scope_path.pop();
                if let Some(eb) = else_body {
                    let else_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(else_scope);
                    collect_varnodes(eb, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }

            HirNode::Return(None)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}

            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                ctx.collect_depth += 1;
                let try_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(try_scope);
                collect_varnodes(try_body, ctx);
                ctx.current_scope_path.pop();
                for (_ty, body) in catch_arms {
                    let catch_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(catch_scope);
                    collect_varnodes(body, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                ctx.collect_depth += 1;
                let try_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(try_scope);
                collect_varnodes(try_body, ctx);
                ctx.current_scope_path.pop();
                let finally_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(finally_scope);
                collect_varnodes(finally_body, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
            }

            HirNode::Commented { inner, .. } => {
                // Comments are pass-through for varnode collection — recurse
                // into the wrapped node as if the wrapper weren't there.
                collect_varnodes(std::slice::from_ref(inner.as_ref()), ctx);
            }

            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                ctx.collect_depth += 1;
                let scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(scope);
                collect_varnodes(then_body, ctx);
                ctx.current_scope_path.pop();
                if !else_body.is_empty() {
                    let scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(scope);
                    collect_varnodes(else_body, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }
        }
    }
}

const fn is_never_foldable_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Store
            | IrOp::Load
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::Return
            | IrOp::New
            | IrOp::Callother
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Multiequal
    )
}

fn compute_foldable(ctx: &mut PrintCtx) {
    let mut use_counts: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
    let mut sv_consumer_stmt: BTreeMap<SsaVarnode, u32> = BTreeMap::new();

    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        for sv in inputs {
            *use_counts.entry(*sv).or_insert(0) += 1;
            sv_consumer_stmt.insert(*sv, stmt_idx);
        }
    }

    for sv in &ctx.cond_uses {
        *use_counts.entry(*sv).or_insert(0) += 1;
    }

    for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
        let output_sv = match output_sv_opt {
            Some(sv) => *sv,
            None => continue,
        };

        let insn = match ctx.stmt_insns.get(&stmt_idx) {
            Some(insn) => insn,
            None => continue,
        };

        if is_never_foldable_op(insn.op) {
            continue;
        }

        if use_counts.get(&output_sv).copied().unwrap_or(0) != 1 {
            continue;
        }

        let def_depth = ctx.stmt_depths.get(&stmt_idx).copied().unwrap_or(0);
        let consumer_depth = sv_consumer_stmt
            .get(&output_sv)
            .and_then(|&cid| ctx.stmt_depths.get(&cid).copied())
            .unwrap_or(u32::MAX);

        if def_depth != consumer_depth {
            continue;
        }

        ctx.foldable_stmts.insert(stmt_idx);
        ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
    }

    ctx.sv_use_counts = use_counts;
}

/// Recognise `vN = 0` whose result is never read.
///
/// Conservatively limited to plain `COPY` of a constant 0 — extending to
/// other ops (e.g. `IntAnd x, 0`) is unsafe because the source operand may
/// have side effects via memory aliasing.
fn is_dead_zero_init(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.op != IrOp::Copy || insn.inputs.len() != 1 {
        return false;
    }
    let rhs = &insn.inputs[0];
    if rhs.space != SpaceId::Const {
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx) else {
        return false;
    };
    ctx.sv_use_counts.get(out_sv).copied().unwrap_or(0) == 0
}

fn is_dead_suppressible_store(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.output.is_none()
        || instr_has_side_effects(insn)
        || ctx.foldable_stmts.contains(&stmt_idx)
    {
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    if ctx.byref_bases.contains(&out_sv.base) || ctx.cond_uses.contains(&out_sv) {
        return false;
    }
    ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) == 0
        && is_suppressible_storage(&out_sv.base, ctx)
}

fn should_suppress_var_decl(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    if !is_suppressible_storage(&sv.base, ctx) {
        return false;
    }
    if ctx.byref_bases.contains(&sv.base) || ctx.cond_uses.contains(sv) {
        return false;
    }
    ctx.sv_use_counts.get(sv).copied().unwrap_or(0) == 0
}

fn is_suppressible_storage(vn: &Varnode, ctx: &PrintCtx) -> bool {
    is_temp_varnode(vn)
        || is_flag_register(vn)
        || is_synthetic_suppressed_name(vn, ctx)
        || matches!(
            ctx.base_names.get(vn).map(String::as_str),
            Some("rip") | Some("eip")
        )
}

fn is_temp_varnode(vn: &Varnode) -> bool {
    vn.space == SpaceId::Unique
}

fn is_synthetic_suppressed_name(vn: &Varnode, ctx: &PrintCtx) -> bool {
    let Some(name) = ctx.base_names.get(vn).map(String::as_str) else {
        return false;
    };
    matches!(
        name,
        "v_cf"
            | "v_zf"
            | "v_sf"
            | "v_of"
            | "v_pf"
            | "v_af"
            | "v_CF"
            | "v_ZF"
            | "v_SF"
            | "v_OF"
            | "v_PF"
            | "v_AF"
    ) || name.starts_with("v_tmp_")
        || name.starts_with("v_unique_")
        || name.starts_with("v_UNNAMED_")
}

fn is_flag_register(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register
        && matches!(
            x86_64_register_name(vn.offset, vn.size),
            "CF" | "ZF" | "SF" | "OF" | "PF" | "AF"
        )
}

fn instr_has_side_effects(insn: &IrInsn) -> bool {
    matches!(
        insn.op,
        IrOp::Store
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Return
            | IrOp::Callother
            | IrOp::New
            | IrOp::Segmentop
            | IrOp::Unimplemented
    )
}

/// Mark stack variables whose address is passed to a CALL as BYREF.
///
/// Detection runs over the linearized statement stream. We track the most
/// recent definition of every Varnode that resolves to `RSP/RBP + const`
/// (the address-of-stack-slot pattern produced by lifters) and, when a
/// `CALL`/`CALLIND` consumes such a varnode, the corresponding stack slot
/// is recorded in `byref_bases`. Direct `SpaceId::Stack` arguments are
/// also flagged.
fn compute_byref_bases(ctx: &mut PrintCtx) {
    const RSP_REG_OFF: u64 = 32;
    const RBP_REG_OFF: u64 = 40;

    fn stack_offset_of_add(a: &Varnode, b: &Varnode) -> Option<i64> {
        if b.space != SpaceId::Const {
            return None;
        }
        if a.space == SpaceId::Register && (a.offset == RSP_REG_OFF || a.offset == RBP_REG_OFF) {
            return Some(b.offset as i64);
        }
        None
    }

    let mut stack_addr_def: BTreeMap<Varnode, i64> = BTreeMap::new();

    let stmt_indices: Vec<u32> = ctx.stmt_insns.keys().copied().collect();
    for idx in stmt_indices {
        let insn = match ctx.stmt_insns.get(&idx) {
            Some(i) => i.clone(),
            None => continue,
        };

        if matches!(insn.op, IrOp::IntAdd) && insn.inputs.len() == 2 {
            if let Some(out) = insn.output {
                let a = &insn.inputs[0];
                let b = &insn.inputs[1];
                let off = stack_offset_of_add(a, b).or_else(|| stack_offset_of_add(b, a));
                if let Some(off) = off {
                    stack_addr_def.insert(out, off);
                    continue;
                }
                if let Some(&base_off) = stack_addr_def.get(a) {
                    if b.space == SpaceId::Const {
                        stack_addr_def.insert(out, base_off.wrapping_add(b.offset as i64));
                        continue;
                    }
                }
                if let Some(&base_off) = stack_addr_def.get(b) {
                    if a.space == SpaceId::Const {
                        stack_addr_def.insert(out, base_off.wrapping_add(a.offset as i64));
                        continue;
                    }
                }
            }
        }

        if matches!(insn.op, IrOp::Call | IrOp::Callind) {
            let skip = if matches!(insn.op, IrOp::Call) { 1 } else { 0 };
            for input in insn.inputs.iter().skip(skip) {
                if input.space == SpaceId::Stack {
                    ctx.byref_bases.insert(*input);
                } else if let Some(&off) = stack_addr_def.get(input) {
                    let stk = Varnode::stack(off as u64, input.size);
                    ctx.byref_bases.insert(stk);
                }
            }
        }
    }
}

/// Decide which local declarations to hoist out of the function-top decl
/// block and into the body at the point of first use, matching IDA's
/// `<type> <name> = <expr>;` layout.
///
/// A base varnode qualifies for hoisting when:
///   1. The earliest statement that touches it (input read, output write, or
///      condition use) is itself an assignment that *defines* the variable.
///   2. That defining statement's lexical scope path equals the LCA of the
///      scope paths of every other use of the variable — i.e. the assignment
///      lexically dominates all subsequent reads (same scope or nested).
///   3. The defining statement is not foldable, dead-zero, dead-suppressed,
///      a CSEL/Ternary expansion, or otherwise rewritten by the emitter into
///      a non-`<lhs> = <rhs>;` shape.
///   4. The base is not BYREF (address taken): IDA still emits BYREF locals
///      at the top of the function for clarity, and we follow suit.
///   5. The defining statement is not a compound-op rewrite of the same
///      variable (`v = v + ...` → `v += ...`), which implies the value was
///      already live before the rewrite.
///
/// Names that don't qualify fall through to the original function-top
/// declaration block, preserving prior layout for cases this pass cannot
/// reason about safely.
fn compute_hoist_plan(ctx: &mut PrintCtx) {
    use std::collections::BTreeMap;

    // For each base varnode, gather every statement index that touches it.
    let mut use_stmts: BTreeMap<Varnode, Vec<u32>> = BTreeMap::new();
    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        for sv in inputs {
            use_stmts.entry(sv.base).or_default().push(stmt_idx);
        }
    }
    for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
        if let Some(sv) = output_sv_opt {
            use_stmts.entry(sv.base).or_default().push(stmt_idx);
        }
    }
    for (sv, anchor_stmt) in &ctx.cond_use_stmts {
        // Anchor at the *previous* statement (the one that wrote the cond
        // value) when the recorded anchor is past the end of the stmt list.
        let s = (*anchor_stmt).min(ctx.next_stmt.saturating_sub(1));
        use_stmts.entry(sv.base).or_default().push(s);
    }

    let empty_path: Vec<u32> = Vec::new();

    for (base, mut stmts) in use_stmts {
        if stmts.is_empty() {
            continue;
        }
        stmts.sort_unstable();
        stmts.dedup();

        // Skip BYREF — these are address-taken and must live at fn top.
        if ctx.byref_bases.contains(&base) {
            continue;
        }
        // Skip vars whose name isn't even known yet (defensive).
        if !ctx.base_names.contains_key(&base) {
            continue;
        }

        // Compute LCA of all use paths.
        let lca = lca_scope_path(&stmts, &ctx.stmt_scope_paths, &empty_path);

        let first_stmt = stmts[0];
        let first_path = ctx
            .stmt_scope_paths
            .get(&first_stmt)
            .cloned()
            .unwrap_or_default();

        // The defining statement must live at exactly the LCA scope: if it
        // is deeper, sibling-scope uses would not be dominated and we'd
        // need to emit a bare decl above the construct enclosing the first
        // use — leave that case to the function-top fallback for now.
        if first_path != lca {
            continue;
        }

        // The first-touched statement must *write* this base (not just read
        // it).  Reads-before-writes happen for parameter/live-in values
        // which must stay declared at fn top (or via the signature).
        let Some(Some(out_sv)) = ctx.stmt_outputs.get(&first_stmt).copied() else {
            continue;
        };
        if out_sv.base != base {
            continue;
        }

        // Skip statements that the emitter would suppress or rewrite into
        // a non-assignment shape.
        if ctx.foldable_stmts.contains(&first_stmt) {
            continue;
        }
        let Some(insn) = ctx.stmt_insns.get(&first_stmt).cloned() else {
            continue;
        };
        if is_dead_zero_init(&insn, first_stmt, ctx) {
            continue;
        }
        if is_dead_suppressible_store(&insn, first_stmt, ctx) {
            continue;
        }
        if is_csel_callother(&insn) {
            // CSEL emits an `if (...) { lhs = ...; } else ...` — can't fold.
            continue;
        }

        // Compound (`v += 1`) and increment (`v++`) forms reuse the lhs as
        // both rvalue and lvalue; declaring inside such a stmt is illegal.
        // It also means the value was live before this stmt, so a function-
        // top declaration is the correct shape.
        let lhs_is_self_input = insn
            .inputs
            .iter()
            .any(|i| i.space != SpaceId::Const && Some(*i) == insn.output);
        if lhs_is_self_input {
            continue;
        }

        // Don't hoist values that the return-merge pass is poised to fold
        // into `return <expr>;`.  Those are writes to the return register
        // (offset 0 in `SpaceId::Register`) whose SSA varnode has at most
        // one read \u2014 the read is the trailing `Return(Some(sv))`.  Hoisting
        // here would insert a `<type> <name> = <expr>;` line and force the
        // merge pass to give up, regressing the IDA convention.
        if base.space == SpaceId::Register && base.offset == 0 {
            let reads = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
            if reads <= 1 {
                continue;
            }
        }

        // Sanity: every other use's path must extend the LCA prefix.
        let mut all_dominated = true;
        for &s in &stmts {
            let p = ctx
                .stmt_scope_paths
                .get(&s)
                .cloned()
                .unwrap_or_default();
            if !p.starts_with(&lca) {
                all_dominated = false;
                break;
            }
        }
        if !all_dominated {
            continue;
        }

        ctx.hoist_decl_plan.insert(
            base,
            HoistPlan {
                stmt_idx: first_stmt,
                fold_into_assignment: true,
            },
        );
    }
}

/// Longest common prefix of the scope paths for every statement in `stmts`.
fn lca_scope_path(
    stmts: &[u32],
    paths: &BTreeMap<u32, Vec<u32>>,
    fallback: &Vec<u32>,
) -> Vec<u32> {
    let mut iter = stmts.iter();
    let first = match iter.next() {
        Some(s) => paths.get(s).unwrap_or(fallback).clone(),
        None => return fallback.clone(),
    };
    let mut lca = first;
    for s in iter {
        let p = paths.get(s).unwrap_or(fallback);
        let common = lca
            .iter()
            .zip(p.iter())
            .take_while(|(a, b)| a == b)
            .count();
        lca.truncate(common);
        if lca.is_empty() {
            break;
        }
    }
    lca
}

/// Map DWARF local variable names onto stack-backed Varnode bases.
///
/// For each `LocalVariable` with a known `frame_offset`, derive the
/// equivalent positive RSP offset using the recovered frame size and
/// register the DWARF name in `ctx.name_overrides` for the matching
/// `SpaceId::Stack` Varnode. Stack variables that DWARF does not name
/// keep their generated `vN`/`local_X` identifier.
fn compute_dwarf_locals(
    dwarf_func: Option<&unlace_loader::FunctionDebugInfo>,
    header: Option<&FunctionHeaderInfo>,
    ctx: &mut PrintCtx,
) {
    let dwarf_func = match dwarf_func {
        Some(df) => df,
        None => return,
    };
    let frame_size = match header.map(|h| h.stack_frame).filter(|fs| *fs > 0) {
        Some(fs) => fs as i64,
        None => return,
    };

    for local in &dwarf_func.locals {
        let frame_off = match local.frame_offset {
            Some(o) => o,
            None => continue,
        };
        let rsp_off = frame_size + frame_off;
        if rsp_off < 0 {
            continue;
        }
        for size in [1u8, 2, 4, 8] {
            let stk = Varnode::stack(rsp_off as u64, size);
            ctx.name_overrides
                .entry(stk)
                .or_insert_with(|| local.name.clone());
            if let Some(type_name) = local.type_name.as_deref() {
                ctx.dwarf_local_types
                    .entry(stk)
                    .or_insert_with(|| dwarf_type_to_c(type_name));
            }
        }
    }
}

fn dwarf_function_for_func<'a>(
    dwarf: &'a unlace_loader::DwarfInfo,
    func: &HirFunction,
    header: Option<&FunctionHeaderInfo>,
) -> Option<&'a unlace_loader::FunctionDebugInfo> {
    dwarf
        .functions
        .values()
        .find(|debug| debug.name == func.name)
        .or_else(|| {
            header.and_then(|h| dwarf.functions.values().find(|debug| debug.name == h.name))
        })
        .or_else(|| header.and_then(|h| dwarf.functions.get(&h.address)))
        .or_else(|| dwarf.functions.get(&func.addr))
}

/// Detect simple counter loops and rename their counters to `i`/`j`/`k`.
///
/// A `For { init, update, .. }` is recognized as a counter loop when:
/// 1. `init.op == Copy` with a single constant input,
/// 2. `update.op == IntAdd | IntSub` of the counter and a constant,
/// 3. `init.output == update.output` (both refer to the same Varnode).
///
/// The counter Varnode is mapped to a depth-indexed name in
/// `ctx.name_overrides` (`i` at the outermost loop, `j` one level in,
/// `k` two levels in, then `l`/`m`/`n`).
fn compute_loop_counter_names(nodes: &[HirNode], depth: usize, ctx: &mut PrintCtx) {
    fn loop_counter_name(depth: usize) -> &'static str {
        match depth {
            0 => "i",
            1 => "j",
            2 => "k",
            3 => "l",
            4 => "m",
            _ => "n",
        }
    }

    fn detect(init: &IrInsn, update: &IrInsn) -> Option<Varnode> {
        let init_out = init.output?;
        let update_out = update.output?;
        if init_out != update_out {
            return None;
        }
        if init.op != IrOp::Copy || init.inputs.len() != 1 || init.inputs[0].space != SpaceId::Const
        {
            return None;
        }
        if !matches!(update.op, IrOp::IntAdd | IrOp::IntSub) || update.inputs.len() != 2 {
            return None;
        }
        let counter_first = update.inputs[0] == init_out;
        let counter_second = update.inputs[1] == init_out;
        if !counter_first && !counter_second {
            return None;
        }
        let other_idx = if counter_first { 1 } else { 0 };
        if update.inputs[other_idx].space != SpaceId::Const {
            return None;
        }
        Some(init_out)
    }

    for node in nodes {
        match node {
            HirNode::For {
                init, update, body, ..
            } => {
                if let Some(counter) = init.as_ref().and_then(|i| detect(i, update)) {
                    ctx.name_overrides
                        .entry(counter)
                        .or_insert_with(|| loop_counter_name(depth).to_string());
                }
                compute_loop_counter_names(body, depth + 1, ctx);
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                compute_loop_counter_names(body, depth + 1, ctx);
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                compute_loop_counter_names(then_body, depth, ctx);
                if let Some(eb) = else_body {
                    compute_loop_counter_names(eb, depth, ctx);
                }
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    compute_loop_counter_names(body, depth, ctx);
                }
                if let Some(d) = default {
                    compute_loop_counter_names(d, depth, ctx);
                }
            }
            HirNode::Block(children) => compute_loop_counter_names(children, depth, ctx),
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                compute_loop_counter_names(try_body, depth, ctx);
                for (_ty, body) in catch_arms {
                    compute_loop_counter_names(body, depth, ctx);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                compute_loop_counter_names(try_body, depth, ctx);
                compute_loop_counter_names(finally_body, depth, ctx);
            }
            _ => {}
        }
    }
}

// ---------------------------------------------------------------------------
// Heuristic variable naming (P7-17)
// ---------------------------------------------------------------------------

/// Roles a variable can play in the source HIR, used to derive a semantic name
/// when no DWARF / loop-counter override is available.
///
/// The order matters: when a variable matches multiple roles, the highest-priority
/// role wins (variants are matched in declaration order in the apply step).
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Debug)]
enum VarRole {
    /// Returned via `HirNode::Return(Some(_))` somewhere in the body.
    Result,
    /// Output of a comparison op (`type_family == Some('b')`) consumed as a
    /// branch / loop / switch condition.
    Cond,
    /// Used as the target operand of an indirect call (`CALLIND`).
    Pfn,
    /// Passed as the first non-target argument to a string-handling libc call
    /// (`strlen`, `strcmp`, `strcpy`, `printf`, `puts`, `fprintf`, ...).
    Str,
    /// Pointer-typed (per [`PrimitiveType::Ptr`] in `var_types`) without any
    /// other matching role. Numbered `ptr`, `p1`, `p2`, ...
    Ptr,
}

/// Function names treated as string-handling callees for the `Str` heuristic.
const STRING_FUNCS: &[&str] = &[
    "strlen", "strcmp", "strncmp", "strcpy", "strncpy", "strcat", "strncat", "strchr", "strrchr",
    "strstr", "strdup", "strtok", "puts", "printf", "fprintf", "sprintf", "snprintf", "perror",
    "fputs", "fopen", "system",
];

/// Walk the HIR and assign role-based names to base [`Varnode`]s that would
/// otherwise be displayed as `vN`.
///
/// Runs after [`collect_varnodes`] so that `stmt_inputs`, `stmt_outputs`,
/// `stmt_insns`, and `var_types` are populated.
///
/// Priority (highest first): `Result` → `Cond` → `Pfn` → `Str` → `Ptr`.
///
/// Existing entries in `name_overrides` (from DWARF or loop-counter detection)
/// are never replaced.
fn compute_heuristic_names(nodes: &[HirNode], ctx: &mut PrintCtx) {
    let mut roles: BTreeMap<Varnode, VarRole> = BTreeMap::new();

    walk_collect_roles(nodes, ctx, &mut roles);
    collect_statement_level_roles(ctx, &mut roles);

    let mut by_role: BTreeMap<VarRole, Vec<Varnode>> = BTreeMap::new();
    for (base, role) in &roles {
        by_role.entry(*role).or_default().push(*base);
    }

    let mut ptr_idx: u32 = 0;
    for role in [
        VarRole::Result,
        VarRole::Cond,
        VarRole::Pfn,
        VarRole::Str,
        VarRole::Ptr,
    ] {
        let bases = match by_role.get(&role) {
            Some(b) => b.clone(),
            None => continue,
        };
        for base in bases {
            if ctx.name_overrides.contains_key(&base) {
                continue;
            }
            let name = match role {
                VarRole::Result => "result".to_string(),
                VarRole::Cond => "cond".to_string(),
                VarRole::Pfn => "pfn".to_string(),
                VarRole::Str => "str".to_string(),
                VarRole::Ptr => {
                    ptr_idx += 1;
                    if ptr_idx == 1 {
                        "ptr".to_string()
                    } else {
                        format!("p{}", ptr_idx - 1)
                    }
                }
            };
            apply_override(ctx, &base, name);
        }
    }
}

/// Set `name_overrides[base] = name` and rewrite any cached `vN` entries in
/// `var_names` / `base_names` so subsequent [`PrintCtx::name_of`] calls see
/// the new name.
///
/// Cached entries that don't start with `v` followed by digits are left alone:
/// they were placed by an earlier higher-priority pass (DWARF, loop counter,
/// or another heuristic role) and must be preserved.
fn apply_override(ctx: &mut PrintCtx, base: &Varnode, name: String) {
    if !is_synthetic_vn_name(ctx.base_names.get(base).map(String::as_str)) {
        return;
    }
    ctx.name_overrides.insert(*base, name.clone());
    ctx.base_names.insert(*base, name.clone());
    let to_update: Vec<SsaVarnode> = ctx
        .var_names
        .iter()
        .filter_map(|(sv, n)| {
            if sv.base == *base && is_synthetic_vn_name(Some(n.as_str())) {
                Some(*sv)
            } else {
                None
            }
        })
        .collect();
    for sv in to_update {
        ctx.var_names.insert(sv, name.clone());
    }
}

fn is_synthetic_vn_name(name: Option<&str>) -> bool {
    let n = match name {
        Some(s) => s,
        None => return true,
    };
    let rest = match n.strip_prefix('v') {
        Some(r) => r,
        None => return false,
    };
    !rest.is_empty() && rest.bytes().all(|b| b.is_ascii_digit())
}

fn record_role(roles: &mut BTreeMap<Varnode, VarRole>, base: Varnode, role: VarRole) {
    use std::collections::btree_map::Entry;
    match roles.entry(base) {
        Entry::Vacant(v) => {
            v.insert(role);
        }
        Entry::Occupied(mut o) => {
            if role < *o.get() {
                o.insert(role);
            }
        }
    }
}

/// HIR walker — collects roles that need the structured tree (Return, If/While
/// conditions, switch, etc.).
fn walk_collect_roles(nodes: &[HirNode], ctx: &PrintCtx, roles: &mut BTreeMap<Varnode, VarRole>) {
    for node in nodes {
        match node {
            HirNode::Block(children) => walk_collect_roles(children, ctx, roles),
            HirNode::Return(Some(sv)) => {
                record_role(roles, sv.base, VarRole::Result);
            }
            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(then_body, ctx, roles);
                if let Some(eb) = else_body {
                    walk_collect_roles(eb, ctx, roles);
                }
            }
            HirNode::While { cond, body } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(body, ctx, roles);
            }
            HirNode::DoWhile { body, cond } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(body, ctx, roles);
            }
            HirNode::For { cond, body, .. } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
                walk_collect_roles(body, ctx, roles);
            }
            HirNode::Switch { cases, default, .. } => {
                for (_case, body, _) in cases {
                    walk_collect_roles(body, ctx, roles);
                }
                if let Some(d) = default {
                    walk_collect_roles(d, ctx, roles);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                walk_collect_roles(try_body, ctx, roles);
                for (_ty, body) in catch_arms {
                    walk_collect_roles(body, ctx, roles);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                walk_collect_roles(try_body, ctx, roles);
                walk_collect_roles(finally_body, ctx, roles);
            }
            HirNode::Ternary { cond, .. } => {
                if cond_is_comparison(cond, ctx) {
                    record_role(roles, cond.base, VarRole::Cond);
                }
            }
            _ => {}
        }
    }
}

/// `true` when the SSA varnode is the output of a boolean-producing op.
///
/// We require an actual comparison op so we don't paint a generic register
/// as `cond` just because it happens to feed a CBRANCH (it might already be
/// `_Bool`-typed via Phase 4 inference, but the source semantics could still
/// be e.g. a load of a flag byte).
fn cond_is_comparison(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    let &def_stmt = match ctx.sv_defining_stmt.get(sv) {
        Some(s) => s,
        None => {
            return ctx.var_types.get(sv).copied() == Some(PrimitiveType::Bool);
        }
    };
    match ctx.stmt_insns.get(&def_stmt) {
        Some(insn) => insn.op.type_family() == Some('b'),
        None => false,
    }
}

/// Statement-level walker — collects roles requiring access to IR ops:
/// CALLIND targets, comparison outputs, string-call arguments, pointer types.
fn collect_statement_level_roles(ctx: &PrintCtx, roles: &mut BTreeMap<Varnode, VarRole>) {
    let stmt_indices: Vec<u32> = ctx.stmt_insns.keys().copied().collect();
    for idx in stmt_indices {
        let insn = match ctx.stmt_insns.get(&idx) {
            Some(i) => i,
            None => continue,
        };

        if insn.op == IrOp::Callind && !insn.inputs.is_empty() {
            let target = &insn.inputs[0];
            if target.space != SpaceId::Const {
                record_role(roles, *target, VarRole::Pfn);
            }
        }

        if insn.op == IrOp::Call && !insn.inputs.is_empty() {
            let target = &insn.inputs[0];
            if target.space == SpaceId::Const {
                let callee = ctx.symbols.get(&target.offset).map(String::as_str);
                if matches!(callee, Some(name) if STRING_FUNCS.contains(&name)) {
                    for arg in insn.inputs.iter().skip(1) {
                        if arg.space != SpaceId::Const {
                            record_role(roles, *arg, VarRole::Str);
                            break;
                        }
                    }
                }
            }
        }

        if insn.op.type_family() == Some('b') {
            if let Some(out) = insn.output {
                record_role(roles, out, VarRole::Cond);
            }
        }
    }

    let mut ptr_bases: BTreeSet<Varnode> = BTreeSet::new();
    for (sv, ty) in &ctx.var_types {
        if *ty == PrimitiveType::Ptr {
            ptr_bases.insert(sv.base);
        }
    }
    for base in ptr_bases {
        record_role(roles, base, VarRole::Ptr);
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
        Some('i') | Some(_) | None => match insn.op {
            IrOp::Ptradd | IrOp::Ptrsub => PrimitiveType::Ptr,
            IrOp::Load => PrimitiveType::UnsignedInt(output_sv.base.size),
            IrOp::IntDiv
            | IrOp::IntRem
            | IrOp::IntZext
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntCarry => PrimitiveType::UnsignedInt(output_sv.base.size),
            _ => PrimitiveType::Int(output_sv.base.size),
        },
    };
    ctx.var_types.entry(*output_sv).or_insert(ty);
}

// ---------------------------------------------------------------------------
// Type printing
// ---------------------------------------------------------------------------

/// Render an [`unlace_ir::types::Type`] as a C type fragment.
///
/// Used by [`HirFunction::byref_boxes`] rendering to surface the
/// captured payload type in `__block T name;` declarations. Composite
/// shapes (struct / array / function-pointer / bitfield) fall back to
/// their `Display` implementation; primitive shapes route through
/// [`c_type`] so the printer's existing primitive-name conventions
/// are preserved.
fn render_type_as_c(ty: &unlace_ir::types::Type) -> String {
    use unlace_ir::types::Type;
    match ty {
        Type::Primitive(p) => c_type(p).to_string(),
        Type::Ptr(inner) => format!("{} *", render_type_as_c(inner)),
        other => other.to_string(),
    }
}

/// `true` when `ty` is the sentinel used to encode a catch-all clause
/// inside [`HirNode::TryCatch`]'s `catch_arms`.
///
/// The HIR represents `catch (...)` (C++) and the historical
/// `__except { ... }` (MSVC SEH catch-all) by pairing the handler body
/// with `Type::Primitive(PrimitiveType::Unknown)`. Concrete exception
/// types render as `catch (T e) { ... }`.
fn is_catch_all_type(ty: &unlace_ir::types::Type) -> bool {
    matches!(
        ty,
        unlace_ir::types::Type::Primitive(unlace_ir::ssa::PrimitiveType::Unknown)
    )
}

fn c_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "int",
        PrimitiveType::Bool => "_Bool",
        PrimitiveType::Int(w) => match w {
            1 => "signed char",
            2 => "short",
            4 => "int",
            8 => "long long",
            16 => "__m128i",
            _ => "int",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "unsigned char",
            2 => "unsigned short",
            4 => "unsigned int",
            8 => "unsigned long long",
            16 => "__m128i",
            _ => "unsigned int",
        },
        PrimitiveType::Float => "float",
        PrimitiveType::Double => "double",
        PrimitiveType::Ptr => "void *",
    }
}

fn c_type_for_var(ctx: &PrintCtx, var: &Varnode, fallback: &PrimitiveType) -> String {
    ctx.dwarf_local_types
        .get(var)
        .cloned()
        .unwrap_or_else(|| c_type(fallback).to_string())
}

#[allow(dead_code)]
fn c_return_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "void",
        other => c_type(other),
    }
}

/// IDA-style type names for function signature parameters.
fn c_sig_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "__int64",
        PrimitiveType::Bool => "_BOOL",
        PrimitiveType::Int(w) => match w {
            1 => "__int8",
            2 => "__int16",
            4 => "__int32",
            8 => "__int64",
            _ => "__int64",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "unsigned __int8",
            2 => "unsigned __int16",
            4 => "unsigned __int32",
            8 => "unsigned __int64",
            _ => "unsigned __int64",
        },
        PrimitiveType::Float => "float",
        PrimitiveType::Double => "double",
        PrimitiveType::Ptr => "void *",
    }
}

fn c_sig_return_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "void",
        other => c_sig_type(other),
    }
}

fn dwarf_type_to_c(dwarf_type: &str) -> String {
    let mut normalized = dwarf_type
        .trim()
        .replace("const ", "")
        .replace("volatile ", "")
        .replace("restrict ", "")
        .replace("struct ", "")
        .replace("typedef ", "");
    let ptr_depth = normalized.matches('*').count();
    normalized = normalized.replace('*', " ");
    let normalized = normalized.split_whitespace().collect::<Vec<_>>().join(" ");
    let base = match normalized.as_str() {
        "" => "long long",
        "void" => "void",
        "_Bool" | "bool" => "_Bool",
        "signed char" => "char",
        "short int" | "signed short" | "signed short int" => "short",
        "unsigned short int" => "unsigned short",
        "signed int" => "int",
        "long int" | "signed long" | "signed long int" => "long",
        "unsigned long int" | "long unsigned int" => "unsigned long",
        "long long int" | "signed long long" | "signed long long int" => "long long",
        "unsigned long long int" | "long long unsigned int" => "unsigned long long",
        other => other,
    };
    if ptr_depth == 0 {
        base.to_string()
    } else {
        format!("{} {}", base, "*".repeat(ptr_depth))
    }
}

// ---------------------------------------------------------------------------
// Node emission
// ---------------------------------------------------------------------------

fn emit_nodes(nodes: &[HirNode], depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let mut i = 0;
    while i < nodes.len() {
        if let Some(merged) = try_merge_assign_return(&nodes[i..], ctx) {
            ctx.emit_stmt += 1;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", merged);
            i += 2;
            continue;
        }
        if let Some(first) = inline_node_text(&nodes[i], ctx) {
            let mut parts = Vec::new();
            let first_is_terminal = matches!(nodes[i], HirNode::Return(_) | HirNode::Goto(_));
            let mut group_has_terminal = first_is_terminal;
            if !first.is_empty() {
                parts.push(first);
            }
            i += 1;
            while !first_is_terminal && i < nodes.len() && parts.len() < 3 {
                let Some(next) = inline_node_text(&nodes[i], ctx) else {
                    break;
                };
                let is_terminal = matches!(nodes[i], HirNode::Return(_) | HirNode::Goto(_));
                if is_terminal {
                    group_has_terminal = true;
                }
                if !next.is_empty() {
                    parts.push(next);
                }
                i += 1;
                if is_terminal {
                    break;
                }
            }
            if !parts.is_empty() {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "{}", parts.join(" "));
            }
            if group_has_terminal {
                let next_is_label = nodes
                    .get(i)
                    .map_or(false, |n| matches!(n, HirNode::Label(_)));
                if !next_is_label {
                    break;
                }
            }
            continue;
        }
        let is_terminal = matches!(nodes[i], HirNode::Return(_) | HirNode::Goto(_));
        emit_node(&nodes[i], depth, ctx, out);
        if is_terminal {
            // Don't break if the next node is a Label — labels must still be emitted
            let next_is_label = nodes
                .get(i + 1)
                .map_or(false, |n| matches!(n, HirNode::Label(_)));
            if !next_is_label {
                break;
            }
        }
        i += 1;
    }
}

fn inline_node_text(node: &HirNode, ctx: &mut PrintCtx) -> Option<String> {
    match node {
        HirNode::Statement(insn) => inline_statement_text(insn, ctx),
        HirNode::Return(Some(sv)) => Some(format!("return {};", resolve_sv_expr(sv, ctx))),
        HirNode::Return(None) => Some("return;".to_string()),
        HirNode::Goto(label) => Some(format!("goto {};", label)),
        HirNode::TailCall { target } => Some(format_tail_call_text(*target, ctx)),
        HirNode::Continue => Some("continue;".to_string()),
        HirNode::Break => Some("break;".to_string()),
        HirNode::Ternary {
            cond,
            then_insn,
            else_insn,
            output: _,
        } => {
            let then_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let else_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let lhs = if let Some(Some(sv)) = ctx.stmt_outputs.get(&then_idx).cloned() {
                ctx.name_of(&sv)
            } else {
                "/* ternary */".to_string()
            };
            Some(format!(
                "{} = {} ? {} : {};",
                lhs,
                resolve_sv_expr(cond, ctx),
                emit_expr(then_insn, then_idx, ctx),
                emit_expr(else_insn, else_idx, ctx)
            ))
        }
        _ => None,
    }
}

/// Detect `Statement(insn) ; Return(Some(sv))` where the statement defines
/// `sv` via the return register (RAX, offset 0) and fold into `return <expr>;`.
///
/// Only fires when the return variable has no other readers (use_count == 0
/// from the perspective of non-return uses), so that the merged form doesn't
/// lose a named variable that other code references.
fn try_merge_assign_return(nodes: &[HirNode], ctx: &mut PrintCtx) -> Option<String> {
    if nodes.len() < 2 {
        return None;
    }
    let insn = match &nodes[0] {
        HirNode::Statement(insn) => insn,
        _ => return None,
    };

    match &nodes[1] {
        HirNode::Return(Some(ret_sv)) => {
            if ret_sv.base.space != SpaceId::Register || ret_sv.base.offset != 0 {
                return None;
            }
            let stmt_idx = ctx.emit_stmt;
            let output_sv = ctx.stmt_outputs.get(&stmt_idx).cloned().flatten()?;
            if output_sv != *ret_sv {
                return None;
            }
            if ctx.foldable_stmts.contains(&stmt_idx) {
                return None;
            }
            if is_dead_zero_init(insn, stmt_idx, ctx) {
                return None;
            }
            // Don't drop a hoisted variable's declaration into a `return`
            // shortcut — the variable is referenced elsewhere too.
            if let Some(plan) = ctx.hoist_decl_plan.get(&output_sv.base) {
                if plan.stmt_idx == stmt_idx {
                    return None;
                }
            }
            let total_uses = ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0);
            if total_uses > 1 {
                return None;
            }
            let expr = emit_expr(insn, stmt_idx, ctx);
            Some(expr)
        }
        HirNode::Return(None) => {
            let out_vn = insn.output?;
            if out_vn.space != SpaceId::Register || out_vn.offset != 0 {
                return None;
            }
            let stmt_idx = ctx.emit_stmt;
            let output_sv = ctx.stmt_outputs.get(&stmt_idx).cloned().flatten()?;
            if ctx.foldable_stmts.contains(&stmt_idx) {
                return None;
            }
            if is_dead_zero_init(insn, stmt_idx, ctx) {
                return None;
            }
            if let Some(plan) = ctx.hoist_decl_plan.get(&output_sv.base) {
                if plan.stmt_idx == stmt_idx {
                    return None;
                }
            }
            let total_uses = ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0);
            if total_uses > 0 {
                return None;
            }
            let expr = emit_expr(insn, stmt_idx, ctx);
            Some(expr)
        }
        _ => None,
    }
}

fn resolve_sv_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(sv) {
        if let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned() {
            return emit_expr(&def_insn, def_stmt, ctx);
        }
    }
    ctx.name_of(sv)
}

fn emit_node(node: &HirNode, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    match node {
        HirNode::Block(children) => emit_nodes(children, depth, ctx, out),

        HirNode::Statement(insn) => emit_statement(insn, depth, ctx, out),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "if ({}) {{", cond_expr);
            emit_nodes(then_body, depth + 1, ctx, out);
            if let Some(eb) = else_body {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}} else {{");
                emit_nodes(eb, depth + 1, ctx, out);
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::IfCmp {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            then_body,
            else_body,
            ..
        } => {
            // Mirror `CselTernary`'s operand rendering for the predicate.
            fn render_one(vn: &Varnode, ctx: &mut PrintCtx) -> String {
                if vn.space == SpaceId::Const {
                    format!("0x{:x}", vn.offset)
                } else {
                    let ver = ctx.current_version(vn);
                    ctx.name_of(&SsaVarnode {
                        base: *vn,
                        version: ver,
                    })
                }
            }
            let lhs_s = render_one(cmp_lhs, ctx);
            let rhs_s = render_one(cmp_rhs, ctx);
            let op_str = match cmp_op {
                IrOp::IntEqual => "==",
                IrOp::IntNotequal => "!=",
                IrOp::IntLess => "<",
                IrOp::IntLessequal => "<=",
                IrOp::IntSless => "<",
                IrOp::IntSlessequal => "<=",
                _ => "/*?*/",
            };
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "if ({} {} {}) {{", lhs_s, op_str, rhs_s);
            emit_nodes(then_body, depth + 1, ctx, out);
            if let Some(eb) = else_body {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}} else {{");
                emit_nodes(eb, depth + 1, ctx, out);
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::While { cond, body } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "while ({}) {{", cond_expr);
            emit_nodes(body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::DoWhile { body, cond } => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "do {{");
            emit_nodes(body, depth + 1, ctx, out);
            let cond_expr = resolve_sv_expr(cond, ctx);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}} while ({});", cond_expr);
        }

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => {
            let init_str = if let Some(init_insn) = init {
                let init_idx = ctx.emit_stmt;
                ctx.emit_stmt += 1;
                emit_for_clause(init_insn, init_idx, ctx)
            } else {
                String::new()
            };

            let mut body_buf = String::new();
            emit_nodes(body, depth + 1, ctx, &mut body_buf);

            let update_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let update_str = emit_for_clause(update, update_idx, ctx);

            let cond_expr = resolve_sv_expr(cond, ctx);

            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "for ({}; {}; {}) {{", init_str, cond_expr, update_str);
            out.push_str(&body_buf);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Switch {
            cond,
            cases,
            default,
            ..
        } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            let cond_is_char = matches!(
                ctx.var_types.get(cond).copied().unwrap_or(PrimitiveType::Unknown),
                PrimitiveType::Int(1) | PrimitiveType::UnsignedInt(1),
            );
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "switch ({}) {{", cond_expr);
            for (case, body, fall_through) in cases {
                indent(depth, ctx.config.tab_width, out);
                match case {
                    SwitchCase::Value(v) => {
                        if let Some(lit) = format_char_case(*v, cond_is_char) {
                            let _ = writeln!(out, "case {}:", lit);
                        } else if let Some(s) = ctx.string_hash_table.get(v) {
                            let _ = writeln!(
                                out,
                                "case 0x{:X}u:  /* \"{}\" */",
                                v,
                                s.escape_default()
                            );
                        } else {
                            let _ = writeln!(out, "case {}:", v);
                        }
                    }
                    SwitchCase::Range(lo, hi) => {
                        let _ = writeln!(out, "case {} ... {}:", lo, hi);
                    }
                }
                if *fall_through {
                    if !body.is_empty() {
                        emit_nodes(body, depth + 1, ctx, out);
                    }
                    indent(depth + 1, ctx.config.tab_width, out);
                    let _ = writeln!(out, "/* fall through */");
                } else {
                    emit_nodes(body, depth + 1, ctx, out);
                    indent(depth + 1, ctx.config.tab_width, out);
                    let _ = writeln!(out, "break;");
                }
            }
            if let Some(def) = default {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "default:");
                emit_nodes(def, depth + 1, ctx, out);
                indent(depth + 1, ctx.config.tab_width, out);
                let _ = writeln!(out, "break;");
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Return(Some(sv)) => {
            let name = resolve_sv_expr(sv, ctx);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", name);
        }

        HirNode::Return(None) => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return;");
        }

        HirNode::Goto(label) => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "goto {};", label);
        }

        HirNode::Label(label) => {
            if depth > 0 {
                indent(depth - 1, ctx.config.tab_width, out);
            }
            let _ = writeln!(out, "{}:;", label);
        }

        HirNode::Ternary {
            cond,
            then_insn,
            else_insn,
            output: _,
        } => {
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
            let cond_name = resolve_sv_expr(cond, ctx);

            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(
                out,
                "{} = {} ? {} : {};",
                lhs, cond_name, then_expr, else_expr
            );
        }

        HirNode::TailCall { target } => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "{}", format_tail_call_text(*target, ctx));
        }

        HirNode::Continue => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "continue;");
        }

        HirNode::Break => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "break;");
        }

        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            // t183: when *every* arm is the catch-all sentinel
            // (`PrimitiveType::Unknown`), render the historical MSVC
            // SEH shape `__try { ... } __except { ... }` to preserve
            // back-compat with the landing-pad-driven structurer.
            // Otherwise emit C++-style `try { ... } catch (T e) { ... }`
            // arms (one `catch (...)` for any catch-all arm).
            let all_catch_all = catch_arms.iter().all(|(ty, _)| is_catch_all_type(ty));
            indent(depth, ctx.config.tab_width, out);
            if all_catch_all {
                let _ = writeln!(out, "__try {{");
            } else {
                let _ = writeln!(out, "try {{");
            }
            emit_nodes(try_body, depth + 1, ctx, out);
            for (ty, body) in catch_arms {
                indent(depth, ctx.config.tab_width, out);
                if all_catch_all {
                    let _ = writeln!(out, "}} __except {{");
                } else if is_catch_all_type(ty) {
                    let _ = writeln!(out, "}} catch (...) {{");
                } else {
                    let captured_c = render_type_as_c(ty);
                    let _ = writeln!(out, "}} catch ({} e) {{", captured_c);
                }
                emit_nodes(body, depth + 1, ctx, out);
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::TryFinally {
            try_body,
            finally_body,
        } => {
            // t183: MSVC `__try { ... } __finally { ... }`. The finally
            // block runs on both normal and exceptional control-flow
            // paths, distinguishing it from `__except`.
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "__try {{");
            emit_nodes(try_body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}} __finally {{");
            emit_nodes(finally_body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Commented { pre, post, inner } => {
            let tab = ctx.config.tab_width;
            for line in pre {
                emit_comment_line(line, depth, tab, out);
            }
            emit_node(inner, depth, ctx, out);
            for line in post {
                emit_comment_line(line, depth, tab, out);
            }
        }

        HirNode::Asm { instructions } => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "__asm {{");
            for line in instructions {
                indent(depth + 1, ctx.config.tab_width, out);
                let _ = writeln!(out, "{}", line);
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::GuardedIf {
            cond_code,
            then_body,
            else_body,
        } => {
            let mnem = arm_cond_mnemonic(*cond_code);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "if (cond_{}) {{", mnem);
            emit_nodes(then_body, depth + 1, ctx, out);
            indent(depth, ctx.config.tab_width, out);
            if else_body.is_empty() {
                let _ = writeln!(out, "}}");
            } else {
                let _ = writeln!(out, "}} else {{");
                emit_nodes(else_body, depth + 1, ctx, out);
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}}");
            }
        }

        HirNode::ObjcBlock { invoke, captures } => {
            indent(depth, ctx.config.tab_width, out);
            if captures.is_empty() {
                let _ = writeln!(out, "^{{ /* invoke=0x{:x} */ }};", invoke);
            } else {
                // Cross-reference each capture's SSA varnode against
                // `ctx.byref_boxes` (lifted from `HirFunction::byref_boxes`,
                // t176). When the varnode is recognised as a `__block`
                // box, render the capture as `__block T name`; otherwise
                // fall back to the plain capture name. This is the
                // printer side of t184 — block detection (t119) feeds
                // captures with SSA varnodes, byref detection (t176)
                // populates `byref_boxes`, and the printer joins them.
                let rendered: Vec<String> = captures
                    .iter()
                    .map(|cap| {
                        if let Some(sv) = &cap.varnode {
                            if let Some(bx) = ctx.byref_boxes.get(&sv.base) {
                                let captured_c = render_type_as_c(&bx.captured_type);
                                return format!("__block {} {}", captured_c, cap.name);
                            }
                        }
                        cap.name.clone()
                    })
                    .collect();
                let _ = writeln!(
                    out,
                    "^{{ /* invoke=0x{:x} captures=[{}] */ }};",
                    invoke,
                    rendered.join(", ")
                );
            }
        }

        HirNode::GuardedTernary {
            cond_code,
            then_insn,
            else_insn,
            output: _,
        } => {
            // Mirror `Ternary` rendering but with the ARM cond_code mnemonic
            // as the predicate. Statement slots were allocated in the same
            // order during `collect_varnodes` so we draw the LHS name from
            // the then-arm slot.
            let then_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let else_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;

            let lhs = if let Some(Some(sv)) = ctx.stmt_outputs.get(&then_idx).cloned() {
                ctx.name_of(&sv)
            } else {
                "/* guarded-ternary */".to_string()
            };

            let then_expr = emit_expr(then_insn, then_idx, ctx);
            let else_expr = emit_expr(else_insn, else_idx, ctx);
            let mnem = arm_cond_mnemonic(*cond_code);

            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(
                out,
                "{} = cond_{} ? {} : {};",
                lhs, mnem, then_expr, else_expr
            );
        }

        HirNode::CselTernary {
            cmp_op,
            cmp_lhs,
            cmp_rhs,
            true_val,
            false_val,
            output,
            ..
        } => {
            // The collect pass allocated one stmt slot for this node and
            // bumped versions for `output`, so we can recover the LHS
            // name. Reads of cmp_lhs/cmp_rhs/true_val/false_val use the
            // *current* version (the latest write visible to this point).
            let idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let lhs = if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
                ctx.name_of(&sv)
            } else {
                let ver = ctx.current_version(output);
                ctx.name_of(&SsaVarnode {
                    base: *output,
                    version: ver,
                })
            };
            fn render_one(vn: &Varnode, ctx: &mut PrintCtx) -> String {
                if vn.space == SpaceId::Const {
                    format!("0x{:x}", vn.offset)
                } else {
                    let ver = ctx.current_version(vn);
                    ctx.name_of(&SsaVarnode {
                        base: *vn,
                        version: ver,
                    })
                }
            }
            let lhs_s = render_one(cmp_lhs, ctx);
            let rhs_s = render_one(cmp_rhs, ctx);
            let tv_s = render_one(true_val, ctx);
            let fv_s = render_one(false_val, ctx);
            let op_str = match cmp_op {
                IrOp::IntEqual => "==",
                IrOp::IntNotequal => "!=",
                IrOp::IntLess => "<",
                IrOp::IntLessequal => "<=",
                IrOp::IntSless => "<",
                IrOp::IntSlessequal => "<=",
                _ => "/*?*/",
            };
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(
                out,
                "{} = ({} {} {}) ? {} : {};",
                lhs, lhs_s, op_str, rhs_s, tv_s, fv_s,
            );
        }
    }
}

/// ARM A8.3 condition-code mnemonic for IT-block guards.
fn arm_cond_mnemonic(cc: u8) -> &'static str {
    match cc & 0xF {
        0x0 => "eq",
        0x1 => "ne",
        0x2 => "cs",
        0x3 => "cc",
        0x4 => "mi",
        0x5 => "pl",
        0x6 => "vs",
        0x7 => "vc",
        0x8 => "hi",
        0x9 => "ls",
        0xA => "ge",
        0xB => "lt",
        0xC => "gt",
        0xD => "le",
        0xE => "al",
        _ => "nv",
    }
}

/// Emit a single comment line at the given indent. Multi-line comment
/// strings (containing `\n`) are split into one `// `-prefixed line
/// per source line, preserving paragraph structure.
fn emit_comment_line(text: &str, depth: usize, tab_width: usize, out: &mut String) {
    for line in text.split('\n') {
        indent(depth, tab_width, out);
        if line.is_empty() {
            let _ = writeln!(out, "//");
        } else {
            let _ = writeln!(out, "// {}", line);
        }
    }
}

/// If this Call's target is an IAT slot whose forwarder chain has been
/// resolved (via [`PrinterAnnotations::forwarded_resolutions`]), return
/// the trailing `/* -> dll!sym */` comment text the printer should append
/// to the call statement. Returns `None` for non-CALL insns or when the
/// target VA is not a key in the resolution map.
fn forwarded_call_comment(insn: &IrInsn, ctx: &PrintCtx) -> Option<String> {
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return None;
    }
    if ctx.forwarded_resolutions.is_empty() {
        return None;
    }
    let target = insn.inputs.first()?;
    if target.space != SpaceId::Const {
        return None;
    }
    let resolved = ctx.forwarded_resolutions.get(&target.offset)?;
    Some(format!("/* -> {} */", resolved))
}

fn resolve_call_target(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if insn.inputs.is_empty() {
        return "/* unknown */".to_string();
    }
    let target_vn = &insn.inputs[0];
    if target_vn.space == SpaceId::Const {
        if let Some(name) = ctx.symbols.get(&target_vn.offset) {
            return demangle_callee_name(name);
        }
        return format!("sub_{:x}", target_vn.offset);
    }
    emit_operand_resolved(target_vn, 0, stmt_idx, ctx)
}

fn demangle_callee_name(raw: &str) -> String {
    match crate::demangle::demangle(raw) {
        Some(d) => crate::demangle::sanitize_for_c(&d.short_name),
        None => raw.to_string(),
    }
}

/// Resolve a tail-call target address to a C identifier. Falls back to the
/// IDA-style `sub_<addr>` name when the symbol table has no entry.
fn tail_call_target_name(target: u64, ctx: &PrintCtx) -> String {
    if let Some(name) = ctx.symbols.get(&target) {
        return demangle_callee_name(name);
    }
    format!("sub_{:x}", target)
}

/// Render a `TailCall { target }` as the IDA-style tail-call form.
///
/// * Non-void parent: `return callee();`
/// * Void parent:    `callee();` — the structurer already emits a trailing
///                   `Return(None)` after the tail call, so we don't add a
///                   second `return;` here (which would render as the ugly
///                   `callee(); return; return;` triple).
///
/// The callee is resolved against the symbol table (with demangling) so the
/// emitted form matches the rest of the pretty-printer's call sites instead
/// of the previous `((unsigned long long (*)(void))0x…)()` cast.
fn format_tail_call_text(target: u64, ctx: &PrintCtx) -> String {
    let name = tail_call_target_name(target, ctx);
    if ctx.parent_returns_void {
        format!("{}();", name)
    } else {
        format!("return {}();", name)
    }
}

// ---------------------------------------------------------------------------
// CALLIND complex cast emission (P7-18)
// ---------------------------------------------------------------------------

/// Render a CALLIND in IDA-style function-pointer cast form:
///
/// ```text
/// ((return_type (*)(param_types))target)(args)
/// ```
///
/// `return_type` is taken from the output varnode size (or `void` when no
/// output exists). `param_types` and `args` are derived from `inputs[1..]`.
/// When there are no extra inputs the cast still surfaces the inferred
/// return type, e.g. `((__int64 (*)())pfn)()`.
fn emit_callind_cast(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let target = resolve_call_target(insn, stmt_idx, ctx);
    let return_ty = match insn.output {
        Some(out) => type_for_size(out.size, true).to_string(),
        None => "void".to_string(),
    };

    let mut params: Vec<String> = Vec::new();
    let mut args: Vec<String> = Vec::new();
    for (i, vn) in insn.inputs.iter().enumerate().skip(1) {
        params.push(type_for_size(vn.size, true).to_string());
        args.push(emit_operand_resolved(vn, i, stmt_idx, ctx));
    }
    let params_str = params.join(", ");
    let args_str = args.join(", ");

    format!(
        "(({} (*)({})){})({})",
        return_ty, params_str, target, args_str,
    )
}

// ---------------------------------------------------------------------------
// Statement emission (single IR instruction)
// ---------------------------------------------------------------------------

fn emit_for_clause(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let lhs_sv = match ctx.stmt_outputs.get(&stmt_idx).cloned().flatten() {
        Some(sv) => sv,
        None => return format!("/* {} */", insn.op.name()),
    };
    let lhs = ctx.name_of(&lhs_sv);

    if let Some(short) = try_emit_increment_form(insn, &lhs) {
        return short;
    }

    if let Some(short) = try_emit_compound_assign(insn, stmt_idx, &lhs, ctx) {
        return short;
    }

    let rhs = emit_expr(insn, stmt_idx, ctx);
    format!("{} = {}", lhs, rhs)
}

fn try_emit_increment_form(insn: &IrInsn, lhs: &str) -> Option<String> {
    if insn.inputs.len() != 2 {
        return None;
    }
    let (counter_in, const_in) = match (insn.inputs[0].space, insn.inputs[1].space) {
        (SpaceId::Const, _) => (&insn.inputs[1], &insn.inputs[0]),
        (_, SpaceId::Const) => (&insn.inputs[0], &insn.inputs[1]),
        _ => return None,
    };
    if Some(*counter_in) != insn.output {
        return None;
    }
    if const_in.offset != 1 {
        return None;
    }
    match insn.op {
        IrOp::IntAdd => Some(format!("{}++", lhs)),
        IrOp::IntSub if insn.inputs[1].space == SpaceId::Const => Some(format!("{}--", lhs)),
        _ => None,
    }
}

fn try_emit_compound_assign(
    insn: &IrInsn,
    stmt_idx: u32,
    lhs: &str,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() != 2 {
        return None;
    }
    let counter_is_first = Some(insn.inputs[0]) == insn.output;
    let counter_is_second = Some(insn.inputs[1]) == insn.output;

    let counter_idx = if counter_is_first {
        0
    } else if counter_is_second {
        1
    } else {
        return None;
    };

    // If the counter input has a foldable definition, its expression expands
    // inline and compound form would be wrong (e.g. `((1) + 2) += 3`).
    let counter_vn = &insn.inputs[counter_idx];
    if counter_vn.space != SpaceId::Const {
        let counter_sv = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .and_then(|inputs| inputs.iter().find(|sv| sv.base == *counter_vn).copied());
        if let Some(csv) = counter_sv {
            if ctx.sv_defining_stmt.contains_key(&csv) {
                return None;
            }
        }
    }

    // For commutative ops, either operand position is fine.
    // For non-commutative ops (sub, div, mod, shifts), only first-position works.
    let op_str = match insn.op {
        IrOp::IntAdd if counter_is_first || counter_is_second => "+=",
        IrOp::IntSub if counter_is_first => "-=",
        IrOp::IntMult if counter_is_first || counter_is_second => "*=",
        IrOp::IntDiv | IrOp::IntSdiv if counter_is_first => "/=",
        IrOp::IntRem | IrOp::IntSrem if counter_is_first => "%=",
        IrOp::IntLeft if counter_is_first => "<<=",
        IrOp::IntRight | IrOp::IntSright if counter_is_first => ">>=",
        IrOp::IntAnd if counter_is_first || counter_is_second => "&=",
        IrOp::IntOr if counter_is_first || counter_is_second => "|=",
        IrOp::IntXor if counter_is_first || counter_is_second => "^=",
        _ => return None,
    };
    let other_idx = if counter_is_first { 1 } else { 0 };
    let const_ctx = const_context_for_op(insn.op);
    let other = emit_operand_with_prec(
        &insn.inputs[other_idx],
        other_idx,
        stmt_idx,
        const_ctx,
        ParentCtx::top(),
        ctx,
    );
    Some(format!("{} {} {}", lhs, op_str, other))
}

/// If `insn` is an `objc_msgSend` call site that the dispatch pass resolved
/// to a concrete `[Class method:]` annotation, return that bracket form so
/// the printer can emit it in place of the synthesised `objc_msgSend(...)`
/// expression. Returns `None` when no annotation is recorded or when it is
/// the fallback `// objc_msgSend(...)` comment form (which the existing
/// `cxa_call_annotation` / line-comment paths render separately).
fn objc_bracket_call(insn: &IrInsn, ctx: &PrintCtx) -> Option<String> {
    if !matches!(insn.op, IrOp::Call) {
        return None;
    }
    let ann = ctx.objc_dispatch_calls.get(&insn.addr)?;
    if ann.starts_with('[') {
        Some(ann.clone())
    } else {
        None
    }
}

/// Translate a single ObjC `@encoding` type code into the closest C type
/// spelling.  Unknown encodings fall back to `void*` with an inline comment
/// preserving the original code so the reader can still recover the
/// intended type.  Compound encodings (`^X`, `[N X]`) recurse on `X`.
pub fn objc_type_encoding_to_c(encoding: &str) -> String {
    let trimmed = encoding.trim();
    let trimmed = trimmed.trim_start_matches(|c: char| {
        matches!(c, 'r' | 'n' | 'N' | 'o' | 'O' | 'R' | 'V')
    });
    match trimmed {
        "c" => return "char".into(),
        "C" => return "unsigned char".into(),
        "s" => return "short".into(),
        "S" => return "unsigned short".into(),
        "i" => return "int".into(),
        "I" => return "unsigned int".into(),
        "l" => return "long".into(),
        "L" => return "unsigned long".into(),
        "q" => return "long long".into(),
        "Q" => return "unsigned long long".into(),
        "f" => return "float".into(),
        "d" => return "double".into(),
        "B" => return "_Bool".into(),
        "v" => return "void".into(),
        "*" => return "char*".into(),
        "@" => return "id".into(),
        "#" => return "Class".into(),
        ":" => return "SEL".into(),
        "?" => return "void* /* type=? */".into(),
        "" => return "void* /* type= */".into(),
        _ => {}
    }

    if let Some(rest) = trimmed.strip_prefix('@') {
        if let Some(class) = rest.strip_prefix('"').and_then(|s| s.strip_suffix('"')) {
            if !class.is_empty() && !class.starts_with('<') {
                return format!("{}*", class);
            }
        }
        return "id".into();
    }

    if let Some(inner) = trimmed.strip_prefix('^') {
        return format!("{}*", objc_type_encoding_to_c(inner));
    }

    if let Some(body) = trimmed.strip_prefix('[').and_then(|s| s.strip_suffix(']')) {
        let split = body
            .find(|c: char| !c.is_ascii_digit())
            .unwrap_or(body.len());
        let (count, inner) = body.split_at(split);
        if !count.is_empty() && !inner.is_empty() {
            return format!("{}[{}]", objc_type_encoding_to_c(inner), count);
        }
    }

    if let Some(body) = trimmed.strip_prefix('{').and_then(|s| s.strip_suffix('}')) {
        if let Some(name) = body.split('=').next() {
            if !name.is_empty() && name != "?" {
                return format!("struct {}", name);
            }
        }
    }
    if let Some(body) = trimmed.strip_prefix('(').and_then(|s| s.strip_suffix(')')) {
        if let Some(name) = body.split('=').next() {
            if !name.is_empty() && name != "?" {
                return format!("union {}", name);
            }
        }
    }

    if let Some(width) = trimmed.strip_prefix('b') {
        if !width.is_empty() && width.chars().all(|c| c.is_ascii_digit()) {
            return format!("unsigned int /* :{} */", width);
        }
    }

    format!("void* /* type={} */", trimmed.escape_default())
}

/// Emit a synthetic `struct ClassName { type ivar1; type ivar2; ... };`
/// for the given ObjC class.  Returns `None` when no ivars are recorded so
/// callers can skip emission entirely rather than printing an empty struct
/// (which is a C constraint violation).
///
/// Ivars are emitted in declared order so reading the synthetic struct
/// top-to-bottom mirrors the recovered offsets.
pub fn render_objc_class_struct(class: &unlace_loader::ObjcClass) -> Option<String> {
    if class.ivars.is_empty() {
        return None;
    }
    let mut out = String::new();
    let _ = writeln!(out, "struct {} {{", class.name);
    for ivar in &class.ivars {
        let ty = objc_type_encoding_to_c(&ivar.type_encoding);
        let _ = writeln!(
            out,
            "    {} {};  /* offset 0x{:X} */",
            ty, ivar.name, ivar.offset
        );
    }
    let _ = writeln!(out, "}};");
    // TODO(t147): wire this into PrintCtx so the synthesised structs are
    // emitted in the file preamble for every ObjC class referenced by the
    // function being printed.  Currently the helper is callable but the
    // c_printer driver does not invoke it.
    Some(out)
}

/// Render an ObjC category as a commented `@interface` block:
///
/// ```text
/// // @interface ClassName (CategoryName)
/// //   - methodA();
/// //   - methodB();
/// // @end
/// ```
///
/// The header line uses the recovered `class_name` if present; when the
/// category's `class_ref` could not be resolved to a name (only the raw
/// `class_addr` survived the scan) we fall back to `class_0x<addr>` so the
/// preamble still parses on the eye even though the symbol is anonymous.
///
/// Both `instance_methods` and `class_methods` are surfaced — instance
/// methods are prefixed `-` (matching ObjC's `-`/`+` selector convention),
/// class methods `+`. The body is intentionally allowed to be empty: a
/// category may exist in the runtime even with zero recovered selectors
/// (the analyst gets a "this category exists" breadcrumb to chase).
pub fn render_objc_category(cat: &unlace_loader::ObjcCategory) -> String {
    let mut out = String::new();
    let class_label: String = cat
        .class_name
        .clone()
        .unwrap_or_else(|| format!("class_0x{:X}", cat.class_addr));
    let _ = writeln!(out, "// @interface {} ({})", class_label, cat.name);
    for m in &cat.instance_methods {
        let _ = writeln!(out, "//   - {}();", m.name);
    }
    for m in &cat.class_methods {
        let _ = writeln!(out, "//   + {}();", m.name);
    }
    let _ = writeln!(out, "// @end");
    out
}


fn cxa_call_annotation(insn: &IrInsn, ctx: &PrintCtx) -> Option<&'static str> {
    if insn.op != IrOp::Call || insn.inputs.is_empty() {
        return None;
    }
    let target = &insn.inputs[0];
    if target.space != SpaceId::Const {
        return None;
    }
    let name = ctx.symbols.get(&target.offset)?;
    match name.as_str() {
        "__cxa_throw" | "__cxa_rethrow" => Some("throw"),
        "__cxa_begin_catch" => Some("catch"),
        "__cxa_end_catch" => Some("end catch"),
        "__cxa_allocate_exception" => Some("allocate exception"),
        _ => None,
    }
}

fn inline_statement_text(insn: &IrInsn, ctx: &mut PrintCtx) -> Option<String> {
    let idx = ctx.emit_stmt;
    if ctx.source_map.contains_key(&insn.addr) {
        return None;
    }
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && (ctx.panic_sites.contains_key(&insn.addr) || cxa_call_annotation(insn, ctx).is_some())
    {
        return None;
    }
    // CSEL must go through emit_statement for if-else expansion
    if is_csel_callother(insn) {
        ctx.emit_stmt += 1;
        return None;
    }
    // Hoisted variable declarations must render through emit_statement so
    // the type prefix and `// <location>` trailer can be emitted on a
    // dedicated line.  Inline grouping joins adjacent stmts on one line
    // which is incompatible with mid-line decl annotations.
    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).copied() {
        if let Some(plan) = ctx.hoist_decl_plan.get(&sv.base) {
            if plan.stmt_idx == idx && plan.fold_into_assignment {
                return None;
            }
        }
    }

    ctx.emit_stmt += 1;
    if ctx.foldable_stmts.contains(&idx)
        || is_dead_zero_init(insn, idx, ctx)
        || is_dead_suppressible_store(insn, idx, ctx)
    {
        return Some(String::new());
    }

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
        let lhs = ctx.name_of(&sv);
        if let Some(short) = try_emit_increment_form(insn, &lhs) {
            Some(format!("{};", short))
        } else if let Some(short) = try_emit_compound_assign(insn, idx, &lhs, ctx) {
            Some(format!("{};", short))
        } else if insn.op == IrOp::Call {
            if let Some(bracket) = objc_bracket_call(insn, ctx) {
                Some(format!("{} = {};", lhs, bracket))
            } else {
                Some(format!("{} = {};", lhs, emit_expr(insn, idx, ctx)))
            }
        } else {
            Some(format!("{} = {};", lhs, emit_expr(insn, idx, ctx)))
        }
    } else {
        match insn.op {
            IrOp::Store if insn.inputs.len() >= 3 => {
                let store_size = insn.inputs[2].size;
                let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                if let Some(global) = try_global_var_name(&insn.inputs[1], store_size, ctx) {
                    Some(format!("{} = {};", global, val))
                } else if let Some(field_expr) =
                    try_resolve_field_from_addr(&insn.inputs[1], 1, idx, store_size, ctx)
                {
                    Some(format!("{} = {};", field_expr, val))
                } else if let Some(field_expr) =
                    try_struct_field_access(&insn.inputs[1], idx, store_size, ctx)
                {
                    Some(format!("{} = {};", field_expr, val))
                } else if let Some(sub) = try_array_subscript(&insn.inputs[1], idx, store_size, ctx)
                {
                    Some(format!("{}[{}] = {};", sub.base, sub.index, val))
                } else {
                    let addr = emit_operand_resolved(&insn.inputs[1], 1, idx, ctx);
                    Some(format!(
                        "*({})({}) = {};",
                        ida_ptr_type(store_size),
                        addr,
                        val
                    ))
                }
            }
            IrOp::Store => Some("/* STORE (bad arity) */;".to_string()),
            IrOp::Callind => {
                let mut s = format!("{};", emit_callind_cast(insn, idx, ctx));
                if let Some(c) = forwarded_call_comment(insn, ctx) {
                    s.push(' ');
                    s.push_str(&c);
                }
                Some(s)
            }
            IrOp::Call => {
                let base = if let Some(bracket) = objc_bracket_call(insn, ctx) {
                    format!("{};", bracket)
                } else {
                    format!("{}();", resolve_call_target(insn, idx, ctx))
                };
                let mut s = base;
                if let Some(c) = forwarded_call_comment(insn, ctx) {
                    s.push(' ');
                    s.push_str(&c);
                }
                Some(s)
            }
            IrOp::Unimplemented => Some(format!("__unknown_insn_0x{:X}();", insn.addr)),
            IrOp::Callother => {
                let expr = emit_callother(insn, idx, ctx);
                Some(if is_cmov_callother(insn) {
                    expr
                } else {
                    format!("{};", expr)
                })
            }
            IrOp::Branchind => {
                let target = insn.inputs.first().map_or_else(
                    || "0".to_string(),
                    |input| emit_operand_resolved(input, 0, idx, ctx),
                );
                Some(format!("JUMPOUT({});", target))
            }
            _ => Some(format!("/* {} */;", insn.op.name())),
        }
    }
}

/// If statement `idx` is the hoist-decl anchor for the variable written by
/// `sv`, return `(prefix, terminator)` where:
///   * `prefix` is `"<type> "` to prepend to the assignment LHS, and
///   * `terminator` is `";"` followed by an optional ` // <location>` comment
///     mirroring the function-top declaration block's annotation.
fn hoisted_decl_for_stmt(
    idx: u32,
    sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> Option<(String, String)> {
    let plan = ctx.hoist_decl_plan.get(&sv.base)?;
    if plan.stmt_idx != idx || !plan.fold_into_assignment {
        return None;
    }
    let ty = ctx
        .var_types
        .get(sv)
        .copied()
        .unwrap_or(PrimitiveType::Unknown);
    let prefix = format!("{} ", c_type_for_var(ctx, &sv.base, &ty));
    let byref_suffix = if ctx.byref_bases.contains(&sv.base) {
        " BYREF"
    } else {
        ""
    };
    let comment = varnode_location_comment(&sv.base, ctx.frame_size);
    let terminator = match (comment, byref_suffix.is_empty()) {
        (Some(c), true) => format!("; // {}", c),
        (Some(c), false) => format!("; // {}{}", c, byref_suffix),
        (None, false) => format!("; //{}", byref_suffix),
        (None, true) => ";".to_string(),
    };
    Some((prefix, terminator))
}

fn emit_statement(insn: &IrInsn, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let idx = ctx.emit_stmt;
    ctx.emit_stmt += 1;

    if ctx.foldable_stmts.contains(&idx) {
        return;
    }

    if is_dead_zero_init(insn, idx, ctx) || is_dead_suppressible_store(insn, idx, ctx) {
        return;
    }

    if let Some(loc) = ctx.source_map.get(&insn.addr) {
        indent(depth, ctx.config.tab_width, out);
        let _ = writeln!(out, "// source: {}:{}", loc.file, loc.line);
    }

    if let Some(comment) = ctx.line_comments.get(&insn.addr).cloned() {
        for line in comment.lines() {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "// {}", line);
        }
    }

    indent(depth, ctx.config.tab_width, out);

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
        let lhs = ctx.name_of(&sv);

        if matches!(insn.op, IrOp::Call | IrOp::Callind) {
            if let Some(ann) = cxa_call_annotation(insn, ctx) {
                let _ = writeln!(out, "/* {} */", ann);
                indent(depth, ctx.config.tab_width, out);
            }
        }

        // CSEL → if-else assignment (ARM64 conditional select)
        if is_csel_callother(insn) && insn.inputs.len() >= 4 {
            let cond = emit_operand_resolved(&insn.inputs[1], 1, idx, ctx);
            let true_val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
            let false_val = emit_operand_resolved(&insn.inputs[3], 3, idx, ctx);
            let _ = writeln!(
                out,
                "if ({}) {{ {} = {}; }} else {{ {} = {}; }}",
                cond, lhs, true_val, lhs, false_val
            );
        } else if let Some(short) = try_emit_increment_form(insn, &lhs) {
            let _ = writeln!(out, "{};", short);
        } else if let Some(short) = try_emit_compound_assign(insn, idx, &lhs, ctx) {
            let _ = writeln!(out, "{};", short);
        } else {
            let rhs = emit_expr(insn, idx, ctx);
            // Hoist the variable's declaration into this assignment if the
            // pre-pass selected this stmt as the variable's declaration site.
            if let Some((decl_prefix, decl_trailer)) = hoisted_decl_for_stmt(idx, &sv, ctx) {
                let _ = writeln!(out, "{}{} = {}{}", decl_prefix, lhs, rhs, decl_trailer);
            } else {
                let _ = writeln!(out, "{} = {};", lhs, rhs);
            }
        }
    } else {
        match insn.op {
            IrOp::Store => {
                if insn.inputs.len() >= 3 {
                    let store_size = insn.inputs[2].size;
                    let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                    if let Some(global) = try_global_var_name(&insn.inputs[1], store_size, ctx) {
                        let _ = writeln!(out, "{} = {};", global, val);
                    } else if let Some(field_expr) =
                        try_resolve_field_from_addr(&insn.inputs[1], 1, idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", field_expr, val);
                    } else if let Some(field_expr) =
                        try_struct_field_access(&insn.inputs[1], idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", field_expr, val);
                    } else if let Some(sub) =
                        try_array_subscript(&insn.inputs[1], idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{}[{}] = {};", sub.base, sub.index, val);
                    } else {
                        let addr = emit_operand_resolved(&insn.inputs[1], 1, idx, ctx);
                        let cast = ida_ptr_type(store_size);
                        let _ = writeln!(out, "*({})({}) = {};", cast, addr, val);
                    }
                } else {
                    let _ = writeln!(out, "/* STORE (bad arity) */;");
                }
            }
            IrOp::Call | IrOp::Callind => {
                if let Some(kind) = ctx.panic_sites.get(&insn.addr) {
                    let _ = writeln!(out, "/* PANIC: {} */", kind);
                    indent(depth, ctx.config.tab_width, out);
                }
                let cxa_annotation = cxa_call_annotation(insn, ctx);
                if let Some(ref ann) = cxa_annotation {
                    let _ = writeln!(out, "/* {} */", ann);
                    indent(depth, ctx.config.tab_width, out);
                }
                let fwd = forwarded_call_comment(insn, ctx);
                if insn.op == IrOp::Callind {
                    let expr = emit_callind_cast(insn, idx, ctx);
                    if let Some(c) = fwd {
                        let _ = writeln!(out, "{}; {}", expr, c);
                    } else {
                        let _ = writeln!(out, "{};", expr);
                    }
                } else {
                    let target = resolve_call_target(insn, idx, ctx);
                    if let Some(c) = fwd {
                        let _ = writeln!(out, "{}(); {}", target, c);
                    } else {
                        let _ = writeln!(out, "{}();", target);
                    }
                }
            }
            IrOp::Unimplemented => {
                let _ = writeln!(out, "__unknown_insn_0x{:X}();", insn.addr);
            }
            IrOp::Callother => {
                let expr = emit_callother(insn, idx, ctx);
                if is_cmov_callother(insn) {
                    let _ = writeln!(out, "{}", expr);
                } else {
                    let _ = writeln!(out, "{};", expr);
                }
            }
            IrOp::Branchind => {
                let target = if !insn.inputs.is_empty() {
                    emit_operand_resolved(&insn.inputs[0], 0, idx, ctx)
                } else {
                    "0".to_string()
                };
                let _ = writeln!(out, "JUMPOUT({});", target);
            }
            _ => {
                let _ = writeln!(out, "/* {} */;", insn.op.name());
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Operator precedence — IDA's scheme (lower = tighter)
// ---------------------------------------------------------------------------
//
// This mirrors Hex-Rays' off_4E0320 lookup table, ported via sub_25F3C0
// (`references/hexrays/ida_dump/hexx64/all/sub_25F3C0.c`).  In IDA's scheme,
// a *lower* precedence value binds *tighter* — opposite of the textbook
// "higher binds tighter" convention.  We adopt IDA's numbering so the
// algorithm in `needs_parens` ports directly without sign flips.
//
// Levels:
//   0  — leaf (variable, constant, call, postfix, etc. — never parenthesized
//          by needs_parens; they handle their own grouping)
//   2  — unary prefix (!, ~, -)
//   3  — multiplicative (*, /, %)
//   4  — additive (+, -)
//   5  — shift (<<, >>)
//   6  — relational (<, <=, >, >=)
//   7  — equality (==, !=)
//   8  — bitwise AND (&)
//   9  — bitwise XOR (^)
//   10 — bitwise OR (|)
//   11 — logical AND (&&)
//   12 — logical OR (||)
//   13 — ternary ?:
//   14 — assignment

/// IDA-scheme precedence (lower = tighter).  Mirrors the off_4E0320 table.
fn ida_precedence(op: IrOp) -> u8 {
    match op {
        // Unary prefix
        IrOp::IntNegate | IrOp::BoolNegate | IrOp::Int2comp | IrOp::FloatNeg => 2,

        // Multiplicative
        IrOp::IntMult
        | IrOp::FloatMult
        | IrOp::IntDiv
        | IrOp::IntSdiv
        | IrOp::FloatDiv
        | IrOp::IntRem
        | IrOp::IntSrem => 3,

        // Additive
        IrOp::IntAdd
        | IrOp::FloatAdd
        | IrOp::IntSub
        | IrOp::FloatSub
        | IrOp::Ptradd
        | IrOp::Ptrsub => 4,

        // Shifts
        IrOp::IntLeft | IrOp::IntRight | IrOp::IntSright => 5,

        // Relational
        IrOp::IntLess
        | IrOp::IntLessequal
        | IrOp::IntSless
        | IrOp::IntSlessequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => 6,

        // Equality
        IrOp::IntEqual | IrOp::IntNotequal | IrOp::FloatEqual | IrOp::FloatNotequal => 7,

        // Bitwise AND
        IrOp::IntAnd => 8,

        // Bitwise XOR
        IrOp::IntXor | IrOp::BoolXor => 9,

        // Bitwise OR
        IrOp::IntOr => 10,

        // Logical AND
        IrOp::BoolAnd => 11,

        // Logical OR
        IrOp::BoolOr => 12,

        // Calls, copies, loads — leaves
        _ => 0,
    }
}

/// Encode the IDA `cot_*` opcode number for an IrOp.  This is what
/// `needs_parens` switches on, mirroring the bitmasks in sub_25F3C0.
///
/// We map only the opcodes that the IDA algorithm tests against:
///   17 = cot_lor   (||)
///   18 = cot_land  (&&)
///   19 = cot_bor   (|)
///   20 = cot_xor   (^)
///   21 = cot_band  (&)
///   35 = cot_add   (+)
///   36 = cot_sub   (-)
///   37 = cot_mul   (*)
///   38 = cot_sdiv  (signed /)
///   39 = cot_udiv  (unsigned /)
///   40 = cot_smod  (signed %)
///   41 = cot_umod  (unsigned %)
///   42 = cot_fadd  (float +)  — treated as associative like add
///   47 = cot_bnot  (~)
///   56 = cot_call
///
/// Every opcode in the algorithm's "compare" / "shift" branches is identified
/// by precedence (not opcode), so they don't need an entry here.  Anything
/// that doesn't appear in sub_25F3C0's bitmasks returns 0.
fn ida_opcode(op: IrOp) -> u8 {
    match op {
        IrOp::BoolOr => 17,
        IrOp::BoolAnd => 18,
        IrOp::IntOr => 19,
        IrOp::IntXor | IrOp::BoolXor => 20,
        IrOp::IntAnd => 21,
        IrOp::IntAdd | IrOp::Ptradd => 35,
        IrOp::IntSub | IrOp::Ptrsub => 36,
        IrOp::IntMult => 37,
        IrOp::IntSdiv => 38,
        IrOp::IntDiv => 39,
        IrOp::IntSrem => 40,
        IrOp::IntRem => 41,
        IrOp::FloatAdd => 42,
        IrOp::IntNegate => 47,
        IrOp::Call | IrOp::Callind => 56,
        _ => 0,
    }
}

/// Context describing a child expression's parent for parenthesization
/// decisions.  Mirrors the `a1` (this), `a2` (parent_op), `a3` (parent
/// expression node) arguments of IDA's sub_25F3C0.
#[derive(Clone, Copy, Debug, Default)]
struct ParentCtx {
    /// Parent operator opcode (`None` = no parent / top-level expression).
    parent_op: Option<IrOp>,
    /// True if the child is the right-hand operand of `parent_op`.
    /// (Mirrors `*(parent + 32) == this` in the IDA dump.)
    child_is_right: bool,
}

impl ParentCtx {
    /// No parent — top-level expression.  Never parenthesizes.
    const fn top() -> Self {
        Self {
            parent_op: None,
            child_is_right: false,
        }
    }

    /// Parent is `op`, child is the left operand.
    const fn lhs_of(op: IrOp) -> Self {
        Self {
            parent_op: Some(op),
            child_is_right: false,
        }
    }

    /// Parent is `op`, child is the right operand.
    const fn rhs_of(op: IrOp) -> Self {
        Self {
            parent_op: Some(op),
            child_is_right: true,
        }
    }
}

/// Decide whether the child expression `child_op` needs parentheses when
/// nested inside the context described by `parent`.
///
/// Direct port of Hex-Rays' `sub_25F3C0`
/// (`references/hexrays/ida_dump/hexx64/all/sub_25F3C0.c`).  See the file
/// header for the level numbering convention.
fn needs_parens(child_op: IrOp, parent: ParentCtx) -> bool {
    // No parent → never paren.
    let Some(parent_op) = parent.parent_op else {
        return false;
    };

    let child_prec = ida_precedence(child_op);
    let parent_prec = ida_precedence(parent_op);
    let child_opc = ida_opcode(child_op);
    let parent_opc = ida_opcode(parent_op);

    // `v7 = parent_prec`, `v8 = child_prec` in the IDA dump.
    // Default `result = 1` (paren), then refine.

    // Branch 1: parent_prec < child_prec (parent strictly tighter) → paren.
    if parent_prec < child_prec {
        return true;
    }

    // Branch 2: parent_prec > child_prec (parent strictly looser).  Almost
    // always safe to drop parens — except for the "mixed-precedence trap":
    // shift/relational/equality nested under bitwise/logical, where C's
    // precedence surprises most readers (e.g. `a & b == c` parses as
    // `a & (b == c)`).
    if parent_prec > child_prec {
        // child_prec ∈ [3, 7]  (== shift, relational, equality)
        // parent_prec == 5 (shift, the "v7 == 5" idiom for `a + b << c`)
        //              || parent_prec ∈ [8, 10] (band/xor/bor)
        let child_is_shift_or_compare = (3..=7).contains(&child_prec);
        let parent_is_band_or_higher = parent_prec == 5 || (8..=10).contains(&parent_prec);
        return child_is_shift_or_compare && parent_is_band_or_higher;
    }

    // Branch 3: parent_prec == child_prec.

    // Comparison level (relational or equality): ALWAYS paren — `a == b == c`
    // is legal C but almost never what the original source meant.
    if (6..=7).contains(&parent_prec) {
        return true;
    }

    // Now we dispatch on the *child opcode*.

    // 3a: child opcode > 0x2D (45).  Covers cot_bnot (47), postinc (53),
    // postdec (54).
    if child_opc > 0x2D {
        if child_opc == 47 {
            // ~x — paren only if parent is a call (postfix-style `(~x)()`).
            return parent_opc == 56;
        }
        if matches!(child_opc, 53 | 54) {
            // x++, x-- — paren only if parent is `&` (cot_ref = 51).
            // Unlace doesn't currently emit postinc/postdec from IR, so this
            // branch is dead but kept for parity with sub_25F3C0.
            return parent_opc == 51;
        }
        // Other > 0x2D opcodes (assignments, compounds): default fallthrough
        // handled below.
    } else if child_opc > 0x2B {
        // 3b: 0x2B < child_opc <= 0x2D — these are `cot_idx` (44) and
        // `cot_asg` (1)…  Actually opcodes 44-45.  Paren if right operand.
        // Unlace doesn't emit these either; preserved for fidelity.
        return parent.child_is_right;
    } else if (1..=42).contains(&child_opc) {
        // 3c: child is a binary op in the [cot_asg .. cot_fadd] range.
        let bit = 1u64 << child_opc;

        // Associative ops: never paren (left-assoc, same-level chain).
        //   1=asg, 17=lor, 18=land, 19=bor, 20=xor, 21=band, 35=add, 42=fadd
        const ASSOCIATIVE_MASK: u64 = 0x408003E0002;
        if bit & ASSOCIATIVE_MASK != 0 {
            return false;
        }

        // Right-associative trap: paren only if right operand.
        //   38=sdiv, 39=udiv, 40=smod, 41=umod
        const RIGHT_ASSOC_MASK: u64 = 0x3C000000000;
        if bit & RIGHT_ASSOC_MASK != 0 {
            return parent.child_is_right;
        }

        // cot_mul (37): flat-chain with another mul, else paren if right.
        if child_opc == 37 {
            if parent_opc == 37 {
                return false;
            }
            return parent.child_is_right;
        }

        // Fall through: cot_sub (36), cot_shl (33), cot_shr (34), and
        // anything else not specifically handled above — fall into default.
    }

    // 3d: Default branch — leaves (`child_prec <= 2`) never paren when same
    // precedence (the parent is also a unary, which can't happen in
    // practice — but the IDA code returns 0 here).  Otherwise paren only
    // when the child is the right operand.
    if child_prec <= 2 {
        return false;
    }
    parent.child_is_right
}

/// Return `true` if `op` is a binary operator that we emit via `emit_binop`.
#[allow(dead_code)]
fn is_binop(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::IntAdd
            | IrOp::FloatAdd
            | IrOp::IntSub
            | IrOp::FloatSub
            | IrOp::IntMult
            | IrOp::FloatMult
            | IrOp::IntDiv
            | IrOp::IntSdiv
            | IrOp::FloatDiv
            | IrOp::IntRem
            | IrOp::IntSrem
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
            | IrOp::IntEqual
            | IrOp::FloatEqual
            | IrOp::IntNotequal
            | IrOp::FloatNotequal
            | IrOp::IntLess
            | IrOp::IntSless
            | IrOp::FloatLess
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::FloatLessequal
            | IrOp::Ptradd
            | IrOp::Ptrsub
    )
}

// ---------------------------------------------------------------------------
// Expression-width pre-measurement (port of IDA `sub_262260`)
// ---------------------------------------------------------------------------

/// Estimate the rendered column width of an SSA expression *without*
/// emitting it.
///
/// IDA's `sub_262260` is consulted by `sub_267EB0` (the line-break
/// decider) to decide whether a sub-expression fits the remaining row
/// before committing to a one-line rendering. Unlace's printer doesn't
/// have a single-pass width oracle, so this helper walks the IR
/// recursively and approximates the post-emit length. The walker is
/// read-only (`&PrintCtx`) so it can be called mid-emit without
/// disturbing the fresh-name allocator.
///
/// Coverage:
/// * **Constants** — width of `format_constant` for the input's value/size.
/// * **Variables** — looks up the operand's recorded name (DWARF /
///   coalesced / cached `vN`); falls back to `"vN"` ≈ 3 columns.
/// * **Binary ops** — `lhs + " op " + rhs`; +2 if a parenthesisation rule
///   would wrap the side (precedence-blind, conservative).
/// * **Unary ops** — `op + child`; +2 if the child is itself binary.
/// * **Calls** — `name + "(" + sum(args) + (n-1)*2 + ")"` (commas + spaces).
/// * **Loads** — `*(<addr>)` ⇒ `addr + 3`.
/// * **Casts** (`IntZext` / `IntSext` / `FloatFloat2int` family) —
///   `"(<type>)" + child`; the type prefix is approximated as 8 columns.
fn measure_expr_width(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> usize {
    fn measure_operand(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> usize {
        if vn.space == SpaceId::Const {
            return format_constant_ctx(vn.offset, vn.size, ConstContext::Signed).len();
        }
        if let Some(name) = ctx.base_names.get(vn) {
            return name.len();
        }
        if let Some(name) = ctx.name_overrides.get(vn) {
            return name.len();
        }
        if let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx) {
            if let Some(sv) = inputs.iter().find(|sv| sv.base == *vn) {
                if let Some(name) = ctx.var_names.get(sv) {
                    return name.len();
                }
                if let Some(name) = ctx.merged_names.get(sv) {
                    return name.len();
                }
            }
        }
        // Default `vN` placeholder width — three chars covers v1..v99,
        // four for v100+; pick the larger as a small safety margin.
        4
    }

    fn measure_inputs(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> Vec<usize> {
        insn.inputs
            .iter()
            .map(|vn| measure_operand(vn, stmt_idx, ctx))
            .collect()
    }

    match insn.op {
        // Binary ops: `lhs OP rhs` plus surrounding spaces; +2 if
        // a conservative wrap rule applies (we don't have full
        // precedence context here, so assume no extra parens).
        IrOp::IntAdd
        | IrOp::IntSub
        | IrOp::IntMult
        | IrOp::IntDiv
        | IrOp::IntSdiv
        | IrOp::IntRem
        | IrOp::IntSrem
        | IrOp::IntAnd
        | IrOp::IntOr
        | IrOp::IntXor
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright
        | IrOp::IntEqual
        | IrOp::IntNotequal
        | IrOp::IntLess
        | IrOp::IntSless
        | IrOp::IntLessequal
        | IrOp::IntSlessequal
        | IrOp::BoolAnd
        | IrOp::BoolOr
        | IrOp::BoolXor
        | IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatEqual
        | IrOp::FloatNotequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let lhs = widths.first().copied().unwrap_or(0);
            let rhs = widths.get(1).copied().unwrap_or(0);
            // op token is 1..3 columns ('+', '<<', '<=', '&&', etc.).
            // Use 2 as a stable average; wraps don't depend on the
            // exact byte length of the operator.
            let op_token = 2;
            lhs + 1 + op_token + 1 + rhs
        }

        // Unary ops: `op + child`. Operator is one column ('-', '~', '!').
        IrOp::IntNegate | IrOp::Int2comp | IrOp::BoolNegate | IrOp::FloatNeg | IrOp::FloatAbs => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let child = widths.first().copied().unwrap_or(0);
            1 + child
        }

        // Casts: `(<type>)<child>`. Type-string width is approximated
        // as 8 columns (`unsigned`, `__int64`, etc. cluster around 6-9).
        IrOp::IntZext | IrOp::IntSext | IrOp::FloatInt2float | IrOp::FloatFloat2float
        | IrOp::FloatFloat2int => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let child = widths.first().copied().unwrap_or(0);
            8 + child
        }

        // Loads: `*(<addr>)` — 3 fixed columns plus the address operand.
        IrOp::Load => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let addr = if widths.len() >= 2 {
                widths[1]
            } else {
                widths.first().copied().unwrap_or(0)
            };
            3 + addr
        }

        // Calls: `<name>(<args, comma-separated>)`. Inputs[0] is the
        // call target (name or const-address); inputs[1..] are args.
        IrOp::Call | IrOp::Callind | IrOp::Callother => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            let name = widths.first().copied().unwrap_or(0);
            let args: usize = widths.iter().skip(1).sum();
            let arg_count = widths.len().saturating_sub(1);
            let separators = arg_count.saturating_sub(1) * 2;
            name + 1 + args + separators + 1
        }

        // Copy: a transparent rename, width is the operand alone.
        IrOp::Copy => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            widths.first().copied().unwrap_or(0)
        }

        // Catch-all: emit an approximate width based on operand sum
        // plus a small overhead for the opcode glue.
        _ => {
            let widths = measure_inputs(insn, stmt_idx, ctx);
            widths.iter().sum::<usize>() + 4
        }
    }
}

// ---------------------------------------------------------------------------
// Line-break pre-decision (port of IDA `sub_267EB0`)
// ---------------------------------------------------------------------------

/// Decide whether the printer should emit a soft break *before* `insn`.
///
/// IDA's `sub_267EB0` walks the citree before committing each
/// sub-expression to one line. The rules below mirror the exact branch
/// order in that 69-line function and are paired with
/// [`measure_expr_width`] as the width oracle:
///
/// 1. **Same-operator chain** — if the parent and child share the same
///    binary op (`a + b + c`), never break: chained associative
///    operators read better packed together.
/// 2. **Operator family** — bitwise and/xor go together
///    (`{IntXor, IntAnd}`), additive ops go together
///    (`{IntAdd, IntSub, FloatAdd, FloatSub}`), and multiplicative
///    ops go together (`{IntMult, IntS?div, IntS?rem, FloatMult,
///    FloatDiv}`). Two ops in the same family don't break.
/// 3. **Hard floor** — if `available_cols < 20` we always break: there
///    isn't room for a meaningful sub-expression here.
/// 4. **Width oracle** — measure the child's width via
///    [`measure_expr_width`]; break iff it exceeds `available_cols`.
/// 5. **Default** — fits, no break.
#[allow(dead_code)]
fn should_break_before(
    insn: &IrInsn,
    parent_op: Option<IrOp>,
    available_cols: usize,
    ctx: &PrintCtx,
) -> bool {
    fn family(op: IrOp) -> Option<u8> {
        match op {
            IrOp::IntXor | IrOp::IntAnd => Some(0),
            IrOp::IntAdd | IrOp::IntSub | IrOp::FloatAdd | IrOp::FloatSub => Some(1),
            IrOp::IntMult
            | IrOp::IntSdiv
            | IrOp::IntDiv
            | IrOp::IntSrem
            | IrOp::IntRem
            | IrOp::FloatMult
            | IrOp::FloatDiv => Some(2),
            _ => None,
        }
    }

    if let Some(p) = parent_op {
        if p == insn.op {
            return false;
        }
        if let (Some(fp), Some(fc)) = (family(p), family(insn.op)) {
            if fp == fc {
                return false;
            }
        }
    }

    if available_cols < 20 {
        return true;
    }

    measure_expr_width(insn, 0, ctx) > available_cols
}

// ---------------------------------------------------------------------------
// Expression emission
// ---------------------------------------------------------------------------

fn emit_expr(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    emit_expr_with_prec(insn, stmt_idx, ParentCtx::top(), ctx)
}

fn emit_expr_with_prec(
    insn: &IrInsn,
    stmt_idx: u32,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    match insn.op {
        // -- Binary arithmetic/bitwise --
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
        IrOp::IntRight => emit_unsigned_binop(insn, ">>", stmt_idx, parent, ctx),

        // -- Boolean ops --
        IrOp::BoolAnd => emit_binop(insn, "&&", stmt_idx, parent, ctx),
        IrOp::BoolOr => emit_binop(insn, "||", stmt_idx, parent, ctx),
        IrOp::BoolXor => emit_binop(insn, "^", stmt_idx, parent, ctx),

        // -- Comparisons --
        IrOp::IntEqual | IrOp::FloatEqual => emit_binop(insn, "==", stmt_idx, parent, ctx),
        IrOp::IntNotequal | IrOp::FloatNotequal => {
            emit_binop(insn, "!=", stmt_idx, parent, ctx)
        }
        IrOp::IntSless | IrOp::FloatLess => emit_binop(insn, "<", stmt_idx, parent, ctx),
        IrOp::IntLess => emit_unsigned_binop(insn, "<", stmt_idx, parent, ctx),
        IrOp::IntSlessequal | IrOp::FloatLessequal => {
            emit_binop(insn, "<=", stmt_idx, parent, ctx)
        }
        IrOp::IntLessequal => emit_unsigned_binop(insn, "<=", stmt_idx, parent, ctx),

        // -- Unary ops --
        IrOp::IntNegate => emit_unaryop(insn, "~", stmt_idx, parent, ctx),
        IrOp::BoolNegate => emit_bool_negate(insn, stmt_idx, parent, ctx),
        IrOp::Int2comp | IrOp::FloatNeg => emit_unaryop(insn, "-", stmt_idx, parent, ctx),

        // -- Copy / move --
        IrOp::Copy => {
            if insn.inputs.is_empty() {
                "0".to_string()
            } else {
                let copy_ctx =
                    if insn.inputs[0].space == SpaceId::Const && insn.inputs[0].offset == 0 {
                        let out_sv = ctx.stmt_outputs.get(&stmt_idx).cloned().flatten();
                        if out_sv.and_then(|sv| ctx.var_types.get(&sv).copied())
                            == Some(PrimitiveType::Ptr)
                        {
                            ConstContext::Pointer
                        } else {
                            ConstContext::Signed
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
                if let Some(canary) = try_fs_canary_load(&insn.inputs[addr_idx], load_size) {
                    return canary;
                }
                if let Some(canary) = try_macos_canary_load(&insn.inputs[addr_idx], ctx) {
                    return canary;
                }
                if let Some(global) = try_global_var_name(&insn.inputs[addr_idx], load_size, ctx) {
                    return global;
                }
                if let Some(resolved) = try_resolve_field_from_addr(
                    &insn.inputs[addr_idx],
                    addr_idx,
                    stmt_idx,
                    load_size,
                    ctx,
                ) {
                    return resolved;
                }
                if let Some(field) =
                    try_struct_field_access(&insn.inputs[addr_idx], stmt_idx, load_size, ctx)
                {
                    return field;
                }
                if let Some(sub) =
                    try_array_subscript(&insn.inputs[addr_idx], stmt_idx, load_size, ctx)
                {
                    return format!("{}[{}]", sub.base, sub.index);
                }
                if let Some(memory) = try_emit_memory_annotation(&insn.inputs[addr_idx], ctx) {
                    return memory;
                }
                let addr = emit_operand_resolved(&insn.inputs[addr_idx], addr_idx, stmt_idx, ctx);
                let cast = ida_ptr_type(load_size);
                format!("*({})({})", cast, addr)
            } else {
                "/* LOAD (bad arity) */ 0".to_string()
            }
        }

        // -- Extensions --
        IrOp::IntZext | IrOp::IntSext => {
            if !insn.inputs.is_empty() {
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    if is_redundant_widen(insn.op, &insn.inputs[0], output.size) {
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
                let op = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
                if let Some(output) = insn.output {
                    if is_redundant_same_size_cast(&insn.inputs[0], output.size) {
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
                let target = resolve_call_target(insn, stmt_idx, ctx);
                format!("{}()", target)
            };
            if let Some(c) = forwarded_call_comment(insn, ctx) {
                format!("{} {}", base, c)
            } else {
                base
            }
        }

        // -- Unknown / unimplemented instruction --
        IrOp::Unimplemented => format!("__unknown_insn_0x{:X}()", insn.addr),

        // -- CALLOTHER: resolve to intrinsic name if known --
        IrOp::Callother => emit_callother(insn, stmt_idx, ctx),

        // -- Fallback --
        _ => format!("/* {} */ 0", insn.op.name()),
    }
}

fn emit_binop(
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

fn emit_unaryop(
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

fn negate_comparison(op: IrOp) -> Option<&'static str> {
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

fn emit_bool_negate(insn: &IrInsn, stmt_idx: u32, parent: ParentCtx, ctx: &mut PrintCtx) -> String {
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

        if let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv) {
            if let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned() {
                if let Some(negated_op) = negate_comparison(def_insn.op) {
                    let is_unsigned = matches!(def_insn.op, IrOp::IntLess | IrOp::IntLessequal);
                    if is_unsigned {
                        return emit_unsigned_binop(&def_insn, negated_op, def_stmt, parent, ctx);
                    }
                    return emit_binop(&def_insn, negated_op, def_stmt, parent, ctx);
                }
            }
        }
    }

    emit_unaryop(insn, "!", stmt_idx, parent, ctx)
}

fn emit_call1(insn: &IrInsn, func: &str, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let arg = if !insn.inputs.is_empty() {
        emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx)
    } else {
        "0".to_string()
    };
    format!("{}({})", func, arg)
}

/// Resolve a CALLOTHER tag to its C intrinsic name.
///
/// Tags are assigned by the lifter (`unlace-lift-x86`) and encode the
/// original x86 mnemonic. This table mirrors the tag constants from
/// `ops/sse.rs::tag` and `ops/bitwise.rs::bit_tag`, mapping each to the
/// corresponding Intel intrinsic or GCC builtin.
fn callother_intrinsic_name(tag: u64) -> Option<&'static str> {
    match tag {
        // ── String / memory builtins ────────────────────────────
        0x1 => Some("__builtin_memcpy"),
        0x2 => Some("__builtin_memset"),
        0x3 => Some("__builtin_memcmp"),

        // ── SSE/SSE2 moves (0x100..0x10F) ──────────────────────
        0x100 => Some("_mm_load_si128"),  // MOVDQA
        0x101 => Some("_mm_loadu_si128"), // MOVDQU
        0x102 => Some("_mm_load_ps"),     // MOVAPS
        0x103 => Some("_mm_loadu_ps"),    // MOVUPS
        0x104 => Some("_mm_load_sd"),     // MOVSD

        // ── SSE2 packed integer add (0x110..0x113) ─────────────
        0x110 => Some("_mm_add_epi8"),  // PADDB
        0x111 => Some("_mm_add_epi16"), // PADDW
        0x112 => Some("_mm_add_epi32"), // PADDD
        0x113 => Some("_mm_add_epi64"), // PADDQ

        // ── SSE2 packed integer sub (0x118..0x11B) ─────────────
        0x118 => Some("_mm_sub_epi8"),  // PSUBB
        0x119 => Some("_mm_sub_epi16"), // PSUBW
        0x11A => Some("_mm_sub_epi32"), // PSUBD
        0x11B => Some("_mm_sub_epi64"), // PSUBQ

        // ── SSE2 packed integer multiply (0x123, 0x127) ────────
        0x123 => Some("_mm_mullo_epi32"), // PMULLD
        0x127 => Some("_mm_mul_epu32"),   // PMULUDQ

        // ── SSE2 packed bitwise logic (0x120..0x122) ───────────
        0x120 => Some("_mm_and_si128"), // PAND
        0x121 => Some("_mm_or_si128"),  // POR
        0x122 => Some("_mm_xor_si128"), // PXOR

        // ── SSE packed float arithmetic (0x130..0x136) ─────────
        0x130 => Some("_mm_add_ps"),  // ADDPS
        0x131 => Some("_mm_sub_ps"),  // SUBPS
        0x132 => Some("_mm_mul_ps"),  // MULPS
        0x133 => Some("_mm_div_ps"),  // DIVPS
        0x134 => Some("_mm_min_ps"),  // MINPS
        0x135 => Some("_mm_max_ps"),  // MAXPS
        0x136 => Some("_mm_sqrt_ps"), // SQRTPS

        // ── SSE2 shuffle/unpack (0x140..0x142) ─────────────────
        0x140 => Some("_mm_shuffle_epi32"), // PSHUFD
        0x141 => Some("_mm_shuffle_epi8"),  // PSHUFB
        0x142 => Some("_mm_unpacklo_epi8"), // PUNPCKLBW

        // ── SSE misc (0x150) ───────────────────────────────────
        0x150 => Some("_mm_movemask_epi8"), // PMOVMSKB

        // ── SSE2 pack-with-saturation (0x160..0x161) ───────────
        0x160 => Some("_mm_packs_epi16"),  // PACKSSWB
        0x161 => Some("_mm_packus_epi16"), // PACKUSWB

        // ── SSE4.1 blend/select (0x170..0x171) ─────────────────
        0x170 => Some("_mm_blend_ps"),    // BLENDPS
        0x171 => Some("_mm_blendv_epi8"), // PBLENDVB

        // ── Bit-manipulation builtins (0x200..0x204) ───────────
        0x200 => Some("__builtin_ctz"),      // BSF
        0x201 => Some("__bsr"),              // BSR
        0x202 => Some("__builtin_ctz"),      // TZCNT
        0x203 => Some("__builtin_clz"),      // LZCNT
        0x204 => Some("__builtin_popcount"), // POPCNT

        // ── Trap (0x300) ───────────────────────────────────────
        0x300 => Some("__builtin_trap"), // UD2 / INT3

        // ── Idiom-recognized intrinsics (0x320..0x328) ─────────
        0x320 => Some("__ROL__"),
        0x321 => Some("__ROR__"),
        0x322 => Some("__abs__"),
        0x323 => Some("__min__"),
        0x324 => Some("__max__"),
        0x325 => Some("__memcpy__"),
        0x326 => Some("__memset__"),
        0x327 => Some("__bitfield_get__"),
        0x328 => Some("__bitfield_set__"),

        // ── AArch64 lifter callothers (0x330..0x344) ───────────
        0x330 => Some("__csel__"),
        0x331 => Some("__csinc__"),
        0x332 => Some("__csinv__"),
        0x333 => Some("__csneg__"),
        0x340 => Some("__ldrex__"),
        0x341 => Some("__strex__"),
        0x342 => Some("__dmb__"),
        0x343 => Some("__dsb__"),
        0x344 => Some("__isb__"),

        // ── x86 conditional move pseudo-intrinsic ───────────────
        0x350 => Some("__cmov__"),

        // ── AArch64 NEON (0x400..0x40D) ─────────────────────────
        // These are *not* resolved here because the C intrinsic name
        // depends on the lane-size operand (e.g. ADD lane=4 →
        // `vaddq_s32` vs. ADD lane=2 → `vaddq_s16`). The lifter encodes
        // lane size as `inputs[1]`; `emit_callother` peels it off and
        // routes through `aarch64_neon_intrinsic_name` before falling
        // back to this tag-only table.
        _ => None,
    }
}

// ── AArch64 NEON Callother tags (mirror of `unlace-lift-arm`) ──────────
// Duplicated here as private consts to keep the output crate from taking
// a cross-arch lifter dependency just for these eight u64s.
const CALLOTHER_AARCH64_LD1: u64 = 0x400;
const CALLOTHER_AARCH64_LD2: u64 = 0x401;
const CALLOTHER_AARCH64_LD3: u64 = 0x402;
const CALLOTHER_AARCH64_LD4: u64 = 0x403;
const CALLOTHER_AARCH64_ST1: u64 = 0x404;
const CALLOTHER_AARCH64_ST2: u64 = 0x405;
const CALLOTHER_AARCH64_ST3: u64 = 0x406;
const CALLOTHER_AARCH64_ST4: u64 = 0x407;
const CALLOTHER_NEON_ADD: u64 = 0x408;
const CALLOTHER_NEON_SUB: u64 = 0x409;
const CALLOTHER_NEON_MUL: u64 = 0x40A;
const CALLOTHER_NEON_FADD: u64 = 0x40B;
const CALLOTHER_NEON_FSUB: u64 = 0x40C;
const CALLOTHER_NEON_FMUL: u64 = 0x40D;

/// Map an AArch64 NEON `Callother` `(tag, lane_size, signed)` triple to
/// its Apple/ARM C intrinsic name (e.g. `vaddq_s32`).
///
/// `lane_size` is the byte width of one element (1=B, 2=H, 4=S, 8=D)
/// as encoded by `aarch64_vas_lane_size` in the lifter. `signed=true`
/// selects the `s<bits>` element suffix, `false` selects `u<bits>`.
/// Float ops ignore `signed` and always render as `f<bits>`.
///
/// Returns `""` when the `(tag, lane)` combination isn't representable
/// as a NEON intrinsic — callers treat the empty string as "fall
/// through to the generic Callother fallback comment".
///
/// **Vector-width caveat**: we currently always emit the `q` suffix
/// (128-bit), matching the spec's worked examples. The lifter doesn't
/// yet propagate whether the source VAS was a 64-bit or 128-bit form
/// (e.g. `2S` vs `4S`), so a future task — once op_info carries the
/// concrete VAS — will demote 64-bit ops to the non-`q` mnemonic
/// (`vadd_s32` vs `vaddq_s32`).
///
/// **Signedness caveat**: the prompt specifies "treat all int ops as
/// signed" for now; the `signed` parameter is plumbed through so a
/// future inference pass can wire it without churning this signature.
pub fn aarch64_neon_intrinsic_name(tag: u64, lane_size: u8, signed: bool) -> &'static str {
    // Float ops: lane=4 → f32, lane=8 → f64. Anything else is unmapped.
    match (tag, lane_size) {
        (CALLOTHER_NEON_FADD, 4) => return "vaddq_f32",
        (CALLOTHER_NEON_FADD, 8) => return "vaddq_f64",
        (CALLOTHER_NEON_FSUB, 4) => return "vsubq_f32",
        (CALLOTHER_NEON_FSUB, 8) => return "vsubq_f64",
        (CALLOTHER_NEON_FMUL, 4) => return "vmulq_f32",
        (CALLOTHER_NEON_FMUL, 8) => return "vmulq_f64",
        _ => {}
    }

    // Integer arith: ADD/SUB/MUL × {1,2,4,8} × {signed,unsigned}.
    // The element-bit suffix is lane*8; the s/u prefix comes from
    // `signed`.
    let bits = match lane_size {
        1 => 8u8,
        2 => 16,
        4 => 32,
        8 => 64,
        _ => return "",
    };
    let int_op = match tag {
        CALLOTHER_NEON_ADD => Some("add"),
        CALLOTHER_NEON_SUB => Some("sub"),
        CALLOTHER_NEON_MUL => Some("mul"),
        _ => None,
    };
    if let Some(op) = int_op {
        return match (op, bits, signed) {
            // ADD ─────────────────
            ("add", 8, true) => "vaddq_s8",
            ("add", 16, true) => "vaddq_s16",
            ("add", 32, true) => "vaddq_s32",
            ("add", 64, true) => "vaddq_s64",
            ("add", 8, false) => "vaddq_u8",
            ("add", 16, false) => "vaddq_u16",
            ("add", 32, false) => "vaddq_u32",
            ("add", 64, false) => "vaddq_u64",
            // SUB ─────────────────
            ("sub", 8, true) => "vsubq_s8",
            ("sub", 16, true) => "vsubq_s16",
            ("sub", 32, true) => "vsubq_s32",
            ("sub", 64, true) => "vsubq_s64",
            ("sub", 8, false) => "vsubq_u8",
            ("sub", 16, false) => "vsubq_u16",
            ("sub", 32, false) => "vsubq_u32",
            ("sub", 64, false) => "vsubq_u64",
            // MUL ─────────────────
            ("mul", 8, true) => "vmulq_s8",
            ("mul", 16, true) => "vmulq_s16",
            ("mul", 32, true) => "vmulq_s32",
            // `vmulq_s64` doesn't exist in the NEON intrinsic set
            // (no MUL.2D); leave unmapped.
            ("mul", 8, false) => "vmulq_u8",
            ("mul", 16, false) => "vmulq_u16",
            ("mul", 32, false) => "vmulq_u32",
            _ => "",
        };
    }

    // LDn/STn: element type is u8/u16/u32/u64 per the spec's
    // `vld1q_u8` example. The `n` in LDn/STn picks the intrinsic
    // family (vld1q / vld2q / …); lane_size picks the element bit
    // width. We honour `signed` so a later inference pass can route
    // to `vld1q_s*`, but default callers pass `signed=true` only for
    // arith — load/store typically pass `false`.
    let elt_suffix = match (signed, bits) {
        (false, 8) => "u8",
        (false, 16) => "u16",
        (false, 32) => "u32",
        (false, 64) => "u64",
        (true, 8) => "s8",
        (true, 16) => "s16",
        (true, 32) => "s32",
        (true, 64) => "s64",
        _ => return "",
    };
    match tag {
        CALLOTHER_AARCH64_LD1 => match elt_suffix {
            "u8" => "vld1q_u8",
            "u16" => "vld1q_u16",
            "u32" => "vld1q_u32",
            "u64" => "vld1q_u64",
            "s8" => "vld1q_s8",
            "s16" => "vld1q_s16",
            "s32" => "vld1q_s32",
            "s64" => "vld1q_s64",
            _ => "",
        },
        CALLOTHER_AARCH64_LD2 => match elt_suffix {
            "u8" => "vld2q_u8",
            "u16" => "vld2q_u16",
            "u32" => "vld2q_u32",
            "s8" => "vld2q_s8",
            "s16" => "vld2q_s16",
            "s32" => "vld2q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_LD3 => match elt_suffix {
            "u8" => "vld3q_u8",
            "u16" => "vld3q_u16",
            "u32" => "vld3q_u32",
            "s8" => "vld3q_s8",
            "s16" => "vld3q_s16",
            "s32" => "vld3q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_LD4 => match elt_suffix {
            "u8" => "vld4q_u8",
            "u16" => "vld4q_u16",
            "u32" => "vld4q_u32",
            "s8" => "vld4q_s8",
            "s16" => "vld4q_s16",
            "s32" => "vld4q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_ST1 => match elt_suffix {
            "u8" => "vst1q_u8",
            "u16" => "vst1q_u16",
            "u32" => "vst1q_u32",
            "u64" => "vst1q_u64",
            "s8" => "vst1q_s8",
            "s16" => "vst1q_s16",
            "s32" => "vst1q_s32",
            "s64" => "vst1q_s64",
            _ => "",
        },
        CALLOTHER_AARCH64_ST2 => match elt_suffix {
            "u8" => "vst2q_u8",
            "u16" => "vst2q_u16",
            "u32" => "vst2q_u32",
            "s8" => "vst2q_s8",
            "s16" => "vst2q_s16",
            "s32" => "vst2q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_ST3 => match elt_suffix {
            "u8" => "vst3q_u8",
            "u16" => "vst3q_u16",
            "u32" => "vst3q_u32",
            "s8" => "vst3q_s8",
            "s16" => "vst3q_s16",
            "s32" => "vst3q_s32",
            _ => "",
        },
        CALLOTHER_AARCH64_ST4 => match elt_suffix {
            "u8" => "vst4q_u8",
            "u16" => "vst4q_u16",
            "u32" => "vst4q_u32",
            "s8" => "vst4q_s8",
            "s16" => "vst4q_s16",
            "s32" => "vst4q_s32",
            _ => "",
        },
        _ => "",
    }
}

/// `true` if `tag` falls in the AArch64 NEON Callother range
/// `(0x400..=0x40D)` — used by `emit_callother` to route through the
/// lane-aware [`aarch64_neon_intrinsic_name`] helper instead of the
/// tag-only [`callother_intrinsic_name`] table.
fn is_aarch64_neon_tag(tag: u64) -> bool {
    (CALLOTHER_AARCH64_LD1..=CALLOTHER_NEON_FMUL).contains(&tag)
}

fn is_csel_callother(insn: &IrInsn) -> bool {
    insn.op == IrOp::Callother
        && insn.inputs.len() >= 4
        && insn
            .inputs
            .first()
            .is_some_and(|vn| vn.space == SpaceId::Const && matches!(vn.offset, 0x330..=0x333))
}

fn is_cmov_callother(insn: &IrInsn) -> bool {
    insn.op == IrOp::Callother
        && insn.inputs.len() >= 4
        && insn
            .inputs
            .first()
            .is_some_and(|vn| vn.space != SpaceId::Const || vn.offset == 0x350)
}

fn emit_callother(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if insn.inputs.is_empty() {
        return "/* CALLOTHER (no tag) */ 0".to_string();
    }

    let tag_vn = &insn.inputs[0];
    if is_cmov_callother(insn) {
        let cond = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
        let src = emit_operand_resolved(&insn.inputs[2], 2, stmt_idx, ctx);
        let dst = emit_operand_resolved(&insn.inputs[3], 3, stmt_idx, ctx);
        return format!("if ({}) {{ {} = {}; }}", cond, dst, src);
    }

    if tag_vn.space != SpaceId::Const {
        return "/* CALLOTHER (dynamic tag) */ 0".to_string();
    }

    let tag = tag_vn.offset;

    // AArch64 NEON intrinsics carry their lane size as a constant in
    // `inputs[1]` — peel it off and route through the lane-aware
    // registry. Per the t200 spec, integer arith ops are treated as
    // signed (full signedness inference is a future task); LDn/STn
    // default to unsigned (matching the `vld1q_u8` example).
    if is_aarch64_neon_tag(tag) && insn.inputs.len() >= 2 {
        let lane_vn = &insn.inputs[1];
        if lane_vn.space == SpaceId::Const {
            let lane = lane_vn.offset as u8;
            let signed_default = matches!(
                tag,
                CALLOTHER_NEON_ADD | CALLOTHER_NEON_SUB | CALLOTHER_NEON_MUL
            );
            let name = aarch64_neon_intrinsic_name(tag, lane, signed_default);
            if !name.is_empty() {
                // Skip the lane constant from the rendered arg list —
                // it's baked into the intrinsic name.
                let args: Vec<String> = insn.inputs[2..]
                    .iter()
                    .enumerate()
                    .map(|(i, vn)| emit_operand_resolved(vn, i + 2, stmt_idx, ctx))
                    .collect();
                return format!("{}({})", name, args.join(", "));
            }
        }
    }

    match callother_intrinsic_name(tag) {
        Some(name) => {
            let args: Vec<String> = insn.inputs[1..]
                .iter()
                .enumerate()
                .map(|(i, vn)| emit_operand_resolved(vn, i + 1, stmt_idx, ctx))
                .collect();
            format!("{}({})", name, args.join(", "))
        }
        None => format!("/* CALLOTHER tag={} */ 0", tag),
    }
}

fn emit_unsigned_binop(
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

// ---------------------------------------------------------------------------
// Operand rendering
// ---------------------------------------------------------------------------

fn emit_operand_resolved(
    vn: &unlace_ir::Varnode,
    _raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    emit_operand_with_prec(
        vn,
        _raw_idx,
        stmt_idx,
        ConstContext::Signed,
        ParentCtx::top(),
        ctx,
    )
}

fn is_pointer_typed_input(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if vn.space == SpaceId::Const {
        return false;
    }
    let resolved_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied());
    let sv = resolved_sv.unwrap_or(SsaVarnode {
        base: *vn,
        version: 0,
    });
    ctx.var_types.get(&sv).copied() == Some(PrimitiveType::Ptr)
}

fn const_context_for_binop_pair(
    insn: &IrInsn,
    this_idx: usize,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> ConstContext {
    let base_ctx = const_context_for_op(insn.op);
    if insn.inputs.len() < 2 {
        return base_ctx;
    }
    let other_idx = 1 - this_idx;
    if insn.inputs[this_idx].space == SpaceId::Const
        && insn.inputs[this_idx].offset == 0
        && is_pointer_typed_input(&insn.inputs[other_idx], stmt_idx, ctx)
    {
        return ConstContext::Pointer;
    }
    base_ctx
}

fn emit_operand_with_prec(
    vn: &unlace_ir::Varnode,
    _raw_idx: usize,
    stmt_idx: u32,
    const_ctx: ConstContext,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    if vn.space == SpaceId::Const {
        if let Some(s) = ctx.string_table.get(&vn.offset) {
            return format!("\"{}\"", escape_c_string(s));
        }
        return format_constant_ctx(vn.offset, vn.size, const_ctx);
    }

    let resolved_sv = if let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx).cloned() {
        inputs.iter().find(|sv| sv.base == *vn).copied()
    } else {
        None
    };

    let sv = resolved_sv.unwrap_or(SsaVarnode {
        base: *vn,
        version: 0,
    });

    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv) {
        if let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned() {
            return emit_expr_with_prec(&def_insn, def_stmt, parent, ctx);
        }
    }

    ctx.name_of(&sv)
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum ConstContext {
    Signed,
    Bitwise,
    Pointer,
    Unsigned,
}

fn const_context_for_op(op: IrOp) -> ConstContext {
    match op {
        IrOp::IntAnd
        | IrOp::IntOr
        | IrOp::IntXor
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright => ConstContext::Bitwise,
        _ => ConstContext::Signed,
    }
}

#[cfg(test)]
fn format_constant(value: u64, size: u8) -> String {
    format_constant_ctx(value, size, ConstContext::Signed)
}

fn format_constant_ctx(value: u64, size: u8, context: ConstContext) -> String {
    if context == ConstContext::Pointer && value == 0 {
        return "nullptr".to_string();
    }

    let msb_threshold = match size {
        1 => 0x80u64,
        2 => 0x8000,
        4 => 0x8000_0000,
        8 => 0x8000_0000_0000_0000,
        _ => u64::MAX,
    };

    let has_msb = size <= 8 && value >= msb_threshold;

    if has_msb && context == ConstContext::Signed {
        let signed = sign_extend(value, size);
        let abs_val = signed.unsigned_abs();
        let should_negate = size >= 4 || (size == 2 && abs_val <= 128);
        if should_negate {
            return if size == 8 {
                format!("{}LL", signed)
            } else {
                format!("{}", signed)
            };
        }
    }

    if has_msb {
        return format!("0x{:x}ULL", value);
    }

    if context == ConstContext::Unsigned {
        return if value < 10 {
            if size == 8 {
                format!("{}ULL", value)
            } else if size == 4 {
                format!("{}u", value)
            } else {
                format!("{}", value)
            }
        } else if size == 8 {
            format!("0x{:x}ULL", value)
        } else if size == 4 {
            format!("0x{:x}u", value)
        } else {
            format!("0x{:x}", value)
        };
    }

    if value < 10 {
        if size == 8 {
            format!("{}LL", value)
        } else {
            format!("{}", value)
        }
    } else if size == 8 {
        format!("0x{:x}LL", value)
    } else {
        format!("0x{:x}", value)
    }
}

fn sign_extend(value: u64, size: u8) -> i64 {
    match size {
        1 => value as u8 as i8 as i64,
        2 => value as u16 as i16 as i64,
        4 => value as u32 as i32 as i64,
        8 => value as i64,
        _ => value as i64,
    }
}

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Render a string literal body with C escape sequences.
///
/// Mirrors the escape table used by IDA's `str2user` (called from
/// `sub_265AA0` for `cot_str` rendering): the standard C single-character
/// escapes (`\\`, `\"`, `\n`, `\r`, `\t`, `\v`, `\f`, `\a`, `\b`, `\0`)
/// followed by `\xHH` for any other non-printable byte. Multi-byte UTF-8
/// codepoints are emitted as a sequence of `\xHH` for each underlying byte
/// so the output is bytewise unambiguous.
///
/// Note: the single-quote (`'`) does not need escaping inside a double-
/// quoted string literal, so we leave it as-is — matching both IDA and the
/// C standard.
fn escape_c_string(s: &str) -> String {
    let mut out = String::with_capacity(s.len());
    for ch in s.chars() {
        match ch {
            '\\' => out.push_str("\\\\"),
            '"' => out.push_str("\\\""),
            '\n' => out.push_str("\\n"),
            '\r' => out.push_str("\\r"),
            '\t' => out.push_str("\\t"),
            '\x0b' => out.push_str("\\v"), // vertical tab
            '\x0c' => out.push_str("\\f"), // form feed
            '\x07' => out.push_str("\\a"), // bell
            '\x08' => out.push_str("\\b"), // backspace
            '\0' => out.push_str("\\0"),
            c if c.is_ascii_graphic() || c == ' ' => out.push(c),
            c => {
                for b in c.to_string().bytes() {
                    let _ = write!(out, "\\x{:02x}", b);
                }
            }
        }
    }
    out
}

// ---------------------------------------------------------------------------
// `cot_sizeof` / `cot_alignof` formatters
//
// These are reachable today only via direct callers (they have no IR
// producer); see the cot-coverage audit at the top of this file. Centralizing
// the syntax here means that when a future HIR `Sizeof(...)` / `Alignof(...)`
// node lands, the printer wiring is already in place and matches IDA's
// surface form.
// ---------------------------------------------------------------------------

/// Emit `sizeof(<type>)` for a type-as-argument form (IDA's `cot_sizeof`
/// applied to a `cot_type`). The caller is responsible for already having
/// formatted `type_str` as a valid C type-name (e.g. `"int *"`).
///
/// Currently has no in-tree caller; the helper exists so that when a HIR
/// `Sizeof(Type)` node lands, the printer wiring is one call away.
#[allow(dead_code)]
pub(crate) fn emit_sizeof_type(type_str: &str) -> String {
    format!("sizeof({})", type_str)
}

/// Emit `sizeof(<expr>)` for an expression argument (IDA's `cot_sizeof`
/// applied to any non-`cot_type`).
#[allow(dead_code)]
pub(crate) fn emit_sizeof_expr(expr: &str) -> String {
    format!("sizeof({})", expr)
}

/// Emit `_Alignof(<type>)` per C11 (IDA's `cot_alignof`). We use the C11
/// keyword rather than the GCC `__alignof` extension because it's portable
/// and matches how IDA renders `cot_alignof` in modern profiles.
#[allow(dead_code)]
pub(crate) fn emit_alignof_type(type_str: &str) -> String {
    format!("_Alignof({})", type_str)
}

/// Emit an IDA-style SUBPIECE macro based on output size and byte offset.
///
/// Known patterns map to named macros (LOBYTE, BYTE1, LOWORD, etc.);
/// anything else falls back to `(cast)((x) >> shift)`.
///
/// `input_size` enables size-equality elision: a SUBPIECE that takes the full
/// width of its source at offset 0 is the identity, so we skip the cast.
fn emit_subpiece_macro(src: &str, byte_offset: u64, output_size: u8, input_size: u8) -> String {
    if byte_offset == 0 && output_size == input_size && output_size != 0 {
        return src.to_string();
    }
    match (output_size, byte_offset) {
        (1, 0) => format!("LOBYTE({})", src),
        (1, 1) => format!("BYTE1({})", src),
        (1, 2) => format!("BYTE2({})", src),
        (1, 3) => format!("BYTE3({})", src),
        (2, 0) => format!("LOWORD({})", src),
        (2, 2) => format!("HIWORD({})", src),
        (4, 0) => format!("LODWORD({})", src),
        (4, 4) => format!("HIDWORD({})", src),
        _ => {
            let cast = match output_size {
                1 => "(_BYTE)",
                2 => "(_WORD)",
                4 => "(_DWORD)",
                8 => "(_QWORD)",
                16 => "(_OWORD)",
                _ => "(_DWORD)",
            };
            if byte_offset == 0 {
                format!("{}({})", cast, src)
            } else {
                format!("{}(({}) >> {})", cast, src, byte_offset * 8)
            }
        }
    }
}
fn varnode_location_comment(vn: &Varnode, frame_size: Option<u64>) -> Option<String> {
    match vn.space {
        SpaceId::Register => Some(x86_64_register_name(vn.offset, vn.size).to_string()),
        SpaceId::Stack => {
            let rsp_off = vn.offset;
            match frame_size {
                Some(fs) if fs > rsp_off => {
                    Some(format!("[rsp+{:x}h] [rbp-{:x}h]", rsp_off, fs - rsp_off))
                }
                _ => Some(format!("[rsp+{:x}h]", rsp_off)),
            }
        }
        SpaceId::Unique => Some("temp".to_string()),
        _ => None,
    }
}

/// Map a register-space (offset, size) pair to a human-readable x86-64 name.
///
/// Uses the same layout as `unlace-lift-x86/src/register_file.rs`.
fn x86_64_register_name(offset: u64, size: u8) -> &'static str {
    // Vector register file: base 0x400, stride 32
    const VEC_BASE: u64 = 0x400;
    const VEC_STRIDE: u64 = 32;

    if offset >= VEC_BASE {
        let idx = (offset - VEC_BASE) / VEC_STRIDE;
        if idx <= 15 && (offset - VEC_BASE) % VEC_STRIDE == 0 {
            if size <= 16 {
                return match idx {
                    0 => "xmm0",
                    1 => "xmm1",
                    2 => "xmm2",
                    3 => "xmm3",
                    4 => "xmm4",
                    5 => "xmm5",
                    6 => "xmm6",
                    7 => "xmm7",
                    8 => "xmm8",
                    9 => "xmm9",
                    10 => "xmm10",
                    11 => "xmm11",
                    12 => "xmm12",
                    13 => "xmm13",
                    14 => "xmm14",
                    15 => "xmm15",
                    _ => "xmm?",
                };
            } else {
                return match idx {
                    0 => "ymm0",
                    1 => "ymm1",
                    2 => "ymm2",
                    3 => "ymm3",
                    4 => "ymm4",
                    5 => "ymm5",
                    6 => "ymm6",
                    7 => "ymm7",
                    8 => "ymm8",
                    9 => "ymm9",
                    10 => "ymm10",
                    11 => "ymm11",
                    12 => "ymm12",
                    13 => "ymm13",
                    14 => "ymm14",
                    15 => "ymm15",
                    _ => "ymm?",
                };
            }
        }
    }

    // RFLAGS individual bits at 256+
    match offset {
        256 => return "CF",
        257 => return "PF",
        258 => return "AF",
        259 => return "ZF",
        260 => return "SF",
        261 => return "OF",
        _ => {}
    }

    // General-purpose registers: offset → (8-byte name, 4-byte, 2-byte, 1-byte)
    match (offset, size) {
        (0, 8) => "rax",
        (0, 4) => "eax",
        (0, 2) => "ax",
        (0, 1) => "al",
        (1, 1) => "ah",
        (8, 8) => "rcx",
        (8, 4) => "ecx",
        (8, 2) => "cx",
        (8, 1) => "cl",
        (9, 1) => "ch",
        (16, 8) => "rdx",
        (16, 4) => "edx",
        (16, 2) => "dx",
        (16, 1) => "dl",
        (17, 1) => "dh",
        (24, 8) => "rbx",
        (24, 4) => "ebx",
        (24, 2) => "bx",
        (24, 1) => "bl",
        (25, 1) => "bh",
        (32, 8) => "rsp",
        (32, 4) => "esp",
        (32, 2) => "sp",
        (32, 1) => "spl",
        (40, 8) => "rbp",
        (40, 4) => "ebp",
        (40, 2) => "bp",
        (40, 1) => "bpl",
        (48, 8) => "rsi",
        (48, 4) => "esi",
        (48, 2) => "si",
        (48, 1) => "sil",
        (56, 8) => "rdi",
        (56, 4) => "edi",
        (56, 2) => "di",
        (56, 1) => "dil",
        (64, 8) => "r8",
        (64, 4) => "r8d",
        (64, 2) => "r8w",
        (64, 1) => "r8b",
        (72, 8) => "r9",
        (72, 4) => "r9d",
        (72, 2) => "r9w",
        (72, 1) => "r9b",
        (80, 8) => "r10",
        (80, 4) => "r10d",
        (80, 2) => "r10w",
        (80, 1) => "r10b",
        (88, 8) => "r11",
        (88, 4) => "r11d",
        (88, 2) => "r11w",
        (88, 1) => "r11b",
        (96, 8) => "r12",
        (96, 4) => "r12d",
        (96, 2) => "r12w",
        (96, 1) => "r12b",
        (104, 8) => "r13",
        (104, 4) => "r13d",
        (104, 2) => "r13w",
        (104, 1) => "r13b",
        (112, 8) => "r14",
        (112, 4) => "r14d",
        (112, 2) => "r14w",
        (112, 1) => "r14b",
        (120, 8) => "r15",
        (120, 4) => "r15d",
        (120, 2) => "r15w",
        (120, 1) => "r15b",
        (128, 8) => "rip",
        (128, 4) => "eip",
        _ => "reg?",
    }
}

// ---------------------------------------------------------------------------

/// Emit `depth` indent steps of `tab_width` spaces each.
///
/// Replaces the previous hard-coded `"    "` literal so callers can drive
/// the indent step from [`PrintCtx::config`] (and ultimately from the
/// `UNLACE_TAB_WIDTH` env var or IDA's `module_data + 592` indent
/// configuration). With `tab_width = 4` (the default) output remains
/// byte-identical to the pre-config behaviour.
fn indent(depth: usize, tab_width: usize, out: &mut String) {
    for _ in 0..(depth * tab_width) {
        out.push(' ');
    }
}

fn type_for_size(size: u8, signed: bool) -> &'static str {
    if signed {
        match size {
            1 => "__int8",
            2 => "__int16",
            4 => "__int32",
            8 => "__int64",
            _ => "__int32",
        }
    } else {
        match size {
            1 => "unsigned __int8",
            2 => "unsigned __int16",
            4 => "unsigned __int32",
            8 => "unsigned __int64",
            _ => "unsigned __int32",
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
fn is_redundant_widen(op: IrOp, input: &Varnode, output_size: u8) -> bool {
    if input.size == output_size {
        return true;
    }
    if op == IrOp::IntZext && input.size == 4 && output_size == 8 && input.space != SpaceId::Const {
        return true;
    }
    false
}

/// `(type)(x)` is redundant when the operand already has the target width.
fn is_redundant_same_size_cast(input: &Varnode, output_size: u8) -> bool {
    input.size == output_size
}

/// IDA-style pointer cast for memory dereference based on access size.
///
/// Returns e.g. `_QWORD *` for 8-byte access, `_DWORD *` for 4-byte, etc.
fn ida_ptr_type(size: u8) -> &'static str {
    match size {
        1 => "_BYTE *",
        2 => "_WORD *",
        4 => "_DWORD *",
        8 => "_QWORD *",
        16 => "_OWORD *",
        _ => "_QWORD *",
    }
}

fn calling_convention_annotation(convention: &str) -> Option<&'static str> {
    match convention {
        "Microsoft x64" => Some("__fastcall"),
        "AArch64 AAPCS64" => Some("__aapcs"),
        "cdecl" => Some("__cdecl"),
        "stdcall" => Some("__stdcall"),
        "thiscall" => Some("__thiscall"),
        _ => None,
    }
}

/// IDA-style typedefs emitted at the top of decompiled output.
const IDA_TYPEDEFS: &str = "\
typedef unsigned char _BYTE;
typedef unsigned char _BOOL; typedef unsigned short _WORD; typedef unsigned int _DWORD; typedef unsigned long long _QWORD;
typedef struct _OWORD { unsigned long long lo; unsigned long long hi; } _OWORD; typedef signed char __int8; typedef signed short __int16; typedef signed int __int32; typedef signed long long __int64;
#define LOBYTE(x)  ((_BYTE)(x))
#define BYTE1(x)   ((_BYTE)((x) >> 8))
#define BYTE2(x)   ((_BYTE)((x) >> 16))
#define BYTE3(x)   ((_BYTE)((x) >> 24))
#define LOWORD(x)  ((_WORD)(x))
#define HIWORD(x)  ((_WORD)((x) >> 16))
#define LODWORD(x) ((_DWORD)(x))
#define HIDWORD(x) ((_DWORD)((x) >> 32))
#define __OFADD__(a, b) ((((a) ^ (b) ^ -1) & ((a) ^ ((a) + (b)))) < 0)
#define __OFSUB__(a, b) ((((a) ^ (b)) & ((a) ^ ((a) - (b)))) < 0)
#define MEMORY ((volatile unsigned char *)0)
#define JUMPOUT(addr) ((void)(addr))
// FS-segment TLS reads (stack canary, GLIBC TCB).
_QWORD __readfsqword(unsigned int offset);
_DWORD __readfsdword(unsigned int offset);
";

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};
    use unlace_struct::{HirFunction, HirNode, LabelId, SwitchCase};

    use super::print_c;

    fn make_func(name: &str, body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: name.to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        }
    }

    fn reg(offset: u64, size: u8) -> Varnode {
        Varnode::reg(offset, size)
    }

    fn con(value: u64, size: u8) -> Varnode {
        Varnode::constant(value, size)
    }

    fn sv(offset: u64, size: u8) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, size),
            version: 0,
        }
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
        assert!(output.contains("return result;"), "return: {output}");
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
        assert!(output.contains("v1--;"), "body: {output}");
        assert!(output.contains("return;"), "return: {output}");
    }

    /// `merged_names` from [`unlace_passes::VariableMergePass`] should drive
    /// the C printer's variable naming, overriding the default `vN` allocator.
    /// Two distinct base [`Varnode`]s coalesced into one cluster must appear
    /// under the same source-level name.
    #[test]
    fn test_merged_names_drives_naming() {
        // r0 = r8 + 1; return r0;  → `r0` will end up renderable.
        // We seed merged_names so that r0 (sv version 0) and r8 (sv version 0)
        // both map to the same `vCOAL` name.
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

        let mut func = make_func("merge_test", body);
        let r0_sv = SsaVarnode {
            base: r0,
            version: 0,
        };
        let r8_sv = SsaVarnode {
            base: r8,
            version: 0,
        };
        func.merged_names.insert(r0_sv, "vCOAL".to_string());
        func.merged_names.insert(r8_sv, "vCOAL".to_string());

        let output = print_c(&func);

        // Either `vCOAL` shows up directly OR a higher-priority role override
        // (e.g. `result` for the return value) replaces it.  We only assert
        // that no leaked `v1` / `v2` fallback names appear, which would mean
        // the merged_names path was bypassed entirely.
        let banned = [" v1 ", " v2 ", "v1 = ", "v2 = ", "(v1 ", "(v2 "];
        for needle in banned {
            assert!(
                !output.contains(needle),
                "fallback name {needle:?} leaked despite merged_names override: {output}",
            );
        }

        // The merged name should appear somewhere in the rendered body.
        assert!(
            output.contains("vCOAL"),
            "merged name `vCOAL` should appear in output: {output}",
        );
    }

    /// When `merged_names` is empty (pass not run) the printer falls back to
    /// its native `vN` allocator — regression guard for the new code path.
    #[test]
    fn test_empty_merged_names_falls_back_to_vN() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000)),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("fallback", body);
        // merged_names is empty in make_func.
        let output = print_c(&func);

        // result is the canonical name for a returned value (Result role).
        assert!(
            output.contains("result"),
            "fallback path should still produce a Result-role name: {output}",
        );
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
        assert_eq!(
            super::c_type(&PrimitiveType::UnsignedInt(1)),
            "unsigned char"
        );
        assert_eq!(
            super::c_type(&PrimitiveType::UnsignedInt(4)),
            "unsigned int"
        );
        assert_eq!(super::c_type(&PrimitiveType::Float), "float");
        assert_eq!(super::c_type(&PrimitiveType::Double), "double");
        assert_eq!(super::c_type(&PrimitiveType::Ptr), "void *");
        assert_eq!(super::c_type(&PrimitiveType::Unknown), "int");
    }

    #[test]
    fn test_oword_type_for_128_bit_values() {
        assert_eq!(super::c_type(&PrimitiveType::UnsignedInt(16)), "__m128i");
        assert_eq!(super::c_type(&PrimitiveType::Int(16)), "__m128i");
        assert_eq!(super::ida_ptr_type(16), "_OWORD *");
    }

    #[test]
    fn test_branchind_emits_jumpout() {
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Branchind,
                smallvec![reg(0, 8)],
                0x1000,
            )),
            HirNode::Return(None),
        ];
        let func = make_func("indirect_jump", body);
        let output = print_c(&func);

        assert!(
            output.contains("JUMPOUT("),
            "unresolved indirect branch must emit JUMPOUT(): {output}"
        );
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
            .find(|l| l.contains("v1++;"))
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
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = print_c(&func);
        assert!(
            output.contains("void * with_params(__int32 a, void * b)"),
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
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000)),
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

        assert!(
            output.contains("int result;"),
            "result declaration expected: {output}",
        );

        assert!(
            output.contains("result = 1 + 2 + 3;") || output.contains("return 1 + 2 + 3;"),
            "folded expression expected: {output}",
        );

        assert!(
            output.contains("return result;") || output.contains("return 1 + 2 + 3;"),
            "return expected: {output}",
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
            ternary_line.contains(" = ")
                && ternary_line.contains(" ? ")
                && ternary_line.contains(" : "),
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

    #[test]
    fn test_struct_field_access() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, StructField, StructType};
        let r0 = reg(0, 8);
        let r8 = reg(8, 4);
        let c8 = con(8, 8);
        let space = con(0, 8);
        let addr_add = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 8),
            smallvec![r0, c8],
            0x1000,
        );
        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, Varnode::unique(0, 8)],
            0x1004,
        );
        let body = vec![
            HirNode::Statement(addr_add),
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];
        let func = make_func("test_field", body);
        let mut structs = BTreeMap::new();
        structs.insert(
            "Rect".to_string(),
            StructType {
                name: "Rect".to_string(),
                size: 16,
                fields: vec![
                    StructField {
                        name: "origin".to_string(),
                        offset: 0,
                        size: 8,
                        type_name: "Point".to_string(),
                    },
                    StructField {
                        name: "size".to_string(),
                        offset: 8,
                        size: 4,
                        type_name: "int".to_string(),
                    },
                ],
            },
        );
        let dwarf = DwarfInfo {
            functions: BTreeMap::new(),
            source_map: BTreeMap::new(),
            structs,
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };
        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(output.contains("->size"), "should contain ->size: {output}");
    }
    #[test]
    fn test_struct_field_store_writes_arrow_syntax() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, StructField, StructType};

        let r0 = reg(0, 8);
        let r8 = reg(8, 4);
        let c4 = con(4, 8);
        let space = con(0, 8);
        let addr_add = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 8),
            smallvec![r0, c4],
            0x1000,
        );
        let store = IrInsn::without_output(
            IrOp::Store,
            smallvec![space, Varnode::unique(0, 8), r8],
            0x1004,
        );
        let body = vec![
            HirNode::Statement(addr_add),
            HirNode::Statement(store),
            HirNode::Return(None),
        ];
        let func = make_func("test_store_field", body);

        let mut structs = BTreeMap::new();
        structs.insert(
            "Point".to_string(),
            StructType {
                name: "Point".to_string(),
                size: 8,
                fields: vec![
                    StructField {
                        name: "x".to_string(),
                        offset: 0,
                        size: 4,
                        type_name: "int".to_string(),
                    },
                    StructField {
                        name: "y".to_string(),
                        offset: 4,
                        size: 4,
                        type_name: "int".to_string(),
                    },
                ],
            },
        );
        let dwarf = DwarfInfo {
            functions: BTreeMap::new(),
            source_map: BTreeMap::new(),
            structs,
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(
            output.contains("->y"),
            "STORE at offset 4 should resolve to ->y field: {output}",
        );
    }

    #[test]
    fn test_struct_field_no_match() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, StructField, StructType};
        let r0 = reg(0, 8);
        let r8 = reg(8, 4);
        let c48 = con(48, 8);
        let space = con(0, 8);
        let addr_add = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 8),
            smallvec![r0, c48],
            0x1000,
        );
        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, Varnode::unique(0, 8)],
            0x1004,
        );
        let body = vec![
            HirNode::Statement(addr_add),
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];
        let func = make_func("test_no_field", body);
        let mut structs = BTreeMap::new();
        structs.insert(
            "Point".to_string(),
            StructType {
                name: "Point".to_string(),
                size: 8,
                fields: vec![
                    StructField {
                        name: "x".to_string(),
                        offset: 0,
                        size: 4,
                        type_name: "int".to_string(),
                    },
                    StructField {
                        name: "y".to_string(),
                        offset: 4,
                        size: 4,
                        type_name: "int".to_string(),
                    },
                ],
            },
        );
        let dwarf = DwarfInfo {
            functions: BTreeMap::new(),
            source_map: BTreeMap::new(),
            structs,
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };
        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(!output.contains("->"), "should NOT contain ->: {output}");
        // With array subscript recovery: INT_ADD(base, 48) with 4-byte load → base[12]
        assert!(
            output.contains("v1[12]"),
            "should recover array subscript v1[12]: {output}"
        );
    }

    #[test]
    fn test_composite_var_types_struct_field_access() {
        use unlace_ir::types::{StructFieldType, Type};

        let r0 = reg(0, 8);
        let r8 = reg(8, 4);
        let c16 = con(16, 8);
        let space = con(0, 8);

        let addr_add = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 8),
            smallvec![r0, c16],
            0x1000,
        );
        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, Varnode::unique(0, 8)],
            0x1004,
        );
        let body = vec![
            HirNode::Statement(addr_add),
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];

        let mut func = make_func("test_composite_field", body);

        let base_sv = SsaVarnode {
            base: r0,
            version: 0,
        };
        func.composite_var_types.insert(
            base_sv,
            Type::Struct {
                name: "MyStruct".into(),
                fields: vec![
                    StructFieldType {
                        name: "alpha".into(),
                        ty: Type::int(8),
                        offset: 0,
                    },
                    StructFieldType {
                        name: "beta".into(),
                        ty: Type::int(4),
                        offset: 16,
                    },
                ],
            },
        );

        let output = super::print_c(&func);
        assert!(
            output.contains("->beta"),
            "should emit ->beta for struct field at offset 16: {output}"
        );
    }

    #[test]
    fn test_composite_var_types_synthetic_field_name() {
        use unlace_ir::types::{StructFieldType, Type};

        let r0 = reg(0, 8);
        let r8 = reg(8, 4);
        let c24 = con(24, 8);
        let space = con(0, 8);

        let addr_add = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0, 8),
            smallvec![r0, c24],
            0x1000,
        );
        let load = IrInsn::with_output(
            IrOp::Load,
            r8,
            smallvec![space, Varnode::unique(0, 8)],
            0x1004,
        );
        let body = vec![
            HirNode::Statement(addr_add),
            HirNode::Statement(load),
            HirNode::Return(Some(sv(8, 4))),
        ];

        let mut func = make_func("test_synthetic_field", body);

        let base_sv = SsaVarnode {
            base: r0,
            version: 0,
        };
        func.composite_var_types.insert(
            base_sv,
            Type::Struct {
                name: "Foo".into(),
                fields: vec![StructFieldType {
                    name: "first".into(),
                    ty: Type::int(8),
                    offset: 0,
                }],
            },
        );

        let output = super::print_c(&func);
        assert!(
            output.contains("->field_18"),
            "should emit synthetic ->field_18 for unknown offset 24 (0x18): {output}"
        );
    }

    #[test]
    fn test_dwarf_function_name_used() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1000", body);

        let mut functions = BTreeMap::new();
        functions.insert(
            0x1000,
            FunctionDebugInfo {
                name: "compute".to_string(),
                linkage_name: None,
                low_pc: 0x1000,
                high_pc: Some(0x1020),
                params: vec![],
                return_type: Some("int".to_string()),
                decl: None,
                locals: vec![],
            },
        );
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(
            output.contains("compute("),
            "should use DWARF name 'compute': {output}",
        );
        assert!(
            !output.contains("sub_1000"),
            "should NOT contain fallback name: {output}",
        );
    }

    #[test]
    fn test_dwarf_param_names_used() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo, ParameterInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1000", body);

        let mut functions = BTreeMap::new();
        functions.insert(
            0x1000,
            FunctionDebugInfo {
                name: "add".to_string(),
                linkage_name: None,
                low_pc: 0x1000,
                high_pc: Some(0x1020),
                params: vec![
                    ParameterInfo {
                        name: Some("a".to_string()),
                        type_name: Some("int".to_string()),
                    },
                    ParameterInfo {
                        name: Some("b".to_string()),
                        type_name: Some("int".to_string()),
                    },
                ],
                return_type: Some("int".to_string()),
                decl: None,
                locals: vec![],
            },
        );
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(
            output.contains("int add(int a, int b)"),
            "should use DWARF param names/types: {output}",
        );
    }

    #[test]
    fn test_dwarf_param_names_override_inferred() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo, ParameterInfo};

        let body = vec![HirNode::Return(None)];
        let func = HirFunction {
            name: "sub_2000".to_string(),
            params: vec![
                ("a1".to_string(), PrimitiveType::Int(8)),
                ("a2".to_string(), PrimitiveType::Int(8)),
            ],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x2000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let mut functions = BTreeMap::new();
        functions.insert(
            0x2000,
            FunctionDebugInfo {
                name: "process".to_string(),
                linkage_name: None,
                low_pc: 0x2000,
                high_pc: Some(0x2020),
                params: vec![
                    ParameterInfo {
                        name: Some("count".to_string()),
                        type_name: Some("int".to_string()),
                    },
                    ParameterInfo {
                        name: Some("buf".to_string()),
                        type_name: Some("char *".to_string()),
                    },
                ],
                return_type: Some("int".to_string()),
                decl: None,
                locals: vec![],
            },
        );
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(
            output.contains("int process(int count, char * buf)"),
            "DWARF names must override inferred a1/a2: {output}",
        );
        assert!(
            !output.contains("__int64 a1"),
            "must not emit inferred '__int64 a1' parameter: {output}",
        );
    }

    #[test]
    fn test_dwarf_return_type_used() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1000", body);

        let mut functions = BTreeMap::new();
        functions.insert(
            0x1000,
            FunctionDebugInfo {
                name: "get_value".to_string(),
                linkage_name: None,
                low_pc: 0x1000,
                high_pc: Some(0x1020),
                params: vec![],
                return_type: Some("long".to_string()),
                decl: None,
                locals: vec![],
            },
        );
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_with_dwarf(&func, Some(&dwarf));
        assert!(
            output.contains("long get_value("),
            "should use DWARF return type 'long': {output}",
        );
    }

    #[test]
    fn test_noreturn_annotation_emitted() {
        let body = vec![HirNode::Return(None)];
        let func = HirFunction {
            name: "sub_f5300".to_string(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body,
            addr: 0xf5300,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: true,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = super::print_c(&func);
        assert!(
            output.contains("void __noreturn sub_f5300("),
            "noreturn=true must emit '__noreturn' between return type and name: {output}",
        );
    }

    #[test]
    fn test_noreturn_not_emitted_when_false() {
        let body = vec![HirNode::Return(None)];
        let func = HirFunction {
            name: "sub_1000".to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = super::print_c(&func);
        assert!(
            !output.contains("__noreturn"),
            "noreturn=false must not emit '__noreturn': {output}",
        );
    }

    #[test]
    fn test_no_dwarf_falls_back() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1000", body);

        let output = super::print_c(&func);
        assert!(
            output.contains("__int32 sub_1000(void)"),
            "should use fallback sub_NNNN naming: {output}",
        );
    }

    // -------------------------------------------------------------------
    // IDA-style type cast tests
    // -------------------------------------------------------------------

    #[test]
    fn test_type_casts_qword_load() {
        let space = con(0, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 8);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

        let func = make_func("qword_load", body);
        let output = print_c(&func);

        assert!(
            output.contains("*(_QWORD *)"),
            "8-byte load should use _QWORD *: {output}",
        );
    }

    #[test]
    fn test_type_casts_dword_load() {
        let space = con(0, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 4);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

        let func = make_func("dword_load", body);
        let output = print_c(&func);

        assert!(
            output.contains("*(_DWORD *)"),
            "4-byte load should use _DWORD *: {output}",
        );
    }

    #[test]
    fn test_type_casts_byte_load() {
        let space = con(0, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 1);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 1)))];

        let func = make_func("byte_load", body);
        let output = print_c(&func);

        assert!(
            output.contains("*(_BYTE *)"),
            "1-byte load should use _BYTE *: {output}",
        );
    }

    #[test]
    fn test_type_casts_word_load() {
        let space = con(0, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 2);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 2)))];

        let func = make_func("word_load", body);
        let output = print_c(&func);

        assert!(
            output.contains("*(_WORD *)"),
            "2-byte load should use _WORD *: {output}",
        );
    }

    #[test]
    fn test_type_casts_typedefs_in_output() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("typedef_test", body);
        let output = print_c(&func);

        assert!(
            output.contains("typedef unsigned char _BYTE;"),
            "should contain _BYTE typedef: {output}",
        );
        assert!(
            output.contains("typedef unsigned short _WORD;"),
            "should contain _WORD typedef: {output}",
        );
        assert!(
            output.contains("typedef unsigned int _DWORD;"),
            "should contain _DWORD typedef: {output}",
        );
        assert!(
            output.contains("typedef unsigned long long _QWORD;"),
            "should contain _QWORD typedef: {output}",
        );
        assert!(
            output.contains("typedef signed char __int8;"),
            "should contain __int8 typedef: {output}",
        );
        assert!(
            output.contains("typedef signed short __int16;"),
            "should contain __int16 typedef: {output}",
        );
        assert!(
            output.contains("typedef signed int __int32;"),
            "should contain __int32 typedef: {output}",
        );
        assert!(
            output.contains("typedef signed long long __int64;"),
            "should contain __int64 typedef: {output}",
        );

        let typedef_pos = output.find("typedef").unwrap();
        let func_pos = output.find("typedef_test").unwrap();
        assert!(
            typedef_pos < func_pos,
            "typedefs should appear before function: {output}",
        );
    }

    #[test]
    fn test_type_casts_signed_int64_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 8);

        let sext = IrInsn::with_output(IrOp::IntSext, r8, smallvec![r0], 0x1000);
        let body = vec![HirNode::Statement(sext), HirNode::Return(Some(sv(8, 8)))];

        let func = make_func("signed_cast", body);
        let output = print_c(&func);

        assert!(
            output.contains("(__int64)"),
            "signed extension to 8 bytes should use __int64: {output}",
        );
    }

    #[test]
    fn test_type_casts_unsigned_zext() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 8);

        let zext = IrInsn::with_output(IrOp::IntZext, r8, smallvec![r0], 0x1000);
        let body = vec![HirNode::Statement(zext), HirNode::Return(Some(sv(8, 8)))];

        let func = make_func("unsigned_cast", body);
        let output = print_c(&func);

        assert!(
            !output.contains("(unsigned __int64)"),
            "i32 -> i64 IntZext should be elided as implicit C widening: {output}",
        );
    }

    #[test]
    fn test_type_casts_same_size_widen_elided() {
        let r0 = reg(0, 8);
        let r8 = reg(8, 8);

        let zext = IrInsn::with_output(IrOp::IntZext, r8, smallvec![r0], 0x1000);
        let body = vec![HirNode::Statement(zext), HirNode::Return(Some(sv(8, 8)))];

        let func = make_func("same_size_widen", body);
        let output = print_c(&func);

        assert!(
            !output.contains("(unsigned __int64)") && !output.contains("(__int64)"),
            "same-size IntZext must not emit a cast: {output}",
        );
    }

    #[test]
    fn test_type_casts_compiles() {
        let gcc_available = std::process::Command::new("gcc")
            .arg("--version")
            .output()
            .is_ok();
        if !gcc_available {
            eprintln!("gcc not found, skipping test_type_casts_compiles");
            return;
        }

        let space = con(0, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 8);
        let r16 = reg(16, 4);
        let r24 = reg(24, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                r8,
                smallvec![space, r0],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                r16,
                smallvec![space, r0],
                0x1004,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                r24,
                smallvec![space, r0],
                0x1008,
            )),
            HirNode::Return(Some(sv(8, 8))),
        ];

        let func = make_func("type_cast_compile", body);
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
            "gcc -fsyntax-only failed on type casts:\n--- source ---\n{}\n--- stderr ---\n{}",
            source,
            String::from_utf8_lossy(&output.stderr),
        );
    }

    #[test]
    fn test_negative_const_8byte() {
        let r0 = reg(0, 8);
        let neg8 = con(0xffff_ffff_ffff_fff8, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, neg8],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: Varnode::reg(0, 8),
                version: 0,
            })),
        ];

        let func = make_func("neg8", body);
        let output = print_c(&func);

        assert!(
            output.contains("+= -8"),
            "8-byte 0xfffffffffffffff8 in INT_ADD should render as `+= -8`: {output}",
        );
        assert!(
            !output.contains("0xfffffffffffffff8"),
            "should NOT contain raw hex: {output}",
        );
    }

    #[test]
    fn test_negative_const_4byte() {
        let r0 = reg(0, 4);
        let neg4 = con(0xfffffffc, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, neg4],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: Varnode::reg(0, 4),
                version: 0,
            })),
        ];

        let func = make_func("neg4", body);
        let output = print_c(&func);

        assert!(
            output.contains("+= -4"),
            "4-byte 0xfffffffc in INT_ADD should render as `+= -4`: {output}",
        );
    }

    #[test]
    fn test_negative_const_copy_minus1() {
        let r0 = reg(0, 4);
        let neg1 = con(0xffffffff, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![neg1], 0x1000)),
            HirNode::Return(Some(SsaVarnode {
                base: Varnode::reg(0, 4),
                version: 0,
            })),
        ];

        let func = make_func("neg1_copy", body);
        let output = print_c(&func);

        assert!(
            output.contains("-1"),
            "COPY of 0xffffffff (4-byte) should render as -1: {output}",
        );
    }

    #[test]
    fn test_negative_const_small_unsigned_kept() {
        assert_eq!(
            super::format_constant(0xFF, 1),
            "0xffULL",
            "0xFF in 1-byte should stay hex (byte-sized constants are not negated)",
        );
    }

    // -------------------------------------------------------------------
    // For-loop emission tests (P3-7)
    // -------------------------------------------------------------------

    #[test]
    fn test_for_loop_simple_emit() {
        let i = reg(0, 4);
        let zero = con(0, 4);
        let one = con(1, 4);

        let body = vec![
            HirNode::For {
                init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000)),
                cond: sv(0, 4),
                update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1018),
                body: vec![],
            },
            HirNode::Return(None),
        ];

        let func = make_func("for_simple", body);
        let output = print_c(&func);

        assert!(output.contains("for ("), "should contain 'for (': {output}",);
        assert!(
            output.contains("i++"),
            "increment should be rendered as i++ (loop counter renamed): {output}",
        );
        assert!(
            !output.contains("while ("),
            "should NOT emit a while loop: {output}",
        );
    }

    #[test]
    fn test_for_loop_compound_step_emit() {
        let i = reg(0, 4);
        let zero = con(0, 4);
        let two = con(2, 4);

        let body = vec![
            HirNode::For {
                init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000)),
                cond: sv(0, 4),
                update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, two], 0x1018),
                body: vec![],
            },
            HirNode::Return(None),
        ];

        let func = make_func("for_step2", body);
        let output = print_c(&func);

        assert!(
            output.contains("i += 2"),
            "step-2 should render as i += 2 (loop counter renamed): {output}",
        );
    }

    #[test]
    fn test_for_loop_nested_counter_naming() {
        let outer = reg(0, 4);
        let inner = reg(8, 4);
        let zero = con(0, 4);
        let one = con(1, 4);

        let body = vec![
            HirNode::For {
                init: Some(IrInsn::with_output(
                    IrOp::Copy,
                    outer,
                    smallvec![zero],
                    0x1000,
                )),
                cond: SsaVarnode {
                    base: outer,
                    version: 0,
                },
                update: IrInsn::with_output(IrOp::IntAdd, outer, smallvec![outer, one], 0x1020),
                body: vec![HirNode::For {
                    init: Some(IrInsn::with_output(
                        IrOp::Copy,
                        inner,
                        smallvec![zero],
                        0x1004,
                    )),
                    cond: SsaVarnode {
                        base: inner,
                        version: 0,
                    },
                    update: IrInsn::with_output(IrOp::IntAdd, inner, smallvec![inner, one], 0x1018),
                    body: vec![],
                }],
            },
            HirNode::Return(None),
        ];

        let func = make_func("nested_for", body);
        let output = print_c(&func);

        assert!(
            output.contains("i++"),
            "outer counter should be `i`: {output}",
        );
        assert!(
            output.contains("j++"),
            "inner counter should be `j`: {output}",
        );
        assert!(
            !output.contains("v1") && !output.contains("v2"),
            "loop counters should be renamed away from v1/v2: {output}",
        );
    }

    #[test]
    fn test_for_loop_decrement_emit() {
        let i = reg(0, 4);
        let n = reg(8, 4);
        let one = con(1, 4);

        let body = vec![
            HirNode::For {
                init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![n], 0x1000)),
                cond: sv(0, 4),
                update: IrInsn::with_output(IrOp::IntSub, i, smallvec![i, one], 0x1018),
                body: vec![],
            },
            HirNode::Return(None),
        ];

        let func = make_func("for_decrement", body);
        let output = print_c(&func);

        assert!(
            output.contains("--)"),
            "decrement should render as `<var>--`: {output}",
        );
        assert!(output.contains("for ("), "should be a for-loop: {output}",);
    }

    #[test]
    fn test_for_loop_compiles() {
        let gcc_available = std::process::Command::new("gcc")
            .arg("--version")
            .output()
            .is_ok();
        if !gcc_available {
            eprintln!("gcc not found, skipping test_for_loop_compiles");
            return;
        }

        let i = reg(0, 4);
        let acc = reg(8, 4);
        let zero = con(0, 4);
        let one = con(1, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                acc,
                smallvec![zero],
                0x0FFC,
            )),
            HirNode::For {
                init: Some(IrInsn::with_output(IrOp::Copy, i, smallvec![zero], 0x1000)),
                cond: sv(0, 4),
                update: IrInsn::with_output(IrOp::IntAdd, i, smallvec![i, one], 0x1018),
                body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    acc,
                    smallvec![acc, one],
                    0x1014,
                ))],
            },
            HirNode::Return(Some(SsaVarnode {
                base: acc,
                version: 1,
            })),
        ];

        let func = make_func("for_compile", body);
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
            "gcc -fsyntax-only failed on for-loop:\n--- source ---\n{}\n--- stderr ---\n{}",
            source,
            String::from_utf8_lossy(&output.stderr),
        );
    }

    #[test]
    fn test_negative_const_comparison() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 1);
        let neg1 = con(0xffffffff, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntEqual,
                r8,
                smallvec![r0, neg1],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: Varnode::reg(8, 1),
                version: 0,
            })),
        ];

        let func = make_func("cmp_neg1", body);
        let output = print_c(&func);

        assert!(
            output.contains("== -1"),
            "comparison with 0xffffffff (4-byte) should render as `== -1`: {output}",
        );
    }

    // ── P3-16: Try/catch C output tests ──

    #[test]
    fn test_try_catch_c_output() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::TryCatch {
                try_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    r0,
                    smallvec![r0, c1],
                    0x1000,
                ))],
                catch_arms: vec![(
                    unlace_ir::types::Type::Primitive(PrimitiveType::Unknown),
                    vec![HirNode::Statement(IrInsn::with_output(
                        IrOp::Copy,
                        r8,
                        smallvec![con(0, 4)],
                        0x1010,
                    ))],
                )],
            },
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("try_catch_func", body);
        let output = print_c(&func);

        assert!(output.contains("__try {"), "__try: {output}");
        assert!(output.contains("} __except {"), "__except: {output}");
    }

    #[test]
    fn test_try_catch_no_landing_pads_no_output() {
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

        let func = make_func("no_try_catch", body);
        let output = print_c(&func);

        assert!(
            !output.contains("__try"),
            "no TryCatch node → no __try: {output}"
        );
        assert!(
            !output.contains("__except"),
            "no TryCatch node → no __except: {output}"
        );
    }

    #[test]
    fn test_try_catch_nested_indentation() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::TryCatch {
                try_body: vec![HirNode::Statement(IrInsn::with_output(
                    IrOp::IntAdd,
                    r8,
                    smallvec![r0, c1],
                    0x1000,
                ))],
                catch_arms: vec![(
                    unlace_ir::types::Type::Primitive(PrimitiveType::Unknown),
                    vec![HirNode::Statement(IrInsn::with_output(
                        IrOp::IntAdd,
                        r0,
                        smallvec![r0, c1],
                        0x1010,
                    ))],
                )],
            },
            HirNode::Return(Some(sv(8, 4))),
        ];

        let func = make_func("try_indent", body);
        let output = print_c(&func);

        let try_line = output
            .lines()
            .find(|l| l.contains("__try"))
            .expect("__try line");
        assert!(
            try_line.starts_with("    __try"),
            "try should be indented one level: {try_line:?}",
        );

        let except_line = output
            .lines()
            .find(|l| l.contains("__except"))
            .expect("__except line");
        assert!(
            except_line.starts_with("    }"),
            "except should be at depth 1: {except_line:?}",
        );
    }

    #[test]
    fn test_boolxor_emits_caret() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::BoolXor,
                r0,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("boolxor", body);
        let output = print_c(&func);

        assert!(output.contains("^"), "BoolXor should emit ^: {output}");
        assert!(!output.contains("!="), "BoolXor must not emit !=: {output}",);
    }

    #[test]
    fn test_intnegate_emits_tilde() {
        let r0 = reg(0, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntNegate,
                r0,
                smallvec![r0],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("intnegate", body);
        let output = print_c(&func);

        assert!(output.contains("~"), "IntNegate should emit ~: {output}");
        let rhs = output
            .lines()
            .find(|l| l.contains("~"))
            .expect("line with ~");
        assert!(!rhs.contains("!="), "should not contain !=: {rhs}");
    }

    #[test]
    fn test_boolnegate_emits_bang() {
        let r0 = reg(0, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::BoolNegate,
                r0,
                smallvec![r0],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("boolnegate", body);
        let output = print_c(&func);

        assert!(output.contains("!"), "BoolNegate should emit !: {output}");
        assert!(
            !output.contains("~"),
            "BoolNegate must not emit ~: {output}",
        );
    }

    #[test]
    fn test_subpiece_lobyte() {
        let src = reg(0, 8);
        let out = reg(16, 1);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Subpiece,
                out,
                smallvec![src, con(0, 4)],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("lobyte", body);
        let output = print_c(&func);
        assert!(
            output.contains("LOBYTE("),
            "SUBPIECE(x,0) size=1 should emit LOBYTE: {output}"
        );
    }

    #[test]
    fn test_subpiece_byte1() {
        let src = reg(0, 8);
        let out = reg(16, 1);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Subpiece,
                out,
                smallvec![src, con(1, 4)],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("byte1", body);
        let output = print_c(&func);
        assert!(
            output.contains("BYTE1("),
            "SUBPIECE(x,1) size=1 should emit BYTE1: {output}"
        );
    }

    #[test]
    fn test_subpiece_lodword() {
        let src = reg(0, 8);
        let out = reg(16, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Subpiece,
                out,
                smallvec![src, con(0, 4)],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("lodword", body);
        let output = print_c(&func);
        assert!(
            output.contains("LODWORD("),
            "SUBPIECE(x,0) size=4 should emit LODWORD: {output}"
        );
    }

    #[test]
    fn test_subpiece_hidword() {
        let src = reg(0, 8);
        let out = reg(16, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Subpiece,
                out,
                smallvec![src, con(4, 4)],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("hidword", body);
        let output = print_c(&func);
        assert!(
            output.contains("HIDWORD("),
            "SUBPIECE(x,4) size=4 should emit HIDWORD: {output}"
        );
    }

    #[test]
    fn test_subpiece_macros_in_prelude() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("prelude_test", body);
        let output = print_c(&func);
        assert!(
            output.contains("#define LOBYTE"),
            "prelude should contain LOBYTE macro: {output}"
        );
        assert!(
            output.contains("#define BYTE1"),
            "prelude should contain BYTE1 macro: {output}"
        );
        assert!(
            output.contains("#define BYTE2"),
            "prelude should contain BYTE2 macro: {output}"
        );
        assert!(
            output.contains("#define BYTE3"),
            "prelude should contain BYTE3 macro: {output}"
        );
        assert!(
            output.contains("#define LOWORD"),
            "prelude should contain LOWORD macro: {output}"
        );
        assert!(
            output.contains("#define HIWORD"),
            "prelude should contain HIWORD macro: {output}"
        );
        assert!(
            output.contains("#define LODWORD"),
            "prelude should contain LODWORD macro: {output}"
        );
        assert!(
            output.contains("#define HIDWORD"),
            "prelude should contain HIDWORD macro: {output}"
        );
    }

    // -------------------------------------------------------------------
    // P4-6: Expanded compound assignment tests
    // -------------------------------------------------------------------

    #[test]
    fn test_compound_mul_assign() {
        let v = reg(0, 4);
        let c3 = con(3, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntMult,
                v,
                smallvec![v, c3],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("mul_assign", body);
        let output = print_c(&func);
        assert!(
            output.contains("result *= 3;"),
            "should emit result *= 3: {output}"
        );
    }

    #[test]
    fn test_compound_shl_assign() {
        let v = reg(0, 4);
        let c2 = con(2, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntLeft,
                v,
                smallvec![v, c2],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("shl_assign", body);
        let output = print_c(&func);
        assert!(
            output.contains("result <<= 2;"),
            "should emit result <<= 2: {output}"
        );
    }

    #[test]
    fn test_compound_and_assign() {
        let v = reg(0, 4);
        let mask = reg(8, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAnd,
                v,
                smallvec![v, mask],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("and_assign", body);
        let output = print_c(&func);
        assert!(
            output.contains("result &= v2;"),
            "should emit result &= v2: {output}"
        );
    }

    #[test]
    fn test_compound_or_assign() {
        let v = reg(0, 4);
        let flag = reg(8, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntOr,
                v,
                smallvec![v, flag],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("or_assign", body);
        let output = print_c(&func);
        assert!(
            output.contains("result |= v2;"),
            "should emit result |= v2: {output}"
        );
    }

    // -------------------------------------------------------------------
    // P4-7: Negation folding tests
    // -------------------------------------------------------------------

    #[test]
    fn test_negate_less_to_geq() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let cmp_out = reg(16, 1);
        let neg_out = reg(24, 1);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntSless,
                cmp_out,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::BoolNegate,
                neg_out,
                smallvec![cmp_out],
                0x1004,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: neg_out,
                version: 0,
            })),
        ];
        let func = make_func("negate_less", body);
        let output = print_c(&func);
        assert!(
            output.contains(">= v2"),
            "!(a < b) should fold to a >= b: {output}",
        );
        assert!(
            !output.contains("!("),
            "should not contain negation prefix: {output}",
        );
    }

    #[test]
    fn test_negate_equal_to_neq() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let cmp_out = reg(16, 1);
        let neg_out = reg(24, 1);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntEqual,
                cmp_out,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::BoolNegate,
                neg_out,
                smallvec![cmp_out],
                0x1004,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: neg_out,
                version: 0,
            })),
        ];
        let func = make_func("negate_equal", body);
        let output = print_c(&func);
        assert!(
            output.contains("!= v2"),
            "!(a == b) should fold to a != b: {output}",
        );
    }

    #[test]
    fn test_negate_non_comparison_kept() {
        let r0 = reg(0, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::BoolNegate,
                r0,
                smallvec![r0],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("negate_plain", body);
        let output = print_c(&func);
        assert!(
            output.contains("!result"),
            "!flag should remain as !flag: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-4: IntCarry / IntScarry / IntSborrow emission tests
    // -------------------------------------------------------------------

    #[test]
    fn test_intcarry_emits_check() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntCarry,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("carry_test", body);
        let output = print_c(&func);
        assert!(
            output.contains("(v1 + v2) < v1"),
            "IntCarry should emit `(a + b) < a`: {output}",
        );
    }

    #[test]
    fn test_intscarry_emits_ofadd() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntScarry,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("scarry_test", body);
        let output = print_c(&func);
        assert!(
            output.contains("__OFADD__(v1, v2)"),
            "IntScarry should emit `__OFADD__(a, b)`: {output}",
        );
    }

    #[test]
    fn test_intsborrow_emits_ofsub() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntSborrow,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("sborrow_test", body);
        let output = print_c(&func);
        assert!(
            output.contains("__OFSUB__(v1, v2)"),
            "IntSborrow should emit `__OFSUB__(a, b)`: {output}",
        );
    }

    #[test]
    fn test_ofadd_ofsub_in_prelude() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("prelude_test", body);
        let output = print_c(&func);
        assert!(
            output.contains("#define __OFADD__"),
            "__OFADD__ macro should be in prelude: {output}",
        );
        assert!(
            output.contains("#define __OFSUB__"),
            "__OFSUB__ macro should be in prelude: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-5: Signed/unsigned operator distinction tests
    // -------------------------------------------------------------------

    #[test]
    fn test_unsigned_div_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntDiv,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("unsigned_div", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 / (unsigned __int32)v2"),
            "IntDiv should cast both operands to unsigned: {output}",
        );
    }

    #[test]
    fn test_signed_div_no_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntSdiv,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("signed_div", body);
        let output = print_c(&func);
        assert!(
            output.contains("v1 / v2"),
            "IntSdiv should NOT cast to unsigned: {output}",
        );
        let body_output: String = output
            .lines()
            .skip_while(|l| !l.contains("signed_div"))
            .collect::<Vec<_>>()
            .join("\n");
        assert!(
            !body_output.contains("unsigned"),
            "IntSdiv should not contain 'unsigned' cast: {output}",
        );
    }

    #[test]
    fn test_unsigned_shift_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntRight,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("unsigned_shift", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 >> v2"),
            "IntRight should cast LHS to unsigned, not RHS: {output}",
        );
    }

    #[test]
    fn test_signed_shift_no_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntSright,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 4))),
        ];
        let func = make_func("signed_shift", body);
        let output = print_c(&func);
        assert!(
            output.contains("v1 >> v2"),
            "IntSright should not cast to unsigned: {output}",
        );
    }

    #[test]
    fn test_unsigned_less_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntLess,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("unsigned_less", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 < (unsigned __int32)v2"),
            "IntLess should cast both operands to unsigned: {output}",
        );
    }

    #[test]
    fn test_signed_less_no_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntSless,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("signed_less", body);
        let output = print_c(&func);
        assert!(
            output.contains("v1 < v2"),
            "IntSless should not cast to unsigned: {output}",
        );
    }

    #[test]
    fn test_unsigned_rem_cast() {
        let r0 = reg(0, 8);
        let r8 = reg(8, 8);
        let out = reg(16, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntRem,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 8))),
        ];
        let func = make_func("unsigned_rem", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int64)v1 % (unsigned __int64)v2"),
            "IntRem should cast both operands to unsigned: {output}",
        );
    }

    #[test]
    fn test_unsigned_lessequal_cast() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let out = reg(16, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntLessequal,
                out,
                smallvec![r0, r8],
                0x1000,
            )),
            HirNode::Return(Some(sv(16, 1))),
        ];
        let func = make_func("unsigned_leq", body);
        let output = print_c(&func);
        assert!(
            output.contains("(unsigned __int32)v1 <= (unsigned __int32)v2"),
            "IntLessequal should cast both operands to unsigned: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-2: Operator precedence / parenthesization tests
    // -------------------------------------------------------------------

    #[test]
    fn test_parens_shift_in_add() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let c = reg(16, 4);
        let tmp = reg(24, 4);
        let out = reg(32, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntLeft,
                tmp,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                out,
                smallvec![tmp, c],
                0x1004,
            )),
            HirNode::Return(Some(sv(32, 4))),
        ];

        let func = make_func("shift_in_add", body);
        let output = print_c(&func);

        assert!(
            output.contains("(v1 << v2) + v4"),
            "shift inside add must be parenthesized: {output}",
        );
    }

    #[test]
    fn test_parens_add_in_multiply() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let c = reg(16, 4);
        let tmp = reg(24, 4);
        let out = reg(32, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntMult,
                out,
                smallvec![tmp, c],
                0x1004,
            )),
            HirNode::Return(Some(sv(32, 4))),
        ];

        let func = make_func("add_in_mult", body);
        let output = print_c(&func);

        assert!(
            output.contains("(v1 + v2) * v4"),
            "add inside multiply must be parenthesized: {output}",
        );
    }

    #[test]
    fn test_no_parens_same_prec_assoc() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let c = reg(16, 4);
        let tmp = reg(24, 4);
        let out = reg(32, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                out,
                smallvec![tmp, c],
                0x1004,
            )),
            HirNode::Return(Some(sv(32, 4))),
        ];

        let func = make_func("same_prec", body);
        let output = print_c(&func);

        assert!(
            output.contains("v1 + v2 + v4"),
            "same-prec associative ops should NOT have extra parens: {output}",
        );
        assert!(
            !output.contains("(v1 + v2) + v4"),
            "should not wrap same-prec: {output}",
        );
    }

    #[test]
    fn test_parens_nested_binop() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let c = reg(16, 4);
        let tmp = reg(24, 4);
        let out = reg(32, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntOr,
                tmp,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAnd,
                out,
                smallvec![tmp, c],
                0x1004,
            )),
            HirNode::Return(Some(sv(32, 4))),
        ];

        let func = make_func("nested_binop", body);
        let output = print_c(&func);

        assert!(
            output.contains("(v1 | v2) & v4"),
            "OR inside AND must be parenthesized: {output}",
        );
    }

    #[test]
    fn test_parens_unary_on_binop() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let tmp = reg(16, 4);
        let out = reg(24, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                tmp,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Int2comp,
                out,
                smallvec![tmp],
                0x1004,
            )),
            HirNode::Return(Some(sv(24, 4))),
        ];

        let func = make_func("unary_on_binop", body);
        let output = print_c(&func);

        assert!(
            output.contains("-(v1 + v2)"),
            "unary minus on binop should parenthesize the add: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-11: Global variable naming tests
    // -------------------------------------------------------------------

    #[test]
    fn test_global_dword_naming() {
        let space = con(0, 8);
        let addr = con(0x604000, 8);
        let r8 = reg(8, 4);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

        let func = make_func("global_dword", body);
        let output = print_c(&func);

        assert!(
            output.contains("dword_604000"),
            "4-byte load from 0x604000 should emit dword_604000: {output}",
        );
        assert!(
            !output.contains("*(_DWORD *)"),
            "should not fall back to pointer cast: {output}",
        );
    }

    #[test]
    fn test_global_qword_naming() {
        let space = con(0, 8);
        let addr = con(0x604008, 8);
        let r8 = reg(8, 8);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

        let func = make_func("global_qword", body);
        let output = print_c(&func);

        assert!(
            output.contains("qword_604008"),
            "8-byte load from 0x604008 should emit qword_604008: {output}",
        );
    }

    #[test]
    fn test_global_with_symbol() {
        use std::collections::BTreeMap;

        let space = con(0, 8);
        let addr = con(0x604000, 8);
        let r8 = reg(8, 4);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

        let func = make_func("global_sym", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x604000u64, "g_counter".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("g_counter"),
            "should use symbol name 'g_counter': {output}",
        );
        assert!(
            !output.contains("dword_604000"),
            "should NOT fall back to generic name: {output}",
        );
    }

    #[test]
    fn test_global_byte_naming() {
        let space = con(0, 8);
        let addr = con(0x601000, 8);
        let r8 = reg(8, 1);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 1)))];

        let func = make_func("global_byte", body);
        let output = print_c(&func);

        assert!(
            output.contains("byte_601000"),
            "1-byte load from 0x601000 should emit byte_601000: {output}",
        );
    }

    #[test]
    fn test_global_word_naming() {
        let space = con(0, 8);
        let addr = con(0x602000, 8);
        let r8 = reg(8, 2);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 2)))];

        let func = make_func("global_word", body);
        let output = print_c(&func);

        assert!(
            output.contains("word_602000"),
            "2-byte load from 0x602000 should emit word_602000: {output}",
        );
    }

    #[test]
    fn test_fs_canary_qword_emitted_as_intrinsic() {
        let space = con(0, 8);
        let addr = con(0x28, 8);
        let r8 = reg(8, 8);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 8)))];

        let func = make_func("canary_qword", body);
        let output = print_c(&func);

        assert!(
            output.contains("__readfsqword(0x28u)"),
            "8-byte load from constant 0x28 should emit __readfsqword(0x28u): {output}",
        );
        assert!(
            !output.contains("*(_QWORD *)"),
            "canary load must not fall back to raw pointer cast: {output}",
        );
        assert!(
            output.contains("__readfsqword(unsigned int offset)"),
            "prelude must declare __readfsqword: {output}",
        );
    }

    #[test]
    fn test_fs_canary_dword_emitted_as_intrinsic() {
        let space = con(0, 8);
        let addr = con(0x14, 8);
        let r8 = reg(8, 4);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

        let func = make_func("canary_dword", body);
        let output = print_c(&func);

        assert!(
            output.contains("__readfsdword(0x14u)"),
            "4-byte load from 0x14 should emit __readfsdword: {output}",
        );
    }

    #[test]
    fn test_non_canary_small_const_load_unchanged() {
        let space = con(0, 8);
        let addr = con(0x28, 8);
        let r8 = reg(8, 4);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, addr], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

        let func = make_func("not_canary", body);
        let output = print_c(&func);

        assert!(
            !output.contains("__readfsqword(0x28u)"),
            "4-byte load from 0x28 must NOT emit a qword canary call: {output}",
        );
        assert!(
            !output.contains("__readfsdword(0x14u)"),
            "4-byte load from 0x28 must NOT emit a dword canary call: {output}",
        );
        assert!(
            output.contains("0x28"),
            "raw cast load should still reference the address 0x28: {output}",
        );
    }

    #[test]
    fn test_global_store_naming() {
        let space = con(0, 8);
        let addr = con(0x604000, 8);
        let r0 = reg(0, 4);

        let store = IrInsn::without_output(IrOp::Store, smallvec![space, addr, r0], 0x1000);
        let body = vec![HirNode::Statement(store), HirNode::Return(None)];

        let func = make_func("global_store", body);
        let output = print_c(&func);

        assert!(
            output.contains("dword_604000 = v1;"),
            "STORE to 0x604000 should emit dword_604000: {output}",
        );
    }

    #[test]
    fn test_no_global_for_small_addr() {
        let space = con(0, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 4);

        let load = IrInsn::with_output(IrOp::Load, r8, smallvec![space, r0], 0x1000);
        let body = vec![HirNode::Statement(load), HirNode::Return(Some(sv(8, 4)))];

        let func = make_func("no_global", body);
        let output = print_c(&func);

        assert!(
            !output.contains("dword_"),
            "register address should NOT be named as global: {output}",
        );
        assert!(
            output.contains("*(_DWORD *)"),
            "should use pointer dereference: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-10: String literal inlining tests
    // -------------------------------------------------------------------

    #[test]
    fn test_string_inlined_in_output() {
        let r0 = reg(0, 8);
        let string_addr = con(0x2004, 8);
        let space = con(0, 8);

        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Call,
                smallvec![string_addr],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                r0,
                smallvec![space, string_addr],
                0x1004,
            )),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("string_test", body);
        let mut string_table = BTreeMap::new();
        string_table.insert(0x2004u64, "Hello".to_string());

        let output = super::print_c_full(&func, None, None, None, Some(&string_table));

        assert!(
            output.contains("\"Hello\""),
            "string address should be replaced with \"Hello\": {output}",
        );
        assert!(
            !output.contains("0x2004"),
            "raw address 0x2004 should NOT appear: {output}",
        );
    }

    #[test]
    fn test_non_string_address_unchanged() {
        let r0 = reg(0, 8);
        let addr = con(0x3000, 8);
        let space = con(0, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                r0,
                smallvec![space, addr],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("no_string", body);
        let mut string_table = BTreeMap::new();
        string_table.insert(0x2004u64, "Hello".to_string());

        let output = super::print_c_full(&func, None, None, None, Some(&string_table));

        assert!(
            !output.contains("\"Hello\""),
            "non-matching address should NOT produce string: {output}",
        );
        assert!(
            output.contains("0x3000"),
            "raw address 0x3000 should remain: {output}",
        );
    }

    #[test]
    fn test_string_escape_special_chars() {
        let r0 = reg(0, 8);
        let string_addr = con(0x2000, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r0,
                smallvec![string_addr],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("escape_test", body);
        let mut string_table = BTreeMap::new();
        string_table.insert(0x2000u64, "Hello\nWorld\t\"test\"".to_string());

        let output = super::print_c_full(&func, None, None, None, Some(&string_table));

        assert!(
            output.contains(r#"Hello\nWorld\t\"test\""#),
            "special chars should be escaped: {output}",
        );
    }

    // -------------------------------------------------------------------
    // cot_str escape-table parity (matches IDA's str2user output).
    //
    // Verifies each escape-category produces the expected C-source form:
    //   * standard single-char escapes: \\ \" \n \r \t \v \f \a \b \0
    //   * non-printable bytes fall back to \xHH
    //   * multi-byte UTF-8 codepoints are byte-decomposed to \xHH
    //   * printable ASCII / space pass through unchanged
    //   * single-quote is NOT escaped inside a double-quoted literal
    // -------------------------------------------------------------------

    #[test]
    fn test_escape_c_string_standard_singles() {
        // \\ \" \n \r \t \v \f \a \b \0
        let s = "\\\"\n\r\t\x0b\x0c\x07\x08\0";
        let out = super::escape_c_string(s);
        assert_eq!(out, r#"\\\"\n\r\t\v\f\a\b\0"#, "got {out:?}");
    }

    #[test]
    fn test_escape_c_string_hex_fallback_for_other_controls() {
        // 0x01, 0x1F, 0x7F should become \x01, \x1f, \x7f
        let s = "\x01\x1f\x7f";
        let out = super::escape_c_string(s);
        assert_eq!(out, r"\x01\x1f\x7f");
    }

    #[test]
    fn test_escape_c_string_printable_passthrough() {
        let s = "Hello, World! 123";
        let out = super::escape_c_string(s);
        assert_eq!(out, "Hello, World! 123");
    }

    #[test]
    fn test_escape_c_string_single_quote_is_bare() {
        // Inside a "..." literal, ' does not need escaping.
        let out = super::escape_c_string("it's");
        assert_eq!(out, "it's");
    }

    #[test]
    fn test_escape_c_string_multibyte_utf8_byte_decomposed() {
        // 'é' is C3 A9 in UTF-8 — both bytes >= 0x80, so they go through
        // the \xHH fallback and emerge as \xc3\xa9.
        let out = super::escape_c_string("café");
        assert_eq!(out, r"caf\xc3\xa9");
    }

    // -------------------------------------------------------------------
    // cot_sizeof / cot_alignof formatter helpers.
    //
    // These have no IR producer today; the tests verify the *string* shape
    // matches IDA so that when a future HIR Sizeof/Alignof node is wired
    // up, the printer output is already correct.
    // -------------------------------------------------------------------

    #[test]
    fn test_emit_alignof_type() {
        assert_eq!(super::emit_alignof_type("int"), "_Alignof(int)");
        assert_eq!(super::emit_alignof_type("struct foo"), "_Alignof(struct foo)");
        assert_eq!(super::emit_alignof_type("int *"), "_Alignof(int *)");
    }

    #[test]
    fn test_emit_sizeof_type() {
        assert_eq!(super::emit_sizeof_type("int *"), "sizeof(int *)");
        assert_eq!(super::emit_sizeof_type("char[16]"), "sizeof(char[16])");
        assert_eq!(super::emit_sizeof_type("struct s"), "sizeof(struct s)");
    }

    #[test]
    fn test_emit_sizeof_expr() {
        assert_eq!(super::emit_sizeof_expr("v100"), "sizeof(v100)");
        assert_eq!(super::emit_sizeof_expr("a[0]"), "sizeof(a[0])");
    }

    // -------------------------------------------------------------------
    // P4-8/P4-9: Symbol table threading + CALL resolution tests
    // -------------------------------------------------------------------

    #[test]
    fn test_call_with_symbol_resolved() {
        let target_addr = con(0x401030, 8);

        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

        let func = make_func("caller", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401030, "printf".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("printf();"),
            "CALL to known symbol should emit 'printf()': {output}",
        );
        assert!(
            !output.contains("sub_401030"),
            "should NOT contain fallback sub_401030: {output}",
        );
    }

    #[test]
    fn test_call_without_symbol_keeps_sub() {
        let target_addr = con(0x402000, 8);

        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

        let func = make_func("caller", body);
        let symbols = BTreeMap::new();

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("sub_402000();"),
            "CALL to unknown address should emit 'sub_402000()': {output}",
        );
    }

    #[test]
    fn test_call_with_output_resolves_symbol() {
        let r0 = reg(0, 8);
        let target_addr = con(0x401030, 8);

        let call_insn = IrInsn::with_output(IrOp::Call, r0, smallvec![target_addr], 0x1000);
        let body = vec![
            HirNode::Statement(call_insn),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("caller", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401030, "malloc".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("malloc()"),
            "CALL with output to known symbol should emit 'malloc()': {output}",
        );
    }

    // -------------------------------------------------------------------
    // t173: forwarded-export resolution comment on Call rendering
    // -------------------------------------------------------------------

    #[test]
    fn test_call_renders_forwarded_resolution_comment() {
        // CALL through an IAT slot whose forwarder has been resolved
        // (e.g. `kernel32!HeapAlloc → ntdll!RtlAllocateHeap`) gets a
        // trailing `/* -> ntdll!RtlAllocateHeap */` comment.
        let iat_slot_va: u64 = 0x0040_3000;
        let target_addr = con(iat_slot_va, 8);
        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];
        let func = make_func("caller", body);

        let mut symbols = BTreeMap::new();
        symbols.insert(iat_slot_va, "kernel32!HeapAlloc".to_string());

        let mut ann = super::PrinterAnnotations::default();
        ann.forwarded_resolutions
            .insert(iat_slot_va, "NTDLL!RtlAllocateHeap".to_string());

        let output = super::print_c_with_annotations(
            &func,
            None,
            None,
            Some(&symbols),
            None,
            None,
            None,
            Some(&ann),
        );

        assert!(
            output.contains("/* -> NTDLL!RtlAllocateHeap */"),
            "forwarded-resolution comment must render on CALL: {output}",
        );
        // The original (un-resolved) symbol name still appears as the
        // call target — the comment is *additive*, not a rename.
        assert!(
            output.contains("kernel32!HeapAlloc"),
            "primary symbol name must still render: {output}",
        );
    }

    #[test]
    fn test_symbols_passed_through_pipeline_header() {
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401030, "printf".to_string());

        let target_addr = con(0x401030, 8);
        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

        let func = make_func("caller", body);

        let header = super::FunctionHeaderInfo {
            name: "caller".to_string(),
            address: 0x1000,
            size: 0x20,
            convention: "unknown".to_string(),
            stack_frame: 0,
            callees: vec!["printf".to_string()],
            dynamic_sp: false,
        };

        let output = super::print_c_full(&func, None, Some(&header), Some(&symbols), None);

        assert!(
            output.contains("Xrefs to:   printf"),
            "header should show resolved callee name: {output}",
        );
        assert!(
            output.contains("printf();"),
            "body should show resolved call: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-12: Calling convention annotation tests
    // -------------------------------------------------------------------

    #[test]
    fn test_fastcall_annotation() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_1DB100", body);
        let header = super::FunctionHeaderInfo {
            name: "sub_1DB100".to_string(),
            address: 0x1DB100,
            size: 0x100,
            convention: "Microsoft x64".to_string(),
            stack_frame: 0x40,
            callees: vec![],
            dynamic_sp: false,
        };

        let output = super::print_c_full(&func, None, Some(&header), None, None);

        assert!(
            output.contains("__fastcall"),
            "Microsoft x64 should emit __fastcall: {output}",
        );
        assert!(
            output.contains("__fastcall sub_1DB100("),
            "format: ret_type __fastcall name(...): {output}",
        );
    }

    #[test]
    fn test_sysv_no_annotation() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_401000", body);
        let header = super::FunctionHeaderInfo {
            name: "sub_401000".to_string(),
            address: 0x401000,
            size: 0x50,
            convention: "System V AMD64".to_string(),
            stack_frame: 0x20,
            callees: vec![],
            dynamic_sp: false,
        };

        let output = super::print_c_full(&func, None, Some(&header), None, None);

        assert!(
            !output.contains("__fastcall"),
            "System V should NOT have __fastcall: {output}",
        );
        assert!(
            !output.contains("__cdecl"),
            "System V should NOT have __cdecl: {output}",
        );
        let sig_line = output
            .lines()
            .find(|l| l.contains("sub_401000("))
            .expect("function sig");
        assert!(
            sig_line.starts_with("__int32 sub_401000("),
            "SysV should have no convention annotation: {sig_line}",
        );
    }

    #[test]
    fn test_unknown_convention_no_annotation() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_500000", body);
        let header = super::FunctionHeaderInfo {
            name: "sub_500000".to_string(),
            address: 0x500000,
            size: 0x30,
            convention: "unknown".to_string(),
            stack_frame: 0,
            callees: vec![],
            dynamic_sp: false,
        };

        let output = super::print_c_full(&func, None, Some(&header), None, None);

        assert!(
            !output.contains("__fastcall"),
            "unknown convention should NOT have __fastcall: {output}",
        );
        let sig_line = output
            .lines()
            .find(|l| l.contains("sub_500000("))
            .expect("function sig");
        assert!(
            sig_line.starts_with("__int32 sub_500000("),
            "unknown convention should have no annotation: {sig_line}",
        );
    }

    #[test]
    fn test_cdecl_annotation() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("sub_404010", body);
        let header = super::FunctionHeaderInfo {
            name: "sub_404010".to_string(),
            address: 0x404010,
            size: 0x40,
            convention: "cdecl".to_string(),
            stack_frame: 0x10,
            callees: vec![],
            dynamic_sp: false,
        };

        let output = super::print_c_full(&func, None, Some(&header), None, None);

        assert!(
            output.contains("__cdecl sub_404010("),
            "cdecl should emit __cdecl annotation: {output}",
        );
        assert!(
            !output.contains("__fastcall"),
            "cdecl should NOT emit __fastcall: {output}",
        );
    }

    #[test]
    fn test_stdcall_and_thiscall_annotation() {
        let body = vec![HirNode::Return(None)];
        let func1 = make_func("WinMain", body.clone());
        let header1 = super::FunctionHeaderInfo {
            name: "WinMain".to_string(),
            address: 0x401000,
            size: 0x40,
            convention: "stdcall".to_string(),
            stack_frame: 0,
            callees: vec![],
            dynamic_sp: false,
        };
        let out1 = super::print_c_full(&func1, None, Some(&header1), None, None);
        assert!(
            out1.contains("__stdcall WinMain("),
            "stdcall should emit __stdcall: {out1}",
        );

        let func2 = make_func("Foo__bar", body);
        let header2 = super::FunctionHeaderInfo {
            name: "Foo__bar".to_string(),
            address: 0x402000,
            size: 0x40,
            convention: "thiscall".to_string(),
            stack_frame: 0,
            callees: vec![],
            dynamic_sp: false,
        };
        let out2 = super::print_c_full(&func2, None, Some(&header2), None, None);
        assert!(
            out2.contains("__thiscall Foo__bar("),
            "thiscall should emit __thiscall: {out2}",
        );
    }

    // -------------------------------------------------------------------
    // P4-16: Array subscript recovery tests
    // -------------------------------------------------------------------

    #[test]
    fn test_array_subscript_basic() {
        // LOAD with INT_ADD(base, INT_MULT(i, 4)), size=4 → base[i]
        let space = con(0, 8);
        let base = reg(0, 8);
        let idx = reg(8, 8);
        let stride = con(4, 8);
        let mult_out = Varnode::unique(100, 8);
        let add_out = Varnode::unique(200, 8);
        let load_out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntMult,
                mult_out,
                smallvec![idx, stride],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                add_out,
                smallvec![base, mult_out],
                0x1004,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                load_out,
                smallvec![space, add_out],
                0x1008,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: load_out,
                version: 0,
            })),
        ];

        let func = make_func("array_basic", body);
        let output = print_c(&func);

        assert!(
            output.contains("v3[v1]"),
            "should emit base[index] (base=v3, idx=v1): {output}",
        );
        assert!(
            !output.contains("*(_DWORD *)"),
            "should NOT fall back to pointer dereference: {output}",
        );
    }

    #[test]
    fn test_array_subscript_ptradd() {
        // PTRADD(base, i, 4) used as LOAD address, size=4 → base[i]
        let space = con(0, 8);
        let base = reg(0, 8);
        let idx = reg(8, 8);
        let stride = con(4, 8);
        let ptradd_out = Varnode::unique(100, 8);
        let load_out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Ptradd,
                ptradd_out,
                smallvec![base, idx, stride],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                load_out,
                smallvec![space, ptradd_out],
                0x1004,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: load_out,
                version: 0,
            })),
        ];

        let func = make_func("array_ptradd", body);
        let output = print_c(&func);

        assert!(
            output.contains("v1[v2]"),
            "PTRADD should emit base[index]: {output}",
        );
    }

    #[test]
    fn test_array_constant_index() {
        // *(base + 16) load 4 bytes → base[4]
        let space = con(0, 8);
        let base = reg(0, 8);
        let offset = con(16, 8);
        let add_out = Varnode::unique(100, 8);
        let load_out = reg(8, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                add_out,
                smallvec![base, offset],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                load_out,
                smallvec![space, add_out],
                0x1004,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: load_out,
                version: 0,
            })),
        ];

        let func = make_func("array_const_idx", body);
        let output = print_c(&func);

        assert!(
            output.contains("v1[4]"),
            "constant offset 16 / stride 4 should emit base[4]: {output}",
        );
    }

    #[test]
    fn test_array_stride_mismatch_keeps_deref() {
        // INT_ADD(base, INT_MULT(i, 8)) but load size=4 → stride mismatch, keep deref
        let space = con(0, 8);
        let base = reg(0, 8);
        let idx = reg(8, 8);
        let stride = con(8, 8);
        let mult_out = Varnode::unique(100, 8);
        let add_out = Varnode::unique(200, 8);
        let load_out = reg(16, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntMult,
                mult_out,
                smallvec![idx, stride],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                add_out,
                smallvec![base, mult_out],
                0x1004,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Load,
                load_out,
                smallvec![space, add_out],
                0x1008,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: load_out,
                version: 0,
            })),
        ];

        let func = make_func("stride_mismatch", body);
        let output = print_c(&func);

        assert!(
            output.contains("*(_DWORD *)"),
            "stride mismatch should keep pointer dereference: {output}",
        );
        assert!(
            !output.contains("["),
            "should NOT emit array subscript: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-17: CALLIND distinction tests
    // -------------------------------------------------------------------

    #[test]
    fn test_callind_star_syntax() {
        // CALLIND(fptr) → (*fptr)()
        let fptr = reg(0, 8);

        let callind = IrInsn::without_output(IrOp::Callind, smallvec![fptr], 0x1000);
        let body = vec![HirNode::Statement(callind), HirNode::Return(None)];

        let func = make_func("callind_test", body);
        let output = print_c(&func);

        assert!(
            output.contains("((void (*)())pfn)();"),
            "CALLIND should emit IDA-style cast: {output}",
        );
    }

    #[test]
    fn test_call_direct_no_star() {
        // CALL(addr) → func() — no star
        let target = con(0x401000, 8);

        let call = IrInsn::without_output(IrOp::Call, smallvec![target], 0x1000);
        let body = vec![HirNode::Statement(call), HirNode::Return(None)];

        let func = make_func("call_direct", body);
        let output = print_c(&func);

        assert!(
            output.contains("sub_401000();"),
            "direct CALL should emit func(): {output}",
        );
        assert!(
            !output.contains("(*"),
            "direct CALL should NOT have star: {output}",
        );
    }

    #[test]
    fn test_callind_with_output_star_syntax() {
        // CALLIND with output → v1 = (*fptr)()
        let fptr = reg(0, 8);
        let ret = reg(8, 8);

        let callind = IrInsn::with_output(IrOp::Callind, ret, smallvec![fptr], 0x1000);
        let body = vec![
            HirNode::Statement(callind),
            HirNode::Return(Some(SsaVarnode {
                base: ret,
                version: 0,
            })),
        ];

        let func = make_func("callind_output", body);
        let output = print_c(&func);

        assert!(
            output.contains("((__int64 (*)())pfn)()"),
            "CALLIND with output should emit IDA-style cast: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-23: CALLOTHER resolution tests
    // -------------------------------------------------------------------

    #[test]
    fn test_callother_resolved() {
        let r0 = reg(0, 16);
        let r16 = reg(16, 16);
        let out = reg(32, 16);
        let tag = con(0x110, 8); // PADDB

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Callother,
                out,
                smallvec![tag, r0, r16],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: out,
                version: 0,
            })),
        ];

        let func = make_func("sse_add", body);
        let output = print_c(&func);

        assert!(
            output.contains("_mm_add_epi8("),
            "CALLOTHER with PADDB tag should emit _mm_add_epi8: {output}",
        );
        assert!(
            !output.contains("/* CALLOTHER"),
            "known tag should NOT have fallback comment: {output}",
        );
    }

    #[test]
    fn test_callother_unknown_annotated() {
        let r0 = reg(0, 16);
        let out = reg(32, 16);
        let tag = con(0xDEAD, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Callother,
                out,
                smallvec![tag, r0],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: out,
                version: 0,
            })),
        ];

        let func = make_func("sse_unknown", body);
        let output = print_c(&func);

        assert!(
            output.contains("/* CALLOTHER tag=57005 */"),
            "unknown tag should have CALLOTHER comment with decimal tag: {output}",
        );
    }

    #[test]
    fn test_callother_cmov_emits_if_assignment() {
        let cond = reg(259, 1);
        let src = reg(16, 8);
        let dst = reg(0, 8);
        let tag = con(0x350, 8);

        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, cond, src, dst],
                0x1000,
            )),
            HirNode::Return(None),
        ];

        let func = make_func("cmov", body);
        let output = print_c(&func);

        assert!(
            output.contains("if (") && output.contains(" = "),
            "CMOV Callother should emit an if-assignment: {output}",
        );
        assert!(
            !output.contains("__cmov__("),
            "CMOV Callother should not emit call syntax: {output}",
        );
    }

    #[test]
    fn test_dynamic_four_input_callother_preserves_cmov_shape() {
        let dynamic_tag = reg(64, 8);
        let cond = reg(259, 1);
        let src = reg(16, 8);
        let dst = reg(0, 8);

        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![dynamic_tag, cond, src, dst],
                0x1000,
            )),
            HirNode::Return(None),
        ];

        let func = make_func("cmov_dynamic_tag", body);
        let output = print_c(&func);

        assert!(
            output.contains("if (") && !output.contains("dynamic tag"),
            "corrupted CMOV tags should still emit an if-assignment: {output}",
        );
    }

    #[test]
    fn test_callother_no_output_resolved() {
        let r0 = reg(0, 16);
        let r16 = reg(16, 16);
        let tag = con(0x100, 8); // MOVDQA store form

        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, r0, r16],
                0x1000,
            )),
            HirNode::Return(None),
        ];

        let func = make_func("sse_mov_store", body);
        let output = print_c(&func);

        assert!(
            output.contains("_mm_load_si128("),
            "CALLOTHER store-form MOVDQA should still emit intrinsic: {output}",
        );
    }

    #[test]
    fn test_callother_movaps_resolved() {
        let r0 = reg(0, 16);
        let out = reg(32, 16);
        let tag = con(0x102, 8); // MOVAPS

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Callother,
                out,
                smallvec![tag, r0],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: out,
                version: 0,
            })),
        ];

        let func = make_func("sse_movaps", body);
        let output = print_c(&func);

        assert!(
            output.contains("_mm_load_ps("),
            "CALLOTHER with MOVAPS tag should emit _mm_load_ps: {output}",
        );
    }

    #[test]
    fn test_callother_mulps_resolved() {
        let r0 = reg(0, 16);
        let r16 = reg(16, 16);
        let out = reg(32, 16);
        let tag = con(0x132, 8); // MULPS

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Callother,
                out,
                smallvec![tag, r0, r16],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: out,
                version: 0,
            })),
        ];

        let func = make_func("sse_mulps", body);
        let output = print_c(&func);

        assert!(
            output.contains("_mm_mul_ps("),
            "CALLOTHER with MULPS tag should emit _mm_mul_ps: {output}",
        );
    }

    // -------------------------------------------------------------------
    // t200: AArch64 NEON intrinsic-name registry
    //
    // Each test feeds a Callother whose tag + lane operand together
    // pick a NEON intrinsic, and asserts the printer routes through
    // `aarch64_neon_intrinsic_name` rather than emitting the generic
    // `/* CALLOTHER tag=... */` fallback. The lane constant in
    // `inputs[1]` must be peeled off (it's baked into the name).
    // -------------------------------------------------------------------

    #[test]
    fn test_callother_neon_add_v4s_emits_vaddq_s32_t200() {
        // Callother(0x408 /* NEON_ADD */, lane=4, vd, vn, vm) → vaddq_s32
        let tag = con(0x408, 8);
        let lane = con(4, 1);
        let vd = con(0, 1);
        let vn = con(1, 1);
        let vm = con(2, 1);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, lane, vd, vn, vm],
                0x1000,
            )),
            HirNode::Return(None),
        ];
        let func = make_func("neon_add_s32", body);
        let output = print_c(&func);
        assert!(
            output.contains("vaddq_s32("),
            "NEON ADD lane=4 should render as vaddq_s32: {output}",
        );
        assert!(
            !output.contains("/* CALLOTHER"),
            "NEON ADD should not fall back to comment: {output}",
        );
    }

    #[test]
    fn test_callother_neon_sub_v8h_emits_vsubq_s16_t200() {
        // Callother(0x409 /* NEON_SUB */, lane=2, vd, vn, vm) → vsubq_s16
        let tag = con(0x409, 8);
        let lane = con(2, 1);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, lane, con(0, 1), con(1, 1), con(2, 1)],
                0x1000,
            )),
            HirNode::Return(None),
        ];
        let func = make_func("neon_sub_s16", body);
        let output = print_c(&func);
        assert!(
            output.contains("vsubq_s16("),
            "NEON SUB lane=2 should render as vsubq_s16: {output}",
        );
    }

    #[test]
    fn test_callother_neon_mul_v4s_emits_vmulq_s32_t200() {
        // Callother(0x40A /* NEON_MUL */, lane=4, vd, vn, vm) → vmulq_s32
        let tag = con(0x40A, 8);
        let lane = con(4, 1);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, lane, con(0, 1), con(1, 1), con(2, 1)],
                0x1000,
            )),
            HirNode::Return(None),
        ];
        let func = make_func("neon_mul_s32", body);
        let output = print_c(&func);
        assert!(
            output.contains("vmulq_s32("),
            "NEON MUL lane=4 should render as vmulq_s32: {output}",
        );
    }

    #[test]
    fn test_callother_neon_fadd_v4s_emits_vaddq_f32_t200() {
        // Callother(0x40B /* NEON_FADD */, lane=4, vd, vn, vm) → vaddq_f32
        let tag = con(0x40B, 8);
        let lane = con(4, 1);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, lane, con(0, 1), con(1, 1), con(2, 1)],
                0x1000,
            )),
            HirNode::Return(None),
        ];
        let func = make_func("neon_fadd_f32", body);
        let output = print_c(&func);
        assert!(
            output.contains("vaddq_f32("),
            "NEON FADD lane=4 should render as vaddq_f32 (signedness ignored): {output}",
        );
    }

    #[test]
    fn test_callother_aarch64_ld1_16b_emits_vld1q_u8_t200() {
        // Callother(0x400 /* LD1 */, lane=1, addr, vreg0) → vld1q_u8
        let tag = con(0x400, 8);
        let lane = con(1, 1);
        let addr = reg(0, 8);
        let vreg = con(0, 1);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, lane, addr, vreg],
                0x1000,
            )),
            HirNode::Return(None),
        ];
        let func = make_func("neon_ld1_u8", body);
        let output = print_c(&func);
        assert!(
            output.contains("vld1q_u8("),
            "LD1 lane=1 should render as vld1q_u8 (default-unsigned for loads): {output}",
        );
    }

    #[test]
    fn test_callother_aarch64_st1_16b_emits_vst1q_u8_t200() {
        // Callother(0x404 /* ST1 */, lane=1, addr, vreg0) → vst1q_u8
        let tag = con(0x404, 8);
        let lane = con(1, 1);
        let addr = reg(0, 8);
        let vreg = con(0, 1);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Callother,
                smallvec![tag, lane, addr, vreg],
                0x1000,
            )),
            HirNode::Return(None),
        ];
        let func = make_func("neon_st1_u8", body);
        let output = print_c(&func);
        assert!(
            output.contains("vst1q_u8("),
            "ST1 lane=1 should render as vst1q_u8: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-24: Constant folding tests
    // -------------------------------------------------------------------

    #[test]
    fn test_xor_self_becomes_zero() {
        let r0 = reg(0, 4);
        let out = reg(8, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntXor,
                out,
                smallvec![r0, r0],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: out,
                version: 0,
            })),
        ];

        let func = make_func("xor_self", body);
        let output = print_c(&func);

        assert!(
            output.contains("result = 0;"),
            "XOR(v, v) should fold to 0: {output}",
        );
        let xor_line = output.lines().find(|l| l.contains("result ="));
        assert!(
            xor_line.map_or(false, |l| !l.contains("^")),
            "XOR-self should not contain ^ in assignment: {output}",
        );
    }

    #[test]
    fn test_popcount_zero_folded() {
        let r0 = reg(0, 4);
        let zero = con(0, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Popcount,
                r0,
                smallvec![zero],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 4))),
        ];

        let func = make_func("popcount_zero", body);
        let output = print_c(&func);

        assert!(
            output.contains("result = 0;") || output.contains("return 0;"),
            "popcount(0) should fold to 0: {output}",
        );
        assert!(
            !output.contains("__builtin_popcount"),
            "should NOT emit __builtin_popcount call: {output}",
        );
    }

    #[test]
    fn test_and_zero_folded() {
        let r0 = reg(0, 4);
        let out = reg(8, 4);
        let zero = con(0, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAnd,
                out,
                smallvec![r0, zero],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: out,
                version: 0,
            })),
        ];

        let func = make_func("and_zero", body);
        let output = print_c(&func);

        assert!(
            output.contains("result = 0;"),
            "v & 0 should fold to 0: {output}",
        );
    }

    #[test]
    fn test_or_zero_identity() {
        let r0 = reg(0, 4);
        let out = reg(8, 4);
        let zero = con(0, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntOr,
                out,
                smallvec![r0, zero],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: out,
                version: 0,
            })),
        ];

        let func = make_func("or_zero", body);
        let output = print_c(&func);

        assert!(
            output.contains("result = v1;"),
            "v | 0 should fold to v: {output}",
        );
        let or_line = output.lines().find(|l| l.contains("result ="));
        assert!(
            or_line.map_or(false, |l| !l.contains("|")),
            "or-zero should not contain | in assignment: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-25: nullptr and literal suffix tests
    // -------------------------------------------------------------------

    #[test]
    fn test_nullptr_in_pointer_context() {
        let r0 = reg(0, 8);
        let r8 = reg(8, 1);
        let zero = con(0, 8);

        let cmp = IrInsn::with_output(IrOp::IntEqual, r8, smallvec![r0, zero], 0x1000);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Ptradd,
                r0,
                smallvec![r0, zero],
                0x0FF0,
            )),
            HirNode::Statement(cmp),
            HirNode::Return(Some(SsaVarnode {
                base: r8,
                version: 0,
            })),
        ];

        let func = make_func("nullptr_test", body);
        let output = print_c(&func);

        assert!(
            output.contains("nullptr"),
            "comparison of pointer with 0 should emit nullptr: {output}",
        );
    }

    #[test]
    fn test_64bit_literal_suffix() {
        let r0 = reg(0, 8);
        let big = con(0x1000, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, big],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("ll_suffix", body);
        let output = print_c(&func);

        assert!(
            output.contains("0x1000LL"),
            "64-bit literal should have LL suffix: {output}",
        );
    }

    #[test]
    fn test_unsigned_literal_suffix() {
        assert_eq!(
            super::format_constant_ctx(5, 8, super::ConstContext::Unsigned),
            "5ULL",
        );
        assert_eq!(
            super::format_constant_ctx(5, 4, super::ConstContext::Unsigned),
            "5u",
        );
        assert_eq!(
            super::format_constant_ctx(0x100, 8, super::ConstContext::Unsigned),
            "0x100ULL",
        );
        assert_eq!(
            super::format_constant_ctx(0x100, 4, super::ConstContext::Unsigned),
            "0x100u",
        );
    }

    #[test]
    fn test_nullptr_copy_to_pointer() {
        let ptr_vn = reg(0, 8);
        let zero = con(0, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Ptradd,
                ptr_vn,
                smallvec![ptr_vn, zero],
                0x0FF0,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                ptr_vn,
                smallvec![zero],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("nullptr_copy", body);
        let output = print_c(&func);

        assert!(
            output.contains("nullptr"),
            "COPY of 0 to pointer variable should emit nullptr: {output}",
        );
    }

    // ── P4-14: Switch fall-through tests ──

    #[test]
    fn test_switch_normal_has_break() {
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![HirNode::Return(None)], false),
                (SwitchCase::Value(1), vec![HirNode::Return(None)], false),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        }];

        let func = make_func("switch_break", body);
        let output = print_c(&func);

        let break_count = output.matches("break;").count();
        assert!(
            break_count >= 2,
            "each non-fallthrough case should have break;, got {break_count} in:\n{output}",
        );
        assert!(
            !output.contains("fall through"),
            "normal cases should not have fall-through comment:\n{output}",
        );
    }

    #[test]
    fn test_switch_fallthrough_no_break() {
        let body = vec![HirNode::Switch {
            cond: sv(0, 8),
            cases: vec![
                (SwitchCase::Value(0), vec![], true),
                (SwitchCase::Value(1), vec![HirNode::Return(None)], false),
            ],
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        }];

        let func = make_func("switch_ft", body);
        let output = print_c(&func);

        assert!(
            output.contains("fall through"),
            "fall-through case should have /* fall through */ comment:\n{output}",
        );

        let lines: Vec<&str> = output.lines().collect();
        let case0_line = lines.iter().position(|l| l.contains("case 0:")).unwrap();
        let case1_line = lines.iter().position(|l| l.contains("case 1:")).unwrap();

        let between = &lines[case0_line..case1_line];
        assert!(
            !between.iter().any(|l| l.trim() == "break;"),
            "fall-through case 0 should NOT have break; between case labels:\n{output}",
        );
    }

    // -------------------------------------------------------------------
    // P4-22: Register/stack variable comment tests
    // -------------------------------------------------------------------

    #[test]
    fn test_register_comment_rax() {
        let r0 = reg(0, 8);
        let c1 = con(1, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            )),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("reg_comment", body);
        let output = print_c(&func);

        let decl_line = output
            .lines()
            .find(|l| l.contains("result;") || l.contains("result ;"))
            .expect("should find result declaration");
        assert!(
            decl_line.contains("// rax"),
            "register var at offset 0, size 8 should have `// rax` comment: {decl_line}",
        );
    }

    #[test]
    fn test_stack_comment() {
        let stk = Varnode::stack(0x20, 8);
        let c1 = con(1, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                stk,
                smallvec![stk, c1],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: stk,
                version: 0,
            })),
        ];

        let func = make_func("stack_comment", body);
        let output = print_c(&func);

        let decl_line = output
            .lines()
            .find(|l| l.contains("result;") || l.contains("result ;"))
            .expect("should find result declaration");
        assert!(
            decl_line.contains("// [rsp+20h]"),
            "stack var at offset 0x20 should have `// [rsp+20h]` comment: {decl_line}",
        );
    }

    #[test]
    fn test_dwarf_local_name_used_for_stack_var() {
        use std::collections::BTreeMap;
        use unlace_loader::{DwarfInfo, FunctionDebugInfo, LocalVariable};

        let stk = Varnode::stack(0x10, 8);
        let one = con(1, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                stk,
                smallvec![stk, one],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: stk,
                version: 0,
            })),
        ];

        let func = make_func("with_named_local", body);
        let header = super::FunctionHeaderInfo {
            name: "with_named_local".to_string(),
            address: 0x1000,
            size: 0x40,
            convention: "System V AMD64".to_string(),
            stack_frame: 0x60,
            callees: vec![],
            dynamic_sp: false,
        };

        let mut functions = BTreeMap::new();
        functions.insert(
            0x1000,
            FunctionDebugInfo {
                name: "with_named_local".to_string(),
                linkage_name: None,
                low_pc: 0x1000,
                high_pc: Some(0x1040),
                params: vec![],
                return_type: Some("long long".to_string()),
                decl: None,
                locals: vec![LocalVariable {
                    name: "counter".to_string(),
                    type_name: Some("long long".to_string()),
                    frame_offset: Some(-0x50),
                }],
            },
        );
        let dwarf = DwarfInfo {
            functions,
            source_map: BTreeMap::new(),
            structs: BTreeMap::new(),
            enums: BTreeMap::new(),
            unions: BTreeMap::new(),
        };

        let output = super::print_c_full(&func, Some(&dwarf), Some(&header), None, None);

        assert!(
            output.contains(" counter;") || output.contains(" counter "),
            "DWARF local name 'counter' should be used: {output}",
        );
        assert!(
            !output.contains(" v1;") && !output.contains(" v1 "),
            "should not fall back to vN when DWARF supplies a name: {output}",
        );
    }

    #[test]
    fn test_byref_annotation_for_address_taken_stack_var() {
        let rsp = reg(32, 8);
        let off = con(0x58, 8);
        let addr = Varnode::unique(0x100, 8);
        let target = con(0x401000, 8);
        let stk = Varnode::stack(0x58, 8);
        let one = con(1, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, stk, smallvec![one], 0x0FFC)),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                addr,
                smallvec![rsp, off],
                0x1000,
            )),
            HirNode::Statement(IrInsn::without_output(
                IrOp::Call,
                smallvec![target, addr],
                0x1004,
            )),
            HirNode::Return(None),
        ];

        let func = make_func("byref_caller", body);
        let header = super::FunctionHeaderInfo {
            name: "byref_caller".to_string(),
            address: 0x1000,
            size: 0x40,
            convention: "System V AMD64".to_string(),
            stack_frame: 0xa0,
            callees: vec![],
            dynamic_sp: false,
        };
        let output = super::print_c_full(&func, None, Some(&header), None, None);

        assert!(
            output.contains("BYREF"),
            "address-taken stack slot at rsp+58h should be BYREF: {output}",
        );
        let byref_line = output
            .lines()
            .find(|l| l.contains("BYREF"))
            .expect("BYREF declaration line");
        assert!(
            byref_line.contains("[rsp+58h]"),
            "BYREF line should reference [rsp+58h]: {byref_line}",
        );
    }

    #[test]
    fn test_objc_block_capture_with_int_byref() {
        // t184: a block whose captured varnode is recorded as a __block
        // box in `func.byref_boxes` should be rendered as
        // `__block int name` inside the block-literal's captures list.
        use unlace_ir::ssa::ByrefBox;
        use unlace_ir::types::Type;
        use unlace_struct::ObjcBlockCapture;

        let captured_base = Varnode::stack(0x30, 8);
        let captured_sv = SsaVarnode {
            base: captured_base,
            version: 1,
        };

        let body = vec![HirNode::ObjcBlock {
            invoke: 0x401000,
            captures: vec![ObjcBlockCapture::resolved("counter", captured_sv)],
        }];

        let mut func = make_func("with_byref", body);
        func.byref_boxes.insert(
            captured_base,
            ByrefBox {
                captured_type: Type::int(4),
                captured_value_sv: captured_sv,
                captured_offset: 24,
                captured_store_loc: (unlace_ir::BlockId(0), 0),
            },
        );

        let output = print_c(&func);
        assert!(
            output.contains("__block int counter"),
            "byref capture should render as `__block int counter`: {output}",
        );
        assert!(
            output.contains("invoke=0x401000"),
            "block-invoke address should still appear: {output}",
        );
    }

    #[test]
    fn test_objc_block_capture_without_byref_renders_plainly() {
        // t184: a block capture whose SSA varnode is NOT in
        // `func.byref_boxes` should fall back to the plain capture name
        // (no `__block T` decoration).
        use unlace_struct::ObjcBlockCapture;

        let captured_sv = SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 0,
        };

        let body = vec![HirNode::ObjcBlock {
            invoke: 0x402000,
            captures: vec![
                ObjcBlockCapture::resolved("plain_a", captured_sv),
                ObjcBlockCapture::unresolved("plain_b"),
            ],
        }];

        let func = make_func("without_byref", body);
        let output = print_c(&func);

        assert!(
            output.contains("captures=[plain_a, plain_b]"),
            "captures with no byref match should render as plain names: {output}",
        );
        assert!(
            !output.contains("__block"),
            "no `__block` decoration expected when byref_boxes is empty: {output}",
        );
    }

    #[test]
    fn test_stack_comment_with_rbp_offset() {
        let stk = Varnode::stack(0x10, 8);
        let c1 = con(1, 8);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                stk,
                smallvec![stk, c1],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: stk,
                version: 0,
            })),
        ];

        let func = make_func("stack_rbp_comment", body);
        let header = super::FunctionHeaderInfo {
            name: "stack_rbp_comment".to_string(),
            address: 0x1000,
            size: 0x40,
            convention: "System V AMD64".to_string(),
            stack_frame: 0x60,
            callees: vec![],
            dynamic_sp: false,
        };
        let output = super::print_c_full(&func, None, Some(&header), None, None);

        let decl_line = output
            .lines()
            .find(|l| l.contains("result;") || l.contains("result ;"))
            .expect("should find result declaration");
        assert!(
            decl_line.contains("// [rsp+10h] [rbp-50h]"),
            "stack var at rsp+10h with frame 60h should annotate [rbp-50h]: {decl_line}",
        );
    }

    #[test]
    fn test_unique_temp_comment() {
        let u0 = Varnode::unique(0x1000, 8);
        let c1 = con(1, 8);
        let r0 = reg(0, 8);
        let r8 = reg(8, 8);

        // Use u0 twice so it won't be folded inline
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                u0,
                smallvec![r0, c1],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![u0, c1],
                0x1004,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r8,
                smallvec![u0, c1],
                0x1008,
            )),
            HirNode::Return(Some(sv(0, 8))),
        ];

        let func = make_func("unique_comment", body);
        let output = print_c(&func);

        let has_temp = output.lines().any(|l| l.contains("// temp"));
        assert!(
            has_temp,
            "unique-space var should have `// temp` comment: {output}",
        );
    }

    #[test]
    fn test_register_comment_ecx() {
        let r8 = Varnode::reg(8, 4);
        let c1 = con(1, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r8,
                smallvec![r8, c1],
                0x1000,
            )),
            HirNode::Return(Some(SsaVarnode {
                base: r8,
                version: 0,
            })),
        ];

        let func = make_func("ecx_comment", body);
        let output = print_c(&func);

        let decl_line = output
            .lines()
            .find(|l| l.contains("result;") || l.contains("result ;"))
            .expect("should find result declaration");
        assert!(
            decl_line.contains("// ecx"),
            "register var at offset 8, size 4 should have `// ecx` comment: {decl_line}",
        );
    }

    #[test]
    fn test_params_in_c_output() {
        let func = HirFunction {
            name: "add_two".to_string(),
            params: vec![
                ("a1".to_string(), PrimitiveType::Int(8)),
                ("a2".to_string(), PrimitiveType::Int(8)),
            ],
            return_type: PrimitiveType::Int(8),
            body: vec![],
            addr: 0x1000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = print_c(&func);
        assert!(
            output.contains("__int64 add_two(__int64 a1, __int64 a2)"),
            "should emit typed params: {output}",
        );
    }

    #[test]
    fn test_void_return_type() {
        let func = HirFunction {
            name: "void_func".to_string(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body: vec![HirNode::Return(None)],
            addr: 0x1000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = print_c(&func);
        assert!(
            output.contains("void void_func(void)"),
            "Unknown return type should emit void: {output}",
        );
    }

    #[test]
    fn test_sig_params_ida_types() {
        let func = HirFunction {
            name: "sub_401000".to_string(),
            params: vec![
                ("a1".to_string(), PrimitiveType::Int(8)),
                ("a2".to_string(), PrimitiveType::UnsignedInt(4)),
                ("a3".to_string(), PrimitiveType::Ptr),
            ],
            return_type: PrimitiveType::Int(8),
            body: vec![HirNode::Return(None)],
            addr: 0x401000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = print_c(&func);
        assert!(
            output.contains("__int64 sub_401000(__int64 a1, unsigned __int32 a2, void * a3)"),
            "signature should use IDA-style types: {output}",
        );
    }

    #[test]
    fn test_sig_no_params_shows_void() {
        let func = HirFunction {
            name: "sub_402000".to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body: vec![HirNode::Return(None)],
            addr: 0x402000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = print_c(&func);
        assert!(
            output.contains("__int32 sub_402000(void)"),
            "empty params should emit (void): {output}",
        );
    }

    #[test]
    fn test_sig_return_type_bool() {
        let func = HirFunction {
            name: "sub_403000".to_string(),
            params: vec![("a1".to_string(), PrimitiveType::Int(4))],
            return_type: PrimitiveType::Bool,
            body: vec![HirNode::Return(None)],
            addr: 0x403000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = print_c(&func);
        assert!(
            output.contains("_BOOL sub_403000(__int32 a1)"),
            "Bool return type should emit _BOOL: {output}",
        );
    }

    #[test]
    fn test_foldable_expr_not_declared() {
        let r0 = reg(0, 8);
        let r8 = reg(8, 8);
        let c1 = con(1, 8);
        let c2 = con(2, 8);

        let temp_sv = sv(0, 8);

        let mut foldable = std::collections::BTreeSet::new();
        foldable.insert(temp_sv);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            )),
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r8,
                smallvec![r0, c2],
                0x1004,
            )),
            HirNode::Return(Some(sv(8, 8))),
        ];

        let func = HirFunction {
            name: "fold_test".to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(8),
            body,
            addr: 0x1000,
            foldable_exprs: foldable,
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
        };

        let output = print_c(&func);

        let declares_v1 = output.lines().any(|l| {
            let trimmed = l.trim();
            trimmed.starts_with("__int64 v1;") || trimmed.starts_with("__int64 v1; //")
        });
        assert!(
            !declares_v1,
            "foldable_exprs varnode should not appear in variable declarations:\n{output}",
        );
    }

    #[test]
    fn test_internal_call_resolved() {
        let target_addr: u64 = 0x4020;
        let call_target = Varnode::constant(target_addr, 8);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Call,
                smallvec![call_target],
                0x1000,
            )),
            HirNode::Return(None),
        ];

        let func = make_func("caller", body);

        let mut symbols = BTreeMap::new();
        symbols.insert(target_addr, "sub_4020".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("sub_4020();"),
            "internal call should resolve to sub_4020: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P7-17: Heuristic variable naming (result, cond, pfn, ptr)
    // -------------------------------------------------------------------

    #[test]
    fn test_heuristic_result_for_returned_var() {
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
            HirNode::Return(Some(SsaVarnode {
                base: r0,
                version: 0,
            })),
        ];
        let func = make_func("returns_result", body);
        let output = print_c(&func);

        assert!(
            output.contains("return result;") || output.contains("return v1 + 1;"),
            "returned varnode should appear in return: {output}",
        );
        assert!(
            output.contains("result = ") || output.contains("return v1 + 1;"),
            "definition of returned var should be 'result =' or merged return: {output}",
        );
    }

    #[test]
    fn test_heuristic_cond_for_comparison_output() {
        let a = reg(0, 4);
        let b = reg(8, 4);
        let cmp_out = reg(16, 1);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::IntEqual,
                cmp_out,
                smallvec![a, b],
                0x1000,
            )),
            HirNode::If {
                cond: SsaVarnode {
                    base: cmp_out,
                    version: 0,
                },
                then_body: vec![HirNode::Return(None)],
                else_body: None,
            },
            HirNode::Return(None),
        ];
        let func = make_func("uses_cond", body);
        let output = print_c(&func);

        assert!(
            output.contains("_Bool cond") || output.contains("_BOOL cond"),
            "comparison output should be named 'cond': {output}",
        );
    }

    #[test]
    fn test_heuristic_pfn_for_callind_target() {
        let fptr = reg(0, 8);
        let ret = reg(8, 4);

        let callind = IrInsn::with_output(IrOp::Callind, ret, smallvec![fptr], 0x1000);
        let body = vec![
            HirNode::Statement(callind),
            HirNode::Return(Some(SsaVarnode {
                base: ret,
                version: 0,
            })),
        ];
        let func = make_func("uses_pfn", body);
        let output = print_c(&func);

        assert!(
            output.contains("((__int32 (*)())pfn)()"),
            "CALLIND target should be named 'pfn' with cast: {output}",
        );
        assert!(
            output.contains("return result;"),
            "returned varnode should be named 'result': {output}",
        );
    }

    #[test]
    fn test_heuristic_does_not_override_loop_counter() {
        let i_reg = reg(0, 4);
        let zero = con(0, 4);
        let one = con(1, 4);
        let cmp_out = reg(16, 1);
        let n = reg(8, 4);

        let init = IrInsn::with_output(IrOp::Copy, i_reg, smallvec![zero], 0x0FF0);
        let update = IrInsn::with_output(IrOp::IntAdd, i_reg, smallvec![i_reg, one], 0x1010);
        let cond_insn = IrInsn::with_output(IrOp::IntLess, cmp_out, smallvec![i_reg, n], 0x1000);

        let body = vec![
            HirNode::For {
                init: Some(init),
                cond: SsaVarnode {
                    base: cmp_out,
                    version: 0,
                },
                update,
                body: vec![HirNode::Statement(cond_insn)],
            },
            HirNode::Return(Some(SsaVarnode {
                base: i_reg,
                version: 0,
            })),
        ];
        let func = make_func("loop_with_return", body);
        let output = print_c(&func);

        assert!(
            output.contains("for (i = 0;"),
            "loop counter must remain 'i': {output}",
        );
        assert!(
            !output.contains("for (result"),
            "result heuristic must not override loop counter: {output}",
        );
    }

    // -------------------------------------------------------------------
    // P7-18: Complex CALLIND cast emission
    // -------------------------------------------------------------------

    #[test]
    fn test_callind_cast_with_args() {
        let fptr = reg(0, 8);
        let arg1 = reg(8, 4);
        let arg2 = reg(16, 4);
        let ret = reg(24, 4);

        let callind = IrInsn::with_output(IrOp::Callind, ret, smallvec![fptr, arg1, arg2], 0x1000);
        let body = vec![
            HirNode::Statement(callind),
            HirNode::Return(Some(SsaVarnode {
                base: ret,
                version: 0,
            })),
        ];
        let func = make_func("callind_with_args", body);
        let output = print_c(&func);

        assert!(
            output.contains("((__int32 (*)(__int32, __int32))pfn)("),
            "CALLIND with two int32 args should emit param-typed cast: {output}",
        );
    }

    #[test]
    fn test_callind_cast_void_return() {
        let fptr = reg(0, 8);
        let arg1 = reg(8, 8);

        let callind = IrInsn::without_output(IrOp::Callind, smallvec![fptr, arg1], 0x1000);
        let body = vec![HirNode::Statement(callind), HirNode::Return(None)];
        let func = make_func("callind_void", body);
        let output = print_c(&func);

        assert!(
            output.contains("((void (*)(__int64))pfn)("),
            "CALLIND with no output should emit void return: {output}",
        );
    }

    // P8-12: Demangled C++ names in C output
    // -------------------------------------------------------------------

    #[test]
    fn test_demangled_cpp_function_signature() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("_Z8use_baseP4Base", body);
        let output = print_c(&func);

        assert!(
            output.contains("// use_base(Base*)"),
            "should emit demangled signature as comment, got: {output}",
        );
        assert!(
            output.contains(" use_base("),
            "should emit sanitized short name as C identifier, got: {output}",
        );
        assert!(
            !output.contains(" _Z8use_baseP4Base("),
            "should NOT emit raw mangled name as function name: {output}",
        );
    }

    #[test]
    fn test_demangled_cpp_call_target() {
        let target_addr = con(0x401200, 8);
        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

        let func = make_func("caller", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401200, "_Z8use_baseP4Base".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("use_base();"),
            "CALL to mangled symbol should emit demangled callee, got: {output}",
        );
        assert!(
            !output.contains("_Z8use_baseP4Base();"),
            "should NOT emit raw mangled name as call target: {output}",
        );
    }

    #[test]
    fn test_demangled_cpp_method_call_target() {
        let target_addr = con(0x401300, 8);
        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

        let func = make_func("caller", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401300, "_ZN4Base5valueEv".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("Base_value();"),
            "CALL to method symbol should emit sanitized Class_method form, got: {output}",
        );
    }



    #[test]
    fn test_non_mangled_call_target_unchanged() {
        let target_addr = con(0x401030, 8);
        let call_insn = IrInsn::without_output(IrOp::Call, smallvec![target_addr], 0x1000);
        let body = vec![HirNode::Statement(call_insn), HirNode::Return(None)];

        let func = make_func("caller", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401030, "printf".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("printf();"),
            "non-mangled callee should pass through, got: {output}",
        );
    }

    #[test]
    fn test_cxa_throw_annotation() {
        let throw_addr = con(0x402000, 8);
        let alloc_addr = con(0x402100, 8);
        let catch_addr = con(0x402200, 8);
        let body = vec![
            HirNode::Statement(IrInsn::without_output(
                IrOp::Call,
                smallvec![alloc_addr],
                0x1000,
            )),
            HirNode::Statement(IrInsn::without_output(
                IrOp::Call,
                smallvec![throw_addr],
                0x1008,
            )),
            HirNode::Statement(IrInsn::without_output(
                IrOp::Call,
                smallvec![catch_addr],
                0x1010,
            )),
            HirNode::Return(None),
        ];

        let func = make_func("test_exceptions", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x402000, "__cxa_throw".to_string());
        symbols.insert(0x402100, "__cxa_allocate_exception".to_string());
        symbols.insert(0x402200, "__cxa_begin_catch".to_string());

        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("/* throw */"),
            "should annotate __cxa_throw, got: {output}",
        );
        assert!(
            output.contains("/* allocate exception */"),
            "should annotate __cxa_allocate_exception, got: {output}",
        );
        assert!(
            output.contains("/* catch */"),
            "should annotate __cxa_begin_catch, got: {output}",
        );
    }

    #[test]
    fn test_rtti_hierarchy_in_output() {
        use unlace_loader::rtti::{CppClass, RttiInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZN3Dog5speakEv", body);

        let mut classes = BTreeMap::new();
        classes.insert(
            0x3d40,
            CppClass {
                mangled_name: "6Animal".to_string(),
                demangled_name: "Animal".to_string(),
                typeinfo_addr: 0x3d40,
                bases: vec![],
                vtable_addr: None,
                vtable_methods: vec![],
                vtable_layout: None,
            },
        );
        classes.insert(
            0x3d50,
            CppClass {
                mangled_name: "3Dog".to_string(),
                demangled_name: "Dog".to_string(),
                typeinfo_addr: 0x3d50,
                bases: vec![unlace_loader::BaseClass {
                    typeinfo_addr: 0x3d40,
                    offset: 0,
                    is_virtual: false,
                    is_public: true,
                }],
                vtable_addr: Some(0x3cf0),
                vtable_methods: vec![(0, 0x1300, Some("_ZN3Dog5speakEv".to_string()))],
                vtable_layout: None,
            },
        );
        let rtti = RttiInfo { classes };

        let output = super::print_c_with_rtti(&func, None, None, None, None, Some(&rtti));

        assert!(
            output.contains("C++ Class Hierarchy"),
            "should contain hierarchy header: {output}",
        );
        assert!(
            output.contains("Animal"),
            "should mention Animal in hierarchy: {output}",
        );
        assert!(
            output.contains("Dog"),
            "should mention Dog in hierarchy: {output}",
        );
        assert!(
            output.contains("Dog::vtable:"),
            "should list Dog vtable: {output}",
        );
    }

    #[test]
    fn test_rtti_this_param_type() {
        use unlace_loader::rtti::{CppClass, RttiInfo};

        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZN3Dog5speakEv", body);

        let mut classes = BTreeMap::new();
        classes.insert(
            0x3d50,
            CppClass {
                mangled_name: "3Dog".to_string(),
                demangled_name: "Dog".to_string(),
                typeinfo_addr: 0x3d50,
                bases: vec![],
                vtable_addr: None,
                vtable_methods: vec![],
                vtable_layout: None,
            },
        );
        let rtti = RttiInfo { classes };

        let output = super::print_c_with_rtti(&func, None, None, None, None, Some(&rtti));

        assert!(
            output.contains("Dog *this"),
            "member function should have 'Dog *this' param: {output}",
        );
    }

    #[test]
    fn test_write_only_variable_not_declared() {
        let r0 = reg(0, 4);
        let r8 = reg(8, 4);
        let c1 = con(1, 4);
        let c2 = con(2, 4);

        let body = vec![
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000)),
            HirNode::Statement(IrInsn::with_output(IrOp::Copy, r8, smallvec![c2], 0x1004)),
            HirNode::Return(Some(SsaVarnode {
                base: r8,
                version: 0,
            })),
        ];

        let func = make_func("dead_var", body);
        let output = print_c(&func);

        assert!(
            output.contains("result"),
            "r8 (returned) should be declared: {output}",
        );
        let has_v1_decl = output.lines().any(|l| {
            let t = l.trim();
            t.starts_with("int v1;") || t.starts_with("int v1; //")
        });
        assert!(
            !has_v1_decl,
            "write-only variable v1 (r0, never read) should NOT be declared: {output}",
        );
    }

    #[test]
    fn test_return_with_value_merges_call() {
        let rax = reg(0, 8);
        let target = con(0x401000, 8);

        let call = IrInsn::with_output(IrOp::Call, rax, smallvec![target], 0x1000);
        let body = vec![
            HirNode::Statement(call),
            HirNode::Return(Some(SsaVarnode {
                base: rax,
                version: 0,
            })),
        ];

        let func = make_func("ret_call", body);
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401000u64, "compute".to_string());
        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("return compute();"),
            "call + return should merge into `return compute();`: {output}",
        );
        assert!(
            !output.contains("result = compute()"),
            "should NOT have separate assignment: {output}",
        );
    }

    // ---------------------------------------------------------------------
    // TailCall emission (`return callee();` / `callee();`) — IDA convention.
    // ---------------------------------------------------------------------

    /// Tail call in a non-void function with a known symbol must render as
    /// `return helper();` — the IDA convention. Verifies that the symbol
    /// table is consulted (no `func_<addr>` or cast-to-fn-ptr fallback).
    #[test]
    fn test_tail_call_named_target_non_void() {
        let body = vec![HirNode::TailCall { target: 0x401000 }];
        let func = make_func("caller", body); // make_func returns Int(4)
        let mut symbols = BTreeMap::new();
        symbols.insert(0x401000u64, "helper".to_string());
        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("return helper();"),
            "non-void parent: tail call should render as `return helper();`: {output}",
        );
        assert!(
            !output.contains("func_401000"),
            "should not fall back to func_<addr> when symbol is known: {output}",
        );
        assert!(
            !output.contains("(*)(void)"),
            "should not emit cast-to-fn-ptr form: {output}",
        );
    }

    /// Tail call to an unknown address falls back to the IDA-style
    /// `sub_<hex>` placeholder name.
    #[test]
    fn test_tail_call_unknown_target_falls_back_to_sub() {
        let body = vec![HirNode::TailCall { target: 0xdeadbeef }];
        let func = make_func("caller", body);
        let output = super::print_c_full(&func, None, None, None, None);

        assert!(
            output.contains("return sub_deadbeef();"),
            "unknown target: tail call should fall back to `sub_<hex>`: {output}",
        );
    }

    /// Tail call in a void function (return type Unknown → rendered as
    /// `void`) must render as just `callee();`. The structurer's trailing
    /// `Return(None)` will emit the closing `return;` so we mustn't double
    /// it (which previously produced `callee(); return; return;`).
    #[test]
    fn test_tail_call_void_parent_omits_return() {
        let body = vec![
            HirNode::TailCall { target: 0x401000 },
            HirNode::Return(None),
        ];
        let mut func = make_func("caller_void", body);
        func.return_type = PrimitiveType::Unknown; // → "void"

        let mut symbols = BTreeMap::new();
        symbols.insert(0x401000u64, "exit_handler".to_string());
        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("exit_handler();"),
            "void parent: tail call should render as `exit_handler();`: {output}",
        );
        assert!(
            !output.contains("return; return;"),
            "void parent: must not emit duplicated `return; return;`: {output}",
        );
        assert!(
            !output.contains("return exit_handler();"),
            "void parent: must NOT prepend `return` to a void-returning tail call: {output}",
        );
    }

    /// Mangled C++ symbols at the tail-call site are demangled and
    /// sanitized to their short C identifier (with `::` → `_`) — matching
    /// how regular call sites are rendered elsewhere in the printer.
    #[test]
    fn test_tail_call_demangles_cpp_symbol() {
        let body = vec![HirNode::TailCall { target: 0x401000 }];
        let func = make_func("caller", body);
        let mut symbols = BTreeMap::new();
        // `_ZN3foo3barEv` → demangled `foo::bar`, short name `foo::bar`,
        // sanitized to `foo_bar`.
        symbols.insert(0x401000u64, "_ZN3foo3barEv".to_string());
        let output = super::print_c_full(&func, None, None, Some(&symbols), None);

        assert!(
            output.contains("return foo_bar();"),
            "tail call to mangled symbol should demangle and sanitize to \
             `foo_bar`: {output}",
        );
        assert!(
            !output.contains("_ZN3foo3barEv"),
            "raw mangled name should not appear in output: {output}",
        );
    }

    // ---------------------------------------------------------------
    // HirNode::Commented — pre/post comment markers (Phase 14 task)
    // ---------------------------------------------------------------

    /// A `Commented` wrapper with one `pre` line emits the comment on
    /// its own line *immediately before* the wrapped statement, at the
    /// statement's indentation.
    #[test]
    fn test_commented_pre_renders_before_statement() {
        let r0 = reg(0, 4);
        let c5 = con(5, 4);
        let copy = HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![c5],
            0x1000,
        ));
        let body = vec![
            HirNode::Commented {
                pre: vec!["from /tmp/source.c:42".to_string()],
                post: vec![],
                inner: Box::new(copy),
            },
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("pre_comment", body);
        let output = print_c(&func);

        // Comment must come before the statement, not after.
        let comment_pos = output
            .find("// from /tmp/source.c:42")
            .expect(&format!("pre-comment missing in output:\n{output}"));
        let stmt_pos = output
            .find("= 5")
            .expect(&format!("statement missing in output:\n{output}"));
        assert!(
            comment_pos < stmt_pos,
            "pre-comment must precede the wrapped statement; got:\n{output}"
        );
    }

    /// A `Commented` wrapper with one `post` line emits the comment on
    /// its own line *immediately after* the wrapped statement.
    #[test]
    fn test_commented_post_renders_after_statement() {
        let r0 = reg(0, 4);
        let c7 = con(7, 4);
        let copy = HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![c7],
            0x1000,
        ));
        let body = vec![
            HirNode::Commented {
                pre: vec![],
                post: vec!["end of init".to_string()],
                inner: Box::new(copy),
            },
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("post_comment", body);
        let output = print_c(&func);

        let stmt_pos = output
            .find("= 7")
            .expect(&format!("statement missing in output:\n{output}"));
        let comment_pos = output
            .find("// end of init")
            .expect(&format!("post-comment missing in output:\n{output}"));
        assert!(
            stmt_pos < comment_pos,
            "post-comment must follow the wrapped statement; got:\n{output}"
        );
    }

    /// Multi-line comment strings (containing `\n`) must be split into
    /// one `// `-prefixed line per source line, preserving structure.
    /// Both `pre` and `post` are exercised together to confirm the
    /// emit ordering survives multi-line content on either side.
    #[test]
    fn test_commented_multiline_preserved() {
        let r0 = reg(0, 4);
        let c3 = con(3, 4);
        let copy = HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![c3],
            0x1000,
        ));
        let body = vec![
            HirNode::Commented {
                pre: vec!["first pre line\nsecond pre line".to_string()],
                post: vec!["first post line\nsecond post line".to_string()],
                inner: Box::new(copy),
            },
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("multi_comment", body);
        let output = print_c(&func);

        // Each input line must surface as its own `// `-prefixed line.
        for needle in [
            "// first pre line",
            "// second pre line",
            "// first post line",
            "// second post line",
        ] {
            assert!(
                output.contains(needle),
                "expected `{needle}` in output:\n{output}"
            );
        }

        // Ordering: both pre lines before stmt, both post lines after.
        let pre1 = output.find("// first pre line").unwrap();
        let pre2 = output.find("// second pre line").unwrap();
        let stmt = output.find("= 3").unwrap();
        let post1 = output.find("// first post line").unwrap();
        let post2 = output.find("// second post line").unwrap();
        assert!(pre1 < pre2 && pre2 < stmt, "pre ordering wrong:\n{output}");
        assert!(stmt < post1 && post1 < post2, "post ordering wrong:\n{output}");
    }

    /// `Commented` is transparent for non-`Statement` nodes — a
    /// pre-comment attached to a `Return` still emits *above* the
    /// `return ...;` line.
    #[test]
    fn test_commented_wraps_return_node() {
        let body = vec![HirNode::Commented {
            pre: vec!["return path A".to_string()],
            post: vec![],
            inner: Box::new(HirNode::Return(None)),
        }];
        let func = make_func("commented_return", body);
        let output = print_c(&func);

        let comment_pos = output.find("// return path A").expect(&format!(
            "pre-comment on Return missing in output:\n{output}"
        ));
        let ret_pos = output
            .find("return;")
            .expect(&format!("return; missing in output:\n{output}"));
        assert!(
            comment_pos < ret_pos,
            "pre-comment must precede wrapped Return; got:\n{output}"
        );
    }

    /// Sanity check the *exact* rendered shape — comment lines must
    /// appear at the same indent as the wrapped statement, with `// `
    /// prefix and a trailing newline. This locks in the visual contract
    /// that downstream tooling (DWARF integration, plugin hooks) relies on.
    #[test]
    fn test_commented_exact_render_shape() {
        let r0 = reg(0, 4);
        let c9 = con(9, 4);
        let copy = HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![c9],
            0x1000,
        ));
        let body = vec![
            HirNode::Commented {
                pre: vec!["hint".to_string()],
                post: vec!["trailing".to_string()],
                inner: Box::new(copy),
            },
            HirNode::Return(Some(sv(0, 4))),
        ];
        let func = make_func("shape", body);
        let output = print_c(&func);

        // Body is indented one level (4 spaces). Pre-comment, statement,
        // and post-comment must all share that indentation, in order.
        assert!(
            output.contains("    // hint\n"),
            "pre-comment must be `    // hint\\n`; got:\n{output}"
        );
        assert!(
            output.contains("    // trailing\n"),
            "post-comment must be `    // trailing\\n`; got:\n{output}"
        );

        let pre_pos = output.find("    // hint\n").unwrap();
        let post_pos = output.find("    // trailing\n").unwrap();
        let stmt_pos = output.find("= 9").unwrap();
        assert!(
            pre_pos < stmt_pos && stmt_pos < post_pos,
            "rendered ordering wrong:\n{output}"
        );
    }

    /// The `with_pre_comment` / `with_post_comment` builder helpers
    /// stack additional comments onto an existing `Commented` wrapper
    /// without nesting wrappers (so transform passes that re-wrap don't
    /// produce O(n) layered comments).
    #[test]
    fn test_commented_builder_helpers_flatten() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);
        let stmt = HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            r0,
            smallvec![c1],
            0x1000,
        ));

        let wrapped = stmt
            .with_pre_comment("alpha")
            .with_pre_comment("beta")
            .with_post_comment("gamma");

        match &wrapped {
            HirNode::Commented { pre, post, inner } => {
                assert_eq!(pre, &vec!["alpha".to_string(), "beta".to_string()]);
                assert_eq!(post, &vec!["gamma".to_string()]);
                assert!(matches!(inner.as_ref(), HirNode::Statement(_)));
            }
            other => panic!("expected Commented wrapper, got: {other:?}"),
        }

        // unwrap_commented should peel the wrapper.
        assert!(matches!(
            wrapped.unwrap_commented(),
            HirNode::Statement(_)
        ));
    }

    /// `_ZNSt6vectorIiSaIiEE9push_backERKi` →
    /// `std::vector<int>::push_back(int const&)`. The printer must emit
    /// `std::vector<int> *this` as the first parameter so the function
    /// signature reflects the recovered STL type.
    #[test]
    fn stl_vector_method_emits_typed_this() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZNSt6vectorIiSaIiEE9push_backERKi", body);
        let output = print_c(&func);

        assert!(
            output.contains("std::vector<int> *this"),
            "expected `std::vector<int> *this` in signature, got:\n{output}",
        );
    }

    /// libcxx (`std::__1`) flavour of vector — the inline namespace must
    /// be folded back to plain `std::` in the rendered `this`-type, even
    /// though the original demangled signature (kept verbatim in the
    /// preceding `//` comment) still mentions `std::__1`.
    #[test]
    fn stl_vector_libcxx_inline_namespace_collapsed() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZNSt3__16vectorIiNS_9allocatorIiEEE9push_backERKi", body);
        let output = print_c(&func);

        // Locate the function signature line — it's the line that opens
        // the body with `{` and contains the parameter list. We assert on
        // that line specifically so the demangled-signature comment can
        // legitimately preserve `std::__1::` for traceability.
        let sig_line = output
            .lines()
            .find(|l| l.contains("*this") && l.trim_end().ends_with('{'))
            .expect("signature line with *this and opening brace");
        assert!(
            sig_line.contains("std::vector<int> *this"),
            "libcxx vector signature: {sig_line}\n--- full ---\n{output}",
        );
        assert!(
            !sig_line.contains("std::__1::"),
            "inline namespace should be stripped from signature line, got:\n{sig_line}",
        );
    }

    /// `basic_string<char, …>` collapses to `std::string`.
    #[test]
    fn stl_string_emits_collapsed_typedef() {
        let body = vec![HirNode::Return(None)];
        let func = make_func(
            "_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc",
            body,
        );
        let output = print_c(&func);

        assert!(
            output.contains("std::string *this"),
            "expected `std::string *this`, got:\n{output}",
        );
    }

    /// `_ZNSt10shared_ptrIiE5resetEv` → `std::shared_ptr<int>::reset()`.
    #[test]
    fn stl_shared_ptr_method_emits_typed_this() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZNSt10shared_ptrIiE5resetEv", body);
        let output = print_c(&func);

        assert!(
            output.contains("std::shared_ptr<int> *this"),
            "expected `std::shared_ptr<int> *this`, got:\n{output}",
        );
    }

    /// Plain (non-STL) C++ free function must NOT get an STL `this`
    /// parameter — STL recognition is opt-in by namespace match.
    #[test]
    fn non_stl_function_does_not_get_stl_this() {
        // _Z3addii → int add(int, int)
        let body = vec![HirNode::Return(None)];
        let func = make_func("_Z3addii", body);
        let output = print_c(&func);

        assert!(
            !output.contains("std::"),
            "non-STL function should not mention std::, got:\n{output}",
        );
        assert!(
            !output.contains("*this"),
            "non-STL should not synthesise this, got:\n{output}",
        );
    }

    /// gcc-style lambda closure: the C printer must emit a
    /// `// lambda closure operator()` annotation immediately under the
    /// demangled-signature comment so a human reader can recognise the
    /// enclosing class as a compiler-generated closure type.  See
    /// [`crate::demangle::DemangleResult::is_lambda`].
    #[test]
    fn lambda_closure_emits_annotation_comment() {
        // _ZZ11call_lambdaiENKUliE_clEi
        //   → call_lambda(int)::{lambda(int)#1}::operator()(int) const
        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZZ11call_lambdaiENKUliE_clEi", body);
        let output = print_c(&func);

        assert!(
            output.contains("// lambda closure operator()"),
            "expected lambda annotation comment, got:\n{output}",
        );
        // The full demangled signature must still be emitted above the
        // annotation — we annotate, we don't replace.
        assert!(
            output.contains("lambda"),
            "demangled signature with `lambda` should appear, got:\n{output}",
        );
    }

    /// clang-style lambda (`$_<n>` source name) — same annotation must
    /// fire from the alternate detection path.
    #[test]
    fn clang_dollar_lambda_emits_annotation_comment() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZZ11call_lambdaiENK3$_0clEi", body);
        let output = print_c(&func);

        assert!(
            output.contains("// lambda closure operator()"),
            "expected lambda annotation for clang $_0, got:\n{output}",
        );
    }

    /// Negative: a regular non-lambda member function must NOT receive
    /// the lambda annotation comment.
    #[test]
    fn non_lambda_method_has_no_lambda_annotation() {
        let body = vec![HirNode::Return(None)];
        let func = make_func("_ZN3foo3barEv", body);
        let output = print_c(&func);

        assert!(
            !output.contains("// lambda"),
            "non-lambda method got a spurious lambda comment, output:\n{output}",
        );
    }

    // ---------------------------------------------------------------------
    // HirNode::Asm — IDA-style `__asm { ... }` block emission for raw
    // assembly the lifter could not translate (cit_asm / opcode 79 in
    // hex-rays' citem dispatcher).
    // ---------------------------------------------------------------------

    /// Single asm line renders as a one-line `__asm { ... }` block with
    /// the instruction text indented inside the braces.
    #[test]
    fn asm_node_single_instruction() {
        let body = vec![
            HirNode::Asm {
                instructions: vec!["cli".to_string()],
            },
            HirNode::Return(None),
        ];
        let func = make_func("priv_op", body);
        let output = print_c(&func);

        assert!(
            output.contains("__asm {"),
            "expected __asm block opener, got:\n{output}",
        );
        assert!(
            output.contains("cli"),
            "expected mnemonic in body, got:\n{output}",
        );
        // The `cli` line must be more deeply indented than the `__asm {`
        // line — i.e. one level inside the block.
        let asm_indent = output
            .lines()
            .find(|l| l.trim_start().starts_with("__asm {"))
            .map(|l| l.len() - l.trim_start().len())
            .expect("__asm line not found");
        let cli_indent = output
            .lines()
            .find(|l| l.trim_start().starts_with("cli"))
            .map(|l| l.len() - l.trim_start().len())
            .expect("cli line not found");
        assert!(
            cli_indent > asm_indent,
            "expected `cli` indented deeper than `__asm {{`, got asm={asm_indent} cli={cli_indent}\n{output}",
        );
        // The closing brace lives on its own line at the asm-opener depth.
        let close_lines = output
            .lines()
            .filter(|l| l.trim() == "}")
            .count();
        assert!(
            close_lines >= 1,
            "expected at least one bare `}}` closing line, got:\n{output}",
        );
    }

    /// Multiple asm lines emit one indented line per instruction inside
    /// a single `__asm { ... }` block.
    #[test]
    fn asm_node_multiple_instructions() {
        let body = vec![
            HirNode::Asm {
                instructions: vec![
                    "rdtsc".to_string(),
                    "mov rcx, rax".to_string(),
                    "shl rcx, 32".to_string(),
                ],
            },
            HirNode::Return(None),
        ];
        let func = make_func("read_tsc", body);
        let output = print_c(&func);

        assert!(output.contains("__asm {"), "missing block opener: {output}");
        assert!(output.contains("rdtsc"), "missing rdtsc: {output}");
        assert!(
            output.contains("mov rcx, rax"),
            "missing mov: {output}",
        );
        assert!(
            output.contains("shl rcx, 32"),
            "missing shl: {output}",
        );

        // The three lines must appear in order, each on its own line.
        let rdtsc_pos = output.find("rdtsc").unwrap();
        let mov_pos = output.find("mov rcx, rax").unwrap();
        let shl_pos = output.find("shl rcx, 32").unwrap();
        assert!(
            rdtsc_pos < mov_pos && mov_pos < shl_pos,
            "asm lines emitted out of order:\n{output}",
        );
    }

    /// Asm blocks nest correctly inside `if` / `while` bodies — the
    /// printer's depth-aware indentation must apply, and surrounding
    /// control flow is unaffected.
    #[test]
    fn asm_node_inside_if_and_while() {
        let body = vec![
            HirNode::If {
                cond: sv(0, 4),
                then_body: vec![HirNode::Asm {
                    instructions: vec!["int 3".to_string()],
                }],
                else_body: None,
            },
            HirNode::While {
                cond: sv(0, 4),
                body: vec![HirNode::Asm {
                    instructions: vec!["pause".to_string(), "nop".to_string()],
                }],
            },
            HirNode::Return(None),
        ];
        let func = make_func("nested_asm", body);
        let output = print_c(&func);

        // Both __asm blocks must appear.
        assert_eq!(
            output.matches("__asm {").count(),
            2,
            "expected two __asm blocks, got:\n{output}",
        );
        assert!(output.contains("int 3"), "missing int 3: {output}");
        assert!(output.contains("pause"), "missing pause: {output}");
        assert!(output.contains("nop"), "missing nop: {output}");
        // The asm inside the if must be indented deeper than the asm's
        // `if (...) {` opener — i.e. the line containing `int 3` should
        // start with at least 4 spaces (function body depth 1 + then-body
        // depth 1 + asm-body depth 1 = 6 spaces with 2-space indent, but
        // we just sanity-check it's strictly deeper than `if`).
        let if_line_indent = output
            .lines()
            .find(|l| l.trim_start().starts_with("if ("))
            .map(|l| l.len() - l.trim_start().len())
            .expect("if line not found");
        let int3_indent = output
            .lines()
            .find(|l| l.trim_start().starts_with("int 3"))
            .map(|l| l.len() - l.trim_start().len())
            .expect("int 3 line not found");
        assert!(
            int3_indent > if_line_indent,
            "expected `int 3` to be more indented than `if (...)`, got if={if_line_indent} int3={int3_indent}\n{output}",
        );
    }

    // ---------------------------------------------------------------------
    // PrintConfig — indent / margin / format-flag plumbing
    //
    // These tests pin the IDA-aligned defaults documented on
    // [`PrintConfig`] (offsets 592 / 600 / 719 in `module_data`) and
    // verify that the env-var override path and the per-context
    // `tab_width` actually drive `indent()` output.  The env-var tests
    // mutate process state, so each one carefully restores the prior
    // value to keep the suite parallel-safe — but because cargo runs
    // unit tests in a shared process by default we additionally serialise
    // the env-mutating tests via a dedicated mutex.
    // ---------------------------------------------------------------------

    use std::sync::Mutex;

    use super::PrintConfig;

    /// Serialises tests that touch the global process environment so
    /// they don't race when cargo schedules them on multiple threads.
    static ENV_LOCK: Mutex<()> = Mutex::new(());

    /// RAII guard that snapshots a single env var on construction and
    /// restores it (or removes it) on drop, so a test failure can't
    /// leak state into sibling tests.
    struct EnvGuard {
        key: &'static str,
        prev: Option<String>,
    }

    impl EnvGuard {
        fn new(key: &'static str) -> Self {
            Self {
                key,
                prev: std::env::var(key).ok(),
            }
        }
    }

    impl Drop for EnvGuard {
        fn drop(&mut self) {
            // SAFETY: tests are serialised through `ENV_LOCK`; only one
            // thread mutates the process environment at a time.
            unsafe {
                match self.prev.take() {
                    Some(v) => std::env::set_var(self.key, v),
                    None => std::env::remove_var(self.key),
                }
            }
        }
    }

    /// `PrintConfig::default()` returns the IDA-aligned defaults
    /// (`module_data` offsets 592/600 → indent 2 / max 100, with
    /// Unlace's historical 4-space tab and IDA's 80-column wrap floor).
    #[test]
    fn print_config_defaults_match_ida() {
        let cfg = PrintConfig::default();
        assert_eq!(cfg.max_line_width, 100, "max_line_width default");
        assert_eq!(cfg.tab_width, 4, "tab_width default");
        assert_eq!(cfg.indent_width, 2, "indent_width default (IDA module_data+592)");
        assert_eq!(cfg.wrap_floor, 80, "wrap_floor default (IDA Options dialog)");
        assert_eq!(cfg.format_flags, 0, "format_flags default (IDA module_data+719)");
    }

    /// With no `UNLACE_*` env vars set, `PrintConfig::from_env`
    /// reproduces the defaults bit-for-bit.
    #[test]
    fn print_config_from_env_no_vars_yields_defaults() {
        let _lock = ENV_LOCK.lock().unwrap();
        // Clear any inherited overrides before sampling.
        let _g0 = EnvGuard::new("UNLACE_MAX_LINE_WIDTH");
        let _g1 = EnvGuard::new("UNLACE_TAB_WIDTH");
        let _g2 = EnvGuard::new("UNLACE_INDENT");
        let _g3 = EnvGuard::new("UNLACE_WRAP_FLOOR");
        // SAFETY: tests are serialised through `ENV_LOCK`.
        unsafe {
            std::env::remove_var("UNLACE_MAX_LINE_WIDTH");
            std::env::remove_var("UNLACE_TAB_WIDTH");
            std::env::remove_var("UNLACE_INDENT");
            std::env::remove_var("UNLACE_WRAP_FLOOR");
        }
        assert_eq!(PrintConfig::from_env(), PrintConfig::default());
    }

    /// Each `UNLACE_*` env var, when set to a parseable `usize`,
    /// overrides exactly one [`PrintConfig`] field and leaves the
    /// others at their default.
    #[test]
    fn print_config_env_vars_override_defaults() {
        let _lock = ENV_LOCK.lock().unwrap();
        let _g0 = EnvGuard::new("UNLACE_MAX_LINE_WIDTH");
        let _g1 = EnvGuard::new("UNLACE_TAB_WIDTH");
        let _g2 = EnvGuard::new("UNLACE_INDENT");
        let _g3 = EnvGuard::new("UNLACE_WRAP_FLOOR");
        // SAFETY: tests are serialised through `ENV_LOCK`.
        unsafe {
            std::env::set_var("UNLACE_MAX_LINE_WIDTH", "132");
            std::env::set_var("UNLACE_TAB_WIDTH", "8");
            std::env::set_var("UNLACE_INDENT", "3");
            std::env::set_var("UNLACE_WRAP_FLOOR", "60");
        }
        let cfg = PrintConfig::from_env();
        assert_eq!(cfg.max_line_width, 132);
        assert_eq!(cfg.tab_width, 8);
        assert_eq!(cfg.indent_width, 3);
        assert_eq!(cfg.wrap_floor, 60);
    }

    /// Malformed env values (non-numeric / negative / blank) are
    /// silently ignored — the field falls back to the default.  This
    /// guards against a typo in `UNLACE_TAB_WIDTH=four` panicking the
    /// printer in the middle of a long decompilation run.
    #[test]
    fn print_config_invalid_env_falls_back_to_default() {
        let _lock = ENV_LOCK.lock().unwrap();
        let _g0 = EnvGuard::new("UNLACE_MAX_LINE_WIDTH");
        let _g1 = EnvGuard::new("UNLACE_TAB_WIDTH");
        let _g2 = EnvGuard::new("UNLACE_INDENT");
        let _g3 = EnvGuard::new("UNLACE_WRAP_FLOOR");
        // SAFETY: tests are serialised through `ENV_LOCK`.
        unsafe {
            std::env::set_var("UNLACE_MAX_LINE_WIDTH", "not-a-number");
            std::env::set_var("UNLACE_TAB_WIDTH", "");
            std::env::remove_var("UNLACE_INDENT");
            std::env::remove_var("UNLACE_WRAP_FLOOR");
        }
        let cfg = PrintConfig::from_env();
        let def = PrintConfig::default();
        assert_eq!(cfg, def);
    }

    /// A custom `tab_width` actually drives the per-line indentation
    /// emitted by the printer — flipping the env var from the default
    /// 4 to 2 halves every body-line's leading-space count.
    #[test]
    fn print_ctx_custom_tab_width_drives_indent() {
        let _lock = ENV_LOCK.lock().unwrap();
        let _g = EnvGuard::new("UNLACE_TAB_WIDTH");
        // SAFETY: tests are serialised through `ENV_LOCK`.
        unsafe {
            std::env::set_var("UNLACE_TAB_WIDTH", "2");
        }

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

        let func = make_func("nested_2sp", body);
        let output = print_c(&func);

        // depth 3 × tab_width 2 = 6 leading spaces (was 12 with default).
        let add_line = output
            .lines()
            .find(|l| l.contains("v1++;"))
            .expect("should find add line");
        let lead = add_line.len() - add_line.trim_start().len();
        assert_eq!(lead, 6, "expected 6 spaces (3 × 2): {add_line:?}");
    }

    /// `format_flags` round-trips through both `Default` and the
    /// `UNLACE_FORMAT_FLAGS` env hook. Plumbed for forward compatibility:
    /// no current emit consumes the bits, but the field must travel
    /// through `PrintConfig::from_env` so future flag-driven behaviour
    /// lands without an API break.
    #[test]
    fn print_config_format_flags_roundtrip() {
        let _lock = ENV_LOCK.lock().unwrap();
        let _g = EnvGuard::new("UNLACE_FORMAT_FLAGS");
        unsafe { std::env::remove_var("UNLACE_FORMAT_FLAGS"); }
        assert_eq!(PrintConfig::default().format_flags, 0);
        unsafe { std::env::set_var("UNLACE_FORMAT_FLAGS", "42"); }
        assert_eq!(PrintConfig::from_env().format_flags, 42);
    }

    /// Constructing the printer with `max_line_width=60` (vs the default
    /// 100) makes a long expression's rendered output cross the requested
    /// margin, demonstrating that the explicit-config path actually
    /// reaches the emit logic. We don't assert exact wrap positions —
    /// the printer's wrap policy is governed by t64 — only that the
    /// custom config plumbs through `print_c_with_rtti_config` to the
    /// `PrintCtx` without being silently dropped.
    #[test]
    fn print_config_explicit_override_reaches_ctx() {
        let r0 = reg(0, 4);
        let c1 = con(1, 4);
        let body = vec![HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            ))],
            else_body: None,
        }];
        let func = make_func("widthcheck", body);
        let narrow = PrintConfig {
            max_line_width: 60,
            tab_width: 2,
            indent_width: 2,
            wrap_floor: 40,
            format_flags: 0,
        };
        let out = crate::c_printer::print_c_with_rtti_config(
            &func, None, None, None, None, None, Some(narrow),
        );
        // tab_width=2 forced through config: depth-2 body line indents by
        // 4 spaces (2 × 2), not the default 8 (2 × 4).
        let body_line = out.lines().find(|l| l.contains("v1++;")).expect("body");
        let lead = body_line.len() - body_line.trim_start().len();
        assert_eq!(lead, 4, "expected 4-space indent under tab_width=2: {body_line:?}");
    }

    /// Sanity check that the *default* indent (no env vars set) still
    /// produces the historical 4-space-per-level output.  This is a
    /// belt-and-braces guard alongside `test_print_indentation` — that
    /// test runs without ENV_LOCK so it could in principle race with
    /// other env-mutating tests; this one explicitly clears the env.
    #[test]
    fn print_ctx_default_tab_width_is_four() {
        let _lock = ENV_LOCK.lock().unwrap();
        let _g = EnvGuard::new("UNLACE_TAB_WIDTH");
        // SAFETY: tests are serialised through `ENV_LOCK`.
        unsafe {
            std::env::remove_var("UNLACE_TAB_WIDTH");
        }

        let r0 = reg(0, 4);
        let c1 = con(1, 4);
        let body = vec![HirNode::If {
            cond: sv(0, 4),
            then_body: vec![HirNode::Statement(IrInsn::with_output(
                IrOp::IntAdd,
                r0,
                smallvec![r0, c1],
                0x1000,
            ))],
            else_body: None,
        }];
        let func = make_func("nested_default", body);
        let output = print_c(&func);

        // depth 2 × tab_width 4 = 8 leading spaces.
        let add_line = output
            .lines()
            .find(|l| l.contains("v1++;"))
            .expect("should find add line");
        let lead = add_line.len() - add_line.trim_start().len();
        assert_eq!(lead, 8, "expected 8 spaces (2 × 4 default): {add_line:?}");
    }

    // ---------------------------------------------------------------------
    // needs_parens — direct port of IDA sub_25F3C0
    // ---------------------------------------------------------------------
    //
    // These tests pin down the algorithm's behaviour at every branch.  They
    // exercise `needs_parens` directly (no IR synthesis required) so the
    // logic stays nailed down even if higher-level emission paths change.

    use super::{ParentCtx, needs_parens};

    fn rhs(parent: IrOp) -> ParentCtx {
        ParentCtx::rhs_of(parent)
    }
    fn lhs(parent: IrOp) -> ParentCtx {
        ParentCtx::lhs_of(parent)
    }
    fn top() -> ParentCtx {
        ParentCtx::top()
    }

    #[test]
    fn parens_top_level_never_wraps() {
        // No parent → never paren (the `if (a3)` early-out in sub_25F3C0).
        assert!(!needs_parens(IrOp::IntAdd, top()));
        assert!(!needs_parens(IrOp::IntEqual, top()));
        assert!(!needs_parens(IrOp::IntNegate, top()));
    }

    #[test]
    fn parens_associative_chain_no_inner_parens() {
        // `a + b + c` parses as `(a + b) + c`; the inner `+` is the LHS of
        // the outer `+` — associative bitmask says no paren.
        assert!(!needs_parens(IrOp::IntAdd, lhs(IrOp::IntAdd)));
        // `a | b | c` — same shape.
        assert!(!needs_parens(IrOp::IntOr, lhs(IrOp::IntOr)));
        assert!(!needs_parens(IrOp::IntAnd, lhs(IrOp::IntAnd)));
        assert!(!needs_parens(IrOp::IntXor, lhs(IrOp::IntXor)));
        assert!(!needs_parens(IrOp::BoolAnd, lhs(IrOp::BoolAnd)));
        assert!(!needs_parens(IrOp::BoolOr, lhs(IrOp::BoolOr)));
        // Even on the RHS — `+` is associative, so bitmask wins.
        assert!(!needs_parens(IrOp::IntAdd, rhs(IrOp::IntAdd)));
        assert!(!needs_parens(IrOp::IntOr, rhs(IrOp::IntOr)));
    }

    #[test]
    fn parens_comparison_chain_always_wraps() {
        // `a == b == c` — the inner `==` is wrapped regardless of side.
        assert!(needs_parens(IrOp::IntEqual, lhs(IrOp::IntEqual)));
        assert!(needs_parens(IrOp::IntEqual, rhs(IrOp::IntEqual)));
        assert!(needs_parens(IrOp::IntNotequal, lhs(IrOp::IntEqual)));
        // Relational chain too: `a < b < c`.
        assert!(needs_parens(IrOp::IntSless, lhs(IrOp::IntSless)));
        assert!(needs_parens(IrOp::IntSlessequal, rhs(IrOp::IntSless)));
    }

    #[test]
    fn parens_right_assoc_div() {
        // `(a / b) / c` flat-chain — inner `/` is LHS, no paren.
        assert!(!needs_parens(IrOp::IntSdiv, lhs(IrOp::IntSdiv)));
        // `a / (b / c)` — inner `/` is RHS, must paren.
        assert!(needs_parens(IrOp::IntSdiv, rhs(IrOp::IntSdiv)));
        // Same for unsigned div / mod variants.
        assert!(needs_parens(IrOp::IntDiv, rhs(IrOp::IntDiv)));
        assert!(needs_parens(IrOp::IntSrem, rhs(IrOp::IntSrem)));
        assert!(needs_parens(IrOp::IntRem, rhs(IrOp::IntRem)));
    }

    #[test]
    fn parens_mul_flat_chain() {
        // `a * b * c` — both inner positions of mul-of-mul: no paren.
        assert!(!needs_parens(IrOp::IntMult, lhs(IrOp::IntMult)));
        assert!(!needs_parens(IrOp::IntMult, rhs(IrOp::IntMult)));
        // `a * (b / c)` — inner is `/`, RHS of `*`: paren via right-assoc.
        assert!(needs_parens(IrOp::IntSdiv, rhs(IrOp::IntMult)));
        // `(a / b) * c` — inner is `/`, LHS of `*`: no paren (right-assoc
        // mask only fires on RHS).
        assert!(!needs_parens(IrOp::IntSdiv, lhs(IrOp::IntMult)));
    }

    #[test]
    fn parens_mixed_shift_compare() {
        // `a << b == c`: `==` is *looser* than `<<` (parent_prec 7 >
        // child_prec 5), so it parses as `(a << b) == c` already.  child
        // ∈ [3,7] but parent prec=7, NOT in {5} ∪ [8,10] → trap doesn't
        // fire, no paren needed.
        assert!(!needs_parens(IrOp::IntLeft, lhs(IrOp::IntEqual)));
        assert!(!needs_parens(IrOp::IntLeft, rhs(IrOp::IntEqual)));

        // `a & (b == c)` — child `==` (prec 7), parent `&` (prec 8).
        // Parent_prec > child_prec, AND parent_prec ∈ [8,10]: trap fires.
        assert!(needs_parens(IrOp::IntEqual, rhs(IrOp::IntAnd)));
        assert!(needs_parens(IrOp::IntEqual, lhs(IrOp::IntAnd)));

        // `a & (b << c)` — child `<<` (prec 5), parent `&` (prec 8).
        // child_prec ∈ [3,7] ✓, parent_prec ∈ [8,10] ✓ → trap fires.
        assert!(needs_parens(IrOp::IntLeft, rhs(IrOp::IntAnd)));

        // `a + b << c` — child `+` (prec 4) on LHS of parent `<<` (prec
        // 5).  child ∈ [3,7] ✓, parent_prec == 5 ✓ → trap fires (paren).
        assert!(needs_parens(IrOp::IntAdd, lhs(IrOp::IntLeft)));

        // `a + (b * c)` — child `*` (prec 3) on RHS of parent `+` (prec
        // 4).  child_prec ∈ [3,7] ✓ but parent_prec=4, not 5 and not in
        // [8,10]: trap does NOT fire — no paren.
        assert!(!needs_parens(IrOp::IntMult, rhs(IrOp::IntAdd)));
    }

    #[test]
    fn parens_parent_strictly_tighter_always_wraps() {
        // `(a == b) * c` — child `==` (prec 7), parent `*` (prec 3).
        // parent_prec < child_prec → unconditional paren.
        assert!(needs_parens(IrOp::IntEqual, lhs(IrOp::IntMult)));
        // `(a + b) * c` — child `+` (prec 4), parent `*` (prec 3): paren.
        assert!(needs_parens(IrOp::IntAdd, lhs(IrOp::IntMult)));
        // `(a | b) & c` — child `|` (prec 10), parent `&` (prec 8): paren.
        assert!(needs_parens(IrOp::IntOr, lhs(IrOp::IntAnd)));
    }

    #[test]
    fn parens_unary_above_binary() {
        // `~(a + b)` — child `+` (prec 4), parent `~` (prec 2).
        // parent_prec < child_prec → paren.
        assert!(needs_parens(IrOp::IntAdd, lhs(IrOp::IntNegate)));
        // `(~x) | y` — child `~` (prec 2), parent `|` (prec 10).
        // parent_prec > child_prec.  child_prec=2, NOT in [3,7] — trap
        // does not fire.  No paren.
        assert!(!needs_parens(IrOp::IntNegate, lhs(IrOp::IntOr)));
    }

    #[test]
    fn parens_bnot_under_call_postfix() {
        // `(~x)()` — child opcode 47 (cot_bnot), parent opcode 56 (call).
        // Parent prec=0 (call is a leaf in the table), child prec=2;
        // parent_prec < child_prec → strictly-tighter branch wraps
        // unconditionally.  This reproduces sub_25F3C0's `v6 == 47 && a2
        // == 56` outcome via the precedence comparison.
        assert!(needs_parens(IrOp::IntNegate, lhs(IrOp::Call)));
    }

    #[test]
    fn parens_subtract_right_operand_wraps() {
        // `a - (b - c)` — child `-` (prec 4), parent `-` (prec 4).
        // Same prec, opcode 36 falls through bitmasks (not associative,
        // not in right-assoc mask, not opcode 37) → default branch:
        // child_prec=4 > 2, so paren if RHS.
        assert!(needs_parens(IrOp::IntSub, rhs(IrOp::IntSub)));
        // `(a - b) - c` — LHS of same: no paren.
        assert!(!needs_parens(IrOp::IntSub, lhs(IrOp::IntSub)));
    }

    #[test]
    fn parens_shift_chain_right_assoc() {
        // `a << (b << c)` — same level, default branch, paren if RHS.
        assert!(needs_parens(IrOp::IntLeft, rhs(IrOp::IntLeft)));
        assert!(!needs_parens(IrOp::IntLeft, lhs(IrOp::IntLeft)));
    }

    // -----------------------------------------------------------------
    // measure_expr_width — t66 (port of IDA sub_262260)
    // -----------------------------------------------------------------

    use super::measure_expr_width;

    fn empty_ctx() -> super::PrintCtx {
        super::PrintCtx::new(
            None,
            BTreeMap::new(),
            BTreeMap::new(),
            BTreeMap::new(),
            BTreeMap::new(),
            BTreeMap::new(),
        )
    }

    /// Constants are measured by their rendered length; signed-context
    /// `1u32` renders as `1` (1 col), wide values render as their decimal
    /// or `0x…ULL` form.
    #[test]
    fn measure_expr_width_constant() {
        let ctx = empty_ctx();
        let one = IrInsn::with_output(IrOp::Copy, reg(0, 4), smallvec![con(1, 4)], 0);
        // Copy passes width through: just `1`.
        assert_eq!(measure_expr_width(&one, 0, &ctx), 1);

        let big = IrInsn::with_output(IrOp::Copy, reg(0, 4), smallvec![con(1234, 4)], 0);
        // signed-context format_constant(1234, 4) → "0x4d2" → 5 cols.
        assert_eq!(measure_expr_width(&big, 0, &ctx), 5);
    }

    /// Binary op width is `lhs + " op " + rhs` with a 2-column op token
    /// approximation; `r0 + 1` ⇒ 4 (var) + 1 + 2 + 1 + 1 (const) = 9
    /// when var falls back to the default 4-column placeholder.
    #[test]
    fn measure_expr_width_binop() {
        let ctx = empty_ctx();
        let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
        let w = measure_expr_width(&add, 0, &ctx);
        // var(4) + space + op(2) + space + const(1) = 9.
        assert_eq!(w, 9);
    }

    /// Call width is `name(arg1, arg2)` — `name` + `(` + sum(args) +
    /// commas + `)`. With one var-target and two const args:
    /// 4 + 1 + 1 + 2 + 1 + 1 = 10.
    #[test]
    fn measure_expr_width_call() {
        let ctx = empty_ctx();
        let call = IrInsn::without_output(
            IrOp::Call,
            smallvec![reg(0, 4), con(1, 4), con(2, 4)],
            0,
        );
        let w = measure_expr_width(&call, 0, &ctx);
        // target(4) + '(' + 1 + ', ' + 1 + ')' = 4+1+1+2+1+1 = 10.
        assert_eq!(w, 10);
    }

    /// Unary op width is `op + child`; here `-r0` ⇒ 1 + 4 = 5.
    #[test]
    fn measure_expr_width_unary() {
        let ctx = empty_ctx();
        let neg = IrInsn::with_output(IrOp::Int2comp, reg(0, 4), smallvec![reg(0, 4)], 0);
        assert_eq!(measure_expr_width(&neg, 0, &ctx), 5);
    }

    // -----------------------------------------------------------------
    // should_break_before — t64 (port of IDA sub_267EB0)
    // -----------------------------------------------------------------

    use super::should_break_before;

    /// Rule 1: same-operator chain — `a + b + c` never breaks.
    #[test]
    fn should_break_same_operator_chain() {
        let ctx = empty_ctx();
        let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
        // Plenty of columns; only the same-op rule should matter.
        assert!(!should_break_before(&add, Some(IrOp::IntAdd), 200, &ctx));
    }

    /// Rule 2: operator family — `IntAdd` inside an `IntSub` parent
    /// stays on the same line (additive family).
    #[test]
    fn should_break_operator_family() {
        let ctx = empty_ctx();
        let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
        // Same additive family — no break.
        assert!(!should_break_before(&add, Some(IrOp::IntSub), 200, &ctx));
        // Cross-family (additive vs bitwise): the family rule does
        // not apply, falls through to the width check.
        let xor = IrInsn::with_output(IrOp::IntXor, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
        // Width fits → no break.
        assert!(!should_break_before(&xor, Some(IrOp::IntAdd), 200, &ctx));
    }

    /// Rule 3: hard floor — under 20 columns of room, every node breaks.
    #[test]
    fn should_break_hard_floor() {
        let ctx = empty_ctx();
        let add = IrInsn::with_output(IrOp::IntAdd, reg(0, 4), smallvec![reg(0, 4), con(1, 4)], 0);
        assert!(should_break_before(&add, None, 19, &ctx));
        // With no parent and exactly the floor we *don't* break (rule
        // 3 requires `<` 20, and the width oracle says `9 ≤ 20`).
        assert!(!should_break_before(&add, None, 20, &ctx));
    }

    /// Rule 4: width oracle — when the measured width exceeds
    /// `available_cols`, force a break.
    #[test]
    fn should_break_width_exceeds() {
        let ctx = empty_ctx();
        // Build a 6-arg call: target + 6 args = 7 inputs.
        // Width ≈ 4 + 1 + 6×1 + 5×2 + 1 = 22.
        let call = IrInsn::without_output(
            IrOp::Call,
            smallvec![
                reg(0, 4),
                con(1, 4),
                con(2, 4),
                con(3, 4),
                con(4, 4),
                con(5, 4),
                con(6, 4),
            ],
            0,
        );
        // 21 columns available, width 22 → break.
        assert!(should_break_before(&call, None, 21, &ctx));
        // 30 columns available, width 22 → fits, no break.
        assert!(!should_break_before(&call, None, 30, &ctx));
    }

    // -----------------------------------------------------------------------
    // PrinterAnnotations integration
    // -----------------------------------------------------------------------

    fn annot_func() -> HirFunction {
        let r8 = reg(8, 4);
        let c1 = con(1, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r8,
                smallvec![c1],
                0x1004,
            )),
            HirNode::Return(Some(sv(8, 4))),
        ];
        let mut f = make_func("sub_1000", body);
        f.addr = 0x1000;
        f
    }

    #[test]
    fn function_comment_renders() {
        let func = annot_func();
        let header = super::FunctionHeaderInfo {
            name: "sub_1000".into(),
            address: 0x1000,
            ..Default::default()
        };
        let mut ann = super::PrinterAnnotations::default();
        ann.function_comment = Some("ENTRY: validates auth token".into());
        let output = super::print_c_with_annotations(
            &func,
            None,
            Some(&header),
            None,
            None,
            None,
            None,
            Some(&ann),
        );
        assert!(
            output.contains("// ENTRY: validates auth token"),
            "missing function comment in: {output}"
        );
    }

    #[test]
    fn custom_name_overrides_default() {
        let func = annot_func();
        let header = super::FunctionHeaderInfo {
            name: "sub_1000".into(),
            address: 0x1000,
            ..Default::default()
        };
        let mut ann = super::PrinterAnnotations::default();
        ann.custom_names.insert(0x1000, "validate_token".into());
        let output = super::print_c_with_annotations(
            &func,
            None,
            Some(&header),
            None,
            None,
            None,
            None,
            Some(&ann),
        );
        assert!(
            output.contains("validate_token("),
            "custom name not used in signature: {output}"
        );
        assert!(
            !output.contains("sub_1000("),
            "fallback synthesized name leaked: {output}"
        );
    }

    #[test]
    fn line_comment_at_addr() {
        let func = annot_func();
        let header = super::FunctionHeaderInfo {
            name: "sub_1000".into(),
            address: 0x1000,
            ..Default::default()
        };
        let mut ann = super::PrinterAnnotations::default();
        ann.line_comments
            .insert(0x1004, "patched for CVE-2024-x".into());
        let output = super::print_c_with_annotations(
            &func,
            None,
            Some(&header),
            None,
            None,
            None,
            None,
            Some(&ann),
        );
        assert!(
            output.contains("// patched for CVE-2024-x"),
            "missing line comment: {output}"
        );
    }

    // ── t122: stack canary + char-case polish ──

    #[test]
    fn canary_load_renders_as_readfsqword() {
        use super::tests::{con, make_func, reg, sv};
        let space = con(0, 8);
        let addr = con(0x28, 8);
        let r8 = reg(8, 8);
        let load = unlace_ir::IrInsn::with_output(
            unlace_ir::IrOp::Load,
            r8,
            smallvec::smallvec![space, addr],
            0x1000,
        );
        let body = vec![
            unlace_struct::HirNode::Statement(load),
            unlace_struct::HirNode::Return(Some(sv(8, 8))),
        ];
        let func = make_func("canary_linux", body);
        let output = super::print_c(&func);
        assert!(
            output.contains("__readfsqword(0x28u)"),
            "expected Linux canary intrinsic: {output}"
        );
    }

    #[test]
    fn canary_load_macos_renders_as_stack_chk_guard() {
        use super::tests::{con, make_func, reg, sv};
        let guard_addr: u64 = 0x100008000;
        let space = con(0, 8);
        let addr = con(guard_addr, 8);
        let r8 = reg(8, 8);
        let load = unlace_ir::IrInsn::with_output(
            unlace_ir::IrOp::Load,
            r8,
            smallvec::smallvec![space, addr],
            0x1000,
        );
        let body = vec![
            unlace_struct::HirNode::Statement(load),
            unlace_struct::HirNode::Return(Some(sv(8, 8))),
        ];
        let func = make_func("canary_macos", body);
        let mut symbols = std::collections::BTreeMap::new();
        symbols.insert(guard_addr, "__stack_chk_guard".to_string());
        let output = super::print_c_full(&func, None, None, Some(&symbols), None);
        assert!(
            output.contains("*__stack_chk_guard"),
            "expected macOS canary indirection: {output}"
        );
    }

    #[test]
    fn case_renders_as_char_literal_when_type_is_char() {
        use super::tests::{con, make_func, reg, sv};
        // Statement that types sv(0, 1) as Int(1) (via Copy with size-1 output).
        let r0_byte = reg(0, 1);
        let c_a = con(b'A' as u64, 1);
        let body = vec![
            unlace_struct::HirNode::Statement(unlace_ir::IrInsn::with_output(
                unlace_ir::IrOp::Copy,
                r0_byte,
                smallvec::smallvec![c_a],
                0x1000,
            )),
            unlace_struct::HirNode::Switch {
                cond: sv(0, 1),
                cases: vec![
                    (
                        unlace_struct::SwitchCase::Value(b'A' as u64),
                        vec![unlace_struct::HirNode::Return(None)],
                        false,
                    ),
                    (
                        unlace_struct::SwitchCase::Value(b'Z' as u64),
                        vec![unlace_struct::HirNode::Return(None)],
                        false,
                    ),
                ],
                default: None,
                jumptable_addr: None,
                jumptable_cases: None,
            },
        ];
        let func = make_func("switch_char", body);
        let output = super::print_c(&func);
        assert!(
            output.contains("case 'A':"),
            "expected char literal for printable ASCII: {output}"
        );
        assert!(
            output.contains("case 'Z':"),
            "expected char literal for printable ASCII: {output}"
        );
    }

    #[test]
    fn case_renders_as_int_when_type_is_int() {
        use super::tests::{con, make_func, reg, sv};
        // Statement that types sv(0, 4) as Int(4) — NOT char.
        let r0 = reg(0, 4);
        let c0 = con(0, 4);
        let body = vec![
            unlace_struct::HirNode::Statement(unlace_ir::IrInsn::with_output(
                unlace_ir::IrOp::Copy,
                r0,
                smallvec::smallvec![c0],
                0x1000,
            )),
            unlace_struct::HirNode::Switch {
                cond: sv(0, 4),
                cases: vec![(
                    unlace_struct::SwitchCase::Value(b'A' as u64),
                    vec![unlace_struct::HirNode::Return(None)],
                    false,
                )],
                default: None,
                jumptable_addr: None,
                jumptable_cases: None,
            },
        ];
        let func = make_func("switch_int", body);
        let output = super::print_c(&func);
        assert!(
            output.contains("case 65:"),
            "int-typed switch should emit integer case label, not char: {output}"
        );
        assert!(
            !output.contains("case 'A':"),
            "int-typed switch must not emit char literal: {output}"
        );
    }

    #[test]
    fn render_objc_class_struct_with_two_ivars() {
        use unlace_loader::{ObjcClass, ObjcIvar};
        let class = ObjcClass {
            name: "ClassName".into(),
            class_addr: 0x1000,
            superclass_addr: 0,
            methods: vec![],
            ivars: vec![
                ObjcIvar { name: "name".into(), offset: 8, type_encoding: "@".into() },
                ObjcIvar { name: "count".into(), offset: 16, type_encoding: "q".into() },
            ],
            properties: vec![],
            protocols: vec![],
        };
        let out = super::render_objc_class_struct(&class).expect("two ivars → Some");
        assert!(out.contains("struct ClassName {"), "{out}");
        assert!(out.contains("id name;"), "{out}");
        assert!(out.contains("long long count;"), "{out}");
        assert!(out.trim_end().ends_with("};"), "{out}");
    }

    #[test]
    fn render_objc_class_struct_with_no_ivars_returns_none() {
        use unlace_loader::ObjcClass;
        let class = ObjcClass {
            name: "Empty".into(),
            class_addr: 0x2000,
            superclass_addr: 0,
            methods: vec![],
            ivars: vec![],
            properties: vec![],
            protocols: vec![],
        };
        assert!(super::render_objc_class_struct(&class).is_none());
    }

    #[test]
    fn render_objc_class_struct_handles_unknown_type_encoding() {
        use unlace_loader::{ObjcClass, ObjcIvar};
        let class = ObjcClass {
            name: "Weird".into(),
            class_addr: 0x3000,
            superclass_addr: 0,
            methods: vec![],
            ivars: vec![ObjcIvar {
                name: "mystery".into(),
                offset: 0,
                type_encoding: "?".into(),
            }],
            properties: vec![],
            protocols: vec![],
        };
        let out = super::render_objc_class_struct(&class).unwrap();
        assert!(out.contains("void*"), "{out}");
        assert!(out.contains("/* type=? */"), "{out}");
        assert!(out.contains("mystery"), "{out}");
    }

    // -----------------------------------------------------------------------
    // t152 — string-hash switch case rendering
    // -----------------------------------------------------------------------

    fn hash_switch_func(case_val: u64) -> HirFunction {
        let r0 = reg(0, 4);
        let c0 = con(0, 4);
        let body = vec![
            HirNode::Statement(IrInsn::with_output(
                IrOp::Copy,
                r0,
                smallvec![c0],
                0x1000,
            )),
            HirNode::Switch {
                cond: sv(0, 4),
                cases: vec![(
                    SwitchCase::Value(case_val),
                    vec![HirNode::Return(None)],
                    false,
                )],
                default: None,
                jumptable_addr: None,
                jumptable_cases: None,
            },
        ];
        make_func("switch_hash", body)
    }

    #[test]
    fn c_printer_renders_hash_case_with_string_comment() {
        let func = hash_switch_func(0x3610_A686);
        let mut ann = super::PrinterAnnotations::default();
        ann.string_hash_table.insert(0x3610_A686, "hello".into());
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        assert!(
            output.contains("case 0x3610A686u:") && output.contains("/* \"hello\" */"),
            "expected hash case with string comment, got:\n{output}"
        );
    }

    #[test]
    fn c_printer_renders_unknown_hash_case_normally() {
        let func = hash_switch_func(0xDEAD_BEEF);
        let mut ann = super::PrinterAnnotations::default();
        ann.string_hash_table.insert(0x3610_A686, "hello".into());
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        assert!(
            output.contains("case 3735928559:") || output.contains("case 0xDEADBEEF"),
            "expected plain integer case for unknown hash, got:\n{output}"
        );
        assert!(
            !output.contains("/* \""),
            "no string comment expected for unknown hash, got:\n{output}"
        );
    }

    #[test]
    fn c_printer_escapes_special_chars_in_string_comment() {
        let func = hash_switch_func(0x1234_5678);
        let mut ann = super::PrinterAnnotations::default();
        ann.string_hash_table
            .insert(0x1234_5678, "a\"b\\c".into());
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        assert!(
            output.contains(r#"/* "a\"b\\c" */"#),
            "expected escape_default-rendered string, got:\n{output}"
        );
    }

    // -----------------------------------------------------------------------
    // t153 — ObjC class struct decls in C output preamble
    // -----------------------------------------------------------------------

    fn minimal_func() -> HirFunction {
        make_func("noop", vec![HirNode::Return(None)])
    }

    fn objc_class(name: &str, ivars: Vec<unlace_loader::ObjcIvar>) -> unlace_loader::ObjcClass {
        unlace_loader::ObjcClass {
            name: name.into(),
            class_addr: 0,
            superclass_addr: 0,
            methods: vec![],
            ivars,
            properties: vec![],
            protocols: vec![],
        }
    }

    #[test]
    fn preamble_emits_objc_class_struct() {
        let func = minimal_func();
        let mut ann = super::PrinterAnnotations::default();
        ann.objc_classes.push(objc_class(
            "ClassName",
            vec![
                unlace_loader::ObjcIvar { name: "name".into(), offset: 8, type_encoding: "@".into() },
                unlace_loader::ObjcIvar { name: "count".into(), offset: 16, type_encoding: "q".into() },
            ],
        ));
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        assert!(
            output.contains("struct ClassName {"),
            "expected preamble to contain ObjC class struct, got:\n{output}"
        );
        assert!(
            output.contains("// ObjC class layouts"),
            "expected preamble heading comment, got:\n{output}"
        );
    }

    #[test]
    fn preamble_omits_classes_with_no_ivars() {
        let func = minimal_func();
        let mut ann = super::PrinterAnnotations::default();
        ann.objc_classes.push(objc_class("Empty", vec![]));
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        assert!(
            !output.contains("struct Empty"),
            "ivar-less class should not produce a struct decl, got:\n{output}"
        );
        assert!(
            !output.contains("// ObjC class layouts"),
            "heading must not appear when nothing was emitted, got:\n{output}"
        );
    }

    #[test]
    fn preamble_emits_multiple_classes() {
        let func = minimal_func();
        let mut ann = super::PrinterAnnotations::default();
        ann.objc_classes.push(objc_class(
            "Alpha",
            vec![unlace_loader::ObjcIvar { name: "a".into(), offset: 0, type_encoding: "i".into() }],
        ));
        ann.objc_classes.push(objc_class(
            "Beta",
            vec![unlace_loader::ObjcIvar { name: "b".into(), offset: 0, type_encoding: "q".into() }],
        ));
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        assert!(output.contains("struct Alpha {"), "missing Alpha:\n{output}");
        assert!(output.contains("struct Beta {"), "missing Beta:\n{output}");
    }

    // ----- t196: ObjC categories preamble -----

    fn objc_method(name: &str) -> unlace_loader::ObjcMethod {
        unlace_loader::ObjcMethod {
            name: name.into(),
            type_encoding: "v@:".into(),
            imp_addr: 0,
        }
    }

    fn objc_category(
        name: &str,
        class_name: Option<&str>,
        instance_methods: Vec<unlace_loader::ObjcMethod>,
    ) -> unlace_loader::ObjcCategory {
        unlace_loader::ObjcCategory {
            name: name.into(),
            class_addr: 0xCAFEBABE,
            class_name: class_name.map(Into::into),
            instance_methods,
            class_methods: vec![],
            properties: vec![],
            protocols: vec![],
        }
    }

    #[test]
    fn preamble_emits_category_with_two_instance_methods() {
        let func = minimal_func();
        let mut ann = super::PrinterAnnotations::default();
        ann.objc_categories.push(objc_category(
            "Networking",
            Some("MyController"),
            vec![objc_method("methodA"), objc_method("methodB")],
        ));
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        assert!(
            output.contains("// ObjC categories (recovered from __objc_catlist)"),
            "expected category section heading, got:\n{output}"
        );
        assert!(
            output.contains("// @interface MyController (Networking)"),
            "expected @interface header line, got:\n{output}"
        );
        assert!(
            output.contains("//   - methodA();"),
            "expected methodA line, got:\n{output}"
        );
        assert!(
            output.contains("//   - methodB();"),
            "expected methodB line, got:\n{output}"
        );
        assert!(
            output.contains("// @end"),
            "expected @end terminator, got:\n{output}"
        );
    }

    #[test]
    fn preamble_emits_category_with_no_methods_as_empty_body() {
        let func = minimal_func();
        let mut ann = super::PrinterAnnotations::default();
        ann.objc_categories
            .push(objc_category("Stubs", Some("WidgetView"), vec![]));
        let output = super::print_c_with_annotations(
            &func, None, None, None, None, None, None, Some(&ann),
        );
        // Header + @end must be present even though the body is empty;
        // that's the whole point of surfacing zero-method categories.
        assert!(
            output.contains("// @interface WidgetView (Stubs)"),
            "expected header line, got:\n{output}"
        );
        assert!(
            output.contains("// @end"),
            "expected @end terminator, got:\n{output}"
        );
        // Sanity: there must be exactly zero method lines for this category.
        // We test this structurally — between the `@interface` and `@end`
        // lines there should be no `//   -` or `//   +` selector entries.
        let header_idx = output
            .find("// @interface WidgetView (Stubs)")
            .expect("header line must be present");
        let end_idx = output[header_idx..]
            .find("// @end")
            .expect("@end must follow header");
        let body = &output[header_idx..header_idx + end_idx];
        assert!(
            !body.contains("//   -") && !body.contains("//   +"),
            "empty-method category body must not contain selector lines, got body:\n{body}"
        );
    }
}
