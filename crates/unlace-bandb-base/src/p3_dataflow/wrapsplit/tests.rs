use super::*;

#[test]
fn cut_at_the_top_of_a_64_bit_space() {
    assert_eq!(wrap_cut(0xffff_ffff_ffff_fffb, 8, u64::MAX), Some(5));
    assert_eq!(wrap_cut(0xffff_ffff_ffff_fffc, 16, u64::MAX), Some(4));
    assert_eq!(wrap_cut(0xffff_ffff_ffff_fff8, 8, u64::MAX), None);
    assert_eq!(wrap_cut(0, 8, u64::MAX), None);
    assert_eq!(wrap_cut(u64::MAX, 1, u64::MAX), None);
    assert_eq!(wrap_cut(u64::MAX, 2, u64::MAX), Some(1));
}

#[test]
fn cut_at_the_top_of_a_32_bit_space() {
    assert_eq!(wrap_cut(0xffff_fffe, 4, 0xffff_ffff), Some(2));
    assert_eq!(wrap_cut(0xffff_fffc, 4, 0xffff_ffff), None);
    assert_eq!(wrap_cut(0x1_0000_0000, 4, 0xffff_ffff), None);
}

#[test]
fn nothing_below_the_floor_wraps() {
    for highest in [u64::MAX, 0xffff_ffff] {
        let floor = wrap_floor(highest);
        assert_eq!(wrap_cut(floor, int4::MAX, highest), None);
        assert_eq!(wrap_cut(floor + 1, int4::MAX, highest), None);
        assert_eq!(wrap_cut(floor + 2, int4::MAX, highest), Some(int4::MAX - 1));
    }
    assert_eq!(wrap_floor(0xffff), 0);
    assert_eq!(wrap_cut(0, 0x1_0001, 0xffff), Some(0x1_0000));
}

#[test]
fn refinement_marks_both_pieces() {
    assert_eq!(wrap_refinement(8, 5), vec![5, 0, 0, 0, 0, 3, 0, 0]);
    assert_eq!(wrap_refinement(2, 1), vec![1, 1]);
}
