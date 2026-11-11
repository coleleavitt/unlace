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
//! | `cot_asgXxx` (3..15)   | `a += b` etc.       | `try_emit_compound_assign`, `postprocess::combine` | ✅ |
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
//! | `cot_postinc` (53)     | `x++`               | not emitted (statement position uses `++x`) | n/a |
//! | `cot_postdec` (54)     | `x--`               | not emitted (statement position uses `--x`) | n/a |
//! | `cot_preinc` (55)      | `++x`               | `try_emit_increment_form`, `postprocess::combine` | ✅ |
//! | `cot_predec` (56)      | `--x`               | `try_emit_increment_form`, `postprocess::combine` | ✅ |
//! | `cot_idx` (57)         | `arr[i]`            | `try_array_subscript`, `cpa`, `member_path` | ✅ |
//! | `cot_memref` (58)      | `s.m`               | `cpa`, `member_path` (nested members) | ✅ |
//! | `cot_memptr` (59)      | `p->m`              | `cpa`, `member_path`         | ✅ |
//! | `cot_call` (60)        | `f(...)`            | `Call`/`Callind`             | ✅ |
//! | `cot_var/obj/num/...`  | name / literal      | `emit_operand_with_prec`     | ✅ |
//! | `cot_str` (63)         | `"..."`             | `emit_operand_with_prec` + `escape_c_string` | ✅ |
//! | `cot_fnum` (64)        | float literal       | `format_constant_ctx` + `format_float_literal` | ✅ |
//! | `cot_helper` (65)      | `__builtin_*` call  | `callother_intrinsic_name` table; `Popcount`/`Lzcount` direct | ✅ |
//! | `cot_sizeof` (66)      | `sizeof(x)`         | helper [`emit_sizeof_expr`] / [`emit_sizeof_type`] available; no IR producer yet | ⚠️ deferred |
//! | `cot_alignof` (67)     | `_Alignof(T)`       | helper [`emit_alignof_type`] available; no IR producer yet | ⚠️ deferred |
//! | `cot_label` (68)       | `&&label` (GCC ext) | not emitted (no computed-goto in IR)         | ❌ out-of-scope |
//! | `cot_type` (69)        | bare type-as-expr   | only meaningful inside `sizeof`/`offseto//! * **`cot_preinc` / `cot_predec`**: Hex-Rays prints a statement-level
//!   increment in prefix form (`++v7;`, `for (...; ++i)`); only an increment
//!   whose old value is consumed is postfix. Unlace never consumes the old
//!   value, so every increment it emits is prefix.
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

use crate::expr_ast::CExpr;
use std::collections::{BTreeMap, BTreeSet};
use std::fmt::Write;
use unlace_ir::eh::SehFilter;
use unlace_ir::lvar::{LvarFlags, LvarSource, LvarStorage};
use unlace_ir::reg_alias::aliases;
use unlace_ir::ssa::{
    DwarfStackLocalSpan, GoDeferSite, PanicKind, PrimitiveType, SsaFunction, SsaVarnode, TargetSet,
};
use unlace_ir::syscall::{NUMBER_INPUT, SyscallConvention};
use unlace_ir::types::{Type, TypeKind};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};
use unlace_loader::{DwarfInfo, FunctionDebugInfo};
use unlace_struct::{HirFunction, HirNode, SwitchCase};
#[path = "c_printer_cpa.rs"]
mod cpa;
#[path = "c_printer_mem_objects.rs"]
mod mem_objects;
#[path = "c_printer_member_path.rs"]
mod member_path;
#[path = "c_printer_postprocess.rs"]
mod postprocess;
#[path = "c_printer_ternary.rs"]
mod ternary;
#[path = "c_printer_trace.rs"]
mod trace;
use cpa::{
    Pointee, object_access_is_stable, try_object_access, try_typed_access, try_typed_pointer_sum,
    typed_access_is_stable, typed_pointer_update,
};
use mem_objects::MemObjects;
pub use mem_objects::dedupe_object_declarations;
use member_path::StructLayouts;
use postprocess::*;
use ternary::{collect_ternary, emit_ternary, ternary_text};
use trace::*;

#[path = "c_printer_addressing.rs"]
mod addressing;
#[path = "c_printer_annotations.rs"]
mod annotations;
#[path = "c_printer_calls.rs"]
mod calls;
#[path = "c_printer_casts.rs"]
mod casts;
#[path = "c_printer_collect.rs"]
mod collect;
#[path = "c_printer_conditions.rs"]
mod conditions;
#[path = "c_printer_emit.rs"]
mod emit;
#[path = "c_printer_expr.rs"]
mod expr;
#[path = "c_printer_externals.rs"]
mod externals;
#[path = "c_printer_folding.rs"]
mod folding;
#[path = "c_printer_header.rs"]
mod header;
#[path = "c_printer_hoist.rs"]
mod hoist;
#[path = "c_printer_intrinsics.rs"]
mod intrinsics;
#[path = "c_printer_line_width.rs"]
mod line_width;
#[path = "c_printer_literals.rs"]
mod literals;
#[path = "c_printer_load_inline.rs"]
mod load_inline;
#[path = "c_printer_macros.rs"]
mod macros;
#[path = "c_printer_mem_analysis.rs"]
mod mem_analysis;
#[path = "c_printer_naming.rs"]
mod naming;
#[path = "c_printer_objc.rs"]
mod objc;
#[path = "c_printer_operands.rs"]
mod operands;
#[path = "c_printer_precedence.rs"]
mod precedence;
#[path = "c_printer_regnames.rs"]
mod regnames;
#[path = "c_printer_return_expr.rs"]
mod return_expr;
#[path = "c_printer_return_merge.rs"]
mod return_merge;
#[path = "c_printer_rtti.rs"]
mod rtti;
#[path = "c_printer_stack_access.rs"]
mod stack_access;
#[path = "c_printer_stack_decls.rs"]
mod stack_decls;
#[path = "c_printer_stack_names.rs"]
mod stack_names;
#[path = "c_printer_struct_preamble.rs"]
mod struct_preamble;
#[path = "c_printer_suppression.rs"]
mod suppression;
#[path = "c_printer_types.rs"]
mod types;

