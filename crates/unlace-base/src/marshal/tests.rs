use super::*;
use crate::space::AddrSpace;

// ELEM_ADDR lives in address.rs; alias for test brevity.
const ELEM_ADDR_TEST: ElementId = crate::address::ELEM_ADDR;

/// Mirror of testmarshal.cc's TestAddrSpaceManager: a manager holding a
/// single big "ram" space at index 3.
fn test_manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    let ram = AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false, // DummyTranslate::isBigEndian()
        8,
        1,
        3,
        crate::space::addrspace_flags::hasphysical,
        1,
        1,
    );
    manager.insert_space(Rc::new(ram)).unwrap();
    manager
}

/// Boundary values exercising every packed length code (the 0x7f/0x80
/// style boundaries up through 64 bits, including 2^32 and u64::MAX).
const UNSIGNED_BOUNDARIES: &[u64] = &[
    0,
    1,
    0x7f,
    0x80,
    0x3fff,
    0x4000,
    0x1fffff,
    0x200000,
    0xfffffff,
    0x10000000,
    0xffffffff,  // 2^32 - 1
    0x100000000, // 2^32
    0x7ffffffff,
    0x800000000,
    0x3ffffffffff,
    0x40000000000,
    0x1ffffffffffff,
    0x2000000000000,
    0xffffffffffffff,
    0x100000000000000,
    0x7fffffffffffffff,
    0x8000000000000000,
    u64::MAX,
];

#[test]
fn test_marshal_packed_unsigned_roundtrip_boundaries() {
    let manager = test_manager();
    for &val in UNSIGNED_BOUNDARIES {
        let mut buf = Vec::new();
        {
            let mut enc = PackedEncode::new(&mut buf);
            enc.open_element(&ELEM_ADDR_TEST);
            enc.write_unsigned_integer(&ATTRIB_OFFSET, val);
            enc.close_element(&ELEM_ADDR_TEST);
        }
        let mut dec = PackedDecode::new(&manager);
        dec.ingest_stream(&buf).unwrap();
        let el = dec.open_element_id(&ELEM_ADDR_TEST).unwrap();
        let rt = dec.read_unsigned_integer_id(&ATTRIB_OFFSET).unwrap();
        assert_eq!(rt, val, "unsigned round trip failed for {val:#x}");
        dec.close_element(el).unwrap();
    }
}

#[test]
fn test_marshal_packed_signed_roundtrip_boundaries() {
    let manager = test_manager();
    let mut vals: Vec<i64> = Vec::new();
    for &u in UNSIGNED_BOUNDARIES {
        vals.push(u as i64);
        vals.push((u as i64).wrapping_neg());
    }
    vals.push(i64::MIN);
    vals.push(i64::MAX);
    for &val in &vals {
        let mut buf = Vec::new();
        {
            let mut enc = PackedEncode::new(&mut buf);
            enc.open_element(&ELEM_ADDR_TEST);
            enc.write_signed_integer(&ATTRIB_OFFSET, val);
            enc.close_element(&ELEM_ADDR_TEST);
        }
        let mut dec = PackedDecode::new(&manager);
        dec.ingest_stream(&buf).unwrap();
        let el = dec.open_element_id(&ELEM_ADDR_TEST).unwrap();
        let rt = dec.read_signed_integer_id(&ATTRIB_OFFSET).unwrap();
        assert_eq!(rt, val, "signed round trip failed for {val:#x}");
        dec.close_element(el).unwrap();
    }
}

