use super::{Mnemonic, MnemonicPool};
use std::sync::Arc;

#[test]
fn a_lane_reuses_spellings_and_owns_them_after_the_pool_drops() {
    let (first, second) = {
        let mut pool = MnemonicPool::default();
        (pool.intern("MOV"), pool.intern("MOV"))
    };

    assert_eq!(first, second);
    assert_eq!(first, "MOV");
    assert!(Arc::ptr_eq(
        first.0.as_ref().expect("nonempty mnemonic has shared text"),
        second
            .0
            .as_ref()
            .expect("nonempty mnemonic has shared text"),
    ));
    assert_eq!(first.as_str(), "MOV");
}

#[test]
fn different_lanes_do_not_share_a_global_pool() {
    let mut first_lane = MnemonicPool::default();
    let mut second_lane = MnemonicPool::default();
    let first = first_lane.intern("BL");
    let second = second_lane.intern("BL");

    assert_eq!(first, second);
    assert!(!Arc::ptr_eq(
        first.0.as_ref().unwrap(),
        second.0.as_ref().unwrap(),
    ));
}

#[test]
fn empty_text_has_no_allocation_and_owned_unicode_roundtrips() {
    let mut pool = MnemonicPool::default();
    let from_str = Mnemonic::from("");
    let from_string = Mnemonic::from(String::new());
    let interned = pool.intern("");
    assert_eq!(from_str, Mnemonic::default());
    assert_eq!(from_string, Mnemonic::default());
    assert_eq!(interned, Mnemonic::default());
    assert!(interned.0.is_none());

    let text = "指令_非常に長い_instruction".repeat(4);
    let mnemonic = Mnemonic::from(text.clone());
    assert_eq!(mnemonic.as_str(), text);
}
