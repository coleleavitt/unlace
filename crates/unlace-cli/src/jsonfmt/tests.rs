use super::*;

#[test]
fn roundtrip_object_preserves_key_order() {
    let v = parse(r#"{"b": 1, "a": "x", "c": [true, false]}"#).unwrap();
    let out = dumps_indent2(&v);
    assert_eq!(
        out,
        "{\n  \"b\": 1,\n  \"a\": \"x\",\n  \"c\": [\n    true,\n    false\n  ]\n}"
    );
}

#[test]
fn empty_containers() {
    assert_eq!(dumps_indent2(&parse("[]").unwrap()), "[]");
    assert_eq!(dumps_indent2(&parse("{}").unwrap()), "{}");
}

#[test]
fn extract_span_skips_prompt_brackets() {
    let t = "[decomp]> stage catalog\n[ {\"x\": 1} ]\n[decomp]> quit\n";
    let span = extract_json_span(t).unwrap();
    assert_eq!(span, "[ {\"x\": 1} ]");
}

#[test]
fn ascii_escape_high_chars() {
    let v = Json::Str("\u{26a0}\u{fe0f} opt-in".to_string());
    // warning sign + variation selector -> ⚠️
    assert_eq!(dumps_compact(&v), "\"\\u26a0\\ufe0f opt-in\"");
}