#[test]
fn test_marshal_packed_exact_bytes() {
    // Byte-exactness probes for the packed protocol (any change here is
    // a save-file format break).  ELEM_DATA id 1; ATTRIB_OFFSET id 16.
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&ELEM_DATA); // 0x40 | 1
        enc.write_bool(&ATTRIB_ALIGN, true); // header 0xc0|2, type (1<<4)|1
        enc.write_unsigned_integer(&ATTRIB_OFFSET, 0); // header 0xc0|16, type (4<<4)|0
        enc.write_unsigned_integer(&ATTRIB_OFFSET, 0x7f); // lencode 1: 0x80|0x7f
        enc.write_unsigned_integer(&ATTRIB_OFFSET, 0x80); // lencode 2: 0x81, 0x80
        enc.write_signed_integer(&ATTRIB_OFFSET, -1); // negative type 3, lencode 1
        enc.close_element(&ELEM_DATA); // 0x80 | 1
    }
    assert_eq!(
        buf,
        vec![
            0x41, // <data>
            0xc2, 0x11, // align=true
            0xd0, 0x40, // offset=0
            0xd0, 0x41, 0xff, // offset=0x7f
            0xd0, 0x42, 0x81, 0x80, // offset=0x80
            0xd0, 0x31, 0x81, // offset=-1
            0x81, // </data>
        ]
    );
    // Extended (>0x1f) id header: ATTRIB_STORAGE id 149
    let mut buf2 = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf2);
        enc.write_bool(&ATTRIB_STORAGE, false);
    }
    assert_eq!(
        buf2,
        vec![0xc0 | 0x20 | (149 >> 7), 0x80 | (149 & 0x7f), 0x10]
    );
}

#[test]
fn test_marshal_packed_string_and_space_roundtrip() {
    let manager = test_manager();
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&ELEM_DATA);
        enc.write_string(&ATTRIB_VALUE, b"hello");
        enc.write_string(&ATTRIB_VAL, b"");
        let spc = manager.get_space(3).unwrap();
        enc.write_space(&ATTRIB_SPACE, spc);
        enc.close_element(&ELEM_DATA);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let el = dec.open_element_id(&ELEM_DATA).unwrap();
    assert_eq!(dec.read_string_id(&ATTRIB_VALUE).unwrap(), b"hello");
    assert_eq!(dec.read_string_id(&ATTRIB_VAL).unwrap(), b"");
    let spc = dec.read_space_id(&ATTRIB_SPACE).unwrap();
    assert!(Rc::ptr_eq(&spc, manager.get_space(3).unwrap()));
    dec.close_element(el).unwrap();
}

#[test]
fn test_marshal_xml_roundtrip() {
    let manager = test_manager();
    let registry = IdRegistry::with_base_ids();
    let mut buf = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        enc.open_element(&ELEM_DATA);
        enc.write_bool(&ATTRIB_ALIGN, true);
        enc.write_signed_integer(&ATTRIB_ID, -0x1234);
        enc.write_unsigned_integer(&ATTRIB_OFFSET, 0xdeadbeef);
        enc.write_string(&ATTRIB_VALUE, b"<<&\"bl a h'\\bleh\n\t");
        let spc = manager.get_space(3).unwrap();
        enc.write_space(&ATTRIB_SPACE, spc);
        enc.close_element(&ELEM_DATA);
    }
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(&buf).unwrap();
    let el = dec.open_element_id(&ELEM_DATA).unwrap();
    assert!(dec.read_bool_id(&ATTRIB_ALIGN).unwrap());
    assert_eq!(dec.read_signed_integer_id(&ATTRIB_ID).unwrap(), -0x1234);
    assert_eq!(
        dec.read_unsigned_integer_id(&ATTRIB_OFFSET).unwrap(),
        0xdeadbeef
    );
    assert_eq!(
        dec.read_string_id(&ATTRIB_VALUE).unwrap(),
        b"<<&\"bl a h'\\bleh\n\t"
    );
    let spc = dec.read_space_id(&ATTRIB_SPACE).unwrap();
    assert!(Rc::ptr_eq(&spc, manager.get_space(3).unwrap()));
    dec.close_element(el).unwrap();
}

#[test]
fn test_marshal_xml_encode_formatting() {
    // Exact text of a small formatted document (depth-based indenting:
    // "\n" + 2*depth spaces, capped at 25 chars of "\n<24 spaces>").
    let mut buf = Vec::new();
    {
        let mut enc = XmlEncode::new(&mut buf);
        enc.open_element(&ELEM_DATA);
        enc.write_bool(&ATTRIB_ALIGN, true);
        enc.open_element(&ELEM_INPUT);
        enc.close_element(&ELEM_INPUT);
        enc.close_element(&ELEM_DATA);
    }
    assert_eq!(
        String::from_utf8(buf).unwrap(),
        "\n<data align=\"true\">\n  <input/>\n</data>"
    );
}

