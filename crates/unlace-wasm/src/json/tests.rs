use super::*;

#[test]
fn objects_and_arrays_are_compact_and_escaped() {
    let o = Obj::new()
        .str("name", "a\"b\n")
        .num("n", 3)
        .opt_num("none", None::<i64>)
        .bool("ok", true)
        .addr("address", 0x1161)
        .raw("list", &arr(["1".to_string(), "2".to_string()]))
        .end();
    assert_eq!(
        o,
        "{\"name\":\"a\\\"b\\n\",\"n\":3,\"none\":null,\"ok\":true,\"address\":4449,\
             \"address_hex\":\"0x1161\",\"list\":[1,2]}"
    );
    assert_eq!(arr(Vec::<String>::new()), "[]");
    let address = u64::MAX - 1;
    let wide = Obj::new().addr("address", address).end();
    let wide: serde_json::Value = serde_json::from_str(&wide).expect("valid JSON");
    assert_eq!(wide["address"].as_u64(), Some(address));
    assert_eq!(wide["address_hex"].as_str(), Some("0xfffffffffffffffe"));
    let back: serde_json::Value = serde_json::from_str(&o).expect("valid JSON");
    assert_eq!(back["name"].as_str(), Some("a\"b\n"));
    assert_eq!(back["list"].as_array().expect("list").len(), 2);
    assert_eq!(back["address_hex"].as_str(), Some("0x1161"));
}
