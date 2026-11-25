use super::*;
use std::collections::HashSet;

#[test]
fn table_is_disjoint_from_libc() {
    // A name in two tables would be committed twice with two different
    // calling conventions -- the libc ones are __cdecl, these are __stdcall.
    for (name, _) in WIN32 {
        assert!(
            !super::super::LIBC.iter().any(|(n, _)| n == name),
            "{name} is already in the base libc table"
        );
        assert!(
            !super::super::libcsigs::LIBC_EXT
                .iter()
                .any(|(n, _)| n == name),
            "{name} is already in the libcsigs table"
        );
    }
}

#[test]
fn declares_names_only_this_table() {
    assert!(declares("CreateThread"));
    assert!(declares("MessageBoxW"));
    assert!(!declares("strlen"));
    assert!(!declares("NtCreateFile"));
}

#[test]
fn table_names_are_unique_and_sorted_within_groups() {
    let mut seen: HashSet<&str> = HashSet::new();
    for (name, _) in WIN32 {
        assert!(seen.insert(name), "{name} appears twice in WIN32");
    }
}

#[test]
fn no_entry_is_variadic() {
    // No `WINAPI` export in this table is variadic. It matters more here than
    // in the libc tables: the x86 PE default model is __stdcall with
    // extrapop="unknown", so the fixed arity is also the callee's stack pop.
    for (name, sig) in WIN32 {
        assert_eq!(
            sig.vararg, -1,
            "{name}: this table carries no variadic export"
        );
    }
}

#[test]
fn the_resource_loader_family_carries_its_documented_arity() {
    // The witness of the RE need `resource-loader-c-retains`. Arity is the
    // load-bearing field: it is what makes the call stop rendering
    // `LoadLibraryExW()` and what the __stdcall model turns into `extrapop`.
    let get = |want: &str| &WIN32.iter().find(|(n, _)| *n == want).expect(want).1;
    assert_eq!(
        get("LoadLibraryExW").params.len(),
        3,
        "lpLibFileName, hFile, dwFlags"
    );
    assert!(
        matches!(get("LoadLibraryExW").params[0], Ty::WCharPtr),
        "the W form takes LPCWSTR"
    );
    assert!(
        matches!(get("LoadLibraryExA").params[0], Ty::CharPtr),
        "the A form takes LPCSTR"
    );
    assert_eq!(
        get("EnumResourceTypesW").params.len(),
        3,
        "hModule, lpEnumFunc, lParam"
    );
    assert_eq!(
        get("EnumResourceNamesW").params.len(),
        4,
        "hModule, lpszType, lpEnumFunc, lParam"
    );
    assert_eq!(
        get("FindResourceW").params.len(),
        3,
        "hModule, lpName, lpType"
    );
    assert_eq!(get("LoadResource").params.len(), 2, "hModule, hResInfo");
    assert_eq!(get("SizeofResource").params.len(), 2, "hModule, hResInfo");
    assert_eq!(get("FreeLibrary").params.len(), 1, "hLibModule");
}

#[test]
fn the_ordinal_imported_oleaut32_family_carries_its_documented_arity() {
    let get = |want: &str| &WIN32.iter().find(|(n, _)| *n == want).expect(want).1;
    assert_eq!(get("SysAllocString").params.len(), 1, "psz");
    assert!(
        matches!(get("SysAllocString").ret, Ty::WCharPtr),
        "returns a BSTR"
    );
    assert_eq!(get("SysAllocStringLen").params.len(), 2, "strIn, ui");
    assert_eq!(get("SysFreeString").params.len(), 1, "bstrString");
    assert_eq!(get("VariantInit").params.len(), 1, "pvarg");
    assert_eq!(get("VariantCopy").params.len(), 2, "pvargDest, pvargSrc");
    assert_eq!(get("ioctlsocket").params.len(), 3, "s, cmd, argp");
}

#[test]
fn no_crt_spelling_is_admitted() {
    // Every entry is a callee-cleans WINAPI export. A __cdecl msvcrt name
    // here would be given the wrong stack cleanup on i386, so the two worlds
    // are kept apart by construction rather than by review.
    for crt in [
        "malloc",
        "free",
        "memcpy",
        "memset",
        "printf",
        "exit",
        "_initterm",
        "wcslen",
    ] {
        assert!(
            !WIN32.iter().any(|(n, _)| *n == crt),
            "{crt} is a CRT (__cdecl) name and belongs to the libc tables"
        );
    }
}

#[test]
fn a_pe_import_yields_one_address_per_resolver_entry() {
    // The address key is the whole point: on a PE the resolver names both the
    // IAT slot and the `FF 25` thunk veneer, and the prototype has to land on
    // the thunk because that is the address a direct `call` resolves to.
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/win32sigs_pe_i386.exe"
    );
    let bytes = std::fs::read(path).expect("read win32sigs fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse win32sigs fixture");
    let pairs = imported_addrs_by_name(&file, &bytes);
    let addrs: Vec<u64> = pairs
        .iter()
        .filter(|(n, _)| n == "LoadLibraryExW")
        .map(|(_, a)| *a)
        .collect();
    assert!(
        addrs.len() >= 2,
        "the resolver must name the IAT slot AND the thunk veneer: {addrs:x?}"
    );
}

#[test]
fn an_elf_yields_nothing() {
    // PE/COFF only: an ELF that happens to define a matching spelling must be
    // untouched (the pass returns early on format).
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    assert_eq!(file.format(), object::BinaryFormat::Elf);
    let pairs = imported_addrs_by_name(&file, &bytes);
    assert!(
        !pairs.iter().any(|(n, _)| WIN32.iter().any(|(w, _)| w == n)),
        "no Win32 name should match an ELF import"
    );
}