#[test]
fn test_marshal_packed_bufferpad() {
    // Transcription of the C++ TEST(marshal_bufferpad) setup to pin the
    // chunking/padding logic (1 + 511*2 + 1 = 1024 bytes exactly).
    assert_eq!(PackedDecode::BUFFER_SIZE, 1024);
    let manager = test_manager();
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&ELEM_INPUT); // 1-byte
        for i in 0..511 {
            // 1022-bytes
            enc.write_bool(&ATTRIB_CONTENT, (i & 1) == 0);
        }
        enc.close_element(&ELEM_INPUT);
    }
    assert_eq!(buf.len(), 1024); // Encoding should exactly fill one buffer
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let el = dec.open_element_id(&ELEM_INPUT).unwrap();
    for i in 0..511 {
        let attrib_id = dec.get_next_attribute_id().unwrap();
        assert_eq!(attrib_id, ATTRIB_CONTENT.get_id());
        let val = dec.read_bool().unwrap();
        assert_eq!(val, (i & 1) == 0);
    }
    let nextel = dec.peek_element().unwrap();
    assert_eq!(nextel, 0);
    dec.close_element(el).unwrap();
}

#[test]
fn test_marshal_packed_integer_at_every_chunk_edge() {
    let manager = test_manager();
    for length in 1008..1032 {
        let mut buf = Vec::new();
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&ELEM_DATA);
        enc.write_string(&ATTRIB_NAME, &vec![b'x'; length]);
        enc.write_unsigned_integer(&ATTRIB_OFFSET, u64::MAX);
        enc.write_signed_integer(&ATTRIB_ID, i64::MIN);
        enc.close_element(&ELEM_DATA);
        let mut dec = PackedDecode::new(&manager);
        dec.ingest_stream(&buf).unwrap();
        let el = dec.open_element_id(&ELEM_DATA).unwrap();
        assert_eq!(
            dec.read_unsigned_integer_id(&ATTRIB_OFFSET).unwrap(),
            u64::MAX
        );
        assert_eq!(dec.read_signed_integer_id(&ATTRIB_ID).unwrap(), i64::MIN);
        dec.close_element(el).unwrap();
        assert_eq!(dec.peek_element().unwrap(), 0);
    }
}

#[test]
fn test_marshal_owned_ingestion_matches_borrowed_stream() {
    let manager = test_manager();
    for length in [0, 1, 1000, 1018, 1019, 1020, 1021, 1024, 2042, 4096, 8192] {
        let mut encoded = Vec::new();
        let mut enc = PackedEncode::new(&mut encoded);
        enc.open_element(&ELEM_DATA);
        enc.write_string(&ATTRIB_NAME, &vec![b'x'; length]);
        enc.write_unsigned_integer(&ATTRIB_OFFSET, u64::MAX);
        enc.write_bool(&ATTRIB_STORAGE, true);
        enc.close_element(&ELEM_DATA);
        for nul in [false, true] {
            let mut input = encoded.clone();
            if nul {
                input.extend_from_slice(&[0, 0x41, 0x81]);
            }
            let mut borrowed = PackedDecode::new(&manager);
            borrowed.ingest_stream(&input).unwrap();
            let mut owned = PackedDecode::new(&manager);
            owned.ingest_owned(input).unwrap();
            let expected: Vec<_> = borrowed.in_stream.iter().flatten().copied().collect();
            let actual: Vec<_> = owned.in_stream.iter().flatten().copied().collect();
            assert_eq!(actual, expected, "padding for length {length}");
            let el = owned.open_element_id(&ELEM_DATA).unwrap();
            assert!(owned.read_bool_id(&ATTRIB_STORAGE).unwrap());
            assert_eq!(
                owned.read_unsigned_integer_id(&ATTRIB_OFFSET).unwrap(),
                u64::MAX
            );
            assert_eq!(
                owned.read_string_id(&ATTRIB_NAME).unwrap(),
                vec![b'x'; length]
            );
            owned.rewind_attributes();
            assert_eq!(owned.get_next_attribute_id().unwrap(), ATTRIB_NAME.get_id());
            assert_eq!(
                owned.get_next_attribute_id().unwrap(),
                ATTRIB_OFFSET.get_id()
            );
            assert_eq!(owned.read_unsigned_integer().unwrap(), u64::MAX);
            owned.close_element(el).unwrap();
            assert_eq!(owned.peek_element().unwrap(), 0);
        }
    }
    for input in [vec![], vec![0, 0x41, 0x81]] {
        let mut dec = PackedDecode::new(&manager);
        assert_eq!(
            dec.ingest_owned(input).unwrap_err().to_string(),
            "Ended ingestion without any input"
        );
    }
}

