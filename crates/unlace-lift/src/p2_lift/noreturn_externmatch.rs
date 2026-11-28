//! (unlace) Name-matched no-return for unresolved externs, part of `noreturn_known`
//! (angr port: `test_decompiling_incorrect_duplication_chcon_main`;
//! angr CLE/CFGFast extern no-return tagging; S2 flow follow).
//!
//! ## The gap
//!
//! On a normal dynamically-linked ELF, the `noreturn_known` analysis pass
//! (`unlace-analysis` `loader/noreturn.rs`, the unlace analog of Ghidra's
//! `NoReturnFunctionAnalyzer`) marks `exit`/`abort`/`__stack_chk_fail`/… no-return
//! by scanning the symbol table and emitting a `NoReturnFact` keyed by the
//! function's **address**. The commit sets the `FunctionSymbol` proto's
//! no-return flag, so `FlowInfo::queryCall` plants an `artificialHalt(noreturn)`
//! after the call and flow never runs into the bytes past it.
//!
//! In an **ET_REL `.o`** that breaks down: `__stack_chk_fail` is an *undefined*
//! extern — its `.symtab` entry has `address()==0` and there is no PLT stub — so
//! the address-keyed scan emits no fact for it. The `relocobjects` loader
//! (default-on, DIV-7) binds the extern to a *synthetic* call target and installs
//! a `FunctionSymbol` named `__stack_chk_fail` there (the call site **prints**
//! `__stack_chk_fail()`), but no no-return flag is ever set on that synthetic
//! target. Flow then runs off the end of the function into the inter-function
//! alignment padding (`00 00 …` decoded as `add byte ptr [rax], al`), and the
//! decompiler emits dozens of garbage `*v = *v + c;` lines after the call — the
//! `chcon.o::main` symptom angr's `test_decompiling_incorrect_duplication_chcon_main`
//! does not have.
//!
//! ## What this does
//!
//! Under `noreturn_known`, the `FlowEnvironment::query_call_no_return`
//! hook (`infra/decompile_drive.rs`) additionally consults the callee **name** at
//! the direct-call entry: if the name (after stripping leading `_`, honoring the
//! upstream global/`std` namespace guard) matches the same vendored ELF
//! known-no-return list `noreturn_known` uses, the hook reports no-return. flow.rs
//! ORs this query with the proto flag at the artificial-halt site
//! (`let no_return = is_no_return || query_call_no_return(entry)`), so a name match
//! plants the halt and the trailing padding is never decoded — closing the gap by
//! name where the address-keyed scan could not.
//!
//! On a normal ELF the proto flag is already set by `noreturn_known`, so the OR is
//! a no-op (byte-identical output); the only behavioral changes are on ET_REL
//! undefined externs the address-keyed scan missed and on the proxy stubs below.
//! The list is `include_str!`'d from the canonical
//! `unlace-analysis/data/ElfFunctionsThatDoNotReturn` (a build-time string include,
//! *not* a crate dependency) so it can never drift from `noreturn_known`.
//!
//! ## Proxy stubs
//!
//! A patch or analysis-proxy stub often carries a runtime name behind a prefix
//! (`stub___stack_chk_fail`). A call to one is also no-return when three facts
//! hold together: the callee's name is `<prefix>__<entry>` for an exact list entry
//! holding an `_` of its own ([`is_proxy_noreturn_name`]); its body in the image
//! is a stub, the size its symbol states being exactly one mapped instruction, an
//! unconditional return or jump ([`is_stub_body`]); and the call is the last
//! instruction of the sized function symbol holding it ([`call_ends_function`]),
//! so the compiler emitted nothing after it. This is a per-call-site decision
//! (`FlowEnvironment::query_call_no_return_at`), not a fact about the callee. A
//! one-instruction body is what a compiler emits for an empty function or a tail
//! call to a returning one, so name and body alone cannot tell a stubbed-out
//! runtime routine from a `report__assert_fail` that jumps to a logger; only the
//! caller's own layout can. A callee whose symbol states no size, a body that runs
//! on past that instruction, or a call with live code after it inside its function
//! keeps the exact match alone. Single-word entries never take the prefix, so
//! `machine__exit` and `ui__abort` stay returning.
//!
//! A clean 0/675 datatest ablation (DIV-13: the corpus is either real ELFs, where
//! `noreturn_known` already set the proto flag and this is a no-op, or bytechunks
//! with no name-matched returning extern) and a ~23% speed *win* on the target
//! (less dead padding to decompile). Proxy stubs aside, it carries no risk class
//! beyond `noreturn_known` itself: it applies the *same* vendored name list and the
//! *same* global/`std` namespace guard, just at the flow query boundary to reach the
//! ET_REL extern that the address-keyed scan structurally misses, and it is
//! gated by that pass's flag.

