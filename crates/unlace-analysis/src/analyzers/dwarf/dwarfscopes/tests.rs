use super::*;

#[test]
fn registers_and_contiguous_pieces_decode() {
    assert_eq!(single_register(&[0x55]), Some(5));
    assert_eq!(single_register(&[0x90, 0x11]), Some(17));
    assert_eq!(single_register(&[0x55, 0x93, 0x08]), None);
    assert_eq!(
        piece_frame_offset(&[0x91, 0x60, 0x93, 0x08, 0x91, 0x68, 0x93, 0x08]),
        Some(-32)
    );
    assert_eq!(
        piece_frame_offset(&[0x91, 0x60, 0x93, 0x08, 0x91, 0x70, 0x93, 0x08]),
        None
    );
    assert_eq!(
        register_name(object::Architecture::X86_64, 3).as_deref(),
        Some("RBX")
    );
    assert_eq!(
        register_name(object::Architecture::X86_64, 12).as_deref(),
        Some("R12")
    );
}

#[test]
fn frame_pointer_bases_sit_below_the_cfa() {
    assert_eq!(frame_base_offset(Some(FrameBase::Register(6)), 8), Some(-8));
    assert_eq!(frame_base_offset(Some(FrameBase::Register(5)), 4), Some(-4));
    assert_eq!(
        frame_base_offset(Some(FrameBase::Register(29)), 0),
        Some(-16)
    );
    assert_eq!(frame_base_offset(Some(FrameBase::Cfa), 8), Some(8));
    assert_eq!(frame_base_offset(Some(FrameBase::Register(7)), 8), None);
}
