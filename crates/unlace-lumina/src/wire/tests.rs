use super::*;
use std::io::Cursor;

fn roundtrip_vuint(value: u32, expected_len: usize) {
    let mut buf = Vec::new();
    write_vuint32(&mut buf, value);
    assert_eq!(buf.len(), expected_len, "value=0x{value:x}: byte count");
    let mut pos = 0;
    assert_eq!(read_vuint32(&buf, &mut pos).unwrap(), value);
    assert_eq!(pos, expected_len);
}

#[test]
fn vuint32_buckets() {
    for (v, n) in [
        (0x00, 1),
        (0x7F, 1),
        (0x80, 2),
        (0x3FFF, 2),
        (0x4000, 4),
        (0x1FFF_FFFF, 4),
        (0x2000_0000, 5),
        (0xFFFF_FFFF, 5),
    ] {
        roundtrip_vuint(v, n);
    }
}

#[test]
fn vuint32_exact_bytes() {
    let enc = |v| {
        let mut b = Vec::new();
        write_vuint32(&mut b, v);
        b
    };
    assert_eq!(enc(0x42), vec![0x42]);
    assert_eq!(enc(0x0123), vec![0x81, 0x23]);
    assert_eq!(enc(0x0012_3456), vec![0xC0, 0x12, 0x34, 0x56]);
    assert_eq!(enc(0xDEAD_BEEF), vec![0xFF, 0xDE, 0xAD, 0xBE, 0xEF]);
}

#[test]
fn vuint32_reads_the_go_escape_byte() {
    let mut pos = 0;
    let v = read_vuint32(&[0xE0, 0xFF, 0xFF, 0xFF, 0xFD], &mut pos).unwrap();
    assert_eq!(v as i32, -3);
    assert_eq!(pos, 5);
}

#[test]
fn short_inputs_error() {
    let cases: [&[u8]; 4] = [&[], &[0x81], &[0xC0, 0, 0], &[0xFF, 0, 0]];
    for buf in cases {
        let mut pos = 0;
        assert!(read_vuint32(buf, &mut pos).is_err(), "{buf:?}");
    }
    let mut pos = 0;
    assert!(read_cstring(b"abc", &mut pos).is_err());
    let mut pos = 7;
    assert!(read_cstring(b"abc", &mut pos).is_err());
    let mut pos = 0;
    assert!(read_raw_bytes(&[5, 1, 2], &mut pos).is_err());
}

#[test]
fn u64_split_roundtrips() {
    for v in [0u64, 0x7F, 0x1_0000_0000, 0xDEAD_BEEF_CAFE_BABE, u64::MAX] {
        let mut buf = Vec::new();
        write_u64_split(&mut buf, v);
        let mut pos = 0;
        assert_eq!(read_u64_split(&buf, &mut pos).unwrap(), v);
        assert_eq!(pos, buf.len());
    }
}

#[test]
fn strings_and_bytes_roundtrip() {
    let mut buf = Vec::new();
    write_cstring(&mut buf, "hello").unwrap();
    write_raw_bytes(&mut buf, &[1, 2, 3]);
    assert!(write_cstring(&mut buf, "a\0b").is_err());
    let mut d = Decoder::new(&buf);
    assert_eq!(d.cstr().unwrap(), "hello");
    assert_eq!(d.bytes().unwrap(), vec![1, 2, 3]);
    assert!(d.is_empty());
}

#[test]
fn count_is_bounded_by_the_remaining_bytes() {
    let mut buf = Vec::new();
    write_vuint32(&mut buf, 1000);
    buf.extend_from_slice(&[0; 10]);
    assert!(Decoder::new(&buf).count("t").is_err());
}

#[test]
fn frame_roundtrip_and_caps() {
    let frame = Frame::new(14, b"hello".to_vec());
    let mut buf = Vec::new();
    write_frame(&mut buf, &frame, DEFAULT_MAX_PAYLOAD).unwrap();
    assert_eq!(&buf[0..4], &5u32.to_be_bytes());
    assert_eq!(buf[4], 14);
    let back = read_frame(&mut Cursor::new(buf.clone()), DEFAULT_MAX_PAYLOAD).unwrap();
    assert_eq!(back, frame);
    assert!(read_frame(&mut Cursor::new(buf), 4).is_err());
    assert!(write_frame(&mut Vec::new(), &frame, 4).is_err());
}

#[test]
fn frame_with_a_lying_length_is_short() {
    let mut wire = 0x10_0000u32.to_be_bytes().to_vec();
    wire.push(14);
    wire.extend_from_slice(&[0; 8]);
    let err = read_frame(&mut Cursor::new(wire), MAX_PULL_PAYLOAD).unwrap_err();
    assert_eq!(err.kind(), io::ErrorKind::UnexpectedEof);
}
