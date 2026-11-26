use super::*;

/// A pool at 0x1000 holding, in order: a mapped address, a small number, a
/// mapped address again. `MAPPED` is what a followed value must land in.
const POOL: [u8; 12] = [
    0x00, 0x40, 0x00, 0x00, // 0x1000 -> 0x4000 (mapped)
    0x2a, 0x00, 0x00, 0x00, // 0x1004 -> 42      (a number)
    0x10, 0x40, 0x00, 0x00, // 0x1008 -> 0x4010 (mapped)
];
const MAPPED: [(u64, u64); 2] = [(0x1000, 0x2000), (0x4000, 0x4100)];

fn ro32() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x1000, 0x100c, &POOL[..])], 4, true).unwrap()
}

#[test]
fn a_pointer_sized_read_of_a_read_only_word_follows_it() {
    assert_eq!(ro32().follow(0x1000, 4, &MAPPED), Some(0x4000));
    assert_eq!(ro32().follow(0x1008, 4, &MAPPED), Some(0x4010));
}

/// The defect the width gate exists for: `ldrh r0,[pool]` is reading a number
/// out of the pool, and a `LOAD`'s address varnode is pointer-sized whatever
/// the access is, so the width has to come from the access itself.
#[test]
fn a_narrow_read_of_a_pool_word_is_not_a_pointer_dereference() {
    assert_eq!(ro32().follow(0x1000, 2, &MAPPED), None);
    assert_eq!(ro32().follow(0x1000, 1, &MAPPED), None);
    assert_eq!(ro32().follow(0x1000, 8, &MAPPED), None);
}

/// A pool is an array of words; an unaligned read of one is not a slot.
#[test]
fn an_unaligned_location_is_not_a_pool_word() {
    assert_eq!(ro32().follow(0x1002, 4, &MAPPED), None);
}

/// The same `ScalarOperandAnalyzer.checkOperands` floor the constant scan
/// uses: a small integer is a number however well it lands.
#[test]
fn a_word_that_is_not_plausibly_an_address_is_not_followed() {
    assert_eq!(ro32().follow(0x1004, 4, &MAPPED), None);
}

/// Nothing outside the read-only ranges is readable: a writable slot holds
/// whatever the loader or the program last wrote, not what the image says.
#[test]
fn a_location_outside_every_read_only_range_reads_nothing() {
    assert_eq!(ro32().follow(0x3000, 4, &MAPPED), None);
    assert_eq!(ro32().follow(0x1010, 4, &MAPPED), None);
}

/// A word whose value lands in no mapped section is not an address.
#[test]
fn a_word_that_lands_nowhere_is_not_followed() {
    assert_eq!(ro32().follow(0x1000, 4, &[(0x9000, 0x9100)]), None);
}

/// A word that runs off the end of its section is not read at all.
#[test]
fn a_word_that_overruns_its_section_reads_nothing() {
    let img = PoolImage::from_ranges(vec![(0x1000, 0x1002, &POOL[..2])], 4, true).unwrap();
    assert_eq!(img.follow(0x1000, 4, &MAPPED), None);
}

#[test]
fn the_word_is_read_in_the_images_own_byte_order() {
    let be = PoolImage::from_ranges(vec![(0x1000, 0x100c, &POOL[..])], 4, false).unwrap();
    assert_eq!(
        be.follow(0x1000, 4, &[(0x400000, 0x401000)]),
        Some(0x400000)
    );
    let img = PoolImage::from_ranges(vec![(0x1000, 0x100c, &POOL[..])], 8, true).unwrap();
    assert_eq!(img.follow(0x1000, 8, &MAPPED), None); // 0x2a00004000 lands nowhere
}

#[test]
fn an_image_with_no_read_only_section_declines_to_exist() {
    assert!(PoolImage::from_ranges(Vec::new(), 4, true).is_none());
}