use addressing::*;
use annotations::*;
pub use annotations::{
    PrinterAnnotations, SsaStatementSlots, StackLvarAnnotation, UsercallSpec,
    stack_lvar_annotations_from_ssa,
};
use calls::*;
pub(crate) use casts::should_emit_cast;
use casts::*;
use collect::*;
use conditions::*;
use emit::*;
use expr::*;
pub use externals::{declare_pseudo_c_externals, dedupe_ida_typedefs, strip_ida_typedefs};
use folding::*;
use header::*;
use hoist::*;
pub use intrinsics::aarch64_neon_intrinsic_name;
use intrinsics::*;
#[cfg(test)]
use line_width::*;
#[cfg(test)]
pub(crate) use literals::format_float_literal;
use literals::*;
use load_inline::*;
use macros::*;
#[cfg(test)]
pub(crate) use macros::{emit_alignof_type, emit_sizeof_expr, emit_sizeof_type};
use mem_analysis::*;
use naming::*;
use objc::*;
pub use objc::{objc_type_encoding_to_c, render_objc_category, render_objc_class_struct};
use operands::*;
use precedence::*;
use regnames::*;
use return_expr::*;
use return_merge::*;
pub use rtti::dedupe_rtti_hierarchy;
use rtti::*;
use stack_access::*;
use stack_decls::*;
use stack_names::*;
pub use struct_preamble::{compute_array_struct_indices, emit_inferred_struct_preamble};
use suppression::*;
use types::*;
fn cprinter_detail_phase(name: &'static str) -> Option<linkscope::Span> {
    linkscope::trace_detail_enabled().then(|| linkscope::phase(name))
}
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
                    PrimitiveType::Vector(v) => i64::from(v.size()),
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
/// Same as [`print_c_with_rtti`] but accepts an explicit [`PrintConfig`].
/// When `config` is `None` the printer uses [`PrintConfig::default`].
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
    // A call folded into its reader must be printed exactly once. The printer
    // decides that a statement is suppressed, or that a temporary is
    // re-rendered at each read, in many places; rather than predict every one,
    // check the output and print again with the unconfirmed calls kept as
    // statements. Each retry vetoes at least one more call, so this ends.
    let mut call_fold_veto = BTreeSet::new();
    loop {
        let (output, unconfirmed) = print_c_attempt(
            func,
            dwarf,
            header,
            symbols,
            string_table,
            rtti,
            config,
            annotations,
            &call_fold_veto,
        );
        if unconfirmed.is_empty() {
            return output;
        }
        tracing::debug!(target: "unlace::cprinter",
            "fold-call-retry func={} unconfirmed={unconfirmed:?}",
            func.name
        );
        call_fold_veto.extend(unconfirmed);
    }
}
/// One printing of `func`, with the calls at `call_fold_veto` kept as
/// statements. Also returns the folded calls whose text does not appear
/// exactly once in the output.
#[allow(clippy::too_many_arguments)]
fn print_c_attempt(
    func: &HirFunction,
    dwarf: Option<&DwarfInfo>,
    header: Option<&FunctionHeaderInfo>,
    symbols: Option<&BTreeMap<u64, String>>,
    string_table: Option<&BTreeMap<u64, String>>,
    rtti: Option<&unlace_loader::RttiInfo>,
    config: Option<PrintConfig>,
    annotations: Option<&PrinterAnnotations>,
    call_fold_veto: &BTreeSet<u32>,
) -> (String, BTreeSet<u32>) {
    let _print_span = linkscope::phase("cprinter.print");
    let context_span = linkscope::phase("cprinter.context-build");
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
        func.merged_names.clone(),
        func.var_role_names.clone(),
    );
    ctx.call_fold_veto = call_fold_veto.clone();
    if let Some(ann) = annotations {
        ctx.line_comments = ann.line_comments.clone();
        ctx.custom_names = ann.custom_names.clone();
        ctx.string_hash_table = ann.string_hash_table.clone();
        ctx.readonly_scalars = ann.readonly_scalars.clone();
        ctx.ssa_statement_slots = ann.ssa_statement_slots.clone();
        ctx.ssa_phi_uses = ann.ssa_phi_uses.clone();
        ctx.return_value_aliases = ann.return_value_aliases.clone();
        ctx.stack_lvars = ann.stack_lvars.clone();
        ctx.pdb_constants_by_value = ann.pdb_constants_by_value.clone();
        ctx.forwarded_resolutions = ann.forwarded_resolutions.clone();
        ctx.auth_calls = ann.auth_calls.clone();
        ctx.go_iface_devirtualized_calls = ann.go_iface_devirtualized_calls.clone();
        ctx.cxx_eh_actions = ann.cxx_eh_actions.clone();
        ctx.libc_call_canonical = ann.libc_call_canonical.clone();
        ctx.libc_call_original = ann.libc_call_original.clone();
        ctx.array_struct_layouts = ann.array_struct_layouts.clone();
        ctx.array_struct_indices = ann.array_struct_indices.clone();
        ctx.go_defer_sites = ann.go_defer_sites.clone();
        ctx.byref_union_types = ann.byref_union_types.clone();
        ctx.flirt_call_annotations = ann.flirt_call_annotations.clone();
        ctx.stack_spec = ann.arch.and_then(unlace_ir::stack::StackSpec::for_arch);
        ctx.arch = ann.arch;
        ctx.mem_objects = MemObjects::new(&ann.object_types, ann.arch, &ctx.symbols);
        ctx.var_types.extend(
            ann.vector_var_types
                .iter()
                .map(|(sv, v)| (*sv, PrimitiveType::Vector(*v))),
        );
    }
    if let Some(cfg) = config {
        ctx.config = cfg;
    }
    ctx.frame_size = header.map(|h| h.stack_frame);
    ctx.sp_frame_offsets = func
        .stack_frame
        .as_ref()
        .map(|frame| frame.sp_offset_at_addr.clone())
        .unwrap_or_default();
    ctx.objc_dispatch_calls = func.objc_dispatch_calls.clone();
    ctx.byref_boxes = func.byref_boxes.clone();
    ctx.go_defer_sites = func.go_defer_sites.clone();
    ctx.vtable_call_targets = func.vtable_call_targets.clone();
    drop(context_span);
    trace_stack_lvar_inventory("annotations", &ctx.stack_lvars);
    trace_full(format_args!(
        "print-enter func={} body_len={} annotations={} dwarf={} header={} symbols={} strings={} rtti={}",
        func.name,
        func.body.len(),
        annotations.is_some(),
        dwarf.is_some(),
        header.is_some(),
        ctx.symbols.len(),
        ctx.string_table.len(),
        rtti.is_some()
    ));
    trace_ctx_snapshot("init", &ctx);

    let precompute_span = linkscope::phase("cprinter.precompute");
    let dwarf_func = {
        let _span = linkscope::phase("cprinter.precompute.dwarf-function");
        dwarf.and_then(|d| dwarf_function_for_func(d, func, header))
    };
    ctx.parent_returns_void = {
        let _span = linkscope::phase("cprinter.precompute.parent-returns-void");
        function_body_returns_void(func, dwarf_func)
    };
    {
        let _span = linkscope::phase("cprinter.precompute.dwarf-locals");
        compute_dwarf_locals(dwarf_func, header, &mut ctx);
    }
    trace_ctx_snapshot("dwarf-locals", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.suppressed-stack");
        compute_suppressed_stack_offsets(func, &mut ctx);
    }
    trace_ctx_snapshot("suppressed-stack", &ctx);
    // t232: register recovered stack-frame slots as named locals
    // (`v_<offset>` for scalars, `buf_<offset>` for arrays). DWARF
    // locals take priority and have already been registered above; this
    // call only fills in slots DWARF did not name.
    {
        let _span = linkscope::phase("cprinter.precompute.stack-frame-names");
        compute_stack_frame_names(func, &mut ctx);
        compute_stack_param_slot_names(func, &mut ctx);
    }
    trace_stack_frame_inventory("after-stack-frame-names", func);
    trace_stack_slot_inventory("after-stack-frame-names", &ctx);
    trace_stack_lvar_slot_crosscheck("after-stack-frame-names", &ctx);
    trace_ctx_snapshot("stack-frame-names", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.loop-counter-names");
        compute_loop_counter_names(&func.body, 0, &mut ctx);
    }
    trace_ctx_snapshot("loop-counter-names", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.param-register-names");
        compute_param_register_names(func, dwarf_func, header, &mut ctx);
        compute_param_pointees(dwarf_func, header, &mut ctx);
    }
    trace_ctx_snapshot("param-register-names", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.collect-varnodes");
        collect_varnodes(&func.body, &mut ctx);
    }
    trace_ctx_snapshot("collect-varnodes", &ctx);
    split_duplicated_temp_defs(&mut ctx);
    ctx.rbp_is_general_register = rbp_is_general_register(&ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.canary-stack-offsets");
        compute_canary_stack_offsets(&mut ctx);
    }
    trace_ctx_snapshot("canary-stack-offsets", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.promote-stack-address-call-arrays");
        promote_stack_address_call_arrays(&func.body, &mut ctx);
    }
    trace_ctx_snapshot("promote-stack-address-call-arrays", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.claim-frame-objects");
        mem_objects::claim_frame_objects(func, &mut ctx);
    }
    {
        let _span = linkscope::phase("cprinter.precompute.foldable");
        compute_foldable(&mut ctx);
    }
    trace_ctx_snapshot("foldable", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.dead-chains");
        propagate_dead_chains(&mut ctx);
    }
    trace_ctx_snapshot("dead-chains", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.byref-bases");
        compute_byref_bases(&mut ctx);
    }
    trace_ctx_snapshot("byref-bases", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.heuristic-names");
        compute_heuristic_names(&func.body, &mut ctx);
    }
    trace_ctx_snapshot("heuristic-names", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.dedupe-var-names");
        dedupe_var_names(&mut ctx);
    }
    trace_ctx_snapshot("dedupe-var-names", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.hoist-plan");
        compute_hoist_plan(&mut ctx);
    }
    trace_ctx_snapshot("hoist-plan", &ctx);
    {
        let _span = linkscope::phase("cprinter.precompute.mmio-addrs");
        detect_mmio_addrs(&mut ctx);
    }
    trace_ctx_snapshot("mmio-addrs", &ctx);
    let merged_return_stmts = {
        let _span = linkscope::phase("cprinter.precompute.merged-return-stmts");
        merged_assign_return_stmt_indices(&func.body, &ctx)
    };
    let mut merged_return_svs: BTreeSet<SsaVarnode> = merged_return_stmts
        .iter()
        .filter_map(|stmt_idx| ctx.stmt_outputs.get(stmt_idx).copied().flatten())
        .collect();
    {
        let _span = linkscope::phase("cprinter.precompute.merged-call-return-svs");
        merged_return_svs.extend(merged_call_return_svs(&func.body, &ctx));
    }
    let post_dowhile_return_svs = {
        let _span = linkscope::phase("cprinter.precompute.post-dowhile-return-svs");
        post_dowhile_recovered_return_svs(&func.body, &ctx)
    };
    trace_full(format_args!(
        "return-precompute func={} merged_return_stmts={} merged_return_svs={} post_dowhile_return_svs={}",
        func.name,
        merged_return_stmts.len(),
        merged_return_svs.len(),
        post_dowhile_return_svs.len()
    ));
    ctx.has_stack_address_targets = !ctx.stack_frame_slots.is_empty()
        || ctx
            .name_overrides
            .keys()
            .any(|vn| vn.space == SpaceId::Stack);
    drop(precompute_span);

    let preamble_span = linkscope::phase("cprinter.preamble-header");
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
                unlace_ir::types::Type::TypeParam { name, constraint } => (
                    format!("dictabi_0x{va:x}"),
                    format!("[{name} {constraint}]"),
                ),
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

    if let Some(msvc_rtti) = annotations
        .and_then(|a| a.msvc_rtti.as_ref())
        .filter(|r| !r.classes.is_empty())
    {
        emit_msvc_rtti_hierarchy(msvc_rtti, &mut out);
    }

    if let Some(summary) = render_go_defer_summary(func.go_defer_sites.as_slice(), symbols) {
        out.push_str(&summary);
        out.push('\n');
    }

    if let Some(preamble) = dwarf.and_then(emit_dwarf_struct_preamble) {
        out.push_str("// DWARF composite types\n");
        out.push_str(&preamble);
        out.push('\n');
    }

    // t147 / t224: synthesised composite preamble (stack-frame structs +
    // array-of-structs layouts).  Pre-rendered by the CLI driver via
    // `emit_inferred_struct_preamble` and piped through `PrinterAnnotations`
    // because the printer takes a `HirFunction`, not the `SsaFunction` that
    // owns the recovery maps.
    if let Some(preamble) = annotations
        .and_then(|a| a.inferred_struct_preamble.as_deref())
        .filter(|s| !s.is_empty())
    {
        out.push_str("// Recovered composite layouts (t147 stack frame, t213 array-of-structs)\n");
        out.push_str(preamble);
        out.push('\n');
    }

    // The object declarations go here, but which globals need one is known
    // only once the body has printed its accesses.
    let object_decls_at = out.len();

    if let Some(dwarf) = dwarf
        && !dwarf.languages.is_empty()
    {
        let languages = dwarf
            .languages
            .iter()
            .map(|language| language.display_name())
            .collect::<Vec<_>>()
            .join(", ");
        let _ = writeln!(out, "// debug language: {languages}");
    }

    if let Some(ann) = annotations.and_then(|a| a.function_comment.as_deref()) {
        for line in ann.lines() {
            let _ = writeln!(out, "// {}", line);
        }
    }

    // t265 — emit a call-graph xref summary listing up to five direct
    // callers of this function. Format mirrors IDA's `sub_<X>+<off>`
    // notation, where `off` is the call site's distance from the
    // caller's entry. Empty when the function has no recorded
    // callers (leaf / unreferenced).
    if let Some(callers) = annotations.and_then(|a| a.xref_callers.get(&func.addr))
        && !callers.is_empty()
    {
        let mut parts: Vec<String> = callers
            .iter()
            .take(5)
            .map(|(caller_entry, call_site)| {
                let delta = call_site.wrapping_sub(*caller_entry);
                format!("sub_{:x}+{:x}", caller_entry, delta)
            })
            .collect();
        if callers.len() > 5 {
            parts.push("...".to_string());
        }
        let _ = writeln!(out, "// xref: {}", parts.join(", "));
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
        // A C++ member's DWARF name is unqualified (`speak`, `~Dog`); the
        // demangled symbol carries the class it needs (`Dog_speak`).
        (None, Some(df), dr) if dr.as_ref().is_none_or(|dr| dr.class_name.is_none()) => {
            df.name.clone()
        }
        (None, _, Some(dr)) => {
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
        (None, _, None) => c_symbol_name(&func.name),
    };

    // t230 — prefer the finalized signature over the raw inferred
    // params/return when the late calling-convention pass has run.
    // DWARF still wins above it (DWARF carries source-level truth that
    // the inference can only approximate).
    let dwarf_return_type = dwarf_func.and_then(|df| df.return_type.as_deref());
    let mut return_type_str = dwarf_return_type
        .map(dwarf_type_to_c)
        .or_else(|| {
            func.finalized_signature
                .as_ref()
                .map(|sig| c_sig_return_type_for_type(&sig.return_type))
        })
        .unwrap_or_else(|| c_sig_return_type(&func.return_type).to_string());
    if emit_name == "main" && dwarf_return_type.is_none() {
        return_type_str = "int".to_string();
    }

    let conv_annotation = header.and_then(|h| calling_convention_annotation(&h.convention));
    let noreturn_prefix = if func.noreturn && emit_name != "main" {
        "_Noreturn "
    } else {
        ""
    };
    // t260: per-function __usercall / __userpurge spec from annotations.
    // When present, this wins over the generic `__cdecl`/`__fastcall`
    // annotation since IDA only emits one calling-convention sigil per
    // header and __usercall already encodes the full register sequence.
    let usercall_spec = annotations.and_then(|a| a.usercall.as_ref());
    if let Some(uc) = usercall_spec {
        let kind = if uc.purge {
            "__userpurge"
        } else {
            "__usercall"
        };
        // `<ret>` suffix is omitted for void returns or when the spec
        // didn't pin a return register.
        let ret_suffix = if uc.return_reg.is_empty() {
            String::new()
        } else {
            format!("@<{}>", uc.return_reg)
        };
        let _ = write!(
            out,
            "{}{} {} {}{}(",
            noreturn_prefix, return_type_str, kind, emit_name, ret_suffix
        );
    } else if let Some(conv) = conv_annotation {
        let _ = write!(
            out,
            "{}{} {} {}(",
            noreturn_prefix, return_type_str, conv, emit_name
        );
    } else {
        let _ = write!(out, "{}{} {}(", noreturn_prefix, return_type_str, emit_name);
    }

    let force_void_main_params =
        emit_name == "main" && dwarf_func.is_none_or(|df| df.params.is_empty());
    if let Some(df) = dwarf_func.filter(|df| !df.params.is_empty()) {
        for (i, param) in df.params.iter().enumerate() {
            if i > 0 {
                out.push_str(", ");
            }
            let ty = param
                .type_name
                .as_deref()
                .map(|ty| dwarf_decl_to_c(ty, param.name.as_deref().unwrap_or("arg")))
                .unwrap_or_else(|| "int".to_string());
            let name = param.name.as_deref().unwrap_or("arg");
            if param.type_name.is_some() {
                let _ = write!(out, "{ty}");
            } else {
                let _ = write!(out, "{} {}", ty, name);
            }
        }
        if df.variadic {
            out.push_str(", ...");
        }
    } else if force_void_main_params {
        out.push_str("void");
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
        let cpp_free_param_types = demangled
            .as_ref()
            .filter(|dr| {
                dr.language == crate::demangle::SymbolLanguage::Cpp
                    && dr.class_name.is_none()
                    && !dr.param_types.is_empty()
            })
            .map(|dr| dr.param_types.as_slice());
        if let Some(param_types) = cpp_free_param_types {
            c_printer_trace_line(
                &func.name,
                format!(
                    "header-param-source=cpp-demangle demangled={} param_types={param_types:?}",
                    demangled
                        .as_ref()
                        .map(|dr| dr.full_signature.as_str())
                        .unwrap_or("<none>")
                ),
            );
        }
        // With the receiver already printed from its class, the inferred
        // first parameter it names is the same `this`.
        let this_printed = param_idx > 0;
        // t230 — when finalize-signature has run, use its `params` list
        // (post-dead-drop, post-byte-mask-narrow) instead of the raw
        // `func.params`. This is how the dead-param drop becomes
        // visible in the header and `int8` byte-masked params show up
        // as `char` instead of `__int64`.
        if let Some(sig) = func.finalized_signature.as_ref() {
            for (i, (pname, pty)) in sig.params.iter().enumerate() {
                if this_printed && pname == "this" {
                    continue;
                }
                if param_idx > 0 || i > 0 {
                    out.push_str(", ");
                }
                if let Some(union_decl) = try_emit_byref_union_param(
                    i as u32,
                    pname,
                    &func.byref_params,
                    &ctx.byref_union_types,
                ) {
                    out.push_str(&union_decl);
                } else if let Some(decl) = cpp_demangled_param_decl(cpp_free_param_types, i, pname)
                {
                    c_printer_trace_line(
                        &func.name,
                        format!(
                            "header-param idx={i} name={pname} source=cpp-demangle decl={decl}"
                        ),
                    );
                    out.push_str(&decl);
                } else {
                    match pty {
                        Type::Primitive(_) | Type::Named(_) => {
                            let _ = write!(out, "{} {}", c_sig_type_for_type(pty), pname);
                        }
                        _ => out.push_str(&render_type_decl_as_c(pty, pname)),
                    }
                    // t260: __usercall register-location suffix.
                    if let Some(reg) = usercall_spec
                        .and_then(|uc| uc.param_regs.get(i))
                        .filter(|r| !r.is_empty())
                    {
                        let _ = write!(out, "@<{}>", reg);
                    }
                    if func.byref_params.contains(&(i as u32)) {
                        out.push_str(" /* BYREF */");
                    }
                }
                param_idx += 1;
            }
        } else {
            for (i, (pname, pty)) in func.params.iter().enumerate() {
                if this_printed && pname == "this" {
                    continue;
                }
                if param_idx > 0 || i > 0 {
                    out.push_str(", ");
                }
                if let Some(union_decl) = try_emit_byref_union_param(
                    i as u32,
                    pname,
                    &func.byref_params,
                    &ctx.byref_union_types,
                ) {
                    out.push_str(&union_decl);
                } else if let Some(decl) = cpp_demangled_param_decl(cpp_free_param_types, i, pname)
                {
                    c_printer_trace_line(
                        &func.name,
                        format!(
                            "header-param idx={i} name={pname} source=cpp-demangle decl={decl}"
                        ),
                    );
                    out.push_str(&decl);
                } else {
                    let _ = write!(out, "{} {}", c_sig_type(pty), pname);
                    // t260: __usercall register-location suffix.
                    if let Some(reg) = usercall_spec
                        .and_then(|uc| uc.param_regs.get(i))
                        .filter(|r| !r.is_empty())
                    {
                        let _ = write!(out, "@<{}>", reg);
                    }
                    if func.byref_params.contains(&(i as u32)) {
                        out.push_str(" /* BYREF */");
                    }
                }
                param_idx += 1;
            }
        }
        if func
            .finalized_signature
            .as_ref()
            .is_some_and(|sig| sig.variadic)
        {
            out.push_str(if param_idx == 0 { "..." } else { ", ..." });
            param_idx += 1;
        }
        if param_idx == 0 && dwarf_func.is_none_or(|df| df.params.is_empty()) {
            out.push_str("void");
        }
    }
    out.push(')');
    // t230 / t263 — surface the dead-param drop count as a trailing
    // comment so a reader can cross-check the recovered prototype
    // against an external declaration. Format mirrors the t263 task
    // spec: `// dropped N param(s) (dead in body)` — the `(s)`
    // bracket is literal (no singular/plural variation) so the comment
    // string is stable across functions.
    if let Some(sig) = func.finalized_signature.as_ref()
        && sig.dropped_param_count > 0
    {
        let _ = write!(
            out,
            " /* // dropped {} param(s) (dead in body) */",
            sig.dropped_param_count,
        );
    }
    out.push_str(" {\n");
    drop(preamble_span);
    let materialized_dwarf_array_names: BTreeSet<String> = ctx
        .dwarf_array_buffer_decls
        .values()
        .map(|arr| arr.name.clone())
        .collect();
    emit_dwarf_local_summary(dwarf_func, &materialized_dwarf_array_names, &mut out);

    let mut foldable_svs: BTreeSet<SsaVarnode> = ctx
        .foldable_stmts
        .iter()
        .filter_map(|stmt_idx| ctx.stmt_outputs.get(stmt_idx).copied().flatten())
        .collect();
    // A value the SSA pass found foldable still needs a declaration when the
    // printer kept one of its definitions as a statement.
    let printed_defs: BTreeSet<SsaVarnode> = ctx
        .stmt_outputs
        .iter()
        .filter(|(stmt_idx, _)| !ctx.foldable_stmts.contains(stmt_idx))
        .filter_map(|(_, out)| *out)
        .collect();
    foldable_svs.extend(
        func.foldable_exprs
            .iter()
            .filter(|sv| !printed_defs.contains(sv)),
    );

    // Build the set of variable names that are actually referenced in the
    // emitted body (read as input, used as condition, or written in a
    // visible non-dead statement).  Declarations for unreferenced
    // variables are omitted to reduce noise.
    let referenced_names: BTreeSet<&str> = {
        let mut names = BTreeSet::new();
        // Variables read as inputs.
        for (sv, count) in &ctx.sv_use_counts {
            if merged_return_svs.contains(sv) {
                continue;
            }
            if post_dowhile_return_svs.contains(sv) {
                continue;
            }
            if is_control_only_condition_use_or_base(sv, &ctx) {
                continue;
            }
            if *count > 0
                && let Some(n) = ctx.var_names.get(sv)
            {
                names.insert(n.as_str());
            }
        }
        // Variables used as conditions.
        for sv in &ctx.cond_uses {
            if merged_return_svs.contains(sv) {
                continue;
            }
            if post_dowhile_return_svs.contains(sv) {
                continue;
            }
            if is_control_only_condition_use_or_base(sv, &ctx) {
                continue;
            }
            if let Some(n) = ctx.var_names.get(sv) {
                names.insert(n.as_str());
            }
        }
        // Variables written in visible (non-foldable) statements.
        for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
            if merged_return_stmts.contains(&stmt_idx) {
                continue;
            }
            if let Some(sv) = output_sv_opt {
                if ctx.foldable_stmts.contains(&stmt_idx) {
                    continue;
                }
                if let Some(insn) = ctx.stmt_insns.get(&stmt_idx) {
                    if is_control_only_condition_assignment(stmt_idx, sv, insn, &ctx) {
                        continue;
                    }
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

    // t232: emit named stack-frame locals first, then suppress duplicates
    // in the generic var-name loop below.
    let stack_frame_names: BTreeSet<String> = emit_stack_frame_decls(func, &ctx, &mut out);

    let param_names = if force_void_main_params {
        BTreeSet::new()
    } else {
        function_param_names(func, dwarf_func)
    };
    let mut declared_names: BTreeSet<String> = param_names;
    // Seed `declared_names` with stack-frame slot names so the generic
    // loop below does not re-emit them.
    for n in &stack_frame_names {
        declared_names.insert(n.clone());
    }
    let hoisted_decl_names: BTreeSet<&str> = ctx
        .hoist_decl_plan
        .values()
        .filter(|plan| plan.fold_into_assignment)
        .filter_map(|plan| ctx.stmt_outputs.get(&plan.stmt_idx).copied().flatten())
        .filter_map(|sv| ctx.var_names.get(&sv).map(String::as_str))
        .collect();
    trace_temp_text(format_args!(
        "decl-summary referenced={:?} hoisted={:?} stack={:?}",
        referenced_names, hoisted_decl_names, stack_frame_names
    ));
    let mut preferred_decl_types: BTreeMap<String, PrimitiveType> = BTreeMap::new();
    for (sv, name) in &ctx.var_names {
        if foldable_svs.contains(sv)
            || post_dowhile_return_svs.contains(sv)
            || !referenced_names.contains(name.as_str())
            || should_suppress_var_decl(sv, &ctx)
        {
            continue;
        }
        let ty = ctx
            .var_types
            .get(sv)
            .copied()
            .unwrap_or(PrimitiveType::Unknown);
        preferred_decl_types
            .entry(name.clone())
            .and_modify(|existing| *existing = prefer_decl_type(*existing, ty))
            .or_insert(ty);
    }
    for (sv, name) in &ctx.var_names {
        if foldable_svs.contains(sv) {
            trace_temp_text(format_args!(
                "top-decl-skip name={name} sv={sv:?} reason=foldable"
            ));
            continue;
        }
        if post_dowhile_return_svs.contains(sv) {
            trace_temp_text(format_args!(
                "top-decl-skip name={name} sv={sv:?} reason=post-dowhile-return"
            ));
            continue;
        }
        if !referenced_names.contains(name.as_str()) || should_suppress_var_decl(sv, &ctx) {
            trace_temp_text(format_args!(
                "top-decl-skip name={name} sv={sv:?} reason={} referenced={} suppress={}",
                if referenced_names.contains(name.as_str()) {
                    "suppress"
                } else {
                    "unreferenced"
                },
                referenced_names.contains(name.as_str()),
                should_suppress_var_decl(sv, &ctx)
            ));
            continue;
        }
        // Hoisted decls are emitted in the function body at the point of
        // first use; skip the function-top entry so we don't emit a
        // duplicate `int v3;` line.
        if hoisted_decl_names.contains(name.as_str()) {
            trace_temp_text(format_args!(
                "top-decl-skip name={name} sv={sv:?} reason=hoisted"
            ));
            continue;
        }
        if !declared_names.insert(name.clone()) {
            trace_temp_text(format_args!(
                "top-decl-skip name={name} sv={sv:?} reason=already-declared"
            ));
            continue;
        }
        let ty = preferred_decl_types
            .get(name)
            .copied()
            .or_else(|| ctx.var_types.get(sv).copied())
            .unwrap_or(PrimitiveType::Unknown);
        trace_temp_text(format_args!(
            "top-decl-emit name={name} sv={sv:?} ty={ty:?} base={:?}",
            sv.base
        ));
        let frame_size = header.map(|h| h.stack_frame);
        // t176 — Objective-C `__block` (byref) box: render
        // `__block T name;` and skip the generic BYREF marker (the
        // address-escape *is* the whole point of the box, so the
        // standard BYREF suffix would be redundant).
        if let Some(bx) = ctx.byref_boxes.get(&sv.base) {
            let captured_c = render_type_as_c(&bx.captured_type);
            if let Some(comment) = varnode_location_comment(&sv.base, frame_size) {
                let _ = writeln!(out, "    __block {} {}; // {}", captured_c, name, comment,);
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
    if referenced_names.contains("cond") && !declared_names.contains("cond") {
        let _ = writeln!(out, "    _BOOL cond;");
        declared_names.insert("cond".to_string());
    }
    ctx.top_declared_names = declared_names.clone();
    ctx.vector_decl_types = preferred_decl_types
        .into_iter()
        .filter(|(_, ty)| matches!(ty, PrimitiveType::Vector(_)))
        .collect();

    let body_span = linkscope::phase("cprinter.emit-body");
    emit_nodes(&func.body, 1, &mut ctx, &mut out);
    drop(body_span);
    if let Some(preamble) = mem_objects::preamble(&ctx.mem_objects) {
        out.insert_str(object_decls_at, &format!("{preamble}\n"));
    }

    out.push_str("}\n");

    // Post-emission textual cleanup pipeline. Each stage is applied in order;
    // under `unlace::cprinter::stage` every stage logs whether it mutated the
    // text and the line-count delta, so a vanished statement can be pinned to
    // the exact transform that dropped it.
    let cleanup_span = linkscope::phase("cprinter.cleanup");
    let func_label = func.name.as_str();
    let output = run_cleanup_stage(
        func_label,
        "signed-flag-compare",
        out,
        simplify_signed_flag_compares,
    );
    let output = run_cleanup_stage(
        func_label,
        "self-assignments",
        output,
        remove_self_assignments,
    );
    let output = run_cleanup_stage(
        func_label,
        "dead-plain-assignments",
        output,
        prune_dead_plain_assignments,
    );
    let output = run_cleanup_stage(
        func_label,
        "fallthrough-gotos",
        output,
        prune_fallthrough_gotos,
    );
    let output = run_cleanup_stage(func_label, "unused-labels", output, prune_unused_labels);
    let output = run_cleanup_stage(
        func_label,
        "unused-plain-decls",
        output,
        prune_unused_plain_local_decls,
    );
    let output = run_cleanup_stage(
        func_label,
        "declare-control-v",
        output,
        declare_missing_control_v_decls,
    );
    let output = run_cleanup_stage(
        func_label,
        "declare-temp-v",
        output,
        declare_missing_temp_v_decls,
    );
    let output = run_cleanup_stage(
        func_label,
        "rename-bare-result",
        output,
        rename_unreturned_bare_result,
    );
    let output = run_cleanup_stage(
        func_label,
        "repair-arg-address",
        output,
        repair_arg_versioned_address_uses,
    );
    let output = run_cleanup_stage(
        func_label,
        "double-negation-conditions",
        output,
        simplify_double_negation_condition_lines,
    );

    let output = if annotations.is_some_and(|a| a.recover_triangular_sum_loop) {
        run_cleanup_stage(
            func_label,
            "triangular-sum",
            output,
            recover_triangular_sum_loop,
        )
    } else {
        output
    };

    // MUST be the final pruning-aware stage: emptiness of an if-body is only known after every
    // pruning pass above has removed dead stores/decls. Flip `if (!(X)) {}` to
    // the positive `if (X) {}` form once the body is provably empty.
    let output = run_cleanup_stage(
        func_label,
        "depolarize-empty-if",
        output,
        depolarize_empty_negated_ifs,
    );
    // Folded-call texts carry the pipeline's names, so confirm them before
    // the locals get their final names.
    let unconfirmed = ctx
        .folded_calls
        .iter()
        .filter(|stmt| {
            ctx.folded_call_texts
                .get(stmt)
                .is_none_or(|text| output.matches(text.as_str()).count() != 1)
        })
        .copied()
        .collect();
    // Hex-Rays-style expression combining (`x += y`, `++x`, `if (!x)`) runs
    // after every pruning and repair stage, which match the plain
    // `x = x op y` spelling, and after the folded-call check, which matches
    // call text before combining rewrites its arguments.
    let output = run_cleanup_stage(func_label, "combine", output, combine_expressions);
    let output = run_cleanup_stage(
        func_label,
        "number-synthetic-locals",
        output,
        number_synthetic_locals,
    );
    drop(cleanup_span);
    linkscope::record_bytes("cprinter.print", output.len() as u64);
    (output, unconfirmed)
}
/// Apply one post-emission cleanup `stage` to `input`, logging a before/after
/// summary when `unlace::cprinter::stage` is enabled. The trace reports the
/// stage name, the function it ran on, whether the text changed, and the line
/// delta — enough to bisect "which transform dropped statement X" without
/// re-reading every helper.
fn run_cleanup_stage(
    func_name: &str,
    stage: &str,
    input: String,
    stage_fn: impl FnOnce(String) -> String,
) -> String {
    let _span = match stage {
        "signed-flag-compare" => Some(linkscope::phase("cprinter.cleanup.signed-flag-compare")),
        "dead-plain-assignments" => {
            Some(linkscope::phase("cprinter.cleanup.dead-plain-assignments"))
        }
        "fallthrough-gotos" => Some(linkscope::phase("cprinter.cleanup.fallthrough-gotos")),
        "unused-labels" => Some(linkscope::phase("cprinter.cleanup.unused-labels")),
        "unused-plain-decls" => Some(linkscope::phase("cprinter.cleanup.unused-plain-decls")),
        "declare-control-v" => Some(linkscope::phase("cprinter.cleanup.declare-control-v")),
        "declare-temp-v" => Some(linkscope::phase("cprinter.cleanup.declare-temp-v")),
        "rename-bare-result" => Some(linkscope::phase("cprinter.cleanup.rename-bare-result")),
        "repair-arg-address" => Some(linkscope::phase("cprinter.cleanup.repair-arg-address")),
        "double-negation-conditions" => Some(linkscope::phase(
            "cprinter.cleanup.double-negation-conditions",
        )),
        "triangular-sum" => Some(linkscope::phase("cprinter.cleanup.triangular-sum")),
        "depolarize-empty-if" => Some(linkscope::phase("cprinter.cleanup.depolarize-empty-if")),
        "self-assignments" => Some(linkscope::phase("cprinter.cleanup.self-assignments")),
        "combine" => Some(linkscope::phase("cprinter.cleanup.combine")),
        "number-synthetic-locals" => {
            Some(linkscope::phase("cprinter.cleanup.number-synthetic-locals"))
        }
        _ => Some(linkscope::phase("cprinter.cleanup.other")),
    };
    let want_counts = tracing::enabled!(target: "unlace::cprinter::stage", tracing::Level::DEBUG);
    let want_diff = c_printer_pipeline_trace_enabled();
    if !want_counts && !want_diff {
        return stage_fn(input);
    }
    let before_lines = input.lines().count();
    let before = input.clone();
    let output = stage_fn(input);
    let after_lines = output.lines().count();
    let changed = output != before;
    if want_counts {
        tracing::debug!(target: "unlace::cprinter::stage",
            "stage func={func_name} name={stage} changed={changed} lines={before_lines}->{after_lines} delta={}",
            after_lines as isize - before_lines as isize
        );
    }
    // Pipeline trace: show the EXACT statements this stage removed/added, so a
    // dropped statement is attributed to the precise stage (and its text) — the
    // count-only line above can only say "8 lines vanished somewhere".
    if want_diff && changed {
        trace_pipeline_stage_diff(func_name, stage, &before, &output);
    }
    output
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
/// The CLI fills it from the `[printer]` table of its configuration file.
#[derive(Clone, Copy, Debug, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
#[serde(default, deny_unknown_fields)]
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
struct PrintCtx {
    /// Output formatting configuration (indent width, line margins, …).
    /// [`PrintConfig::default`] until the caller supplies one.
    config: PrintConfig,
    /// Per-arch stack/frame-pointer register offsets, resolved from the
    /// function's architecture when the caller supplied it (see
    /// [`PrinterAnnotations::arch`]). `None` falls back to the legacy hard-coded
    /// x86/AArch64 frame-base offsets.
    stack_spec: Option<unlace_ir::stack::StackSpec>,
    /// x86 `rbp` holds data here (`lea ebp, [rdi-2]`), not a frame pointer,
    /// so reads of it are values rather than stack addresses.
    rbp_is_general_register: bool,
    /// The function's architecture (see [`PrinterAnnotations::arch`]). CALLOTHER
    /// tags are per-lifter numbering, so non-x86 tags resolve through it.
    arch: Option<unlace_ir::ArchId>,
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
    /// Exact input-slot SSA map per statement.
    ///
    /// `stmt_inputs` is useful for aggregate use counts, but it is ambiguous
    /// when one raw lifter temporary appears in multiple slots or when the
    /// same raw `Unique` base is reused across nearby instructions. Address
    /// recovery needs the slot number to recover the intended SSA version.
    stmt_input_slots: BTreeMap<u32, BTreeMap<usize, SsaVarnode>>,
    /// Flat lookup companion to [`PrintCtx::stmt_input_slots`] for hot operand
    /// rendering paths. The nested map is still kept for deterministic
    /// per-statement iteration.
    stmt_input_slot_lookup: BTreeMap<(u32, usize), SsaVarnode>,
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
    /// Outputs defined by `Load` statements. Used to avoid probing readonly
    /// scalar loads for non-load operands in the hot emission path.
    load_output_svs: BTreeSet<SsaVarnode>,
    /// SSA values currently being expanded as expressions. Cyclic optimized
    /// loop temps fall back to named variables instead of recursing forever.
    resolving_exprs: BTreeSet<SsaVarnode>,
    /// Number of times each SSA varnode is read as an input.  Populated by
    /// [`compute_foldable`] and consulted by `is_dead_zero_init` to suppress
    /// `vN = 0` writes whose final SSA version is never read (cross-block
    /// dead stores that DSE cannot eliminate within a single block).
    sv_use_counts: BTreeMap<SsaVarnode, usize>,
    cond_uses: Vec<SsaVarnode>,
    control_cond_uses: Vec<SsaVarnode>,
    /// SSA values that flow into a `return` statement (recorded during
    /// `collect_varnodes`).  A returned value acquires the `result` role name
    /// in `compute_heuristic_names`; folding its definition would inline the
    /// expression into the `return` and, when the value is assigned in more
    /// than one branch of an if/else, silently drop every branch but one.
    /// `compute_foldable` consults this set to keep such merges materialised.
    returned_svs: BTreeSet<SsaVarnode>,
    /// Statement indices wrapped in a `HirNode::Commented` node. The attached
    /// comment is anchored to the statement, so the statement must render
    /// standalone — folding it into a later consumer would orphan the comment.
    /// `compute_foldable` consults this set to keep such statements materialised.
    commented_stmts: BTreeSet<u32>,
    /// `(varnode, anchor stmt idx)` pairs recording which statement reads
    /// each `cond_uses` entry.  Used together with `stmt_inputs`/`stmt_outputs`
    /// to compute the LCA scope of a declared name when deciding whether to
    /// hoist its declaration to the point of first use.
    cond_use_stmts: Vec<(SsaVarnode, u32)>,
    /// Lexical scope path for each condition read recorded in
    /// `cond_use_stmts`. Conditions such as `do { ... } while (v)` are printed
    /// outside the loop body even though their anchor statement is inside it,
    /// so reusing the anchor statement's scope would make block-local
    /// declarations escape their C scope.
    cond_use_scope_paths: Vec<(SsaVarnode, Vec<u32>)>,
    /// Conditions of `while`, `do`/`while` and `for` loops, which are read
    /// once per iteration rather than at one point.
    loop_cond_uses: BTreeSet<SsaVarnode>,
    /// Call statements folded into their reader by
    /// `fold_single_use_call_results`.
    folded_calls: BTreeSet<u32>,
    /// Call statements that must stay statements this printing.
    call_fold_veto: BTreeSet<u32>,
    /// The text each folded call was last rendered as at its reader.
    folded_call_texts: BTreeMap<u32, String>,
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
    /// DWARF struct layouts for typed `base->member` rendering.
    struct_layouts: StructLayouts,
    /// Variables declared as pointers to a known pointee (the registers of
    /// DWARF pointer parameters, which print as the parameter in every SSA
    /// version), keyed by base varnode.
    pointees: BTreeMap<Varnode, Pointee>,
    panic_sites: BTreeMap<u64, PanicKind>,
    /// Merged symbol table: address → symbol name (PLT + function symbols).
    symbols: BTreeMap<u64, String>,
    /// Recovered string literals: virtual address → string content.
    string_table: BTreeMap<u64, String>,
    readonly_scalars: BTreeMap<(u64, u8), u64>,
    ssa_statement_slots: BTreeMap<(u64, IrOp), Vec<SsaStatementSlots>>,
    /// Indices into `ssa_statement_slots` already claimed by a collected
    /// statement.
    ssa_statement_slot_uses: BTreeMap<(u64, IrOp), BTreeSet<usize>>,
    ssa_phi_uses: Vec<SsaVarnode>,
    return_value_aliases: BTreeMap<SsaVarnode, SsaVarnode>,
    /// Base varnodes whose address is taken and passed to a CALL ("BYREF").
    byref_bases: BTreeSet<Varnode>,
    /// Override map: when present, [`PrintCtx::name_of`] returns the override
    /// for the matching base instead of the cached `vN` name.
    name_overrides: BTreeMap<Varnode, String>,
    /// DWARF local variable type overrides keyed by the same base varnode used
    /// by `name_overrides`.
    dwarf_local_types: BTreeMap<Varnode, String>,
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
    /// Per-SsaVarnode role-based names from
    /// [`unlace_passes::VarNamingPass`] (t227).
    ///
    /// Consulted by [`Self::name_of`] *between* a *meaningful* (non-`vN`)
    /// [`Self::merged_names`] entry and the fresh-`vN` fallback allocator:
    /// a role-name like `i` overrides the coalescer's default `v3`, but
    /// loses to a coalescer name that already carries semantic content
    /// (a DWARF-derived identifier promoted through the coalescer, or
    /// any other non-`vN` value).
    var_role_names: BTreeMap<SsaVarnode, String>,
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
    /// PDB constant-pool reverse index consulted by switch-case emission.
    pdb_constants_by_value: BTreeMap<i64, Vec<String>>,
    /// IAT slot VA → resolved forwarder target, lifted from
    /// [`PrinterAnnotations::forwarded_resolutions`]. Empty when the caller
    /// didn't pass annotations or the binary has no resolved forwarders.
    forwarded_resolutions: BTreeMap<u64, String>,
    /// PAC-authenticated indirect call annotations keyed by call VA
    /// (t201). Lifted from [`PrinterAnnotations::auth_calls`]; consumed
    /// by `emit_callind_cast` to render `__builtin_arm_authcall(...)`.
    auth_calls: BTreeMap<u64, unlace_passes::AuthCallAnnotation>,
    /// t298 — Go iface-to-concrete devirtualization keyed by indirect-call
    /// VA. When present, [`resolve_call_target`] renders the concrete callee
    /// name instead of the opaque function-pointer expression.
    go_iface_devirtualized_calls: BTreeMap<u64, String>,
    /// C++ ABI/runtime action annotations keyed by call VA.
    cxx_eh_actions: BTreeMap<u64, unlace_passes::cxx_eh::CxxEhAction>,
    /// Nesting depth while emitting a `TryFinally` cleanup body.
    cleanup_depth: u32,
    /// Canonical libc family name keyed by Call VA (t229). Lifted from
    /// [`PrinterAnnotations::libc_call_canonical`]; consulted by
    /// [`resolve_call_target`] before the symbol-table fallback so a
    /// `Call __memcpy_chk` renders as `memcpy(...)`.
    libc_call_canonical: BTreeMap<u64, String>,
    /// t262 — original (pre-canonicalization) symbol name at a libc
    /// call site, keyed by Call VA. Lifted from
    /// [`PrinterAnnotations::libc_call_original`]; consulted by
    /// [`emit_statement`] which emits a leading comment
    /// `// memcpy(...) — recognized from __memcpy_chk` when canonical
    /// and original disagree.
    libc_call_original: BTreeMap<u64, String>,
    /// t231: recovered array-of-struct layouts keyed by base-pointer
    /// SSA varnode. Lifted from
    /// [`PrinterAnnotations::array_struct_layouts`]; consumed by
    /// `try_array_struct_field_access` to rewrite the matching
    /// `*(arr + STRIDE*i + OFF) = …` chains into
    /// `arr<N>[i].field_<OFF>` form.
    array_struct_layouts: BTreeMap<SsaVarnode, unlace_ir::types::InferredStruct>,
    /// t231: per-base `__anon<N>` index, matching the numbering used by
    /// [`emit_inferred_struct_preamble`].
    array_struct_indices: BTreeMap<SsaVarnode, usize>,
    /// Recovered Go `defer` registrations for this function.
    go_defer_sites: Vec<GoDeferSite>,
    /// t258: per-byref-parameter union-tag type list. Empty when no caller
    /// has annotated the function with conflicting BYREF consumption-site
    /// types. See [`PrinterAnnotations::byref_union_types`].
    byref_union_types: BTreeMap<u32, Vec<PrimitiveType>>,
    /// t259: constant absolute addresses heuristically classified as
    /// memory-mapped I/O registers. An address lands here when it is
    /// loaded at least twice in tight succession with no intervening
    /// Store to the *same* address (or stored at least twice with no
    /// intervening Load). The C printer adds `volatile` to the
    /// dereference cast at every Load/Store through these addresses
    /// to surface the side-effecting nature of the access.
    mmio_addrs: BTreeSet<u64>,
    /// Stack-frame offsets that should not be rendered as source locals or raw
    /// memory stores, such as saved-register slots and ABI-owned stack areas.
    suppressed_stack_offsets: BTreeSet<i64>,
    /// The incoming stack-argument slots among `suppressed_stack_offsets`.
    /// They are not declared as locals, but a store into one is a real
    /// write (Go spills register arguments there around `morestack`), so
    /// it is printed rather than dropped.
    stack_arg_offsets: BTreeSet<i64>,
    /// Stack-frame offsets used only for compiler-inserted stack canary spills.
    /// These are also suppressed, but kept distinct so canary compare pruning
    /// can recognize epilogue reloads from the saved guard slot.
    canary_stack_offsets: BTreeSet<i64>,
    /// True once this function has stack slot/name targets that can render as
    /// address expressions. Hot operand emission uses this to skip recursive
    /// stack-offset recovery for functions where it cannot succeed.
    has_stack_address_targets: bool,
    /// User-visible stack slots keyed by their recovered start offset. Used to
    /// render accesses inside wide buffers as `buf_N + delta` instead of
    /// falling through to raw pointer arithmetic.
    stack_frame_slots: BTreeMap<i64, StackSlotName>,
    /// Frame offset of the stack pointer at the start of each machine
    /// instruction ([`StackFrame::sp_offset_at_addr`]), so `sp + k` resolves
    /// to the slot the recovery pass keyed, wherever the stack pointer stood.
    sp_frame_offsets: BTreeMap<u64, i64>,
    /// Stack lvar metadata keyed by recovered frame offset. This is the
    /// printer-side copy of [`PrinterAnnotations::stack_lvars`].
    stack_lvars: BTreeMap<i64, StackLvarAnnotation>,
    /// DWARF aggregate *array* locals parsed from the function's debug info.
    /// Used to give a recovered frame-base-relative indexed stack buffer its
    /// real source name/type/size (e.g. `int buf[16]` rather than
    /// `char buf_80[72]`).
    dwarf_array_locals: Vec<DwarfArrayLocal>,
    /// Stack offset → recovered DWARF array materialization. Drives a real
    /// `int buf[16];` declaration and suppression of the redundant
    /// `// DWARF locals` comment line for that array.
    dwarf_array_buffer_decls: BTreeMap<i64, DwarfArrayLocal>,
    /// Names already declared at function scope. Hoisted declarations consult
    /// this set so block-local declarations do not collide with an existing
    /// function-scope temporary that prints with the same name.
    top_declared_names: BTreeSet<String>,
    /// Names whose SSA versions include a SIMD value, with the merged
    /// vector type. A register carrier such as `xmm0` is declared once for
    /// all its versions; when the declaration is hoisted to a version that
    /// only copies a constant or a load, its own type is a plain integer.
    vector_decl_types: BTreeMap<String, PrimitiveType>,
    /// Stack ranges promoted to synthetic byte arrays because their address
    /// escapes to a call with a visible element count. This preserves
    /// original frame contiguity in standalone C.
    promoted_stack_buffers: BTreeMap<i64, u64>,
    /// Scalar stack slots synthesized from resolved accesses when the
    /// stack-frame recovery pass did not materialize a local.
    synthetic_stack_scalars: BTreeMap<i64, u8>,
    /// C++ vtable call targets keyed by instruction VA.
    ///
    /// A `Callind`/`Branchind` at `insn.addr` mapped to
    /// `TargetSet::VtableSlot` renders through `emit_virtual_call` as
    /// `obj->method(args)` or `obj->__vftable->method_<slot_idx>(args)`.
    ///
    /// Lifted from [`HirFunction::vtable_call_targets`] at construction.
    vtable_call_targets: BTreeMap<u64, TargetSet>,
    /// §5.5: FLIRT match annotation keyed by callee entry VA. Lifted
    /// from [`PrinterAnnotations::flirt_call_annotations`]; consumed by
    /// [`flirt_call_comment`] to emit `/* flirt: <name>@<conf> */` at
    /// Call sites whose target was recognised by signature matching.
    flirt_call_annotations: BTreeMap<u64, (String, f32)>,
    /// Memory objects with synthesised types; see [`mem_objects`].
    mem_objects: MemObjects,
}
#[derive(Clone, Debug)]
struct StackSlotName {
    name: String,
    size: u64,
    is_buffer: bool,
}
impl PrintCtx {
    fn new(
        dwarf: Option<&DwarfInfo>,
        panic_sites: BTreeMap<u64, PanicKind>,
        symbols: BTreeMap<u64, String>,
        string_table: BTreeMap<u64, String>,
        merged_names: BTreeMap<SsaVarnode, String>,
        var_role_names: BTreeMap<SsaVarnode, String>,
    ) -> Self {
        let struct_layouts =
            StructLayouts::new(dwarf.map(|d| d.structs.clone()).unwrap_or_default());
        // Advance the fresh-name allocator past any `vN` already claimed by
        // the variable-merge pass so fallback names never collide with
        // pre-coalesced ones.
        let mut start_next: u32 = 1;
        for n in merged_names.values() {
            if let Some(rest) = n.strip_prefix('v')
                && let Ok(idx) = rest.parse::<u32>()
            {
                start_next = start_next.max(idx + 1);
            }
        }
        Self {
            config: PrintConfig::default(),
            stack_spec: None,
            rbp_is_general_register: false,
            arch: None,
            next_var: start_next,
            var_names: BTreeMap::new(),
            var_types: BTreeMap::new(),
            base_names: BTreeMap::new(),
            ssa_next_version: BTreeMap::new(),
            ssa_current: BTreeMap::new(),
            stmt_outputs: BTreeMap::new(),
            stmt_inputs: BTreeMap::new(),
            stmt_input_slots: BTreeMap::new(),
            stmt_input_slot_lookup: BTreeMap::new(),
            next_stmt: 0,
            emit_stmt: 0,
            stmt_insns: BTreeMap::new(),
            foldable_stmts: BTreeSet::new(),
            sv_defining_stmt: BTreeMap::new(),
            load_output_svs: BTreeSet::new(),
            resolving_exprs: BTreeSet::new(),
            sv_use_counts: BTreeMap::new(),
            cond_uses: Vec::new(),
            control_cond_uses: Vec::new(),
            returned_svs: BTreeSet::new(),
            commented_stmts: BTreeSet::new(),
            cond_use_stmts: Vec::new(),
            cond_use_scope_paths: Vec::new(),
            loop_cond_uses: BTreeSet::new(),
            folded_calls: BTreeSet::new(),
            call_fold_veto: BTreeSet::new(),
            folded_call_texts: BTreeMap::new(),
            collect_depth: 0,
            stmt_depths: BTreeMap::new(),
            stmt_scope_paths: BTreeMap::new(),
            next_scope_id: 0,
            current_scope_path: Vec::new(),
            hoist_decl_plan: BTreeMap::new(),
            frame_size: None,
            struct_layouts,
            pointees: BTreeMap::new(),
            panic_sites,
            symbols,
            string_table,
            readonly_scalars: BTreeMap::new(),
            ssa_statement_slots: BTreeMap::new(),
            ssa_statement_slot_uses: BTreeMap::new(),
            ssa_phi_uses: Vec::new(),
            return_value_aliases: BTreeMap::new(),
            byref_bases: BTreeSet::new(),
            name_overrides: BTreeMap::new(),
            dwarf_local_types: BTreeMap::new(),
            source_map: dwarf.map(|d| d.source_map.clone()).unwrap_or_default(),
            parent_returns_void: false,
            merged_names,
            var_role_names,
            line_comments: BTreeMap::new(),
            custom_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            string_hash_table: BTreeMap::new(),
            pdb_constants_by_value: BTreeMap::new(),
            forwarded_resolutions: BTreeMap::new(),
            auth_calls: BTreeMap::new(),
            go_iface_devirtualized_calls: BTreeMap::new(),
            cxx_eh_actions: BTreeMap::new(),
            cleanup_depth: 0,
            libc_call_canonical: BTreeMap::new(),
            libc_call_original: BTreeMap::new(),
            array_struct_layouts: BTreeMap::new(),
            array_struct_indices: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            byref_union_types: BTreeMap::new(),
            mmio_addrs: BTreeSet::new(),
            suppressed_stack_offsets: BTreeSet::new(),
            stack_arg_offsets: BTreeSet::new(),
            canary_stack_offsets: BTreeSet::new(),
            has_stack_address_targets: false,
            stack_frame_slots: BTreeMap::new(),
            sp_frame_offsets: BTreeMap::new(),
            stack_lvars: BTreeMap::new(),
            dwarf_array_locals: Vec::new(),
            dwarf_array_buffer_decls: BTreeMap::new(),
            top_declared_names: BTreeSet::new(),
            vector_decl_types: BTreeMap::new(),
            promoted_stack_buffers: BTreeMap::new(),
            synthetic_stack_scalars: BTreeMap::new(),
            vtable_call_targets: BTreeMap::new(),
            flirt_call_annotations: BTreeMap::new(),
            mem_objects: MemObjects::default(),
        }
    }

    fn name_of(&mut self, sv: &SsaVarnode) -> String {
        let _span = cprinter_detail_phase("cprinter.name-of");
        if let Some(n) = self.var_names.get(sv) {
            trace_name_decision("cache", sv, n, self);
            return n.clone();
        }
        let (source, name) = if let Some(override_name) = self.name_overrides.get(&sv.base) {
            // DWARF / role-based override (keyed by base) wins over coalescer.
            ("override", override_name.clone())
        } else if let Some(merged) = self
            .merged_names
            .get(sv)
            .filter(|n| !is_generic_lvar_name(n))
        {
            // Variable-merge pass result (per-SsaVarnode), and it carries
            // *semantic* content (not just a generic `vN`/`cN` placeholder).
            // Reuse the same name for every SsaVarnode in the same
            // coalesced cluster, even if their base Varnodes differ
            // (Unique-space coalescing).
            ("merged-meaningful", merged.clone())
        } else if let Some(role_name) = self.var_role_names.get(sv) {
            // t227 — role-based name (e.g. `i`, `j`, `saved_rbx`, `a1`).
            // Wins over the merger's default `vN` choice but still loses
            // to the meaningful merger entries handled above.
            ("role", role_name.clone())
        } else if let Some(merged) = self.merged_names.get(sv) {
            // Fall through to a generic merged `vN` when no role name
            // applied — keeps SSA versions on the same coalesced cluster
            // co-named even without semantic information.
            ("merged-default", merged.clone())
        } else if let Some(existing) = self.base_names.get(&sv.base) {
            ("base", existing.clone())
        } else {
            let fresh = format!("v{}", self.next_var);
            self.next_var += 1;
            self.base_names.insert(sv.base, fresh.clone());
            ("fresh", fresh)
        };
        self.var_names.insert(*sv, name.clone());
        trace_name_decision(source, sv, &name, self);
        name
    }

    fn fresh_ssa_name_of(&mut self, sv: &SsaVarnode) -> String {
        let _span = cprinter_detail_phase("cprinter.fresh-ssa-name-of");
        if let Some(n) = self.var_names.get(sv) {
            trace_name_decision("fresh-cache", sv, n, self);
            return n.clone();
        }
        let fresh = format!("v{}", self.next_var);
        self.next_var += 1;
        self.var_names.insert(*sv, fresh.clone());
        trace_name_decision("fresh-forced", sv, &fresh, self);
        fresh
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
/// IDA-style typedefs emitted at the top of decompiled output.
const IDA_TYPEDEFS: &str = "\
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored \"-Wsign-compare\"
#pragma GCC diagnostic ignored \"-Wtype-limits\"
#pragma GCC diagnostic ignored \"-Wunused-variable\"
#pragma GCC diagnostic ignored \"-Wunused-but-set-variable\"
#endif
typedef unsigned char _BYTE;
typedef unsigned char _BOOL; typedef unsigned short _WORD; typedef unsigned int _DWORD; typedef unsigned long long _QWORD;
typedef unsigned __int128 _OWORD; typedef signed short __int16; typedef signed long long __int64;
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
// IEEE-754 special-value macros (matches IDA's float literal output).
#ifndef NAN
#define NAN __builtin_nanf(\"\")
#endif
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
// SIMD register types. 128-bit values are carried as raw bits so the vector
// helpers below stay plain C; wider registers use GCC vector types.
typedef unsigned long long __m64; typedef unsigned __int128 __m128i; typedef unsigned __int128 __m128; typedef unsigned __int128 __m128d;
typedef long long __m256i __attribute__((__vector_size__(32))); typedef float __m256 __attribute__((__vector_size__(32))); typedef double __m256d __attribute__((__vector_size__(32)));
typedef long long __m512i __attribute__((__vector_size__(64))); typedef float __m512 __attribute__((__vector_size__(64))); typedef double __m512d __attribute__((__vector_size__(64)));
// Minimal executable semantics for the SSE vector helpers emitted below.
static inline unsigned int __unlace_vec_u32(__m128i v, unsigned int lane) { return (unsigned int)(v >> (lane * 32)); }
static inline unsigned long long __unlace_vec_u64(__m128i v, unsigned int lane) { return (unsigned long long)(v >> (lane * 64)); }
static inline __m128i _mm_add_epi32(__m128i a, __m128i b) { __m128i out = 0; for (unsigned int i = 0; i < 4; i++) out |= (__m128i)(__unlace_vec_u32(a, i) + __unlace_vec_u32(b, i)) << (i * 32); return out; }
static inline __m128i _mm_mul_epu32(__m128i a, __m128i b) { unsigned long long lo = (unsigned long long)__unlace_vec_u32(a, 0) * __unlace_vec_u32(b, 0); unsigned long long hi = (unsigned long long)__unlace_vec_u32(a, 2) * __unlace_vec_u32(b, 2); return (__m128i)lo | ((__m128i)hi << 64); }
static inline __m128i _mm_shuffle_epi32(__m128i a, unsigned int imm) { __m128i out = 0; for (unsigned int i = 0; i < 4; i++) out |= (__m128i)__unlace_vec_u32(a, (imm >> (i * 2)) & 3u) << (i * 32); return out; }
static inline __m128i _mm_srli_epi64(__m128i a, unsigned int imm) { __m128i out = 0; for (unsigned int i = 0; i < 2; i++) { unsigned long long lane = __unlace_vec_u64(a, i); lane = imm >= 64 ? 0 : lane >> imm; out |= (__m128i)lane << (i * 64); } return out; }
static inline __m128i _mm_unpacklo_epi32(__m128i a, __m128i b) { return (__m128i)__unlace_vec_u32(a, 0) | ((__m128i)__unlace_vec_u32(b, 0) << 32) | ((__m128i)__unlace_vec_u32(a, 1) << 64) | ((__m128i)__unlace_vec_u32(b, 1) << 96); }
// Minimal C11 atomic declarations used by recovered AArch64 atomics.
typedef enum { memory_order_relaxed, memory_order_consume, memory_order_acquire, memory_order_release, memory_order_acq_rel, memory_order_seq_cst } memory_order;
#define _Atomic
unsigned long long atomic_load_explicit(_Atomic unsigned long long *obj, memory_order order);
void atomic_store_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
unsigned long long atomic_fetch_add_explicit(_Atomic unsigned long long *obj, unsigned long long arg, memory_order order);
unsigned long long atomic_exchange_explicit(_Atomic unsigned long long *obj, unsigned long long desired, memory_order order);
_Bool atomic_compare_exchange_strong_explicit(_Atomic unsigned long long *obj, unsigned long long *expected, unsigned long long desired, memory_order success, memory_order failure);
";
#[cfg(test)]
#[path = "c_printer_tests.rs"]
mod tests;