use unlace_base::address::Address;
use unlace_base::marshal::ElementId;
use unlace_base::space::spacetype;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;
use unlace_sleigh::translate::PcodeEmit;

use crate::architecture::Architecture;

/// Marshaling element `<noreturn_externmatch>` (unlace). ElementIds live in the
/// 4000+ range; 4103 (`noreturn_extern`, PR #90) is the previous max.
pub const ELEM_NORETURN_EXTERNMATCH: ElementId = ElementId::new("noreturn_externmatch", 4104);

/// The known-no-return name list, `include_str!`'d from the canonical vendored
/// file the `noreturn_known` analysis pass uses
/// (`unlace-analysis/data/ElfFunctionsThatDoNotReturn`, itself vendored verbatim
/// from Ghidra `Ghidra/Features/Base/data/ElfFunctionsThatDoNotReturn`). A
/// build-time string include — unlace-decomp does *not* depend on unlace-analysis;
/// this keeps a single source of truth so the two matchers can never drift.
const ELF_NORETURN_LIST: &str =
    include_str!("../../../unlace-analysis/data/ElfFunctionsThatDoNotReturn");

/// Strip **all** leading underscores (faithful to
/// `NoReturnFunctionAnalyzer.java:84-91` — a loop, not a single strip: so
/// `__stack_chk_fail` -> `stack_chk_fail` and `_exit` -> `exit`).
fn strip_leading_underscores(s: &str) -> &str {
    s.trim_start_matches('_')
}

/// Split a (possibly namespaced) symbol name into `(base, namespace)`. unlace
/// installs `::`-split namespaces, so a demangled `Menu::exit` has base `exit` in
/// namespace `Menu`; a flat C import `exit` has no namespace.
fn base_and_namespace(name: &str) -> (&str, Option<&str>) {
    match name.rfind("::") {
        Some(i) => (&name[i + 2..], Some(&name[..i])),
        None => (name, None),
    }
}

/// `true` if `name` matches the vendored ELF known-no-return list, mirroring the
/// `noreturn_known` matcher (`loader/noreturn.rs::name_matches`): the namespace
/// guard (only global / `std`, never a C++ class method like `Menu::_exit`),
/// leading-`_` strip, then exact or trailing-`*` wildcard-prefix match. A proxy
/// spelling `<prefix>__<entry>` is not matched here: [`is_proxy_noreturn_name`]
/// takes it, only for a stub body ([`is_stub_body`]) called last in its function
/// ([`call_ends_function`]).
///
/// The parse is recomputed per call (the list is ~20 short lines; this is invoked
/// only from the gated `query_call_no_return` hook on direct CALLs). It mirrors
/// `parse_list`: skip `#`/blank lines, strip leading `_`, a trailing `*` makes a
/// wildcard prefix entry (the shipped ELF list has no wildcards, but the parse is
/// faithful).
pub fn is_known_noreturn_name(name: &str) -> bool {
    let (base, ns) = base_and_namespace(name);
    // Namespace guard: skip class methods. Global (no namespace) is allowed; the
    // sole allowed non-global namespace is exactly `std`.
    if let Some(ns) = ns
        && ns != "std" {
            return false;
        }
    let stripped = strip_leading_underscores(base);
    if stripped.is_empty() {
        return false;
    }
    for line in ELF_NORETURN_LIST.lines() {
        let line = line.trim();
        if line.is_empty() || line.starts_with('#') {
            continue;
        }
        let entry = strip_leading_underscores(line);
        if let Some(prefix) = entry.strip_suffix('*') {
            if stripped.starts_with(prefix) {
                return true;
            }
        } else if entry == stripped {
            return true;
        }
    }
    false
}

