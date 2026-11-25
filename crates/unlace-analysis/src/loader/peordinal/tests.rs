use super::*;

#[test]
fn tables_are_sorted_and_unique() {
    for t in [OLEAUT32, WS2_32, WSOCK32, MSVBVM60] {
        assert!(t.windows(2).all(|w| w[0].0 < w[1].0));
    }
}

#[test]
fn documented_ordinals_resolve() {
    assert_eq!(ordinal_name(b"OLEAUT32.dll", 2), Some("SysAllocString"));
    assert_eq!(ordinal_name(b"oleaut32.dll", 6), Some("SysFreeString"));
    assert_eq!(ordinal_name(b"OLEAUT32", 8), Some("VariantInit"));
    assert_eq!(ordinal_name(b"OLEAUT32.DLL", 9), Some("VariantClear"));
    assert_eq!(ordinal_name(b"WS2_32.dll", 23), Some("socket"));
    assert_eq!(ordinal_name(b"ws2_32.dll", 4), Some("connect"));
    assert_eq!(ordinal_name(b"ws2_32.dll", 16), Some("recv"));
    assert_eq!(ordinal_name(b"ws2_32.dll", 19), Some("send"));
    assert_eq!(ordinal_name(b"ws2_32.dll", 115), Some("WSAStartup"));
    assert_eq!(ordinal_name(b"ws2_32.dll", 9), Some("htons"));
    assert_eq!(ordinal_name(b"ws2_32.dll", 11), Some("inet_addr"));
    assert_eq!(ordinal_name(b"WSOCK32.dll", 10), Some("inet_addr"));
    assert_eq!(ordinal_name(b"wsock32.dll", 12), Some("ioctlsocket"));
    assert_eq!(ordinal_name(b"MSVBVM60.DLL", 100), Some("ThunRTMain"));
}

#[test]
fn fixture_ordinal_imports_are_named_at_their_iat_slots() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/pe_ordinal_i386.exe"
    );
    let bytes = std::fs::read(path).expect("fixture");
    let file = object::File::parse(&*bytes).expect("pe");
    let got: Vec<(u64, String)> = super::super::pe_iat::resolve_pe_imports(&file, &bytes)
        .into_iter()
        .filter(|s| s.kind == super::super::format::ImportSymKind::Import)
        .map(|s| (s.addr, String::from_utf8(s.name).unwrap()))
        .collect();
    for want in [
        (0x401000, "SysAllocString"),
        (0x401004, "SysFreeString"),
        (0x401010, "socket"),
        (0x401014, "WSAStartup"),
        (0x401020, "MYLIB_Ordinal_7"),
        (0x401028, "OLEAUT32_Ordinal_9999"),
    ] {
        assert!(
            got.iter().any(|(a, n)| *a == want.0 && n == want.1),
            "{want:?} not in {got:?}"
        );
    }
}

#[test]
fn unknown_dll_or_ordinal_is_none() {
    assert_eq!(ordinal_name(b"mylib.dll", 2), None);
    assert_eq!(ordinal_name(b"OLEAUT32.dll", 60000), None);
    assert_eq!(ordinal_name(b"ws2_32.dll", 27), None);
    assert_eq!(ordinal_name(b"", 2), None);
}
