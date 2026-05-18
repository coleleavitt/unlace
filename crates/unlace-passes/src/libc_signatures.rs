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

// ─── LibcSig table (rich TypeKind shapes) ─────────────────────────────
//
// The entries below are the families called out in t-libc-sig-db: each
// is the canonical *exact-name* prototype. Family-level recognition
// (aliases like `__aeabi_memcpy4`, `_Znwm`, `__printf_chk`, …) is the
// job of `crate::libc_idioms::recognize_libc`; this table is keyed
// strictly on the C standard / POSIX spelling.

use TypeKind::*;
use unlace_ir::types::{CallSiteLibcSig, TypeKind};

/// Full per-prototype libc signature, expressed in terms of the compact
/// [`TypeKind`] enum so the table can live in static storage
/// (`&'static [TypeKind]` for the argument list).
///
/// Complement to [`LibcSignature`], which carries the older string-typed
/// metadata still consumed by `vararg_detect` (param count, variadic
/// flag, return-type string). The two tables are kept in sync by
/// construction — every name in [`LIBC_SIG_TABLE`] is also expected to
/// resolve via [`lookup_libc`] when applicable, but the *richer* shape
/// (per-argument [`TypeKind`]) lives only here.
///
/// Looked up by [`lookup_libc_sig`] and stamped onto SSA call sites by
/// `crate::libc_idioms::annotate_libc_calls` into
/// [`unlace_ir::ssa::SsaFunction::libc_sig_annotations`] as the owned
/// [`CallSiteLibcSig`].
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LibcSig {
    /// Return type.
    pub ret: TypeKind,
    /// Fixed positional argument types (excluding any variadic tail).
    pub args: &'static [TypeKind],
    /// Whether the function takes additional variadic arguments after
    /// `args`.
    pub varargs: bool,
}

impl LibcSig {
    /// Materialise as an owned [`CallSiteLibcSig`] suitable for storage
    /// in [`unlace_ir::ssa::SsaFunction::libc_sig_annotations`].
    pub fn to_call_site(&self) -> CallSiteLibcSig {
        CallSiteLibcSig {
            ret: self.ret,
            args: self.args.to_vec(),
            varargs: self.varargs,
        }
    }
}

const NO_ARGS: &[TypeKind] = &[];

// printf family — first arg is `const char *` format; varargs follow.
const PRINTF_ARGS: &[TypeKind] = &[ConstCharPtr];
const FPRINTF_ARGS: &[TypeKind] = &[FilePtr, ConstCharPtr];
const SPRINTF_ARGS: &[TypeKind] = &[CharPtr, ConstCharPtr];
const SNPRINTF_ARGS: &[TypeKind] = &[CharPtr, SizeT, ConstCharPtr];
const DPRINTF_ARGS: &[TypeKind] = &[Int, ConstCharPtr];
// `va_list` is opaque; surface as `void *` for the printer.
const VPRINTF_ARGS: &[TypeKind] = &[ConstCharPtr, VoidPtr];
const VFPRINTF_ARGS: &[TypeKind] = &[FilePtr, ConstCharPtr, VoidPtr];
const VSPRINTF_ARGS: &[TypeKind] = &[CharPtr, ConstCharPtr, VoidPtr];
const VSNPRINTF_ARGS: &[TypeKind] = &[CharPtr, SizeT, ConstCharPtr, VoidPtr];

// scanf family — first arg is `const char *` format; varargs follow.
const SCANF_ARGS: &[TypeKind] = &[ConstCharPtr];
const FSCANF_ARGS: &[TypeKind] = &[FilePtr, ConstCharPtr];
const SSCANF_ARGS: &[TypeKind] = &[ConstCharPtr, ConstCharPtr];

// mem ops.
const MEMCPY_ARGS: &[TypeKind] = &[VoidPtr, ConstVoidPtr, SizeT];
const MEMSET_ARGS: &[TypeKind] = &[VoidPtr, Int, SizeT];
const MEMCMP_ARGS: &[TypeKind] = &[ConstVoidPtr, ConstVoidPtr, SizeT];

