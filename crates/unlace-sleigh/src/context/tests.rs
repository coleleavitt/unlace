use super::*;

#[test]
fn test_context_token_accessors() {
    let tok = Token::new(b"instr", 4, true, 2);
    assert_eq!(tok.get_name(), b"instr");
    assert_eq!(tok.get_size(), 4);
    assert!(tok.is_big_endian());
    assert_eq!(tok.get_index(), 2);
    let tok2 = Token::new(b"tok16", 2, false, 0);
    assert!(!tok2.is_big_endian());
    assert_eq!(tok2.get_size(), 2);
}

#[test]
fn test_context_fixedhandle_default() {
    let hand = FixedHandle::default();
    assert!(hand.space.is_none());
    assert!(hand.offset_space.is_none());
    assert!(hand.temp_space.is_none());
    assert_eq!(hand.size, 0);
    assert_eq!(hand.offset_offset, 0);
    assert_eq!(hand.offset_size, 0);
    assert_eq!(hand.temp_offset, 0);
}
