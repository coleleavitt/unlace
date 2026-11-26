use super::*;

const C_KEYWORDS: &[&str] = &[
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else",
    "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", "register",
    "restrict", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
    "union", "unsigned", "void", "volatile", "while",
];

#[test]
fn sorted_and_unique() {
    assert!(NAMES.windows(2).all(|w| w[0].0 < w[1].0));
    assert!(WIN32_NAMES.windows(2).all(|w| w[0].0 < w[1].0));
}

#[test]
fn every_win32_entry_matches_its_signature_slot_for_slot() {
    let win32 = super::super::win32sigs::WIN32;
    for (name, names) in WIN32_NAMES {
        let sig = win32.iter().find(|(n, _)| n == name).map(|(_, sig)| sig);
        assert_eq!(
            sig.map(|sig| sig.params.len()),
            Some(names.params.len()),
            "{name}"
        );
        assert!(
            NAMES.binary_search_by(|(n, _)| n.cmp(name)).is_err(),
            "{name} is in both tables"
        );
    }
}

#[test]
fn the_common_win32_calls_carry_their_sdk_names() {
    let read = library_names("ReadFile").unwrap();
    assert_eq!(
        read.params,
        [
            "hFile",
            "lpBuffer",
            "nNumberOfBytesToRead",
            "lpNumberOfBytesRead",
            "lpOverlapped"
        ]
    );
    assert_eq!(read.ret, None);
    assert_eq!(library_names("CreateFileW").unwrap().ret, Some("hFile"));
    assert_eq!(library_names("LoadLibraryW").unwrap().ret, Some("hModule"));
    assert_eq!(
        library_names("GetProcAddress").unwrap().params,
        ["hModule", "lpProcName"]
    );
    assert_eq!(library_names("HeapAlloc").unwrap().ret, Some("lpMem"));
    assert_eq!(
        library_names("SysFreeString").unwrap().params,
        ["bstrString"]
    );
}

#[test]
fn every_entry_matches_a_signature_slot_for_slot() {
    let _gate = super::super::libctypes::tests::ENV_LOCK
        .lock()
        .unwrap_or_else(|p| p.into_inner());
    let tables = super::super::LIBC
        .iter()
        .chain(super::super::libcsigs::LIBC_EXT.iter())
        .chain(super::super::libctypes::LIBC_NAMED.iter())
        .chain(super::super::libctypes::LIBC_EXT_NAMED.iter())
        .chain(super::super::libctypes::LIBC_DEFINED_NAMED.iter())
        .chain(super::super::libctypes::LIBC_IMPORTED_OBSTACK.iter());
    let mut seen = 0;
    for (name, sig) in tables {
        if let Some(names) = library_names(name) {
            assert_eq!(names.params.len(), sig.params.len(), "{name}");
            seen += 1;
        }
    }
    assert!(seen >= NAMES.len(), "an entry names no signature");
    for (name, _) in NAMES {
        assert!(
            super::super::LIBC.iter().any(|(n, _)| n == name)
                || super::super::libcsigs::LIBC_EXT
                    .iter()
                    .any(|(n, _)| n == name)
                || super::super::libctypes::declared_named_prototype(name).is_some(),
            "{name} has no signature"
        );
    }
}

#[test]
fn every_name_is_a_plain_c_identifier() {
    for (function, names) in NAMES.iter().chain(WIN32_NAMES) {
        for name in names
            .params
            .iter()
            .chain(names.ret.iter())
            .filter(|n| !n.is_empty())
        {
            assert!(
                name.chars().next().is_some_and(|c| c.is_ascii_alphabetic()),
                "{function}: {name}"
            );
            assert!(
                name.chars().all(|c| c.is_ascii_alphanumeric() || c == '_'),
                "{function}: {name}"
            );
            assert!(!C_KEYWORDS.contains(name), "{function}: {name}");
        }
    }
}

#[test]
fn the_common_calls_carry_their_header_names() {
    let read = library_names("read").unwrap();
    assert_eq!(read.params, ["fd", "buf", "nbytes"]);
    assert_eq!(read.ret, Some("n"));
    assert_eq!(library_names("open").unwrap().ret, Some("fd"));
    assert_eq!(library_names("strlen").unwrap().ret, Some("len"));
    assert_eq!(
        library_names("__memcpy_chk").unwrap().params,
        ["dest", "src", "n", ""]
    );
    assert_eq!(library_names("fcntl").map(|n| n.ret), Some(None));
}