#[test]
fn test_marshal_owned_ingestion_reuses_all_full_chunks() {
    let manager = test_manager();
    for length in [1024, 1025, 2048, 2049, 8192] {
        let input = vec![0x81; length];
        let ptr = input.as_ptr();
        let mut dec = PackedDecode::new(&manager);
        dec.ingest_owned(input).unwrap();
        assert_eq!(dec.in_stream.len(), 2);
        assert_eq!(dec.in_stream[0].as_ptr(), ptr);
        assert_eq!(dec.in_stream[0].len(), length / 1024 * 1024);
        assert_eq!(dec.in_stream[1][length % 1024], pf::ELEMENT_END);
    }
}

#[test]
fn test_marshal_owned_ingestion_preserves_truncated_integer_errors() {
    let manager = test_manager();
    let mut input = vec![0x81; 1024];
    input[0] = 0x41;
    input[1022] = 0xd0;
    input[1023] = 0x4f;
    for owned in [false, true] {
        let mut dec = PackedDecode::new(&manager);
        if owned {
            dec.ingest_owned(input.clone()).unwrap();
        } else {
            dec.ingest_stream(&input).unwrap();
        }
        dec.cur_pos = Position {
            seq: 0,
            current: 1022,
            end: 1024,
        };
        assert_eq!(
            dec.read_unsigned_integer().unwrap_err().to_string(),
            "Unexpected end of stream"
        );
    }
}

#[test]
fn test_marshal_packed_integer_fast_path_matches_chunked_reads() {
    let manager = test_manager();
    let chunks = vec![vec![0xff; 32], vec![0xfe; 32]];
    for len in 0..=15 {
        for start in 16..32 {
            let mut dec = PackedDecode::new(&manager);
            dec.in_stream = chunks.clone();
            dec.cur_pos = Position {
                seq: 0,
                current: start,
                end: 32,
            };
            let mut expected_pos = dec.cur_pos;
            let mut expected = 0u64;
            for _ in 0..len {
                expected = (expected << pf::RAWDATA_BITSPERBYTE)
                    | u64::from(
                        PackedDecode::get_next_byte(&chunks, &mut expected_pos).unwrap()
                            & pf::RAWDATA_MASK,
                    );
            }
            assert_eq!(dec.read_integer(len).unwrap(), expected, "{start}, {len}");
            assert_eq!(dec.cur_pos.seq, expected_pos.seq);
            assert_eq!(dec.cur_pos.current, expected_pos.current);
            assert_eq!(dec.cur_pos.end, expected_pos.end);
        }
    }
    let mut dec = PackedDecode::new(&manager);
    dec.in_stream = vec![vec![0xff; 4]];
    dec.cur_pos = Position {
        seq: 0,
        current: 0,
        end: 4,
    };
    assert_eq!(
        dec.read_integer(4).unwrap_err().to_string(),
        "Unexpected end of stream"
    );
}

#[test]
fn test_marshal_packed_byte_cursor_bounds() {
    let chunks = vec![vec![0x81, 0x82], vec![0x83]];
    let mut pos = Position {
        seq: 0,
        current: 0,
        end: 2,
    };
    assert_eq!(
        PackedDecode::get_next_byte(&chunks, &mut pos).unwrap(),
        0x81
    );
    assert_eq!((pos.seq, pos.current, pos.end), (0, 1, 2));
    assert_eq!(
        PackedDecode::get_next_byte(&chunks, &mut pos).unwrap(),
        0x82
    );
    assert_eq!((pos.seq, pos.current, pos.end), (1, 0, 1));
    let err = PackedDecode::get_next_byte(&chunks, &mut pos).unwrap_err();
    assert_eq!(err.to_string(), "Unexpected end of stream");
}

