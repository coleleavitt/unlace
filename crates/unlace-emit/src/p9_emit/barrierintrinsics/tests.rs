use super::*;

#[test]
fn sync_operand_selects_the_barrier() {
    assert_eq!(spelling(b"sync", Some(0)), Some("__sync"));
    assert_eq!(spelling(b"sync", Some(1)), Some("__lwsync"));
    assert_eq!(spelling(b"sync", Some(2)), Some("__ptesync"));
    assert_eq!(spelling(b"sync", Some(3)), None);
    assert_eq!(spelling(b"sync", None), None);
    assert_eq!(spelling(b"instructionSynchronize", None), Some("__isync"));
}