// str ops.
const STRLEN_ARGS: &[TypeKind] = &[ConstCharPtr];
const STRCPY_ARGS: &[TypeKind] = &[CharPtr, ConstCharPtr];
const STRNCPY_ARGS: &[TypeKind] = &[CharPtr, ConstCharPtr, SizeT];
const STRCAT_ARGS: &[TypeKind] = &[CharPtr, ConstCharPtr];
const STRNCAT_ARGS: &[TypeKind] = &[CharPtr, ConstCharPtr, SizeT];
const STRCMP_ARGS: &[TypeKind] = &[ConstCharPtr, ConstCharPtr];
const STRNCMP_ARGS: &[TypeKind] = &[ConstCharPtr, ConstCharPtr, SizeT];
const STRCHR_ARGS: &[TypeKind] = &[ConstCharPtr, Int];
const STRSTR_ARGS: &[TypeKind] = &[ConstCharPtr, ConstCharPtr];

// alloc.
const MALLOC_ARGS: &[TypeKind] = &[SizeT];
const CALLOC_ARGS: &[TypeKind] = &[SizeT, SizeT];
const REALLOC_ARGS: &[TypeKind] = &[VoidPtr, SizeT];
const FREE_ARGS: &[TypeKind] = &[VoidPtr];

// stdio.
const FOPEN_ARGS: &[TypeKind] = &[ConstCharPtr, ConstCharPtr];
const FCLOSE_ARGS: &[TypeKind] = &[FilePtr];
const FREAD_ARGS: &[TypeKind] = &[VoidPtr, SizeT, SizeT, FilePtr];
const FWRITE_ARGS: &[TypeKind] = &[ConstVoidPtr, SizeT, SizeT, FilePtr];
const FSEEK_ARGS: &[TypeKind] = &[FilePtr, Long, Int];
const FTELL_ARGS: &[TypeKind] = &[FilePtr];

// fd io (POSIX).
const OPEN_ARGS: &[TypeKind] = &[ConstCharPtr, Int];
const CLOSE_ARGS: &[TypeKind] = &[Int];
const READ_ARGS: &[TypeKind] = &[Int, VoidPtr, SizeT];
const WRITE_ARGS: &[TypeKind] = &[Int, ConstVoidPtr, SizeT];
const LSEEK_ARGS: &[TypeKind] = &[Int, OffT, Int];

// exit / env.
const EXIT_ARGS: &[TypeKind] = &[Int];
const GETENV_ARGS: &[TypeKind] = &[ConstCharPtr];
const SETENV_ARGS: &[TypeKind] = &[ConstCharPtr, ConstCharPtr, Int];

// str-to-num.
const ATOI_ARGS: &[TypeKind] = &[ConstCharPtr];
const STRTOL_ARGS: &[TypeKind] = &[ConstCharPtr, CharPtrPtr, Int];

const fn s(ret: TypeKind, args: &'static [TypeKind], varargs: bool) -> LibcSig {
    LibcSig { ret, args, varargs }
}

