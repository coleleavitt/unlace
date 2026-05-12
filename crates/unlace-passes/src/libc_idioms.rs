//! Memory / string / allocator idiom recognition (t214).
//!
//! Classifies a `Call` target's symbol name into one of a small fixed
//! roster of libc *families* — `memcpy`, `memset`, `malloc`, … — so
//! later analyses can gate on the family rather than enumerate every
//! per-platform spelling (`__aeabi_memcpy4`, `__memcpy_chk`, `_Znwm`,
//! …).
//!
//! Distinct from [`crate::libc_signatures`]: that module is the flat
//! per-symbol prototype database (return type, param count, variadic
//! flag) used by the C printer. This module is the *family classifier*
//! consumed by escape analysis, dead-store elimination, expression
//! tree folding, and the copy/clear-loop recognizers. The two never
//! cross-reference each other — the signature DB is checked
//! independently at the call site.
//!
//! The pass walks every `Call` instruction in a function, resolves the
//! callee address to a symbol name through a caller-supplied resolver,
//! runs [`recognize_libc`], and records the canonical lowercase family
//! name in [`SsaFunction::libc_call_annotations`].

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId};

/// Canonical libc family classification.
///
/// The variant set is deliberately small — only families with distinct
/// downstream effects (read-clobber shape, write-clobber shape,
/// allocator vs. deallocator, format string consumer) are split out.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum LibcKind {
    /// `memcpy` / `memmove` and platform / hardening aliases. Reads
    /// `[src, src+n)`, writes `[dst, dst+n)`.
    Memcpy,
    /// `memset` / `bzero` and aliases. Writes `[dst, dst+n)`.
    Memset,
    /// `memcmp` / `bcmp`. Pure read; returns sign of first differing byte.
    Memcmp,
    /// `strlen`. Pure read up to the first NUL.
    Strlen,
    /// `strcpy` / `strncpy` / `strlcpy` / `__strcpy_chk`. Writes a NUL-
    /// terminated string into `dst`.
    Strcpy,
    /// `strcmp` / `strncmp` / `strcasecmp`. Pure read of two strings.
    Strcmp,
    /// Heap allocator family: `malloc`, `calloc`, `realloc`,
    /// `operator new` (Itanium mangled `_Znwm` / `_Znam`), and the IDA
    /// SDK overlay (`qalloc`, `qalloc_or_throw`).
    Malloc,
    /// Heap deallocator family: `free`, `operator delete` (`_ZdlPv` /
    /// `_ZdaPv`), `qfree`.
    Free,
    /// `printf`-family format-string consumer (`printf`, `fprintf`,
    /// `sprintf`, `snprintf`, `vprintf`, `vsprintf`).
    PrintfFamily,
}

impl LibcKind {
    /// Canonical lowercase name written into
    /// [`SsaFunction::libc_call_annotations`].
    ///
    /// Multiple spellings (`memmove`, `__aeabi_memcpy4`, …) collapse to
    /// the same canonical name so downstream consumers can match on a
    /// single string literal per family.
    pub const fn canonical_name(self) -> &'static str {
        match self {
            LibcKind::Memcpy => "memcpy",
            LibcKind::Memset => "memset",
            LibcKind::Memcmp => "memcmp",
            LibcKind::Strlen => "strlen",
            LibcKind::Strcpy => "strcpy",
            LibcKind::Strcmp => "strcmp",
            LibcKind::Malloc => "malloc",
            LibcKind::Free => "free",
            LibcKind::PrintfFamily => "printf",
        }
    }
}

/// Classify `callee_name` into a [`LibcKind`], or return `None` for
/// unrecognised symbols.
///
/// The roster is intentionally exhaustive for the families it covers
/// — every spelling for one family must map to the same `LibcKind`,
/// no fuzzy / prefix matching. Anything outside the roster (custom
/// allocator, application helper) returns `None` so callers can
/// reject without false positives.
pub fn recognize_libc(callee_name: &str) -> Option<LibcKind> {
    match callee_name {
        "memcpy" | "memmove" | "__aeabi_memcpy" | "__aeabi_memcpy4" | "__memcpy_chk"
        | "___memcpy_chk" | "__builtin_memcpy" => Some(LibcKind::Memcpy),

        "memset" | "bzero" | "__memset_chk" | "__builtin_memset" => Some(LibcKind::Memset),

        "memcmp" | "bcmp" => Some(LibcKind::Memcmp),

        "strlen" => Some(LibcKind::Strlen),

        "strcpy" | "strncpy" | "strlcpy" | "__strcpy_chk" => Some(LibcKind::Strcpy),

        "strcmp" | "strncmp" | "strcasecmp" => Some(LibcKind::Strcmp),

        "malloc" | "calloc" | "realloc" | "_Znwm" | "_Znam" | "qalloc" | "qalloc_or_throw" => {
            Some(LibcKind::Malloc)
        }

        "free" | "_ZdlPv" | "_ZdaPv" | "qfree" => Some(LibcKind::Free),

        "printf" | "fprintf" | "sprintf" | "snprintf" | "vprintf" | "vsprintf" => {
            Some(LibcKind::PrintfFamily)
        }

        _ => None,
    }
}

