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
//! | `cot_idx` (57)         | `arr[i]`            | `try_array_subscript`, `member_path` | ✅ |
//! | `cot_memref` (58)      | `s.m`               | `member_path` (nested members) | ✅ |
//! | `cot_memptr` (59)      | `p->m`              | `try_resolve_field_from_addr`| ✅ |
//! | `cot_call` (60)        | `f(...)`            | `Call`/`Callind`             | ✅ |
//! | `cot_var/obj/num/...`  | name / literal      | `emit_operand_with_prec`     | ✅ |
//! | `cot_str` (63)         | `"..."`             | `emit_operand_with_prec` + `escape_c_string` | ✅ |
//! | `cot_fnum` (64)        | float literal       | `format_constant_ctx` + `format_float_literal` | ✅ |
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

use unlace_ir::lvar::{LvarFlags, LvarSource, LvarStorage};
use unlace_ir::reg_alias::aliases;
use unlace_ir::ssa::{
    DwarfStackLocalSpan, GoDeferSite, PanicKind, PrimitiveType, SsaFunction, SsaVarnode, TargetSet,
};
use unlace_ir::types::{Type, TypeKind};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};
use unlace_loader::{DwarfInfo, FunctionDebugInfo};
use unlace_struct::{HirFunction, HirNode, SwitchCase};

use crate::expr_ast::CExpr;

mod member_path;
mod postprocess;
mod trace;
mod typed_access;

use member_path::StructLayouts;
use postprocess::*;
use trace::*;
use typed_access::{Pointee, try_typed_access, typed_access_is_stable};

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

/// Add declarations for pseudo-C globals/stubs that are referenced by name but
/// not materialized as normal functions or data objects in the recovered unit.
pub fn declare_pseudo_c_externals(output: &str) -> String {
    let mut decls = BTreeSet::new();
    let mut defined_subs = BTreeSet::new();

    for line in output.lines() {
        let trimmed = line.trim();
        if trimmed.ends_with('{')
            && let Some((name, proto)) = parse_function_definition_prototype(trimmed)
            && name.starts_with("sub_")
        {
            defined_subs.insert(name.to_string());
            decls.insert(proto);
        }
    }

    collect_prefixed_identifiers(output, "byte_", |name| {
        decls.insert(format!("_BYTE {};", name));
    });
    collect_prefixed_identifiers(output, "word_", |name| {
        decls.insert(format!("_WORD {};", name));
    });
    collect_prefixed_identifiers(output, "dword_", |name| {
        decls.insert(format!("_DWORD {};", name));
    });
    collect_prefixed_identifiers(output, "qword_", |name| {
        decls.insert(format!("_QWORD {};", name));
    });

    collect_prefixed_identifiers(output, "sub_", |name| {
        if !defined_subs.contains(name) {
            decls.insert(format!("__int64 {}();", name));
        }
    });

    if decls.is_empty() {
        return output.to_string();
    }

    let mut block = String::new();
    for decl in decls {
        block.push_str(&decl);
        block.push('\n');
    }
    block.push('\n');

    if let Some(pos) = output.find(IDA_TYPEDEFS) {
        let insert_at = pos + IDA_TYPEDEFS.len();
        let mut out = String::with_capacity(output.len() + block.len());
        out.push_str(&output[..insert_at]);
        out.push_str(&block);
        out.push_str(&output[insert_at..]);
        out
    } else {
        let mut out = String::with_capacity(output.len() + block.len());
        out.push_str(&block);
        out.push_str(output);
        out
    }
}

fn parse_function_definition_prototype(line: &str) -> Option<(&str, String)> {
    let header = line.strip_suffix('{')?.trim_end();
    let open = header.find('(')?;
    let before = header[..open].trim_end();
    let name_start = before
        .rfind(|c: char| !(c == '_' || c == '$' || c.is_ascii_alphanumeric()))
        .map_or(0, |idx| idx + 1);
    let name = &before[name_start..];
    if !is_c_identifier(name) {
        return None;
    }
    Some((name, format!("{};", header)))
}

fn collect_prefixed_identifiers(mut text: &str, prefix: &str, mut f: impl FnMut(&str)) {
    while let Some(pos) = text.find(prefix) {
        let start = pos;
        let bytes = text.as_bytes();
        let mut end = start + prefix.len();
        while end < bytes.len() && bytes[end].is_ascii_hexdigit() {
            end += 1;
        }
        let before_ok = start == 0 || !is_ident_byte(bytes[start - 1]);
        let after_ok = end == bytes.len() || !is_ident_byte(bytes[end]);
        if end > start + prefix.len() && before_ok && after_ok {
            f(&text[start..end]);
        }
        text = &text[end.min(text.len())..];
    }
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
struct DwarfArrayLocal {
    /// Source variable name (`buf`).
    name: String,
    /// The C element type spelling (`int`), for the declaration.
    elem_c_type: String,
    /// Element size in bytes (4 for `int`).
    elem_size: u64,
    /// Element count (16 for `int[16]`).
    elem_count: u64,
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

fn merge_stack_lvar_annotation(existing: &mut StackLvarAnnotation, incoming: &StackLvarAnnotation) {
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

fn primitive_size_hint(ty: PrimitiveType) -> Option<u8> {
    match ty {
        PrimitiveType::Unknown => None,
        PrimitiveType::Bool => Some(1),
        PrimitiveType::Int(width) | PrimitiveType::UnsignedInt(width) => Some(width),
        PrimitiveType::Float => Some(4),
        PrimitiveType::Double => Some(8),
        PrimitiveType::Ptr => Some(8),
    }
}

fn type_kind_size_hint(ty: TypeKind) -> Option<u64> {
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

fn stack_lvar_type_name(ty: TypeKind) -> Option<String> {
    (!matches!(ty, TypeKind::Void)).then(|| ty.c_name().to_string())
}

/// t260: per-function `__usercall` / `__userpurge` annotation payload.
#[derive(Default, Debug, Clone)]
pub struct UsercallSpec {
    pub return_reg: String,
    pub param_regs: Vec<String>,
    pub purge: bool,
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
    }
    if let Some(cfg) = config {
        ctx.config = cfg;
    }
    ctx.frame_size = header.map(|h| h.stack_frame);
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
        // t230 — when finalize-signature has run, use its `params` list
        // (post-dead-drop, post-byte-mask-narrow) instead of the raw
        // `func.params`. This is how the dead-param drop becomes
        // visible in the header and `int8` byte-masked params show up
        // as `char` instead of `__int64`.
        if let Some(sig) = func.finalized_signature.as_ref() {
            for (i, (pname, pty)) in sig.params.iter().enumerate() {
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
                    let _ = write!(out, "{} {}", c_sig_type_for_type(pty), pname);
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
    foldable_svs.extend(&func.foldable_exprs);

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

    let body_span = linkscope::phase("cprinter.emit-body");
    emit_nodes(&func.body, 1, &mut ctx, &mut out);
    drop(body_span);

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

    // MUST be the final stage: emptiness of an if-body is only known after every
    // pruning pass above has removed dead stores/decls. Flip `if (!(X)) {}` to
    // the positive `if (X) {}` form once the body is provably empty.
    let output = run_cleanup_stage(
        func_label,
        "depolarize-empty-if",
        output,
        depolarize_empty_negated_ifs,
    );
    drop(cleanup_span);
    linkscope::record_bytes("cprinter.print", output.len() as u64);
    output
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

fn function_param_names(
    func: &HirFunction,
    dwarf_func: Option<&FunctionDebugInfo>,
) -> BTreeSet<String> {
    let mut names = BTreeSet::new();
    if let Some(df) = dwarf_func {
        for param in &df.params {
            if let Some(name) = param.name.as_deref().filter(|name| is_c_identifier(name)) {
                names.insert(name.to_string());
            }
        }
    }
    if let Some(sig) = func.finalized_signature.as_ref() {
        for (name, _) in &sig.params {
            if is_c_identifier(name) {
                names.insert(name.clone());
            }
        }
    }
    for (name, _) in &func.params {
        if is_c_identifier(name) {
            names.insert(name.clone());
        }
    }
    names.insert("this".to_string());
    names
}

fn compute_param_register_names(
    func: &HirFunction,
    dwarf_func: Option<&FunctionDebugInfo>,
    header: Option<&FunctionHeaderInfo>,
    ctx: &mut PrintCtx,
) {
    let Some(regs) = header.and_then(|h| param_registers_for_convention(&h.convention)) else {
        return;
    };
    let params = ordered_function_param_names(func, dwarf_func);
    for (idx, name) in params.into_iter().enumerate() {
        let Some(&reg) = regs.get(idx) else {
            break;
        };
        if !is_c_identifier(&name) {
            continue;
        }
        for size in [8u8, 4, 2, 1] {
            ctx.name_overrides
                .entry(Varnode::new(SpaceId::Register, reg, size))
                .or_insert_with(|| name.clone());
        }
    }
}

/// Record the entry value of each DWARF pointer parameter with its declared
/// pointee, so accesses through it render as `param->member` / `param[i]`.
fn compute_param_pointees(
    dwarf_func: Option<&FunctionDebugInfo>,
    header: Option<&FunctionHeaderInfo>,
    ctx: &mut PrintCtx,
) {
    let (Some(df), Some(regs)) = (
        dwarf_func,
        header.and_then(|h| param_registers_for_convention(&h.convention)),
    ) else {
        return;
    };
    for (param, &reg) in df.params.iter().zip(regs) {
        let pointee = param
            .type_name
            .as_deref()
            .and_then(|ty| ctx.struct_layouts.pointee_struct(ty))
            .map(|name| Pointee::Struct(name.to_string()))
            .or_else(|| param.pointee_size.map(Pointee::Scalar));
        let Some(pointee) = pointee else {
            continue;
        };
        let entry_value = SsaVarnode {
            base: Varnode::new(SpaceId::Register, reg, 8),
            version: 0,
        };
        ctx.pointees.insert(entry_value, pointee);
    }
}

fn ordered_function_param_names(
    func: &HirFunction,
    dwarf_func: Option<&FunctionDebugInfo>,
) -> Vec<String> {
    if let Some(df) = dwarf_func.filter(|df| !df.params.is_empty()) {
        return df
            .params
            .iter()
            .map(|p| p.name.clone().unwrap_or_else(|| "arg".to_string()))
            .collect();
    }
    if let Some(sig) = func.finalized_signature.as_ref() {
        return sig.params.iter().map(|(name, _)| name.clone()).collect();
    }
    func.params.iter().map(|(name, _)| name.clone()).collect()
}

fn param_registers_for_convention(convention: &str) -> Option<&'static [u64]> {
    const SYSV: &[u64] = &[56, 48, 16, 8, 64, 72];
    const MSX64: &[u64] = &[8, 16, 64, 72];
    const THISCALL: &[u64] = &[8];
    const AARCH64: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

    match convention {
        "System V AMD64" => Some(SYSV),
        "Microsoft x64" => Some(MSX64),
        "thiscall" => Some(THISCALL),
        "AArch64" => Some(AARCH64),
        _ => None,
    }
}

fn function_body_returns_void(func: &HirFunction, dwarf_func: Option<&FunctionDebugInfo>) -> bool {
    if func.name == "main" {
        return false;
    }
    if let Some(df) = dwarf_func
        && let Some(ret) = df.return_type.as_deref()
    {
        return dwarf_type_to_c(ret) == "void";
    }
    if let Some(sig) = func.finalized_signature.as_ref() {
        return c_sig_return_type_for_type(&sig.return_type) == "void";
    }
    matches!(func.return_type, PrimitiveType::Unknown)
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
                    let _ = writeln!(out, " *       vbase/vcall_offset[{i}] = {off}");
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
                    unlace_loader::VtableSlotKind::Function { va, name, is_thunk } => {
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
                        } else if !cls.bases.is_empty()
                            && let Some(n) = name
                            && let Some(d) = crate::demangle::demangle(n)
                            && d.class_name.as_deref() == Some(cls.demangled_name.as_str())
                        {
                            tag.push_str(" [override]");
                        }
                        let _ = writeln!(out, " *       vfunc[{slot}] = {display}{tag}");
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

    out.push(' ');
    out.push_str(RTTI_BLOCK_END);
    out.push('\n');
    out.push('\n');
}

fn emit_msvc_rtti_hierarchy(rtti: &unlace_loader::msvc_rtti::MsvcRtti, out: &mut String) {
    if rtti.classes.is_empty() {
        return;
    }

    out.push_str("// MSVC RTTI class hierarchy (from PE .rdata)\n");
    for cls in rtti.classes.values() {
        let name = cls.demangled.as_deref().unwrap_or(&cls.mangled_name);
        let bases: Vec<String> = cls
            .bases
            .iter()
            .map(|base| unlace_loader::msvc_rtti::demangle_rtti_name(&base.mangled_name))
            .collect();
        if bases.is_empty() {
            let _ = writeln!(out, "// class {name}");
        } else {
            let _ = writeln!(out, "// class {name} : {}", bases.join(", "));
        }

        let flags = msvc_inheritance_flags(cls.inheritance);
        if flags.is_empty() {
            let _ = writeln!(
                out,
                "//   vftable @ {:#x}, methods={}",
                cls.vtable_addr, cls.method_count
            );
        } else {
            let _ = writeln!(
                out,
                "//   vftable @ {:#x}, methods={}, inheritance={}",
                cls.vtable_addr,
                cls.method_count,
                flags.join("|")
            );
        }

        for base in &cls.bases {
            let base_name = unlace_loader::msvc_rtti::demangle_rtti_name(&base.mangled_name);
            let _ = writeln!(
                out,
                "//   base {base_name}: mdisp={}, pdisp={}, vdisp={}, attrs={:#x}",
                base.mdisp, base.pdisp, base.vdisp, base.attributes
            );
        }
    }
    out.push('\n');
}

fn msvc_inheritance_flags(flags: u32) -> Vec<&'static str> {
    let mut out = Vec::new();
    if flags & 0x1 != 0 {
        out.push("multiple");
    }
    if flags & 0x2 != 0 {
        out.push("virtual");
    }
    if flags & 0x4 != 0 {
        out.push("ambiguous");
    }
    out
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
            unlace_loader::VtableSlotKind::Function { va, name, is_thunk } => {
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
                } else if !cls.bases.is_empty()
                    && let Some(n) = name
                    && let Some(d) = crate::demangle::demangle(n)
                    && d.class_name.as_deref() == Some(class_name)
                {
                    tag.push_str(" [override]");
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

/// Resolve the displayed C type for the synthesized `this` parameter of
/// a C++ member function.
///
/// Lookup precedence:
///   1. RTTI — the binary itself names the class via `__class_type_info`.
///   2. STL recognition — `std::vector<int>::push_back` exposes the
///      container kind in the demangled name even when no RTTI exists
///      (libcxx STL types are template-instantiated in every TU and have
///      no central typeinfo entry).
///
/// Returns `None` for free functions, non-C++ symbols, or when neither
/// source recognises the class — callers fall back to the generic
/// `__int64 *this` rendering.
fn rtti_this_param_type(
    demangled: &Option<crate::demangle::DemangleResult>,
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Option<String> {
    let dr = demangled.as_ref()?;
    let class_name = dr.class_name.as_ref()?;

    // Prefer RTTI when the binary itself names the class.
    if let Some(rtti) = rtti
        && rtti.class_by_name(class_name).is_some()
    {
        return Some(class_name.clone());
    }

    // Fall back to STL container recognition driven by the demangled
    // name — there is no RTTI for `std::vector<int>` etc.
    if let Some(stl) = crate::cpp_stl::recognize_stl(dr) {
        return Some(stl.display());
    }

    None
}

/// Recognise STL container types (`std::vector<T>`, `std::string`, etc.)
/// from the demangled symbol's namespace path, and return the C-style
/// spelling to use for the `this` parameter.  Conservative: only fires
/// when [`crate::demangle::demangle`] already classified the symbol as a
/// member function of one of the supported classes — see
/// [`unlace_passes::recognize_stl_type`].
fn stl_this_param_type(demangled: &Option<crate::demangle::DemangleResult>) -> Option<String> {
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
    /// Pointer values whose pointee type is declared (entry values of DWARF
    /// pointer parameters).
    pointees: BTreeMap<SsaVarnode, Pointee>,
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
}

#[derive(Clone, Debug)]
struct StackSlotName {
    name: String,
    size: u64,
    is_buffer: bool,
}

fn render_go_defer_summary(
    sites: &[GoDeferSite],
    symbols: Option<&BTreeMap<u64, String>>,
) -> Option<String> {
    if sites.is_empty() {
        return None;
    }
    let mut unique_targets: Vec<u64> = sites
        .iter()
        .map(|s| s.deferred_func)
        .filter(|addr| *addr != 0)
        .collect();
    unique_targets.sort_unstable();
    unique_targets.dedup();

    let mut out = String::new();
    let has_recover = sites.iter().any(|s| s.has_recover);
    if has_recover {
        out.push_str("// Go panic recovery: defer/recover chain detected\n");
    } else {
        out.push_str("// Go defer chain detected\n");
    }

    for addr in unique_targets {
        let name = symbols
            .and_then(|m| m.get(&addr))
            .cloned()
            .unwrap_or_else(|| format!("sub_{addr:X}"));
        let _ = writeln!(out, "//   defer {}(...);", name);
    }
    if sites.iter().any(|s| s.deferred_func == 0) {
        out.push_str("//   defer <opaque funcval>(...);\n");
    }
    if has_recover {
        out.push_str("//   recover();\n");
    }
    Some(out)
}

fn emit_dwarf_struct_preamble(dwarf: &DwarfInfo) -> Option<String> {
    let structs: Vec<_> = dwarf
        .structs
        .values()
        .filter(|st| !st.name.is_empty())
        .collect();
    if structs.is_empty() {
        return None;
    }

    let mut out = String::new();
    for st in &structs {
        let name = crate::demangle::sanitize_for_c(&st.name);
        let _ = writeln!(out, "typedef struct {name} {name};");
    }
    for st in structs {
        let name = crate::demangle::sanitize_for_c(&st.name);
        let _ = writeln!(out, "struct {name} {{");
        for field in &st.fields {
            if field.name.is_empty() {
                continue;
            }
            let field_name = crate::demangle::sanitize_for_c(&field.name);
            let decl = dwarf_decl_to_c(&field.type_name, &field_name);
            let _ = writeln!(out, "    {decl};");
        }
        let _ = writeln!(out, "}};");
    }
    Some(out)
}

fn emit_dwarf_local_summary(
    dwarf_func: Option<&FunctionDebugInfo>,
    materialized_names: &std::collections::BTreeSet<String>,
    out: &mut String,
) {
    let Some(dwarf_func) = dwarf_func else {
        return;
    };
    // Skip a local whose array was materialized as a real declaration (e.g.
    // `int buf[16];`): the comment would otherwise double-count the same array
    // type fact and stutter the recovered source variable.
    let visible: Vec<_> = dwarf_func
        .locals
        .iter()
        .filter(|local| {
            !local.name.is_empty()
                && !materialized_names.contains(&crate::demangle::sanitize_for_c(&local.name))
        })
        .collect();
    if visible.is_empty() {
        return;
    }

    out.push_str("    // DWARF locals\n");
    for local in visible {
        let name = crate::demangle::sanitize_for_c(&local.name);
        if let Some(type_name) = local.type_name.as_deref() {
            let decl = dwarf_decl_to_c(type_name, &name);
            let _ = writeln!(out, "    //   {decl};");
        } else {
            let _ = writeln!(out, "    //   {name};");
        }
    }
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
            canary_stack_offsets: BTreeSet::new(),
            has_stack_address_targets: false,
            stack_frame_slots: BTreeMap::new(),
            stack_lvars: BTreeMap::new(),
            dwarf_array_locals: Vec::new(),
            dwarf_array_buffer_decls: BTreeMap::new(),
            top_declared_names: BTreeSet::new(),
            promoted_stack_buffers: BTreeMap::new(),
            synthetic_stack_scalars: BTreeMap::new(),
            vtable_call_targets: BTreeMap::new(),
            flirt_call_annotations: BTreeMap::new(),
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

/// Parenthesise a base expression for use as the array operand of a `[...]`
/// subscript when it is not a postfix-atomic expression. The subscript operator
/// `[]` binds tighter than a prefix cast/deref, so `*(_QWORD *)(p)[i]` parses as
/// `*( ((_QWORD*)p)[i] )` — i.e. the cast applies to `p[i]`, not the indexed
/// value. A base such as `*(_QWORD *)(buf + 8)` must therefore be wrapped:
/// `(*(_QWORD *)(buf + 8))[i]`. A bare identifier, an already-parenthesised
/// expression, or a postfix chain (ends with `]`/`)` and starts atomically) is
/// left as-is.
fn paren_if_non_atomic_base(base: &str) -> String {
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
struct FrameIndexedDecomp {
    /// Frame-relative byte offset of the array base (the recovered local lives
    /// here). This is the sum of every constant displacement folded into the
    /// address, plus the frame-base origin (0).
    frame_offset: i64,
    /// SSA varnode of the index operand (multiplied by `stride`).
    index_vn: Varnode,
    /// The statement in which `index_vn` is an operand (the INT_MULT/INT_LEFT
    /// term), used to resolve the index expression to the right SSA version.
    index_stmt: u32,
    /// Raw operand position of `index_vn` in `index_stmt`, if known.
    index_raw_idx: Option<usize>,
    /// Element stride in bytes (the multiplier / `1 << shift`).
    stride: u64,
}

/// Recursively decompose `vn` (an address operand of stmt `stmt_idx`) into a
/// constant frame-relative displacement plus one variable `index*stride` term,
/// rooted at the frame-base register. Returns `None` if the chain is not of that
/// shape (e.g. no frame base, no single index term, two index terms, etc.).
///
/// Handles both outer associativities (`(frame+idx*s)+C` and `(frame+C)+idx*s`,
/// and the `INT_SUB`-outer `(frame+idx*s)-C` form) and both index encodings
/// (`INT_MULT(index, Const(stride))` and `INT_LEFT(index, Const(shift))`).
fn decompose_frame_indexed(
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
            frame_offset: 0,
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
fn extract_index_term(
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

fn idx_index_in(def: &IrInsn, idx_vn: &Varnode) -> Option<usize> {
    def.inputs.iter().position(|v| v == idx_vn)
}

/// Interpret a constant varnode's `offset` as a signed value at its bit width.
fn signed_const_value(vn: &Varnode) -> i64 {
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
fn try_frame_local_indexed_subscript(
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
/// `typed_access`); an untyped `base + k*i` stays a raw `*(T *)(...)`, as in
/// Hex-Rays, because the base is declared as a scalar and `base[i]` would
/// neither compile nor say which width it reads.
fn try_array_subscript(
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
struct PrintAddrDecomp {
    base_sv: SsaVarnode,
    stride: u64,
    offset: u64,
    iv_sv: SsaVarnode,
}

/// Walk an address SSA varnode looking for the canonical
/// `base + STRIDE*iv + offset` shape using the printer's foldable
/// statement map. Returns `None` if any leg of the chain is not foldable
/// or the multiplicative IV term is missing.
///
/// The decomposer matches the t213 pass's algorithm: const+ssa folds
/// into `offset`, `IntMult(sv, const)` contributes `stride * iv`, and
/// the SSA+SSA `IntAdd` case tries both branches as the IV-bearing one.
fn decompose_print_addr(
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

fn walk_print_addr(
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
fn try_array_struct_field_access(
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
const GLOBAL_ADDR_THRESHOLD: u64 = 0x10000;

/// Minimum address to consider as an instruction-pointer-relative static
/// reference. Small PIE/shared-library fixtures often have data symbols in
/// the 0x3000..0x5000 range, while ordinary raw constants still use the
/// stricter global threshold above to avoid naming small immediates as data.
const IP_REL_GLOBAL_ADDR_THRESHOLD: u64 = 0x1000;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct StaticAddr {
    addr: u64,
    from_instruction_pointer: bool,
}

fn try_global_var_name(
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

fn try_readonly_scalar_load(
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

fn try_readonly_scalar_value_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<String> {
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

fn is_global_addr_candidate(static_addr: StaticAddr) -> bool {
    let threshold = if static_addr.from_instruction_pointer {
        IP_REL_GLOBAL_ADDR_THRESHOLD
    } else {
        GLOBAL_ADDR_THRESHOLD
    };
    static_addr.addr >= threshold
}

fn try_static_addr_for_addr(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<StaticAddr> {
    resolve_static_addr_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0)
}

fn resolve_static_addr_for_addr(
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

fn resolve_static_addr_add(
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
fn instruction_pointer_operand(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> Option<usize> {
    if insn.inputs.len() != 2 {
        return None;
    }
    (0..2).find(|&idx| {
        insn.inputs[1 - idx].space == SpaceId::Const
            && input_or_latest_sv_for_operand(&insn.inputs[idx], Some(idx), stmt_idx, ctx)
                .is_some_and(|sv| is_instruction_pointer_reg(&sv.base))
    })
}

fn is_instruction_pointer_reg(vn: &Varnode) -> bool {
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
fn try_emit_byref_union_param(
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
fn try_emit_memory_annotation(addr_vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> Option<String> {
    let addr = try_static_addr_for_addr(addr_vn, None, stmt_idx, ctx)?.addr;
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

    let annotated_slots = take_annotated_slots_for_insn(insn, ctx);
    let mut input_svs = Vec::new();
    let mut input_slots = BTreeMap::new();
    for (raw_idx, input) in insn.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        let sv = if let Some(sv) = annotated_slots
            .as_ref()
            .and_then(|slots| slots.inputs.get(&raw_idx).copied())
        {
            if sv.base != *input {
                tracing::debug!(target: "unlace::cprinter",
                    "collect stmt={idx} addr=0x{:x} op={:?} input{raw_idx} raw={input:?} annotated={sv:?}; using annotated SSA slot",
                    insn.addr, insn.op
                );
            }
            sv
        } else {
            SsaVarnode {
                base: *input,
                version: ctx.current_version(input),
            }
        };
        let name = ctx.name_of(&sv);
        if c_printer_name_trace_enabled() {
            let source = if annotated_slots
                .as_ref()
                .and_then(|slots| slots.inputs.get(&raw_idx))
                .is_some()
            {
                "collect-input-annotated"
            } else {
                "collect-input-current"
            };
            tracing::debug!(target: "unlace::cprinter::name",
                "{source} stmt={idx} addr=0x{:x} op={:?} raw_idx={raw_idx} raw={input:?} sv={sv:?} name={name}",
                insn.addr, insn.op
            );
        }
        input_svs.push(sv);
        input_slots.insert(raw_idx, sv);
        ctx.stmt_input_slot_lookup.insert((idx, raw_idx), sv);
    }
    ctx.stmt_inputs.insert(idx, input_svs);
    ctx.stmt_input_slots.insert(idx, input_slots);

    let output_sv = if let Some(slots) = annotated_slots.as_ref() {
        if let Some(sv) = slots.output {
            ctx.ssa_current.insert(sv.base, sv.version);
            ctx.ssa_next_version.insert(
                sv.base,
                ctx.ssa_next_version
                    .get(&sv.base)
                    .copied()
                    .unwrap_or(0)
                    .max(sv.version + 1),
            );
            name_output_sv_for_insn(insn, &sv, ctx);
            infer_type_from_insn(insn, &sv, ctx);
            Some(sv)
        } else {
            None
        }
    } else if let Some(output) = insn.output {
        let ver = ctx.next_version(&output);
        let sv = SsaVarnode {
            base: output,
            version: ver,
        };
        name_output_sv_for_insn(insn, &sv, ctx);
        infer_type_from_insn(insn, &sv, ctx);
        Some(sv)
    } else {
        None
    };
    ctx.stmt_outputs.insert(idx, output_sv);
    if insn.op == IrOp::Load
        && let Some(sv) = output_sv
    {
        ctx.load_output_svs.insert(sv);
    }
    ctx.stmt_insns.insert(idx, insn.clone());
    if c_printer_name_trace_enabled() {
        if let Some(sv) = output_sv {
            tracing::debug!(target: "unlace::cprinter::name",
                "collect-output stmt={idx} addr=0x{:x} op={:?} output={sv:?} name={:?}",
                insn.addr,
                insn.op,
                known_name_of_sv(ctx, &sv)
            );
        } else {
            tracing::debug!(target: "unlace::cprinter::name",
                "collect-output stmt={idx} addr=0x{:x} op={:?} output=None",
                insn.addr, insn.op
            );
        }
    }
    tracing::debug!(target: "unlace::cprinter",
        "collect stmt={idx} addr=0x{:x} op={:?} output={:?} inputs={:?}",
        insn.addr,
        insn.op,
        output_sv,
        ctx.stmt_input_slots.get(&idx)
    );
    idx
}

/// Pair a HIR statement with the SSA slots of the IR instruction it came from.
///
/// Instructions sharing an address and opcode are claimed in HIR order, but
/// the HIR does not always visit them in IR order, so any unclaimed match is
/// eligible. A statement that finds every match already claimed is a copy
/// the structurer made of one instruction (tail duplication); it gets that
/// instruction's slots when the match is unambiguous. Without slots the
/// printer invents its own SSA versions, which name a value no reader uses.
fn take_annotated_slots_for_insn(insn: &IrInsn, ctx: &mut PrintCtx) -> Option<SsaStatementSlots> {
    let key = (insn.addr, insn.op);
    let candidates = ctx.ssa_statement_slots.get(&key)?;
    let claimed = ctx.ssa_statement_slot_uses.entry(key).or_default();

    let unclaimed_match = |require_input_match: bool| {
        candidates
            .iter()
            .enumerate()
            .filter(|(idx, _)| !claimed.contains(idx))
            .find(|(_, slots)| statement_slots_match_insn(slots, insn, require_input_match))
            .map(|(idx, _)| idx)
    };
    if let Some(idx) = unclaimed_match(true).or_else(|| unclaimed_match(false)) {
        claimed.insert(idx);
        return candidates.get(idx).cloned();
    }

    let only_match = |require_input_match: bool| {
        let mut matches = candidates
            .iter()
            .filter(|slots| statement_slots_match_insn(slots, insn, require_input_match));
        match (matches.next(), matches.next()) {
            (Some(slots), None) => Some(slots.clone()),
            _ => None,
        }
    };
    only_match(true).or_else(|| only_match(false))
}

fn statement_slots_match_insn(
    slots: &SsaStatementSlots,
    insn: &IrInsn,
    require_input_match: bool,
) -> bool {
    match (slots.output, insn.output) {
        (Some(sv), Some(output)) if sv.base == output => {}
        (None, None) => {}
        _ => return false,
    }

    if !require_input_match {
        return true;
    }

    for (raw_idx, input) in insn.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        match slots.inputs.get(&raw_idx) {
            Some(sv) if sv.base == *input => {}
            _ => return false,
        }
    }

    true
}

fn name_output_sv_for_insn(insn: &IrInsn, sv: &SsaVarnode, ctx: &mut PrintCtx) {
    if matches!(insn.op, IrOp::Call | IrOp::Callind) && sv.base.space == SpaceId::Register {
        ctx.fresh_ssa_name_of(sv);
    } else {
        ctx.name_of(sv);
    }
}

fn collect_varnodes(nodes: &[HirNode], ctx: &mut PrintCtx) {
    for node in nodes {
        match node {
            HirNode::Block(children) => collect_varnodes(children, ctx),

            HirNode::Statement(insn) => {
                collect_insn_as_stmt(insn, ctx);
            }

            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.control_cond_uses.push(*cond);
                // Anchor the cond read at the next-allocated stmt so the
                // hoist pass treats it as a use at the enclosing scope.
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
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
                ctx.control_cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
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
                ctx.control_cond_uses.push(*cond);
                // do/while reads the cond *after* the body; anchor at the
                // last-allocated stmt index inside the loop body.
                ctx.cond_use_stmts
                    .push((*cond, ctx.next_stmt.saturating_sub(1)));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
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
                ctx.control_cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
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
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
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
                if !ctx.parent_returns_void && sv.base.space != SpaceId::Const {
                    let ret_sv = ctx.return_value_aliases.get(sv).copied().unwrap_or(*sv);
                    ctx.name_of(&ret_sv);
                    ctx.cond_uses.push(ret_sv);
                    ctx.returned_svs.insert(ret_sv);
                    ctx.stmt_depths.insert(ctx.next_stmt, ctx.collect_depth);
                    ctx.stmt_scope_paths
                        .insert(ctx.next_stmt, ctx.current_scope_path.clone());
                    ctx.cond_use_stmts.push((ret_sv, ctx.next_stmt));
                    ctx.cond_use_scope_paths
                        .push((ret_sv, ctx.current_scope_path.clone()));
                }
            }

            HirNode::Ternary {
                cond,
                then_insn,
                else_insn,
                output: _,
            } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.control_cond_uses.push(*cond);

                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));

                collect_insn_as_stmt(then_insn, ctx);
                collect_insn_as_stmt(else_insn, ctx);
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
                    collect_insn_as_stmt(insn, ctx);
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
                let mut input_slots = BTreeMap::new();
                for (raw_idx, input) in [cmp_lhs, cmp_rhs, true_val, false_val]
                    .into_iter()
                    .enumerate()
                {
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
                    input_slots.insert(raw_idx, sv);
                    ctx.stmt_input_slot_lookup.insert((idx, raw_idx), sv);
                }
                ctx.stmt_inputs.insert(idx, input_svs);
                ctx.stmt_input_slots.insert(idx, input_slots);

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
                    ctx.cond_use_scope_paths
                        .push((sv, ctx.current_scope_path.clone()));
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
                // into the wrapped node as if the wrapper weren't there. But
                // record the stmt index the wrapped `Statement` is about to be
                // assigned so `compute_foldable` keeps it materialised: the
                // attached comment is anchored to a rendered statement, and
                // folding the statement into a consumer would orphan it.
                if matches!(inner.as_ref(), HirNode::Statement(_)) {
                    let wrapped_idx = ctx.next_stmt;
                    ctx.commented_stmts.insert(wrapped_idx);
                }
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

    for sv in &ctx.ssa_phi_uses {
        *use_counts.entry(*sv).or_insert(0) += 1;
    }

    // Count how many distinct statements define each output SSA value. A value
    // defined in more than one statement is a control-flow merge (the HIR-level
    // analogue of an SSA phi: e.g. `r8` assigned in both arms of an if/else and
    // then returned). Folding such a value would inline ONE arm's expression
    // past the merge and silently drop the others — a correctness bug. These
    // must stay materialised as a named variable assigned in each arm.
    let mut def_counts: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
    for sv in ctx.stmt_outputs.values().flatten() {
        *def_counts.entry(*sv).or_insert(0) += 1;
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

        if ctx.commented_stmts.contains(&stmt_idx) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} decision=commented-keep",
                insn.op
            );
            continue;
        }

        // A statement carrying a USER/debug line comment (keyed by its
        // instruction address) must render standalone so the comment has an
        // anchor — folding it into a consumer would drop it. Same rationale as
        // `commented_stmts` but for address-keyed annotations attached after
        // collection.
        //
        // NOTE: DWARF `source_map` entries are deliberately NOT a fold barrier
        // here. `inline_statement_text` already declines to inline a source-map
        // statement (it returns None for those), so a genuinely consumed
        // statement keeps its `// file:line` provenance, while a foldable
        // single-use temp can still collapse into its consumer. Gating folds on
        // source_map too (the original 84b3eb719 form) suppressed legitimate
        // folding everywhere debug info exists — e.g. debug_structs went from
        // `v4 = *(_DWORD *)(a1 + 8)` back to a 3-line `v3 = a1 + 8; v4 = *v3;`
        // with an interposed comment.
        if ctx.line_comments.contains_key(&insn.addr) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} addr={:#x} decision=line-comment-keep",
                insn.op, insn.addr
            );
            continue;
        }

        if def_counts.get(&output_sv).copied().unwrap_or(0) > 1 {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} decision=multi-def-merge",
                insn.op
            );
            continue;
        }

        if is_never_foldable_op(insn.op) {
            if insn.op == IrOp::Load && is_temp_varnode(&output_sv.base) {
                ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            }
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} decision=never",
                insn.op
            );
            continue;
        }

        // NOTE: a single-use `Copy` reading a call output (e.g. `v8 = v11;`
        // where `v11 = f();`) used to be blocked unconditionally here. That
        // was over-broad: the call result is itself a materialised statement
        // (`Call` is never-foldable), so substituting the copy into its sole
        // consumer cannot duplicate the call. The genuine hazard — the call's
        // result register being reused before the consumer — is caught
        // precisely below by `copy_like_snapshot_source_redefined_before_consumer`.
        // Removing the blanket guard lets `int v8 = v11;` fold into its use,
        // eliminating a class of leaked single-use temps.

        let use_count = use_counts.get(&output_sv).copied().unwrap_or(0);
        if use_count > 1
            && is_temp_varnode(&output_sv.base)
            && multi_use_temp_inlines_everywhere(&output_sv, stmt_idx, use_count, ctx)
        {
            ctx.foldable_stmts.insert(stmt_idx);
            ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=fold-every-use",
                insn.op
            );
            continue;
        }
        if use_count != 1 {
            if use_count > 0 && is_temp_varnode(&output_sv.base) {
                ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            }
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=not-single-use",
                insn.op
            );
            continue;
        }

        if !sv_consumer_stmt.contains_key(&output_sv) && ctx.cond_uses.contains(&output_sv) {
            // A returned value defined inside a nested branch (depth > 0) is a
            // control-flow merge: e.g. `r8` assigned in both arms of an
            // if/else then returned. The `cond_uses` set conflates "used by a
            // condition" with "used by a return", so without this guard the
            // first arm's definition gets folded straight into `return …`,
            // dropping the other arm(s). Keep it materialised as `result`.
            let def_depth = ctx.stmt_depths.get(&stmt_idx).copied().unwrap_or(0);
            let is_returned_merge = ctx.returned_svs.contains(&output_sv) && def_depth > 0;
            if is_returned_merge {
                tracing::debug!(target: "unlace::cprinter",
                    "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} def_depth={def_depth} decision=returned-branch-merge-keep",
                    insn.op
                );
                continue;
            }
            ctx.foldable_stmts.insert(stmt_idx);
            ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} def_depth={def_depth} decision=cond-only",
                insn.op
            );
            continue;
        }

        let def_depth = ctx.stmt_depths.get(&stmt_idx).copied().unwrap_or(0);
        let consumer_stmt = last_consumer_stmt_for_sv(&output_sv, ctx)
            .or_else(|| sv_consumer_stmt.get(&output_sv).copied());
        if c_printer_trace_enabled()
            && let Some(scanned_consumer) = consumer_stmt
            && sv_consumer_stmt.get(&output_sv).copied() != Some(scanned_consumer)
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} consumer-map={:?} consumer-scan={scanned_consumer}",
                insn.op,
                sv_consumer_stmt.get(&output_sv)
            );
        }
        let consumer_depth = consumer_stmt
            .and_then(|cid| ctx.stmt_depths.get(&cid).copied())
            .unwrap_or(u32::MAX);

        if consumer_stmt.is_some_and(|consumer| consumer <= stmt_idx) {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=consumer-before-def consumer={consumer_stmt:?}",
                insn.op
            );
            continue;
        }

        if def_depth != consumer_depth {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=depth-mismatch def_depth={def_depth} consumer_depth={consumer_depth}",
                insn.op
            );
            continue;
        }

        if let Some(consumer_stmt) = consumer_stmt
            && copy_like_snapshot_source_redefined_before_consumer(
                &output_sv,
                insn,
                stmt_idx,
                consumer_stmt,
                ctx,
            )
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=snapshot-source-redefined consumer={consumer_stmt}",
                insn.op
            );
            continue;
        }

        if let Some(consumer_stmt) = consumer_stmt
            && expression_inputs_aliased_redefined_before_consumer(
                &output_sv,
                insn,
                stmt_idx,
                consumer_stmt,
                ctx,
            )
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=expr-input-redefined consumer={consumer_stmt}",
                insn.op
            );
            continue;
        }

        if let Some(consumer_stmt) = consumer_stmt
            && inlined_read_clobbered_before(stmt_idx, consumer_stmt, false, ctx)
        {
            tracing::debug!(target: "unlace::cprinter",
                "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} decision=folded-input-redefined consumer={consumer_stmt}",
                insn.op
            );
            continue;
        }

        ctx.foldable_stmts.insert(stmt_idx);
        ctx.sv_defining_stmt.insert(output_sv, stmt_idx);
        tracing::debug!(target: "unlace::cprinter",
            "fold stmt={stmt_idx} op={:?} output={output_sv:?} uses={use_count} consumer={consumer_stmt:?} def_depth={def_depth} consumer_depth={consumer_depth} decision=fold",
            insn.op
        );
    }

    ctx.sv_use_counts = use_counts;
    // The transitive fold-pass guard is currently disabled: empirical regressions
    // on small HIR fixtures show it removes folds that are needed for shape
    // tests. The emit-time guard in [`emit_operand_with_prec`] handles the
    // miscompile case (operand inlining past a same-base redefinition) without
    // touching the fold set. Keep [`refuse_folds_past_aliased_input_redef`]
    // available for future use if the emit-time guard proves insufficient.
    let _ = refuse_folds_past_aliased_input_redef;
}

/// Second pass over [`compute_foldable`]: walk each foldable expression's
/// transitive consumer chain to the textual emission point, then unfold any
/// expression whose register inputs would be re-read at an emission point past
/// a same-base SSA redefinition.
///
/// The fold pass marks a stmt foldable when its single use's immediate
/// consumer is fine, but inlining is transitive — a foldable stmt's text gets
/// substituted into its consumer's text, which itself may be folded further.
/// `dedupe_var_names` collapses every SSA version of a given base register to
/// one name, so once we emit the inlined token at the final emission point,
/// the C compiler binds it to whatever was *last* written to that base. If a
/// redefinition of one of our register inputs sits between us and the
/// emission point, the resulting recompiled code reads the wrong value.
fn refuse_folds_past_aliased_input_redef(ctx: &mut PrintCtx) {
    let mut changed = true;
    let mut iterations = 0u32;
    while changed && iterations < 64 {
        changed = false;
        iterations += 1;
        let folded: Vec<u32> = ctx.foldable_stmts.iter().copied().collect();
        for stmt_idx in folded {
            let Some(emission_stmt) = transitive_emission_stmt(stmt_idx, ctx) else {
                continue;
            };
            if emission_stmt <= stmt_idx + 1 {
                continue;
            }
            let Some(stmt_inputs) = ctx.stmt_inputs.get(&stmt_idx).cloned() else {
                continue;
            };
            let output_sv = ctx.stmt_outputs.get(&stmt_idx).copied().flatten();
            let mut conflict: Option<(SsaVarnode, u32, SsaVarnode)> = None;
            for input_sv in &stmt_inputs {
                if input_sv.base.space != SpaceId::Register {
                    continue;
                }
                if output_sv.as_ref().is_some_and(|o| o == input_sv) {
                    continue;
                }
                for (&redef_stmt, output) in ctx.stmt_outputs.range((stmt_idx + 1)..=emission_stmt)
                {
                    let Some(candidate) = output else {
                        continue;
                    };
                    if *candidate == *input_sv {
                        continue;
                    }
                    if share_printed_storage(*candidate, *input_sv, ctx) {
                        conflict = Some((*input_sv, redef_stmt, *candidate));
                        break;
                    }
                }
                if conflict.is_some() {
                    break;
                }
            }
            if let Some((input_sv, redef_stmt, candidate)) = conflict {
                ctx.foldable_stmts.remove(&stmt_idx);
                changed = true;
                tracing::debug!(target: "unlace::cprinter",
                    "unfold stmt={stmt_idx} emission={emission_stmt} input={input_sv:?} redef_stmt={redef_stmt} redef={candidate:?} reason=transitive-input-redefined",
                );
            }
        }
    }
}

fn transitive_emission_stmt(stmt_idx: u32, ctx: &PrintCtx) -> Option<u32> {
    let mut current = stmt_idx;
    for _ in 0..64 {
        let output_sv = ctx.stmt_outputs.get(&current).copied().flatten()?;
        let consumer = last_consumer_stmt_for_sv(&output_sv, ctx)?;
        if consumer <= current {
            return Some(consumer);
        }
        if !ctx.foldable_stmts.contains(&consumer) {
            return Some(consumer);
        }
        current = consumer;
    }
    None
}

fn last_consumer_stmt_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    let mut consumer = None;
    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        if inputs.iter().any(|input| input == sv) {
            consumer = Some(stmt_idx);
        }
    }
    for (&stmt_idx, slots) in &ctx.stmt_input_slots {
        if slots.values().any(|input| input == sv) && consumer.is_none_or(|cur| stmt_idx > cur) {
            consumer = Some(stmt_idx);
        }
    }
    for &(cond_sv, stmt_idx) in &ctx.cond_use_stmts {
        if cond_sv == *sv && consumer.is_none_or(|cur| stmt_idx > cur) {
            consumer = Some(stmt_idx);
        }
    }
    consumer
}

fn copy_like_snapshot_source_redefined_before_consumer(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if consumer_stmt <= stmt_idx + 1
        || !matches!(
            insn.op,
            IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
        )
    {
        return false;
    }
    let Some(source) = insn.inputs.first() else {
        return false;
    };
    if source.space == SpaceId::Const {
        return false;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), stmt_idx, ctx) else {
        return false;
    };
    if source_sv == *output_sv {
        return false;
    }
    tracing::debug!(target: "unlace::cprinter",
        "snapshot-source-check stmt={stmt_idx} consumer={consumer_stmt} op={:?} output={output_sv:?} source={source_sv:?}",
        insn.op
    );

    if ctx
        .stmt_outputs
        .range((stmt_idx + 1)..consumer_stmt)
        .any(|(&redef_stmt, output)| {
            let Some(candidate) = output else {
                return false;
            };
            let redefined = *candidate != source_sv
                && share_printed_storage(*candidate, source_sv, ctx);
            if redefined {
                tracing::debug!(target: "unlace::cprinter",
                    "snapshot-source-redefined stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source_sv:?} redef_stmt={redef_stmt} redef={candidate:?}",
                );
            }
            redefined
        })
    {
        return true;
    }

    snapshot_source_expression_input_redefined_before_consumer(
        output_sv,
        insn,
        stmt_idx,
        consumer_stmt,
        &source_sv,
        ctx,
    )
}

fn latest_materialized_value_for_same_source(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> Option<SsaVarnode> {
    trace_materialized_source_scan(format_args!(
        "enter stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} op={:?} inputs={:?}",
        insn.op, insn.inputs
    ));
    if consumer_stmt <= stmt_idx + 1 {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} reason=adjacent-or-reversed"
        ));
        return None;
    }
    if !matches!(
        insn.op,
        IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
    ) {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} reason=op op={:?}",
            insn.op
        ));
        return None;
    }
    let Some(source) = insn.inputs.first() else {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} reason=no-source-input"
        ));
        return None;
    };
    if source.space == SpaceId::Const {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} reason=const-source"
        ));
        return None;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), stmt_idx, ctx) else {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} reason=no-source-ssa"
        ));
        return None;
    };
    let Some(source_def_stmt) = defining_stmt_for_sv(&source_sv, ctx) else {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} reason=no-source-def"
        ));
        return None;
    };
    if consumer_stmt <= source_def_stmt + 1 {
        trace_materialized_source_scan(format_args!(
            "skip stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} source_def={source_def_stmt} reason=source-def-after-or-adjacent-consumer"
        ));
        return None;
    }
    trace_materialized_source_scan(format_args!(
        "scan stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} source_def={source_def_stmt} range={}..{}",
        source_def_stmt + 1,
        consumer_stmt
    ));

    ctx.stmt_outputs
        .range((source_def_stmt + 1)..consumer_stmt)
        .rev()
        .find_map(|(&candidate_stmt, output)| {
            trace_materialized_source_scan(format_args!(
                "candidate stmt={stmt_idx} consumer={consumer_stmt} source_def={source_def_stmt} candidate_stmt={candidate_stmt} raw_output={output:?}"
            ));
            if candidate_stmt == stmt_idx {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} reason=self"
                ));
                return None;
            }
            let Some(candidate_sv) = *output else {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} reason=no-output"
                ));
                return None;
            };
            if candidate_sv == *output_sv
            {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=same-output"
                ));
                return None;
            }
            if candidate_sv == source_sv {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=same-source"
                ));
                return None;
            }
            if is_suppressible_storage(&candidate_sv.base, ctx)
            {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=suppressible-storage"
                ));
                return None;
            }
            let Some(candidate_insn) = ctx.stmt_insns.get(&candidate_stmt) else {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=no-insn"
                ));
                return None;
            };
            if !matches!(
                candidate_insn.op,
                IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
            ) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=op op={:?} inputs={:?}",
                    candidate_insn.op, candidate_insn.inputs
                ));
                return None;
            }
            let Some(candidate_source) = candidate_insn.inputs.first() else {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=no-candidate-source op={:?}",
                    candidate_insn.op
                ));
                return None;
            };
            if candidate_source != source
            {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=source-mismatch expected={source:?} actual={candidate_source:?} op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if ctx.foldable_stmts.contains(&candidate_stmt) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=foldable op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if let Some((redef_stmt, redef_sv)) = materialized_candidate_redefined_before_consumer(
                candidate_sv,
                candidate_stmt,
                consumer_stmt,
                ctx,
            ) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=redefined-before-consumer redef_stmt={redef_stmt} redef={redef_sv:?} op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if is_dead_zero_init(candidate_insn, candidate_stmt, ctx) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=dead-zero-init op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            if is_dead_suppressible_store(candidate_insn, candidate_stmt, ctx) {
                trace_materialized_source_scan(format_args!(
                    "candidate-skip stmt={stmt_idx} consumer={consumer_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} reason=dead-suppressible-store op={:?}",
                    candidate_insn.op
                ));
                return None;
            }
            trace_materialized_source_scan(format_args!(
                "hit stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source:?} source_sv={source_sv:?} source_def={source_def_stmt} candidate_stmt={candidate_stmt} candidate={candidate_sv:?} op={:?} addr=0x{:x}",
                candidate_insn.op,
                candidate_insn.addr
            ));
            Some(candidate_sv)
        })
}

fn materialized_candidate_redefined_before_consumer(
    candidate_sv: SsaVarnode,
    candidate_stmt: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(u32, SsaVarnode)> {
    if consumer_stmt <= candidate_stmt + 1 {
        trace_materialized_source_scan(format_args!(
            "candidate-live-check candidate_stmt={candidate_stmt} consumer={consumer_stmt} candidate={candidate_sv:?} decision=stable reason=adjacent-or-reversed"
        ));
        return None;
    }
    let found = ctx
        .stmt_outputs
        .range((candidate_stmt + 1)..consumer_stmt)
        .find_map(|(&redef_stmt, output)| {
            let redef_sv = (*output)?;
            if redef_sv == candidate_sv {
                return None;
            }
            (redef_sv.base == candidate_sv.base || aliases(redef_sv.base, candidate_sv.base))
                .then_some((redef_stmt, redef_sv))
        });
    match found {
        Some((redef_stmt, redef_sv)) => trace_materialized_source_scan(format_args!(
            "candidate-live-check candidate_stmt={candidate_stmt} consumer={consumer_stmt} candidate={candidate_sv:?} decision=stale redef_stmt={redef_stmt} redef={redef_sv:?}"
        )),
        None => trace_materialized_source_scan(format_args!(
            "candidate-live-check candidate_stmt={candidate_stmt} consumer={consumer_stmt} candidate={candidate_sv:?} decision=stable"
        )),
    }
    found
}

fn snapshot_source_expression_input_redefined_before_consumer(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    source_sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> bool {
    if !matches!(
        insn.op,
        IrOp::IntZext | IrOp::IntSext | IrOp::Cast | IrOp::Copy
    ) || output_sv.base.space != SpaceId::Register
        || source_sv.base.space != SpaceId::Unique
    {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} op={:?} output={output_sv:?} source={source_sv:?} reason=shape",
            insn.op
        );
        return false;
    }

    let Some(source_def_stmt) = defining_stmt_for_sv(source_sv, ctx) else {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} source={source_sv:?} reason=no-source-def",
        );
        return false;
    };
    if source_def_stmt >= stmt_idx {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} source={source_sv:?} source_def_stmt={source_def_stmt} reason=source-def-after-copy",
        );
        return false;
    }
    let Some(source_def) = ctx.stmt_insns.get(&source_def_stmt) else {
        return false;
    };
    if source_def.inputs.len() < 2 || instr_has_side_effects(source_def) {
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-skip stmt={stmt_idx} consumer={consumer_stmt} source={source_sv:?} source_def_stmt={source_def_stmt} source_op={:?} input_count={} reason=source-not-expression",
            source_def.op,
            source_def.inputs.len()
        );
        return false;
    }
    tracing::debug!(target: "unlace::cprinter",
        "snapshot-source-expr-check stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source_sv:?} source_def_stmt={source_def_stmt} source_op={:?}",
        source_def.op
    );

    for (input_idx, input) in source_def.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        let Some(input_sv) =
            input_or_latest_sv_for_operand(input, Some(input_idx), source_def_stmt, ctx)
        else {
            continue;
        };
        if input_sv.base.space != SpaceId::Register {
            continue;
        }
        tracing::debug!(target: "unlace::cprinter",
            "snapshot-source-expr-input stmt={stmt_idx} source_def_stmt={source_def_stmt} input_idx={input_idx} input={input_sv:?}",
        );
        for (&redef_stmt, output) in ctx.stmt_outputs.range((stmt_idx + 1)..consumer_stmt) {
            let Some(candidate) = output else {
                continue;
            };
            if *candidate == input_sv {
                continue;
            }
            if share_printed_storage(*candidate, input_sv, ctx) {
                tracing::debug!(target: "unlace::cprinter",
                    "snapshot-source-expr-input-redefined stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} source={source_sv:?} source_def_stmt={source_def_stmt} input_idx={input_idx} input={input_sv:?} redef_stmt={redef_stmt} redef={candidate:?}",
                );
                return true;
            }
        }
    }

    false
}

/// Refuse to fold a multi-operand expression when one of its register inputs
/// has a same-base SSA redefinition between the def site and the consumer.
///
/// Why: `dedupe_var_names` collapses every SSA version of a given base register
/// to a single name (`var_names_can_share_name` returns `Some("same-base")`
/// unconditionally for matching `base`s). If we fold a flag/arithmetic
/// expression like `IntXor(IntSless(v1, v13_v1), …)` into a later use point
/// where `v13_v2` has overwritten `v13_v1`, the inlined `v13` token reads the
/// wrong version and the recompiled output diverges. The existing
/// `copy_like_*` guards only handle Copy/Cast snapshot patterns. This guard
/// generalizes the same idea to any foldable expression by scanning its own
/// inputs.
fn expression_inputs_aliased_redefined_before_consumer(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if consumer_stmt <= stmt_idx + 1 {
        return false;
    }
    // Copy/Subpiece/IntZext/IntSext/Cast are already handled by the dedicated
    // `copy_like_snapshot_source_redefined_before_consumer` check — skip them
    // here so we don't double-fire traces.
    if matches!(
        insn.op,
        IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
    ) {
        return false;
    }
    let Some(stmt_inputs) = ctx.stmt_inputs.get(&stmt_idx) else {
        return false;
    };
    for input_sv in stmt_inputs {
        if input_sv.base.space != SpaceId::Register {
            continue;
        }
        if *input_sv == *output_sv {
            continue;
        }
        for (&redef_stmt, output) in ctx.stmt_outputs.range((stmt_idx + 1)..consumer_stmt) {
            let Some(candidate) = output else {
                continue;
            };
            if *candidate == *input_sv {
                continue;
            }
            if share_printed_storage(*candidate, *input_sv, ctx) {
                tracing::debug!(target: "unlace::cprinter",
                    "expr-input-redefined stmt={stmt_idx} consumer={consumer_stmt} output={output_sv:?} input={input_sv:?} redef_stmt={redef_stmt} redef={candidate:?}",
                );
                return true;
            }
        }
    }
    false
}

/// Whether rendering statement `stmt_idx`'s expression at `consumer_stmt`
/// reads a variable that has been written in between.
///
/// The reads are the statement's operands plus, through every operand whose
/// definition is folded, that definition's operands: inlining moves them all
/// to the consumer. `t = c8 + a2; c2 = LODWORD(t); <loop writing a2>;
/// use(c2)` must not render `use(LODWORD(c8 + a2))` after the loop. A write
/// to a different SSA value that prints under the same name (merged
/// temporaries) clobbers the read just like a same-register write. When the
/// statement is also emitted (`def_emitted`), its own assignment counts: after
/// `v28 = v28 >> 1`, re-rendering `v28 >> 1` reads the new value.
fn inlined_read_clobbered_before(
    stmt_idx: u32,
    consumer_stmt: u32,
    def_emitted: bool,
    ctx: &PrintCtx,
) -> bool {
    let first_write = if def_emitted { stmt_idx } else { stmt_idx + 1 };
    if consumer_stmt <= first_write {
        return false;
    }
    let mut reads = BTreeSet::new();
    let mut reads_memory = false;
    let mut pending = vec![stmt_idx];
    let mut visited = BTreeSet::new();
    while let Some(stmt) = pending.pop() {
        if !visited.insert(stmt) {
            continue;
        }
        for input_sv in ctx.stmt_inputs.get(&stmt).into_iter().flatten() {
            let def_stmt = ctx.sv_defining_stmt.get(input_sv).copied();
            let def_op = def_stmt
                .and_then(|def| ctx.stmt_insns.get(&def))
                .map(|insn| insn.op);
            match (def_stmt, def_op) {
                (Some(def), _) if ctx.foldable_stmts.contains(&def) => pending.push(def),
                // A load result renders as the load expression when it is
                // stable, so the memory read moves to the consumer too.
                (Some(def), Some(IrOp::Load)) => {
                    reads.insert(*input_sv);
                    reads_memory = true;
                    pending.push(def);
                }
                _ => {
                    reads.insert(*input_sv);
                }
            }
        }
    }
    ctx.stmt_insns
        .range(first_write..consumer_stmt)
        .any(|(writer, insn)| {
            if reads_memory && instr_has_side_effects(insn) {
                return true;
            }
            ctx.stmt_outputs
                .get(writer)
                .copied()
                .flatten()
                .is_some_and(|written| {
                    reads
                        .iter()
                        .any(|read| written != *read && share_printed_storage(written, *read, ctx))
                })
        })
}

/// Whether a temporary read by several statements can be rendered inline at
/// every read, so its own assignment need not be printed.
///
/// A temporary that is not folded is printed as an assignment, yet the
/// operand renderer still inlines its expression at most reads, which leaves
/// the assignment dead and the declaration leaked. Folding is safe when every
/// read is a later statement or condition that sees the same operand values
/// as the definition. Phi reads need the named variable.
fn multi_use_temp_inlines_everywhere(
    output_sv: &SsaVarnode,
    stmt_idx: u32,
    use_count: usize,
    ctx: &PrintCtx,
) -> bool {
    if ctx.ssa_phi_uses.contains(output_sv) {
        return false;
    }
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        return false;
    };
    // A statement operand renders as the temporary's name, not its
    // expression, when one of the expression's register inputs is redefined
    // before the read; folding the definition away would leave that name
    // unassigned.
    let statement_reads = ctx.stmt_inputs.iter().flat_map(|(&reader, inputs)| {
        inputs
            .iter()
            .filter(|input| *input == output_sv)
            .map(move |_| (reader, true))
    });
    let condition_reads = ctx
        .cond_use_stmts
        .iter()
        .filter(|(sv, _)| sv == output_sv)
        .map(|&(_, position)| (position, false));
    let readers: Vec<(u32, bool)> = statement_reads.chain(condition_reads).collect();
    readers.len() == use_count
        && readers.iter().all(|&(reader, is_statement)| {
            reader > stmt_idx
                && !inlined_read_clobbered_before(stmt_idx, reader, false, ctx)
                && !(is_statement
                    && expression_inputs_aliased_redefined_before_consumer(
                        output_sv, insn, stmt_idx, reader, ctx,
                    ))
        })
}

/// Whether writing `a` overwrites the C variable that reads of `b` render as:
/// the same or an overlapping location, or two SSA values the variable merge
/// gave one name.
fn share_printed_storage(a: SsaVarnode, b: SsaVarnode, ctx: &PrintCtx) -> bool {
    a.base == b.base
        || aliases(a.base, b.base)
        || ctx
            .merged_names
            .get(&a)
            .is_some_and(|name| ctx.merged_names.get(&b) == Some(name))
}

fn copy_reads_call_output(stmt_idx: u32, ctx: &PrintCtx) -> bool {
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        return false;
    };
    if insn.op != IrOp::Copy {
        return false;
    }
    let Some(input_sv) = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.first())
    else {
        return false;
    };
    ctx.stmt_outputs
        .iter()
        .find_map(|(def_stmt, output)| (*output == Some(*input_sv)).then_some(def_stmt))
        .and_then(|def_stmt| ctx.stmt_insns.get(def_stmt))
        .is_some_and(|def_insn| matches!(def_insn.op, IrOp::Call | IrOp::Callind))
}

fn is_stack_canary_compare_artifact(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if matches!(
        insn.op,
        IrOp::Call | IrOp::Callind | IrOp::Store | IrOp::Return
    ) {
        return false;
    }
    if !ctx
        .stmt_insns
        .values()
        .any(|candidate| insn_calls_symbol(candidate, "__stack_chk_fail", ctx))
    {
        return false;
    }
    let mut seen = BTreeSet::new();
    if !expr_tree_has_fs_canary_load(insn, stmt_idx, ctx, &mut seen, 0) {
        return false;
    }
    tracing::debug!(target: "unlace::cprinter",
        "stmt={stmt_idx} addr=0x{:x} op={:?} decision=suppress-stack-canary-artifact",
        insn.addr, insn.op
    );
    true
}

fn expr_tree_has_fs_canary_load(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
    seen: &mut BTreeSet<SsaVarnode>,
    depth: u8,
) -> bool {
    if depth > 8 {
        return false;
    }
    if insn_is_fs_canary_load(insn) {
        return true;
    }
    if insn.op == IrOp::Load && insn.inputs.len() >= 2 {
        let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
        if resolve_stack_offset_for_addr(&insn.inputs[addr_idx], Some(addr_idx), stmt_idx, ctx, 0)
            .is_some_and(|offset| ctx.canary_stack_offsets.contains(&offset))
        {
            trace_decision(format_args!(
                "canary-stack-load stmt={stmt_idx} decision=artifact addr={:?}",
                insn.inputs[addr_idx]
            ));
            return true;
        }
    }
    for (input_idx, input) in insn.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        let Some(sv) = input_or_latest_sv_for_operand(input, Some(input_idx), stmt_idx, ctx) else {
            continue;
        };
        if !seen.insert(sv) {
            continue;
        }
        let Some(def_stmt) = defining_stmt_for_sv(&sv, ctx) else {
            continue;
        };
        let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
            continue;
        };
        if expr_tree_has_fs_canary_load(def_insn, def_stmt, ctx, seen, depth + 1) {
            return true;
        }
    }
    false
}

fn operand_tree_has_fs_canary_load(
    operand: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if operand.space == SpaceId::Const {
        return false;
    }
    let Some(sv) = input_or_latest_sv_for_operand(operand, raw_idx, stmt_idx, ctx) else {
        return false;
    };
    let Some(def_stmt) = defining_stmt_for_sv(&sv, ctx) else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    let mut seen = BTreeSet::new();
    seen.insert(sv);
    expr_tree_has_fs_canary_load(def_insn, def_stmt, ctx, &mut seen, 0)
}

fn insn_is_fs_canary_load(insn: &IrInsn) -> bool {
    if insn.op != IrOp::Load || insn.inputs.is_empty() {
        return false;
    }
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    let load_size = insn.output.map_or(8, |out| out.size);
    try_fs_canary_load(&insn.inputs[addr_idx], load_size).is_some()
}

/// `true` when the `If`/`IfCmp` condition `cond_sv` is the stack-canary guard
/// comparison — i.e. its defining expression tree reaches a `fs:0x28` canary
/// load. The compiler emits `if (canary != reloaded) __stack_chk_fail();` in
/// the epilogue; IDA/Hex-Rays elide this guard entirely. Detecting it by the
/// *condition* (rather than the branch body) lets the printer drop the whole
/// `if` even when the fail branch carries an extra `goto` to a shared exit
/// label, which is the shape produced for canary checks inside irreducible
/// regions.
fn cond_sv_is_stack_canary_compare(cond_sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    // The canary guard only exists when the function actually calls
    // __stack_chk_fail; gate on that to avoid mis-eliding an unrelated
    // comparison that happens to read TLS.
    if !ctx
        .stmt_insns
        .values()
        .any(|candidate| insn_calls_symbol(candidate, "__stack_chk_fail", ctx))
    {
        return false;
    }
    let Some(def_stmt) = defining_stmt_for_sv(cond_sv, ctx) else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    let mut seen = BTreeSet::new();
    expr_tree_has_fs_canary_load(def_insn, def_stmt, ctx, &mut seen, 0)
}

/// 2-level dead-variable chain propagation (Batch 3 / Wave 4).
///
/// After `compute_foldable` sets `sv_use_counts`, this pass iterates to
/// a fixpoint: for each statement whose output has `use_count == 0` AND
/// is suppressible storage AND has no side effects, decrement the use
/// counts of its inputs. This propagates "dead-ness" backward through
/// chains like:
///
/// ```text
/// v2 = LOAD(addr)     // only used by v3
/// v3 = v2 + 1         // never read → dead
/// ```
///
/// After propagation, `v2` also becomes dead (use_count drops to 0),
/// so both declarations are suppressed.
fn propagate_dead_chains(ctx: &mut PrintCtx) {
    // Build a reverse map: input_sv → list of (stmt_idx) that read it.
    // We don't need it for the algorithm — we iterate stmt_outputs directly.

    // A dead statement stays dead in later rounds; it must release its
    // inputs only once, or every extra round steals a use from a value
    // that a live statement still reads.
    let mut retired: BTreeSet<u32> = BTreeSet::new();
    let max_rounds = 8; // safety cap
    for _round in 0..max_rounds {
        let mut changed = false;

        // Collect dead stmts in this round (can't mutate while iterating).
        let dead_stmts: Vec<u32> = ctx
            .stmt_outputs
            .iter()
            .filter(|(stmt_idx, _)| !retired.contains(stmt_idx))
            .filter_map(|(&stmt_idx, output_sv_opt)| {
                let out_sv = (*output_sv_opt)?;
                // Already folded → skip (handled by expression folding).
                if ctx.foldable_stmts.contains(&stmt_idx) {
                    return None;
                }
                // Must have zero uses.
                if ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) != 0 {
                    return None;
                }
                let insn = ctx.stmt_insns.get(&stmt_idx)?;
                // Pure AArch64 conditional-select callothers (CSEL family)
                // are side-effect-free value computations: a dead-output one
                // is genuinely dead even though its destination is a register
                // (not "suppressible storage"). Retiring it here lets the
                // predicate comparison that fed it become dead too, so no
                // orphan `__unlace_int_*` statement leaks downstream.
                if is_dead_suppressible_csel(insn, stmt_idx, ctx) {
                    return Some(stmt_idx);
                }
                // Output must be suppressible storage.
                if !is_suppressible_storage(&out_sv.base, ctx) {
                    return None;
                }
                // Statement must not have side effects.
                if snapshot_assignment_must_be_materialized(&out_sv, insn, stmt_idx, ctx) {
                    return None;
                }
                if instr_has_side_effects(insn) {
                    return None;
                }
                Some(stmt_idx)
            })
            .collect();

        for stmt_idx in dead_stmts {
            retired.insert(stmt_idx);
            let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx).cloned() else {
                continue;
            };
            for input_sv in inputs {
                if let Some(count) = ctx.sv_use_counts.get_mut(&input_sv)
                    && *count > 0
                {
                    *count -= 1;
                    changed = true;
                }
            }
        }

        if !changed {
            break;
        }
    }
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
        trace_dead_suppress_decision(stmt_idx, insn, None, false, "not-eligible", ctx);
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        trace_dead_suppress_decision(stmt_idx, insn, None, false, "missing-ssa-output", ctx);
        return false;
    };
    if ctx.byref_bases.contains(&out_sv.base) || ctx.cond_uses.contains(&out_sv) {
        trace_dead_suppress_decision(stmt_idx, insn, Some(out_sv), false, "byref-or-cond", ctx);
        return false;
    }
    if is_redundant_inverted_control_compare(insn, stmt_idx, &out_sv, ctx) {
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            true,
            "redundant-inverted-control-compare",
            ctx,
        );
        return true;
    }
    if is_transient_x86_frame_base_update(insn, stmt_idx, ctx) {
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            true,
            "transient-frame-base-update",
            ctx,
        );
        return true;
    }
    if snapshot_assignment_must_be_materialized(&out_sv, insn, stmt_idx, ctx) {
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            false,
            "snapshot-materialized",
            ctx,
        );
        return false;
    }
    if insn.op == IrOp::Load {
        let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
        if use_count == 0 {
            trace_dead_suppress_decision(stmt_idx, insn, Some(out_sv), true, "dead-load", ctx);
            return true;
        }
        let load_size = insn.output.map_or(8, |o| o.size);
        let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
        let readonly = insn.inputs.get(addr_idx).is_some_and(|addr| {
            try_readonly_scalar_load(addr, Some(addr_idx), stmt_idx, load_size, ctx).is_some()
        });
        let inlineable = stable_load_expr_is_inlineable(insn, stmt_idx, ctx) || readonly;
        let decision = inlineable && use_count <= 1;
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            decision,
            if decision {
                "inlineable-load"
            } else {
                "materialized-load"
            },
            ctx,
        );
        return decision;
    }
    let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
    let decision = is_suppressible_storage(&out_sv.base, ctx) && use_count == 0;
    trace_dead_suppress_decision(
        stmt_idx,
        insn,
        Some(out_sv),
        decision,
        if decision {
            "dead-suppressible-storage"
        } else if use_count > 0 {
            "live-storage"
        } else {
            "visible-storage"
        },
        ctx,
    );
    decision
}

fn trace_dead_suppress_decision(
    stmt_idx: u32,
    insn: &IrInsn,
    out_sv: Option<SsaVarnode>,
    decision: bool,
    reason: &str,
    ctx: &PrintCtx,
) {
    if !c_printer_trace_enabled() {
        return;
    }
    let out_name = out_sv.and_then(|sv| known_name_of_sv(ctx, &sv));
    let uses = out_sv
        .map(|sv| ctx.sv_use_counts.get(&sv).copied().unwrap_or(0))
        .unwrap_or(0);
    let phi = out_sv.is_some_and(|sv| ctx.ssa_phi_uses.contains(&sv));
    let inputs = ctx
        .stmt_input_slots
        .get(&stmt_idx)
        .map(|slots| {
            slots
                .iter()
                .map(|(slot, sv)| {
                    format!(
                        "{slot}:{sv:?}:{:?}",
                        known_name_of_sv(ctx, sv).unwrap_or_default()
                    )
                })
                .collect::<Vec<_>>()
                .join(",")
        })
        .unwrap_or_default();
    tracing::debug!(target: "unlace::cprinter",
        "dead-suppress stmt={stmt_idx} addr=0x{:x} op={:?} out={out_sv:?} name={out_name:?} uses={uses} phi={phi} inputs=[{inputs}] decision={decision} reason={reason}",
        insn.addr, insn.op
    );
}

fn snapshot_assignment_must_be_materialized(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    ctx.stmt_inputs
        .range((stmt_idx + 1)..)
        .any(|(&use_stmt, inputs)| {
            inputs.contains(output_sv)
                && copy_like_snapshot_source_redefined_before_consumer(
                    output_sv, insn, stmt_idx, use_stmt, ctx,
                )
        })
}

fn should_suppress_var_decl(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    if is_instruction_pointer_reg(&sv.base) {
        return true;
    }
    if !is_suppressible_storage(&sv.base, ctx) {
        return false;
    }
    if ctx.byref_bases.contains(&sv.base) || ctx.cond_uses.contains(sv) {
        return false;
    }
    ctx.sv_use_counts.get(sv).copied().unwrap_or(0) == 0
}

fn is_redundant_inverted_control_compare(
    insn: &IrInsn,
    stmt_idx: u32,
    out_sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> bool {
    let Some(inverse_op) = inverse_equality_op(insn.op) else {
        return false;
    };
    if insn.inputs.len() != 2 {
        return false;
    }
    if ctx.var_names.get(out_sv).is_none_or(|name| name != "cond") {
        return false;
    }

    ctx.stmt_outputs
        .range((stmt_idx + 1)..)
        .any(|(&later_idx, later_output)| {
            let Some(later_sv) = later_output else {
                return false;
            };
            let Some(later_insn) = ctx.stmt_insns.get(&later_idx) else {
                return false;
            };
            later_insn.op == inverse_op
                && later_insn.inputs == insn.inputs
                && is_control_only_condition_assignment(later_idx, later_sv, later_insn, ctx)
        })
}

fn inverse_equality_op(op: IrOp) -> Option<IrOp> {
    match op {
        IrOp::IntEqual => Some(IrOp::IntNotequal),
        IrOp::IntNotequal => Some(IrOp::IntEqual),
        IrOp::FloatEqual => Some(IrOp::FloatNotequal),
        IrOp::FloatNotequal => Some(IrOp::FloatEqual),
        _ => None,
    }
}

fn is_suppressible_storage(vn: &Varnode, ctx: &PrintCtx) -> bool {
    is_temp_varnode(vn)
        || is_flag_register(vn)
        || is_instruction_pointer_reg(vn)
        || is_frame_base_reg_ctx(vn, ctx)
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
            | IrOp::Fence
            | IrOp::AtomicStore
            | IrOp::AtomicRmw
            | IrOp::AtomicCas
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

        if matches!(insn.op, IrOp::IntAdd)
            && insn.inputs.len() == 2
            && let Some(out) = insn.output
        {
            let a = &insn.inputs[0];
            let b = &insn.inputs[1];
            let off = stack_offset_of_add(a, b).or_else(|| stack_offset_of_add(b, a));
            if let Some(off) = off {
                stack_addr_def.insert(out, off);
                continue;
            }
            if let Some(&base_off) = stack_addr_def.get(a)
                && b.space == SpaceId::Const
            {
                stack_addr_def.insert(out, base_off.wrapping_add(b.offset as i64));
                continue;
            }
            if let Some(&base_off) = stack_addr_def.get(b)
                && a.space == SpaceId::Const
            {
                stack_addr_def.insert(out, base_off.wrapping_add(a.offset as i64));
                continue;
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

/// t259: Classify constant absolute addresses as MMIO registers when they
/// exhibit the canonical memory-mapped-I/O access shape: multiple reads in
/// tight succession with no intervening write to the same address, or
/// multiple writes with no intervening read.
///
/// Why this heuristic: a non-volatile compiler is free to coalesce repeated
/// reads of the same address into a single load. When the source *did*
/// re-read (or re-write) the address back-to-back, the compiler-visible
/// shape only survives when the address is volatile-qualified. Conversely,
/// a normal global typically has interleaved reads and writes via locals,
/// so successive raw Loads of the same constant address are a strong
/// MMIO signal.
///
/// Threshold: ≥ 2 successive accesses of the same kind, with no
/// intervening opposite-kind access to that address. The scan iterates
/// `stmt_insns` in `next_stmt`-order (canonical emission order set up
/// by [`collect_varnodes`]). Non-constant addresses are ignored — those
/// could be aliasing pointers and we have no taint analysis here.
// `collapsible_match` would force the readable `if cond { body }` inside each
// match arm to migrate into match-guards, which hurts readability for these
// heuristic blocks. Keep the original shape.
#[allow(clippy::collapsible_match, clippy::collapsible_if)]
fn detect_mmio_addrs(ctx: &mut PrintCtx) {
    use std::collections::BTreeMap;
    // Per-address state: (consecutive_loads, consecutive_stores).
    // A Load resets the store-streak (and vice-versa); the very first
    // access starts a streak of length 1.
    let mut state: BTreeMap<u64, (u32, u32)> = BTreeMap::new();

    // Filter: only classify addresses that look like plausible MMIO
    // register windows. Address 0 (and tiny constants) are typically
    // either FS-segment TLS offsets, null-deref placeholders, or
    // synthesized IR fixtures — definitely not MMIO. We use the same
    // 0x1000 floor as `try_emit_memory_annotation` so the two
    // analyses agree on "is this a real global address?"
    const MMIO_ADDR_FLOOR: u64 = 0x1000;

    // Iterate in statement order. `stmt_insns` is keyed by stmt_idx so
    // BTreeMap order is the canonical emit order.
    for insn in ctx.stmt_insns.values() {
        match insn.op {
            IrOp::Load => {
                // Load inputs = [space, address]. Only constant addresses
                // are candidates.
                if insn.inputs.len() >= 2 && insn.inputs[1].space == SpaceId::Const {
                    let addr = insn.inputs[1].offset;
                    if addr < MMIO_ADDR_FLOOR {
                        continue;
                    }
                    let entry = state.entry(addr).or_insert((0, 0));
                    entry.0 += 1;
                    entry.1 = 0;
                    if entry.0 >= 2 {
                        ctx.mmio_addrs.insert(addr);
                    }
                }
            }
            IrOp::Store => {
                // Store inputs = [space, address, value].
                if insn.inputs.len() >= 3 && insn.inputs[1].space == SpaceId::Const {
                    let addr = insn.inputs[1].offset;
                    if addr < MMIO_ADDR_FLOOR {
                        continue;
                    }
                    let entry = state.entry(addr).or_insert((0, 0));
                    entry.1 += 1;
                    entry.0 = 0;
                    if entry.1 >= 2 {
                        ctx.mmio_addrs.insert(addr);
                    }
                }
            }
            _ => {}
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
fn stmt_visible_for_hoist(ctx: &PrintCtx, stmt_idx: u32) -> bool {
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        // Synthetic condition/return anchors have no direct instruction but
        // are still visible uses from the C emitter's perspective.
        return true;
    };
    !(ctx.foldable_stmts.contains(&stmt_idx)
        || is_dead_zero_init(insn, stmt_idx, ctx)
        || is_dead_suppressible_store(insn, stmt_idx, ctx))
}

fn stmt_visible_for_hoist_base(
    ctx: &PrintCtx,
    base: Varnode,
    stmt_idx: u32,
    base_visible: bool,
) -> bool {
    if !base_visible {
        return false;
    }
    let Some(insn) = ctx.stmt_insns.get(&stmt_idx) else {
        return true;
    };
    if let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx)
        && out_sv.base == base
        && is_control_only_condition_assignment(stmt_idx, out_sv, insn, ctx)
    {
        return false;
    }
    true
}

fn record_hoist_candidate_name(candidate_bases: &mut BTreeSet<Varnode>, base: Varnode, name: &str) {
    if is_temp_hoist_name(name) {
        candidate_bases.insert(base);
    }
}

fn compute_hoist_plan(ctx: &mut PrintCtx) {
    use std::collections::BTreeMap;

    // For each base varnode, gather every statement index that touches it.
    let mut use_stmts: BTreeMap<Varnode, Vec<u32>> = BTreeMap::new();
    let mut base_scope_paths: BTreeMap<Varnode, Vec<Vec<u32>>> = BTreeMap::new();
    let mut name_scope_paths: BTreeMap<String, Vec<Vec<u32>>> = BTreeMap::new();
    let mut candidate_bases: BTreeSet<Varnode> = BTreeSet::new();
    let collect_inputs_span = linkscope::phase("cprinter.hoist.collect-inputs");
    for (&stmt_idx, inputs) in &ctx.stmt_inputs {
        for sv in inputs {
            use_stmts.entry(sv.base).or_default().push(stmt_idx);
            base_scope_paths.entry(sv.base).or_default().push(
                ctx.stmt_scope_paths
                    .get(&stmt_idx)
                    .cloned()
                    .unwrap_or_default(),
            );
            if let Some(name) = known_name_of_sv(ctx, sv) {
                record_hoist_candidate_name(&mut candidate_bases, sv.base, &name);
                name_scope_paths.entry(name).or_default().push(
                    ctx.stmt_scope_paths
                        .get(&stmt_idx)
                        .cloned()
                        .unwrap_or_default(),
                );
            }
        }
    }
    linkscope::record_items(
        "cprinter.hoist.collect-inputs",
        ctx.stmt_inputs.len() as u64,
    );
    drop(collect_inputs_span);

    let collect_outputs_span = linkscope::phase("cprinter.hoist.collect-outputs");
    for (&stmt_idx, output_sv_opt) in &ctx.stmt_outputs {
        if let Some(sv) = output_sv_opt {
            use_stmts.entry(sv.base).or_default().push(stmt_idx);
            base_scope_paths.entry(sv.base).or_default().push(
                ctx.stmt_scope_paths
                    .get(&stmt_idx)
                    .cloned()
                    .unwrap_or_default(),
            );
            if let Some(name) = known_name_of_sv(ctx, sv) {
                record_hoist_candidate_name(&mut candidate_bases, sv.base, &name);
                name_scope_paths.entry(name).or_default().push(
                    ctx.stmt_scope_paths
                        .get(&stmt_idx)
                        .cloned()
                        .unwrap_or_default(),
                );
            }
        }
    }
    linkscope::record_items(
        "cprinter.hoist.collect-outputs",
        ctx.stmt_outputs.len() as u64,
    );
    drop(collect_outputs_span);

    let collect_conditions_span = linkscope::phase("cprinter.hoist.collect-conditions");
    for (sv, anchor_stmt) in &ctx.cond_use_stmts {
        // Anchor at the *previous* statement (the one that wrote the cond
        // value) when the recorded anchor is past the end of the stmt list.
        let s = (*anchor_stmt).min(ctx.next_stmt.saturating_sub(1));
        use_stmts.entry(sv.base).or_default().push(s);
    }
    for (sv, path) in &ctx.cond_use_scope_paths {
        base_scope_paths
            .entry(sv.base)
            .or_default()
            .push(path.clone());
        if let Some(name) = known_name_of_sv(ctx, sv) {
            record_hoist_candidate_name(&mut candidate_bases, sv.base, &name);
            name_scope_paths.entry(name).or_default().push(path.clone());
        }
    }
    for ((cond_sv, anchor_stmt), (scope_sv, path)) in ctx
        .cond_use_stmts
        .iter()
        .zip(ctx.cond_use_scope_paths.iter())
    {
        if cond_sv != scope_sv {
            continue;
        }
        let s = (*anchor_stmt).min(ctx.next_stmt.saturating_sub(1));
        let Some(inputs) = ctx.stmt_inputs.get(&s) else {
            continue;
        };
        for input_sv in inputs {
            base_scope_paths
                .entry(input_sv.base)
                .or_default()
                .push(path.clone());
            if let Some(name) = known_name_of_sv(ctx, input_sv) {
                record_hoist_candidate_name(&mut candidate_bases, input_sv.base, &name);
                name_scope_paths.entry(name).or_default().push(path.clone());
            }
        }
    }
    linkscope::record_items(
        "cprinter.hoist.collect-conditions",
        ctx.cond_use_stmts.len() as u64,
    );
    drop(collect_conditions_span);

    let dedupe_scope_paths_span = linkscope::phase("cprinter.hoist.dedupe-scope-paths");
    for paths in base_scope_paths.values_mut() {
        paths.sort();
        paths.dedup();
    }
    for paths in name_scope_paths.values_mut() {
        paths.sort();
        paths.dedup();
    }
    drop(dedupe_scope_paths_span);

    let candidate_bases_span = linkscope::phase("cprinter.hoist.candidate-bases");
    linkscope::record_items(
        "cprinter.hoist.candidate-bases",
        candidate_bases.len() as u64,
    );
    drop(candidate_bases_span);

    let mut stmt_visible_cache: BTreeMap<u32, bool> = BTreeMap::new();
    let mut visible_stmts_by_base: BTreeMap<Varnode, Vec<u32>> = BTreeMap::new();
    let visible_filter_span = linkscope::phase("cprinter.hoist.visible-filter");
    for base in &candidate_bases {
        let Some(stmts) = use_stmts.get(base) else {
            continue;
        };
        let mut unique_stmts = stmts.clone();
        unique_stmts.sort_unstable();
        unique_stmts.dedup();
        let visible: Vec<u32> = unique_stmts
            .into_iter()
            .filter(|stmt_idx| {
                let base_visible = if let Some(base_visible) = stmt_visible_cache.get(stmt_idx) {
                    *base_visible
                } else {
                    let base_visible = stmt_visible_for_hoist(ctx, *stmt_idx);
                    stmt_visible_cache.insert(*stmt_idx, base_visible);
                    base_visible
                };
                stmt_visible_for_hoist_base(ctx, *base, *stmt_idx, base_visible)
            })
            .collect();
        visible_stmts_by_base.insert(*base, visible);
    }
    linkscope::record_items(
        "cprinter.hoist.visible-filter",
        candidate_bases.len() as u64,
    );
    drop(visible_filter_span);

    let mut base_names_by_base: BTreeMap<Varnode, String> = BTreeMap::new();
    let mut name_earliest_stmt: BTreeMap<String, u32> = BTreeMap::new();
    let name_resolution_span = linkscope::phase("cprinter.hoist.name-resolution");
    for (base, stmts) in &visible_stmts_by_base {
        let Some(name) = hoist_name_for_base(ctx, base, stmts) else {
            continue;
        };
        let Some(first_stmt) = stmts.first().copied() else {
            continue;
        };
        base_names_by_base.insert(*base, name.clone());
        name_earliest_stmt
            .entry(name)
            .and_modify(|existing| *existing = (*existing).min(first_stmt))
            .or_insert(first_stmt);
    }
    linkscope::record_items(
        "cprinter.hoist.name-resolution",
        base_names_by_base.len() as u64,
    );
    drop(name_resolution_span);

    let empty_path: Vec<u32> = Vec::new();
    let mut planned_names: BTreeSet<String> = BTreeSet::new();

    let plan_loop_span = linkscope::phase("cprinter.hoist.plan-loop");
    for base in candidate_bases {
        let Some(raw_stmts) = use_stmts.get(&base) else {
            continue;
        };
        let stmts = visible_stmts_by_base
            .get(&base)
            .cloned()
            .unwrap_or_default();
        if stmts.is_empty() {
            trace_hoist_text(format_args!(
                "skip base={base:?} raw_stmts={raw_stmts:?} reason=no-visible-stmts"
            ));
            continue;
        }
        let base_name = base_names_by_base.get(&base).cloned();
        trace_hoist_text(format_args!(
            "candidate base={base:?} name={:?} visible_stmts={:?} raw_stmts={:?}",
            base_name, stmts, raw_stmts
        ));

        // Skip BYREF — these are address-taken and must live at fn top.
        if ctx.byref_bases.contains(&base) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={:?} reason=byref",
                base_name
            ));
            continue;
        }
        // Skip vars whose name isn't even known yet (defensive).  This must
        // consult `var_names` as well as `base_names`: coalesced/merged temps
        // commonly never populate `base_names`, and those are exactly the
        // generic declarations that otherwise leak into the function-top block.
        let Some(base_name) = base_name else {
            trace_hoist_text(format_args!("skip base={base:?} reason=no-known-name"));
            continue;
        };
        if !is_temp_hoist_name(&base_name) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} reason=non-temp-name"
            ));
            continue;
        }
        if planned_names.contains(&base_name) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} reason=name-already-hoisted"
            ));
            continue;
        }
        if name_earliest_stmt.get(&base_name).copied() != stmts.first().copied() {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={} reason=name-earlier-touch earliest={:?}",
                stmts[0],
                name_earliest_stmt.get(&base_name)
            ));
            continue;
        }

        // Compute LCA of all use paths.
        let lca = lca_scope_path(&stmts, &ctx.stmt_scope_paths, &empty_path);
        let base_lca = base_scope_paths
            .get(&base)
            .map(|paths| lca_paths(paths, &empty_path))
            .unwrap_or_else(|| lca.clone());
        let name_lca = name_scope_paths
            .get(&base_name)
            .map(|paths| lca_paths(paths, &empty_path))
            .unwrap_or_else(|| lca.clone());

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
        if first_path != lca || first_path != base_lca || first_path != name_lca {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=scope-lca first_path={first_path:?} lca={lca:?} base_lca={base_lca:?} name_lca={name_lca:?}"
            ));
            continue;
        }

        // The first-touched statement must *write* this base (not just read
        // it).  Reads-before-writes happen for parameter/live-in values
        // which must stay declared at fn top (or via the signature).
        let Some(Some(out_sv)) = ctx.stmt_outputs.get(&first_stmt).copied() else {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=first-not-output"
            ));
            continue;
        };
        if out_sv.base != base {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} output={out_sv:?} reason=first-output-other-base"
            ));
            continue;
        }
        if let Some(inputs) = ctx.stmt_inputs.get(&first_stmt)
            && inputs.iter().any(|input_sv| {
                input_sv.base != base
                    && base_names_by_base
                        .get(&input_sv.base)
                        .is_some_and(|input_name| input_name == &base_name)
            })
        {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=same-name-input-at-anchor"
            ));
            continue;
        }

        // Skip statements that the emitter would suppress or rewrite into
        // a non-assignment shape.
        if ctx.foldable_stmts.contains(&first_stmt) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=foldable"
            ));
            continue;
        }
        let Some(insn) = ctx.stmt_insns.get(&first_stmt).cloned() else {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=no-insn"
            ));
            continue;
        };
        if is_dead_zero_init(&insn, first_stmt, ctx) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=dead-zero"
            ));
            continue;
        }
        if is_dead_suppressible_store(&insn, first_stmt, ctx) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=dead-suppressible"
            ));
            continue;
        }
        if is_stack_canary_compare_artifact(&insn, first_stmt, ctx) {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=stack-canary"
            ));
            continue;
        }
        if is_csel_callother(&insn) {
            // CSEL emits an `if (...) { lhs = ...; } else ...` — can't fold.
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=csel"
            ));
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
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=self-input"
            ));
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
                trace_hoist_text(format_args!(
                    "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=return-merge reads={reads}"
                ));
                continue;
            }
        }

        // Sanity: every other use's path must extend the LCA prefix.
        let mut all_dominated = true;
        for &s in &stmts {
            let p = ctx.stmt_scope_paths.get(&s).cloned().unwrap_or_default();
            if !p.starts_with(&lca) {
                all_dominated = false;
                break;
            }
        }
        if !all_dominated {
            trace_hoist_text(format_args!(
                "skip base={base:?} name={base_name} first_stmt={first_stmt} reason=not-dominated"
            ));
            continue;
        }

        ctx.hoist_decl_plan.insert(
            base,
            HoistPlan {
                stmt_idx: first_stmt,
                fold_into_assignment: true,
            },
        );
        planned_names.insert(base_name.clone());
        trace_hoist_text(format_args!(
            "plan base={base:?} name={base_name} stmt={first_stmt} fold_into_assignment=true"
        ));
    }
    linkscope::record_items("cprinter.hoist.plan-loop", ctx.hoist_decl_plan.len() as u64);
    drop(plan_loop_span);
}

fn is_temp_hoist_name(name: &str) -> bool {
    is_v_number_name(name) || is_coalesced_number_name(name) || is_cond_number_name(name)
}

fn hoist_name_for_base(ctx: &PrintCtx, base: &Varnode, visible_stmts: &[u32]) -> Option<String> {
    visible_stmts
        .iter()
        .filter_map(|stmt_idx| ctx.stmt_outputs.get(stmt_idx).copied().flatten())
        .find(|sv| sv.base == *base)
        .and_then(|sv| known_name_of_sv(ctx, &sv))
        .or_else(|| known_name_for_base(ctx, base))
}

/// Longest common prefix of the scope paths for every statement in `stmts`.
fn lca_scope_path(stmts: &[u32], paths: &BTreeMap<u32, Vec<u32>>, fallback: &Vec<u32>) -> Vec<u32> {
    let mut iter = stmts.iter();
    let first = match iter.next() {
        Some(s) => paths.get(s).unwrap_or(fallback).clone(),
        None => return fallback.clone(),
    };
    let mut lca = first;
    for s in iter {
        let p = paths.get(s).unwrap_or(fallback);
        let common = lca.iter().zip(p.iter()).take_while(|(a, b)| a == b).count();
        lca.truncate(common);
        if lca.is_empty() {
            break;
        }
    }
    lca
}

fn lca_paths(paths: &[Vec<u32>], fallback: &[u32]) -> Vec<u32> {
    let mut iter = paths.iter();
    let Some(first) = iter.next() else {
        return fallback.to_vec();
    };
    let mut lca = first.clone();
    for path in iter {
        let common = lca
            .iter()
            .zip(path.iter())
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
        // Record array-typed aggregate locals so a recovered frame-base-relative
        // indexed stack buffer can adopt this name/type/size instead of the
        // synthetic `buf_<offset>` fallback.
        if let Some(type_name) = local.type_name.as_deref()
            && !local.name.is_empty()
            && let Some(arr) = parse_dwarf_array_local(&local.name, type_name)
            && !ctx.dwarf_array_locals.iter().any(|a| a.name == arr.name)
        {
            ctx.dwarf_array_locals.push(arr);
        }
        let mut frame_offsets = Vec::new();
        if let Some(o) = local.frame_offset {
            frame_offsets.push(o);
        }
        for (_, loc) in &local.locations_dwarf_v5 {
            if let unlace_loader::SimpleLocation::FrameOffset(o) = loc {
                frame_offsets.push(*o);
            }
        }
        frame_offsets.sort_unstable();
        frame_offsets.dedup();

        for frame_off in frame_offsets {
            let mut candidate_offsets = vec![frame_off as u64];
            let rsp_off = frame_size + frame_off;
            if rsp_off >= 0 {
                candidate_offsets.push(rsp_off as u64);
            }
            candidate_offsets.sort_unstable();
            candidate_offsets.dedup();

            for raw_off in candidate_offsets {
                for size in [1u8, 2, 4, 8] {
                    let stk = Varnode::stack(raw_off, size);
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
    }
}

/// t232: register recovered stack-frame slots in [`PrintCtx::name_overrides`]
/// so accesses through `Varnode::stack(offset, size)` print as the
/// synthesized local name (`v_<abs(offset)>` for scalars or
/// `buf_<abs(offset)>` for arrays).
///
/// One override is installed per common access width (1/2/4/8) so a
/// narrower load at a wider slot — e.g. an 8-bit MOV out of an 8-byte
/// long — still resolves to the same name.
///
/// DWARF entries take priority: this function never overwrites an
/// existing key in `name_overrides`.
fn compute_stack_frame_names(func: &HirFunction, ctx: &mut PrintCtx) {
    use unlace_ir::ssa::FrameSlotKind;
    let frame = match func.stack_frame.as_ref() {
        Some(f) => f,
        None => return,
    };
    let absorbed_offsets = absorbed_stack_offsets_by_buffers(func, ctx);
    for local in frame.locals.values() {
        // Only name user-visible locals — saved registers, return addresses,
        // and stack arguments are suppressed from the output.
        if !matches!(local.kind, FrameSlotKind::Local) {
            continue;
        }
        if absorbed_offsets.contains(&local.offset) {
            trace_stack_text(format_args!(
                "frame-name-skip offset={} raw_size={} reason=absorbed-by-buffer",
                local.offset, local.size
            ));
            continue;
        }
        let ann = ctx.stack_lvars.get(&local.offset);
        let mut size = ann
            .map(|ann| ann.size.max(local.size))
            .unwrap_or(local.size);
        let is_buffer = ann.is_some_and(|ann| ann.is_buffer) || size > 8;
        if is_buffer {
            size = effective_stack_buffer_size(func, local.offset, size, ctx);
        }
        let mut name = ann
            .and_then(|ann| (!ann.name.is_empty()).then(|| ann.name.clone()))
            .unwrap_or_else(|| fallback_stack_name(local.offset, size, is_buffer));
        if is_buffer && ann.is_none_or(|ann| !ann.from_debug) {
            name = canonical_stack_buffer_name(func, &name);
        }
        trace_stack_text(format_args!(
            "frame-name offset={} raw_size={} chosen_size={} name={} buffer={} ann_present={} ann_c_type={:?} ann_from_debug={}",
            local.offset,
            local.size,
            size,
            name,
            is_buffer,
            ann.is_some(),
            ann.and_then(|ann| ann.c_type.as_deref()),
            ann.is_some_and(|ann| ann.from_debug),
        ));
        ctx.stack_frame_slots.insert(
            local.offset,
            StackSlotName {
                name: name.clone(),
                size,
                is_buffer,
            },
        );
        // Register the override under every plausible access width so a
        // partial (1/2/4) read of a wider slot still picks up the name.
        // The base varnode stored in `name_overrides` is keyed by full
        // `Varnode` identity (space + offset + size), so we expand here.
        let raw_offset = local.offset as u64;
        for size in [1u8, 2, 4, 8] {
            let stk = Varnode::stack(raw_offset, size);
            ctx.name_overrides
                .entry(stk)
                .or_insert_with(|| name.clone());
        }
        if size > 8 {
            // Wide buffers may also be addressed at their declared size.
            let stk = Varnode::stack(raw_offset, size.min(255) as u8);
            ctx.name_overrides
                .entry(stk)
                .or_insert_with(|| name.clone());
        }
    }
}

fn absorbed_stack_offsets_by_buffers(func: &HirFunction, ctx: &PrintCtx) -> BTreeSet<i64> {
    use unlace_ir::ssa::FrameSlotKind;
    let Some(frame) = func.stack_frame.as_ref() else {
        return BTreeSet::new();
    };
    let mut absorbed = BTreeSet::new();
    for local in frame.locals.values() {
        if !matches!(local.kind, FrameSlotKind::Local) {
            continue;
        }
        let ann = ctx.stack_lvars.get(&local.offset);
        let size = ann
            .map(|ann| ann.size.max(local.size))
            .unwrap_or(local.size);
        let is_buffer = ann.is_some_and(|ann| ann.is_buffer) || size > 8;
        if !is_buffer {
            continue;
        }
        let mut end = match local.offset.checked_add(size as i64) {
            Some(end) => end,
            None => continue,
        };
        while let Some(next) = frame.locals.get(&end) {
            if !matches!(next.kind, FrameSlotKind::Local) || next.size > 8 {
                break;
            }
            if ctx
                .stack_lvars
                .get(&next.offset)
                .is_some_and(|ann| ann.from_debug)
            {
                break;
            }
            trace_stack_text(format_args!(
                "frame-buffer-absorb buffer_offset={} absorbed_offset={} absorbed_size={} absorbed_kind={:?}",
                local.offset, next.offset, next.size, next.kind
            ));
            absorbed.insert(next.offset);
            let Some(next_end) = next.offset.checked_add(next.size as i64) else {
                break;
            };
            end = next_end;
        }
    }
    absorbed
}

fn effective_stack_buffer_size(
    func: &HirFunction,
    offset: i64,
    base_size: u64,
    ctx: &PrintCtx,
) -> u64 {
    use unlace_ir::ssa::FrameSlotKind;
    let Some(frame) = func.stack_frame.as_ref() else {
        return base_size;
    };
    let mut size = base_size;
    let mut end = match offset.checked_add(size as i64) {
        Some(end) => end,
        None => return size,
    };
    while let Some(next) = frame.locals.get(&end) {
        if !matches!(next.kind, FrameSlotKind::Local) || next.size > 8 {
            break;
        }
        if ctx
            .stack_lvars
            .get(&next.offset)
            .is_some_and(|ann| ann.from_debug)
        {
            break;
        }
        size = size.saturating_add(next.size);
        let Some(next_end) = next.offset.checked_add(next.size as i64) else {
            break;
        };
        end = next_end;
    }
    if size != base_size {
        trace_stack_text(format_args!(
            "frame-buffer-extend offset={offset} base_size={base_size} effective_size={size}"
        ));
    }
    size
}

fn fallback_stack_name(offset: i64, size: u64, is_buffer: bool) -> String {
    if is_buffer || size > 8 {
        format!("buf_{}", offset.unsigned_abs())
    } else {
        format!("v_{}", offset.unsigned_abs())
    }
}

fn canonical_stack_buffer_name(func: &HirFunction, name: &str) -> String {
    if name.starts_with("buf_") && visible_stack_buffer_count(func) == 1 {
        "buf".to_string()
    } else {
        name.to_string()
    }
}

fn visible_stack_buffer_count(func: &HirFunction) -> usize {
    use unlace_ir::ssa::FrameSlotKind;
    func.stack_frame
        .as_ref()
        .map(|frame| {
            frame
                .locals
                .values()
                .filter(|local| matches!(local.kind, FrameSlotKind::Local) && local.size > 8)
                .count()
        })
        .unwrap_or(0)
}

fn inferred_stack_buffer_array_decl(
    offset: i64,
    size: u64,
    ctx: &PrintCtx,
) -> Option<(&'static str, u64)> {
    if size < 16 || !size.is_multiple_of(4) {
        return None;
    }
    let end = offset.saturating_add(size as i64);
    let int_subslots = ctx
        .stack_lvars
        .iter()
        .filter(|(slot, ann)| {
            **slot > offset && **slot < end && matches!(ann.ty, Some(TypeKind::Int))
        })
        .count();
    (int_subslots >= 2).then_some(("int", size / 4))
}

fn debug_stack_lvar_name(ctx: &PrintCtx, offset: i64) -> Option<String> {
    ctx.stack_lvars
        .get(&offset)
        .filter(|ann| ann.from_debug && !ann.name.is_empty())
        .map(|ann| ann.name.clone())
}

fn compute_suppressed_stack_offsets(func: &HirFunction, ctx: &mut PrintCtx) {
    use unlace_ir::ssa::FrameSlotKind;
    let Some(frame) = func.stack_frame.as_ref() else {
        return;
    };
    for local in frame.locals.values() {
        if !matches!(local.kind, FrameSlotKind::Local) {
            ctx.suppressed_stack_offsets.insert(local.offset);
        }
    }
}

fn compute_canary_stack_offsets(ctx: &mut PrintCtx) {
    if !ctx
        .stmt_insns
        .values()
        .any(|candidate| insn_calls_symbol(candidate, "__stack_chk_fail", ctx))
    {
        return;
    }

    let candidates: Vec<(u32, IrInsn)> = ctx
        .stmt_insns
        .iter()
        .filter_map(|(&stmt_idx, insn)| {
            (insn.op == IrOp::Store).then_some((stmt_idx, insn.clone()))
        })
        .collect();
    for (stmt_idx, insn) in candidates {
        if insn.inputs.len() < 3 {
            continue;
        }
        let Some(offset) =
            resolve_stack_offset_for_addr(&insn.inputs[1], Some(1), stmt_idx, ctx, 0)
        else {
            trace_decision(format_args!(
                "canary-stack-slot stmt={stmt_idx} decision=skip reason=no-stack-offset"
            ));
            continue;
        };
        if !operand_tree_has_fs_canary_load(&insn.inputs[2], Some(2), stmt_idx, ctx) {
            trace_decision(format_args!(
                "canary-stack-slot stmt={stmt_idx} offset={offset} decision=skip reason=value-not-canary"
            ));
            continue;
        }

        ctx.canary_stack_offsets.insert(offset);
        ctx.suppressed_stack_offsets.insert(offset);
        trace_decision(format_args!(
            "canary-stack-slot stmt={stmt_idx} offset={offset} size={} decision=suppress",
            insn.inputs[2].size.max(1)
        ));
    }
}

fn promote_stack_address_call_arrays(nodes: &[HirNode], ctx: &mut PrintCtx) {
    fn walk(nodes: &[HirNode], ctx: &mut PrintCtx) {
        for node in nodes {
            match node {
                HirNode::Block(children)
                | HirNode::TryFinally {
                    try_body: children, ..
                } => walk(children, ctx),
                HirNode::If {
                    then_body,
                    else_body,
                    ..
                } => {
                    walk(then_body, ctx);
                    if let Some(else_body) = else_body {
                        walk(else_body, ctx);
                    }
                }
                HirNode::While { body, .. }
                | HirNode::DoWhile { body, .. }
                | HirNode::For { body, .. }
                | HirNode::GuardedIf {
                    then_body: body, ..
                } => walk(body, ctx),
                HirNode::Switch { cases, default, .. } => {
                    for (_, body, _) in cases {
                        walk(body, ctx);
                    }
                    if let Some(default) = default {
                        walk(default, ctx);
                    }
                }
                HirNode::TryCatch {
                    try_body,
                    catch_arms,
                } => {
                    walk(try_body, ctx);
                    for (_, body) in catch_arms {
                        walk(body, ctx);
                    }
                }
                HirNode::Statement(insn) if matches!(insn.op, IrOp::Call | IrOp::Callind) => {
                    let Some(stmt_idx) = stmt_idx_for_insn(insn, ctx) else {
                        trace_decision(format_args!(
                            "stack-promote call addr=0x{:x} decision=skip reason=no-stmt-idx",
                            insn.addr
                        ));
                        continue;
                    };
                    for arg_idx in 1..insn.inputs.len() {
                        let ptr = &insn.inputs[arg_idx];
                        if ptr.space == SpaceId::Const {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} decision=skip reason=const"
                            ));
                            continue;
                        }
                        let Some(offset) =
                            resolve_stack_offset_for_addr(ptr, Some(arg_idx), stmt_idx, ctx, 0)
                        else {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} decision=skip reason=no-stack-offset"
                            ));
                            continue;
                        };
                        if let Some(count) = insn.inputs.get(arg_idx + 1)
                            && count.space == SpaceId::Const
                            && count.offset > 1
                            && count.offset <= 1024
                        {
                            let byte_len = count.offset.saturating_mul(4);
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} offset={offset} count={} decision=promote-buffer bytes={byte_len}",
                                count.offset
                            ));
                            promote_stack_buffer(offset, byte_len, ctx);
                        } else if stack_slot_for_offset(offset, ptr.size.max(1), ctx).is_none() {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} offset={offset} size={} decision=synthesize-scalar reason=no-slot",
                                ptr.size.max(1)
                            ));
                            synthesize_stack_scalar(offset, ptr.size.max(1), ctx);
                        } else {
                            trace_decision(format_args!(
                                "stack-promote call stmt={stmt_idx} arg={arg_idx} ptr={ptr:?} offset={offset} size={} decision=skip reason=slot-exists",
                                ptr.size.max(1)
                            ));
                        }
                    }
                }
                HirNode::Statement(insn) if insn.op == IrOp::Store && insn.inputs.len() >= 3 => {
                    let Some(stmt_idx) = stmt_idx_for_insn(insn, ctx) else {
                        trace_decision(format_args!(
                            "stack-promote store addr=0x{:x} decision=skip reason=no-stmt-idx",
                            insn.addr
                        ));
                        continue;
                    };
                    // Frame-base-relative *variable-indexed* store: the index
                    // term defeats `resolve_stack_offset_for_addr` (it returns
                    // None below), so promote the array slot here. The slot must
                    // own enough space for the indexed access (and the matching
                    // address-taken reads), otherwise the rebased
                    // `((T *)&v_N)[i]` subscript / `&v_N` reads overrun an 8-byte
                    // scalar into neighbouring locals.
                    if let Some(decomp) =
                        decompose_frame_indexed(&insn.inputs[1], Some(1), stmt_idx, ctx, 0)
                        && decomp.stride != 0
                        && !ctx.suppressed_stack_offsets.contains(&decomp.frame_offset)
                    {
                        let span =
                            frame_indexed_buffer_size(decomp.frame_offset, decomp.stride, ctx);
                        // Prefer the matching DWARF array local's real name/type/
                        // size: exactly one array whose element size matches the
                        // store stride and whose byte size fits the available span.
                        // This yields a faithful, name-matched `int buf[16];` and
                        // lets the redundant DWARF comment be suppressed, instead
                        // of an unnamed `char buf_<off>[span]`.
                        let dwarf_match =
                            unique_dwarf_array_for_indexed_store(decomp.stride, span, ctx);
                        if let Some(arr) = dwarf_match {
                            let byte_len = arr.elem_size * arr.elem_count;
                            trace_decision(format_args!(
                                "stack-promote store stmt={stmt_idx} offset={} stride={} decision=promote-dwarf-array name={} bytes={byte_len}",
                                decomp.frame_offset, decomp.stride, arr.name
                            ));
                            promote_stack_buffer(decomp.frame_offset, byte_len, ctx);
                            // Re-key the slot under the DWARF name and record the
                            // typed-array decl so emission renders `int buf[16];`.
                            if let Some(slot) = ctx.stack_frame_slots.get_mut(&decomp.frame_offset)
                            {
                                slot.name = arr.name.clone();
                            }
                            for width in [1u8, 2, 4, 8] {
                                let stk = Varnode::stack(decomp.frame_offset as u64, width);
                                ctx.name_overrides.insert(stk, arr.name.clone());
                            }
                            ctx.dwarf_array_buffer_decls
                                .insert(decomp.frame_offset, arr);
                            continue;
                        }
                        if span > 8 {
                            trace_decision(format_args!(
                                "stack-promote store stmt={stmt_idx} offset={} stride={} decision=promote-indexed-buffer bytes={span}",
                                decomp.frame_offset, decomp.stride
                            ));
                            promote_stack_buffer(decomp.frame_offset, span, ctx);
                            continue;
                        }
                    }
                    let Some(offset) =
                        resolve_stack_offset_for_addr(&insn.inputs[1], Some(1), stmt_idx, ctx, 0)
                    else {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} addr={:?} decision=skip reason=no-stack-offset",
                            insn.inputs.get(1)
                        ));
                        continue;
                    };
                    let size = insn.inputs[2].size.max(1);
                    if ctx.suppressed_stack_offsets.contains(&offset) {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} offset={offset} size={size} decision=skip reason=suppressed-offset"
                        ));
                        continue;
                    }
                    if stack_slot_for_offset(offset, size, ctx).is_none() {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} offset={offset} size={size} decision=synthesize-scalar reason=no-slot"
                        ));
                        synthesize_stack_scalar(offset, size, ctx);
                    } else {
                        trace_decision(format_args!(
                            "stack-promote store stmt={stmt_idx} offset={offset} size={size} decision=skip reason=slot-exists"
                        ));
                    }
                }
                HirNode::Commented { inner, .. } => walk(std::slice::from_ref(inner), ctx),
                _ => {}
            }
        }
    }

    walk(nodes, ctx);
}

fn stmt_idx_for_insn(insn: &IrInsn, ctx: &PrintCtx) -> Option<u32> {
    ctx.stmt_insns
        .iter()
        .find_map(|(&idx, stmt)| (stmt.addr == insn.addr && stmt.op == insn.op).then_some(idx))
}

/// Find the single DWARF array local that should name a recovered indexed stack
/// buffer: its element size matches the store `stride`, and its total byte size
/// fits the available `span` (so materializing it cannot overrun into the next
/// stack slot). Requires exactly one such candidate — ambiguity (two int arrays)
/// keeps the synthetic fallback so we never misattribute a name.
fn unique_dwarf_array_for_indexed_store(
    stride: u64,
    span: u64,
    ctx: &PrintCtx,
) -> Option<DwarfArrayLocal> {
    let mut matches = ctx.dwarf_array_locals.iter().filter(|arr| {
        arr.elem_size == stride
            && arr.elem_count > 0
            && arr.elem_size.saturating_mul(arr.elem_count) <= span
            && !ctx
                .dwarf_array_buffer_decls
                .values()
                .any(|used| used.name == arr.name)
    });
    let first = matches.next()?.clone();
    if matches.next().is_some() {
        return None;
    }
    Some(first)
}

/// Choose the byte length for a stack buffer recovered from a frame-base-relative
/// variable-indexed access at `offset` (element `stride`). The index is not
/// statically bounded, so the buffer must own every byte up to — but not into —
/// the next allocated stack slot above it. Spanning to the next slot is the
/// faithful, clobber-free bound: the original array occupies exactly that gap,
/// and the address-taken reads (`f(&v_N, count)`) operate over the same region.
/// Clamped to a multiple of `stride` so the element count is whole.
fn frame_indexed_buffer_size(offset: i64, stride: u64, ctx: &PrintCtx) -> u64 {
    let next_above = ctx
        .stack_frame_slots
        .range((offset + 1)..)
        .map(|(&start, _)| start)
        .next();
    let span = match next_above {
        Some(next) => (next - offset).max(0) as u64,
        // No slot above (unlikely given the saved-rbp/canary slots); fall back to
        // the existing slot size or a single element.
        None => ctx
            .stack_frame_slots
            .get(&offset)
            .map(|slot| slot.size)
            .unwrap_or(stride),
    };
    if stride == 0 {
        return span;
    }
    // Whole number of elements, at least one.
    (span / stride).max(1) * stride
}

fn promote_stack_buffer(offset: i64, byte_len: u64, ctx: &mut PrintCtx) {
    if byte_len == 0 {
        return;
    }
    let name = debug_stack_lvar_name(ctx, offset)
        .unwrap_or_else(|| fallback_stack_name(offset, byte_len, true));
    let size = byte_len.max(
        ctx.stack_frame_slots
            .get(&offset)
            .map(|slot| slot.size)
            .unwrap_or(0),
    );
    trace_stack_text(format_args!(
        "promote-buffer offset={} requested={} chosen_size={} name={} debug_name={}",
        offset,
        byte_len,
        size,
        name,
        debug_stack_lvar_name(ctx, offset).is_some(),
    ));
    ctx.promoted_stack_buffers.insert(offset, size);
    ctx.has_stack_address_targets = true;
    ctx.stack_frame_slots.insert(
        offset,
        StackSlotName {
            name: name.clone(),
            size,
            is_buffer: true,
        },
    );
    let stk = Varnode::stack(offset as u64, size.min(255) as u8);
    ctx.name_overrides.insert(stk, name);
}

fn synthesize_stack_scalar(offset: i64, size: u8, ctx: &mut PrintCtx) {
    if size == 0 {
        return;
    }
    if ctx.suppressed_stack_offsets.contains(&offset) {
        trace_stack_text(format_args!(
            "synthesize-scalar-skip offset={} size={} reason=suppressed-offset",
            offset, size,
        ));
        return;
    }
    let name = debug_stack_lvar_name(ctx, offset)
        .unwrap_or_else(|| fallback_stack_name(offset, u64::from(size), false));
    trace_stack_text(format_args!(
        "synthesize-scalar offset={} size={} name={} debug_name={}",
        offset,
        size,
        name,
        debug_stack_lvar_name(ctx, offset).is_some(),
    ));
    ctx.synthetic_stack_scalars
        .entry(offset)
        .and_modify(|old| {
            let before = *old;
            *old = (*old).max(size);
            trace_stack_text(format_args!(
                "synthesize-scalar-merge offset={} requested_size={} old_size={} new_size={} name={}",
                offset, size, before, *old, name
            ));
        })
        .or_insert(size);
    match ctx.stack_frame_slots.entry(offset) {
        std::collections::btree_map::Entry::Vacant(entry) => {
            trace_stack_text(format_args!(
                "synthesize-scalar-slot-insert offset={} size={} name={}",
                offset, size, name
            ));
            ctx.has_stack_address_targets = true;
            entry.insert(StackSlotName {
                name: name.clone(),
                size: u64::from(size),
                is_buffer: false,
            });
        }
        std::collections::btree_map::Entry::Occupied(entry) => {
            let existing = entry.get();
            trace_stack_text(format_args!(
                "synthesize-scalar-slot-keep offset={} requested_size={} requested_name={} existing_name={} existing_size={} existing_kind={}",
                offset,
                size,
                name,
                existing.name,
                existing.size,
                if existing.is_buffer {
                    "buffer"
                } else {
                    "scalar"
                },
            ));
        }
    }
    for width in [size, 8, 4, 2, 1] {
        if width == 0 {
            continue;
        }
        let stk = Varnode::stack(offset as u64, width);
        ctx.name_overrides
            .entry(stk)
            .or_insert_with(|| name.clone());
    }
}

fn try_stack_frame_access_name(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    access_size: u8,
    ctx: &PrintCtx,
) -> Option<String> {
    if !ctx.has_stack_address_targets {
        return None;
    }
    let offset = resolve_stack_offset_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0)?;
    let slot = stack_slot_for_offset(offset, access_size, ctx)?;
    let rendered = if slot.is_buffer || slot.delta != 0 {
        let cast = ida_ptr_type(access_size);
        let cast_prim = cast.trim_end_matches(" *");
        let addr = stack_slot_address_expr(&slot);
        format!("*({cast_prim} *){addr}")
    } else {
        slot.name.clone()
    };
    trace_stack_resolution(
        "access",
        stmt_idx,
        addr_raw_idx,
        addr_vn,
        Some(offset),
        Some(access_size),
        Some(&slot),
        Some(rendered.as_str()),
    );
    Some(rendered)
}

fn try_stack_frame_address_expr(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<String> {
    if !may_resolve_stack_offset(addr_vn, addr_raw_idx, stmt_idx, ctx) {
        return None;
    }
    let offset = resolve_stack_offset_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0)?;
    let slot = stack_slot_for_address_offset(offset, ctx)?;
    let rendered = if slot.is_buffer {
        format!("(uintptr_t){}", stack_slot_address_expr(&slot))
    } else if slot.delta == 0 {
        format!("(uintptr_t)&{}", slot.name)
    } else {
        format!("(uintptr_t)((char *)&{} + {})", slot.name, slot.delta)
    };
    trace_stack_resolution(
        "address",
        stmt_idx,
        addr_raw_idx,
        addr_vn,
        Some(offset),
        None,
        Some(&slot),
        Some(rendered.as_str()),
    );
    Some(rendered)
}

fn may_resolve_stack_offset(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if vn.space == SpaceId::Stack || is_x86_frame_base(vn) {
        return true;
    }
    if vn.space == SpaceId::Const {
        return false;
    }
    let Some(sv) = input_or_latest_sv_for_operand(vn, raw_idx, stmt_idx, ctx) else {
        return false;
    };
    let Some(def_stmt) = defining_stmt_for_sv(&sv, ctx) else {
        return false;
    };
    ctx.stmt_insns
        .get(&def_stmt)
        .is_some_and(|def| matches!(def.op, IrOp::Copy | IrOp::IntAdd | IrOp::IntSub))
}

#[derive(Clone, Debug)]
struct StackSlotRef {
    name: String,
    delta: i64,
    is_buffer: bool,
}

fn stack_slot_for_offset(offset: i64, access_size: u8, ctx: &PrintCtx) -> Option<StackSlotRef> {
    let width = i64::from(access_size.max(1));
    let mut scalar_match: Option<StackSlotRef> = None;
    for (&start, slot) in ctx.stack_frame_slots.range(..=offset).rev() {
        let end = start.checked_add(slot.size as i64)?;
        let access_end = offset.checked_add(width)?;
        if offset >= start && access_end <= end {
            let delta = offset - start;
            if slot.is_buffer {
                return Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: true,
                });
            }
            if delta == 0 && scalar_match.is_none() {
                scalar_match = Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: false,
                });
            }
        }
        if start
            .checked_add(slot.size as i64)
            .is_some_and(|end| end <= offset)
        {
            break;
        }
    }
    if scalar_match.is_some() {
        return scalar_match;
    }

    for size in [access_size, 8, 4, 2, 1] {
        if size == 0 {
            continue;
        }
        let stk = Varnode::stack(offset as u64, size);
        if let Some(name) = ctx.name_overrides.get(&stk) {
            return Some(StackSlotRef {
                name: name.clone(),
                delta: 0,
                is_buffer: name.starts_with("buf_"),
            });
        }
    }
    None
}

fn stack_slot_for_address_offset(offset: i64, ctx: &PrintCtx) -> Option<StackSlotRef> {
    let mut scalar_match: Option<StackSlotRef> = None;
    for (&start, slot) in ctx.stack_frame_slots.range(..=offset).rev() {
        let end = start.checked_add(slot.size as i64)?;
        if offset >= start && offset <= end {
            let delta = offset - start;
            if slot.is_buffer {
                return Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: true,
                });
            }
            if delta == 0 && scalar_match.is_none() {
                scalar_match = Some(StackSlotRef {
                    name: slot.name.clone(),
                    delta,
                    is_buffer: false,
                });
            }
        }
        if end < offset {
            break;
        }
    }
    if scalar_match.is_some() {
        return scalar_match;
    }

    for size in [8u8, 4, 2, 1] {
        let stk = Varnode::stack(offset as u64, size);
        if let Some(name) = ctx.name_overrides.get(&stk) {
            return Some(StackSlotRef {
                name: name.clone(),
                delta: 0,
                is_buffer: name.starts_with("buf_"),
            });
        }
    }
    None
}

fn stack_slot_address_expr(slot: &StackSlotRef) -> String {
    if slot.delta == 0 {
        slot.name.clone()
    } else {
        format!("({} + {})", slot.name, slot.delta)
    }
}

fn resolve_stack_offset_for_addr(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> Option<i64> {
    const MAX_DEPTH: u8 = 16;
    if depth > MAX_DEPTH {
        trace_stack_offset_step(
            "depth-limit",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            None,
        );
        return None;
    }
    if vn.space == SpaceId::Stack {
        let offset = vn.offset as i64;
        trace_stack_offset_step(
            "direct-stack",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            Some(offset),
        );
        return Some(offset);
    }
    if is_x86_frame_base(vn) {
        trace_stack_offset_step(
            "frame-base",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            Some(0),
        );
        return Some(0);
    }
    if vn.space == SpaceId::Const {
        trace_stack_offset_step(
            "const-not-stack",
            stmt_idx,
            raw_idx,
            vn,
            depth,
            None,
            None,
            None,
        );
        return None;
    }

    let sv = input_or_latest_sv_for_operand(vn, raw_idx, stmt_idx, ctx)?;
    let def_stmt = defining_stmt_for_sv(&sv, ctx)?;
    let def = ctx.stmt_insns.get(&def_stmt)?;
    trace_stack_offset_step(
        "follow-ssa",
        stmt_idx,
        raw_idx,
        vn,
        depth,
        Some(&sv),
        Some((def_stmt, def.op)),
        None,
    );

    let resolved = match def.op {
        IrOp::Copy if !def.inputs.is_empty() => {
            resolve_stack_offset_for_addr(&def.inputs[0], Some(0), def_stmt, ctx, depth + 1)
        }
        IrOp::IntAdd if def.inputs.len() >= 2 => {
            resolve_stack_offset_add(&def.inputs[0], &def.inputs[1], def_stmt, ctx, depth + 1)
        }
        IrOp::IntSub if def.inputs.len() >= 2 => {
            let base =
                resolve_stack_offset_for_addr(&def.inputs[0], Some(0), def_stmt, ctx, depth + 1)?;
            let rhs = &def.inputs[1];
            if rhs.space == SpaceId::Const {
                Some(base.wrapping_sub(rhs.offset as i64))
            } else {
                None
            }
        }
        _ => None,
    };
    trace_stack_offset_step(
        "resolved-via-def",
        stmt_idx,
        raw_idx,
        vn,
        depth,
        Some(&sv),
        Some((def_stmt, def.op)),
        resolved,
    );
    resolved
}

fn input_or_latest_sv_for_operand(
    vn: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<SsaVarnode> {
    if let Some(raw_idx) = raw_idx
        && let Some(sv) = ctx
            .stmt_input_slot_lookup
            .get(&(stmt_idx, raw_idx))
            .copied()
            .or_else(|| {
                ctx.stmt_input_slots
                    .get(&stmt_idx)
                    .and_then(|inputs| inputs.get(&raw_idx).copied())
            })
    {
        if sv.base != *vn {
            tracing::debug!(target: "unlace::cprinter",
                "operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} annotated={sv:?}; using annotated SSA slot",
            );
        }
        trace_operand_resolution("annotated-slot", stmt_idx, Some(raw_idx), vn, Some(sv), ctx);
        return Some(sv);
    }
    if let Some(sv) = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied())
    {
        trace_operand_resolution("stmt-input", stmt_idx, raw_idx, vn, Some(sv), ctx);
        return Some(sv);
    }
    let latest = ctx
        .stmt_outputs
        .range(..stmt_idx)
        .rev()
        .find_map(|(_, output)| output.filter(|sv| sv.base == *vn));
    trace_operand_resolution("latest-output", stmt_idx, raw_idx, vn, latest, ctx);
    latest
}

fn defining_stmt_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(sv) {
        trace_decision(format_args!(
            "defining-stmt sv={sv:?} source=map stmt={def_stmt} op={:?}",
            ctx.stmt_insns.get(&def_stmt).map(|insn| insn.op)
        ));
        return Some(def_stmt);
    }
    let found = ctx.stmt_outputs.iter().find_map(|(&stmt_idx, output)| {
        output.filter(|output_sv| output_sv == sv).map(|_| stmt_idx)
    });
    trace_decision(format_args!(
        "defining-stmt sv={sv:?} source=fallback-scan stmt={found:?} op={:?}",
        found.and_then(|stmt| ctx.stmt_insns.get(&stmt).map(|insn| insn.op))
    ));
    found
}

fn resolve_stack_offset_add(
    a: &Varnode,
    b: &Varnode,
    stmt_idx: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> Option<i64> {
    if b.space == SpaceId::Const {
        let base = resolve_stack_offset_for_addr(a, Some(0), stmt_idx, ctx, depth)?;
        return Some(base.wrapping_add(b.offset as i64));
    }
    if a.space == SpaceId::Const {
        let base = resolve_stack_offset_for_addr(b, Some(1), stmt_idx, ctx, depth)?;
        return Some(base.wrapping_add(a.offset as i64));
    }
    None
}

fn is_x86_frame_base(vn: &Varnode) -> bool {
    const RSP_REG_OFF: u64 = 32;
    const RBP_REG_OFF: u64 = 40;
    vn.space == SpaceId::Register && vn.size == 8 && matches!(vn.offset, RSP_REG_OFF | RBP_REG_OFF)
}

/// Size-agnostic stack/frame-pointer register check (any access width). The
/// frame pointer can be read at a sub-register width (e.g. MIPS `r29d`, a 4-byte
/// view of `r29`), which `is_subscript_unsafe_frame_base` (8-byte-only) misses.
/// Used by `traces_to_frame_base` for `->`/subscript frame-relative detection.
/// Register offsets: x86 RSP=32/RBP=40, AArch64 FP=232/SP=248 (MIPS `r29`/`r30`
/// alias the same 232/248 slots in this lifter's register file).
fn is_frame_base_reg(vn: &Varnode) -> bool {
    const RSP: u64 = 32;
    const RBP: u64 = 40;
    const FP_29: u64 = 232;
    const SP_31: u64 = 248;
    vn.space == SpaceId::Register && matches!(vn.offset, RSP | RBP | FP_29 | SP_31)
}

/// Arch-aware, size-agnostic frame-base register check. Adds the function's
/// per-arch SP/FP offsets (from `ctx.stack_spec`) to the legacy hard-coded set,
/// ignoring access width (the frame reg may be read as a sub-register, e.g. MIPS
/// `r29d` / RISC-V `spd`). The per-arch offsets are only consulted when the arch
/// is known, so cross-arch offset/argument-register collisions never mis-fire.
fn is_frame_base_reg_ctx(vn: &Varnode, ctx: &PrintCtx) -> bool {
    if is_frame_base_reg(vn) {
        return true;
    }
    if vn.space != SpaceId::Register {
        return false;
    }
    if let Some(spec) = ctx.stack_spec.as_ref() {
        if spec.sp.offset == vn.offset {
            return true;
        }
        if let Some(fp) = spec.fp.as_ref()
            && fp.offset == vn.offset
        {
            return true;
        }
    }
    false
}

fn is_x86_frame_base_update(insn: &IrInsn, output: &Varnode) -> bool {
    const RSP_REG_OFF: u64 = 32;
    is_x86_frame_base(output)
        && matches!(insn.op, IrOp::Copy | IrOp::IntAdd | IrOp::IntSub)
        && (output.offset == RSP_REG_OFF || insn.inputs.iter().any(is_x86_frame_base))
}

fn is_transient_x86_frame_base_update(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if !matches!(insn.op, IrOp::Copy | IrOp::IntAdd | IrOp::IntSub)
        || !insn.inputs.iter().any(is_x86_frame_base)
    {
        return false;
    }
    let Some(Some(output_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    if output_sv.base.space != SpaceId::Unique {
        return false;
    }
    if ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0) != 1 {
        return false;
    }

    ctx.stmt_inputs.iter().any(|(&use_stmt, inputs)| {
        use_stmt > stmt_idx
            && inputs.contains(&output_sv)
            && ctx.stmt_insns.get(&use_stmt).is_some_and(|use_insn| {
                use_insn.op == IrOp::Copy
                    && use_insn
                        .output
                        .is_some_and(|output| is_x86_frame_base(&output))
            })
    })
}

fn emit_memory_address_operand(
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    trace_full(format_args!(
        "memory-addr-enter stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?}"
    ));
    if let Some(addr) = try_stack_frame_address_expr(vn, Some(raw_idx), stmt_idx, ctx) {
        trace_full(format_args!(
            "memory-addr-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} source=stack-frame rendered={addr:?}"
        ));
        return addr;
    }
    let rendered = emit_operand_resolved(vn, raw_idx, stmt_idx, ctx);
    if vn.space != SpaceId::Const
        && is_zero_address_literal(&rendered)
        && let Some(sv) = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied())
    {
        let name = ctx.name_of(&sv);
        trace_full(format_args!(
            "memory-addr-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} source=zero-address-name sv={sv:?} rendered={name:?}"
        ));
        return name;
    }
    trace_full(format_args!(
        "memory-addr-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} source=operand rendered={rendered:?}"
    ));
    rendered
}

fn is_zero_address_literal(rendered: &str) -> bool {
    matches!(rendered, "0" | "0LL" | "nullptr")
}

fn is_suppressed_stack_access(
    addr_vn: &Varnode,
    addr_raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    resolve_stack_offset_for_addr(addr_vn, addr_raw_idx, stmt_idx, ctx, 0)
        .is_some_and(|offset| ctx.suppressed_stack_offsets.contains(&offset))
}

/// t232: emit `__intN v_<offset>;` (or `char buf_<offset>[N];`) declarations
/// for each [`StackLocal`] in the recovered frame. Called from
/// [`print_c_with_rtti_config`] at the start of the local-decl block.
/// Returns the set of names emitted so the caller can suppress duplicate
/// declarations from the generic `var_names` loop.
///
/// Locals are emitted in ascending offset order (BTreeMap iteration).
fn emit_stack_frame_decls(
    func: &HirFunction,
    ctx: &PrintCtx,
    out: &mut String,
) -> std::collections::BTreeSet<String> {
    use unlace_ir::ssa::FrameSlotKind;
    let mut emitted = std::collections::BTreeSet::new();
    for (&offset, &size) in &ctx.promoted_stack_buffers {
        if !stack_frame_offset_is_visible_local(func, offset) {
            trace_stack_text(format_args!(
                "emit-promoted-buffer-skip offset={} size={} reason=not-visible-local frame_kind={:?}",
                offset,
                size,
                stack_frame_slot_kind(func, offset),
            ));
            continue;
        }
        // A frame-base-relative indexed buffer recovered onto a DWARF array local
        // renders as the real `int buf[16];` declaration: faithful to source and
        // name-matched to the expected type fact (the redundant `// DWARF locals`
        // comment is suppressed in `emit_dwarf_local_summary`).
        if let Some(arr) = ctx.dwarf_array_buffer_decls.get(&offset) {
            trace_stack_text(format_args!(
                "emit-promoted-dwarf-array-decl offset={} name={} elem={} count={}",
                offset, arr.name, arr.elem_c_type, arr.elem_count
            ));
            let _ = writeln!(
                out,
                "    {} {}[{}];",
                arr.elem_c_type, arr.name, arr.elem_count
            );
            emitted.insert(arr.name.clone());
            continue;
        }
        let name = debug_stack_lvar_name(ctx, offset)
            .unwrap_or_else(|| fallback_stack_name(offset, size, true));
        trace_stack_text(format_args!(
            "emit-promoted-buffer-decl offset={} size={} name={}",
            offset, size, name
        ));
        let source_comment = aggregate_source_decl_comment(ctx.stack_lvars.get(&offset));
        let _ = writeln!(out, "    char {}[{}];{}", name, size, source_comment);
        emitted.insert(name);
    }
    for (&offset, &size) in &ctx.synthetic_stack_scalars {
        let name = debug_stack_lvar_name(ctx, offset)
            .unwrap_or_else(|| fallback_stack_name(offset, u64::from(size), false));
        if !stack_frame_offset_is_visible_local(func, offset) {
            trace_stack_text(format_args!(
                "emit-synthetic-scalar-skip offset={} size={} name={} reason=not-visible-local frame_kind={:?}",
                offset,
                size,
                name,
                stack_frame_slot_kind(func, offset),
            ));
            continue;
        }
        if ctx.suppressed_stack_offsets.contains(&offset) {
            trace_stack_text(format_args!(
                "emit-synthetic-scalar-skip offset={} size={} name={} reason=suppressed-offset",
                offset, size, name
            ));
            continue;
        }
        if emitted.contains(&name) {
            trace_stack_text(format_args!(
                "emit-synthetic-scalar-skip offset={} size={} name={} reason=already-emitted",
                offset, size, name
            ));
            continue;
        }
        let ty = ctx
            .stack_lvars
            .get(&offset)
            .and_then(|ann| ann.c_type.as_deref())
            .unwrap_or_else(|| scalar_stack_type(u64::from(size)));
        trace_stack_text(format_args!(
            "emit-synthetic-scalar-decl offset={} size={} name={} ty={}",
            offset, size, name, ty
        ));
        let _ = writeln!(out, "    {} {};", ty, name);
        emitted.insert(name);
    }
    let frame = match func.stack_frame.as_ref() {
        Some(f) => f,
        None => {
            trace_stack_text(format_args!(
                "emit-frame-decls-skip reason=no-stack-frame emitted={:?}",
                emitted
            ));
            return emitted;
        }
    };
    let absorbed_offsets = absorbed_stack_offsets_by_buffers(func, ctx);
    for local in frame.locals.values() {
        // Suppress saved-register slots, return-address slots, and stack
        // arguments — only emit user-visible local variables.
        if !matches!(local.kind, FrameSlotKind::Local) {
            trace_stack_text(format_args!(
                "emit-frame-slot-skip offset={} size={} kind={:?} reason=not-user-local",
                local.offset, local.size, local.kind
            ));
            continue;
        }
        if absorbed_offsets.contains(&local.offset) {
            trace_stack_text(format_args!(
                "emit-frame-slot-skip offset={} size={} reason=absorbed-by-buffer",
                local.offset, local.size
            ));
            continue;
        }
        // t233: append `/* BYREF */` to slots whose address escapes.
        let byref_marker = if func.byref_locals.contains(&local.offset) {
            " /* BYREF */"
        } else {
            ""
        };
        let ann = ctx.stack_lvars.get(&local.offset);
        let mut size = ann
            .map(|ann| ann.size.max(local.size))
            .unwrap_or(local.size);
        let is_buffer = ann.is_some_and(|ann| ann.is_buffer) || size > 8;
        if is_buffer {
            size = effective_stack_buffer_size(func, local.offset, size, ctx);
        }
        let mut name = ann
            .and_then(|ann| (!ann.name.is_empty()).then(|| ann.name.clone()))
            .unwrap_or_else(|| fallback_stack_name(local.offset, size, is_buffer));
        if is_buffer && ann.is_none_or(|ann| !ann.from_debug) {
            name = canonical_stack_buffer_name(func, &name);
        }
        if is_buffer {
            if emitted.contains(&name) {
                trace_stack_text(format_args!(
                    "emit-frame-buffer-skip offset={} raw_size={} chosen_size={} name={} reason=already-emitted",
                    local.offset, local.size, size, name
                ));
                continue;
            }
            if ann.is_none_or(|ann| ann.c_type.is_none())
                && let Some((elem_ty, elem_count)) =
                    inferred_stack_buffer_array_decl(local.offset, size, ctx)
            {
                trace_stack_text(format_args!(
                    "emit-frame-typed-buffer-decl offset={} raw_size={} chosen_size={} name={} elem_ty={} elem_count={} byref={} ann_present={}",
                    local.offset,
                    local.size,
                    size,
                    name,
                    elem_ty,
                    elem_count,
                    !byref_marker.is_empty(),
                    ann.is_some(),
                ));
                let _ = writeln!(
                    out,
                    "    char {}[{}]{}; // {} {}[{}]",
                    name, size, byref_marker, elem_ty, name, elem_count
                );
                emitted.insert(name);
                continue;
            }
            trace_stack_text(format_args!(
                "emit-frame-buffer-decl offset={} raw_size={} chosen_size={} name={} byref={} ann_present={}",
                local.offset,
                local.size,
                size,
                name,
                !byref_marker.is_empty(),
                ann.is_some(),
            ));
            let source_comment = aggregate_source_decl_comment(ann);
            let _ = writeln!(
                out,
                "    char {}[{}]{};{}",
                name, size, byref_marker, source_comment
            );
            emitted.insert(name);
        } else {
            let ty = ann
                .and_then(|ann| ann.c_type.as_deref())
                .unwrap_or_else(|| scalar_stack_type(size));
            if emitted.contains(&name) {
                trace_stack_text(format_args!(
                    "emit-frame-scalar-skip offset={} raw_size={} chosen_size={} name={} ty={} reason=already-emitted",
                    local.offset, local.size, size, name, ty
                ));
                continue;
            }
            trace_stack_text(format_args!(
                "emit-frame-scalar-decl offset={} raw_size={} chosen_size={} name={} ty={} byref={} ann_present={} ann_from_debug={}",
                local.offset,
                local.size,
                size,
                name,
                ty,
                !byref_marker.is_empty(),
                ann.is_some(),
                ann.is_some_and(|ann| ann.from_debug),
            ));
            let _ = writeln!(out, "    {} {}{};", ty, name, byref_marker);
            emitted.insert(name);
        }
    }
    emitted
}

fn aggregate_source_decl_comment(ann: Option<&StackLvarAnnotation>) -> String {
    let Some(ann) = ann else {
        return String::new();
    };
    if !ann.from_debug || ann.raw_span.is_none() || ann.name.is_empty() {
        return String::new();
    }
    let Some(source_byte_size) = ann.source_byte_size else {
        return String::new();
    };
    let Some(c_type) = ann
        .c_type
        .as_deref()
        .map(str::trim)
        .filter(|ty| !ty.is_empty())
    else {
        return String::new();
    };
    let source_decl = dwarf_decl_to_c(c_type, &ann.name);
    format!(" // source: {source_decl} ({source_byte_size} bytes)")
}

fn scalar_stack_type(size: u64) -> &'static str {
    match size {
        1 => "char",
        2 => "__int16",
        4 => "int",
        8 => "__int64",
        _ => "int",
    }
}

fn stack_frame_offset_is_visible_local(func: &HirFunction, offset: i64) -> bool {
    use unlace_ir::ssa::FrameSlotKind;

    func.stack_frame
        .as_ref()
        .and_then(|frame| frame.locals.get(&offset))
        .is_none_or(|local| matches!(local.kind, FrameSlotKind::Local))
}

fn stack_frame_slot_kind(func: &HirFunction, offset: i64) -> Option<unlace_ir::ssa::FrameSlotKind> {
    func.stack_frame
        .as_ref()
        .and_then(|frame| frame.locals.get(&offset))
        .map(|local| local.kind)
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
    let mut return_svs: BTreeSet<SsaVarnode> = BTreeSet::new();

    walk_collect_roles(nodes, ctx, &mut roles);
    collect_return_svs(nodes, ctx, &mut return_svs);
    collect_statement_level_roles(ctx, &mut roles);

    for sv in return_svs {
        apply_ssa_override(ctx, &sv, "result".to_string());
    }

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

fn dedupe_var_names(ctx: &mut PrintCtx) {
    let mut used: BTreeMap<String, (SsaVarnode, PrimitiveType)> = BTreeMap::new();
    let mut allocated: BTreeSet<String> = ctx.var_names.values().cloned().collect();
    let entries: Vec<(SsaVarnode, String)> = ctx
        .var_names
        .iter()
        .map(|(sv, name)| (*sv, name.clone()))
        .collect();

    for (sv, name) in entries {
        if let Some((owner_sv, _owner_ty)) = used.get(&name).copied() {
            if let Some(reason) = var_names_can_share_name(ctx, owner_sv, sv) {
                trace_dedupe_var_name(&name, owner_sv, sv, reason, None);
                continue;
            }
            let mut suffix = 1u32;
            let unique = loop {
                let candidate = format!("{name}_{suffix}");
                suffix += 1;
                if allocated.insert(candidate.clone()) {
                    break candidate;
                }
            };
            trace_dedupe_var_name(&name, owner_sv, sv, "rename-collision", Some(&unique));
            ctx.var_names.insert(sv, unique);
        } else {
            let ty = ctx
                .var_types
                .get(&sv)
                .copied()
                .unwrap_or(PrimitiveType::Unknown);
            used.insert(name, (sv, ty));
        }
    }
}

fn var_names_can_share_name(
    ctx: &PrintCtx,
    owner_sv: SsaVarnode,
    sv: SsaVarnode,
) -> Option<&'static str> {
    if owner_sv.base == sv.base {
        return Some("same-base");
    }
    if ctx.merged_names.get(&owner_sv) == ctx.merged_names.get(&sv)
        && ctx.merged_names.contains_key(&sv)
    {
        return Some("same-merged-name");
    }
    if aliases(owner_sv.base, sv.base) {
        if ctx.name_overrides.get(&owner_sv.base) == ctx.name_overrides.get(&sv.base)
            && ctx.name_overrides.contains_key(&sv.base)
        {
            return Some("same-alias-override");
        }
        if ctx.var_role_names.get(&owner_sv) == ctx.var_role_names.get(&sv)
            && ctx.var_role_names.contains_key(&sv)
        {
            return Some("same-alias-role");
        }
        if ctx.merged_names.get(&owner_sv) == ctx.merged_names.get(&sv)
            && ctx.merged_names.contains_key(&sv)
        {
            return Some("same-alias-merged");
        }
    }
    None
}

fn trace_dedupe_var_name(
    name: &str,
    owner_sv: SsaVarnode,
    sv: SsaVarnode,
    decision: &str,
    replacement: Option<&str>,
) {
    if !c_printer_name_trace_enabled() {
        return;
    }
    tracing::debug!(target: "unlace::cprinter::name",
        "dedupe name={name} decision={decision} owner={owner_sv:?} candidate={sv:?} replacement={}",
        replacement.unwrap_or("<shared>")
    );
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
        trace_name_text(format_args!(
            "override-skip base={base:?} requested={name} existing={:?} reason=existing-non-synthetic",
            ctx.base_names.get(base)
        ));
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
    trace_name_text(format_args!(
        "override-apply base={base:?} name={name} update_svs={to_update:?}"
    ));
    for sv in to_update {
        ctx.var_names.insert(sv, name.clone());
    }
}

fn apply_ssa_override(ctx: &mut PrintCtx, sv: &SsaVarnode, name: String) {
    if !is_synthetic_vn_name(ctx.var_names.get(sv).map(String::as_str)) {
        trace_name_text(format_args!(
            "ssa-override-skip sv={sv:?} requested={name} existing={:?} reason=existing-non-synthetic",
            ctx.var_names.get(sv)
        ));
        return;
    }
    trace_name_text(format_args!(
        "ssa-override-apply sv={sv:?} name={name} previous={:?}",
        ctx.var_names.get(sv)
    ));
    ctx.var_names.insert(*sv, name);
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
// Keep the readable `match { Variant => if cond { ... } }` shape rather than
// collapsing into match guards.
#[allow(clippy::collapsible_match, clippy::collapsible_if)]
fn walk_collect_roles(nodes: &[HirNode], ctx: &PrintCtx, roles: &mut BTreeMap<Varnode, VarRole>) {
    for node in nodes {
        match node {
            HirNode::Block(children) => walk_collect_roles(children, ctx, roles),
            HirNode::Return(Some(_)) | HirNode::Return(None) => {}
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

fn collect_return_svs(nodes: &[HirNode], ctx: &PrintCtx, return_svs: &mut BTreeSet<SsaVarnode>) {
    for node in nodes {
        match node {
            HirNode::Block(children) => collect_return_svs(children, ctx, return_svs),
            HirNode::Return(Some(sv)) => {
                if !ctx.parent_returns_void && sv.base.space != SpaceId::Const {
                    return_svs.insert(*sv);
                }
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            }
            | HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                collect_return_svs(then_body, ctx, return_svs);
                if let Some(eb) = else_body {
                    collect_return_svs(eb, ctx, return_svs);
                }
            }
            HirNode::While { body, .. }
            | HirNode::DoWhile { body, .. }
            | HirNode::For { body, .. } => collect_return_svs(body, ctx, return_svs),
            HirNode::Switch { cases, default, .. } => {
                for (_case, body, _) in cases {
                    collect_return_svs(body, ctx, return_svs);
                }
                if let Some(d) = default {
                    collect_return_svs(d, ctx, return_svs);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_return_svs(try_body, ctx, return_svs);
                for (_ty, body) in catch_arms {
                    collect_return_svs(body, ctx, return_svs);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_return_svs(try_body, ctx, return_svs);
                collect_return_svs(finally_body, ctx, return_svs);
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_return_svs(then_body, ctx, return_svs);
                collect_return_svs(else_body, ctx, return_svs);
            }
            HirNode::Commented { inner, .. } => {
                collect_return_svs(std::slice::from_ref(inner), ctx, return_svs);
            }
            HirNode::Statement(_)
            | HirNode::Return(None)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::Ternary { .. }
            | HirNode::TailCall { .. }
            | HirNode::Break
            | HirNode::Continue
            | HirNode::ObjcBlock { .. }
            | HirNode::GuardedTernary { .. }
            | HirNode::CselTernary { .. }
            | HirNode::Asm { .. } => {}
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

        if insn.op.type_family() == Some('b')
            && let Some(out) = insn.output
        {
            record_role(roles, out, VarRole::Cond);
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

fn render_type_decl_as_c(ty: &Type, name: &str) -> String {
    match ty {
        Type::Primitive(p) => format!("{} {name}", c_type(p)),
        Type::Named(type_name) => format!("{type_name} {name}"),
        Type::Struct {
            name: ty_name,
            fields,
        } if ty_name.is_empty() => {
            format!(
                "struct {{ {} }} {name}",
                render_inline_aggregate_fields(fields)
            )
        }
        Type::Struct { name: ty_name, .. } => format!("struct {ty_name} {name}"),
        Type::Union {
            name: ty_name,
            fields,
        } if ty_name.is_empty() => {
            format!(
                "union {{ {} }} {name}",
                render_inline_aggregate_fields(fields)
            )
        }
        Type::Union { name: ty_name, .. } => format!("union {ty_name} {name}"),
        Type::Ptr(inner) => match inner.as_ref() {
            Type::Array { .. } | Type::FuncPtr { .. } => {
                render_type_decl_as_c(inner, &format!("(*{name})"))
            }
            _ => render_type_decl_as_c(inner, &format!("*{name}")),
        },
        Type::Array { element, size } => {
            let suffix = size.map_or_else(String::new, |n| n.to_string());
            render_type_decl_as_c(element, &format!("{name}[{suffix}]"))
        }
        Type::FuncPtr {
            params,
            return_type,
            variadic,
        } => {
            let params = render_function_pointer_params(params, *variadic);
            render_type_decl_as_c(return_type, &format!("(*{name})({params})"))
        }
        Type::Bitfield {
            underlying, width, ..
        } => format!("{} : {width}", render_type_decl_as_c(underlying, name)),
        Type::Interface { .. } => format!("void * {name}"),
        Type::Slice { elem } => format!("/* []{} */ void * {name}", render_type_as_c(elem)),
        Type::Map { key, value } => format!(
            "/* map[{}]{} */ void * {name}",
            render_type_as_c(key),
            render_type_as_c(value)
        ),
        Type::TypeParam { name: ty_name, .. } => format!("void * {name} /* {ty_name} */"),
    }
}

fn render_inline_aggregate_fields(fields: &[unlace_ir::types::StructFieldType]) -> String {
    fields
        .iter()
        .map(|field| {
            let field_name = if field.name.is_empty() {
                format!("field_{}", field.offset)
            } else {
                crate::demangle::sanitize_for_c(&field.name)
            };
            format!("{};", render_type_decl_as_c(&field.ty, &field_name))
        })
        .collect::<Vec<_>>()
        .join(" ")
}

fn render_function_pointer_param(ty: &Type) -> String {
    render_type_decl_as_c(ty, "").trim_end().to_string()
}

fn render_function_pointer_params(params: &[Type], variadic: bool) -> String {
    let mut rendered: Vec<String> = params.iter().map(render_function_pointer_param).collect();
    if variadic {
        rendered.push("...".to_string());
    }
    if rendered.is_empty() {
        "void".to_string()
    } else {
        rendered.join(", ")
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

struct CatchObjectBinding {
    name: String,
    skip_leading_stmt: bool,
}

fn catch_object_binding(body: &[HirNode], ctx: &mut PrintCtx) -> Option<CatchObjectBinding> {
    let HirNode::Statement(insn) = body.first()? else {
        return None;
    };
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return None;
    }
    let action = cxx_eh_action_for_call(insn, ctx)?;
    if !matches!(
        action,
        unlace_passes::cxx_eh::CxxEhAction::BeginCatch
            | unlace_passes::cxx_eh::CxxEhAction::GetExceptionPtr
    ) {
        return None;
    }
    let sv = ctx.stmt_outputs.get(&ctx.emit_stmt).copied().flatten()?;
    let name = ctx.name_of(&sv);
    Some(CatchObjectBinding {
        name,
        skip_leading_stmt: true,
    })
}

fn emit_catch_body(
    body: &[HirNode],
    binding: Option<&CatchObjectBinding>,
    depth: usize,
    ctx: &mut PrintCtx,
    out: &mut String,
) {
    if binding.is_some_and(|b| b.skip_leading_stmt) && !body.is_empty() {
        ctx.emit_stmt += 1;
        emit_nodes(&body[1..], depth, ctx, out);
    } else {
        emit_nodes(body, depth, ctx, out);
    }
}

fn c_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "int",
        PrimitiveType::Bool => "_BOOL",
        PrimitiveType::Int(w) => match w {
            1 => "char",
            2 => "__int16",
            4 => "int",
            8 => "__int64",
            16 => "__int128",
            _ => "int",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "_BYTE",
            2 => "_WORD",
            4 => "_DWORD",
            8 => "_QWORD",
            16 => "_OWORD",
            _ => "_DWORD",
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

fn prefer_decl_type(existing: PrimitiveType, candidate: PrimitiveType) -> PrimitiveType {
    use PrimitiveType::*;
    match (existing, candidate) {
        (Ptr, _) | (_, Ptr) => Ptr,
        (Double, _) | (_, Double) => Double,
        (Float, _) | (_, Float) => Float,
        (UnsignedInt(a), UnsignedInt(b)) => UnsignedInt(a.max(b)),
        (Int(a), Int(b)) => Int(a.max(b)),
        (UnsignedInt(a), Int(b)) | (Int(b), UnsignedInt(a)) => {
            if a >= b {
                UnsignedInt(a)
            } else {
                Int(b)
            }
        }
        (Unknown, other) => other,
        (other, Unknown) => other,
        (Bool, other) => other,
        (other, Bool) => other,
    }
}

#[allow(dead_code)]
fn c_return_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "void",
        other => c_type(other),
    }
}

/// `true` when `name` matches one of the printer's generic allocator
/// patterns (`vN` or coalesced-register `cN`) and therefore carries no
/// semantic content. Used by the name-lookup chain (t227) to decide
/// whether a [`PrintCtx::merged_names`] entry should be preferred over
/// a role-based suggestion: a "meaningful" merger entry (DWARF-derived
/// or otherwise non-generic) always wins, but a generic `v3`/`c0`
/// should yield to a role-based `i` / `this` / `buf` / `len`.
fn is_default_v_name(name: &str) -> bool {
    let Some(rest) = name.strip_prefix('v') else {
        return false;
    };
    is_v_number_suffix(rest)
}

fn is_generic_lvar_name(name: &str) -> bool {
    is_default_v_name(name)
        || name.strip_prefix('c').is_some_and(is_v_number_suffix)
        || is_arg_number_name(name)
        || is_arg_versioned_name(name)
}

/// IDA-style signature type rendering for a [`unlace_ir::types::Type`].
///
/// Wraps the primitive-only [`c_sig_type`] helper: primitives go through
/// the legacy `__intN`/`unsigned …` cascade so `int8`/`int16` parameters
/// render exactly the way the caller-side prototype consumer expects;
/// composite types (`Ptr` / `Struct` / `Array` / …) fall back to the
/// general [`render_type_as_c`] so a `T *` param survives intact when
/// the finalized signature widens a pointer-typed param into a typed
/// pointer.
fn c_sig_type_for_type(ty: &Type) -> String {
    match ty {
        Type::Primitive(p) => c_sig_type(p).to_string(),
        other => render_type_as_c(other),
    }
}

/// IDA-style return-type rendering for a [`unlace_ir::types::Type`].
///
/// Primitives are routed through [`c_sig_return_type`] so
/// `PrimitiveType::Unknown` still renders as `void` (matching the
/// printer's legacy treatment of "no inferred return"); concrete
/// types go through the general [`render_type_as_c`] path so
/// `int *` / struct returns survive unmolested.
fn c_sig_return_type_for_type(ty: &Type) -> String {
    match ty {
        Type::Primitive(p) => c_sig_return_type(p).to_string(),
        other => render_type_as_c(other),
    }
}

/// IDA-style type names for function signature parameters.
fn c_sig_type(ty: &PrimitiveType) -> &'static str {
    match ty {
        PrimitiveType::Unknown => "__int64",
        PrimitiveType::Bool => "_BOOL",
        PrimitiveType::Int(w) => match w {
            1 => "char",
            2 => "__int16",
            4 => "int",
            8 => "__int64",
            _ => "__int64",
        },
        PrimitiveType::UnsignedInt(w) => match w {
            1 => "_BYTE",
            2 => "_WORD",
            4 => "_DWORD",
            8 => "_QWORD",
            _ => "_QWORD",
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
    let (base_type, _) = split_dwarf_array_suffix(dwarf_type);
    let mut normalized = dwarf_type
        .get(..base_type)
        .unwrap_or(dwarf_type)
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
        "" => "__int64",
        "void" => "void",
        "_Bool" | "bool" => "_BOOL",
        "char" | "signed char" => "char",
        "unsigned char" => "_BYTE",
        "short" | "short int" | "signed short" | "signed short int" => "__int16",
        "unsigned short" | "unsigned short int" => "_WORD",
        "int" | "signed int" => "int",
        "unsigned int" | "unsigned" => "_DWORD",
        "long" | "long int" | "signed long" | "signed long int" => "__int64",
        "unsigned long" | "unsigned long int" | "long unsigned int" => "_QWORD",
        "long long" | "long long int" | "signed long long" | "signed long long int" => "__int64",
        "unsigned long long" | "unsigned long long int" | "long long unsigned int" => "_QWORD",
        other => other,
    };
    if ptr_depth == 0 {
        base.to_string()
    } else {
        format!("{} {}", base, "*".repeat(ptr_depth))
    }
}

fn dwarf_decl_to_c(dwarf_type: &str, name: &str) -> String {
    let (base_end, suffix) = split_dwarf_array_suffix(dwarf_type);
    let base = dwarf_type.get(..base_end).unwrap_or(dwarf_type).trim();
    let ty = dwarf_type_to_c(base);
    // IDA style binds the declarator star to the name: `Rect *r`.
    let sep = if ty.ends_with('*') { "" } else { " " };
    format!("{ty}{sep}{name}{suffix}")
}

fn cpp_demangled_param_decl(
    param_types: Option<&[String]>,
    idx: usize,
    name: &str,
) -> Option<String> {
    let ty = param_types?.get(idx)?.trim();
    if ty.is_empty() || ty == "void" {
        return None;
    }
    let normalized = normalize_cpp_demangled_type(ty);
    Some(dwarf_decl_to_c(&normalized, name))
}

fn normalize_cpp_demangled_type(ty: &str) -> String {
    let mut normalized = ty
        .trim()
        .replace(" const", "")
        .replace(" volatile", "")
        .replace(" restrict", "")
        .replace('&', "*");
    normalized = normalized.split_whitespace().collect::<Vec<_>>().join(" ");
    normalized
}

/// Parse a DWARF aggregate array local (`name`, `type_name` like `int32_t[16]`)
/// into a [`DwarfArrayLocal`]. Returns `None` for non-array or multi-dimensional
/// types (only single-dimension element arrays with a known element size are
/// materialized; everything else keeps its existing rendering).
fn parse_dwarf_array_local(name: &str, type_name: &str) -> Option<DwarfArrayLocal> {
    let (base_end, suffix) = split_dwarf_array_suffix(type_name);
    if suffix.is_empty() {
        return None;
    }
    // Exactly one `[N]` dimension with a numeric extent.
    let inner = suffix.strip_prefix('[')?.strip_suffix(']')?;
    if inner.contains('[') || inner.contains(']') {
        return None;
    }
    let elem_count: u64 = inner.trim().parse().ok()?;
    if elem_count == 0 {
        return None;
    }
    let base = type_name.get(..base_end).unwrap_or(type_name).trim();
    if base.contains('*') {
        // Pointer-element arrays render fine as raw derefs; skip.
        return None;
    }
    let elem_c_type = dwarf_type_to_c(base);
    let elem_size = c_primitive_type_size(&elem_c_type)?;
    Some(DwarfArrayLocal {
        name: name.to_string(),
        elem_c_type,
        elem_size,
        elem_count,
    })
}

/// Byte size of a scalar C primitive type spelling, for sizing recovered arrays.
/// Returns `None` for non-scalar / unknown spellings (pointers, composites).
/// Accepts both IDA spellings (`__int16`, `_DWORD`) and stdint typedefs
/// (`int32_t`) — DWARF surfaces the latter.
fn c_primitive_type_size(c_type: &str) -> Option<u64> {
    match c_type.trim() {
        "char" | "_BYTE" | "_BOOL" | "signed char" | "unsigned char" | "bool" | "int8_t"
        | "uint8_t" => Some(1),
        "__int16" | "_WORD" | "short" | "unsigned short" | "int16_t" | "uint16_t" => Some(2),
        "int" | "unsigned int" | "_DWORD" | "float" | "int32_t" | "uint32_t" => Some(4),
        "__int64" | "_QWORD" | "long" | "unsigned long" | "long long" | "unsigned long long"
        | "double" | "size_t" | "int64_t" | "uint64_t" => Some(8),
        _ => None,
    }
}

fn split_dwarf_array_suffix(dwarf_type: &str) -> (usize, String) {
    let trimmed_end = dwarf_type.trim_end().len();
    let mut end = trimmed_end;
    let mut suffixes = Vec::new();

    loop {
        let head = &dwarf_type[..end];
        let Some(close_rel) = head.rfind(']') else {
            break;
        };
        if close_rel + 1 != end {
            break;
        }
        let Some(open_rel) = head[..close_rel].rfind('[') else {
            break;
        };
        suffixes.push(dwarf_type[open_rel..=close_rel].to_string());
        end = dwarf_type[..open_rel].trim_end().len();
    }

    suffixes.reverse();
    (end, suffixes.join(""))
}

// ---------------------------------------------------------------------------
// Node emission
// ---------------------------------------------------------------------------

/// `true` if the last node in `body` already transfers control out of the
/// enclosing block (return / unconditional goto / break / continue / tail
/// call / `__noreturn`-style raw RETURN statement). Used by the switch
/// emit path to suppress redundant trailing `break;` markers — emitting
/// `return X; break;` is both ugly and triggers a "statement after return
/// is unreachable" diagnostic on many C compilers.
///
/// Conservative: returns `false` when `body` is empty, or when the last
/// node is anything we don't recognise as a terminator. The cost of a
/// false negative is a redundant `break;`; the cost of a false positive
/// is a switch case that falls through unintentionally. We prefer the
/// former.
fn body_ends_with_terminator(body: &[HirNode]) -> bool {
    let Some(last) = body.last() else {
        return false;
    };
    match last {
        HirNode::Block(inner) => body_ends_with_terminator(inner),
        HirNode::Commented { inner, .. } => {
            body_ends_with_terminator(std::slice::from_ref(inner.as_ref()))
        }
        node => node_is_terminal_for_emission(node),
    }
}

fn node_is_terminal_for_emission(node: &HirNode) -> bool {
    match node {
        HirNode::Return(_)
        | HirNode::Goto(_)
        | HirNode::Break
        | HirNode::Continue
        | HirNode::TailCall { .. } => true,
        HirNode::Statement(insn) => matches!(insn.op, IrOp::Return | IrOp::Branchind),
        HirNode::Block(inner) => body_ends_with_terminator(inner),
        HirNode::Commented { inner, .. } => {
            body_ends_with_terminator(std::slice::from_ref(inner.as_ref()))
        }
        _ => false,
    }
}

fn emit_nodes(nodes: &[HirNode], depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let _span = cprinter_detail_phase("cprinter.emit.nodes");
    if linkscope::trace_detail_enabled() {
        linkscope::record_items("cprinter.emit.nodes", nodes.len() as u64);
    }
    let mut i = 0;
    let mut last_dowhile_stmt_range: Option<(u32, u32)> = None;
    while i < nodes.len() {
        trace_flow(format_args!(
            "node-enter depth={depth} idx={i} stmt={} kind={}",
            ctx.emit_stmt,
            hir_node_trace_kind(&nodes[i])
        ));
        if let HirNode::Return(Some(sv)) = &nodes[i]
            && !ctx.parent_returns_void
            && let Some((start, end)) = last_dowhile_stmt_range
            && let Some(expr) = resolve_post_dowhile_return_expr(sv, start, end, ctx)
        {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", canonicalize_return_expr(expr));
            if !has_later_sibling_label(nodes, i + 1) {
                break;
            }
            i += 1;
            last_dowhile_stmt_range = None;
            continue;
        }
        if let Some(merged) = try_merge_assign_return(&nodes[i..], ctx) {
            trace_flow(format_args!(
                "merge-assign-return depth={depth} idx={i} stmt={} expr={}",
                ctx.emit_stmt, merged
            ));
            ctx.emit_stmt += 1;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", canonicalize_return_expr(merged));
            i += 2;
            last_dowhile_stmt_range = None;
            continue;
        }
        if let Some(merged) = try_merge_call_return(&nodes[i..], ctx) {
            trace_flow(format_args!(
                "merge-call-return depth={depth} idx={i} stmt={} stmt_count={} expr={}",
                ctx.emit_stmt, merged.stmt_count, merged.expr
            ));
            ctx.emit_stmt += merged.stmt_count;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "return {};", canonicalize_return_expr(merged.expr));
            i += merged.node_count;
            last_dowhile_stmt_range = None;
            continue;
        }
        let before_inline_stmt = ctx.emit_stmt;
        if let Some(first) = inline_node_text(&nodes[i], ctx) {
            let mut parts = Vec::new();
            let first_is_terminal = node_is_terminal_for_emission(&nodes[i]);
            let mut group_has_terminal = first_is_terminal;
            if !first.is_empty() {
                parts.push(first);
            }
            trace_flow(format_args!(
                "inline-start depth={depth} idx={i} stmt_before={before_inline_stmt} stmt_after={} kind={} text={:?}",
                ctx.emit_stmt,
                hir_node_trace_kind(&nodes[i]),
                parts.last()
            ));
            i += 1;
            while !first_is_terminal && i < nodes.len() && parts.len() < 3 {
                if let Some(merged) = try_merge_assign_return(&nodes[i..], ctx) {
                    trace_flow(format_args!(
                        "inline-merge-assign-return depth={depth} idx={i} stmt={} expr={}",
                        ctx.emit_stmt, merged
                    ));
                    ctx.emit_stmt += 1;
                    parts.push(format!("return {};", canonicalize_return_expr(merged)));
                    i += 2;
                    group_has_terminal = true;
                    break;
                }
                if let Some(merged) = try_merge_call_return(&nodes[i..], ctx) {
                    trace_flow(format_args!(
                        "inline-merge-call-return depth={depth} idx={i} stmt={} stmt_count={} expr={}",
                        ctx.emit_stmt, merged.stmt_count, merged.expr
                    ));
                    ctx.emit_stmt += merged.stmt_count;
                    parts.push(format!("return {};", canonicalize_return_expr(merged.expr)));
                    i += merged.node_count;
                    group_has_terminal = true;
                    break;
                }
                let next_stmt_before = ctx.emit_stmt;
                let Some(next) = inline_node_text(&nodes[i], ctx) else {
                    trace_flow(format_args!(
                        "inline-stop-noninline depth={depth} idx={i} stmt_before={next_stmt_before} stmt_after={} kind={}",
                        ctx.emit_stmt,
                        hir_node_trace_kind(&nodes[i])
                    ));
                    break;
                };
                let is_terminal = node_is_terminal_for_emission(&nodes[i]);
                if is_terminal {
                    group_has_terminal = true;
                }
                if !next.is_empty() {
                    parts.push(next);
                }
                trace_flow(format_args!(
                    "inline-next depth={depth} idx={i} stmt_before={next_stmt_before} stmt_after={} kind={} terminal={is_terminal} text={:?}",
                    ctx.emit_stmt,
                    hir_node_trace_kind(&nodes[i]),
                    parts.last()
                ));
                i += 1;
                if is_terminal {
                    break;
                }
            }
            if !parts.is_empty() {
                trace_flow(format_args!(
                    "inline-flush depth={depth} next_idx={i} stmt={} parts={:?}",
                    ctx.emit_stmt, parts
                ));
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "{}", parts.join(" "));
            }
            if group_has_terminal && !has_later_sibling_label(nodes, i) {
                trace_flow(format_args!(
                    "inline-terminal-break depth={depth} next_idx={i} stmt={}",
                    ctx.emit_stmt
                ));
                break;
            }
            last_dowhile_stmt_range = None;
            continue;
        }
        let is_terminal = node_is_terminal_for_emission(&nodes[i]);
        let start_stmt = ctx.emit_stmt;
        let is_dowhile = matches!(nodes[i], HirNode::DoWhile { .. });
        emit_node(&nodes[i], depth, ctx, out);
        let end_stmt = ctx.emit_stmt;
        trace_flow(format_args!(
            "node-exit depth={depth} idx={i} kind={} stmt_range={start_stmt}..{end_stmt} terminal={is_terminal}",
            hir_node_trace_kind(&nodes[i])
        ));
        last_dowhile_stmt_range = if is_dowhile {
            Some((start_stmt, end_stmt))
        } else {
            None
        };
        if is_terminal {
            // Do not stop before later sibling labels. Real HIR can contain
            // unreachable cleanup/statements between a terminal branch and a
            // later target label; suppressing that label leaves dangling gotos.
            if !has_later_sibling_label(nodes, i + 1) {
                break;
            }
        }
        i += 1;
    }
}

fn has_later_sibling_label(nodes: &[HirNode], start: usize) -> bool {
    nodes
        .get(start..)
        .is_some_and(|tail| tail.iter().any(|n| matches!(n, HirNode::Label(_))))
}

fn inline_node_text(node: &HirNode, ctx: &mut PrintCtx) -> Option<String> {
    let _span = cprinter_detail_phase("cprinter.emit.inline-node");
    match node {
        HirNode::Statement(insn) => inline_statement_text(insn, ctx),
        HirNode::Return(Some(sv)) => {
            if ctx.parent_returns_void {
                Some("return;".to_string())
            } else {
                Some(format!("return {};", resolve_return_expr(sv, ctx)))
            }
        }
        HirNode::Return(None) => Some(nonvoid_or_void_return_text(ctx)),
        HirNode::Goto(label) => Some(format!("goto {};", label)),
        HirNode::TailCall { target, args } => Some(format_tail_call_text(*target, args, ctx)),
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

fn merged_assign_return_stmt_indices(nodes: &[HirNode], ctx: &PrintCtx) -> BTreeSet<u32> {
    if ctx.parent_returns_void {
        return BTreeSet::new();
    }
    let mut out = BTreeSet::new();
    let mut next_stmt = 0;
    collect_merged_assign_return_stmt_indices(nodes, ctx, &mut next_stmt, &mut out);
    out
}

fn collect_merged_assign_return_stmt_indices(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    next_stmt: &mut u32,
    out: &mut BTreeSet<u32>,
) {
    for (node_idx, node) in nodes.iter().enumerate() {
        match node {
            HirNode::Block(children) => {
                collect_merged_assign_return_stmt_indices(children, ctx, next_stmt, out);
            }
            HirNode::Statement(_) => {
                let stmt_idx = *next_stmt;
                if can_merge_assign_return_at(&nodes[node_idx..], stmt_idx, ctx) {
                    out.insert(stmt_idx);
                }
                *next_stmt += 1;
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_assign_return_stmt_indices(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_assign_return_stmt_indices(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
            }
            HirNode::For { init, body, .. } => {
                if init.is_some() {
                    *next_stmt += 1;
                }
                collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
                *next_stmt += 1;
            }
            HirNode::Switch { cases, default, .. } => {
                for (_case, body, _) in cases {
                    collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
                }
                if let Some(default) = default {
                    collect_merged_assign_return_stmt_indices(default, ctx, next_stmt, out);
                }
            }
            HirNode::Ternary { .. } | HirNode::GuardedTernary { .. } => {
                *next_stmt += 2;
            }
            HirNode::CselTernary { .. } => {
                *next_stmt += 1;
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_assign_return_stmt_indices(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_assign_return_stmt_indices(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_merged_assign_return_stmt_indices(try_body, ctx, next_stmt, out);
                for (_ty, body) in catch_arms {
                    collect_merged_assign_return_stmt_indices(body, ctx, next_stmt, out);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_merged_assign_return_stmt_indices(try_body, ctx, next_stmt, out);
                collect_merged_assign_return_stmt_indices(finally_body, ctx, next_stmt, out);
            }
            HirNode::Commented { inner, .. } => {
                collect_merged_assign_return_stmt_indices(
                    std::slice::from_ref(inner.as_ref()),
                    ctx,
                    next_stmt,
                    out,
                );
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_assign_return_stmt_indices(then_body, ctx, next_stmt, out);
                collect_merged_assign_return_stmt_indices(else_body, ctx, next_stmt, out);
            }
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

fn merged_call_return_svs(nodes: &[HirNode], ctx: &PrintCtx) -> BTreeSet<SsaVarnode> {
    if ctx.parent_returns_void {
        return BTreeSet::new();
    }
    let mut out = BTreeSet::new();
    let mut next_stmt = 0;
    collect_merged_call_return_svs(nodes, ctx, &mut next_stmt, &mut out);
    out
}

fn collect_merged_call_return_svs(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    next_stmt: &mut u32,
    out: &mut BTreeSet<SsaVarnode>,
) {
    for (node_idx, node) in nodes.iter().enumerate() {
        match node {
            HirNode::Block(children) => {
                collect_merged_call_return_svs(children, ctx, next_stmt, out);
            }
            HirNode::Statement(_) => {
                if let Some(plan) = plan_call_return_merge(&nodes[node_idx..], *next_stmt, ctx) {
                    out.insert(plan.ret_sv);
                }
                *next_stmt += 1;
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_call_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_call_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => {
                collect_merged_call_return_svs(body, ctx, next_stmt, out);
            }
            HirNode::For { init, body, .. } => {
                if init.is_some() {
                    *next_stmt += 1;
                }
                collect_merged_call_return_svs(body, ctx, next_stmt, out);
                *next_stmt += 1;
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_merged_call_return_svs(body, ctx, next_stmt, out);
                }
                if let Some(default) = default {
                    collect_merged_call_return_svs(default, ctx, next_stmt, out);
                }
            }
            HirNode::Ternary { .. } | HirNode::GuardedTernary { .. } => {
                *next_stmt += 2;
            }
            HirNode::CselTernary { .. } => {
                *next_stmt += 1;
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_call_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_merged_call_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_merged_call_return_svs(try_body, ctx, next_stmt, out);
                for (_, body) in catch_arms {
                    collect_merged_call_return_svs(body, ctx, next_stmt, out);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_merged_call_return_svs(try_body, ctx, next_stmt, out);
                collect_merged_call_return_svs(finally_body, ctx, next_stmt, out);
            }
            HirNode::Commented { inner, .. } => {
                collect_merged_call_return_svs(
                    std::slice::from_ref(inner.as_ref()),
                    ctx,
                    next_stmt,
                    out,
                );
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_merged_call_return_svs(then_body, ctx, next_stmt, out);
                collect_merged_call_return_svs(else_body, ctx, next_stmt, out);
            }
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

fn post_dowhile_recovered_return_svs(nodes: &[HirNode], ctx: &PrintCtx) -> BTreeSet<SsaVarnode> {
    if ctx.parent_returns_void {
        return BTreeSet::new();
    }
    let mut out = BTreeSet::new();
    let mut next_stmt = 0;
    collect_post_dowhile_recovered_return_svs(nodes, ctx, &mut next_stmt, &mut out);
    out
}

fn collect_post_dowhile_recovered_return_svs(
    nodes: &[HirNode],
    ctx: &PrintCtx,
    next_stmt: &mut u32,
    out: &mut BTreeSet<SsaVarnode>,
) {
    for (idx, node) in nodes.iter().enumerate() {
        match node {
            HirNode::Block(children) => {
                collect_post_dowhile_recovered_return_svs(children, ctx, next_stmt, out);
            }
            HirNode::Statement(_) => {
                *next_stmt += 1;
            }
            HirNode::If {
                then_body,
                else_body,
                ..
            } => {
                collect_post_dowhile_recovered_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_post_dowhile_recovered_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::While { body, .. } => {
                collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
            }
            HirNode::DoWhile { body, .. } => {
                let start_stmt = *next_stmt;
                collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                let end_stmt = *next_stmt;
                if let Some(HirNode::Return(Some(sv))) = nodes.get(idx + 1)
                    && can_resolve_post_dowhile_return_expr(sv, start_stmt, end_stmt, ctx)
                {
                    out.insert(*sv);
                }
            }
            HirNode::For { init, body, .. } => {
                if init.is_some() {
                    *next_stmt += 1;
                }
                collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                *next_stmt += 1;
            }
            HirNode::Switch { cases, default, .. } => {
                for (_, body, _) in cases {
                    collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                }
                if let Some(default) = default {
                    collect_post_dowhile_recovered_return_svs(default, ctx, next_stmt, out);
                }
            }
            HirNode::Ternary { .. } | HirNode::GuardedTernary { .. } => {
                *next_stmt += 2;
            }
            HirNode::CselTernary { .. } => {
                *next_stmt += 1;
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                collect_post_dowhile_recovered_return_svs(try_body, ctx, next_stmt, out);
                for (_, body) in catch_arms {
                    collect_post_dowhile_recovered_return_svs(body, ctx, next_stmt, out);
                }
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                collect_post_dowhile_recovered_return_svs(try_body, ctx, next_stmt, out);
                collect_post_dowhile_recovered_return_svs(finally_body, ctx, next_stmt, out);
            }
            HirNode::Commented { inner, .. } => {
                collect_post_dowhile_recovered_return_svs(
                    std::slice::from_ref(inner.as_ref()),
                    ctx,
                    next_stmt,
                    out,
                );
            }
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                collect_post_dowhile_recovered_return_svs(then_body, ctx, next_stmt, out);
                collect_post_dowhile_recovered_return_svs(else_body, ctx, next_stmt, out);
            }
            HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => {
                collect_post_dowhile_recovered_return_svs(then_body, ctx, next_stmt, out);
                if let Some(else_body) = else_body {
                    collect_post_dowhile_recovered_return_svs(else_body, ctx, next_stmt, out);
                }
            }
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}
        }
    }
}

/// Detect `Statement(insn) ; Return(Some(sv))` where the statement defines
/// `sv` via the return register (RAX, offset 0) and fold into `return <expr>;`.
///
/// Only fires when the return variable has no other readers (use_count == 0
/// from the perspective of non-return uses), so that the merged form doesn't
/// lose a named variable that other code references.
fn try_merge_assign_return(nodes: &[HirNode], ctx: &mut PrintCtx) -> Option<String> {
    let _span = cprinter_detail_phase("cprinter.emit.merge-assign-return");
    if ctx.parent_returns_void {
        return None;
    }
    let stmt_idx = ctx.emit_stmt;
    if !can_merge_assign_return_at(nodes, stmt_idx, ctx) {
        return None;
    }
    let insn = match &nodes[0] {
        HirNode::Statement(insn) => insn,
        _ => return None,
    };
    Some(emit_expr(insn, stmt_idx, ctx))
}

struct CallReturnMergePlan {
    node_count: usize,
    stmt_count: u32,
    ret_sv: SsaVarnode,
}

struct CallReturnMergeEmission {
    expr: String,
    node_count: usize,
    stmt_count: u32,
}

fn try_merge_call_return(nodes: &[HirNode], ctx: &mut PrintCtx) -> Option<CallReturnMergeEmission> {
    let _span = cprinter_detail_phase("cprinter.emit.merge-call-return");
    let plan = plan_call_return_merge(nodes, ctx.emit_stmt, ctx)?;
    let insn = call_insn_for_merge(&nodes[0])?;
    Some(CallReturnMergeEmission {
        expr: emit_expr(insn, ctx.emit_stmt, ctx),
        node_count: plan.node_count,
        stmt_count: plan.stmt_count,
    })
}

fn plan_call_return_merge(
    nodes: &[HirNode],
    first_stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<CallReturnMergePlan> {
    if ctx.parent_returns_void || nodes.len() < 2 {
        return None;
    }
    let insn = call_insn_for_merge(&nodes[0])?;
    if insn.output.is_some() {
        return None;
    }

    let mut node_count = 1usize;
    let mut stmt_count = 1u32;
    let mut next_stmt_idx = first_stmt_idx + 1;
    for node in &nodes[1..] {
        match node {
            HirNode::Statement(insn)
                if statement_is_transparent_for_call_return(insn, next_stmt_idx, ctx) =>
            {
                node_count += 1;
                stmt_count += 1;
                next_stmt_idx += 1;
            }
            node if let Some(ret_sv) = return_register_sv_from_node(node) => {
                node_count += 1;
                return Some(CallReturnMergePlan {
                    node_count,
                    stmt_count,
                    ret_sv,
                });
            }
            _ => return None,
        }
    }
    None
}

fn call_insn_for_merge(node: &HirNode) -> Option<&IrInsn> {
    match node {
        HirNode::Statement(insn) if matches!(insn.op, IrOp::Call | IrOp::Callind) => Some(insn),
        HirNode::Commented { inner, .. } => call_insn_for_merge(inner),
        _ => None,
    }
}

fn return_register_sv_from_node(node: &HirNode) -> Option<SsaVarnode> {
    match node {
        HirNode::Return(Some(ret_sv)) if is_return_register(&ret_sv.base) => Some(*ret_sv),
        HirNode::Block(children) if children.len() == 1 => {
            return_register_sv_from_node(&children[0])
        }
        HirNode::Commented { inner, .. } => return_register_sv_from_node(inner),
        _ => None,
    }
}

fn statement_is_transparent_for_call_return(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if is_csel_callother(insn) || matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return false;
    }
    if ctx
        .stmt_outputs
        .get(&stmt_idx)
        .copied()
        .flatten()
        .is_some_and(|sv| is_return_register(&sv.base))
    {
        return false;
    }
    if ctx.foldable_stmts.contains(&stmt_idx)
        || is_dead_zero_init(insn, stmt_idx, ctx)
        || is_dead_suppressible_store(insn, stmt_idx, ctx)
        || is_dead_suppressed_stack_load(insn, stmt_idx, ctx)
    {
        return true;
    }
    if ctx.source_map.contains_key(&insn.addr) {
        return false;
    }
    if let Some(Some(sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() {
        return is_control_only_condition_assignment(stmt_idx, &sv, insn, ctx);
    }
    false
}

/// Recognise a dead, no-output *scalar value* op whose result was folded
/// into a consumer (or whose consumer was DCE'd — e.g. a suppressed
/// CSEL-family intrinsic) and which therefore has no observable effect.
///
/// "No-output" here means the emit-time `stmt_outputs` slot for this
/// statement is absent: the printer's liveness analysis stripped the
/// destination because nothing reads it. Restricted to the common
/// integer-arithmetic / comparison / copy / boolean opcodes the structurer
/// routinely emits and inlines. Exotic or bit-manipulation ops (`Insert`,
/// `Extract`, `Piece`, …) are deliberately excluded so they still render as
/// `__unlace_<op>(args)` helper calls, preserving operand visibility (the
/// Batch-19 contract). All listed ops are side-effect-free, so dropping a
/// dead no-output instance is sound.
fn is_dead_no_output_scalar_op(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if ctx.stmt_outputs.get(&stmt_idx).copied().flatten().is_some() {
        return false;
    }
    matches!(
        insn.op,
        IrOp::Copy
            | IrOp::IntAdd
            | IrOp::IntSub
            | IrOp::IntMult
            | IrOp::IntAnd
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntNegate
            | IrOp::Int2comp
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal
            | IrOp::BoolAnd
            | IrOp::BoolOr
            | IrOp::BoolXor
            | IrOp::BoolNegate
    )
}

/// Recognise a pure AArch64 conditional-select callother (CSEL/CSINC/
/// CSINV/CSNEG, tags 0x330..=0x333) whose result register is never read.
///
/// These intrinsics have no memory or control side effects — they compute
/// a value from a predicate plus two source registers. When the SSA output
/// has zero uses (e.g. a dead `Wd`/`Xd` write), the whole statement is dead
/// and should be dropped, mirroring IDA's DCE. Suppressing it also lets
/// [`propagate_dead_chains`] retire the predicate comparison that fed it,
/// preventing orphan `__unlace_int_*` statement calls in the output.
fn is_dead_suppressible_csel(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if !is_csel_callother(insn) {
        return false;
    }
    if ctx.foldable_stmts.contains(&stmt_idx) {
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    if ctx.byref_bases.contains(&out_sv.base) || ctx.cond_uses.contains(&out_sv) {
        return false;
    }
    ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) == 0
}

fn is_dead_suppressed_stack_load(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if is_return_address_stack_load_artifact(insn, stmt_idx, ctx) {
        return true;
    }
    if insn.op != IrOp::Load || insn.inputs.len() < 2 {
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) == 0
        && is_suppressible_storage(&out_sv.base, ctx)
}

fn is_return_address_stack_load_artifact(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.op != IrOp::Load || insn.inputs.len() < 2 {
        return false;
    }
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    resolve_stack_offset_for_addr(&insn.inputs[addr_idx], Some(addr_idx), stmt_idx, ctx, 0)
        .is_some_and(|offset| offset == 0 && !ctx.stack_frame_slots.contains_key(&offset))
}

fn is_return_register(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register && vn.offset == 0
}

fn nonvoid_or_void_return_text(ctx: &PrintCtx) -> String {
    if ctx.parent_returns_void {
        "return;".to_string()
    } else {
        "return 0;".to_string()
    }
}

fn can_merge_assign_return_at(nodes: &[HirNode], stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if nodes.len() < 2 {
        return false;
    }
    let insn = match &nodes[0] {
        HirNode::Statement(insn) => insn,
        _ => return false,
    };

    match &nodes[1] {
        HirNode::Return(Some(ret_sv)) => {
            if ret_sv.base.space != SpaceId::Register || ret_sv.base.offset != 0 {
                return false;
            }
            let Some(output_sv) = ctx.stmt_outputs.get(&stmt_idx).copied().flatten() else {
                return false;
            };
            if output_sv != *ret_sv {
                return false;
            }
            if ctx.foldable_stmts.contains(&stmt_idx) {
                return false;
            }
            if is_dead_zero_init(insn, stmt_idx, ctx) {
                return false;
            }
            if ctx.commented_stmts.contains(&stmt_idx) || ctx.line_comments.contains_key(&insn.addr)
            {
                return false;
            }
            // Don't drop a hoisted variable's declaration into a `return`
            // shortcut — the variable is referenced elsewhere too.
            if let Some(plan) = ctx.hoist_decl_plan.get(&output_sv.base)
                && plan.stmt_idx == stmt_idx
            {
                return false;
            }
            let total_uses = ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0);
            total_uses <= 1
        }
        HirNode::Return(None) => {
            let Some(out_vn) = insn.output else {
                return false;
            };
            if out_vn.space != SpaceId::Register || out_vn.offset != 0 {
                return false;
            }
            let Some(output_sv) = ctx.stmt_outputs.get(&stmt_idx).copied().flatten() else {
                return false;
            };
            if ctx.foldable_stmts.contains(&stmt_idx) {
                return false;
            }
            if is_dead_zero_init(insn, stmt_idx, ctx) {
                return false;
            }
            if ctx.commented_stmts.contains(&stmt_idx) || ctx.line_comments.contains_key(&insn.addr)
            {
                return false;
            }
            if let Some(plan) = ctx.hoist_decl_plan.get(&output_sv.base)
                && plan.stmt_idx == stmt_idx
            {
                return false;
            }
            let total_uses = ctx.sv_use_counts.get(&output_sv).copied().unwrap_or(0);
            total_uses == 0
        }
        _ => false,
    }
}

fn resolve_sv_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    resolve_sv_expr_inner(sv, ctx, true)
}

fn resolve_return_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    if sv.base.space == SpaceId::Const && sv.base.offset == 0 {
        return "0".to_string();
    }
    let ret_sv = ctx.return_value_aliases.get(sv).copied().unwrap_or(*sv);
    canonicalize_return_expr(resolve_sv_expr(&ret_sv, ctx))
}

fn canonicalize_return_expr(expr: String) -> String {
    if let Some(stripped) = strip_return_integer_suffix(&expr) {
        return stripped;
    }
    expr
}

fn strip_return_integer_suffix(expr: &str) -> Option<String> {
    for suffix in ["ULL", "LLU", "LL", "UL", "LU", "U", "L"] {
        let Some(core) = expr.strip_suffix(suffix) else {
            continue;
        };
        if is_simple_integer_literal(core) {
            return Some(core.to_string());
        }
    }
    None
}

fn is_simple_integer_literal(expr: &str) -> bool {
    let expr = expr.strip_prefix('-').unwrap_or(expr);
    if let Some(hex) = expr.strip_prefix("0x").or_else(|| expr.strip_prefix("0X")) {
        return !hex.is_empty() && hex.bytes().all(|b| b.is_ascii_hexdigit());
    }
    !expr.is_empty() && expr.bytes().all(|b| b.is_ascii_digit())
}

fn resolve_sv_expr_inner(sv: &SsaVarnode, ctx: &mut PrintCtx, allow_covering: bool) -> String {
    trace_sequence(format_args!(
        "resolve-sv-enter sv={sv:?} allow_covering={allow_covering}"
    ));
    if sv.base.space == SpaceId::Const {
        if let Some(s) = ctx.string_table.get(&sv.base.offset) {
            let rendered = format!("\"{}\"", escape_c_string(s));
            trace_sequence(format_args!(
                "resolve-sv-result sv={sv:?} source=string rendered={rendered:?}"
            ));
            return rendered;
        }
        let rendered = format_constant_ctx(sv.base.offset, sv.base.size, ConstContext::Signed);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=const rendered={rendered:?}"
        ));
        return rendered;
    }
    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(sv)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        if !ctx.resolving_exprs.insert(*sv) {
            let rendered = ctx.name_of(sv);
            trace_sequence(format_args!(
                "resolve-sv-result sv={sv:?} source=recursion def_stmt={def_stmt} rendered={rendered:?}"
            ));
            return rendered;
        }
        trace_sequence(format_args!(
            "resolve-sv-def sv={sv:?} def_stmt={def_stmt} addr=0x{:x} op={:?} inputs={:?} output={:?}",
            def_insn.addr, def_insn.op, def_insn.inputs, def_insn.output
        ));
        if def_insn.op == IrOp::Multiequal {
            for (input_idx, input) in def_insn.inputs.iter().enumerate() {
                if let Some(input_sv) = ctx
                    .stmt_inputs
                    .get(&def_stmt)
                    .and_then(|inputs| inputs.get(input_idx))
                    .copied()
                {
                    let rendered = resolve_sv_expr_inner(&input_sv, ctx, allow_covering);
                    ctx.resolving_exprs.remove(sv);
                    trace_sequence(format_args!(
                        "resolve-sv-result sv={sv:?} source=multiequal-input def_stmt={def_stmt} input_idx={input_idx} input_sv={input_sv:?} rendered={rendered:?}"
                    ));
                    return rendered;
                }
                if input.space != SpaceId::Const {
                    let rendered = emit_operand_resolved(input, input_idx, def_stmt, ctx);
                    ctx.resolving_exprs.remove(sv);
                    trace_sequence(format_args!(
                        "resolve-sv-result sv={sv:?} source=multiequal-raw def_stmt={def_stmt} input_idx={input_idx} input={input:?} rendered={rendered:?}"
                    ));
                    return rendered;
                }
            }
        }
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        ctx.resolving_exprs.remove(sv);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=emit-expr def_stmt={def_stmt} rendered={rendered:?}"
        ));
        return rendered;
    }
    if (ctx.returned_svs.contains(sv) || ctx.return_value_aliases.contains_key(sv))
        && ctx.sv_use_counts.get(sv).copied().unwrap_or(0) == 1
        && let Some(def_stmt) = latest_output_stmt_for_sv(sv, ctx)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
        && can_inline_return_value_output_stmt(sv, def_stmt, &def_insn, ctx)
    {
        if !ctx.resolving_exprs.insert(*sv) {
            let rendered = ctx.name_of(sv);
            trace_sequence(format_args!(
                "resolve-sv-result sv={sv:?} source=return-recursion rendered={rendered:?}"
            ));
            return rendered;
        }
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        ctx.resolving_exprs.remove(sv);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=return-inline def_stmt={def_stmt} rendered={rendered:?}"
        ));
        return rendered;
    }
    if let Some(alias) = ctx.return_value_aliases.get(sv).copied()
        && alias != *sv
    {
        let rendered = resolve_sv_expr_inner(&alias, ctx, false);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=return-alias alias={alias:?} rendered={rendered:?}"
        ));
        return rendered;
    }
    if allow_covering && let Some(covering_sv) = latest_covering_register_output(sv, ctx) {
        let rendered = ctx.name_of(&covering_sv);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=covering covering_sv={covering_sv:?} rendered={rendered:?}"
        ));
        return rendered;
    }
    let rendered = ctx.name_of(sv);
    trace_sequence(format_args!(
        "resolve-sv-result sv={sv:?} source=name rendered={rendered:?}"
    ));
    rendered
}

fn latest_output_stmt_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    ctx.stmt_outputs
        .iter()
        .rev()
        .find_map(|(&stmt_idx, output)| {
            output.filter(|candidate| candidate == sv).map(|_| stmt_idx)
        })
}

fn can_inline_return_value_output_stmt(
    sv: &SsaVarnode,
    stmt_idx: u32,
    insn: &IrInsn,
    ctx: &PrintCtx,
) -> bool {
    if ctx.commented_stmts.contains(&stmt_idx) || ctx.line_comments.contains_key(&insn.addr) {
        return false;
    }
    if is_never_foldable_op(insn.op)
        || (insn.op == IrOp::Copy && copy_reads_call_output(stmt_idx, ctx))
    {
        return false;
    }
    if ctx
        .stmt_outputs
        .values()
        .flatten()
        .filter(|candidate| *candidate == sv)
        .count()
        > 1
    {
        return false;
    }
    let consumer_stmt = last_consumer_stmt_for_sv(sv, ctx);
    if let Some(def_path) = ctx.stmt_scope_paths.get(&stmt_idx)
        && !def_path.is_empty()
    {
        let Some(consumer_path) = consumer_stmt.and_then(|stmt| ctx.stmt_scope_paths.get(&stmt))
        else {
            return false;
        };
        if !path_starts_with(consumer_path, def_path) {
            return false;
        }
    }
    if has_sibling_base_definition(sv, stmt_idx, consumer_stmt, ctx) {
        return false;
    }
    if let Some(consumer_stmt) = consumer_stmt
        && (copy_like_snapshot_source_redefined_before_consumer(
            sv,
            insn,
            stmt_idx,
            consumer_stmt,
            ctx,
        ) || expression_inputs_aliased_redefined_before_consumer(
            sv,
            insn,
            stmt_idx,
            consumer_stmt,
            ctx,
        ))
    {
        return false;
    }
    true
}

fn has_sibling_base_definition(
    sv: &SsaVarnode,
    stmt_idx: u32,
    consumer_stmt: Option<u32>,
    ctx: &PrintCtx,
) -> bool {
    let Some(path) = ctx.stmt_scope_paths.get(&stmt_idx) else {
        return false;
    };
    if path.is_empty() {
        return false;
    }
    if let Some(consumer_path) = consumer_stmt.and_then(|stmt| ctx.stmt_scope_paths.get(&stmt))
        && path_starts_with(consumer_path, path)
    {
        return false;
    }
    ctx.stmt_outputs
        .iter()
        .filter_map(|(&other_stmt, output)| output.map(|other_sv| (other_stmt, other_sv)))
        .any(|(other_stmt, other_sv)| {
            if other_stmt == stmt_idx || other_sv.base != sv.base {
                return false;
            }
            let Some(other_path) = ctx.stmt_scope_paths.get(&other_stmt) else {
                return false;
            };
            !path_starts_with(path, other_path) && !path_starts_with(other_path, path)
        })
}

fn path_starts_with(path: &[u32], prefix: &[u32]) -> bool {
    path.len() >= prefix.len() && path.iter().zip(prefix).all(|(a, b)| a == b)
}

fn latest_covering_register_output(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<SsaVarnode> {
    if sv.base.space != SpaceId::Register {
        return None;
    }
    ctx.stmt_outputs
        .iter()
        .rev()
        .filter_map(|(_, output)| output.as_ref().copied())
        .find(|candidate| {
            candidate.base.space == SpaceId::Register
                && candidate.base.offset == sv.base.offset
                && candidate.base.size > sv.base.size
                && candidate.version == sv.version
        })
}

fn resolve_post_dowhile_return_expr(
    sv: &SsaVarnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if !can_resolve_post_dowhile_return_expr(sv, start_stmt, end_stmt, ctx) {
        return None;
    }

    if let Some(alias_sv) =
        latest_visible_copy_from_base_in_range(&sv.base, start_stmt, end_stmt, ctx)
    {
        return Some(ctx.name_of(&alias_sv));
    }

    let (def_stmt, _def_sv) = latest_output_for_base_in_range(&sv.base, start_stmt, end_stmt, ctx)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    if instr_has_side_effects(&def_insn) {
        return None;
    }
    Some(emit_expr(&def_insn, def_stmt, ctx))
}

fn can_resolve_post_dowhile_return_expr(
    sv: &SsaVarnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if sv.base.space != SpaceId::Unique {
        return false;
    }
    if latest_visible_copy_from_base_in_range(&sv.base, start_stmt, end_stmt, ctx).is_some() {
        return true;
    }
    let Some((def_stmt, _def_sv)) =
        latest_output_for_base_in_range(&sv.base, start_stmt, end_stmt, ctx)
    else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    !instr_has_side_effects(def_insn)
}

fn latest_visible_copy_from_base_in_range(
    base: &Varnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> Option<SsaVarnode> {
    ctx.stmt_outputs
        .range(start_stmt..end_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            if is_suppressible_storage(&output_sv.base, ctx) {
                return None;
            }
            let insn = ctx.stmt_insns.get(&stmt_idx)?;
            if insn.op != IrOp::Copy || insn.inputs.first() != Some(base) {
                return None;
            }
            if ctx.foldable_stmts.contains(&stmt_idx)
                || is_dead_zero_init(insn, stmt_idx, ctx)
                || is_dead_suppressible_store(insn, stmt_idx, ctx)
            {
                return None;
            }
            Some(output_sv)
        })
}

fn latest_output_for_base_in_range(
    base: &Varnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(u32, SsaVarnode)> {
    ctx.stmt_outputs
        .range(start_stmt..end_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            (output_sv.base == *base).then_some((stmt_idx, output_sv))
        })
}

fn resolve_control_cond_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    trace_sequence(format_args!(
        "control-cond-enter cond_sv={sv:?} emit_stmt={}",
        ctx.emit_stmt
    ));
    if let Some(def_stmt) = inlineable_condition_def_stmt(sv, ctx)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        trace_condition_inputs(sv, def_stmt, &def_insn, "exact-def", ctx);
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        trace_sequence(format_args!(
            "control-cond-result cond_sv={sv:?} source=exact-def def_stmt={def_stmt} addr=0x{:x} op={:?} rendered={rendered:?}",
            def_insn.addr, def_insn.op
        ));
        return rendered;
    }
    if let Some(def_stmt) = latest_inlineable_condition_def_stmt_for_base(sv, ctx)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        trace_condition_inputs(sv, def_stmt, &def_insn, "latest-base", ctx);
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        trace_sequence(format_args!(
            "control-cond-result cond_sv={sv:?} source=latest-base def_stmt={def_stmt} addr=0x{:x} op={:?} rendered={rendered:?}",
            def_insn.addr, def_insn.op
        ));
        return rendered;
    }
    let rendered = resolve_sv_expr(sv, ctx);
    trace_sequence(format_args!(
        "control-cond-result cond_sv={sv:?} source=resolve-sv rendered={rendered:?}"
    ));
    rendered
}

fn trace_condition_inputs(
    cond_sv: &SsaVarnode,
    def_stmt: u32,
    def_insn: &IrInsn,
    source: &str,
    ctx: &mut PrintCtx,
) {
    if !c_printer_sequence_trace_enabled() {
        return;
    }
    for (raw_idx, input) in def_insn.inputs.iter().enumerate() {
        let input_sv = input_or_latest_sv_for_operand(input, Some(raw_idx), def_stmt, ctx);
        let input_def = input_sv.and_then(|sv| defining_stmt_for_sv(&sv, ctx));
        let input_def_op = input_def.and_then(|stmt| ctx.stmt_insns.get(&stmt).map(|insn| insn.op));
        let known = input_sv.and_then(|sv| known_name_of_sv(ctx, &sv));
        let rendered = emit_operand_with_prec(
            input,
            raw_idx,
            def_stmt,
            ConstContext::Signed,
            ParentCtx::top(),
            ctx,
        );
        trace_sequence(format_args!(
            "control-cond-input cond_sv={cond_sv:?} source={source} def_stmt={def_stmt} raw_idx={raw_idx} input={input:?} input_sv={input_sv:?} input_def={input_def:?} input_def_op={input_def_op:?} known={known:?} rendered={rendered:?} emit_stmt={}",
            ctx.emit_stmt
        ));
    }
}

#[derive(Debug)]
struct RebasedCondOperand {
    text: String,
    original_text: String,
    changed: bool,
    delta: Option<i128>,
    const_value: Option<(u64, u8)>,
}

fn resolve_post_body_control_cond_expr(
    sv: &SsaVarnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    trace_sequence(format_args!(
        "post-body-cond-enter cond_sv={sv:?} range={start_stmt}..{end_stmt}"
    ));
    let def_stmt = inlineable_condition_def_stmt(sv, ctx)
        .or_else(|| latest_inlineable_condition_def_stmt_for_base(sv, ctx))?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    let op = comparison_symbol(def_insn.op)?;
    if def_insn.inputs.len() != 2 {
        trace_sequence(format_args!(
            "post-body-cond-skip cond_sv={sv:?} def_stmt={def_stmt} op={:?} reason=input-count inputs={}",
            def_insn.op,
            def_insn.inputs.len()
        ));
        return None;
    }
    trace_sequence(format_args!(
        "post-body-cond-def cond_sv={sv:?} def_stmt={def_stmt} addr=0x{:x} op={:?} cmp_op={} inputs={:?} output={:?}",
        def_insn.addr, def_insn.op, op, def_insn.inputs, def_insn.output
    ));

    let mut lhs =
        rebase_cond_operand_after_body(&def_insn.inputs[0], 0, def_stmt, start_stmt, end_stmt, ctx);
    let mut rhs =
        rebase_cond_operand_after_body(&def_insn.inputs[1], 1, def_stmt, start_stmt, end_stmt, ctx);
    trace_sequence(format_args!(
        "post-body-cond-rebased def_stmt={def_stmt} lhs={lhs:?} rhs={rhs:?}"
    ));

    if let Some(delta) = lhs.delta {
        let (value, size) = rhs.const_value?;
        trace_sequence(format_args!(
            "post-body-cond-adjust def_stmt={def_stmt} side=rhs value=0x{value:x} size={size} delta={delta}"
        ));
        rhs.text = format_constant_ctx(
            adjust_constant_for_delta(value, size, delta),
            size,
            const_context_for_op(def_insn.op),
        );
        rhs.changed = true;
    }
    if let Some(delta) = rhs.delta {
        let (value, size) = lhs.const_value?;
        trace_sequence(format_args!(
            "post-body-cond-adjust def_stmt={def_stmt} side=lhs value=0x{value:x} size={size} delta={delta}"
        ));
        lhs.text = format_constant_ctx(
            adjust_constant_for_delta(value, size, delta),
            size,
            const_context_for_op(def_insn.op),
        );
        lhs.changed = true;
    }

    if lhs.text == rhs.text {
        if lhs.changed && rhs.changed {
            let preserve_lhs = lhs.delta.is_some() && rhs.delta.is_none();
            if preserve_lhs {
                rhs.text = rhs.original_text.clone();
                rhs.changed = false;
                rhs.delta = None;
            } else {
                lhs.text = lhs.original_text.clone();
                lhs.changed = false;
                lhs.delta = None;
            }
        }
        if lhs.text == rhs.text && lhs.changed {
            lhs.text = lhs.original_text.clone();
            lhs.changed = false;
            lhs.delta = None;
        }
        if lhs.text == rhs.text && rhs.changed {
            rhs.text = rhs.original_text.clone();
            rhs.changed = false;
            rhs.delta = None;
        }
    }
    if lhs.text == rhs.text {
        trace_sequence(format_args!(
            "post-body-cond-skip def_stmt={def_stmt} reason=same-text lhs={lhs:?} rhs={rhs:?}"
        ));
        return None;
    }

    tracing::debug!(target: "unlace::cprinter",
        "post-body-cond def_stmt={def_stmt} range={start_stmt}..{end_stmt} op={:?} lhs={:?} rhs={:?}",
        def_insn.op, lhs, rhs
    );

    let changed = lhs.changed || rhs.changed;
    let rendered = changed.then(|| {
        let rendered = format!(
            "{} {} {}",
            simplify_condition_operand_text(&lhs.text),
            op,
            simplify_condition_operand_text(&rhs.text)
        );
        trace_sequence(format_args!(
            "post-body-cond-result def_stmt={def_stmt} changed={changed} rendered={rendered:?} lhs={lhs:?} rhs={rhs:?}"
        ));
        rendered
    });
    if rendered.is_none() {
        trace_sequence(format_args!(
            "post-body-cond-skip def_stmt={def_stmt} reason=unchanged lhs={lhs:?} rhs={rhs:?}"
        ));
    }
    rendered
}

fn simplify_condition_operand_text(text: &str) -> String {
    let trimmed = text.trim();
    if let Some(inner) = trimmed
        .strip_prefix("LODWORD(")
        .and_then(|s| s.strip_suffix(')'))
    {
        let inner = inner.trim();
        if let Some(stripped) = strip_return_integer_suffix(inner) {
            return stripped;
        }
        if is_simple_integer_literal(inner) {
            return inner.to_string();
        }
        if is_c_identifier(inner) {
            return inner.to_string();
        }
    }
    trimmed.to_string()
}

fn simplify_condition_expr_text(expr: &str) -> String {
    if let Some(inner) = strip_double_negation_condition(expr) {
        return simplify_condition_expr_text(&inner);
    }
    if let Some((lhs, op, rhs)) = split_top_level_comparison(expr) {
        return format!(
            "{} {} {}",
            simplify_condition_operand_text(lhs),
            op,
            simplify_condition_operand_text(rhs)
        );
    }
    expr.trim().to_string()
}

fn simplify_double_negation_condition_lines(output: String) -> String {
    output
        .lines()
        .map(simplify_double_negation_condition_line)
        .collect::<Vec<_>>()
        .join("\n")
        + if output.ends_with('\n') { "\n" } else { "" }
}

fn simplify_double_negation_condition_line(line: &str) -> String {
    let indent_len = line.len() - line.trim_start().len();
    let indent = &line[..indent_len];
    let trimmed = line.trim_start();

    if let Some(condition) = trimmed
        .strip_prefix("if (")
        .and_then(|rest| rest.strip_suffix(") {"))
    {
        let Some(simplified) = simplify_double_negation_condition_expr(condition) else {
            return line.to_string();
        };
        return format!("{indent}if ({simplified}) {{");
    }
    if let Some(condition) = trimmed
        .strip_prefix("while (")
        .and_then(|rest| rest.strip_suffix(") {"))
    {
        let Some(simplified) = simplify_double_negation_condition_expr(condition) else {
            return line.to_string();
        };
        return format!("{indent}while ({simplified}) {{");
    }
    if let Some(condition) = trimmed
        .strip_prefix("} while (")
        .and_then(|rest| rest.strip_suffix(");"))
    {
        let Some(simplified) = simplify_double_negation_condition_expr(condition) else {
            return line.to_string();
        };
        return format!("{indent}}} while ({simplified});");
    }
    line.to_string()
}

fn simplify_double_negation_condition_expr(expr: &str) -> Option<String> {
    strip_double_negation_condition(expr).map(|inner| simplify_condition_expr_text(&inner))
}

fn strip_double_negation_condition(expr: &str) -> Option<String> {
    let trimmed = expr.trim();
    if let Some(inner) = strip_single_outer_negation(trimmed) {
        let inner = inner.trim();
        if let Some(positive) = strip_single_outer_negation(inner) {
            return Some(positive);
        }
        if let Some(positive) = inner.strip_prefix('!') {
            let positive = positive.trim();
            if is_condition_atom(positive) {
                return Some(positive.to_string());
            }
        }
    }
    if let Some(positive) = trimmed.strip_prefix("!!") {
        let positive = positive.trim();
        if is_condition_atom(positive) {
            return Some(positive.to_string());
        }
    }
    None
}

fn is_condition_atom(expr: &str) -> bool {
    is_c_identifier(expr)
        || is_simple_wrapping_macro(expr, "LODWORD")
        || is_simple_wrapping_macro(expr, "LOBYTE")
        || is_simple_wrapping_macro(expr, "HIDWORD")
        || is_simple_wrapping_macro(expr, "BYTE1")
        || is_simple_wrapping_macro(expr, "BYTE2")
        || is_simple_wrapping_macro(expr, "BYTE3")
        || is_simple_integer_literal(expr)
}

fn is_simple_wrapping_macro(expr: &str, name: &str) -> bool {
    expr.strip_prefix(name)
        .and_then(|rest| rest.strip_prefix('('))
        .and_then(|rest| rest.strip_suffix(')'))
        .is_some_and(|inner| !inner.trim().is_empty())
}

/// Post-emission pass: fold the x86 signed-comparison flag idiom that the
/// lifter emits verbatim back into the C relational operator IDA/Hex-Rays show.
///
/// The hardware computes a signed `a < b` as `SF != OF`. Our printer renders
/// `SF` as `LOBYTE(a < b)` (the raw subtract's sign bit) and `OF` as
/// `__OFSUB__(a, b)`, so a signed less-than leaks as:
///
/// ```text
///     LOBYTE(a < b) ^ __OFSUB__(a, b)        =>  a < b
/// ```
///
/// and the `<=` form (the `jle`/`jng` pattern, `ZF | (SF != OF)`) as:
///
/// ```text
///     a == b || (LOBYTE(a < b) ^ __OFSUB__(a, b))   =>  a <= b
///     a == b || LOBYTE(a < b) ^ __OFSUB__(a, b)     =>  a <= b
/// ```
///
/// The transform is purely textual and conservative: it only fires when the two
/// operand pairs match exactly, so it can never change the meaning of an
/// unrelated XOR. Folding these collapses the `cond_N` flag temporaries that
/// then die in the dead-assignment pass — the dominant source of medium.elf's
/// line bloat.
fn simplify_signed_flag_compares(output: String) -> String {
    if !output.contains("__OFSUB__") && !output.contains("__OFADD__") {
        return output;
    }
    let mut out = String::with_capacity(output.len());
    for (i, line) in output.lines().enumerate() {
        if i > 0 {
            out.push('\n');
        }
        // Skip the prelude `#define __OFSUB__` lines.
        if line.trim_start().starts_with("#define") {
            out.push_str(line);
            continue;
        }
        out.push_str(&simplify_signed_flag_line(line));
    }
    if output.ends_with('\n') {
        out.push('\n');
    }
    out
}

/// Apply the signed-flag-compare rewrites to a single line, repeatedly until no
/// further match (a line can hold several idioms, e.g. an `||` chain).
fn simplify_signed_flag_line(line: &str) -> String {
    let mut current = line.to_string();
    for _ in 0..8 {
        let Some(next) = rewrite_one_signed_flag_idiom(&current) else {
            break;
        };
        current = next;
    }
    current
}

/// Find the first `LOBYTE(<A> < <B>) ^ __OFSUB__(<A>, <B>)` occurrence (with the
/// operand pairs matching) and rewrite it to `<A> < <B>`, additionally
/// collapsing a preceding `<A> == <B> ||` into `<A> <= <B>`. Returns `None` when
/// no idiom is present.
fn rewrite_one_signed_flag_idiom(line: &str) -> Option<String> {
    let xor_pos = line.find(" ^ __OFSUB__(")?;
    // Parse the LOBYTE(...) immediately to the left of ` ^ `.
    let lobyte_close = xor_pos; // index of the space before ^
    let before_xor = &line[..lobyte_close];
    let lobyte_open = before_xor.rfind("LOBYTE(")?;
    let sf_inner = &before_xor[lobyte_open + "LOBYTE(".len()..];
    let sf_inner = sf_inner.strip_suffix(')')?.trim();
    // sf_inner must be `A < B` (the raw subtract sign bit).
    let (sf_a, sf_op, sf_b) = split_top_level_comparison(sf_inner)?;
    if sf_op != "<" {
        return None;
    }
    // Parse the __OFSUB__(A, B) to the right of ` ^ `.
    let of_start = xor_pos + " ^ ".len();
    let of_rest = &line[of_start..];
    let of_inner_start = of_rest.find("__OFSUB__(")? + "__OFSUB__(".len();
    let of_inner_rel_end = matching_paren_end(&of_rest[of_inner_start..])?;
    let of_inner = &of_rest[of_inner_start..of_inner_start + of_inner_rel_end];
    let (of_a, of_b) = split_top_level_comma(of_inner)?;
    // Operand pairs must match exactly (modulo whitespace).
    if sf_a.trim() != of_a.trim() || sf_b.trim() != of_b.trim() {
        return None;
    }
    let a = sf_a.trim();
    let b = sf_b.trim();
    let idiom_start = lobyte_open;
    let idiom_end = of_start + of_inner_start + of_inner_rel_end + 1; // include ')'

    // Check for a preceding `A == B || ` to fold into `<=`.
    let eq_prefix = format!("{a} == {b} || ");
    let head = &line[..idiom_start];
    if let Some(stripped) = head.strip_suffix(&eq_prefix) {
        let replacement = format!("{a} <= {b}");
        return Some(format!("{stripped}{replacement}{}", &line[idiom_end..]));
    }
    // Also accept a parenthesized idiom: `A == B || (IDIOM)`.
    let eq_prefix_paren = format!("{a} == {b} || (");
    if let Some(stripped) = head.strip_suffix(&eq_prefix_paren)
        && line[idiom_end..].starts_with(')')
    {
        let replacement = format!("{a} <= {b}");
        return Some(format!("{stripped}{replacement}{}", &line[idiom_end + 1..]));
    }

    let replacement = format!("{a} < {b}");
    Some(format!(
        "{}{replacement}{}",
        &line[..idiom_start],
        &line[idiom_end..]
    ))
}

/// Return the byte index just past the `)` that closes the paren group opened at
/// the start of `s` (i.e. `s[0]` is the first char *inside* the group). Returns
/// `None` if unbalanced.
fn matching_paren_end(s: &str) -> Option<usize> {
    let mut depth = 1i32;
    for (i, b) in s.bytes().enumerate() {
        match b {
            b'(' => depth += 1,
            b')' => {
                depth -= 1;
                if depth == 0 {
                    return Some(i);
                }
            }
            _ => {}
        }
    }
    None
}

/// Split `a, b` at the top-level comma (depth 0). Returns `None` if there isn't
/// exactly one top-level comma.
fn split_top_level_comma(s: &str) -> Option<(&str, &str)> {
    let bytes = s.as_bytes();
    let mut depth = 0i32;
    let mut comma: Option<usize> = None;
    for (i, &b) in bytes.iter().enumerate() {
        match b {
            b'(' => depth += 1,
            b')' => depth -= 1,
            b',' if depth == 0 => {
                if comma.is_some() {
                    return None;
                }
                comma = Some(i);
            }
            _ => {}
        }
    }
    let c = comma?;
    Some((&s[..c], &s[c + 1..]))
}

fn rebase_cond_operand_after_body(
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &mut PrintCtx,
) -> RebasedCondOperand {
    if vn.space == SpaceId::Const {
        let text = format_constant_ctx(vn.offset, vn.size, ConstContext::Signed);
        trace_sequence(format_args!(
            "rebase-cond-operand-const stmt={stmt_idx} raw_idx={raw_idx} range={start_stmt}..{end_stmt} vn={vn:?} text={text:?}"
        ));
        return RebasedCondOperand {
            original_text: text.clone(),
            text,
            changed: false,
            delta: None,
            const_value: Some((vn.offset, vn.size)),
        };
    }

    let sv =
        input_or_latest_sv_for_operand(vn, Some(raw_idx), stmt_idx, ctx).unwrap_or(SsaVarnode {
            base: *vn,
            version: 0,
        });

    let original_text = emit_operand_with_prec(
        vn,
        raw_idx,
        stmt_idx,
        ConstContext::Signed,
        ParentCtx::top(),
        ctx,
    );
    trace_sequence(format_args!(
        "rebase-cond-operand-enter stmt={stmt_idx} raw_idx={raw_idx} range={start_stmt}..{end_stmt} vn={vn:?} sv={sv:?} original={original_text:?}"
    ));
    tracing::debug!(target: "unlace::cprinter",
        "rebase-cond operand stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} sv={sv:?} original={original_text}"
    );

    let candidate_bases = condition_rebase_candidate_bases(&sv, ctx);
    trace_sequence(format_args!(
        "rebase-cond-candidates stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} bases={candidate_bases:?}"
    ));

    if let Some(rebased) = rebase_compare_copy_source_after_body(
        &sv,
        vn,
        raw_idx,
        stmt_idx,
        start_stmt,
        end_stmt,
        &original_text,
        ctx,
    ) {
        return rebased;
    }

    for candidate_base in &candidate_bases {
        if let Some(alias_sv) =
            latest_visible_copy_from_base_in_range(candidate_base, start_stmt, end_stmt, ctx)
        {
            let text = ctx.name_of(&alias_sv);
            trace_sequence(format_args!(
                "rebase-cond-alias-hit stmt={stmt_idx} raw_idx={raw_idx} base={candidate_base:?} alias_sv={alias_sv:?} text={text:?}"
            ));
            return RebasedCondOperand {
                text,
                original_text,
                changed: true,
                delta: None,
                const_value: None,
            };
        }
    }

    for candidate_base in &candidate_bases {
        if let Some((alias_sv, delta)) =
            latest_linear_update_copy_for_base_in_range(candidate_base, start_stmt, end_stmt, ctx)
        {
            let text = ctx.name_of(&alias_sv);
            trace_sequence(format_args!(
                "rebase-cond-linear-hit stmt={stmt_idx} raw_idx={raw_idx} base={candidate_base:?} alias_sv={alias_sv:?} delta={delta} text={text:?}"
            ));
            return RebasedCondOperand {
                text,
                original_text,
                changed: true,
                delta: Some(delta),
                const_value: None,
            };
        }
    }

    trace_sequence(format_args!(
        "rebase-cond-miss stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} original={original_text:?}"
    ));
    RebasedCondOperand {
        text: original_text.clone(),
        original_text,
        changed: false,
        delta: None,
        const_value: None,
    }
}

fn rebase_compare_copy_source_after_body(
    sv: &SsaVarnode,
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    start_stmt: u32,
    end_stmt: u32,
    original_text: &str,
    ctx: &mut PrintCtx,
) -> Option<RebasedCondOperand> {
    let def_stmt = defining_stmt_for_sv(sv, ctx)?;
    if def_stmt < start_stmt || def_stmt >= end_stmt || def_stmt >= stmt_idx {
        return None;
    }
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    if def_insn.op != IrOp::Copy || def_insn.output != Some(*vn) || def_insn.inputs.len() != 1 {
        return None;
    }
    let source = def_insn.inputs[0];
    if let Some(materialized_sv) =
        latest_materialized_value_for_same_source(sv, &def_insn, def_stmt, stmt_idx, ctx)
    {
        let materialized_text = ctx.name_of(&materialized_sv);
        if materialized_text == original_text {
            trace_sequence(format_args!(
                "rebase-cond-copy-source-skip stmt={stmt_idx} raw_idx={raw_idx} copy_stmt={def_stmt} materialized={materialized_sv:?} text={materialized_text:?} reason=already-materialized"
            ));
            return None;
        }
    }
    if source_is_reassigned_before_condition(&source, def_stmt, stmt_idx, ctx)
        || source_operands_reassigned_before_condition(&source, def_stmt, stmt_idx, ctx, 0)
    {
        return None;
    }
    let text = pure_condition_source_text(&source, def_stmt, ctx, 0)?;
    if text.trim().is_empty() || text == original_text {
        return None;
    }
    trace_sequence(format_args!(
        "rebase-cond-copy-source-hit stmt={stmt_idx} raw_idx={raw_idx} copy_stmt={def_stmt} source={source:?} text={text:?}"
    ));
    Some(RebasedCondOperand {
        text,
        original_text: original_text.to_string(),
        changed: true,
        delta: None,
        const_value: (source.space == SpaceId::Const).then_some((source.offset, source.size)),
    })
}

fn source_is_reassigned_before_condition(
    source: &Varnode,
    copy_stmt: u32,
    cond_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if source.space == SpaceId::Const {
        return false;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), copy_stmt, ctx) else {
        return false;
    };
    ctx.stmt_outputs
        .range((copy_stmt + 1)..cond_stmt)
        .any(|(_stmt, output)| output.is_some_and(|out| out.base == source_sv.base))
}

/// Whether a storage operand read by the temporary `source` expression is
/// overwritten before the condition. Rendering `source` as text at the
/// condition is only sound while every storage it reads still holds the same
/// value; `rax = rax + 1` followed by `rax != n` must not become `rax + 1 != n`.
fn source_operands_reassigned_before_condition(
    source: &Varnode,
    use_stmt: u32,
    cond_stmt: u32,
    ctx: &PrintCtx,
    depth: u8,
) -> bool {
    if source.space != SpaceId::Unique || depth >= 4 {
        return false;
    }
    let Some(source_sv) = input_or_latest_sv_for_operand(source, Some(0), use_stmt, ctx) else {
        return false;
    };
    let Some(def_stmt) = defining_stmt_for_sv(&source_sv, ctx) else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    def_insn.inputs.iter().any(|input| match input.space {
        SpaceId::Const => false,
        SpaceId::Unique => {
            source_operands_reassigned_before_condition(input, def_stmt, cond_stmt, ctx, depth + 1)
        }
        _ => ctx
            .stmt_outputs
            .range((def_stmt + 1)..cond_stmt)
            .any(|(_stmt, output)| {
                output.is_some_and(|out| {
                    out.base.space == input.space && out.base.offset == input.offset
                })
            }),
    })
}

fn pure_condition_source_text(
    source: &Varnode,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
    depth: u8,
) -> Option<String> {
    if source.space == SpaceId::Const {
        return Some(format_constant_ctx(
            source.offset,
            source.size,
            ConstContext::Signed,
        ));
    }
    if depth >= 4 {
        return Some(emit_operand_resolved(source, 0, stmt_idx, ctx));
    }
    let source_sv = input_or_latest_sv_for_operand(source, Some(0), stmt_idx, ctx)?;
    if source_sv.base.space != SpaceId::Unique {
        return Some(ctx.name_of(&source_sv));
    }
    let Some(def_stmt) = defining_stmt_for_sv(&source_sv, ctx) else {
        return Some(emit_operand_resolved(source, 0, stmt_idx, ctx));
    };
    if def_stmt >= stmt_idx {
        return Some(emit_operand_resolved(source, 0, stmt_idx, ctx));
    }
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    if instr_has_side_effects(&def_insn) {
        return None;
    }
    if matches!(
        def_insn.op,
        IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
    ) {
        return Some(emit_expr(&def_insn, def_stmt, ctx));
    }
    Some(emit_operand_resolved(source, 0, stmt_idx, ctx))
}

fn condition_rebase_candidate_bases(sv: &SsaVarnode, ctx: &PrintCtx) -> Vec<Varnode> {
    let mut bases = vec![sv.base];
    let mut current = *sv;
    for _ in 0..4 {
        if !bases.contains(&current.base) {
            bases.push(current.base);
        }
        let Some(def_stmt) = defining_stmt_for_sv(&current, ctx) else {
            tracing::debug!(target: "unlace::cprinter", "rebase-candidates no def for {current:?}");
            break;
        };
        let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
            break;
        };
        tracing::debug!(target: "unlace::cprinter",
            "rebase-candidates current={current:?} def_stmt={def_stmt} op={:?} inputs={:?}",
            def_insn.op, def_insn.inputs
        );
        if !matches!(
            def_insn.op,
            IrOp::Copy | IrOp::Subpiece | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
        ) {
            break;
        }
        let Some(input) = def_insn.inputs.first().copied() else {
            break;
        };
        if input.space == SpaceId::Const {
            break;
        }
        if !bases.contains(&input) {
            bases.push(input);
        }
        let Some(input_sv) = input_or_latest_sv_for_operand(&input, Some(0), def_stmt, ctx) else {
            break;
        };
        if input_sv == current {
            break;
        }
        current = input_sv;
    }
    bases
}

fn comparison_symbol(op: IrOp) -> Option<&'static str> {
    match op {
        IrOp::IntEqual | IrOp::FloatEqual => Some("=="),
        IrOp::IntNotequal | IrOp::FloatNotequal => Some("!="),
        IrOp::IntLess | IrOp::IntSless | IrOp::FloatLess => Some("<"),
        IrOp::IntLessequal | IrOp::IntSlessequal | IrOp::FloatLessequal => Some("<="),
        _ => None,
    }
}

fn adjust_constant_for_delta(value: u64, size: u8, delta: i128) -> u64 {
    let adjusted = if delta >= 0 {
        value.wrapping_add(delta as u64)
    } else {
        value.wrapping_sub((-delta) as u64)
    };
    if size >= 8 {
        adjusted
    } else {
        let bits = u32::from(size.max(1)) * 8;
        adjusted & ((1u64 << bits) - 1)
    }
}

fn latest_linear_update_copy_for_base_in_range(
    base: &Varnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(SsaVarnode, i128)> {
    tracing::debug!(target: "unlace::cprinter",
        "linear-rebase search base={base:?} range={start_stmt}..{end_stmt}"
    );
    ctx.stmt_outputs
        .range(start_stmt..end_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            if output_sv.base != *base || is_suppressible_storage(&output_sv.base, ctx) {
                return None;
            }
            let copy = ctx.stmt_insns.get(&stmt_idx)?;
            tracing::debug!(target: "unlace::cprinter",
                "linear-rebase candidate stmt={stmt_idx} output={output_sv:?} op={:?} inputs={:?}",
                copy.op, copy.inputs
            );
            if !matches!(
                copy.op,
                IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Cast
            ) || copy.inputs.len() != 1
            {
                return None;
            }
            let source = copy.inputs[0];
            if source.space == SpaceId::Const {
                return None;
            }
            let source_sv = input_or_latest_sv_for_operand(&source, Some(0), stmt_idx, ctx)?;
            let source_def_stmt = defining_stmt_for_sv(&source_sv, ctx)?;
            if source_def_stmt < start_stmt || source_def_stmt >= end_stmt {
                return None;
            }
            let source_def = ctx.stmt_insns.get(&source_def_stmt)?;
            tracing::debug!(target: "unlace::cprinter",
                "linear-rebase source stmt={source_def_stmt} op={:?} inputs={:?}",
                source_def.op, source_def.inputs
            );
            linear_update_delta_from_base_resolved(source_def, source_def_stmt, base, ctx)
                .map(|delta| (output_sv, delta))
        })
}

fn linear_update_delta_from_base(insn: &IrInsn, base: &Varnode) -> Option<i128> {
    match insn.op {
        IrOp::IntAdd if insn.inputs.len() >= 2 => {
            if same_linear_update_base(&insn.inputs[0], base)
                && insn.inputs[1].space == SpaceId::Const
            {
                Some(insn.inputs[1].offset as i128)
            } else if same_linear_update_base(&insn.inputs[1], base)
                && insn.inputs[0].space == SpaceId::Const
            {
                Some(insn.inputs[0].offset as i128)
            } else {
                None
            }
        }
        IrOp::IntSub if insn.inputs.len() >= 2 => {
            if same_linear_update_base(&insn.inputs[0], base)
                && insn.inputs[1].space == SpaceId::Const
            {
                Some(-(insn.inputs[1].offset as i128))
            } else {
                None
            }
        }
        _ => None,
    }
}

fn same_linear_update_base(candidate: &Varnode, base: &Varnode) -> bool {
    candidate == base
        || (candidate.space == SpaceId::Register
            && base.space == SpaceId::Register
            && candidate.offset == base.offset)
}

fn linear_update_delta_from_base_resolved(
    insn: &IrInsn,
    stmt_idx: u32,
    base: &Varnode,
    ctx: &PrintCtx,
) -> Option<i128> {
    let input_matches = |idx: usize, input: &Varnode| {
        same_linear_update_base(input, base)
            || input_or_latest_sv_for_operand(input, Some(idx), stmt_idx, ctx)
                .is_some_and(|sv| same_linear_update_base(&sv.base, base))
    };

    match insn.op {
        IrOp::IntAdd if insn.inputs.len() >= 2 => {
            if input_matches(0, &insn.inputs[0]) && insn.inputs[1].space == SpaceId::Const {
                Some(insn.inputs[1].offset as i128)
            } else if input_matches(1, &insn.inputs[1]) && insn.inputs[0].space == SpaceId::Const {
                Some(insn.inputs[0].offset as i128)
            } else {
                linear_update_delta_from_base(insn, base)
            }
        }
        IrOp::IntSub if insn.inputs.len() >= 2 => {
            if input_matches(0, &insn.inputs[0]) && insn.inputs[1].space == SpaceId::Const {
                Some(-(insn.inputs[1].offset as i128))
            } else {
                linear_update_delta_from_base(insn, base)
            }
        }
        _ => linear_update_delta_from_base(insn, base),
    }
}

fn negate_condition_expr(expr: &str) -> String {
    let expr = expr.trim();
    if let Some((lhs, op, rhs)) = split_top_level_comparison(expr) {
        let negated = match op {
            "==" => "!=",
            "!=" => "==",
            "<" => ">=",
            "<=" => ">",
            ">" => "<=",
            ">=" => "<",
            _ => return format!("!({expr})"),
        };
        return format!("{} {} {}", lhs.trim(), negated, rhs.trim());
    }
    format!("!({expr})")
}

/// Late, text-only cleanup: rewrite `if (!(X)) {}` (an empty then-body with no
/// `else`) to the positive `if (X) {}`.
///
/// WHY this lives at the very end of the cleanup pipeline rather than in the
/// structurer: the emptiness is a *print-time* artifact. Architectures like
/// mips64 / v850 / ppc64 lift a `logic_test`-style stub to the HIR shape
/// `if (!v) { v2 = 0 }` — a negated guard whose then-body holds a register
/// store. That store is a dead assignment removed only by the c_printer's
/// `prune_dead_plain_assignments` + decl-prune passes, AFTER the if-polarity is
/// already locked at structurer time. So at structurer time the body is
/// NON-empty and `empty_if_cleanup` never fires. Running here — after pruning —
/// is the only place where the emptiness is final.
///
/// An empty branch executes nothing regardless of polarity, so flipping the
/// guard is semantically free and matches the golden `if (v) {}` form.
///
/// Conservatism guards (each one prevents a false positive):
///   * The then-body must be GENUINELY empty: the line after the `{` is exactly
///     `}` at the matching indent. This is why `if (!(v1)) { result = 1; }`
///     (the inverted-else merge, asserted by
///     `test_empty_then_else_prints_inverted_condition`) is left untouched.
///   * The closing `}` must NOT be followed by `else` — an `if/else` keeps its
///     inverted guard (`test_print_if_else`).
///   * Only a single balanced outer `!(...)` is stripped. `if (!(a) && b)` is
///     not a leading negation of the whole condition and is skipped.
fn depolarize_empty_negated_ifs(output: String) -> String {
    let lines: Vec<&str> = output.lines().collect();
    let mut out_lines: Vec<String> = Vec::with_capacity(lines.len());
    let mut i = 0usize;
    while i < lines.len() {
        if let Some(positive) = empty_negated_if_rewrite(&lines, i) {
            // Replace the guard line; the body (`}`) line is emitted as-is on
            // the next iteration.
            out_lines.push(positive);
            i += 1;
            continue;
        }
        out_lines.push(lines[i].to_string());
        i += 1;
    }
    let mut result = out_lines.join("\n");
    if output.ends_with('\n') {
        result.push('\n');
    }
    result
}

/// If `lines[idx]` is the guard line of an `if (!(X)) {}` with a genuinely empty
/// body and no `else`, return the rewritten `if (X) {` guard line (preserving
/// the original leading indent). Otherwise `None`.
fn empty_negated_if_rewrite(lines: &[&str], idx: usize) -> Option<String> {
    let line = lines[idx];
    let indent_len = line.len() - line.trim_start().len();
    let indent = &line[..indent_len];
    let trimmed = line.trim_start();

    // Guard must be exactly `if (<cond>) {` — opening brace on the same line.
    let after_if = trimmed.strip_prefix("if (")?;
    let cond_with_brace = after_if.strip_suffix(" {")?;
    // The condition is everything up to the closing paren that balances the
    // `if (` opener. Require the line to end with `) {`.
    let cond = cond_with_brace.strip_suffix(')')?;

    // Strip exactly one balanced leading `!(...)` that wraps the whole cond.
    let positive = strip_single_outer_negation(cond)?;

    // Next non-blank line must be exactly the matching `}` (empty body), and
    // it must not begin an `else`.
    let mut j = idx + 1;
    while j < lines.len() && lines[j].trim().is_empty() {
        j += 1;
    }
    let close = lines.get(j)?;
    let close_trimmed = close.trim();
    if close_trimmed != "}" {
        return None;
    }
    // The body line must be at the same indent as the guard (matching brace),
    // confirming this `}` closes the `if` and nothing is nested inside.
    let close_indent_len = close.len() - close.trim_start().len();
    if close_indent_len != indent_len {
        return None;
    }
    // No `else` chained onto the closing brace (handled by the trim == "}"
    // check, but a `} else {` would already have failed that).

    Some(format!("{indent}if ({positive}) {{"))
}

/// If `cond` is exactly a single balanced `!(...)` wrapping its whole body,
/// return the inner expression (trimmed). Returns `None` when the leading `!`
/// does not parenthesize the entire condition (e.g. `!(a) && b`) or when there
/// is no leading negation.
fn strip_single_outer_negation(cond: &str) -> Option<String> {
    let cond = cond.trim();
    let rest = cond.strip_prefix('!')?;
    let rest = rest.trim_start();
    if !rest.starts_with('(') {
        return None;
    }
    // Find the paren that balances the opening `(`.
    let bytes = rest.as_bytes();
    let mut depth = 0usize;
    let mut close_idx = None;
    for (k, &b) in bytes.iter().enumerate() {
        match b {
            b'(' => depth += 1,
            b')' => {
                depth -= 1;
                if depth == 0 {
                    close_idx = Some(k);
                    break;
                }
            }
            _ => {}
        }
    }
    let close_idx = close_idx?;
    // The `(...)` must span the entire remaining condition; otherwise the `!`
    // negates only a sub-expression (e.g. `!(a) && b`) and stripping it would
    // change semantics.
    if close_idx != bytes.len() - 1 {
        return None;
    }
    let inner = &rest[1..close_idx];
    let inner = inner.trim();
    if inner.is_empty() {
        return None;
    }
    Some(inner.to_string())
}

fn split_top_level_comparison(expr: &str) -> Option<(&str, &str, &str)> {
    let bytes = expr.as_bytes();
    let ops = ["==", "!=", ">=", "<=", ">", "<"];
    let mut depth = 0usize;
    let mut found: Option<(usize, &str)> = None;
    let mut i = 0usize;

    'scan: while i < bytes.len() {
        match bytes[i] {
            b'(' => {
                depth += 1;
                i += 1;
                continue;
            }
            b')' => {
                depth = depth.saturating_sub(1);
                i += 1;
                continue;
            }
            _ => {}
        }

        if depth == 0 {
            if bytes[i..].starts_with(b"&&")
                || bytes[i..].starts_with(b"||")
                || bytes[i] == b'?'
                || bytes[i] == b':'
            {
                return None;
            }

            for op in ops {
                if top_level_condition_op_at(bytes, i, op) {
                    if found.replace((i, op)).is_some() {
                        return None;
                    }
                    i += op.len();
                    continue 'scan;
                }
            }
        }

        i += 1;
    }

    let (idx, op) = found?;
    let lhs = &expr[..idx];
    let rhs = &expr[idx + op.len()..];
    (!lhs.trim().is_empty() && !rhs.trim().is_empty()).then_some((lhs, op, rhs))
}

fn top_level_condition_op_at(bytes: &[u8], idx: usize, op: &str) -> bool {
    if !bytes[idx..].starts_with(op.as_bytes()) {
        return false;
    }
    match op {
        "<" => bytes.get(idx + 1).copied() != Some(b'<'),
        ">" => {
            bytes.get(idx + 1).copied() != Some(b'>')
                && idx.checked_sub(1).and_then(|prev| bytes.get(prev)).copied() != Some(b'-')
        }
        _ => true,
    }
}

fn inlineable_condition_def_stmt(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    let def_stmt = defining_stmt_for_sv(sv, ctx)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?;
    (def_insn.op.type_family() == Some('b')).then_some(def_stmt)
}

fn latest_inlineable_condition_def_stmt_for_base(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    ctx.stmt_outputs
        .range(..ctx.emit_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            if output_sv.base != sv.base {
                return None;
            }
            let insn = ctx.stmt_insns.get(&stmt_idx)?;
            (insn.op.type_family() == Some('b')).then_some(stmt_idx)
        })
}

fn is_control_only_condition_use(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    if inlineable_condition_def_stmt(sv, ctx).is_none() {
        return false;
    }
    let control_uses = ctx
        .control_cond_uses
        .iter()
        .filter(|cond| *cond == sv)
        .count();
    control_uses > 0 && ctx.sv_use_counts.get(sv).copied().unwrap_or(0) <= control_uses
}

fn is_control_only_condition_use_or_base(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    is_control_only_condition_use(sv, ctx)
}

fn is_control_condition_stmt(stmt_idx: u32, ctx: &PrintCtx) -> bool {
    ctx.stmt_outputs
        .get(&stmt_idx)
        .and_then(|output| *output)
        .is_some_and(|sv| ctx.control_cond_uses.contains(&sv))
}

fn is_control_only_condition_assignment(
    stmt_idx: u32,
    sv: &SsaVarnode,
    insn: &IrInsn,
    ctx: &PrintCtx,
) -> bool {
    if insn.op.type_family() != Some('b') {
        return false;
    }
    if is_flag_register(&sv.base) {
        return false;
    }
    if inlineable_condition_def_stmt(sv, ctx) == Some(stmt_idx) {
        return is_control_only_condition_use(sv, ctx);
    }
    false
}

fn body_is_stack_chk_fail_only(body: &[HirNode], ctx: &PrintCtx) -> bool {
    let mut meaningful = body.iter();
    let Some(node) = meaningful.next() else {
        return false;
    };
    meaningful.next().is_none() && node_is_stack_chk_fail_call(node, ctx)
}

fn node_is_stack_chk_fail_call(node: &HirNode, ctx: &PrintCtx) -> bool {
    match node {
        HirNode::Statement(insn) => insn_calls_symbol(insn, "__stack_chk_fail", ctx),
        HirNode::Block(children) => body_is_stack_chk_fail_only(children, ctx),
        HirNode::Commented { inner, .. } => node_is_stack_chk_fail_call(inner, ctx),
        _ => false,
    }
}

/// `true` when `body` contains a call to `__stack_chk_fail` somewhere in its
/// direct children (optionally wrapped in a `Block`/`Commented`), regardless of
/// any trailing `goto`/`return`. Unlike [`body_is_stack_chk_fail_only`] this
/// tolerates the extra control-transfer statements the structurer appends to a
/// canary-fail branch inside an irreducible region.
fn body_contains_stack_chk_fail_call(body: &[HirNode], ctx: &PrintCtx) -> bool {
    fn node_contains(node: &HirNode, ctx: &PrintCtx) -> bool {
        match node {
            HirNode::Statement(insn) => insn_calls_symbol(insn, "__stack_chk_fail", ctx),
            HirNode::Block(children) => children.iter().any(|n| node_contains(n, ctx)),
            HirNode::Commented { inner, .. } => node_contains(inner, ctx),
            _ => false,
        }
    }
    body.iter().any(|node| node_contains(node, ctx))
}

fn insn_calls_symbol(insn: &IrInsn, name: &str, ctx: &PrintCtx) -> bool {
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return false;
    }
    let Some(target) = insn.inputs.first() else {
        return false;
    };
    target.space == SpaceId::Const
        && ctx
            .symbols
            .get(&target.offset)
            .is_some_and(|sym| sym == name || sym.ends_with(name))
}

/// Runtime/CRT helpers whose C prototype returns `void`. A direct call to one
/// of these must never be rendered as the right-hand side of an assignment
/// (`v = __stack_chk_fail();`) — that is a hard `-Werror` "invalid use of void
/// expression" / type error. The IR may carry a spurious output varnode for
/// these (the lifter models the call's clobber of a return register), but the
/// C-level prototype is `void`, so the assignment is dropped and only the call
/// statement is emitted.
fn call_targets_void_runtime_symbol(insn: &IrInsn, ctx: &PrintCtx) -> bool {
    const VOID_RUNTIME_SYMBOLS: &[&str] = &[
        "__stack_chk_fail",
        "__stack_chk_fail_local",
        "abort",
        "__assert_fail",
        "__cxa_rethrow",
        "_Unwind_Resume",
    ];
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return false;
    }
    let Some(target) = insn.inputs.first() else {
        return false;
    };
    if target.space != SpaceId::Const {
        return false;
    }
    let Some(sym) = ctx.symbols.get(&target.offset) else {
        return false;
    };
    VOID_RUNTIME_SYMBOLS
        .iter()
        .any(|name| sym == name || sym.ends_with(name))
}

fn emit_node_phase(node: &HirNode) -> Option<linkscope::Span> {
    match node {
        HirNode::Block(_) => cprinter_detail_phase("cprinter.emit.node.block"),
        HirNode::Statement(_) => cprinter_detail_phase("cprinter.emit.node.statement"),
        HirNode::If { .. } => cprinter_detail_phase("cprinter.emit.node.if"),
        HirNode::IfCmp { .. } => cprinter_detail_phase("cprinter.emit.node.ifcmp"),
        HirNode::While { .. } => cprinter_detail_phase("cprinter.emit.node.while"),
        HirNode::DoWhile { .. } => cprinter_detail_phase("cprinter.emit.node.dowhile"),
        HirNode::For { .. } => cprinter_detail_phase("cprinter.emit.node.for"),
        HirNode::Switch { .. } => cprinter_detail_phase("cprinter.emit.node.switch"),
        HirNode::Return(_) => cprinter_detail_phase("cprinter.emit.node.return"),
        HirNode::Goto(_) => cprinter_detail_phase("cprinter.emit.node.goto"),
        HirNode::Label(_) => cprinter_detail_phase("cprinter.emit.node.label"),
        HirNode::Ternary { .. } => cprinter_detail_phase("cprinter.emit.node.ternary"),
        HirNode::GuardedTernary { .. } => {
            cprinter_detail_phase("cprinter.emit.node.guarded-ternary")
        }
        HirNode::CselTernary { .. } => cprinter_detail_phase("cprinter.emit.node.csel-ternary"),
        HirNode::GuardedIf { .. } => cprinter_detail_phase("cprinter.emit.node.guarded-if"),
        HirNode::TailCall { .. } => cprinter_detail_phase("cprinter.emit.node.tail-call"),
        HirNode::Continue => cprinter_detail_phase("cprinter.emit.node.continue"),
        HirNode::Break => cprinter_detail_phase("cprinter.emit.node.break"),
        HirNode::ObjcBlock { .. } => cprinter_detail_phase("cprinter.emit.node.objc-block"),
        HirNode::TryCatch { .. } => cprinter_detail_phase("cprinter.emit.node.try-catch"),
        HirNode::TryFinally { .. } => cprinter_detail_phase("cprinter.emit.node.try-finally"),
        HirNode::Asm { .. } => cprinter_detail_phase("cprinter.emit.node.asm"),
        HirNode::Commented { .. } => cprinter_detail_phase("cprinter.emit.node.commented"),
    }
}

fn emit_node(node: &HirNode, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let _span = emit_node_phase(node);
    trace_flow(format_args!(
        "emit-node depth={depth} stmt={} kind={}",
        ctx.emit_stmt,
        hir_node_trace_kind(node)
    ));
    match node {
        HirNode::Block(children) => emit_nodes(children, depth, ctx, out),

        HirNode::Statement(insn) => emit_statement(insn, depth, ctx, out),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => {
            trace_flow(format_args!(
                "emit-if depth={depth} stmt={} then_len={} else_len={}",
                ctx.emit_stmt,
                then_body.len(),
                else_body.as_ref().map_or(0, |body| body.len())
            ));
            if body_is_stack_chk_fail_only(then_body, ctx) {
                if let Some(eb) = else_body {
                    emit_nodes(eb, depth, ctx, out);
                }
                return;
            }
            if else_body
                .as_deref()
                .is_some_and(|eb| body_is_stack_chk_fail_only(eb, ctx))
            {
                emit_nodes(then_body, depth, ctx, out);
                return;
            }
            // Stack-canary guard `if (canary != reloaded) { __stack_chk_fail();
            // goto exit; }`: the fail branch (the one containing the call) is
            // the trap and is dropped; the other branch is the normal path.
            // Detected by condition so it fires even when the trap body carries
            // a trailing goto (irreducible-region shape) that defeats the
            // body-only check above.
            if cond_sv_is_stack_canary_compare(cond, ctx) {
                if body_contains_stack_chk_fail_call(then_body, ctx) {
                    if let Some(eb) = else_body {
                        emit_nodes(eb, depth, ctx, out);
                    }
                    return;
                }
                if else_body
                    .as_deref()
                    .is_some_and(|eb| body_contains_stack_chk_fail_call(eb, ctx))
                {
                    emit_nodes(then_body, depth, ctx, out);
                    return;
                }
            }

            trace_sequence(format_args!(
                "emit-if-enter depth={depth} stmt={} cond_sv={cond:?} then_len={} else_len={}",
                ctx.emit_stmt,
                then_body.len(),
                else_body.as_ref().map_or(0, |body| body.len())
            ));
            let cond_expr = resolve_control_cond_expr(cond, ctx);
            trace_sequence(format_args!(
                "emit-if-cond depth={depth} stmt={} cond_sv={cond:?} cond={cond_expr:?}",
                ctx.emit_stmt
            ));
            if then_body.is_empty()
                && let Some(eb) = else_body
                && !eb.is_empty()
            {
                trace_flow(format_args!(
                    "emit-if-empty-then-invert depth={depth} stmt={} cond={} else_len={} else_first={}",
                    ctx.emit_stmt,
                    cond_expr,
                    eb.len(),
                    eb.first().map_or("<none>", hir_node_trace_kind)
                ));
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "if ({}) {{", negate_condition_expr(&cond_expr));
                emit_nodes(eb, depth + 1, ctx, out);
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}}");
                return;
            }
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
            let cond_expr = format!("{lhs_s} {op_str} {rhs_s}");
            if then_body.is_empty()
                && let Some(eb) = else_body
                && !eb.is_empty()
            {
                trace_flow(format_args!(
                    "emit-ifcmp-empty-then-invert depth={depth} stmt={} cond={} else_len={} else_first={}",
                    ctx.emit_stmt,
                    cond_expr,
                    eb.len(),
                    eb.first().map_or("<none>", hir_node_trace_kind)
                ));
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "if ({}) {{", negate_condition_expr(&cond_expr));
                emit_nodes(eb, depth + 1, ctx, out);
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "}}");
                return;
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "if ({cond_expr}) {{");
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
            trace_sequence(format_args!(
                "emit-while-enter depth={depth} stmt={} cond_sv={cond:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            let cond_expr = resolve_control_cond_expr(cond, ctx);
            trace_sequence(format_args!(
                "emit-while-cond depth={depth} stmt={} cond_sv={cond:?} cond={cond_expr:?}",
                ctx.emit_stmt
            ));
            trace_flow(format_args!(
                "emit-while depth={depth} stmt={} cond={cond_expr:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "while ({}) {{", cond_expr);
            let body_start_stmt = ctx.emit_stmt;
            emit_nodes(body, depth + 1, ctx, out);
            let body_end_stmt = ctx.emit_stmt;
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
            trace_sequence(format_args!(
                "emit-while-exit depth={depth} range={body_start_stmt}..{body_end_stmt} cond={cond_expr:?}"
            ));
        }

        HirNode::DoWhile { body, cond } => {
            trace_sequence(format_args!(
                "emit-dowhile-enter depth={depth} stmt={} cond_sv={cond:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "do {{");
            let body_start_stmt = ctx.emit_stmt;
            emit_nodes(body, depth + 1, ctx, out);
            let body_end_stmt = ctx.emit_stmt;
            trace_sequence(format_args!(
                "emit-dowhile-body-done depth={depth} range={body_start_stmt}..{body_end_stmt} cond_sv={cond:?}"
            ));
            let cond_expr = match resolve_post_body_control_cond_expr(
                cond,
                body_start_stmt,
                body_end_stmt,
                ctx,
            ) {
                Some(expr) => {
                    trace_sequence(format_args!(
                        "emit-dowhile-cond-post-body depth={depth} range={body_start_stmt}..{body_end_stmt} cond={expr:?}"
                    ));
                    expr
                }
                None => {
                    let raw = resolve_control_cond_expr(cond, ctx);
                    let simplified = simplify_condition_expr_text(&raw);
                    trace_sequence(format_args!(
                        "emit-dowhile-cond-fallback depth={depth} range={body_start_stmt}..{body_end_stmt} raw={raw:?} simplified={simplified:?}"
                    ));
                    simplified
                }
            };
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}} while ({});", cond_expr);
            trace_sequence(format_args!(
                "emit-dowhile-exit depth={depth} range={body_start_stmt}..{body_end_stmt} cond={cond_expr:?}"
            ));
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

            trace_sequence(format_args!(
                "emit-for-cond-enter depth={depth} stmt={} cond_sv={cond:?} body_len={}",
                ctx.emit_stmt,
                body.len()
            ));
            let cond_expr = resolve_control_cond_expr(cond, ctx);
            trace_sequence(format_args!(
                "emit-for-cond depth={depth} stmt={} cond_sv={cond:?} cond={cond_expr:?}",
                ctx.emit_stmt
            ));

            let mut body_buf = String::new();
            let body_start_stmt = ctx.emit_stmt;
            emit_nodes(body, depth + 1, ctx, &mut body_buf);
            let body_end_stmt = ctx.emit_stmt;

            let update_idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let update_str = emit_for_clause(update, update_idx, ctx);

            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "for ({}; {}; {}) {{", init_str, cond_expr, update_str);
            out.push_str(&body_buf);
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
            trace_sequence(format_args!(
                "emit-for-exit depth={depth} body_range={body_start_stmt}..{body_end_stmt} update_stmt={update_idx} init={init_str:?} cond={cond_expr:?} update={update_str:?}"
            ));
        }

        HirNode::Switch {
            cond,
            cases,
            default,
            ..
        } => {
            let cond_expr = resolve_sv_expr(cond, ctx);
            let cond_is_char = matches!(
                ctx.var_types
                    .get(cond)
                    .copied()
                    .unwrap_or(PrimitiveType::Unknown),
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
                            let _ =
                                writeln!(out, "case 0x{:X}u:  /* \"{}\" */", v, s.escape_default());
                            let _ =
                                writeln!(out, "case 0x{:X}u:  /* \"{}\" */", v, s.escape_default());
                        } else if let Some(names) = i64::try_from(*v)
                            .ok()
                            .and_then(|value| ctx.pdb_constants_by_value.get(&value))
                        {
                            let _ = writeln!(
                                out,
                                "case {}:  /* {} */",
                                v,
                                names
                                    .iter()
                                    .map(|name| name.as_str())
                                    .collect::<Vec<_>>()
                                    .join(", ")
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
                    if body.is_empty() {
                        // Stacked case label (Batch 9 slice 2 dedup
                        // chain): just emit `case X:` with no body and
                        // no comment — the next iteration will print
                        // the next label, and the terminal case will
                        // carry the shared body.
                    } else {
                        // Explicit fall-through: body runs, then control
                        // intentionally flows into the next case. Surface
                        // the intent with a `/* fall through */` marker.
                        emit_nodes(body, depth + 1, ctx, out);
                        indent(depth + 1, ctx.config.tab_width, out);
                        let _ = writeln!(out, "/* fall through */");
                    }
                } else {
                    emit_nodes(body, depth + 1, ctx, out);
                    if !body_ends_with_terminator(body) {
                        indent(depth + 1, ctx.config.tab_width, out);
                        let _ = writeln!(out, "break;");
                    }
                }
            }
            if let Some(def) = default {
                indent(depth, ctx.config.tab_width, out);
                let _ = writeln!(out, "default:");
                emit_nodes(def, depth + 1, ctx, out);
                if !body_ends_with_terminator(def) {
                    indent(depth + 1, ctx.config.tab_width, out);
                    let _ = writeln!(out, "break;");
                }
            }
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "}}");
        }

        HirNode::Return(Some(sv)) => {
            indent(depth, ctx.config.tab_width, out);
            if ctx.parent_returns_void {
                let _ = writeln!(out, "return;");
            } else {
                let name = resolve_return_expr(sv, ctx);
                let _ = writeln!(out, "return {};", name);
            }
        }

        HirNode::Return(None) => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "{}", nonvoid_or_void_return_text(ctx));
        }

        HirNode::Goto(label) => {
            trace_flow(format_args!(
                "emit-goto depth={depth} stmt={} label={label}",
                ctx.emit_stmt
            ));
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "goto {};", label);
        }

        HirNode::Label(label) => {
            trace_flow(format_args!(
                "emit-label depth={depth} stmt={} label={label}",
                ctx.emit_stmt
            ));
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
            let cond_name = resolve_control_cond_expr(cond, ctx);

            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(
                out,
                "{} = {} ? {} : {};",
                lhs, cond_name, then_expr, else_expr
            );
        }

        HirNode::TailCall { target, args } => {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "{}", format_tail_call_text(*target, args, ctx));
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
                    emit_nodes(body, depth + 1, ctx, out);
                } else if is_catch_all_type(ty) {
                    let _ = writeln!(out, "}} catch (...) {{");
                    emit_nodes(body, depth + 1, ctx, out);
                } else {
                    let captured_c = render_type_as_c(ty);
                    let binding = catch_object_binding(body, ctx);
                    let name = binding.as_ref().map(|b| b.name.as_str()).unwrap_or("e");
                    let _ = writeln!(out, "}} catch ({} {}) {{", captured_c, name);
                    emit_catch_body(body, binding.as_ref(), depth + 1, ctx, out);
                }
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
            ctx.cleanup_depth += 1;
            emit_nodes(finally_body, depth + 1, ctx, out);
            ctx.cleanup_depth -= 1;
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
                        if let Some(sv) = &cap.varnode
                            && let Some(bx) = ctx.byref_boxes.get(&sv.base)
                        {
                            let captured_c = render_type_as_c(&bx.captured_type);
                            return format!("__block {} {}", captured_c, cap.name);
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
/// the trailing `/* <raw> -> dll!sym */` comment text the printer should
/// append to the call statement. Returns `None` for non-CALL insns or when
/// the target VA is not a key in the resolution map.
///
/// The raw import symbol (e.g. `kernel32!HeapAlloc`) is included when the
/// rendered call target had to be sanitised to a valid C identifier
/// (`kernel32_HeapAlloc`): the comment is the only place the original
/// `dll!sym` spelling survives, so a reader can still map it back.
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
    match ctx.symbols.get(&target.offset) {
        Some(raw) if !is_c_identifier(raw) => Some(format!("/* {raw} -> {resolved} */")),
        _ => Some(format!("/* -> {resolved} */")),
    }
}

/// §5.5: If this Call's *target* function was identified by FLIRT,
/// return the trailing `/* flirt: <canonical>@<conf> */` comment text
/// the printer should append at the call site. Returns `None` for
/// non-direct calls, when the FLIRT map is empty, or when the target
/// VA is not a key in the map. Confidence is rendered with two decimal
/// digits (e.g. `1.00`, `0.90`, `0.50`) so the output is byte-stable
/// across runs.
fn flirt_call_comment(insn: &IrInsn, ctx: &PrintCtx) -> Option<String> {
    if !matches!(insn.op, IrOp::Call) {
        return None;
    }
    if ctx.flirt_call_annotations.is_empty() {
        return None;
    }
    let target = insn.inputs.first()?;
    if target.space != SpaceId::Const {
        return None;
    }
    let (name, conf) = ctx.flirt_call_annotations.get(&target.offset)?;
    Some(format!("/* flirt: {}@{:.2} */", name, conf))
}

fn resolve_call_target(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if insn.inputs.is_empty() {
        return "/* unknown */".to_string();
    }
    // t229: when the libc family classifier (`annotate_libc_calls`)
    // recognised this call's target as an alias for a libc function,
    // prefer the canonical lowercase name (`memcpy`, `malloc`) over the
    // raw symbol (`__memcpy_chk`, `_Znwm`). The canonical map is keyed
    // by the Call instruction's VA, which the printer always sees, so
    // both direct (Const target) and indirect (resolved-elsewhere) calls
    // can be rewritten if the annotator decided they classify.
    if let Some(canonical) = ctx.libc_call_canonical.get(&insn.addr) {
        return canonical.clone();
    }
    if let Some(go_name) = ctx.go_iface_devirtualized_calls.get(&insn.addr) {
        return go_name.clone();
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
        None => c_symbol_name(raw),
    }
}

fn c_symbol_name(raw: &str) -> String {
    if is_c_identifier(raw) {
        raw.to_string()
    } else {
        crate::demangle::sanitize_for_c(raw)
    }
}

/// t202 — printf/scanf-family Call rendering with format-inferred casts.
///
/// Returns `Some("printf(\"%d\", (int)x)")`-style output when:
///
///   * The callee is in `printf_type_infer::PRINTF_FAMILY` or `SCANF_FAMILY`.
///   * `inputs[1]` is a `SpaceId::Const` pointer that hits `ctx.string_table`
///     (i.e. a format string literal we can parse).
///
/// Returns `None` otherwise — the caller falls back to the legacy
/// `target()` rendering (which historically drops args anyway, but
/// preserves that behaviour for non-format-string calls).
///
/// Casts are emitted as `(T)expr` where `T` comes from
/// [`unlace_passes::printf_type_infer::infer_printf_arg_types`]. Slots
/// past the inferred-type vector render without a cast — defensive
/// against format strings whose specifier count doesn't match the
/// emitted variadic args (mismatched call sites are a bug, but the
/// printer should still produce valid C).
fn try_emit_printf_call(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> Option<String> {
    if insn.op != IrOp::Call || insn.inputs.is_empty() {
        return None;
    }
    let target_vn = &insn.inputs[0];
    if target_vn.space != SpaceId::Const {
        return None;
    }
    let raw_name = ctx.symbols.get(&target_vn.offset)?;
    let name = demangle_callee_name(raw_name);
    let format_arg_index = printf_format_arg_index(&name)?;
    // Need at least the format-string slot (inputs[1]); a printf with
    // zero variadics is still a valid call and rendered as
    // `printf("hello")` — without args, no casts to emit, but the
    // format-string literal still surfaces.
    let fmt_input_idx = 1 + format_arg_index;
    let fmt_vn = insn.inputs.get(fmt_input_idx)?;
    let display_name = ctx
        .libc_call_canonical
        .get(&insn.addr)
        .cloned()
        .unwrap_or_else(|| name.clone());
    let fmt = if fmt_vn.space == SpaceId::Const {
        ctx.string_table.get(&fmt_vn.offset).cloned()
    } else {
        None
    };
    let inferred = fmt
        .as_deref()
        .map(|fmt| unlace_passes::printf_type_infer::infer_printf_arg_types(&display_name, fmt))
        .unwrap_or_default();
    let hidden_fixed_args = hidden_fortify_arg_indices(&name);

    let mut args: Vec<String> = Vec::with_capacity(insn.inputs.len() - 1);
    for arg_index in 0..format_arg_index {
        if hidden_fixed_args.contains(&arg_index) {
            continue;
        }
        let input_idx = 1 + arg_index;
        if let Some(vn) = insn.inputs.get(input_idx) {
            args.push(emit_operand_resolved(vn, input_idx, stmt_idx, ctx));
        }
    }

    // Render the format-string slot as a quoted C literal.
    match fmt {
        Some(fmt) => args.push(format!("\"{}\"", escape_c_string(&fmt))),
        None => args.push(emit_operand_resolved(fmt_vn, fmt_input_idx, stmt_idx, ctx)),
    }

    // Variadic slots after the format string map onto `inferred[0..]`.
    for (slot, vn) in insn.inputs.iter().enumerate().skip(fmt_input_idx + 1) {
        let expr = emit_operand_resolved(vn, slot, stmt_idx, ctx);
        let variadic_idx = slot - fmt_input_idx - 1;
        let cast = inferred
            .get(variadic_idx)
            .map(render_type_as_c)
            .map(|t| format!("({})", t.trim_end()));
        match cast {
            Some(c) => args.push(format!("{}{}", c, expr)),
            None => args.push(expr),
        }
    }

    Some(format!("{}({})", display_name, args.join(", ")))
}

fn printf_format_arg_index(name: &str) -> Option<usize> {
    if unlace_passes::printf_type_infer::is_format_string_call(name) {
        return Some(match name {
            "fprintf" | "sprintf" | "dprintf" | "asprintf" | "syslog" | "vfprintf" | "vsprintf"
            | "fscanf" | "sscanf" => 1,
            "snprintf" | "vsnprintf" => 2,
            _ => 0,
        });
    }
    match name {
        "__printf_chk" | "__vprintf_chk" => Some(1),
        "__fprintf_chk" => Some(2),
        "__sprintf_chk" | "__vsprintf_chk" => Some(3),
        "__snprintf_chk" => Some(4),
        _ => None,
    }
}

fn hidden_fortify_arg_indices(name: &str) -> &'static [usize] {
    match name {
        "__printf_chk" | "__vprintf_chk" => &[0],
        "__fprintf_chk" => &[1],
        "__sprintf_chk" | "__vsprintf_chk" => &[1, 2],
        "__snprintf_chk" => &[2, 3],
        _ => &[],
    }
}

fn emit_call_args(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    insn.inputs
        .iter()
        .enumerate()
        .skip(1)
        .map(|(i, vn)| emit_call_arg(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ")
}

fn emit_call_arg(vn: &Varnode, raw_idx: usize, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if let Some(arg) = try_stack_address_call_arg(vn, raw_idx, stmt_idx, ctx) {
        return arg;
    }
    emit_operand_resolved(vn, raw_idx, stmt_idx, ctx)
}

fn try_stack_address_call_arg(
    vn: &Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> Option<String> {
    if vn.space == SpaceId::Const {
        return None;
    }
    let offset = resolve_stack_offset_for_addr(vn, Some(raw_idx), stmt_idx, ctx, 0)?;
    let slot = stack_slot_for_offset(offset, vn.size.max(1), ctx)?;
    let addr = stack_slot_address_expr(&slot);
    if slot.is_buffer {
        Some(addr)
    } else {
        Some(format!("&{addr}"))
    }
}

fn emit_direct_call_expr(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    if let Some(printf_call) = try_emit_printf_call(insn, stmt_idx, ctx) {
        return printf_call;
    }
    if ctx.cleanup_depth > 0
        && let Some(dtor_call) = try_emit_cxx_destructor_cleanup_call(insn, stmt_idx, ctx)
    {
        return dtor_call;
    }
    let target = resolve_call_target(insn, stmt_idx, ctx);
    let args = emit_call_args(insn, stmt_idx, ctx);
    format!("{}({})", target, args)
}

fn try_emit_cxx_destructor_cleanup_call(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.op != IrOp::Call || insn.inputs.len() < 2 {
        return None;
    }
    let target = insn.inputs.first()?;
    if target.space != SpaceId::Const {
        return None;
    }
    let raw = ctx.symbols.get(&target.offset)?;
    let demangled = crate::demangle::demangle(raw)?;
    if !demangled.is_dtor {
        return None;
    }
    let class_name = demangled.class_name.as_deref()?;
    let class_name = crate::demangle::sanitize_for_c(class_name);
    let receiver = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
    if insn.inputs.len() == 2 {
        return Some(format!("({})->~{}()", receiver, class_name));
    }

    let extra_args = insn
        .inputs
        .iter()
        .enumerate()
        .skip(2)
        .map(|(i, vn)| emit_operand_resolved(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ");
    Some(format!(
        "/* cleanup destructor */ ({})->~{}(/* extra */ {})",
        receiver, class_name, extra_args
    ))
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
///   `Return(None)` after the tail call, so we don't add a
///   second `return;` here (which would render as the ugly
///   `callee(); return; return;` triple).
///
/// The callee is resolved against the symbol table (with demangling) so the
/// emitted form matches the rest of the pretty-printer's call sites instead
/// of the previous `((unsigned long long (*)(void))0x…)()` cast.
fn format_tail_call_text(
    target: u64,
    args: &[unlace_struct::hir::HirCallArg],
    ctx: &mut PrintCtx,
) -> String {
    let name = tail_call_target_name(target, ctx);
    let args = args
        .iter()
        .map(|arg| format_tail_call_arg(arg, ctx))
        .collect::<Vec<_>>()
        .join(", ");
    if ctx.parent_returns_void {
        format!("{}({});", name, args)
    } else {
        format!("return {}({});", name, args)
    }
}

fn format_tail_call_arg(arg: &unlace_struct::hir::HirCallArg, ctx: &mut PrintCtx) -> String {
    if let Some(sv) = arg.ssa {
        return ctx.name_of(&sv);
    }
    emit_operand_with_prec(
        &arg.operand,
        0,
        u32::MAX,
        ConstContext::Signed,
        ParentCtx::top(),
        ctx,
    )
}

// ---------------------------------------------------------------------------
// CALLIND complex cast emission (P7-18)
// ---------------------------------------------------------------------------

/// Render a recognised C++ virtual dispatch: `obj->speak(args)` when RTTI
/// named the slot's method, `obj->__vftable->method_N(args)` otherwise.
///
/// `inputs[0]` is the method pointer. When the dispatch carries no traced
/// receiver, `inputs[1]` is taken as the receiver; any further inputs are
/// ordinary arguments.
fn emit_virtual_call(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> Option<String> {
    let Some(TargetSet::VtableSlot {
        receiver,
        slot_idx,
        method,
        ..
    }) = ctx.vtable_call_targets.get(&insn.addr).cloned()
    else {
        return None;
    };
    let receiver = match receiver {
        Some(sv) => resolve_sv_expr(&sv, ctx),
        None if insn.inputs.len() >= 2 => emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx),
        None => "this".to_string(),
    };
    // `->` binds like `[]`, so a deref/cast receiver needs parentheses.
    let receiver = paren_if_non_atomic_base(&receiver);
    let args = insn
        .inputs
        .iter()
        .enumerate()
        .skip(2)
        .map(|(i, vn)| emit_operand_resolved(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ");
    Some(match method {
        Some(method) => format!("{receiver}->{method}({args})"),
        None => format!("{receiver}->__vftable->method_{slot_idx}({args})"),
    })
}

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

    if let Some(call) = emit_virtual_call(insn, stmt_idx, ctx) {
        return call;
    }

    // t201: when this call site is in the auth-call annotation table,
    // render the IDA-cast form as a `__builtin_arm_authcall` intrinsic
    // instead. The builtin signature is
    // `__builtin_arm_authcall(target, key, discriminator)` — keys 0..=3
    // map IA / IB / DA / DB, the discriminator is the 15-bit constant
    // recovered from the dyld v5 chain entry.
    if let Some(ann) = ctx.auth_calls.get(&insn.addr).copied() {
        return format!(
            "__builtin_arm_authcall({}, /*key=*/{}, /*disc=*/{:#x})",
            target, ann.key, ann.diversifier
        );
    }

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

    if let Some(short) = try_emit_increment_form(insn, stmt_idx, &lhs, ctx) {
        return short;
    }

    if let Some(short) = try_emit_compound_assign(insn, stmt_idx, &lhs, ctx) {
        return short;
    }

    let rhs = emit_expr(insn, stmt_idx, ctx);
    format!("{} = {}", lhs, rhs)
}

fn stmt_output_sv(ctx: &PrintCtx, stmt_idx: u32) -> Option<SsaVarnode> {
    ctx.stmt_outputs.get(&stmt_idx).copied().flatten()
}

fn stmt_input_sv(ctx: &PrintCtx, stmt_idx: u32, raw_idx: usize) -> Option<SsaVarnode> {
    ctx.stmt_input_slot_lookup
        .get(&(stmt_idx, raw_idx))
        .copied()
        .or_else(|| {
            ctx.stmt_input_slots
                .get(&stmt_idx)
                .and_then(|inputs| inputs.get(&raw_idx).copied())
        })
        .or_else(|| {
            ctx.stmt_inputs
                .get(&stmt_idx)
                .and_then(|inputs| inputs.get(raw_idx).copied())
        })
}

fn stmt_has_ssa_identity(ctx: &PrintCtx, stmt_idx: u32) -> bool {
    ctx.stmt_outputs.contains_key(&stmt_idx)
        || ctx
            .stmt_input_slots
            .get(&stmt_idx)
            .is_some_and(|inputs| !inputs.is_empty())
}

fn input_is_statement_output(
    insn: &IrInsn,
    stmt_idx: u32,
    input_idx: usize,
    ctx: &PrintCtx,
) -> bool {
    let output_sv = stmt_output_sv(ctx, stmt_idx);
    let input_sv = stmt_input_sv(ctx, stmt_idx, input_idx);
    if stmt_has_ssa_identity(ctx, stmt_idx) {
        let matched = output_sv.is_some() && input_sv == output_sv;
        if !matched {
            tracing::debug!(target: "unlace::cprinter",
                "self-update stmt={stmt_idx} input={input_idx} decision=reject-ssa-mismatch raw_in={:?} raw_out={:?} input_sv={input_sv:?} output_sv={output_sv:?}",
                insn.inputs.get(input_idx),
                insn.output,
            );
        }
        matched
    } else {
        insn.inputs.get(input_idx).copied() == insn.output
    }
}

/// Like [`input_is_statement_output`] but matches on the *base* varnode,
/// ignoring the SSA version. A self-update such as a for-loop counter
/// `i = i + 1` reads version N and writes version N+1 of the same base, so the
/// version-exact check rejects it; for the increment / compound-assignment
/// contraction we only need to know the same storage is read and written.
fn input_base_is_statement_output(
    insn: &IrInsn,
    stmt_idx: u32,
    input_idx: usize,
    ctx: &PrintCtx,
) -> bool {
    if input_is_statement_output(insn, stmt_idx, input_idx, ctx) {
        return true;
    }
    let output_sv = stmt_output_sv(ctx, stmt_idx);
    let input_sv = stmt_input_sv(ctx, stmt_idx, input_idx);
    match (input_sv, output_sv) {
        (Some(i), Some(o)) => i.base == o.base,
        _ => insn.inputs.get(input_idx).copied() == insn.output,
    }
}

fn try_emit_increment_form(
    insn: &IrInsn,
    stmt_idx: u32,
    lhs: &str,
    ctx: &PrintCtx,
) -> Option<String> {
    if insn.inputs.len() != 2 {
        return None;
    }
    let (counter_idx, const_in) = match (insn.inputs[0].space, insn.inputs[1].space) {
        (SpaceId::Const, _) => (1, &insn.inputs[0]),
        (_, SpaceId::Const) => (0, &insn.inputs[1]),
        _ => return None,
    };
    if !input_base_is_statement_output(insn, stmt_idx, counter_idx, ctx) {
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
    let counter_is_first = input_base_is_statement_output(insn, stmt_idx, 0, ctx);
    let counter_is_second = input_base_is_statement_output(insn, stmt_idx, 1, ctx);

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
        let counter_sv = stmt_input_sv(ctx, stmt_idx, counter_idx).or_else(|| {
            ctx.stmt_inputs
                .get(&stmt_idx)
                .and_then(|inputs| inputs.iter().find(|sv| sv.base == *counter_vn).copied())
        });
        if let Some(csv) = counter_sv
            && ctx.sv_defining_stmt.contains_key(&csv)
        {
            return None;
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
    let trimmed = trimmed.trim_start_matches(['r', 'n', 'N', 'o', 'O', 'R', 'V']);
    match trimmed {
        "c" => return "char".into(),
        "C" => return "_BYTE".into(),
        "s" => return "__int16".into(),
        "S" => return "_WORD".into(),
        "i" => return "int".into(),
        "I" => return "_DWORD".into(),
        "l" => return "int".into(),
        "L" => return "_DWORD".into(),
        "q" => return "__int64".into(),
        "Q" => return "_QWORD".into(),
        "f" => return "float".into(),
        "d" => return "double".into(),
        "B" => return "_BOOL".into(),
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
        if let Some(class) = rest.strip_prefix('"').and_then(|s| s.strip_suffix('"'))
            && !class.is_empty()
            && !class.starts_with('<')
        {
            return format!("{}*", class);
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

    if let Some(body) = trimmed.strip_prefix('{').and_then(|s| s.strip_suffix('}'))
        && let Some(name) = body.split('=').next()
        && !name.is_empty()
        && name != "?"
    {
        return format!("struct {}", name);
    }
    if let Some(body) = trimmed.strip_prefix('(').and_then(|s| s.strip_suffix(')'))
        && let Some(name) = body.split('=').next()
        && !name.is_empty()
        && name != "?"
    {
        return format!("union {}", name);
    }

    if let Some(width) = trimmed.strip_prefix('b')
        && !width.is_empty()
        && width.chars().all(|c| c.is_ascii_digit())
    {
        return format!("unsigned int /* :{} */", width);
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
    // t147 / t224: ObjC class layouts are wired into the preamble emitter at
    // the top of `print_c_with_annotations` via `PrinterAnnotations::objc_classes`.
    // The companion `emit_inferred_struct_preamble` below handles the
    // SSA-recovered stack-frame and array-of-structs layouts.
    Some(out)
}

/// Render a preamble block of `struct __anon<N> { ... };` declarations for
/// every composite type recovered on the [`SsaFunction`]:
///
/// * [`SsaFunction::inferred_structs`] — stack-frame composites synthesised
///   from adjacent same-typed stack slots by `StackVarRecoveryPass` (t147),
///   keyed by RSP-relative starting offset.
/// * [`SsaFunction::array_struct_layouts`] — heap / global / parameter-pointer
///   structs recovered from array-of-structs access patterns inside natural
///   loops by `struct_field_recovery::recover_structs` (t213), keyed by the
///   base-pointer SSA varnode.
///
/// One `struct __anon0 { … };` block is emitted per layout, numbered in the
/// fixed order above (stack-frame composites first, then array layouts).
/// Field names use the byte-offset convention `field_<offset>` so the layout
/// is self-describing without leaking the synthesised internal name.
///
/// Returns an empty string when both maps are empty, so callers can splice
/// the result unconditionally and only emit a trailing blank line when the
/// preamble is non-empty.
pub fn emit_inferred_struct_preamble(func: &SsaFunction) -> String {
    if func.inferred_structs.is_empty() && func.array_struct_layouts.is_empty() {
        return String::new();
    }

    let mut out = String::new();
    let mut idx: usize = 0;

    // Stack-frame composites (t147).  `inferred_structs` stores `Type::Struct`
    // values whose field names are sequential (`field_0`, `field_1`, …) but
    // whose `offset` is a true byte offset.  We re-emit with offset-based
    // names so the rendered struct is self-describing.
    for ty in func.inferred_structs.values() {
        if let Type::Struct { fields, .. } = ty {
            let _ = writeln!(out, "struct __anon{idx} {{");
            for f in fields {
                let _ = writeln!(
                    out,
                    "    {};",
                    render_type_decl_as_c(&f.ty, &format!("field_{}", f.offset))
                );
            }
            let _ = writeln!(out, "}};");
            idx += 1;
        }
    }

    // Array-of-structs layouts (t213).  `InferredStruct` carries raw
    // `(offset, access_width)` pairs; pick a primitive integer type of the
    // matching width so the rendered field has a concrete C type.
    for layout in func.array_struct_layouts.values() {
        let _ = writeln!(out, "struct __anon{idx} {{");
        for field in &layout.fields {
            let ty = primitive_for_width(field.size);
            let _ = writeln!(out, "    {} field_{};", ty, field.offset);
        }
        let _ = writeln!(out, "}};");
        idx += 1;
    }

    out
}

/// Companion to [`emit_inferred_struct_preamble`]: return the
/// `__anon<N>` index assigned to every entry in
/// `SsaFunction::array_struct_layouts`, using the *same* enumeration
/// order as the preamble emitter (stack-frame composites first, then
/// array layouts in BTreeMap order).
///
/// The c_printer's `try_array_struct_field_access` (t231) consumes this
/// map to render typed accesses as `arr<N>[i].field_<offset>` whose
/// `<N>` matches the `struct __anon<N>` declared at the top of the
/// function.
pub fn compute_array_struct_indices(func: &SsaFunction) -> BTreeMap<SsaVarnode, usize> {
    let mut out = BTreeMap::new();
    let mut idx: usize = 0;
    // Stack-frame composites (t147) — count one slot each. Their iteration
    // order must mirror `emit_inferred_struct_preamble`.
    for ty in func.inferred_structs.values() {
        if matches!(ty, Type::Struct { .. }) {
            idx += 1;
        }
    }
    // Array-of-struct layouts (t213).
    for base in func.array_struct_layouts.keys() {
        out.insert(*base, idx);
        idx += 1;
    }
    out
}

/// Map an access width (in bytes) to a C primitive type name used in the
/// inferred-struct preamble.  Widths outside the recognised set fall back to
/// `__int64`, matching the conservative-widening convention used elsewhere
/// in the printer for unrecovered scalar types.
fn primitive_for_width(width: u8) -> &'static str {
    match width {
        1 => "char",
        2 => "__int16",
        4 => "int",
        8 => "__int64",
        16 => "__int128",
        _ => "__int64",
    }
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

fn cxx_eh_action_comment(action: unlace_passes::cxx_eh::CxxEhAction) -> &'static str {
    use unlace_passes::cxx_eh::CxxEhAction;
    match action {
        CxxEhAction::BeginCatch => "catch",
        CxxEhAction::EndCatch => "end catch",
        CxxEhAction::UnwindResume => "unwind resume",
        CxxEhAction::Throw | CxxEhAction::Rethrow | CxxEhAction::MsvcThrow => "throw",
        CxxEhAction::AllocateException => "allocate exception",
        CxxEhAction::FreeException => "free exception",
        CxxEhAction::GetExceptionPtr => "get exception ptr",
        CxxEhAction::CurrentExceptionType => "current exception type",
        CxxEhAction::BadCast => "bad cast",
        CxxEhAction::BadTypeid => "bad typeid",
        CxxEhAction::DynamicCast => "dynamic cast",
        CxxEhAction::PureVirtual => "pure virtual",
        CxxEhAction::DeletedVirtual => "deleted virtual",
        CxxEhAction::GuardAcquire => "guard acquire",
        CxxEhAction::GuardRelease => "guard release",
        CxxEhAction::GuardAbort => "guard abort",
        CxxEhAction::Personality => "C++ EH personality",
        CxxEhAction::MsvcFrameHandler => "MSVC C++ frame handler",
    }
}

fn cxx_eh_action_for_call(
    insn: &IrInsn,
    ctx: &PrintCtx,
) -> Option<unlace_passes::cxx_eh::CxxEhAction> {
    if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
        return None;
    }
    if let Some(action) = ctx.cxx_eh_actions.get(&insn.addr).copied() {
        return Some(action);
    }

    if insn.op != IrOp::Call || insn.inputs.is_empty() {
        return None;
    }
    let target = &insn.inputs[0];
    if target.space != SpaceId::Const {
        return None;
    }
    let name = ctx.symbols.get(&target.offset)?;
    unlace_passes::cxx_eh::classify_eh_call(name)
}

fn cxa_call_annotation(insn: &IrInsn, ctx: &PrintCtx) -> Option<&'static str> {
    cxx_eh_action_for_call(insn, ctx).map(cxx_eh_action_comment)
}

fn inline_statement_text(insn: &IrInsn, ctx: &mut PrintCtx) -> Option<String> {
    let _span = cprinter_detail_phase("cprinter.emit.inline-statement");
    let idx = ctx.emit_stmt;
    tracing::debug!(target: "unlace::cprinter",
        "inline stmt={idx} addr=0x{:x} op={:?} enter output={:?}",
        insn.addr,
        insn.op,
        ctx.stmt_outputs.get(&idx).copied().flatten()
    );
    if ctx.source_map.contains_key(&insn.addr) {
        tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=defer-source-map");
        return None;
    }
    if ctx.commented_stmts.contains(&idx) || ctx.line_comments.contains_key(&insn.addr) {
        tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=defer-comment");
        return None;
    }
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && (ctx.panic_sites.contains_key(&insn.addr) || cxa_call_annotation(insn, ctx).is_some())
    {
        return None;
    }
    // t262 — when a libc-canonicalized Call has an origin comment to
    // emit, defer to emit_statement so the comment goes on its own
    // line above the call rather than inline.
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && let Some(canonical) = ctx.libc_call_canonical.get(&insn.addr)
        && let Some(original) = ctx.libc_call_original.get(&insn.addr)
        && canonical != original
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
    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).copied()
        && let Some(plan) = ctx.hoist_decl_plan.get(&sv.base)
        && plan.stmt_idx == idx
        && plan.fold_into_assignment
    {
        return None;
    }

    ctx.emit_stmt += 1;
    if ctx.foldable_stmts.contains(&idx)
        || is_dead_zero_init(insn, idx, ctx)
        || is_dead_suppressible_store(insn, idx, ctx)
        || is_dead_suppressed_stack_load(insn, idx, ctx)
        || is_stack_canary_compare_artifact(insn, idx, ctx)
    {
        tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=suppress-fold-dead");
        return Some(String::new());
    }

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned() {
        if is_x86_frame_base_update(insn, &sv.base) {
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=suppress-frame-base");
            return Some(String::new());
        }
        if is_control_only_condition_assignment(idx, &sv, insn, ctx) {
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=suppress-control-cond");
            return Some(String::new());
        }
        // A void-returning runtime helper (e.g. `__stack_chk_fail`) must never
        // be rendered as an assignment RHS even when its spurious return-reg
        // output appears live — the C prototype is `void`. Drop the LHS and
        // emit the bare call statement.
        if call_targets_void_runtime_symbol(insn, ctx) {
            let call = if insn.op == IrOp::Callind {
                emit_callind_cast(insn, idx, ctx)
            } else {
                emit_direct_call_expr(insn, idx, ctx)
            };
            return Some(format!("{};", call));
        }
        if matches!(insn.op, IrOp::Call | IrOp::Callind)
            && ctx.sv_use_counts.get(&sv).copied().unwrap_or(0) == 0
            && !has_later_alias_use(&sv.base, idx, ctx)
        {
            let call = if insn.op == IrOp::Callind {
                emit_callind_cast(insn, idx, ctx)
            } else if let Some(bracket) = objc_bracket_call(insn, ctx) {
                bracket
            } else {
                emit_direct_call_expr(insn, idx, ctx)
            };
            return Some(format!("{};", call));
        }
        let lhs = ctx.name_of(&sv);
        if let Some(short) = try_emit_increment_form(insn, idx, &lhs, ctx) {
            let rendered = format!("{};", short);
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
            Some(rendered)
        } else if let Some(short) = try_emit_compound_assign(insn, idx, &lhs, ctx) {
            let rendered = format!("{};", short);
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
            Some(rendered)
        } else if insn.op == IrOp::Call {
            if let Some(bracket) = objc_bracket_call(insn, ctx) {
                let rendered = format_inline_assignment(idx, &sv, &lhs, bracket, ctx);
                tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
                Some(rendered)
            } else {
                let rhs = emit_direct_call_expr(insn, idx, ctx);
                let rendered = format_inline_assignment(idx, &sv, &lhs, rhs, ctx);
                tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
                Some(rendered)
            }
        } else {
            let rhs = emit_expr(insn, idx, ctx);
            let rendered = format_inline_assignment(idx, &sv, &lhs, rhs, ctx);
            tracing::debug!(target: "unlace::cprinter", "inline stmt={idx} decision=emit text={rendered}");
            Some(rendered)
        }
    } else {
        match insn.op {
            IrOp::Store if insn.inputs.len() >= 3 => {
                if is_suppressed_stack_access(&insn.inputs[1], Some(1), idx, ctx) {
                    return Some(String::new());
                }
                let store_size = insn.inputs[2].size;
                let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                if let Some(local) =
                    try_stack_frame_access_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                {
                    Some(format!("{} = {};", local, val))
                } else if let Some(global) =
                    try_global_var_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                {
                    Some(format!("{} = {};", global, val))
                } else if let Some(field_expr) =
                    try_typed_access(&insn.inputs[1], idx, store_size, ctx)
                {
                    Some(format!("{} = {};", field_expr, val))
                } else if let Some(field_expr) =
                    try_array_struct_field_access(&insn.inputs[1], idx, store_size, ctx)
                {
                    // t231: see the matching hook in `emit_statement` —
                    // `inline_statement_text` is the parallel codepath
                    // used when adjacent stmts get grouped on one line.
                    Some(format!("{} = {};", field_expr, val))
                } else if let Some(sub) = try_array_subscript(&insn.inputs[1], idx, store_size, ctx)
                {
                    // Batch 11 slice 2: route subscript stores through CExpr.
                    let lhs = CExpr::index(CExpr::lit(sub.base), CExpr::lit(sub.index));
                    Some(format!("{} = {};", lhs, val))
                } else {
                    let addr = emit_memory_address_operand(&insn.inputs[1], 1, idx, ctx);
                    // Batch 11 slice 2: route `*(T*)(addr) = val` stores
                    // through CExpr — `Deref(Cast(T*, addr))` renders
                    // byte-identically for simple addr expressions and gets
                    // correct parens when future passes produce non-atomic
                    // addresses.
                    let lhs = CExpr::deref(CExpr::cast(ida_ptr_type(store_size), CExpr::lit(addr)));
                    Some(format!("{} = {};", lhs, val))
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
                    format!("{};", emit_direct_call_expr(insn, idx, ctx))
                };
                let mut s = base;
                if let Some(c) = forwarded_call_comment(insn, ctx) {
                    s.push(' ');
                    s.push_str(&c);
                }
                // §5.5: FLIRT-recognised callee → `/* flirt: <name>@<conf> */`.
                if let Some(c) = flirt_call_comment(insn, ctx) {
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
                // A vtable tail-call (`jmp *(*(obj) + N)`) returns the
                // virtual call's result.
                if let Some(call) = emit_virtual_call(insn, idx, ctx) {
                    return Some(format!("return {call};"));
                }
                let target = insn.inputs.first().map_or_else(
                    || "0".to_string(),
                    |input| emit_operand_resolved(input, 0, idx, ctx),
                );
                Some(format!("JUMPOUT({});", target))
            }
            // A dead scalar value op (IntAdd/IntSlessequal/Copy/…) that
            // reached this no-output branch had its result folded into a
            // consumer (or the consumer was DCE'd, e.g. a suppressed
            // CSEL-family intrinsic). Suppress it rather than leaking a
            // side-effect-free `__unlace_int_*` / `__unlace_copy` statement.
            _ if is_dead_no_output_scalar_op(insn, idx, ctx) => {
                tracing::debug!(target: "unlace::cprinter",
                    "inline stmt={idx} decision=suppress-dead-pure-no-output op={:?}",
                    insn.op
                );
                Some(String::new())
            }
            // Batch 19 DOD: unsupported statement-level opcodes render as
            // an annotated helper call (preserves opcode name + operand
            // dataflow) instead of a comment-only `/* OP */;` placeholder.
            _ => Some(format!("{};", emit_unsupported_op_helper(insn, idx, ctx))),
        }
    }
}

fn has_later_alias_use(base: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    ctx.stmt_inputs
        .range((stmt_idx + 1)..)
        .any(|(_, inputs)| inputs.iter().any(|sv| aliases(sv.base, *base)))
        || ctx
            .cond_use_stmts
            .iter()
            .any(|(sv, use_stmt)| *use_stmt > stmt_idx && aliases(sv.base, *base))
}

fn format_inline_assignment(
    idx: u32,
    sv: &SsaVarnode,
    lhs: &str,
    rhs: String,
    ctx: &PrintCtx,
) -> String {
    if let Some((decl_prefix, decl_trailer)) = hoisted_decl_for_stmt(idx, sv, ctx) {
        format!("{decl_prefix}{lhs} = {rhs}{decl_trailer}")
    } else {
        format!("{lhs} = {rhs};")
    }
}

/// If statement `idx` is the hoist-decl anchor for the variable written by
/// `sv`, return `(prefix, terminator)` where:
///   * `prefix` is `"<type> "` to prepend to the assignment LHS, and
///   * `terminator` is `";"` followed by an optional ` // <location>` comment
///     mirroring the function-top declaration block's annotation.
fn hoisted_decl_for_stmt(idx: u32, sv: &SsaVarnode, ctx: &PrintCtx) -> Option<(String, String)> {
    let plan = ctx.hoist_decl_plan.get(&sv.base)?;
    if plan.stmt_idx != idx || !plan.fold_into_assignment {
        trace_hoist_text(format_args!(
            "stmt={idx} sv={sv:?} decision=skip-anchor plan={plan:?}"
        ));
        return None;
    }
    if ctx
        .var_names
        .get(sv)
        .is_some_and(|name| ctx.top_declared_names.contains(name))
    {
        trace_hoist_text(format_args!(
            "stmt={idx} sv={sv:?} decision=skip-top-declared name={:?}",
            ctx.var_names.get(sv)
        ));
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
    trace_hoist_text(format_args!(
        "stmt={idx} sv={sv:?} decision=emit prefix={prefix:?} terminator={terminator:?}"
    ));
    Some((prefix, terminator))
}

fn emit_statement(insn: &IrInsn, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let _span = cprinter_detail_phase("cprinter.emit.statement");
    let idx = ctx.emit_stmt;
    ctx.emit_stmt += 1;
    trace_flow(format_args!(
        "emit-statement-enter depth={depth} stmt={idx} addr=0x{:x} op={:?} output={:?}",
        insn.addr,
        insn.op,
        ctx.stmt_outputs.get(&idx).copied().flatten()
    ));

    if ctx.foldable_stmts.contains(&idx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=foldable"
        ));
        return;
    }

    if is_dead_zero_init(insn, idx, ctx) || is_dead_suppressible_store(insn, idx, ctx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=dead-or-suppressible"
        ));
        return;
    }

    // Drop dead-output AArch64 conditional-select intrinsics (CSEL family):
    // pure value computations into a register that's never read again.
    if is_dead_suppressible_csel(insn, idx, ctx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=dead-csel"
        ));
        return;
    }

    if is_stack_canary_compare_artifact(insn, idx, ctx) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=stack-canary"
        ));
        return;
    }

    if let Some(Some(sv)) = ctx.stmt_outputs.get(&idx).cloned()
        && is_control_only_condition_assignment(idx, &sv, insn, ctx)
    {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=control-cond"
        ));
        return;
    }

    // t264 — when DWARF/PDB line-number info maps this instruction
    // back to a source file:line, emit it as a leading provenance
    // comment. Format is `// file.c:42` to match the task spec; the
    // comment is purely informational and survives only when debug
    // info was present in the original binary.
    if let Some(loc) = ctx.source_map.get(&insn.addr) {
        indent(depth, ctx.config.tab_width, out);
        let _ = writeln!(out, "// {}:{}", loc.file, loc.line);
    }

    if let Some(comment) = ctx.line_comments.get(&insn.addr).cloned() {
        for line in comment.lines() {
            indent(depth, ctx.config.tab_width, out);
            let _ = writeln!(out, "// {}", line);
        }
    }

    // t262 — when a Call's canonical libc name differs from the
    // original (binary's import-table) name, prepend a leading
    // comment so a reader can map the rendered `memcpy(...)` back to
    // the actual binary symbol (`__memcpy_chk`, `_Znwm`, …). Skipped
    // when the names match — no information to surface.
    if matches!(insn.op, IrOp::Call | IrOp::Callind)
        && let Some(canonical) = ctx.libc_call_canonical.get(&insn.addr).cloned()
        && let Some(original) = ctx.libc_call_original.get(&insn.addr).cloned()
        && canonical != original
    {
        indent(depth, ctx.config.tab_width, out);
        let _ = writeln!(out, "// {}(...) — recognized from {}", canonical, original);
    }

    let out_sv = ctx.stmt_outputs.get(&idx).copied().flatten();
    if out_sv.is_some_and(|sv| is_x86_frame_base_update(insn, &sv.base)) {
        trace_flow(format_args!(
            "emit-statement-skip stmt={idx} reason=frame-base"
        ));
        return;
    }
    if out_sv.is_some() && is_dead_suppressed_stack_load(insn, idx, ctx) {
        return;
    }

    indent(depth, ctx.config.tab_width, out);

    if let Some(sv) = out_sv {
        // A call to a void-returning runtime helper (e.g. `__stack_chk_fail`)
        // may carry a spurious IR output varnode for the clobbered return
        // register, but its C prototype is `void`. Emitting `v = f();` is a
        // hard type error, so render the bare call statement instead.
        if call_targets_void_runtime_symbol(insn, ctx) {
            let expr = if insn.op == IrOp::Callind {
                emit_callind_cast(insn, idx, ctx)
            } else {
                emit_direct_call_expr(insn, idx, ctx)
            };
            let _ = writeln!(out, "{};", expr);
            return;
        }
        let lhs = ctx.name_of(&sv);
        if c_printer_name_trace_enabled() {
            let input_names: Vec<String> = ctx
                .stmt_input_slots
                .get(&idx)
                .map(|slots| {
                    slots
                        .iter()
                        .map(|(raw_idx, input_sv)| {
                            format!(
                                "{raw_idx}:{input_sv:?}:{:?}",
                                known_name_of_sv(ctx, input_sv)
                            )
                        })
                        .collect()
                })
                .unwrap_or_default();
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-stmt stmt={idx} addr=0x{:x} op={:?} output={sv:?} lhs={lhs} inputs=[{}]",
                insn.addr,
                insn.op,
                input_names.join(", ")
            );
        }

        if matches!(insn.op, IrOp::Call | IrOp::Callind)
            && let Some(ann) = cxa_call_annotation(insn, ctx)
        {
            let _ = writeln!(out, "/* {} */", ann);
            indent(depth, ctx.config.tab_width, out);
        }

        // CSEL family → ternary assignment (ARM64 conditional select).
        // The false branch is transformed per the specific intrinsic:
        // CSEL → Rm, CSINC → Rm+1, CSINV → ~Rm, CSNEG → -Rm.
        if let Some(tag) = csel_callother_tag(insn) {
            let cond = emit_operand_resolved(&insn.inputs[1], 1, idx, ctx);
            let true_val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
            let false_operand = emit_operand_resolved(&insn.inputs[3], 3, idx, ctx);
            let false_val = csel_false_value_expr(tag, &false_operand);
            // Parenthesise a transformed (non-identity) false branch so the
            // ternary alternative parses unambiguously, e.g. `... : (a4 + 1)`.
            let false_rendered = if tag == 0x330 {
                false_val
            } else {
                format!("({false_val})")
            };
            let _ = writeln!(
                out,
                "{} = {} ? {} : {};",
                lhs, cond, true_val, false_rendered
            );
        } else if let Some(short) = try_emit_increment_form(insn, idx, &lhs, ctx) {
            let _ = writeln!(out, "{};", short);
        } else if let Some(short) = try_emit_compound_assign(insn, idx, &lhs, ctx) {
            let _ = writeln!(out, "{};", short);
        } else {
            let rhs = emit_expr(insn, idx, ctx);
            trace_assignment_render(idx, insn, &sv, &lhs, &rhs, ctx);
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
                    if is_suppressed_stack_access(&insn.inputs[1], Some(1), idx, ctx) {
                        return;
                    }
                    let store_size = insn.inputs[2].size;
                    let val = emit_operand_resolved(&insn.inputs[2], 2, idx, ctx);
                    if let Some(local) =
                        try_stack_frame_access_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", local, val);
                    } else if let Some(global) =
                        try_global_var_name(&insn.inputs[1], Some(1), idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", global, val);
                    } else if let Some(field_expr) =
                        try_typed_access(&insn.inputs[1], idx, store_size, ctx)
                    {
                        let _ = writeln!(out, "{} = {};", field_expr, val);
                    } else if let Some(field_expr) =
                        try_array_struct_field_access(&insn.inputs[1], idx, store_size, ctx)
                    {
                        // t231: array-of-struct typed write — pre-empts
                        // both the generic struct-field and array-subscript
                        // paths so per-element field stores render as
                        // `arr<N>[i].field_<offset> = val;`.
                        let _ = writeln!(out, "{} = {};", field_expr, val);
                    } else if let Some(sub) =
                        try_array_subscript(&insn.inputs[1], idx, store_size, ctx)
                    {
                        // Batch 11 slice 2: route subscript stores through CExpr.
                        let lhs = CExpr::index(CExpr::lit(sub.base), CExpr::lit(sub.index));
                        let _ = writeln!(out, "{} = {};", lhs, val);
                    } else {
                        let addr = emit_memory_address_operand(&insn.inputs[1], 1, idx, ctx);
                        let cast = ida_ptr_type(store_size);
                        // t259: surface MMIO writes by qualifying the cast.
                        let is_mmio = insn.inputs[1].space == SpaceId::Const
                            && ctx.mmio_addrs.contains(&insn.inputs[1].offset);
                        // Batch 11 slice 2: route `*(T*)(addr) = val` stores
                        // through CExpr.  The `volatile` qualifier is folded
                        // into the cast type string (CExpr::Cast is opaque on
                        // the type spelling).
                        let cast_ty = if is_mmio {
                            format!("volatile {}", cast)
                        } else {
                            cast.to_string()
                        };
                        let lhs = CExpr::deref(CExpr::cast(cast_ty, CExpr::lit(addr)));
                        let _ = writeln!(out, "{} = {};", lhs, val);
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
                // §5.5: FLIRT match comment (direct-call only; the helper
                // gates on IrOp::Call internally so Callind is a no-op).
                let flirt = flirt_call_comment(insn, ctx);
                let trailing: String = [fwd, flirt]
                    .into_iter()
                    .flatten()
                    .map(|c| format!(" {}", c))
                    .collect();
                if insn.op == IrOp::Callind {
                    let expr = emit_callind_cast(insn, idx, ctx);
                    let _ = writeln!(out, "{};{}", expr, trailing);
                } else {
                    let expr = emit_direct_call_expr(insn, idx, ctx);
                    let _ = writeln!(out, "{};{}", expr, trailing);
                }
            }
            IrOp::Unimplemented => {
                let _ = writeln!(out, "__unknown_insn_0x{:X}();", insn.addr);
            }
            IrOp::Callother => {
                // A pure AArch64 conditional-select intrinsic (CSEL family)
                // that reached the no-output branch has no live consumer for
                // its destination register — it is dead. Drop it (mirroring
                // IDA's DCE) so we don't leak a raw `__csinv__(...)` /
                // `__csneg__(...)` statement, and so the predicate comparison
                // that fed it can also retire instead of orphaning as a
                // standalone `__unlace_int_*` call.
                if is_csel_callother(insn) {
                    trace_flow(format_args!(
                        "emit-statement-skip stmt={idx} reason=dead-csel-no-output"
                    ));
                    return;
                }
                let expr = emit_callother(insn, idx, ctx);
                if is_cmov_callother(insn) {
                    let _ = writeln!(out, "{}", expr);
                } else {
                    let _ = writeln!(out, "{};", expr);
                }
            }
            IrOp::Branchind => {
                if let Some(call) = emit_virtual_call(insn, idx, ctx) {
                    let _ = writeln!(out, "return {call};");
                } else {
                    let target = if !insn.inputs.is_empty() {
                        emit_operand_resolved(&insn.inputs[0], 0, idx, ctx)
                    } else {
                        "0".to_string()
                    };
                    let _ = writeln!(out, "JUMPOUT({});", target);
                }
            }
            // Batch 19 DOD: emit an annotated helper call (preserves
            // opcode name + operand dataflow) rather than a comment-only
            // placeholder that would silently drop inputs.
            _ => {
                // A dead scalar value op (IntAdd/IntSlessequal/Copy/…) that
                // reached this no-output branch had its result folded into a
                // consumer (or its consumer was DCE'd — e.g. a suppressed
                // CSEL-family intrinsic), leaving only this orphan. Emitting
                // `__unlace_int_slessequal(...)` / `__unlace_copy(...)` would
                // be a side-effect-free statement with no observable result,
                // so drop it. Exotic ops still render their helper call.
                if is_dead_no_output_scalar_op(insn, idx, ctx) {
                    trace_flow(format_args!(
                        "emit-statement-skip stmt={idx} reason=dead-pure-no-output op={:?}",
                        insn.op
                    ));
                    return;
                }
                let call = emit_unsupported_op_helper(insn, idx, ctx);
                let _ = writeln!(out, "{call};");
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Operator precedence — IDA's scheme (lower = tighter)
// ---------------------------------------------------------------------------
//
// This mirrors Hex-Rays' off_4E0320 lookup table, ported via sub_25F3C0
// (`research/decompiled-references/hexrays/ida_dump/hexx64/all/sub_25F3C0.c`).  In IDA's scheme,
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

        // Ternary (conditional select)
        IrOp::Select => 13,

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
/// (`research/decompiled-references/hexrays/ida_dump/hexx64/all/sub_25F3C0.c`).  See the file
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
        // GCC's -Wparentheses flags `a != b < c` even though C parses it as
        // `a != (b < c)`. Keep generated C warning-clean under the semantic
        // gate's -Werror while preserving the intended tree.
        if matches!(
            parent_op,
            IrOp::IntEqual | IrOp::IntNotequal | IrOp::FloatEqual | IrOp::FloatNotequal
        ) && matches!(
            child_op,
            IrOp::IntLess
                | IrOp::IntSless
                | IrOp::FloatLess
                | IrOp::IntLessequal
                | IrOp::IntSlessequal
                | IrOp::FloatLessequal
        ) {
            return true;
        }

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
        if let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx)
            && let Some(sv) = inputs.iter().find(|sv| sv.base == *vn)
        {
            if let Some(name) = ctx.var_names.get(sv) {
                return name.len();
            }
            if let Some(name) = ctx.merged_names.get(sv) {
                return name.len();
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
        IrOp::IntZext
        | IrOp::IntSext
        | IrOp::FloatInt2float
        | IrOp::FloatFloat2float
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
        if let (Some(fp), Some(fc)) = (family(p), family(insn.op))
            && fp == fc
        {
            return false;
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

fn emit_expr_with_prec(
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
fn unsupported_helper_name(insn: &IrInsn) -> String {
    let mut s = String::with_capacity("__unlace_".len() + 12);
    s.push_str("__unlace_");
    for ch in insn.op.name().chars() {
        s.push(ch.to_ascii_lowercase());
    }
    s
}

fn emit_unsupported_op_helper(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    let name = unsupported_helper_name(insn);
    let args = emit_input_args(insn, stmt_idx, ctx);
    format!("{name}({args})")
}

/// Render all inputs of an instruction as a comma-separated argument list.
fn emit_input_args(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    insn.inputs
        .iter()
        .enumerate()
        .map(|(i, vn)| emit_operand_resolved(vn, i, stmt_idx, ctx))
        .collect::<Vec<_>>()
        .join(", ")
}

/// Map an atomic ordering constant to its C11 name.
fn atomic_ordering_name(ordering: u64) -> &'static str {
    match ordering {
        0 => "memory_order_relaxed",
        1 => "memory_order_acquire",
        2 => "memory_order_release",
        3 => "memory_order_acq_rel",
        _ => "memory_order_seq_cst",
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
        0x140 => Some("_mm_shuffle_epi32"),  // PSHUFD
        0x141 => Some("_mm_shuffle_epi8"),   // PSHUFB
        0x142 => Some("_mm_unpacklo_epi8"),  // PUNPCKLBW
        0x614 => Some("__unlace_psrldq"),    // PSRLDQ
        0x61D => Some("__unlace_psrlq"),     // PSRLQ
        0x61E => Some("__unlace_punpckldq"), // PUNPCKLDQ

        // ── SSE misc (0x150) ───────────────────────────────────
        0x150 => Some("_mm_movemask_epi8"), // PMOVMSKB

        // ── SSE2 pack-with-saturation (0x160..0x161) ───────────
        0x160 => Some("_mm_packs_epi16"),  // PACKSSWB
        0x161 => Some("_mm_packus_epi16"), // PACKUSWB

        // ── SSE4.1 blend/select (0x170..0x171) ─────────────────
        0x170 => Some("_mm_blend_ps"),    // BLENDPS
        0x171 => Some("_mm_blendv_epi8"), // PBLENDVB

        // ── AVX-512 EVEX packed integer ops (0x1D0..0x1D2) ─────
        0x1D0 => Some("_mm512_add_epi64"),   // VPADDQ
        0x1D1 => Some("_mm512_sub_epi64"),   // VPSUBQ
        0x1D2 => Some("_mm512_mullo_epi64"), // VPMULLQ

        // ── AVX-512 generic EVEX fallback (t306) ─────────────────
        0x1EF => Some("__builtin_ia32_avx512_evex"),

        // ── AES-NI intrinsics (0x1E0..0x1E4) ──────────────────────
        0x1E0 => Some("_mm_aesenc_si128"),          // AESENC
        0x1E1 => Some("_mm_aesenclast_si128"),      // AESENCLAST
        0x1E2 => Some("_mm_aesdec_si128"),          // AESDEC
        0x1E3 => Some("_mm_aesdeclast_si128"),      // AESDECLAST
        0x1E4 => Some("_mm_aeskeygenassist_si128"), // AESKEYGENASSIST

        // ── SHA-NI intrinsics (0x1E8..0x1EC) ───────────────────
        0x1E8 => Some("_mm_sha1rnds4_epu32"),   // SHA1RNDS4
        0x1E9 => Some("_mm_sha1nexte_epu32"),   // SHA1NEXTE
        0x1EA => Some("_mm_sha256rnds2_epu32"), // SHA256RNDS2
        0x1EB => Some("_mm_sha256msg1_epu32"),  // SHA256MSG1
        0x1EC => Some("_mm_sha256msg2_epu32"),  // SHA256MSG2

        // ── Bit-manipulation builtins (0x200..0x204) ───────────
        0x200 => Some("__builtin_ctz"),      // BSF
        0x201 => Some("__bsr"),              // BSR
        0x202 => Some("__builtin_ctz"),      // TZCNT
        0x203 => Some("__builtin_clz"),      // LZCNT
        0x204 => Some("__builtin_popcount"), // POPCNT

        // ── Trap (0x300) ───────────────────────────────────────
        0x300 => Some("__builtin_trap"), // UD2 / INT3

        // ── x87 FPU stack pseudo-intrinsics (0x310..0x318) ──────
        0x310 => Some("__fld"),
        0x311 => Some("__fstp"),
        0x312 => Some("__fadd"),
        0x313 => Some("__fsub"),
        0x314 => Some("__fmul"),
        0x315 => Some("__fdiv"),
        0x316 => Some("__fcom"),
        0x317 => Some("__fxch"),
        0x318 => Some("__fst"),

        // ── x87 popping arithmetic/compare variants (0x360..0x367) ──
        // Distinct tags so the x87 TOP-tracking pass can model the
        // stack pop; rendered with their canonical `p`-suffixed names.
        0x360 => Some("__faddp"),
        0x361 => Some("__fsubp"),
        0x362 => Some("__fsubrp"),
        0x363 => Some("__fmulp"),
        0x364 => Some("__fdivp"),
        0x365 => Some("__fdivrp"),
        0x366 => Some("__fcomp"),
        0x367 => Some("__fcompp"),

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

        // ── AArch64 lifter callothers (0x330..0x34B) ───────────
        0x330 => Some("__csel__"),
        0x331 => Some("__csinc__"),
        0x332 => Some("__csinv__"),
        0x333 => Some("__csneg__"),
        0x340 => Some("__ldrex__"),
        0x341 => Some("__strex__"),
        0x342 => Some("__dmb__"),
        0x343 => Some("__dsb__"),
        0x344 => Some("__isb__"),
        // t299 AArch64 atomics are handled specially by `emit_callother`
        // because C11 atomic builtins need memory-order arguments and, for
        // stores, have statement form rather than a value expression.

        // ── x86 conditional move / perf-monitor pseudo-intrinsics ──
        0x350 => Some("__cmov__"),
        0x351 => Some("__rdpmc__"),

        // ── AArch64 NEON (0x400..0x40D) ─────────────────────────
        // These are *not* resolved here because the C intrinsic name
        // depends on the lane-size operand (e.g. ADD lane=4 →
        // `vaddq_s32` vs. ADD lane=2 → `vaddq_s16`). The lifter encodes
        // lane size as `inputs[1]`; `emit_callother` peels it off and
        // routes through `aarch64_neon_intrinsic_name` before falling
        // back to this tag-only table.

        // ── AArch64 pointer-auth (t300, 0x40E..0x417) ───────────
        0x40E => Some("__pacia"),
        0x40F => Some("__pacib"),
        0x410 => Some("__pacda"),
        0x411 => Some("__pacdb"),
        0x412 => Some("__autia"),
        0x413 => Some("__autib"),
        0x414 => Some("__autda"),
        0x415 => Some("__autdb"),
        0x416 => Some("__xpaci"),
        0x417 => Some("__xpacd"),

        // ── AArch64 SVE (0x420..0x429) ──────────────────────────────
        0x420 => Some("svadd_s32"),
        0x421 => Some("svsub_s32"),
        0x422 => Some("svmul_s32"),
        0x423 => Some("svaddf_f32"),
        0x424 => Some("svsubf_f32"),
        0x425 => Some("svmulf_f32"),
        0x426 => Some("svld1_s32"),
        0x427 => Some("svst1_s32"),
        0x428 => Some("svand_pred"),
        0x429 => Some("svptrue_b32"),

        // ── Intel AMX tile intrinsics (0x500..0x508) ────────────────
        0x500 => Some("_tile_loadd"),
        0x501 => Some("_tile_stream_loadd"),
        0x502 => Some("_tile_stored"),
        0x503 => Some("_tile_release"),
        0x504 => Some("_tile_dpbssd"),
        0x505 => Some("_tile_dpbsud"),
        0x506 => Some("_tile_dpbusd"),
        0x507 => Some("_tile_dpbuud"),
        0x508 => Some("_tile_dpbf16ps"),
        _ => None,
    }
}

const CALLOTHER_AARCH64_LDAXR: u64 = 0x345;
const CALLOTHER_AARCH64_STLXR: u64 = 0x346;
const CALLOTHER_AARCH64_ATOMIC_LOAD_ACQUIRE: u64 = 0x347;
const CALLOTHER_AARCH64_ATOMIC_STORE_RELEASE: u64 = 0x348;
const CALLOTHER_AARCH64_ATOMIC_FETCH_ADD: u64 = 0x349;
const CALLOTHER_AARCH64_ATOMIC_EXCHANGE: u64 = 0x34A;
const CALLOTHER_AARCH64_ATOMIC_CMPXCHG: u64 = 0x34B;

fn aarch64_atomic_order_name(order: u64) -> &'static str {
    match order {
        0 => "memory_order_relaxed",
        1 => "memory_order_acquire",
        2 => "memory_order_release",
        3 => "memory_order_acq_rel",
        _ => "memory_order_seq_cst",
    }
}

fn atomic_ptr_arg(vn: &Varnode, operand_idx: usize, stmt_idx: u32, ctx: &mut PrintCtx) -> String {
    format!(
        "(_Atomic unsigned long long *){}",
        emit_operand_resolved(vn, operand_idx, stmt_idx, ctx)
    )
}

fn emit_aarch64_atomic_callother(
    tag: u64,
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    match tag {
        CALLOTHER_AARCH64_LDAXR => {
            let addr = insn.inputs.get(1)?;
            Some(format!(
                "atomic_load_explicit({}, memory_order_acquire)",
                atomic_ptr_arg(addr, 1, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_STLXR => {
            let value = insn.inputs.get(1)?;
            let addr = insn.inputs.get(2)?;
            Some(format!(
                "({{ atomic_store_explicit({}, {}, memory_order_release); 0; }})",
                atomic_ptr_arg(addr, 2, stmt_idx, ctx),
                emit_operand_resolved(value, 1, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_LOAD_ACQUIRE => {
            let addr = insn.inputs.get(2)?;
            Some(format!(
                "atomic_load_explicit({}, memory_order_acquire)",
                atomic_ptr_arg(addr, 2, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_STORE_RELEASE => {
            let value = insn.inputs.get(2)?;
            let addr = insn.inputs.get(3)?;
            Some(format!(
                "atomic_store_explicit({}, {}, memory_order_release)",
                atomic_ptr_arg(addr, 3, stmt_idx, ctx),
                emit_operand_resolved(value, 2, stmt_idx, ctx)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_FETCH_ADD | CALLOTHER_AARCH64_ATOMIC_EXCHANGE => {
            let order = insn.inputs.get(1)?.offset;
            let value = insn.inputs.get(2)?;
            let addr = insn.inputs.get(3)?;
            let name = if tag == CALLOTHER_AARCH64_ATOMIC_FETCH_ADD {
                "atomic_fetch_add_explicit"
            } else {
                "atomic_exchange_explicit"
            };
            Some(format!(
                "{}({}, {}, {})",
                name,
                atomic_ptr_arg(addr, 3, stmt_idx, ctx),
                emit_operand_resolved(value, 2, stmt_idx, ctx),
                aarch64_atomic_order_name(order)
            ))
        }
        CALLOTHER_AARCH64_ATOMIC_CMPXCHG => {
            let order = insn.inputs.get(1)?.offset;
            let expected = insn.inputs.get(2)?;
            let desired = insn.inputs.get(3)?;
            let addr = insn.inputs.get(4)?;
            Some(format!(
                "atomic_compare_exchange_strong_explicit({}, &{}, {}, {}, memory_order_relaxed)",
                atomic_ptr_arg(addr, 4, stmt_idx, ctx),
                emit_operand_resolved(expected, 2, stmt_idx, ctx),
                emit_operand_resolved(desired, 3, stmt_idx, ctx),
                aarch64_atomic_order_name(order)
            ))
        }
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

// ── AArch64 SVE Callother tags (mirror of `unlace-lift-arm`) ───────────
#[allow(dead_code)]
const CALLOTHER_SVE_ADD: u64 = 0x420;
#[allow(dead_code)]
const CALLOTHER_SVE_SUB: u64 = 0x421;
#[allow(dead_code)]
const CALLOTHER_SVE_MUL: u64 = 0x422;
#[allow(dead_code)]
const CALLOTHER_SVE_FADD: u64 = 0x423;
#[allow(dead_code)]
const CALLOTHER_SVE_FSUB: u64 = 0x424;
#[allow(dead_code)]
const CALLOTHER_SVE_FMUL: u64 = 0x425;
#[allow(dead_code)]
const CALLOTHER_SVE_LD1: u64 = 0x426;
#[allow(dead_code)]
const CALLOTHER_SVE_ST1: u64 = 0x427;
#[allow(dead_code)]
const CALLOTHER_SVE_AND_PRED: u64 = 0x428;
#[allow(dead_code)]
const CALLOTHER_SVE_PTRUE: u64 = 0x429;

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

/// AArch64 conditional-select tag: the value taken when the predicate is
/// *false* is a per-variant transform of the second source register.
///   * CSEL  (0x330): `Rm`        — identity
///   * CSINC (0x331): `Rm + 1`
///   * CSINV (0x332): `~Rm`
///   * CSNEG (0x333): `-Rm`
///
/// Given the already-rendered false-operand text, return the C expression
/// for the false branch. The result is wrapped so it composes correctly as
/// a ternary alternative (e.g. `(a4 + 1)`); the caller may add outer parens.
fn csel_false_value_expr(tag: u64, false_operand: &str) -> String {
    match tag {
        0x331 => format!("{false_operand} + 1"), // CSINC
        0x332 => format!("~{false_operand}"),    // CSINV
        0x333 => format!("-{false_operand}"),    // CSNEG
        _ => false_operand.to_string(),          // CSEL (0x330) / fallback
    }
}

/// Tag (0x330..=0x333) of a CSEL-family callother, or `None`.
fn csel_callother_tag(insn: &IrInsn) -> Option<u64> {
    if !is_csel_callother(insn) {
        return None;
    }
    insn.inputs.first().map(|vn| vn.offset)
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

    // CSEL family as a value expression (e.g. inlined into a consumer):
    // render the C ternary `cond ? Rn : f(Rm)` rather than a raw
    // `__csinv__(...)` intrinsic call. Mirrors the assignment-statement
    // path's per-variant false-value transform.
    if let Some(tag) = csel_callother_tag(insn) {
        let cond = emit_operand_resolved(&insn.inputs[1], 1, stmt_idx, ctx);
        let true_val = emit_operand_resolved(&insn.inputs[2], 2, stmt_idx, ctx);
        let false_operand = emit_operand_resolved(&insn.inputs[3], 3, stmt_idx, ctx);
        let false_val = csel_false_value_expr(tag, &false_operand);
        return format!("({cond} ? {true_val} : {false_val})");
    }

    if tag_vn.space != SpaceId::Const {
        return "/* CALLOTHER (dynamic tag) */ 0".to_string();
    }

    let tag = tag_vn.offset;

    if let Some(expr) = emit_aarch64_atomic_callother(tag, insn, stmt_idx, ctx) {
        return expr;
    }

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
    raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    let _span = cprinter_detail_phase("cprinter.emit.operand-resolved");
    trace_full(format_args!(
        "emit-operand-resolved-enter stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?}"
    ));
    let rendered = emit_operand_with_prec(
        vn,
        raw_idx,
        stmt_idx,
        ConstContext::Signed,
        ParentCtx::top(),
        ctx,
    );
    trace_full(format_args!(
        "emit-operand-resolved-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} rendered={rendered:?}"
    ));
    rendered
}

/// Returns `Some(unsigned)` if the input varnode is typed as a single-byte
/// integer (i.e. a `char` in C terms), encoding signedness via the boolean.
///
/// Used to detect char-typed comparison contexts so that constant operands
/// can render as char literals.
fn char_typed_input(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> Option<bool> {
    if vn.space == SpaceId::Const {
        return None;
    }
    let resolved_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied());
    let sv = resolved_sv.unwrap_or(SsaVarnode {
        base: *vn,
        version: 0,
    });
    match ctx.var_types.get(&sv).copied()? {
        PrimitiveType::Int(1) => Some(false),
        PrimitiveType::UnsignedInt(1) => Some(true),
        _ => None,
    }
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
    // Char-literal context: a small constant compared against a byte-typed
    // value renders as a C char literal (e.g. `c == 'A'`). Restricted to
    // (in)equality and ordering comparisons so we don't mis-render
    // arithmetic constants such as `c + 1` as `c + '\x01'`.
    if matches!(
        insn.op,
        IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal
    ) && insn.inputs[this_idx].space == SpaceId::Const
        && insn.inputs[this_idx].size == 1
        && let Some(unsigned) = char_typed_input(&insn.inputs[other_idx], stmt_idx, ctx)
    {
        return ConstContext::Char { unsigned };
    }
    base_ctx
}

fn emit_operand_with_prec(
    vn: &unlace_ir::Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    const_ctx: ConstContext,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    trace_full(format_args!(
        "emit-operand-enter stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} const_ctx={const_ctx:?} parent={parent:?}"
    ));
    if vn.space == SpaceId::Const {
        if let Some(s) = ctx.string_table.get(&vn.offset) {
            let rendered = format!("\"{}\"", escape_c_string(s));
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} decision=const-string rendered={rendered:?}"
            ));
            return rendered;
        }
        let rendered = format_constant_ctx(vn.offset, vn.size, const_ctx);
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} decision=const rendered={rendered:?}"
        ));
        return rendered;
    }

    let sv = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.input-or-latest");
        input_or_latest_sv_for_operand(vn, Some(raw_idx), stmt_idx, ctx)
    }
    .unwrap_or(SsaVarnode {
        base: *vn,
        version: 0,
    });

    if let Some(addr) = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.stack-frame-address");
        try_stack_frame_address_expr(vn, Some(raw_idx), stmt_idx, ctx)
    } {
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=stack-frame-address rendered={addr:?}"
        ));
        return addr;
    }

    if let Some(value) = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.readonly-scalar");
        try_readonly_scalar_value_for_sv(&sv, ctx)
    } {
        tracing::debug!(target: "unlace::cprinter::name",
            "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=readonly value={value}"
        );
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=readonly rendered={value:?}"
        ));
        return value;
    }

    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        if def_insn.op == IrOp::Load && !stable_load_expr_is_inlineable(&def_insn, def_stmt, ctx) {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op=Load decision=unstable-load-name name={name}",
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op=Load decision=unstable-load-name rendered={name:?}"
            ));
            return name;
        }
        if ctx.commented_stmts.contains(&def_stmt) || ctx.line_comments.contains_key(&def_insn.addr)
        {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=commented-def-name name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=commented-def-name rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if let Some(materialized_sv) = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.materialized-source-check");
            latest_materialized_value_for_same_source(&sv, &def_insn, def_stmt, stmt_idx, ctx)
        } {
            let name = ctx.name_of(&materialized_sv);
            trace_sequence(format_args!(
                "emit-operand-materialized-source stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} def_stmt={def_stmt} op={:?} materialized_sv={materialized_sv:?} name={name:?}",
                def_insn.op
            ));
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-source-name materialized={materialized_sv:?} name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-source-name materialized={materialized_sv:?} rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let snapshot_source_redefined = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.snapshot-check");
            copy_like_snapshot_source_redefined_before_consumer(
                &sv, &def_insn, def_stmt, stmt_idx, ctx,
            )
        };
        if !ctx.foldable_stmts.contains(&def_stmt) && snapshot_source_redefined {
            tracing::debug!(target: "unlace::cprinter",
                "operand stmt={stmt_idx} sv={sv:?} def_stmt={def_stmt} decision=snapshot-name"
            );
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=snapshot-name name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=snapshot-name rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let alias_redefined_before_consumer = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.alias-redef-check");
            expression_inputs_aliased_redefined_before_consumer(
                &sv, &def_insn, def_stmt, stmt_idx, ctx,
            )
        };
        if alias_redefined_before_consumer {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=expr-input-stale name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=expr-input-stale rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if def_stmt < stmt_idx
            && !ctx.foldable_stmts.contains(&def_stmt)
            && is_control_condition_stmt(stmt_idx, ctx)
            && materialized_def_must_name_in_condition(&def_insn, def_stmt, ctx)
        {
            let name = ctx.name_of(&sv);
            trace_sequence(format_args!(
                "emit-operand-materialized-cond stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} def_stmt={def_stmt} op={:?} name={name:?} reason=def-emitted-before-condition",
                def_insn.op
            ));
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-cond-name name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-cond-name rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if def_stmt < stmt_idx
            && !ctx.foldable_stmts.contains(&def_stmt)
            && !is_dead_suppressible_store(&def_insn, def_stmt, ctx)
            && !is_dead_suppressed_stack_load(&def_insn, def_stmt, ctx)
            && inlined_read_clobbered_before(def_stmt, stmt_idx, true, ctx)
        {
            let name = ctx.name_of(&sv);
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-read-clobbered rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if !ctx.resolving_exprs.insert(sv) {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=cycle name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=cycle rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let rendered = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.inline-def");
            emit_expr_with_prec(&def_insn, def_stmt, parent, ctx)
        };
        ctx.resolving_exprs.remove(&sv);
        tracing::debug!(target: "unlace::cprinter::name",
            "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=inline rendered={rendered}",
            def_insn.op
        );
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=inline rendered={rendered:?}",
            def_insn.op
        ));
        return rendered;
    }

    if let Some(def_stmt) = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.defining-stmt");
        defining_stmt_for_sv(&sv, ctx)
    } && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
        && {
            let _span = cprinter_detail_phase("cprinter.emit.operand.stable-load-check");
            stable_load_expr_is_inlineable(&def_insn, def_stmt, ctx)
        }
    {
        if !ctx.resolving_exprs.insert(sv) {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-cycle name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-cycle rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let rendered = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.inline-stable-load");
            emit_expr_with_prec(&def_insn, def_stmt, parent, ctx)
        };
        ctx.resolving_exprs.remove(&sv);
        tracing::debug!(target: "unlace::cprinter::name",
            "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-inline rendered={rendered}",
            def_insn.op
        );
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-inline rendered={rendered:?}",
            def_insn.op
        ));
        return rendered;
    }

    let name = ctx.name_of(&sv);
    tracing::debug!(target: "unlace::cprinter::name",
        "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=name name={name}"
    );
    trace_full(format_args!(
        "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=name rendered={name:?}"
    ));
    name
}

fn materialized_def_must_name_in_condition(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.op != IrOp::Load {
        return true;
    }
    if load_output_is_suppressed_for_inline(insn, stmt_idx, ctx) {
        return false;
    }
    true
}

fn load_output_is_suppressed_for_inline(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
    if use_count > 1 {
        return false;
    }
    if use_count == 0 {
        return true;
    }
    let load_size = insn.output.map_or(8, |o| o.size);
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    let readonly = insn.inputs.get(addr_idx).is_some_and(|addr| {
        try_readonly_scalar_load(addr, Some(addr_idx), stmt_idx, load_size, ctx).is_some()
    });
    stable_load_expr_is_inlineable(insn, stmt_idx, ctx) || readonly
}

fn stable_load_expr_is_inlineable(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.op != IrOp::Load {
        return false;
    }
    let load_size = insn.output.map_or(8, |o| o.size);
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    if addr_idx >= insn.inputs.len() {
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} decision=false reason=missing-address"
        ));
        return false;
    }
    let addr = &insn.inputs[addr_idx];
    if let Some(stack_expr) =
        try_stack_frame_access_name(addr, Some(addr_idx), stmt_idx, load_size, ctx)
    {
        let offset = resolve_stack_offset_for_addr(addr, Some(addr_idx), stmt_idx, ctx, 0);
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} addr={addr:?} offset={offset:?} expr={stack_expr:?} decision=true reason=stack-frame"
        ));
        return true;
    }
    if typed_access_is_stable(addr, stmt_idx, load_size, ctx) {
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} addr={addr:?} decision=true reason=field"
        ));
        return true;
    }
    if single_use_static_load_expr_is_inlineable(insn, stmt_idx, addr_idx, load_size, ctx) {
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} addr={addr:?} decision=true reason=single-use-static"
        ));
        return true;
    }
    trace_load_text(format_args!(
        "stable-load stmt={stmt_idx} addr={addr:?} decision=false reason=unstable"
    ));
    false
}

fn single_use_static_load_expr_is_inlineable(
    insn: &IrInsn,
    stmt_idx: u32,
    addr_idx: usize,
    load_size: u8,
    ctx: &PrintCtx,
) -> bool {
    let Some(addr) = insn.inputs.get(addr_idx) else {
        return false;
    };
    if try_global_var_name(addr, Some(addr_idx), stmt_idx, load_size, ctx).is_none() {
        trace_load_text(format_args!(
            "single-use-static-load stmt={stmt_idx} decision=false reason=not-static addr={addr:?}"
        ));
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        trace_load_text(format_args!(
            "single-use-static-load stmt={stmt_idx} decision=false reason=missing-output"
        ));
        return false;
    };
    let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
    if use_count != 1 {
        trace_load_text(format_args!(
            "single-use-static-load stmt={stmt_idx} out={out_sv:?} uses={use_count} decision=false reason=not-single-use"
        ));
        return false;
    }
    let Some(consumer_stmt) = last_consumer_stmt_for_sv(&out_sv, ctx) else {
        trace_load_text(format_args!(
            "single-use-static-load stmt={stmt_idx} out={out_sv:?} decision=false reason=no-consumer"
        ));
        return false;
    };
    if consumer_stmt <= stmt_idx {
        trace_load_text(format_args!(
            "single-use-static-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=consumer-before-def"
        ));
        return false;
    }
    if consumer_uses_sv_as_indirect_call_target(&out_sv, consumer_stmt, ctx) {
        trace_load_text(format_args!(
            "single-use-static-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=call-target"
        ));
        return false;
    }
    let def_path = ctx
        .stmt_scope_paths
        .get(&stmt_idx)
        .cloned()
        .unwrap_or_default();
    let consumer_path = ctx
        .stmt_scope_paths
        .get(&consumer_stmt)
        .cloned()
        .unwrap_or_default();
    if !consumer_path.starts_with(&def_path) {
        trace_load_text(format_args!(
            "single-use-static-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=scope consumer_path={consumer_path:?} def_path={def_path:?}"
        ));
        return false;
    }
    let first_between = stmt_idx.saturating_add(1);
    for (&between_stmt, between_insn) in ctx.stmt_insns.range(first_between..consumer_stmt) {
        if instr_has_side_effects(between_insn) {
            trace_load_text(format_args!(
                "single-use-static-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=side-effect-between between={between_stmt} op={:?}",
                between_insn.op
            ));
            return false;
        }
    }
    trace_load_text(format_args!(
        "single-use-static-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=true"
    ));
    true
}

fn consumer_uses_sv_as_indirect_call_target(
    sv: &SsaVarnode,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if ctx
        .stmt_insns
        .get(&consumer_stmt)
        .is_none_or(|insn| insn.op != IrOp::Callind)
    {
        return false;
    }
    ctx.stmt_input_slot_lookup
        .get(&(consumer_stmt, 0))
        .or_else(|| {
            ctx.stmt_input_slots
                .get(&consumer_stmt)
                .and_then(|slots| slots.get(&0))
        })
        .is_some_and(|target| target == sv)
        || ctx
            .stmt_inputs
            .get(&consumer_stmt)
            .and_then(|inputs| inputs.first())
            .is_some_and(|target| target == sv)
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum ConstContext {
    Signed,
    Bitwise,
    Pointer,
    Unsigned,
    /// Char-typed context. Numeric constants in this context render as
    /// C char literals (e.g. `'A'`, `'\n'`, `'\xff'`) instead of integers
    /// when the value lies in a representable byte range. Falls back to
    /// `Signed`/`Unsigned` rendering otherwise.
    Char {
        unsigned: bool,
    },
    /// Float-typed context. The constant's `size` field tells us whether the
    /// raw bit-pattern is `f32` (4) or `f64` (8); we re-interpret the bytes
    /// and emit either an IDA macro literal (`NAN`, `INFINITY`, `-INFINITY`)
    /// or the shortest round-tripping decimal form, matching IDA's
    /// `sub_11C210` float-printer behaviour.
    Float,
}

fn const_context_for_op(op: IrOp) -> ConstContext {
    match op {
        IrOp::IntAnd
        | IrOp::IntOr
        | IrOp::IntXor
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright => ConstContext::Bitwise,

        // Float operations consume float-typed inputs. A constant Varnode
        // appearing as an operand of any of these ops is the bit-pattern of
        // an IEEE-754 value (f32 / f64) and must be rendered as a float
        // literal rather than an integer constant.
        //
        // Note: `FloatInt2float` takes an *integer* input (so it stays
        // Signed); `FloatFloat2int` and `FloatFloat2float` take *float*
        // inputs (so they go Float).
        IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatNeg
        | IrOp::FloatAbs
        | IrOp::FloatSqrt
        | IrOp::FloatCeil
        | IrOp::FloatFloor
        | IrOp::FloatRound
        | IrOp::FloatTrunc
        | IrOp::FloatNan
        | IrOp::FloatFloat2float
        | IrOp::FloatFloat2int
        | IrOp::FloatEqual
        | IrOp::FloatNotequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => ConstContext::Float,

        _ => ConstContext::Signed,
    }
}

#[cfg(test)]
fn format_constant(value: u64, size: u8) -> String {
    format_constant_ctx(value, size, ConstContext::Signed)
}

/// Render an integer constant using a radix heuristic that's friendlier
/// to human readers than the default `0x…` form (t208).
///
/// The rules, applied **in order** — the first that matches wins:
///
/// 1. **Printable ASCII character** (0x20..=0x7E, no escape needed) →
///    `'x'` literal. Excludes `'\\'` and `'\''` because those would
///    require a C escape.
/// 2. **Byte-sized literal** (`width == 1` and `value < 256`) →
///    decimal. Bytes are almost always counts, masks, or character
///    codes; decimal reads more naturally than `0xff`.
/// 3. **Power of two with bit position >= 8** → `1 << N`. Large
///    single-bit constants are nearly always flag masks; surfacing the
///    bit index makes the intent obvious.
/// 4. **0 / 1 / -1** → decimal. These are universal sentinels and
///    deserve their canonical signed form even when other rules
///    would otherwise route them to hex.
/// 5. **Small magnitude** (`value < 16`) → decimal. Tiny indices,
///    loop counters, and field offsets read better as `7` than `0x7`.
/// 6. **Everything else** → `0x…` hexadecimal, the existing default.
///
/// `ctx` is currently unused but is retained in the signature so a
/// future revision can consult per-function display preferences
/// (e.g. enum bindings) without breaking call sites.
#[allow(dead_code)]
fn format_int_literal(value: u64, width: u8, _ctx: &PrintCtx) -> String {
    // 1. Printable ASCII character — emit a C char literal. We exclude
    //    backslash and single-quote because rendering those requires an
    //    escape sequence, and the spec says "no escape needed".
    if (0x20..=0x7E).contains(&value) && value != b'\\' as u64 && value != b'\'' as u64 {
        return format!("'{}'", value as u8 as char);
    }

    // 2. Byte-sized literal — decimal is more readable than hex for
    //    the [0, 255] range when the user knows the slot is a byte.
    if width == 1 && value < 256 {
        return format!("{value}");
    }

    // 3. Power of two with bit position >= 8 — render as `1 << N`.
    //    `is_power_of_two()` is false for 0, and `trailing_zeros` on a
    //    power of two equals the bit index, so the comparison is exact.
    if value.is_power_of_two() && value.trailing_zeros() >= 8 {
        return format!("1 << {}", value.trailing_zeros());
    }

    // 4. 0 / 1 / -1 sentinels — decimal, with -1 rendered against the
    //    width's unsigned wrap-around (0xFF for u8, 0xFFFF for u16,
    //    etc.). For widths outside the standard set, fall back to
    //    `u64::MAX`.
    if value == 0 || value == 1 {
        return format!("{value}");
    }
    let neg_one = match width {
        1 => 0xFFu64,
        2 => 0xFFFFu64,
        4 => 0xFFFF_FFFFu64,
        8 => u64::MAX,
        _ => u64::MAX,
    };
    if value == neg_one {
        return "-1".to_string();
    }

    // 5. Small magnitude — `0..16` in decimal.
    if value < 16 {
        return format!("{value}");
    }

    // 6. Default — hex.
    format!("0x{value:x}")
}

fn format_constant_ctx(value: u64, size: u8, context: ConstContext) -> String {
    if context == ConstContext::Pointer && value == 0 {
        return "nullptr".to_string();
    }

    if let ConstContext::Char { unsigned } = context {
        if size == 1
            && let Some(lit) = format_char_literal(value, unsigned)
        {
            return lit;
        }
        // Fall through to the appropriate numeric rendering when the value
        // can't be represented as a char literal (oversized, out-of-range).
        let fallback = if unsigned {
            ConstContext::Unsigned
        } else {
            ConstContext::Signed
        };
        return format_constant_ctx(value, size, fallback);
    }

    if context == ConstContext::Float {
        // Constants that flow into float ops always have size 4 (f32) or 8
        // (f64) — long-double constants don't survive packing into a
        // `Varnode::offset: u64`, so we never see them here. For unexpected
        // sizes we fall back to the Signed integer rendering rather than
        // crashing or printing a bogus literal.
        if size == 4 || size == 8 {
            let bytes = value.to_le_bytes();
            return format_float_literal(&bytes[..size as usize], size as usize);
        }
        return format_constant_ctx(value, size, ConstContext::Signed);
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

/// Render a single-byte numeric constant as a C char literal.
///
/// Returns `None` when the value lies outside the byte range that maps to a
/// reasonable char literal (`> 0xFF` for unsigned, `> 0x7F` for signed) so
/// the caller can fall back to numeric rendering.
///
/// Escape sequences follow C99 §6.4.4.4:
/// - `0x00` → `'\0'`
/// - `0x07` → `'\a'`, `0x08` → `'\b'`, `0x09` → `'\t'`, `0x0A` → `'\n'`
/// - `0x0B` → `'\v'`, `0x0C` → `'\f'`, `0x0D` → `'\r'`
/// - `0x27` → `'\''`, `0x5C` → `'\\'`
/// - Other printable ASCII (`0x20..=0x7E`) → as-is
/// - Otherwise → `'\xHH'` hex escape
fn format_char_literal(value: u64, unsigned: bool) -> Option<String> {
    let max = if unsigned { 0xFFu64 } else { 0x7Fu64 };
    if value > max {
        return None;
    }
    let byte = value as u8;
    let body = match byte {
        0x00 => "\\0".to_string(),
        0x07 => "\\a".to_string(),
        0x08 => "\\b".to_string(),
        0x09 => "\\t".to_string(),
        0x0A => "\\n".to_string(),
        0x0B => "\\v".to_string(),
        0x0C => "\\f".to_string(),
        0x0D => "\\r".to_string(),
        0x27 => "\\'".to_string(),
        0x5C => "\\\\".to_string(),
        0x20..=0x7E => (byte as char).to_string(),
        _ => format!("\\x{:02x}", byte),
    };
    Some(format!("'{}'", body))
}

/// Render a raw IEEE-754 bit-pattern as a C float literal.
///
/// Mirrors IDA's `sub_11C210` float-printer:
/// 1. **Size → C type.**  `≤4` bytes → `float`, `≤8` → `double`, `>8` →
///    `long double`. The IR can only store 4- or 8-byte float constants in a
///    `Varnode::offset: u64`, so the long-double branch only fires for the
///    raw-bytes API used by tests / future passes that hand-roll a slice.
/// 2. **Classify by exponent / mantissa.**
///     * all exponent bits set + non-zero mantissa → `NAN`
///     * all exponent bits set + zero mantissa + sign 0 → `INFINITY`
///     * all exponent bits set + zero mantissa + sign 1 → `-INFINITY`
///     * otherwise → format as the shortest round-tripping decimal
///       (Rust's `Display` impl is Grisu / Ryu and gives this for free).
/// 3. **Suffix.**  `f` for `f32`, no suffix for `f64`, `L` for long double.
///
/// Returns the resulting C literal string. For unsupported sizes we emit a
/// hex-byte fallback so the output remains compilable.
pub(crate) fn format_float_literal(bytes: &[u8], size: usize) -> String {
    debug_assert_eq!(bytes.len(), size, "byte slice length must equal `size`");

    match size {
        sz if sz <= 4 => {
            // Pad / truncate to exactly 4 bytes, little-endian.
            let mut buf = [0u8; 4];
            let n = sz.min(4);
            buf[..n].copy_from_slice(&bytes[..n]);
            let raw = u32::from_le_bytes(buf);
            // IEEE-754 binary32: sign 1 | exp 8 | mantissa 23.
            let exp = (raw >> 23) & 0xFF;
            let mantissa = raw & 0x007F_FFFF;
            let sign_neg = (raw >> 31) & 1 == 1;
            if exp == 0xFF {
                if mantissa != 0 {
                    return "NAN".to_string();
                }
                return if sign_neg {
                    "-INFINITY".to_string()
                } else {
                    "INFINITY".to_string()
                };
            }
            let v = f32::from_bits(raw);
            // Rust's `{}` for f32 emits the shortest round-trip decimal. We
            // append `.0` if the representation has no `.` / `e` so the
            // result parses as a C float literal rather than an integer.
            let mut s = format!("{}", v);
            if !s.contains('.') && !s.contains('e') && !s.contains('E') {
                s.push_str(".0");
            }
            s.push('f');
            s
        }
        sz if sz <= 8 => {
            let mut buf = [0u8; 8];
            let n = sz.min(8);
            buf[..n].copy_from_slice(&bytes[..n]);
            let raw = u64::from_le_bytes(buf);
            // IEEE-754 binary64: sign 1 | exp 11 | mantissa 52.
            let exp = (raw >> 52) & 0x7FF;
            let mantissa = raw & 0x000F_FFFF_FFFF_FFFF;
            let sign_neg = (raw >> 63) & 1 == 1;
            if exp == 0x7FF {
                if mantissa != 0 {
                    return "NAN".to_string();
                }
                return if sign_neg {
                    "-INFINITY".to_string()
                } else {
                    "INFINITY".to_string()
                };
            }
            let v = f64::from_bits(raw);
            let mut s = format!("{}", v);
            if !s.contains('.') && !s.contains('e') && !s.contains('E') {
                s.push_str(".0");
            }
            s
        }
        _ => {
            // Long double / 80-bit / 128-bit. We don't have a portable parse
            // for these in stable Rust; emit IDA's hex-bytes fallback with a
            // descriptive comment so the output is at least round-trippable
            // by hand.
            let mut s = String::from("/* long double 0x");
            for b in bytes.iter().rev() {
                s.push_str(&format!("{:02x}", b));
            }
            s.push_str(" */ 0.0L");
            s
        }
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

/// t255: Recognize IDA-style byte/word truncation masks at the IntAnd emit
/// site.
///
/// Patterns matched (LHS is the IntAnd insn we're emitting):
///   * `x & 0xFF`   → `LOBYTE(x)`
///   * `x & 0xFFFF` → `LOWORD(x)`
///
/// The constant must live on the right (canonical IR form). Returns `None`
/// if the mask is unrecognized so the caller can fall back to plain `&`.
fn try_emit_int_and_byte_macro(insn: &IrInsn, stmt_idx: u32, ctx: &mut PrintCtx) -> Option<String> {
    if insn.inputs.len() < 2 {
        return None;
    }
    let mask_vn = &insn.inputs[1];
    if mask_vn.space != SpaceId::Const {
        return None;
    }
    let src = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
    match mask_vn.offset {
        0xFF => Some(format!("LOBYTE({})", src)),
        0xFFFF => Some(format!("LOWORD({})", src)),
        _ => None,
    }
}

/// t255: Recognize IDA-style byte-extract patterns at the IntRight emit site.
///
/// Patterns (RHS shift amount is a constant; LHS may itself be an IntAnd
/// against a single-byte mask):
///   * `(x & 0xFF00)    >> 8`  → `BYTE1(x)`
///   * `(x & 0xFF0000)  >> 16` → `BYTE2(x)`
///   * `(x & 0xFF000000)>> 24` → `BYTE3(x)`
///   * `x >> 16` (output size 4) → `HIWORD(x)`
///   * `x >> 32` (output size 8) → `HIDWORD(x)`
///
/// Walks one step back via `sv_defining_stmt` to inspect the LHS producer
/// for the chained `(x & mask) >> N` form.
fn try_emit_int_right_byte_macro(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() < 2 {
        return None;
    }
    let shift_vn = &insn.inputs[1];
    if shift_vn.space != SpaceId::Const {
        return None;
    }
    let shift = shift_vn.offset;

    // Try the chained `(x & mask) >> N` form first.
    let lhs_vn = &insn.inputs[0];
    if lhs_vn.space != SpaceId::Const {
        // Look up the producer of the LHS through SSA.
        let lhs_sv = ctx
            .stmt_inputs
            .get(&stmt_idx)
            .and_then(|svs| svs.iter().find(|s| s.base == *lhs_vn).copied());
        if let Some(sv) = lhs_sv
            && let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv)
        {
            let producer = ctx.stmt_insns.get(&def_stmt).cloned();
            if let Some(p) = producer
                && p.op == IrOp::IntAnd
                && p.inputs.len() >= 2
                && p.inputs[1].space == SpaceId::Const
            {
                let mask = p.inputs[1].offset;
                let inner_src = emit_operand_resolved(&p.inputs[0], 0, def_stmt, ctx);
                match (mask, shift) {
                    (0xFF00, 8) => return Some(format!("BYTE1({})", inner_src)),
                    (0xFF0000, 16) => return Some(format!("BYTE2({})", inner_src)),
                    (0xFF000000, 24) => return Some(format!("BYTE3({})", inner_src)),
                    _ => {}
                }
            }
        }
    }

    // Bare `x >> N` patterns: HIWORD (DWORD result, shift 16) and
    // HIDWORD (QWORD result, shift 32).
    let output_size = insn.output.map_or(0, |v| v.size);
    let src = emit_operand_resolved(&insn.inputs[0], 0, stmt_idx, ctx);
    match (output_size, shift) {
        // Note: HIWORD takes the upper word of a DWORD (output size 2 from
        // a DWORD-typed source). We match on the *input* size via the LHS
        // varnode width since the IR result of `>>` keeps the source width.
        _ if shift == 16 && lhs_vn.size == 4 => Some(format!("HIWORD({})", src)),
        _ if shift == 32 && lhs_vn.size == 8 => Some(format!("HIDWORD({})", src)),
        _ => None,
    }
}

/// t256: Recognize the rebuilt signed-overflow polynomial at the IntSless
/// emit site.
///
/// Patterns:
///   * `(a ^ b ^ -1) & (a ^ (a + b)) < 0`  → `__OFADD__(a, b)`
///   * `(a ^ b)      & (a ^ (a - b)) < 0`  → `__OFSUB__(a, b)`
///
/// Returns `None` if the LHS / RHS don't match the canonical shape.
/// The RHS must be the constant `0`. The LHS unfolds through SSA via
/// `sv_defining_stmt`, so it works even when the polynomial spans
/// several IR statements.
fn try_emit_open_overflow_macro(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if insn.inputs.len() < 2 {
        return None;
    }
    // RHS must be the constant `0`.
    if insn.inputs[1].space != SpaceId::Const || insn.inputs[1].offset != 0 {
        return None;
    }
    let lhs = &insn.inputs[0];
    if lhs.space == SpaceId::Const {
        return None;
    }
    // Look up the AND producer plus the stmt-idx where it lives — we need
    // that idx to resolve the producer's own inputs through SSA.
    let (producer, and_stmt) = producer_insn_with_stmt(lhs, stmt_idx, ctx)?;
    if producer.op != IrOp::IntAnd || producer.inputs.len() < 2 {
        return None;
    }

    // Left arg of the AND: `a ^ b ^ -1` for OFADD, or `a ^ b` for OFSUB.
    // Right arg of the AND: `a ^ (a + b)` for OFADD, or `a ^ (a - b)` for OFSUB.
    let and_lhs = &producer.inputs[0];
    let and_rhs = &producer.inputs[1];
    let (and_lhs_prod, _) = producer_insn_with_stmt(and_lhs, and_stmt, ctx)?;
    let (and_rhs_prod, _) = producer_insn_with_stmt(and_rhs, and_stmt, ctx)?;
    if and_lhs_prod.op != IrOp::IntXor || and_rhs_prod.op != IrOp::IntXor {
        return None;
    }

    let (a_vn, b_vn, is_add) = decode_open_overflow(&and_lhs_prod, &and_rhs_prod, and_stmt, ctx)?;
    let a = emit_operand_resolved(&a_vn, 0, stmt_idx, ctx);
    let b = emit_operand_resolved(&b_vn, 1, stmt_idx, ctx);
    Some(if is_add {
        format!("__OFADD__({}, {})", a, b)
    } else {
        format!("__OFSUB__({}, {})", a, b)
    })
}

/// Lookup helper: from a Varnode that appears as an input of `at_stmt`,
/// follow SSA to the producer `IrInsn`. Returns `(insn, def_stmt_idx)`
/// so callers can resolve the producer's own inputs.
fn producer_insn_with_stmt(vn: &Varnode, at_stmt: u32, ctx: &PrintCtx) -> Option<(IrInsn, u32)> {
    if vn.space == SpaceId::Const {
        return None;
    }
    let sv = ctx
        .stmt_inputs
        .get(&at_stmt)
        .and_then(|svs| svs.iter().find(|s| s.base == *vn).copied())?;
    let &def_stmt = ctx.sv_defining_stmt.get(&sv)?;
    let insn = ctx.stmt_insns.get(&def_stmt).cloned()?;
    Some((insn, def_stmt))
}

fn producer_insn(vn: &Varnode, at_stmt: u32, ctx: &PrintCtx) -> Option<IrInsn> {
    producer_insn_with_stmt(vn, at_stmt, ctx).map(|(i, _)| i)
}

/// Inspect the two halves of `LHS & RHS` and decode them into `(a, b, is_add)`
/// where `is_add == true` for `__OFADD__` and `false` for `__OFSUB__`. Returns
/// `None` if the shapes don't match.
fn decode_open_overflow(
    and_lhs_xor: &IrInsn,
    and_rhs_xor: &IrInsn,
    at_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(Varnode, Varnode, bool)> {
    // and_rhs_xor: `a ^ (a ± b)`. Find which side is the add/sub producer.
    let r0 = &and_rhs_xor.inputs[0];
    let r1 = &and_rhs_xor.inputs[1];

    // Try both orderings.
    for (a_side, sum_side) in [(r0, r1), (r1, r0)] {
        let Some(sum_prod) = producer_insn(sum_side, at_stmt, ctx) else {
            continue;
        };
        let is_add = match sum_prod.op {
            IrOp::IntAdd => true,
            IrOp::IntSub => false,
            _ => continue,
        };
        if sum_prod.inputs.len() < 2 {
            continue;
        }
        // sum_prod.inputs = [a, b]. The `a` must equal `a_side`.
        let a_in_sum = &sum_prod.inputs[0];
        let b_in_sum = &sum_prod.inputs[1];
        if a_in_sum != a_side {
            continue;
        }

        // and_lhs_xor: `a ^ b [^ -1]`. For OFADD we expect a nested xor with -1.
        // Walk it: the constant `-1` appears either as a direct operand or as
        // the second xor input. Accept either flat (3-input) or nested xor.
        let saw_neg_one = and_lhs_xor
            .inputs
            .iter()
            .any(|v| v.space == SpaceId::Const && v.offset as i64 == -1)
            || and_lhs_xor.inputs.iter().any(|v| {
                producer_insn(v, at_stmt, ctx)
                    .map(|p| {
                        p.op == IrOp::IntXor
                            && p.inputs.iter().any(|inner| {
                                inner.space == SpaceId::Const && inner.offset as i64 == -1
                            })
                    })
                    .unwrap_or(false)
            });
        // For OFSUB, `a_lhs` is plain `a ^ b` (no -1).
        let ofadd_match = is_add && saw_neg_one;
        let ofsub_match = !is_add && !saw_neg_one;
        if !ofadd_match && !ofsub_match {
            continue;
        }

        // Confirm both `a` and `b` appear in the and_lhs_xor expression.
        // Flatten one level of xor in case it's nested with -1.
        let mut flat: Vec<Varnode> = Vec::new();
        for v in &and_lhs_xor.inputs {
            if let Some(p) = producer_insn(v, at_stmt, ctx)
                && p.op == IrOp::IntXor
            {
                flat.extend(p.inputs.iter().copied());
                continue;
            }
            flat.push(*v);
        }
        let has_a = flat.iter().any(|v| v == a_in_sum);
        let has_b = flat.iter().any(|v| v == b_in_sum);
        if has_a && has_b {
            return Some((*a_in_sum, *b_in_sum, is_add));
        }
    }
    None
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
    // Vector register file: base 0x400, stride 64 (ZMM-wide).
    // XMM/YMM/ZMM of the same index share a base offset.
    const VEC_BASE: u64 = 0x400;
    const VEC_STRIDE: u64 = 64;

    if offset >= VEC_BASE {
        let idx = (offset - VEC_BASE) / VEC_STRIDE;
        if idx <= 31 && (offset - VEC_BASE).is_multiple_of(VEC_STRIDE) {
            // 64-byte writes are ZMM (AVX-512). ZMM16..ZMM31 only exist
            // in the 512-bit form; they have no XMM/YMM alias.
            if size > 32 {
                return match idx {
                    0 => "zmm0",
                    1 => "zmm1",
                    2 => "zmm2",
                    3 => "zmm3",
                    4 => "zmm4",
                    5 => "zmm5",
                    6 => "zmm6",
                    7 => "zmm7",
                    8 => "zmm8",
                    9 => "zmm9",
                    10 => "zmm10",
                    11 => "zmm11",
                    12 => "zmm12",
                    13 => "zmm13",
                    14 => "zmm14",
                    15 => "zmm15",
                    16 => "zmm16",
                    17 => "zmm17",
                    18 => "zmm18",
                    19 => "zmm19",
                    20 => "zmm20",
                    21 => "zmm21",
                    22 => "zmm22",
                    23 => "zmm23",
                    24 => "zmm24",
                    25 => "zmm25",
                    26 => "zmm26",
                    27 => "zmm27",
                    28 => "zmm28",
                    29 => "zmm29",
                    30 => "zmm30",
                    31 => "zmm31",
                    _ => "zmm?",
                };
            }
            // XMM/YMM only meaningful for idx 0..15.
            if idx <= 15 {
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
        (128, 8) => "r16",
        (128, 4) => "r16d",
        (128, 2) => "r16w",
        (128, 1) => "r16b",
        (136, 8) => "r17",
        (136, 4) => "r17d",
        (136, 2) => "r17w",
        (136, 1) => "r17b",
        (144, 8) => "r18",
        (144, 4) => "r18d",
        (144, 2) => "r18w",
        (144, 1) => "r18b",
        (152, 8) => "r19",
        (152, 4) => "r19d",
        (152, 2) => "r19w",
        (152, 1) => "r19b",
        (160, 8) => "r20",
        (160, 4) => "r20d",
        (160, 2) => "r20w",
        (160, 1) => "r20b",
        (168, 8) => "r21",
        (168, 4) => "r21d",
        (168, 2) => "r21w",
        (168, 1) => "r21b",
        (176, 8) => "r22",
        (176, 4) => "r22d",
        (176, 2) => "r22w",
        (176, 1) => "r22b",
        (184, 8) => "r23",
        (184, 4) => "r23d",
        (184, 2) => "r23w",
        (184, 1) => "r23b",
        (192, 8) => "r24",
        (192, 4) => "r24d",
        (192, 2) => "r24w",
        (192, 1) => "r24b",
        (200, 8) => "r25",
        (200, 4) => "r25d",
        (200, 2) => "r25w",
        (200, 1) => "r25b",
        (208, 8) => "r26",
        (208, 4) => "r26d",
        (208, 2) => "r26w",
        (208, 1) => "r26b",
        (216, 8) => "r27",
        (216, 4) => "r27d",
        (216, 2) => "r27w",
        (216, 1) => "r27b",
        (224, 8) => "r28",
        (224, 4) => "r28d",
        (224, 2) => "r28w",
        (224, 1) => "r28b",
        (232, 8) => "r29",
        (232, 4) => "r29d",
        (232, 2) => "r29w",
        (232, 1) => "r29b",
        (240, 8) => "r30",
        (240, 4) => "r30d",
        (240, 2) => "r30w",
        (240, 1) => "r30b",
        (248, 8) => "r31",
        (248, 4) => "r31d",
        (248, 2) => "r31w",
        (248, 1) => "r31b",
        (0x288, 8) => "rip",
        (0x288, 4) => "eip",
        _ => "reg?",
    }
}

// ---------------------------------------------------------------------------

/// Emit `depth` indent steps of `tab_width` spaces each.
///
/// Replaces the previous hard-coded `"    "` literal so callers can drive
/// the indent step from [`PrintCtx::config`] (and ultimately from the
/// `[printer]` config table or IDA's `module_data + 592` indent
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
fn is_redundant_widen(op: IrOp, input: &Varnode, output_size: u8) -> bool {
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
fn is_redundant_typed_extension(
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
fn is_redundant_same_size_cast(input: &Varnode, output_size: u8) -> bool {
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
fn flow_type_for_input(input: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> PrimitiveType {
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
fn primitive_for_size(size: u8, signed: bool) -> PrimitiveType {
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
// Minimal executable semantics for the SSE vector helpers emitted below.
static inline unsigned int __unlace_vec_u32(unsigned __int128 v, unsigned int lane) { return (unsigned int)(v >> (lane * 32)); }
static inline unsigned long long __unlace_vec_u64(unsigned __int128 v, unsigned int lane) { return (unsigned long long)(v >> (lane * 64)); }
static inline unsigned __int128 _mm_add_epi32(unsigned __int128 a, unsigned __int128 b) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 4; i++) out |= (unsigned __int128)(__unlace_vec_u32(a, i) + __unlace_vec_u32(b, i)) << (i * 32); return out; }
static inline unsigned __int128 _mm_mul_epu32(unsigned __int128 a, unsigned __int128 b) { unsigned long long lo = (unsigned long long)__unlace_vec_u32(a, 0) * __unlace_vec_u32(b, 0); unsigned long long hi = (unsigned long long)__unlace_vec_u32(a, 2) * __unlace_vec_u32(b, 2); return (unsigned __int128)lo | ((unsigned __int128)hi << 64); }
static inline unsigned __int128 _mm_shuffle_epi32(unsigned __int128 a, unsigned int imm) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 4; i++) out |= (unsigned __int128)__unlace_vec_u32(a, (imm >> (i * 2)) & 3u) << (i * 32); return out; }
static inline unsigned __int128 __unlace_psrldq(unsigned __int128 a, unsigned int imm) { return imm >= 16 ? 0 : a >> (imm * 8); }
static inline unsigned __int128 __unlace_psrlq(unsigned __int128 a, unsigned int imm) { unsigned __int128 out = 0; for (unsigned int i = 0; i < 2; i++) { unsigned long long lane = __unlace_vec_u64(a, i); lane = imm >= 64 ? 0 : lane >> imm; out |= (unsigned __int128)lane << (i * 64); } return out; }
static inline unsigned __int128 __unlace_punpckldq(unsigned __int128 a, unsigned __int128 b) { return (unsigned __int128)__unlace_vec_u32(a, 0) | ((unsigned __int128)__unlace_vec_u32(b, 0) << 32) | ((unsigned __int128)__unlace_vec_u32(a, 1) << 64) | ((unsigned __int128)__unlace_vec_u32(b, 1) << 96); }
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
mod tests;
