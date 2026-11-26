use super::*;
use unlace_base::marshal::{AttributeId, ELEM_DATA, ELEM_VALUE, ElementId, Encoder, PackedEncode};

const A_ID: AttributeId = AttributeId::new("a_id", 100);
const A_NEG: AttributeId = AttributeId::new("a_neg", 101);
const A_FLAG: AttributeId = AttributeId::new("a_flag", 1);
const A_NAME: AttributeId = AttributeId::new("a_name", 102);
const A_WIDE: AttributeId = AttributeId::new("a_wide", 103);
const ELEM_WIDE: ElementId = ElementId::new("wide", 4000);

/// `<data a_id=7 a_neg=-300 a_flag=true a_name="hello there"><value a_wide=u64::MAX/><wide/><value/></data>`
fn stream() -> Vec<u8> {
    let mut out = Vec::new();
    let mut enc = PackedEncode::new(&mut out);
    enc.open_element(&ELEM_DATA);
    enc.write_unsigned_integer(&A_ID, 7);
    enc.write_signed_integer(&A_NEG, -300);
    enc.write_bool(&A_FLAG, true);
    enc.write_string(&A_NAME, b"hello there");
    enc.open_element(&ELEM_VALUE);
    enc.write_unsigned_integer(&A_WIDE, u64::MAX);
    enc.close_element(&ELEM_VALUE);
    enc.open_element(&ELEM_WIDE);
    enc.close_element(&ELEM_WIDE);
    enc.open_element(&ELEM_VALUE);
    enc.close_element(&ELEM_VALUE);
    enc.close_element(&ELEM_DATA);
    out
}

#[test]
fn attributes_read_as_the_packed_decoder_does() {
    let bytes = stream();
    let mut scan = Scan::new(&bytes, 0);
    assert_eq!(scan.peek().unwrap(), Record::Start(ELEM_DATA.get_id()));
    assert_eq!(scan.open().unwrap(), ELEM_DATA.get_id());
    assert_eq!(
        scan.attribute().unwrap(),
        Some((A_ID.get_id(), Value::Unsigned(7)))
    );
    assert_eq!(
        scan.attribute().unwrap(),
        Some((A_NEG.get_id(), Value::Signed(-300)))
    );
    assert_eq!(
        scan.attribute().unwrap(),
        Some((A_FLAG.get_id(), Value::Bool(true)))
    );
    assert_eq!(
        scan.attribute().unwrap(),
        Some((A_NAME.get_id(), Value::Str(b"hello there")))
    );
    assert_eq!(scan.attribute().unwrap(), None);
    assert_eq!(scan.peek().unwrap(), Record::Start(ELEM_VALUE.get_id()));
    scan.open().unwrap();
    assert_eq!(
        scan.attribute().unwrap(),
        Some((A_WIDE.get_id(), Value::Unsigned(u64::MAX)))
    );
    assert_eq!(scan.close().unwrap(), ELEM_VALUE.get_id());
    assert_eq!(scan.open().unwrap(), ELEM_WIDE.get_id());
    assert_eq!(scan.close().unwrap(), ELEM_WIDE.get_id());
    scan.skip_element().unwrap();
    assert_eq!(scan.peek().unwrap(), Record::End(ELEM_DATA.get_id()));
    scan.close().unwrap();
    assert_eq!(scan.pos(), bytes.len());
}

#[test]
fn skipping_an_element_lands_on_its_end() {
    let bytes = stream();
    let mut scan = Scan::new(&bytes, 0);
    scan.skip_element().unwrap();
    assert_eq!(scan.pos(), bytes.len());
    // The children of <data>, one at a time.
    let mut scan = Scan::new(&bytes, 0);
    scan.open().unwrap();
    scan.skip_attributes().unwrap();
    let mut ids = Vec::new();
    while let Record::Start(id) = scan.peek().unwrap() {
        ids.push(id);
        scan.skip_element().unwrap();
    }
    assert_eq!(
        ids,
        [ELEM_VALUE.get_id(), ELEM_WIDE.get_id(), ELEM_VALUE.get_id()]
    );
    assert_eq!(scan.close().unwrap(), ELEM_DATA.get_id());
}

#[test]
fn a_truncated_stream_is_an_error_not_a_panic() {
    let bytes = stream();
    for cut in 0..bytes.len() {
        assert!(
            Scan::new(&bytes[..cut], 0).skip_element().is_err(),
            "cut {cut}"
        );
    }
    assert!(Scan::new(&bytes, 0).close().is_err());
    assert!(Scan::new(&bytes, bytes.len()).peek().is_err());
    let mut scan = Scan::new(&bytes, 0);
    scan.open().unwrap();
    assert!(scan.attribute().unwrap().unwrap().1.signed().is_err());
}