/// Walk every `Call` instruction in `func`, resolve its target's symbol
/// through `callee_name_at_addr`, run [`recognize_libc`], and store the
/// canonical lowercase name in `func.libc_call_annotations`.
///
/// Returns the number of annotations added. Earlier annotations at the
/// same `(block, insn_idx)` are overwritten — callers should treat the
/// pass as idempotent and run it once after symbol resolution settles.
///
/// Only direct calls with a constant target address are inspected;
/// `Callind` and indirect-through-register targets are ignored (their
/// classification is the responsibility of `IndirectCallResolvePass`
/// before this pass runs).
pub fn annotate_libc_calls(
    func: &mut SsaFunction,
    callee_name_at_addr: &dyn Fn(u64) -> Option<String>,
) -> usize {
    let mut new_entries: BTreeMap<(BlockId, usize), String> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Call {
                continue;
            }
            let Some(target) = insn.inputs.first() else {
                continue;
            };
            if target.space != SpaceId::Const {
                continue;
            }
            let Some(name) = callee_name_at_addr(target.offset) else {
                continue;
            };
            if let Some(kind) = recognize_libc(&name) {
                new_entries.insert((bid, idx), kind.canonical_name().to_string());
            }
        }
    }

    let added = new_entries.len();
    for (loc, name) in new_entries {
        func.libc_call_annotations.insert(loc, name);
    }
    added
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    /// Build a tiny one-block function whose only Call targets the
    /// constant `callee_addr`. Useful as a fixture for the pass tests.
    fn make_func_with_call(callee_addr: u64) -> SsaFunction {
        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let target = Varnode::constant(callee_addr, 8);
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![target],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn t214_recognize_memcpy_aliases() {
        let mut ssa = make_func_with_call(0x2000);
        let added = annotate_libc_calls(&mut ssa, &|_| Some("__aeabi_memcpy4".to_string()));
        assert_eq!(added, 1);
        assert_eq!(
            ssa.libc_call_annotations
                .get(&(BlockId(0), 0))
                .map(String::as_str),
            Some("memcpy"),
        );
    }

    #[test]
    fn t214_recognize_memset() {
        let mut ssa = make_func_with_call(0x2000);
        annotate_libc_calls(&mut ssa, &|_| Some("bzero".to_string()));
        assert_eq!(
            ssa.libc_call_annotations
                .get(&(BlockId(0), 0))
                .map(String::as_str),
            Some("memset"),
        );
    }

    #[test]
    fn t214_recognize_strlen() {
        let mut ssa = make_func_with_call(0x2000);
        annotate_libc_calls(&mut ssa, &|_| Some("strlen".to_string()));
        assert_eq!(
            ssa.libc_call_annotations
                .get(&(BlockId(0), 0))
                .map(String::as_str),
            Some("strlen"),
        );
    }

    #[test]
    fn t214_recognize_malloc_family() {
        let mut ssa = make_func_with_call(0x2000);
        annotate_libc_calls(&mut ssa, &|_| Some("_Znwm".to_string()));
        assert_eq!(
            ssa.libc_call_annotations
                .get(&(BlockId(0), 0))
                .map(String::as_str),
            Some("malloc"),
        );
    }

    #[test]
    fn t214_recognize_free_family() {
        let mut ssa = make_func_with_call(0x2000);
        annotate_libc_calls(&mut ssa, &|_| Some("_ZdlPv".to_string()));
        assert_eq!(
            ssa.libc_call_annotations
                .get(&(BlockId(0), 0))
                .map(String::as_str),
            Some("free"),
        );
    }

    #[test]
    fn t214_unrecognized_callee_yields_none() {
        assert!(recognize_libc("blah_foo").is_none());
        let mut ssa = make_func_with_call(0x2000);
        let added = annotate_libc_calls(&mut ssa, &|_| Some("blah_foo".to_string()));
        assert_eq!(added, 0);
        assert!(ssa.libc_call_annotations.is_empty());
    }
}
