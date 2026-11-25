use super::*;

#[test]
fn only_m_profile_languages_qualify_without_a_file() {
    assert!(is_m_profile("ARM:LE:32:Cortex:default", None));
    assert!(is_m_profile("ARM:BE:32:v8-m:default", None));
    assert!(!is_m_profile("ARM:LE:32:v8:default", None));
    assert!(!is_m_profile("AARCH64:LE:64:v8A:default", None));
}

#[test]
fn mapped_ranges_are_cut_out_of_the_device_regions() {
    assert_eq!(unmapped(1 << 32, &[]), DEVICE.to_vec());
    let mapped = [
        (0x0800_0000, 0x1000, 5),
        (0x4000_0000, 0x1000, 6),
        (0xe010_0000, 0x10, 6),
    ];
    assert_eq!(
        unmapped(1 << 32, &mapped),
        [
            (0x4000_1000, 0x6000_0000),
            (0xe000_0000, 0xe010_0000),
            (0xe010_0010, 0x1_0000_0000)
        ]
    );
    assert_eq!(unmapped(0x5000_0000, &[]), [(0x4000_0000, 0x5000_0000)]);
}