/// Static `(name, signature)` table. Linear scan via [`lookup_libc_sig`]
/// is O(N) but N ≲ 60 so this stays well under cache-line cost; an
/// alphabetical sort is enforced so an inadvertent unsorted insertion is
/// caught by the `t_libc_sig_table_is_alphabetical` unit test.
pub const LIBC_SIG_TABLE: &[(&str, LibcSig)] = &[
    // exit / env (underscore sorts before lowercase letters).
    ("_exit", s(Void, EXIT_ARGS, false)),
    ("abort", s(Void, NO_ARGS, false)),
    ("atoi", s(Int, ATOI_ARGS, false)),
    ("atol", s(Long, ATOI_ARGS, false)),
    ("atoll", s(Long, ATOI_ARGS, false)),
    ("calloc", s(VoidPtr, CALLOC_ARGS, false)),
    ("close", s(Int, CLOSE_ARGS, false)),
    ("dprintf", s(Int, DPRINTF_ARGS, true)),
    ("exit", s(Void, EXIT_ARGS, false)),
    ("fclose", s(Int, FCLOSE_ARGS, false)),
    ("fopen", s(FilePtr, FOPEN_ARGS, false)),
    ("fprintf", s(Int, FPRINTF_ARGS, true)),
    ("fread", s(SizeT, FREAD_ARGS, false)),
    ("free", s(Void, FREE_ARGS, false)),
    ("fscanf", s(Int, FSCANF_ARGS, true)),
    ("fseek", s(Int, FSEEK_ARGS, false)),
    ("ftell", s(Long, FTELL_ARGS, false)),
    ("fwrite", s(SizeT, FWRITE_ARGS, false)),
    ("getenv", s(CharPtr, GETENV_ARGS, false)),
    ("lseek", s(OffT, LSEEK_ARGS, false)),
    ("malloc", s(VoidPtr, MALLOC_ARGS, false)),
    ("memcmp", s(Int, MEMCMP_ARGS, false)),
    ("memcpy", s(VoidPtr, MEMCPY_ARGS, false)),
    ("memmove", s(VoidPtr, MEMCPY_ARGS, false)),
    ("memset", s(VoidPtr, MEMSET_ARGS, false)),
    // POSIX `open` is technically variadic (`mode_t` only when O_CREAT
    // is in `flags`); model the common two-arg shape and flag varargs.
    ("open", s(Int, OPEN_ARGS, true)),
    ("printf", s(Int, PRINTF_ARGS, true)),
    ("read", s(SSizeT, READ_ARGS, false)),
    ("realloc", s(VoidPtr, REALLOC_ARGS, false)),
    ("scanf", s(Int, SCANF_ARGS, true)),
    ("setenv", s(Int, SETENV_ARGS, false)),
    ("snprintf", s(Int, SNPRINTF_ARGS, true)),
    ("sprintf", s(Int, SPRINTF_ARGS, true)),
    ("sscanf", s(Int, SSCANF_ARGS, true)),
    ("strcat", s(CharPtr, STRCAT_ARGS, false)),
    ("strchr", s(CharPtr, STRCHR_ARGS, false)),
    ("strcmp", s(Int, STRCMP_ARGS, false)),
    ("strcpy", s(CharPtr, STRCPY_ARGS, false)),
    ("strlen", s(SizeT, STRLEN_ARGS, false)),
    ("strncat", s(CharPtr, STRNCAT_ARGS, false)),
    ("strncmp", s(Int, STRNCMP_ARGS, false)),
    ("strncpy", s(CharPtr, STRNCPY_ARGS, false)),
    ("strrchr", s(CharPtr, STRCHR_ARGS, false)),
    ("strstr", s(CharPtr, STRSTR_ARGS, false)),
    ("strtol", s(Long, STRTOL_ARGS, false)),
    ("strtoll", s(Long, STRTOL_ARGS, false)),
    ("vfprintf", s(Int, VFPRINTF_ARGS, false)),
    ("vprintf", s(Int, VPRINTF_ARGS, false)),
    ("vsnprintf", s(Int, VSNPRINTF_ARGS, false)),
    ("vsprintf", s(Int, VSPRINTF_ARGS, false)),
    ("write", s(SSizeT, WRITE_ARGS, false)),
];

/// Exact-name lookup into [`LIBC_SIG_TABLE`].
///
/// Linear scan; the table is small (≲ 60 entries) and the call-site
/// annotator runs once per function so total cost is bounded. Returns
/// `None` for unknown names — callers must NOT fall back to fuzzy
/// matching, since the family-level classifier
/// (`crate::libc_idioms::recognize_libc`) is responsible for resolving
/// platform / hardened aliases (`__memcpy_chk`, `__printf_chk`, …) to
/// their canonical spelling first.
pub fn lookup_libc_sig(name: &str) -> Option<&'static LibcSig> {
    LIBC_SIG_TABLE
        .iter()
        .find_map(|(n, sig)| (*n == name).then_some(sig))
}

