use super::*;

#[test]
fn synthetic_names_are_v_then_digits() {
    assert!(is_synthetic_local_name("v1"));
    assert!(is_synthetic_local_name("v12"));
    assert!(!is_synthetic_local_name("v"));
    assert!(!is_synthetic_local_name("vx1"));
    assert!(!is_synthetic_local_name("val2"));
    assert!(!is_synthetic_local_name("score_1"));
}

#[test]
fn renumbers_in_first_appearance_order() {
    let reserved = BTreeSet::new();
    let map = renumber_synthetic_locals(["v7", "score", "v3", "v7"], &reserved, &|_: &str| false);
    assert_eq!(map.get("v7").map(String::as_str), Some("v1"));
    assert_eq!(map.get("v3").map(String::as_str), Some("v2"));
    assert_eq!(map.get("score"), None);
    assert_eq!(map.len(), 2);
}

#[test]
fn skips_reserved_and_taken_spellings() {
    let reserved: BTreeSet<String> = ["v1".to_owned()].into_iter().collect();
    let map = renumber_synthetic_locals(["v9"], &reserved, &|name: &str| name == "v2");
    assert_eq!(map.get("v9").map(String::as_str), Some("v3"));
}
