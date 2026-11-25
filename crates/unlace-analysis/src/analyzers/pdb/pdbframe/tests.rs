use super::*;

/// `push rbp ; sub rsp,0x20 ; lea rbp,[rsp+0x20]`: RBP is the entry stack
/// pointer less the pushed RBP.
#[test]
fn push_alloc_then_set() {
    let info = [0x01, 10, 3, 0x25, 10, 0x03, 5, 0x32, 1, 0x50];
    assert_eq!(frame_register(&info), Some((334, -8)));
}

/// An allocation after `SET_FPREG` does not move the frame register, and a
/// large allocation before it does.
#[test]
fn only_codes_before_the_set_count() {
    // push rbp ; sub rsp,0x1000 ; mov rbp,rsp ; sub rsp,0x40
    let info = [
        0x01, 20, 5, 0x05, 20, 0x72, 12, 0x03, 9, 0x01, 0x00, 0x02, 1, 0x50,
    ];
    assert_eq!(frame_register(&info), Some((334, -(0x1000 + 8))));
}

#[test]
fn rejected_shapes() {
    assert_eq!(
        frame_register(&[0x01, 4, 1, 0x00, 4, 0x02]),
        None,
        "no frame register"
    );
    assert_eq!(
        frame_register(&[0x21, 4, 1, 0x05, 4, 0x03]),
        None,
        "chained"
    );
    assert_eq!(
        frame_register(&[0x01, 4, 1, 0x05, 4, 0x06]),
        None,
        "epilog code"
    );
    assert_eq!(
        frame_register(&[0x01, 4, 2, 0x05, 4, 0x03]),
        None,
        "truncated"
    );
    assert_eq!(
        frame_register(&[0x01, 4, 1, 0x05, 4, 0x02]),
        None,
        "no SET_FPREG"
    );
}

/// The x64 fixture uses no frame pointer, so it has no entries.
#[test]
fn frameless_fixture() {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/pdb_types_x86_64.exe"
    );
    let bytes = std::fs::read(path).expect("read the fixture");
    assert!(x64_frame_registers(&bytes).is_empty());
}
