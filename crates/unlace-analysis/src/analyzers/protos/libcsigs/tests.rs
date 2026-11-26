use super::*;
use std::collections::HashSet;

#[test]
fn libm_table_is_disjoint_and_declares_a_float() {
    for (name, sig) in LIBM_VFP {
        assert!(
            !super::super::LIBC
                .iter()
                .chain(LIBC_EXT)
                .any(|(n, _)| n == name),
            "{name}"
        );
        assert!(
            matches!(sig.ret, Ty::Float | Ty::Double)
                || sig
                    .params
                    .iter()
                    .any(|p| matches!(p, Ty::Float | Ty::Double)),
            "{name}"
        );
    }
    assert!(LIBM_VFP.windows(2).all(|w| w[0].0 < w[1].0));
}

#[test]
fn table_is_disjoint_from_base() {
    for (name, _) in LIBC_EXT {
        assert!(
            !super::super::LIBC.iter().any(|(n, _)| n == name),
            "{name} is already in the base table - a duplicate prototype would be committed twice"
        );
    }
}

#[test]
fn table_names_are_unique() {
    let mut seen: HashSet<&str> = HashSet::new();
    for (name, _) in LIBC_EXT {
        assert!(seen.insert(name), "{name} appears twice in LIBC_EXT");
    }
}

#[test]
fn vararg_slots_are_the_slot_past_the_fixed_parameters() {
    for (name, sig) in LIBC_EXT {
        if sig.vararg >= 0 {
            assert_eq!(
                sig.vararg as usize,
                sig.params.len(),
                "{name}: the variadic slot is the one past the fixed parameters"
            );
        }
    }
}

#[test]
fn fortify_printf_family_carries_the_extra_flag_parameter() {
    // The FORTIFY entry points are NOT aliases of the names they wrap: each
    // takes an extra `int flag` (and `__snprintf_chk` two extra `size_t`s), so
    // the format string sits at a different slot. Getting this wrong would
    // shift every argument of the corpus's highest-frequency printf call.
    let get = |want: &str| {
        LIBC_EXT
            .iter()
            .find(|(n, _)| *n == want)
            .expect(want)
            .1
            .vararg
    };
    assert_eq!(get("__printf_chk"), 2, "int flag, const char *fmt, ...");
    assert_eq!(
        get("__fprintf_chk"),
        3,
        "FILE *, int flag, const char *fmt, ..."
    );
    assert_eq!(
        get("__sprintf_chk"),
        4,
        "char *, int flag, size_t, const char *fmt, ..."
    );
    assert_eq!(
        get("__snprintf_chk"),
        5,
        "char *, size_t, int flag, size_t, const char *fmt, ..."
    );
}

/// The widened set is a TABLE, and its one hazard is an entry whose slot
/// count or vararg index does not match the platform declaration it was
/// reduced from. These four are the shapes a reviewer would check by hand:
/// the `*at` family's directory-fd-first order, `renameat`'s two paths, the
/// fortified `__fgets_chk`'s buffer, and `error_at_line`'s format slot,
/// which sits at 4 rather than 2 because of the file/line pair.
#[test]
fn the_widened_entries_keep_the_declared_slot_order() {
    let get = |want: &str| &LIBC_EXT.iter().find(|(n, _)| *n == want).expect(want).1;
    let faccessat = get("faccessat");
    assert_eq!(
        faccessat.params.len(),
        4,
        "int faccessat(int, const char *, int, int)"
    );
    assert!(
        matches!(faccessat.params[0], Ty::Int),
        "the directory fd is first"
    );
    assert!(
        matches!(faccessat.params[1], Ty::CharPtr),
        "the path is second"
    );
    let renameat = get("renameat");
    assert_eq!(
        renameat.params.len(),
        4,
        "int renameat(int, const char *, int, const char *)"
    );
    assert!(matches!(renameat.params[1], Ty::CharPtr) && matches!(renameat.params[3], Ty::CharPtr));
    let fgets = get("__fgets_chk");
    assert!(
        matches!(fgets.ret, Ty::CharPtr),
        "char *__fgets_chk(char *, size_t, int, FILE *)"
    );
    assert!(matches!(fgets.params[0], Ty::CharPtr) && matches!(fgets.params[3], Ty::VoidPtr));
    let eal = get("error_at_line");
    assert_eq!(
        eal.vararg, 5,
        "int, int, const char *file, unsigned line, const char *fmt, ..."
    );
    assert!(
        matches!(eal.params[4], Ty::CharPtr),
        "the format is slot 4, not slot 2"
    );
}

