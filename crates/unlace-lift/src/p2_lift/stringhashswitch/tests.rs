use super::*;

#[test]
fn crc32_known_values() {
    assert_eq!(crc32(b"hello"), 0x3610_A686);
    assert_eq!(crc32(b""), 0);
    assert_eq!(crc32(b"123456789"), 0xCBF4_3926);
}

#[test]
fn crc32c_known_values() {
    assert_eq!(crc32c(b"hello"), 0x9a71_bb4c);
    assert_eq!(crc32c(b"123456789"), 0xe306_9283);
}

#[test]
fn fnv_known_values() {
    assert_eq!(fnv1(b"hello"), 0xb6fa_7167);
    assert_eq!(fnv1a32(b"hello"), 0x4f9f_2cab);
    assert_eq!(fnv1a(b"hello"), 0xa430_d846_80aa_bd0b);
    assert_eq!(fnv1a(b""), 0xcbf2_9ce4_8422_2325);
}

#[test]
fn djb2_known_values() {
    assert_eq!(djb2(b"hello"), 0x0f92_3099);
    assert_eq!(djb2a(b"hello"), 0x0a9c_ede7);
}

#[test]
fn murmur3_jenkins_java_known_values() {
    assert_eq!(murmur3(b"hello", 0), 0x248b_fa47);
    assert_eq!(murmur3(b"", 0), 0);
    assert_eq!(jenkins_oaat(b"hello"), 0xc8fd_181b);
    assert_eq!(java_string_hash(b"hello"), 99_162_322);
}

#[test]
fn sdbm_is_hash_times_65599_plus_byte() {
    assert_eq!(sdbm(b""), 0);
    assert_eq!(sdbm(b"a"), u32::from(b'a'));
    assert_eq!(
        sdbm(b"ab"),
        u32::from(b'a')
            .wrapping_mul(65599)
            .wrapping_add(u32::from(b'b'))
    );
}

#[test]
fn table_maps_every_family_hash_back_to_its_string() {
    let mut strings = BTreeMap::new();
    strings.insert(0x1000, "hello".to_string());
    strings.insert(0x1100, "world".to_string());

    let t = StringHashTable::from_strings(&strings);
    for s in ["hello", "world"] {
        let bytes = s.as_bytes();
        for h in [
            crc32(bytes) as u64,
            crc32c(bytes) as u64,
            fnv1(bytes) as u64,
            fnv1a32(bytes) as u64,
            fnv1a(bytes),
            djb2(bytes) as u64,
            djb2a(bytes) as u64,
            sdbm(bytes) as u64,
            murmur3(bytes, 0) as u64,
            jenkins_oaat(bytes) as u64,
            java_string_hash(bytes) as u64,
        ] {
            assert_eq!(t.lookup(h), Some(s));
        }
    }
    assert_eq!(t.len(), t.table().len());
    assert!(t.len() >= 22);
    assert!(!t.is_empty());
    assert!(StringHashTable::new().is_empty());
    assert_eq!(StringHashTable::new().lookup(0), None);
}
