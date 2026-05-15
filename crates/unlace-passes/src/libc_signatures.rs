//! Hardcoded signature database for common libc functions.
//!
//! When a `Call` target resolves to a known libc symbol (PLT entry, import
//! reference, or relocation), the signature recovered here lets later passes
//! and the printer emit a proper prototype, mark `noreturn` calls, and stop
//! treating callee-clobbered registers as live.
//!
//! Each [`LibcSignature`] is intentionally minimal: enough to type-check the
//! call site and drive `noreturn`/variadic decisions. Full type information
//! (`size_t`, `FILE*`, etc.) is encoded as plain strings since the printer
//! is allowed to splice them into the C output verbatim.
//!
//! In addition to standard libc, the database includes a small overlay of
//! IDA SDK helpers (`qfree`, `qalloc`, `qvector_reserve`, `get_func`, ...)
//! that appear in the parity target binary's reference traces. They share
//! the same lookup function so call-site resolution does not need to know
//! which catalog a name came from.

use std::collections::BTreeMap;
use std::sync::OnceLock;

/// Signature metadata for a known external function.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LibcSignature {
    /// Symbol name as it appears in the binary's import table.
    pub name: &'static str,
    /// Number of fixed positional parameters (excluding variadic tail).
    pub param_count: usize,
    /// Textual return type, splice-ready for C output.
    pub return_type: &'static str,
    /// Whether the function never returns to its caller.
    pub noreturn: bool,
    /// Whether the function takes a variable number of arguments.
    pub variadic: bool,
}

const fn sig(
    name: &'static str,
    param_count: usize,
    return_type: &'static str,
    noreturn: bool,
    variadic: bool,
) -> LibcSignature {
    LibcSignature {
        name,
        param_count,
        return_type,
        noreturn,
        variadic,
    }
}

const LIBC_TABLE: &[LibcSignature] = &[
    sig("memcmp", 3, "int", false, false),
    sig("memcpy", 3, "void *", false, false),
    sig("memmove", 3, "void *", false, false),
    sig("memset", 3, "void *", false, false),
    sig("strcat", 2, "char *", false, false),
    sig("strchr", 2, "char *", false, false),
    sig("strcmp", 2, "int", false, false),
    sig("strcpy", 2, "char *", false, false),
    sig("strlen", 1, "size_t", false, false),
    sig("strncmp", 3, "int", false, false),
    sig("strncpy", 3, "char *", false, false),
    sig("strrchr", 2, "char *", false, false),
    sig("strstr", 2, "char *", false, false),
    sig("calloc", 2, "void *", false, false),
    sig("free", 1, "void", false, false),
    sig("malloc", 1, "void *", false, false),
    sig("realloc", 2, "void *", false, false),
    sig("fclose", 1, "int", false, false),
    sig("fopen", 2, "FILE *", false, false),
    sig("fprintf", 2, "int", false, true),
    sig("fputs", 2, "int", false, false),
    sig("fread", 4, "size_t", false, false),
    sig("fwrite", 4, "size_t", false, false),
    sig("printf", 1, "int", false, true),
    sig("puts", 1, "int", false, false),
    sig("snprintf", 3, "int", false, true),
    sig("sprintf", 2, "int", false, true),
    // glibc FORTIFY_SOURCE variants — same calling convention as the
    // non-_chk forms but with one extra leading "flag" argument that
    // shifts the format-string position by 1.
    sig("__printf_chk", 2, "int", false, true),
    sig("__fprintf_chk", 3, "int", false, true),
    sig("__sprintf_chk", 4, "int", false, true),
    sig("__snprintf_chk", 5, "int", false, true),
    sig("__vprintf_chk", 2, "int", false, true),
    sig("__vsprintf_chk", 4, "int", false, true),
    sig("abort", 0, "void", true, false),
    sig("atoi", 1, "int", false, false),
    sig("atol", 1, "long", false, false),
    sig("exit", 1, "void", true, false),
    sig("getenv", 1, "char *", false, false),
    sig("abs", 1, "int", false, false),
    sig("labs", 1, "long", false, false),
    // `qalloc_or_throw` is intentionally NOT marked noreturn: it can throw,
    // but exception handling is opaque to the lifter and noreturn would
    // prune live successor blocks at every call site.
    sig("get_func", 1, "func_t *", false, false),
    sig("get_inf_structure", 0, "idainfo *", false, false),
    sig("getseg", 1, "segment_t *", false, false),
    sig("qalloc", 1, "void *", false, false),
    sig("qalloc_or_throw", 1, "void *", false, false),
    sig("qfree", 1, "void", false, false),
    sig("qvector_reserve", 3, "void", false, false),
    // C++ exception handling (Itanium ABI)
    sig("__cxa_allocate_exception", 1, "void *", false, false),
    sig("__cxa_throw", 3, "void", true, false),
    sig("__cxa_begin_catch", 1, "void *", false, false),
    sig("__cxa_end_catch", 0, "void", false, false),
    sig("__cxa_rethrow", 0, "void", true, false),
    sig("__cxa_free_exception", 1, "void", false, false),
    sig("__dynamic_cast", 4, "void *", false, false),
    sig("_Unwind_Resume", 1, "void", true, false),
];

fn table() -> &'static BTreeMap<&'static str, &'static LibcSignature> {
    static TABLE: OnceLock<BTreeMap<&'static str, &'static LibcSignature>> = OnceLock::new();
    TABLE.get_or_init(|| {
        let mut map = BTreeMap::new();
        for entry in LIBC_TABLE {
            map.insert(entry.name, entry);
        }
        map
    })
}

