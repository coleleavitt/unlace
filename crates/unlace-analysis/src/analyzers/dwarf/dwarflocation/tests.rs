use super::*;

#[test]
fn member_offsets_accept_only_a_complete_constant_displacement() {
    for (bytes, expected) in [
        (&[0x23, 0x00][..], Some(0)),
        (&[0x23, 0x04][..], Some(4)),
        (&[0x23, 0x80, 0x01][..], Some(128)),
        (&[][..], None),
        (&[0x23][..], None),
        (&[0x23, 0x80][..], None),
        (&[0x23, 0x04, 0x06][..], None),
        (&[0x23, 0x04, 0x9f][..], None),
        (&[0x50][..], None),
    ] {
        assert_eq!(member_offset(bytes), expected, "{bytes:x?}");
    }
    let mut overflow = vec![0x23];
    overflow.extend([0xff; 9]);
    overflow.push(0x01);
    assert_eq!(member_offset(&overflow), None);
}

#[test]
fn frame_relative_constant_displacements_keep_the_exact_location() {
    for (bytes, expected) in [
        (&[0x91, 0x50][..], -48),
        (&[0x91, 0xff, 0x7e][..], -129),
        (&[0x91, 0xff, 0x00][..], 127),
        (&[0x91, 0x50, 0x23, 0x02][..], -46),
        (&[0x91, 0x50, 0x23, 0x04][..], -44),
        (&[0x91, 0x50, 0x23, 0x02, 0x23, 0x04][..], -42),
        (&[0x91, 0x00, 0x23, 0x80, 0x01][..], 128),
        (&[0x91, 0x7f, 0x23, 0x01][..], 0),
    ] {
        assert_eq!(frame_offset(bytes), Some(expected), "{bytes:x?}");
    }
}

#[test]
fn indirect_piece_value_and_malformed_locations_are_not_stack_objects() {
    for bytes in [
        &[][..],
        &[0x91][..],
        &[0x91, 0x80][..],
        &[0x91, 0x50, 0x23][..],
        &[0x91, 0x50, 0x23, 0x80][..],
        &[0x91, 0x50, 0x06][..],
        &[0x91, 0x50, 0x93, 0x04][..],
        &[0x91, 0x50, 0x9f][..],
        &[0x50][..],
        &[0x23, 0x02][..],
    ] {
        assert_eq!(frame_offset(bytes), None, "{bytes:x?}");
    }
    let mut oversized = vec![0x91, 0x00, 0x23];
    oversized.extend([0xff; 9]);
    oversized.push(0x01);
    assert_eq!(frame_offset(&oversized), None);
    oversized[3..].fill(0x80);
    assert_eq!(frame_offset(&oversized), None);
}
