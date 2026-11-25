use super::*;

fn region(data: &[u8], executable: bool) -> Region<'_> {
    Region {
        name: Some(".x".into()),
        vma: 0x1000,
        data,
        executable,
    }
}

#[test]
fn derived_tables_match_their_published_entries() {
    let s = aes_sbox();
    assert_eq!((s[0], s[1], s[0x53], s[255]), (0x63, 0x7c, 0xed, 0x16));
    let inv = aes_inv_sbox(&s);
    assert_eq!((inv[0], inv[255]), (0x52, 0x7d));
    assert_eq!(aes_t0(&s, [2, 1, 1, 3])[0], 0xc66363a5);
    assert_eq!(aes_t0(&inv, [0x0e, 0x09, 0x0d, 0x0b])[0], 0x51f4a750);
    let crc = crc32_reflected(0xEDB8_8320);
    assert_eq!((crc[1], crc[255]), (0x77073096, 0x2d02ef8d));
    assert_eq!(crc32_normal(0x04C1_1DB7)[1], 0x04c11db7);
    assert_eq!(&des_ip()[..4], &[58, 50, 42, 34]);
    assert_eq!(des_ip()[63], 7);
}

#[test]
fn generated_tables_match_their_published_entries() {
    assert_eq!((SHA256_K[0], SHA256_K[63]), (0x428a2f98, 0xc67178f2));
    assert_eq!(
        (SHA512_K[0], SHA512_K[79]),
        (0x428a2f98d728ae22, 0x6c44198c4a475817)
    );
    assert_eq!(SHA256_H0[7], 0x5be0cd19);
    assert_eq!(SHA512_H0[0], 0x6a09e667f3bcc908);
    assert_eq!(SHA384_H0[0], 0xcbbb9d5dc1059ed8);
    assert_eq!(SHA224_H0[0], 0xc1059ed8);
    assert_eq!((MD5_T[0], MD5_T[63]), (0xd76aa478, 0xeb86d391));
    assert_eq!((BLOWFISH_P[0], BLOWFISH_P[17]), (0x243f6a88, 0x8979fb1b));
    assert_eq!(
        (
            BLOWFISH_S0_HEAD[0],
            BLOWFISH_S1_HEAD[0],
            BLOWFISH_S2_HEAD[0],
            BLOWFISH_S3_HEAD[0]
        ),
        (0xd1310ba6, 0x4b7a70e9, 0xe93d5a68, 0x3a39ce37)
    );
}

#[test]
fn a_table_is_found_at_any_offset_in_any_layout() {
    let mut data = vec![0xccu8; 3];
    data.extend_from_slice(&aes_sbox());
    data.extend(SHA256_K.iter().flat_map(|v| v.to_be_bytes()));
    let hits = scan(&[region(&data, false)], true);
    assert_eq!(hits.len(), 2, "{hits:?}");
    assert_eq!(
        (
            hits[0].addr,
            hits[0].algorithm,
            hits[0].layout,
            hits[0].byte_len
        ),
        (0x1003, "AES", "u8", 256)
    );
    assert_eq!(
        (hits[1].addr, hits[1].name.as_str(), hits[1].layout),
        (0x1103, "round constants K", "u32be")
    );
}

#[test]
fn a_contained_match_is_reported_once_as_the_longer_one() {
    let data: Vec<u8> = SHA1_H0.iter().flat_map(|v| v.to_le_bytes()).collect();
    let hits = scan(&[region(&data, true)], true);
    assert_eq!(hits.len(), 1, "{hits:?}");
    assert_eq!(hits[0].algorithm, "SHA-1");
}

#[test]
fn immediates_are_read_in_code_only() {
    let code = [0x05u8, 0xb9, 0x79, 0x37, 0x9e, 0xc3];
    let hits = scan(&[region(&code, true)], true);
    assert_eq!(hits.len(), 1);
    assert_eq!(
        (hits[0].addr, hits[0].kind, hits[0].algorithm),
        (0x1001, Kind::Immediate, "TEA/XTEA")
    );
    assert!(scan(&[region(&code, false)], true).is_empty());
    assert!(
        scan(&[region(&code, true)], false).is_empty(),
        "a big-endian image reads the word the other way"
    );
}

#[test]
fn base64_alphabets_standard_and_custom() {
    let mut data = b"\0ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/\0".to_vec();
    data.extend_from_slice(b"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210+/=\0");
    data.extend_from_slice(b"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0");
    let hits = scan(&[region(&data, false)], true);
    assert_eq!(hits.len(), 2, "{hits:?}");
    assert_eq!(
        (hits[0].addr, hits[0].name.as_str()),
        (0x1001, "alphabet (standard)")
    );
    assert_eq!(
        (hits[1].name.as_str(), hits[1].byte_len),
        ("alphabet (custom)", 65)
    );
}
