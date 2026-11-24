//! Unit tests for the `FUNCDATA_StackObjects` record decoder.

use super::super::End;
use super::*;

fn record(off: i32, size: i32, ptrdata: i32, gcdataoff: u32) -> Vec<u8> {
    let mut b = Vec::new();
    b.extend(off.to_le_bytes());
    b.extend(size.to_le_bytes());
    b.extend(ptrdata.to_le_bytes());
    b.extend(gcdataoff.to_le_bytes());
    b
}

#[test]
fn records_decode_in_order() {
    let mut body = record(-24, 16, 8, 0);
    body.extend(record(8, 8, 0, 4));
    assert_eq!(
        parse(&body, End::Little),
        Some(vec![
            StackObject {
                off: -24,
                size: 16,
                ptrdata: 8,
            },
            StackObject {
                off: 8,
                size: 8,
                ptrdata: 0,
            },
        ])
    );
}

#[test]
fn partial_record_is_rejected() {
    let mut body = record(-24, 16, 8, 0);
    body.pop();
    assert_eq!(parse(&body, End::Little), None);
}

#[test]
fn negative_size_is_rejected() {
    assert_eq!(parse(&record(-8, -1, 0, 0), End::Little), None);
}