/// Number of entries in [`LIBC_SIG_TABLE`].
pub fn sig_table_len() -> usize {
    LIBC_SIG_TABLE.len()
}

#[cfg(test)]
mod libc_sig_tests {
    use super::*;

    #[test]
    fn t_libc_sig_table_is_alphabetical() {
        for w in LIBC_SIG_TABLE.windows(2) {
            assert!(
                w[0].0 < w[1].0,
                "LIBC_SIG_TABLE not sorted: {:?} >= {:?}",
                w[0].0,
                w[1].0,
            );
        }
    }

    #[test]
    fn t_libc_sig_table_has_every_required_family_head() {
        for name in [
            "printf", "scanf", "memcpy", "memset", "memcmp", "strlen", "strcpy", "strcmp",
            "strchr", "strstr", "malloc", "calloc", "realloc", "free", "fopen", "fclose", "fread",
            "fwrite", "open", "close", "read", "write", "lseek", "abort", "exit", "_exit",
            "getenv", "setenv", "atoi", "atol", "strtol", "strtoll",
        ] {
            assert!(
                lookup_libc_sig(name).is_some(),
                "LIBC_SIG_TABLE missing required name `{name}`",
            );
        }
    }

    #[test]
    fn t_libc_sig_unknown_name_returns_none() {
        assert!(lookup_libc_sig("definitely_not_a_libc_function").is_none());
        assert!(lookup_libc_sig("").is_none());
        assert!(
            lookup_libc_sig("Printf").is_none(),
            "lookup is case-sensitive"
        );
    }

    #[test]
    fn t_libc_sig_printf_is_varargs_with_const_char_format() {
        let sig = lookup_libc_sig("printf").unwrap();
        assert!(sig.varargs);
        assert_eq!(sig.ret, TypeKind::Int);
        assert_eq!(sig.args, &[TypeKind::ConstCharPtr]);
    }

    #[test]
    fn t_libc_sig_memcpy_args() {
        let sig = lookup_libc_sig("memcpy").unwrap();
        assert!(!sig.varargs);
        assert_eq!(sig.ret, TypeKind::VoidPtr);
        assert_eq!(
            sig.args,
            &[TypeKind::VoidPtr, TypeKind::ConstVoidPtr, TypeKind::SizeT]
        );
    }

    #[test]
    fn t_libc_sig_strlen_returns_size_t() {
        let sig = lookup_libc_sig("strlen").unwrap();
        assert_eq!(sig.ret, TypeKind::SizeT);
        assert_eq!(sig.args, &[TypeKind::ConstCharPtr]);
        assert!(!sig.varargs);
    }

    #[test]
    fn t_libc_sig_read_write_use_ssize_t() {
        let read = lookup_libc_sig("read").unwrap();
        assert_eq!(read.ret, TypeKind::SSizeT);
        let write = lookup_libc_sig("write").unwrap();
        assert_eq!(write.ret, TypeKind::SSizeT);
    }

    #[test]
    fn t_libc_sig_lseek_uses_off_t() {
        let lseek = lookup_libc_sig("lseek").unwrap();
        assert_eq!(lseek.ret, TypeKind::OffT);
        assert!(lseek.args.contains(&TypeKind::OffT));
    }

    #[test]
    fn t_libc_sig_free_returns_void() {
        let sig = lookup_libc_sig("free").unwrap();
        assert_eq!(sig.ret, TypeKind::Void);
        assert_eq!(sig.args, &[TypeKind::VoidPtr]);
    }

    #[test]
    fn t_libc_sig_to_call_site_round_trips() {
        let sig = lookup_libc_sig("memcpy").unwrap();
        let cs = sig.to_call_site();
        assert_eq!(cs.ret, sig.ret);
        assert_eq!(cs.varargs, sig.varargs);
        assert_eq!(cs.args.as_slice(), sig.args);
    }

    #[test]
    fn t_libc_sig_table_size_lower_bound() {
        assert!(
            sig_table_len() >= 35,
            "LIBC_SIG_TABLE has only {} entries; expected ≥35",
            sig_table_len()
        );
    }
}