#[test]
fn test_marshal_packed_unexpected_eof() {
    // Truncated stream (mirrors test_unexpected_eof): drop the closing
    // element of the outer <data>.
    let manager = test_manager();
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&ELEM_DATA);
        enc.open_element(&ELEM_INPUT);
        enc.write_string(&ATTRIB_NAME, b"hello");
        enc.close_element(&ELEM_INPUT);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let el1 = dec.open_element_id(&ELEM_DATA).unwrap();
    let el2 = dec.open_element_id(&ELEM_INPUT).unwrap();
    dec.close_element(el2).unwrap();
    let err = dec.close_element(el1).unwrap_err();
    assert!(matches!(err, UnlaceError::Decoder { .. }));
}

#[test]
fn test_marshal_cxx_integer_parsing() {
    // istringstream-with-unsetf semantics
    assert_eq!(cxx_parse_unsigned(b"0x1000"), 0x1000);
    assert_eq!(cxx_parse_unsigned(b"1000"), 1000);
    assert_eq!(cxx_parse_unsigned(b"010"), 8); // octal
    assert_eq!(cxx_parse_unsigned(b"  42"), 42);
    assert_eq!(cxx_parse_unsigned(b"-5"), 5u64.wrapping_neg());
    assert_eq!(cxx_parse_unsigned(b"0xffffffffffffffff"), u64::MAX);
    assert_eq!(cxx_parse_unsigned(b""), 0);
    assert_eq!(cxx_parse_unsigned(b"junk"), 0);
    assert_eq!(cxx_parse_signed(b"-0x100"), -0x100);
    assert_eq!(cxx_parse_signed(b"0x7fffffffffffffff"), i64::MAX);
    assert_eq!(cxx_parse_signed(b"-9223372036854775808"), i64::MIN);
    assert_eq!(cxx_parse_signed(b"123abc"), 123);
    assert_eq!(cxx_strtoul(b"0x1000:2"), (0x1000, 6));
    assert_eq!(cxx_strtoul(b"33+1"), (33, 2));
}

#[test]
fn test_marshal_cxx_num_get_u32_dec() {
    // `istringstream >> dec >> uint4` semantics (getIndexedAttributeId
    // suffix parse); decimal cases oracle-verified against g++/libstdc++.
    assert_eq!(cxx_num_get_u32_dec(b"1"), 1);
    assert_eq!(cxx_num_get_u32_dec(b"23"), 23);
    assert_eq!(cxx_num_get_u32_dec(b"010"), 10); // dec, NOT octal
    assert_eq!(cxx_num_get_u32_dec(b"08"), 8); // dec, NOT an octal error
    assert_eq!(cxx_num_get_u32_dec(b"0x2"), 0); // dec, NOT hex: stops at 'x'
    assert_eq!(cxx_num_get_u32_dec(b""), 0); // failed extraction stores 0
    assert_eq!(cxx_num_get_u32_dec(b"abc"), 0);
    assert_eq!(cxx_num_get_u32_dec(b"+7"), 7);
    assert_eq!(cxx_num_get_u32_dec(b"  12"), 12); // sentry skips whitespace
    assert_eq!(cxx_num_get_u32_dec(b"-"), 0); // sign with no digits fails
    // Overflow of the uint4 destination stores UINT_MAX (C++11 num_get)
    assert_eq!(cxx_num_get_u32_dec(b"4294967296"), u32::MAX);
    assert_eq!(cxx_num_get_u32_dec(b"4294967295"), u32::MAX); // exact max, no overflow
    // A minus sign negates the in-range magnitude modularly...
    assert_eq!(cxx_num_get_u32_dec(b"-5"), 5u32.wrapping_neg());
    assert_eq!(cxx_num_get_u32_dec(b"-4294967295"), 1);
    // ...but an overflowing negative field still stores UINT_MAX
    // (unsigned destination: num_get only stores __min for signed types)
    assert_eq!(cxx_num_get_u32_dec(b"-4294967296"), u32::MAX);
}
