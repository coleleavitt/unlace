use super::*;

#[test]
fn fixed_width_eh_pointers_follow_byte_order() {
    for little in [false, true] {
        for (format, width, signed) in [
            (2, 2, false),
            (3, 4, false),
            (4, 8, false),
            (10, 2, true),
            (11, 4, true),
            (12, 8, true),
            (0, 4, false),
            (0, 8, false),
        ] {
            let value = if signed { u64::MAX - 3 } else { 0x1234 };
            let bytes = if little {
                value.to_le_bytes()[..width].to_vec()
            } else {
                value.to_be_bytes()[8 - width..].to_vec()
            };
            let expected = 0x1000u64.wrapping_add(value);
            assert_eq!(
                decode_eh_pointer_ordered(format | 0x10, 0x1000, 0, &bytes, 0, width, little),
                Some(expected)
            );
            assert_eq!(
                decode_eh_pointer_ordered(format, 0, 0, &bytes[..width - 1], 0, width, little),
                None
            );
        }
        assert_eq!(
            decode_eh_pointer_ordered(1, 0, 0, &[0x81, 1], 0, 4, little),
            Some(129)
        );
        assert_eq!(
            decode_eh_pointer_ordered(9, 0, 0, &[0x7c], 0, 4, little),
            Some(u64::MAX - 3)
        );
    }
}

#[test]
fn interior_is_strict() {
    let bodies = vec![(0x1000, 0x1100), (0x2000, 0x2010)];
    assert!(
        !is_interior(&bodies, 0x1000),
        "an FDE start is a function, not an interior"
    );
    assert!(is_interior(&bodies, 0x1080));
    assert!(
        !is_interior(&bodies, 0x1100),
        "the open end belongs to the next function"
    );
    assert!(!is_interior(&bodies, 0x1200));
    assert!(is_interior(&bodies, 0x2008));
}

#[test]
fn suppress_keeps_starts_and_gaps() {
    let bodies = vec![(0x1000, 0x1100)];
    let mut entries = vec![0x1000, 0x1010, 0x10f0, 0x1100, 0x2000];
    let dropped = suppress_interior_entries(&mut entries, &bodies);
    assert_eq!(entries, vec![0x1000, 0x1100, 0x2000]);
    assert_eq!(dropped, vec![0x1010, 0x10f0]);
}

#[test]
fn no_bodies_is_a_no_op() {
    let mut entries = vec![0x1010, 0x1020];
    let dropped = suppress_interior_entries(&mut entries, &[]);
    assert_eq!(entries, vec![0x1010, 0x1020]);
    assert!(dropped.is_empty());
}
