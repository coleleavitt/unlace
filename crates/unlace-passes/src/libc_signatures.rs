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
    LibcSignature { name, param_count, return_type, noreturn, variadic }
}

const LIBC_TABLE: &[LibcSignature] = &[
    sig("memcmp",   3, "int",       false, false),
    sig("memcpy",   3, "void *",    false, false),
    sig("memmove",  3, "void *",    false, false),
    sig("memset",   3, "void *",    false, false),
    sig("strcat",   2, "char *",    false, false),
    sig("strchr",   2, "char *",    false, false),
    sig("strcmp",   2, "int",       false, false),
    sig("strcpy",   2, "char *",    false, false),
    sig("strlen",   1, "size_t",    false, false),
    sig("strncmp",  3, "int",       false, false),
    sig("strncpy",  3, "char *",    false, false),
    sig("strrchr",  2, "char *",    false, false),
    sig("strstr",   2, "char *",    false, false),

    sig("calloc",   2, "void *",    false, false),
    sig("free",     1, "void",      false, false),
    sig("malloc",   1, "void *",    false, false),
    sig("realloc",  2, "void *",    false, false),

    sig("fclose",   1, "int",       false, false),
    sig("fopen",    2, "FILE *",    false, false),
    sig("fprintf",  2, "int",       false, true),
    sig("fputs",    2, "int",       false, false),
    sig("fread",    4, "size_t",    false, false),
    sig("fwrite",   4, "size_t",    false, false),
    sig("printf",   1, "int",       false, true),
    sig("puts",     1, "int",       false, false),
    sig("snprintf", 3, "int",       false, true),
    sig("sprintf",  2, "int",       false, true),

    sig("abort",    0, "void",      true,  false),
    sig("atoi",     1, "int",       false, false),
    sig("atol",     1, "long",      false, false),
    sig("exit",     1, "void",      true,  false),
    sig("getenv",   1, "char *",    false, false),

    sig("abs",      1, "int",       false, false),
    sig("labs",     1, "long",      false, false),
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
    fn iteration_is_alphabetical() {
        let names: Vec<&'static str> = iter_signatures().map(|s| s.name).collect();
        let mut sorted = names.clone();
        sorted.sort_unstable();
        assert_eq!(names, sorted, "BTreeMap iteration must be sorted");
    }
}
