use super::*;

#[test]
fn djb2_seed_and_round_trip() {
    assert_eq!(hash_name(HashAlgo::Djb2, ""), 5381);
    for &name in &["LoadLibraryA", "GetProcAddress", "VirtualAlloc"] {
        let h = hash_name(HashAlgo::Djb2, name);
        assert_eq!(
            resolve_hash(HashAlgo::Djb2, h, API_NAMES).as_deref(),
            Some(name)
        );
    }
}

#[test]
fn ror13_and_crc32_round_trip() {
    for algo in [HashAlgo::Ror13, HashAlgo::Crc32] {
        let h = hash_name(algo, "WriteProcessMemory");
        assert_eq!(
            resolve_hash(algo, h, API_NAMES).as_deref(),
            Some("WriteProcessMemory")
        );
    }
    assert!(resolve_hash(HashAlgo::Ror13, 0xDEAD_BEEF, API_NAMES).is_none());
}

#[test]
fn crc32_known_vector() {
    assert_eq!(hash_name(HashAlgo::Crc32, "123456789"), 0xCBF4_3926);
}