/// The width rule is the table's whole safety argument, so the names it
/// rejects are pinned as ABSENT rather than left to drift in on a later
/// widening pass. All five return a 64-bit integer type whose width is not
/// fixed by the data model, exactly like the `lseek`/`time`/`qsort` set the
/// module header already names.
#[test]
fn a_sixty_four_bit_return_is_still_rejected() {
    for name in ["strtoll", "strtoull", "strtoimax", "strtoumax", "llabs"] {
        assert!(
            !LIBC_EXT.iter().any(|(n, _)| *n == name),
            "{name} returns long long/intmax_t and has no honest Ty spelling"
        );
    }
}

/// The floating-point rows are exactly what the corpus rule admits once
/// `float` and `double` are in the vocabulary, and `long double` is not.
#[test]
fn the_float_entries_are_the_measured_ones() {
    let get = |want: &str| &LIBC_EXT.iter().find(|(n, _)| *n == want).expect(want).1;
    assert!(
        matches!(get("strtod").ret, Ty::Double),
        "double strtod(const char *, char **)"
    );
    assert!(
        matches!(get("strtof").ret, Ty::Float),
        "float strtof(const char *, char **)"
    );
    assert!(matches!(get("strtod").params[1], Ty::CharPtrPtr));
    assert!(
        matches!(get("strtod_l").ret, Ty::Double),
        "double strtod_l(const char *, char **, locale_t)"
    );
    assert!(matches!(
        get("strtod_l").params[..],
        [Ty::CharPtr, Ty::CharPtrPtr, Ty::VoidPtr]
    ));
    assert!(matches!(get("pow").params[..], [Ty::Double, Ty::Double]));
    for name in ["strtold", "nanf", "fabsf", "sqrtf"] {
        assert!(
            !LIBC_EXT.iter().any(|(n, _)| *n == name),
            "{name} is either long double or imported by fewer than three corpus binaries"
        );
    }
}

/// Nothing the widened set admits may be spelled by value where the
/// vocabulary only knows a pointer's width: every `NamedPtr` payload the
/// sibling table uses stays out of this one, which is what lets the whole
/// table be built under `Layout::Opaque` (`L`).
#[test]
fn the_table_carries_no_named_pointee() {
    for (name, sig) in LIBC_EXT {
        assert!(!matches!(sig.ret, Ty::NamedPtr(_)), "{name}: return");
        for (i, p) in sig.params.iter().enumerate() {
            assert!(!matches!(p, Ty::NamedPtr(_)), "{name}: p{i}");
        }
    }
}

#[test]
fn only_imported_names_are_seeded() {
    // The wrongness axis, pinned: zlib's `minigzip` DEFINES
    // `void error(const char *msg)` while the table carries glibc's
    // `void error(int, int, const char *, ...)`. Seeding a name the image
    // defines would assert two phantom leading `int`s on it.
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    let imported = super::super::loaded_function_names(&file, &bytes, &[], true);
    for want in ["read", "open", "exit"] {
        assert!(
            imported.contains(want),
            "fauxware imports {want}: {imported:?}"
        );
        assert!(
            LIBC_EXT.iter().any(|(n, _)| n == &want),
            "table should know {want}"
        );
    }
    for defined in ["main", "authenticate"] {
        assert!(
            !imported.contains(defined),
            "{defined} is defined, not imported"
        );
    }
}
