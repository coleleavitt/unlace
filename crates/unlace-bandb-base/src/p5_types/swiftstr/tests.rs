use super::*;

#[test]
fn small_strings_decode_from_their_two_words() {
    // "shape": count 5, ASCII.
    let lit = decode_small(0x6570616873, 0xe500000000000000).unwrap();
    assert_eq!(lit.bytes, b"shape");
    assert_eq!(lit.payload, None);
    // 15 bytes fill both words.
    let s = b"abcdefghijklmno";
    let w0 = u64::from_le_bytes(s[..8].try_into().unwrap());
    let mut hi = [0u8; 8];
    hi[..7].copy_from_slice(&s[8..15]);
    hi[7] = 0xef;
    let w1 = u64::from_le_bytes(hi);
    assert_eq!(decode_small(w0, w1).unwrap().bytes, s);
    // A non-ASCII string carries the flag off: "é" is two bytes.
    assert_eq!(
        decode_small(0xa9c3, 0xa200000000000000).unwrap().bytes,
        "é".as_bytes()
    );
    // Refused: a count the bytes contradict, the ASCII flag wrong, not UTF-8.
    assert!(decode_small(0x6570616873, 0xe400000000000000).is_none());
    assert!(decode_small(0x6570616873, 0xa500000000000000).is_none());
    assert!(decode_small(0xff, 0xa100000000000000).is_none());
    assert!(small_count(0x80000001038e4750).is_none());
}

#[test]
fn immortal_words_name_their_payload_and_count() {
    assert_eq!(immortal_payload(0x80000001038e4750), Some(0x1038e4770));
    assert_eq!(immortal_payload(0xe500000000000000), None);
    assert_eq!(immortal_count(0xd000000000000028), Some((40, true)));
    assert_eq!(immortal_count(0x1000000000000003), Some((3, false)));
    assert_eq!(immortal_count(0x6570616873), None);
}
