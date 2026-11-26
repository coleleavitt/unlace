//! (unlace) `unlace_noreturnextern` — name-based no-return for undefined externs
//! (S2 flow classification).  Inspired by angr's call-graph no-return analysis
//! (`test_tail_tail_bytes_ret_dup`, `tail.o::tail_bytes`).
//!
//! ## The structural gap
//!
//! In an ELF **relocatable object** (ET_REL `.o`) a libc no-return like
//! `__stack_chk_fail` is an **undefined external** symbol — `UND`, `NOTYPE`,
//! size 0, no address of its own:
//!
//! ```text
//! 197: 0000000000000000  0 NOTYPE GLOBAL DEFAULT UND __stack_chk_fail
//! ```
//!
//! unlace's analysis-tier known-no-return pass (`noreturn_known`, default on,
//! `unlace-analysis::loader::noreturn`) keys its facts on the **address** of a
//! *defined* `FUNC` symbol.  An UND extern has no definition, so it is never
//! marked — even though its base name (`stack_chk_fail`) is on the shipped
//! `ElfFunctionsThatDoNotReturn` list.
//!
//! At decompile flow time `FlowInfo` asks
//! [`FlowEnvironment::query_call_no_return`](crate::flow) → the call to
//! `__stack_chk_fail` resolves to a *display name* (the relocation supplies it),
//! but the resolved symbol's no-return flag is false.  The hook returns false, no
//! `artificialHalt(noreturn)` is planted, and flow runs straight off the end of
//! the function into the next one — `tail.o::tail_bytes` (615 bytes,
//! `0x401e80..0x4020e7`) renders as 326 lines swallowing several neighbour
//! functions, vs angr's 96.
//!
//! ## What this module owns
//!
//! [`matches_noreturn_extern_name`] is the *decision* only: does the resolved
//! callee display name match a known ELF no-return name (after stripping leading
//! `_` from its base, honoring a `std`-only namespace guard)?  The plant
//! (`artificialHalt(noreturn)` + flow truncation) is driven by `flow.rs`, exactly
//! as for an address-marked no-return callee.  This mirrors the analysis-tier
//! matcher in `unlace-analysis::loader::noreturn` (`name_matches`), but applied
//! at the decompiler flow boundary so it catches the undefined-extern case the
//! address-keyed pass cannot reach.
//!
//! ## The gate
//!
//!   - the match runs under `noreturn_known` (the registered option `NoreturnKnown`,
//!     the known-no-return pass's own flag), read once at flow time on the main arch
//!     (no ArchContext copy — flow runs on the main arch, like
//!     [`is_tail_call_branch`](crate::tailcalljump)).
//!   - the **callee resolution** `query_call(dest)` (the resolved display name) is
//!     done by the caller (`decompile_drive.rs`) and the name passed in here.

use unlace_base::marshal::ElementId;

/// Marshaling element `<noreturn_extern>` (unlace).  ElementIds live in the 4000+
/// range (next free above `regionstructure`'s 4102 in the 41xx block: 4103).
pub const ELEM_NORETURNEXTERN: ElementId = ElementId::new("noreturn_extern", 4103);

/// The shipped ELF known-no-return base names (mirrors the vendored
/// `unlace-analysis/data/ElfFunctionsThatDoNotReturn`, after the same leading-`_`
/// strip the list reader applies — so the table holds the *stripped* base name).
/// An exact match against the stripped callee base name is required (no
/// substring/fuzzy match), bounding the matched surface to this closed set.
const ELF_NORETURN_NAMES: &[&str] = &[
    "exit",
    "cexit",
    "c_exit",
    "abort",
    "reboot",
    "longjmp",
    "longjmp_chk",
    "siglongjmp",
    "panic",
    "stack_chk_fail",
    "cxa_throw",
    "cxa_terminate",
    "cxa_call_unexpected",
    "cxa_bad_cast",
    "Unwind_Resume",
    "assert_fail",
    "assert_rtn",
    "fortify_fail",
    "ZSt9terminatev",
    "ZN10__cxxabiv111__terminateEPFvvE",
    "pthread_exit",
];

/// Strip **all** leading underscores (faithful to the analysis-tier reader,
/// `NoReturnFunctionAnalyzer.java:84-91` — a loop, not a single strip: so
/// `__stack_chk_fail` -> `stack_chk_fail` and `_exit` -> `exit`).
fn strip_leading_underscores(s: &str) -> &str {
    s.trim_start_matches('_')
}

/// Split a (possibly namespaced) symbol name into `(base, namespace)`.  unlace
/// installs `::`-split namespaces, so a demangled `Menu::exit` has base `exit` in
/// namespace `Menu`; a flat C import `exit` has no namespace.
fn base_and_namespace(name: &str) -> (&str, Option<&str>) {
    match name.rfind("::") {
        Some(i) => (&name[i + 2..], Some(&name[..i])),
        None => (name, None),
    }
}

/// (unlace) Does the resolved callee display `name` match a known ELF no-return
/// name?  Mirrors `unlace-analysis::loader::noreturn::name_matches` (the
/// namespace guard + leading-`_` strip), restricted to an exact match against the
/// closed [`ELF_NORETURN_NAMES`] set.
///
/// Honors the namespace guard (only global / `std` — never a C++ class method like
/// `Menu::_exit`), so user code in another namespace can never be wrongly
/// truncated.  The caller only consults this when the address-keyed no-return
/// check has already returned false, so a callee already marked no-return is
/// unaffected.
pub fn matches_noreturn_extern_name(name: &str) -> bool {
    let (base, ns) = base_and_namespace(name);
    // Namespace guard: skip class methods. Global (no namespace) is allowed; the
    // sole allowed non-global namespace is exactly `std`.
    if let Some(ns) = ns {
        if ns != "std" {
            return false;
        }
    }
    let stripped = strip_leading_underscores(base);
    if stripped.is_empty() {
        return false;
    }
    ELF_NORETURN_NAMES.iter().any(|n| *n == stripped)
}

#[cfg(test)]
mod tests;
