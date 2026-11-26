use super::*;

fn utf16z_bytes(s: &str) -> Vec<u8> {
    s.encode_utf16()
        .chain([0])
        .flat_map(u16::to_le_bytes)
        .collect()
}

fn pad4(v: &mut Vec<u8>) {
    while v.len() % 4 != 0 {
        v.push(0);
    }
}

/// One block: header, key, value, children (each already a whole block).
fn mk(key: &str, value: &[u8], value_len: u16, text: bool, children: &[Vec<u8>]) -> Vec<u8> {
    let mut b = vec![0u8; 6];
    b.extend(utf16z_bytes(key));
    pad4(&mut b);
    b.extend_from_slice(value);
    for c in children {
        pad4(&mut b);
        b.extend_from_slice(c);
    }
    let len = u16::try_from(b.len()).unwrap();
    b[0..2].copy_from_slice(&len.to_le_bytes());
    b[2..4].copy_from_slice(&value_len.to_le_bytes());
    b[4..6].copy_from_slice(&u16::from(text).to_le_bytes());
    b
}

fn string(key: &str, value: &str) -> Vec<u8> {
    let v = utf16z_bytes(value);
    mk(key, &v, u16::try_from(v.len() / 2).unwrap(), true, &[])
}

fn resource() -> Vec<u8> {
    let mut fixed = Vec::new();
    for w in [
        FIXED_SIGNATURE,
        0x1_0000,
        0x0001_0002,
        0x0003_0004,
        0x0002_0000,
        0,
    ] {
        fixed.extend_from_slice(&w.to_le_bytes());
    }
    fixed.resize(52, 0);
    let table = mk(
        "040904b0",
        &[],
        0,
        true,
        &[
            string("ProductName", "Widget"),
            string("FileVersion", "1, 2, 3, 4"),
            string("CompanyName", "Example"),
        ],
    );
    let sfi = mk("StringFileInfo", &[], 0, true, &[table]);
    let root = mk("VS_VERSION_INFO", &fixed, 52, false, &[sfi]);
    let mut rsrc = vec![0xAAu8; 16];
    rsrc.extend(root);
    rsrc
}

#[test]
fn strings_and_fixed_versions_are_read() {
    let t = string_table(&resource());
    assert_eq!(t.get("ProductName").map(String::as_str), Some("Widget"));
    assert_eq!(t.get("FileVersion").map(String::as_str), Some("1, 2, 3, 4"));
    assert_eq!(t.get("CompanyName").map(String::as_str), Some("Example"));
    assert_eq!(
        t.get("FixedFileVersion").map(String::as_str),
        Some("1.2.3.4")
    );
    assert_eq!(
        t.get("FixedProductVersion").map(String::as_str),
        Some("2.0.0.0")
    );
}

#[test]
fn truncated_or_missing_resources_read_as_empty() {
    assert!(string_table(&[]).is_empty());
    assert!(string_table(b"no version here").is_empty());
    let r = resource();
    for cut in [20, 40, 80, r.len() / 2] {
        let _ = string_table(&r[..cut]);
    }
}
