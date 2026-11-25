use super::*;

/// `tbb` at 0x1000; its table at 0x1004: four byte offsets, then code.
const BYTES: [u8; 8] = [0x02, 0x05, 0x09, 0x0b, 0x0a, 0x20, 0x01, 0x30];
const EXEC: [(u64, u64); 1] = [(0x1000, 0x1100)];

fn image() -> PoolImage<'static> {
    PoolImage::from_ranges(vec![(0x1004, 0x100c, &BYTES[..])], 4, true).unwrap()
}

#[test]
fn a_byte_table_yields_each_case_after_it() {
    assert_eq!(
        offset_targets(0x1004, 1, 4, 4, 0x1000, &image(), &EXEC),
        vec![0x1008, 0x100e, 0x1016, 0x101a]
    );
}

#[test]
fn a_halfword_table_reads_little_endian_pairs() {
    let exec = [(0x1000, 0x3000)];
    assert_eq!(
        offset_targets(0x1004, 2, 2, 2, 0x1000, &image(), &exec),
        vec![0x1a08, 0x2616]
    );
}

/// A case outside the dispatcher's own executable range is not a case.
#[test]
fn a_target_outside_the_section_refuses_the_read() {
    assert!(offset_targets(0x1004, 2, 2, 2, 0x1000, &image(), &EXEC).is_empty());
}

/// One more entry than the table has reads the first case's code as an
/// offset back into the table: the whole read is refused.
#[test]
fn an_entry_inside_the_table_refuses_the_read() {
    let bytes = [0x02, 0x01, 0x09, 0x0b];
    let pool = PoolImage::from_ranges(vec![(0x1004, 0x1008, &bytes[..])], 4, true).unwrap();
    assert!(offset_targets(0x1004, 1, 4, 4, 0x1000, &pool, &EXEC).is_empty());
}

/// Over the jump-table ceiling only the first entries are taken, and they are
/// still checked against the end of the whole table.
#[test]
fn a_ceiling_reads_the_first_entries() {
    assert_eq!(
        offset_targets(0x1004, 1, 4, 2, 0x1000, &image(), &EXEC),
        vec![0x1008, 0x100e]
    );
    let bytes = [0x01, 0x05, 0x09, 0x0b];
    let pool = PoolImage::from_ranges(vec![(0x1004, 0x1008, &bytes[..])], 4, true).unwrap();
    assert!(offset_targets(0x1004, 1, 4, 2, 0x1000, &pool, &EXEC).is_empty());
}

#[test]
fn a_table_past_the_read_only_image_reads_nothing() {
    assert!(offset_targets(0x1004, 1, 12, 12, 0x1000, &image(), &[(0x1000, 0x2000)]).is_empty());
}