/// `true` if `name` is a proxy spelling `<prefix>__<entry>`: the text after the last
/// `__` is an exact list entry holding an `_` of its own, under the same namespace
/// guard as [`is_known_noreturn_name`].
pub fn is_proxy_noreturn_name(name: &str) -> bool {
    let (base, ns) = base_and_namespace(name);
    if ns.is_some_and(|ns| ns != "std") {
        return false;
    }
    let Some((_, proxied)) = strip_leading_underscores(base).rsplit_once("__") else {
        return false;
    };
    proxied.contains('_')
        && ELF_NORETURN_LIST
            .lines()
            .map(str::trim)
            .filter(|line| !line.is_empty() && !line.starts_with('#'))
            .any(|line| strip_leading_underscores(line) == proxied)
}

/// `true` if the callee at `entry` is a whole stub body in the image: its symbol
/// states a size, and those bytes, all mapped, decode as exactly one instruction
/// that is an unconditional return or jump with no control transfer before it.
pub fn is_stub_body(arch: &Architecture, entry: &Address) -> bool {
    let code = arch
        .manage()
        .get_default_code_space()
        .map(|space| space.get_index());
    if entry.get_space().map(|space| space.get_index()) != code {
        return false;
    }
    let Ok(at) = arch
        .func_sizes
        .binary_search_by_key(&entry.get_offset(), |&(addr, _)| addr)
    else {
        return false;
    };
    let translate = arch.translate();
    let Some(image) = translate
        .loader_rc()
        .try_borrow()
        .ok()
        .and_then(|loader| loader.shared_bytes())
    else {
        return false;
    };
    let mut ops = EntryOps::default();
    let len = translate.one_instruction_checked(&mut ops, entry, image.as_ref());
    let Some((&(last, relative), rest)) = ops.0.split_last() else {
        return false;
    };
    len.is_ok_and(|len| u64::try_from(len) == Ok(arch.func_sizes[at].1))
        && matches!(
            last,
            OpCode::CPUI_RETURN | OpCode::CPUI_BRANCH | OpCode::CPUI_BRANCHIND
        )
        && !relative
        && !rest.iter().any(|&(op, _)| is_transfer(op))
}

/// `true` if `call`, falling through to `fallthrough`, is the last instruction of
/// the sized function symbol holding it.
pub fn call_ends_function(arch: &Architecture, call: &Address, fallthrough: &Address) -> bool {
    let code = arch
        .manage()
        .get_default_code_space()
        .map(|space| space.get_index());
    if call.get_space().map(|space| space.get_index()) != code {
        return false;
    }
    let at = arch
        .func_sizes
        .partition_point(|&(addr, _)| addr <= call.get_offset());
    at.checked_sub(1).is_some_and(|at| {
        let (start, size) = arch.func_sizes[at];
        let end = start.saturating_add(size);
        call.get_offset() < end && fallthrough.get_offset() >= end
    })
}

fn is_transfer(op: OpCode) -> bool {
    matches!(
        op,
        OpCode::CPUI_BRANCH
            | OpCode::CPUI_CBRANCH
            | OpCode::CPUI_BRANCHIND
            | OpCode::CPUI_CALL
            | OpCode::CPUI_CALLIND
            | OpCode::CPUI_CALLOTHER
            | OpCode::CPUI_RETURN
    )
}

/// Each op of one instruction, with whether its first input is a constant (a
/// p-code-relative branch).
#[derive(Default)]
struct EntryOps(Vec<(OpCode, bool)>);

impl PcodeEmit for EntryOps {
    fn dump(
        &mut self,
        _addr: &Address,
        opc: OpCode,
        _outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        let relative = vars
            .first()
            .and_then(|v| v.space.as_ref())
            .is_some_and(|s| s.get_type() == spacetype::IPTR_CONSTANT);
        self.0.push((opc, relative));
    }
}

#[cfg(test)]
mod tests;