/// Look up a libc signature by exact symbol name.
///
/// The match is case-sensitive and does not strip versioning suffixes
/// (`@GLIBC_2.2.5`, `__libc_*`, ...); callers should normalize the import
/// name first.
pub fn lookup_libc(name: &str) -> Option<&'static LibcSignature> {
    table().get(name).copied()
}

/// Iterate over every signature in the database in deterministic
/// (alphabetical) order.
pub fn iter_signatures() -> impl Iterator<Item = &'static LibcSignature> {
    table().values().copied()
}

/// Number of signatures in the database.
pub fn len() -> usize {
    table().len()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn lookup_strlen_returns_expected_signature() {
        let sig = lookup_libc("strlen").expect("strlen must be in the database");
        assert_eq!(sig.name, "strlen");
        assert_eq!(sig.param_count, 1);
        assert_eq!(sig.return_type, "size_t");
        assert!(!sig.noreturn);
        assert!(!sig.variadic);
    }

    #[test]
    fn lookup_unknown_returns_none() {
        assert!(lookup_libc("definitely_not_a_libc_function").is_none());
        assert!(lookup_libc("").is_none());
    }

    #[test]
    fn exit_and_abort_are_noreturn() {
        let exit = lookup_libc("exit").expect("exit");
        assert!(exit.noreturn, "exit must be marked noreturn");
        assert_eq!(exit.return_type, "void");

        let abort = lookup_libc("abort").expect("abort");
        assert!(abort.noreturn, "abort must be marked noreturn");
        assert_eq!(abort.param_count, 0);
    }

    #[test]
    fn variadic_functions_marked_correctly() {
        for name in ["printf", "fprintf", "sprintf", "snprintf"] {
            let s = lookup_libc(name).unwrap_or_else(|| panic!("missing {name}"));
            assert!(s.variadic, "{name} must be variadic");
        }
        assert!(!lookup_libc("strlen").unwrap().variadic);
        assert!(!lookup_libc("malloc").unwrap().variadic);
    }

    #[test]
    fn database_has_at_least_thirty_entries() {
        let n = len();
        assert!(n >= 30, "expected at least 30 signatures, got {n}");
    }

    #[test]
    fn ida_sdk_overlay_is_present() {
        let names = [
            "qfree",
            "qalloc",
            "qalloc_or_throw",
            "qvector_reserve",
            "get_func",
            "getseg",
            "get_inf_structure",
        ];
        for name in names {
            assert!(
                lookup_libc(name).is_some(),
                "IDA SDK overlay should include {name}",
            );
        }
        let qfree = lookup_libc("qfree").unwrap();
        assert_eq!(qfree.return_type, "void");
        assert_eq!(qfree.param_count, 1);
        assert!(!qfree.noreturn);

        let qalloc = lookup_libc("qalloc").unwrap();
        assert_eq!(qalloc.return_type, "void *");
        assert!(!qalloc.noreturn);

        let qalloc_or_throw = lookup_libc("qalloc_or_throw").unwrap();
        assert!(
            !qalloc_or_throw.noreturn,
            "qalloc_or_throw must NOT be noreturn (it throws but the lifter \
             still needs successor blocks)",
        );
    }

    #[test]
    fn iteration_is_alphabetical() {
        let names: Vec<&'static str> = iter_signatures().map(|s| s.name).collect();
        let mut sorted = names.clone();
        sorted.sort_unstable();
        assert_eq!(names, sorted, "BTreeMap iteration must be sorted");
    }

    #[test]
    fn cxa_throw_and_rethrow_are_noreturn() {
        let throw = lookup_libc("__cxa_throw").expect("__cxa_throw");
        assert!(throw.noreturn, "__cxa_throw must be marked noreturn");
        assert_eq!(throw.param_count, 3);
        assert_eq!(throw.return_type, "void");

        let rethrow = lookup_libc("__cxa_rethrow").expect("__cxa_rethrow");
        assert!(rethrow.noreturn, "__cxa_rethrow must be marked noreturn");
        assert_eq!(rethrow.param_count, 0);
    }

    #[test]
    fn cxa_exception_functions_present() {
        let names = [
            "__cxa_allocate_exception",
            "__cxa_throw",
            "__cxa_begin_catch",
            "__cxa_end_catch",
            "__cxa_rethrow",
            "__cxa_free_exception",
            "__dynamic_cast",
            "_Unwind_Resume",
        ];
        for name in names {
            assert!(
                lookup_libc(name).is_some(),
                "C++ exception function {name} must be in the database",
            );
        }

        let alloc = lookup_libc("__cxa_allocate_exception").unwrap();
        assert_eq!(alloc.param_count, 1);
        assert_eq!(alloc.return_type, "void *");
        assert!(!alloc.noreturn);

        let begin_catch = lookup_libc("__cxa_begin_catch").unwrap();
        assert_eq!(begin_catch.param_count, 1);
        assert_eq!(begin_catch.return_type, "void *");

        let end_catch = lookup_libc("__cxa_end_catch").unwrap();
        assert_eq!(end_catch.param_count, 0);
        assert_eq!(end_catch.return_type, "void");

        let resume = lookup_libc("_Unwind_Resume").unwrap();
        assert!(resume.noreturn);
    }
}
