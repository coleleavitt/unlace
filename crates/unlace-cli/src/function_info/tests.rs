use super::*;
use crate::jsonfmt::dumps_compact;

#[test]
fn function_record_preserves_field_order_escaping_and_full_address() {
    for (address, expected) in [
        (
            0,
            r#"{"name":"\u96ea\n\"","address":0,"address_hex":"0x0"}"#,
        ),
        (
            9007199254740993,
            r#"{"name":"\u96ea\n\"","address":9007199254740993,"address_hex":"0x20000000000001"}"#,
        ),
        (
            u64::MAX,
            r#"{"name":"\u96ea\n\"","address":18446744073709551615,"address_hex":"0xffffffffffffffff"}"#,
        ),
    ] {
        assert_eq!(dumps_compact(&function_json("雪\n\"", address)), expected);
    }
}
