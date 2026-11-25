use super::*;

/// A 5.4 varint: 7-bit groups, most significant first, high bit on the last.
fn varint(mut v: u64) -> Vec<u8> {
    let mut groups = vec![(v & 0x7f) as u8];
    v >>= 7;
    while v != 0 {
        groups.push((v & 0x7f) as u8);
        v >>= 7;
    }
    groups.reverse();
    let last = groups.len() - 1;
    groups[last] |= 0x80;
    groups
}

/// A little-endian 5.4 chunk: one instruction, a string and an integer
/// constant, one debug local.
fn chunk54() -> Vec<u8> {
    let mut b = b"\x1bLua".to_vec();
    b.push(0x54);
    b.push(0);
    b.extend_from_slice(b"\x19\x93\r\n\x1a\n");
    b.push(4);
    b.push(8);
    b.push(8);
    b.extend_from_slice(&0x5678i64.to_le_bytes());
    b.extend_from_slice(&370.5f64.to_le_bytes());
    b.push(0);
    b.extend(varint(0));
    b.extend(varint(0));
    b.extend(varint(0));
    b.push(0);
    b.push(1);
    b.push(2);
    b.extend(varint(1));
    b.extend_from_slice(&1u32.to_le_bytes());
    b.extend(varint(2));
    b.push(0x04);
    b.extend(varint(3));
    b.extend_from_slice(b"hi");
    b.push(0x03);
    b.extend_from_slice(&42i64.to_le_bytes());
    b.extend(varint(0));
    b.extend(varint(0));
    b.extend(varint(1));
    b.push(5);
    b.extend(varint(0));
    b.extend(varint(1));
    b.extend(varint(2));
    b.extend_from_slice(b"x");
    b.extend(varint(0));
    b.extend(varint(1));
    b.extend(varint(0));
    b
}

#[test]
fn parses_lua54_main_prototype() {
    let chunk = LuaChunk::parse(&chunk54()).expect("valid 5.4 chunk");
    assert_eq!(chunk.header.version, LuaVersion::V54);
    assert!(chunk.header.little_endian);
    assert_eq!(chunk.main_upvalues, 0);
    assert_eq!(chunk.main.source, None);
    assert!(chunk.main.is_vararg);
    assert_eq!(chunk.main.max_stack_size, 2);
    assert_eq!(chunk.main.code, vec![1]);
    assert_eq!(
        chunk.main.constants,
        vec![
            LuaConstant::String(b"hi".to_vec()),
            LuaConstant::Integer(42)
        ]
    );
    assert_eq!(chunk.main.line_info, vec![5]);
    assert_eq!(chunk.main.locals.len(), 1);
    assert_eq!(chunk.main.locals[0].name, b"x".to_vec());
    assert_eq!(chunk.main.locals[0].end_pc, 1);
}

#[test]
fn every_truncation_is_an_error() {
    let full = chunk54();
    assert!(is_lua_chunk(&full));
    for n in 0..full.len() {
        assert!(
            LuaChunk::parse(&full[..n]).is_err(),
            "prefix of {n} bytes parsed"
        );
    }
}

#[test]
fn rejects_bad_signature_and_huge_count() {
    assert!(!is_lua_chunk(b"\x7fELF"));
    assert!(LuaChunk::parse(b"\x7fELF\x01").is_err());
    let b = chunk54();
    // Replace the code count (varint 1, then one instruction word) with a
    // count far beyond the chunk: the reader must refuse it, not allocate.
    let at = b
        .windows(5)
        .position(|w| w == [0x81, 1, 0, 0, 0])
        .expect("code count present");
    let mut huge = b[..at].to_vec();
    huge.extend(varint(1 << 40));
    huge.extend_from_slice(&b[at + 5..]);
    assert!(LuaChunk::parse(&huge).is_err());
}
