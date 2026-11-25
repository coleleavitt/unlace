use super::raw_image_cs;

#[test]
fn a_raw_image_in_the_first_64k_runs_with_cs_zero() {
    assert_eq!(raw_image_cs(0x100, 0x4), Some(0));
    assert_eq!(raw_image_cs(0x7c00, 0x200), Some(0));
    assert_eq!(raw_image_cs(0, 0x1_0000), Some(0));
}

#[test]
fn a_raw_image_one_segment_holds_starts_it_at_its_base() {
    assert_eq!(raw_image_cs(0xf_0000, 0x1_0000), Some(0xf000));
    assert_eq!(raw_image_cs(0x100, 0x1_0000), Some(0x10));
    assert_eq!(raw_image_cs(0x2_0008, 0xfff8), Some(0x2000));
}

#[test]
fn a_larger_raw_image_states_no_segment() {
    assert_eq!(raw_image_cs(0x1_0000, 0x2_e2e8), None);
    assert_eq!(raw_image_cs(0x2_0008, 0xfff9), None);
    assert_eq!(raw_image_cs(0x1234_5670, 0x10), None);
}
