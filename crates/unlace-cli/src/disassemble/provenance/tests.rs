use super::*;

fn seg(vma: u64, size: u64, file_size: u64, served: u64) -> Segment {
    Segment {
        index: None,
        name: None,
        label: format!("the PT_LOAD at 0x{vma:x}"),
        vma,
        size,
        file_offset: 0x100,
        file_size,
        served,
        perms: Some(Perms {
            read: true,
            write: true,
            exec: false,
        }),
    }
}

fn range(
    start: u64,
    end: u64,
    source: Source,
    file_offset: Option<u64>,
    segment: Option<usize>,
) -> Range {
    Range {
        start,
        end,
        source,
        file_offset,
        segment,
        overlaps: Vec::new(),
    }
}

#[test]
fn a_span_is_cut_where_the_file_content_ends() {
    let segments = [seg(0x1000, 0x40, 0x10, 0x40)];
    assert_eq!(
        cut(&segments, &[], 0x1008, 0x1020),
        [
            range(0x1008, 0x1010, Source::File, Some(0x108), Some(0)),
            range(0x1010, 0x1020, Source::ZeroFill, None, Some(0)),
        ]
    );
}

#[test]
fn a_code_segments_tail_is_zero_fill_the_loader_does_not_serve() {
    // An executable segment serves only its file bytes; the rest of its
    // declared memory still reads back as zero inside a listing.
    let segments = [seg(0x1000, 0x40, 0x10, 0x10)];
    assert_eq!(
        classify(&segments, &[], 0x1010),
        (Source::ZeroFill, None, Some(0))
    );
}

#[test]
fn the_first_serving_segment_owns_a_byte_two_segments_claim() {
    let segments = [
        seg(0x1000, 0x100, 0x10, 0x20),
        seg(0x1020, 0x10, 0x10, 0x10),
    ];
    assert_eq!(
        classify(&segments, &[], 0x1020),
        (Source::File, Some(0x100), Some(1))
    );
}

fn at(file_offset: u64, segment: Segment) -> Segment {
    Segment {
        file_offset,
        ..segment
    }
}

fn other(segment: usize, source: Source, file_offset: Option<u64>) -> Overlap {
    Overlap {
        segment,
        source,
        file_offset,
    }
}

#[test]
fn two_loads_of_one_address_keep_the_first_and_list_the_second() {
    let segments = [
        at(0x1000, seg(0x401000, 0x10, 0x10, 0x10)),
        at(0x2000, seg(0x401000, 0x10, 0x10, 0x10)),
    ];
    let mut want = range(0x401000, 0x401010, Source::File, Some(0x1000), Some(0));
    want.overlaps = vec![other(1, Source::File, Some(0x2000))];
    assert_eq!(cut(&segments, &[], 0x401000, 0x401010), [want]);
}

#[test]
fn a_partial_overlap_is_its_own_range() {
    let segments = [
        at(0x1000, seg(0x401000, 0x20, 0x20, 0x20)),
        at(0x2000, seg(0x401010, 0x20, 0x20, 0x20)),
    ];
    let mut shared = range(0x401010, 0x401020, Source::File, Some(0x1010), Some(0));
    shared.overlaps = vec![other(1, Source::File, Some(0x2000))];
    assert_eq!(
        cut(&segments, &[], 0x401000, 0x401030),
        [
            range(0x401000, 0x401010, Source::File, Some(0x1000), Some(0)),
            shared,
            range(0x401020, 0x401030, Source::File, Some(0x2010), Some(1)),
        ]
    );
}

#[test]
fn a_zero_fill_tail_under_the_next_segments_bytes_is_an_overlap() {
    // The tail is trimmed where the next segment starts, so the next one
    // serves; the first still declares that memory, as zero fill.
    let segments = [
        at(0x1000, seg(0x601000, 0x100, 0x10, 0x80)),
        at(0x2080, seg(0x601080, 0x10, 0x10, 0x10)),
    ];
    let mut shared = range(0x601080, 0x601090, Source::File, Some(0x2080), Some(1));
    shared.overlaps = vec![other(0, Source::ZeroFill, None)];
    assert_eq!(cut(&segments, &[], 0x601070, 0x601090)[1], shared);
}

#[test]
fn neighbours_that_meet_or_share_a_page_do_not_overlap() {
    let meeting = [
        at(0x1000, seg(0x401000, 0x1000, 0x1000, 0x1000)),
        at(0x2000, seg(0x402000, 0x10, 0x10, 0x10)),
    ];
    assert!(
        cut(&meeting, &[], 0x400ff0, 0x402010)
            .iter()
            .all(|r| r.overlaps.is_empty())
    );
    let one_page = [
        at(0x1000, seg(0x401000, 0x10, 0x10, 0x10)),
        at(0x1800, seg(0x401800, 0x10, 0x10, 0x10)),
    ];
    assert!(
        cut(&one_page, &[], 0x401000, 0x401810)
            .iter()
            .all(|r| r.overlaps.is_empty())
    );
}

#[test]
fn a_repaired_header_field_is_cut_out_of_the_file_bytes_around_it() {
    let segments = [seg(0x1000, 0x40, 0x40, 0x40)];
    assert_eq!(
        cut(&segments, &[(0x128, 0x12c)], 0x1020, 0x1030),
        [
            range(0x1020, 0x1028, Source::File, Some(0x120), Some(0)),
            range(0x1028, 0x102c, Source::Repaired, Some(0x128), Some(0)),
            range(0x102c, 0x1030, Source::File, Some(0x12c), Some(0)),
        ]
    );
}

#[test]
fn the_loaders_map_must_match_or_nothing_is_claimed() {
    let segments = [seg(0x1000, 0x40, 0x10, 0x40)];
    assert!(same_extents(&segments, &[(0x1000, 0x40, 8)]));
    assert!(!same_extents(&segments, &[(0x1000, 0x30, 8)]));
    assert!(!same_extents(&segments, &[]));
}

#[test]
fn permissions_spell_like_otool() {
    assert_eq!(
        Perms::of(SegmentFlags::MachO {
            flags: 0,
            maxprot: 0,
            initprot: 0
        })
        .unwrap()
        .spelled(),
        "---"
    );
    assert_eq!(
        Perms::of(SegmentFlags::MachO {
            flags: 0,
            maxprot: 7,
            initprot: 5
        })
        .unwrap()
        .spelled(),
        "r-x"
    );
    assert_eq!(
        Perms::of(SegmentFlags::Elf { p_flags: 6 })
            .unwrap()
            .spelled(),
        "rw-"
    );
    assert_eq!(
        Perms::of(SegmentFlags::Coff {
            characteristics: 0x0800_0040
        })
        .unwrap()
        .spelled(),
        "---"
    );
}
