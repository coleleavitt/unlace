use super::*;

#[test]
fn one_recognizer_classifies_every_stub_form() {
    let tail = [0x7d69_03a6, 0x4e80_0420];
    assert_eq!(
        stub(&[0x817e_fff0, tail[0], tail[1], 0x6000_0000]),
        Some(Stub::Pic(0xffff_fff0))
    );
    assert_eq!(
        stub(&[0x3d7e_0001, 0x816b_8000, tail[0], tail[1]]),
        Some(Stub::Pic(0x8000))
    );
    assert_eq!(
        stub(&[0x3d60_0000, 0x816b_3000, tail[0], tail[1]]),
        Some(Stub::Absolute(0x3000))
    );
    assert_eq!(
        stub(&[0x3d60_0001, 0x816b_8004, tail[0], tail[1]]),
        Some(Stub::Absolute(0x8004))
    );
    for words in [
        vec![0x817e_0000, tail[0], tail[1], 0x4e80_0020],
        vec![0x3d7f_0000, 0x816b_0000, tail[0], tail[1]],
        vec![0x3d61_0000, 0x816b_0000, tail[0], tail[1]],
        vec![0x3d60_0000, 0x816c_0000, tail[0], tail[1]],
        vec![0x3d60_0000, 0x816b_0000, tail[0], 0x4e80_0421],
        vec![0x817e_0000, tail[0], tail[1]],
    ] {
        assert_eq!(stub(&words), None, "{words:x?}");
    }
    assert_eq!(
        stub_delta(&[0x3d60_0000, 0x816b_3000, tail[0], tail[1]]),
        None
    );
    assert_eq!(
        stub_delta(&[0x817e_0004, tail[0], tail[1], 0x6000_0000]),
        Some(4)
    );
}
