use super::*;

#[test]
fn other_families_name_their_sync_and_sfence() {
    assert_eq!(other_spelling("MIPS", b"SYNC"), Some("_sync"));
    assert_eq!(other_spelling("MIPS", b"synch"), None);
    assert_eq!(other_spelling("RISCV", b"sfence.vma"), Some("_sfence"));
    assert_eq!(other_spelling("RISCV", b"fence"), None);
    assert_eq!(other_spelling("PowerPC", b"SYNC"), None);
}

#[test]
fn sync_operand_selects_the_barrier() {
    assert_eq!(spelling(b"sync", Some(0)), Some("__sync"));
    assert_eq!(spelling(b"sync", Some(1)), Some("__lwsync"));
    assert_eq!(spelling(b"sync", Some(2)), Some("__ptesync"));
    assert_eq!(spelling(b"sync", Some(3)), None);
    assert_eq!(spelling(b"sync", None), None);
    assert_eq!(spelling(b"instructionSynchronize", None), Some("__isync"));
}
