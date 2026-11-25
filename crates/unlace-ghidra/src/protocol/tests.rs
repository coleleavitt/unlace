use super::*;
use std::io::Cursor;

fn burst(code: u8) -> Vec<u8> {
    vec![0, 0, 1, code]
}

#[test]
fn test_read_to_any_burst_tolerance() {
    // garbage bytes before the marker are skipped
    let mut s = Cursor::new([b'x', b'y', 0, 0, 1, 7].to_vec());
    assert_eq!(read_to_any_burst(&mut s).unwrap(), 7);
    // one or many zeros are accepted
    let mut s = Cursor::new([0, 1, 9].to_vec());
    assert_eq!(read_to_any_burst(&mut s).unwrap(), 9);
    let mut s = Cursor::new([0, 0, 0, 0, 1, 3].to_vec());
    assert_eq!(read_to_any_burst(&mut s).unwrap(), 3);
    // a zero run NOT followed by 0x01 re-scans (0x05 is skipped as garbage)
    let mut s = Cursor::new([0, 0, 5, 0, 0, 1, 2].to_vec());
    assert_eq!(read_to_any_burst(&mut s).unwrap(), 2);
}

#[test]
fn test_read_to_any_burst_eof_is_pipe_closed() {
    let mut s = Cursor::new(Vec::<u8>::new());
    assert!(matches!(
        read_to_any_burst(&mut s),
        Err(WireError::PipeClosed)
    ));
    // EOF mid-marker
    let mut s = Cursor::new([0, 0, 1].to_vec());
    assert!(matches!(
        read_to_any_burst(&mut s),
        Err(WireError::PipeClosed)
    ));
    // EOF inside a string payload
    let mut input = burst(BURST_STRING_OPEN);
    input.extend_from_slice(b"abc");
    let mut s = Cursor::new(input);
    assert!(matches!(
        read_string_stream(&mut s),
        Err(WireError::PipeClosed)
    ));
}

#[test]
fn test_string_stream_round_trip() {
    let mut wire = Vec::new();
    write_string_stream(&mut wire, b"registerProgram").unwrap();
    let mut s = Cursor::new(wire);
    assert_eq!(read_string_stream(&mut s).unwrap(), b"registerProgram");
    // empty payload
    let mut wire = Vec::new();
    write_string_stream(&mut wire, b"").unwrap();
    let mut s = Cursor::new(wire);
    assert_eq!(read_string_stream(&mut s).unwrap(), b"");
}

#[test]
fn test_string_stream_alignment_errors() {
    // wrong opening burst
    let mut s = Cursor::new(burst(BURST_BYTES_OPEN));
    match read_string_stream(&mut s) {
        Err(WireError::Unlace(UnlaceError::Java { type_name, explain })) => {
            assert_eq!(type_name, "alignment");
            assert_eq!(explain, "Expecting string");
        }
        other => panic!("expected alignment error, got {other:?}"),
    }
    // wrong close code (strict variant)
    let mut input = burst(BURST_STRING_OPEN);
    input.extend_from_slice(b"abc");
    input.extend_from_slice(&burst(BURST_BYTES_CLOSE));
    let mut s = Cursor::new(input);
    match read_string_stream(&mut s) {
        Err(WireError::Unlace(UnlaceError::Java { explain, .. })) => {
            assert_eq!(explain, "Expecting string terminator");
        }
        other => panic!("expected alignment error, got {other:?}"),
    }
}

#[test]
fn test_bool_stream() {
    let mut wire = Vec::new();
    write_string_stream(&mut wire, b"t").unwrap();
    assert!(read_bool_stream(&mut Cursor::new(wire)).unwrap());
    let mut wire = Vec::new();
    write_string_stream(&mut wire, b"f").unwrap();
    assert!(!read_bool_stream(&mut Cursor::new(wire)).unwrap());
    // an empty payload reads as false (C++ takes the first burst zero as
    // the character)
    let mut wire = Vec::new();
    write_string_stream(&mut wire, b"").unwrap();
    assert!(!read_bool_stream(&mut Cursor::new(wire)).unwrap());
}

#[test]
fn test_read_to_response_exception_frame() {
    let mut wire = burst(BURST_EXCEPTION_OPEN);
    write_string_stream(&mut wire, b"java.lang.Exception").unwrap();
    write_string_stream(&mut wire, b"boom").unwrap();
    wire.extend_from_slice(&burst(BURST_EXCEPTION_CLOSE));
    match read_to_response(&mut Cursor::new(wire)) {
        Err(WireError::Unlace(UnlaceError::Java { type_name, explain })) => {
            assert_eq!(type_name, "java.lang.Exception");
            assert_eq!(explain, "boom");
        }
        other => panic!("expected JavaError, got {other:?}"),
    }
}

#[test]
fn test_nibble_codec() {
    let bytes = [0x00u8, 0x0f, 0xf0, 0xde, 0xad];
    let pairs = nibble_expand(&bytes);
    assert_eq!(pairs, b"AAAPPANOKN".to_vec());
    assert_eq!(nibble_condense(&pairs), bytes.to_vec());
}

#[test]
fn test_string_data_size_header() {
    for sz in [0u32, 1, 63, 64, 100, 0xfff] {
        let [b1, b2] = string_data_size_header(sz);
        assert_eq!(string_data_size(b1, b2), sz, "sz={sz}");
    }
}
