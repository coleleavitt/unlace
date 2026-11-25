use super::*;

const TEXT: &[CodeSpan] = &[(0x1000, 0x1100)];

#[test]
fn clips_at_the_next_entry() {
    assert_eq!(clip(0x1000, Some(0x1020), TEXT), 0x20);
}

#[test]
fn last_entry_runs_to_the_section_end() {
    assert_eq!(clip(0x10c0, None, TEXT), 0x40);
}

#[test]
fn next_entry_outside_the_section_does_not_extend_past_it() {
    // The neighbour is the first entry of the NEXT code section, so the clip
    // must stop at this section's end rather than swallow the gap between
    // them (the `.init` → `.plt` shape: 0x1000+0x1b then 0x1020).
    assert_eq!(clip(0x10c0, Some(0x2000), TEXT), 0x40);
}

#[test]
fn entry_outside_every_code_section_has_no_extent() {
    // A `.got` import slot or an undefined external: an address, not a body.
    assert_eq!(clip(0x5000, Some(0x5008), TEXT), 0);
}

#[test]
fn picks_the_containing_section_not_the_first() {
    let code: &[CodeSpan] = &[(0x1000, 0x101b), (0x1020, 0x1030), (0x1040, 0x1673)];
    // `.plt` stub: bounded by its own section, not by `.text`'s end.
    assert_eq!(clip(0x1020, Some(0x1040), code), 0x10);
    // `.init`: the next entry is in another section, so `.init`'s end wins.
    assert_eq!(clip(0x1000, Some(0x1020), code), 0x1b);
}

#[test]
fn a_duplicate_or_backward_neighbour_is_ignored() {
    assert_eq!(clip(0x1040, Some(0x1040), TEXT), 0x1100 - 0x1040);
    assert_eq!(clip(0x1040, Some(0x1000), TEXT), 0x1100 - 0x1040);
}

#[test]
fn code_spans_keeps_only_sized_code_sections() {
    use unlace_sleigh::loadimage::section_flags;
    let sections = vec![
        (0x1000, 0x100, section_flags::CODE),
        (0x2000, 0x100, section_flags::DATA),
        (0x3000, 0, section_flags::CODE),      // zero length
        (u64::MAX, 0x10, section_flags::CODE), // wraps
        (0x0500, 0x080, section_flags::CODE | section_flags::READONLY),
    ];
    assert_eq!(
        code_spans(&sections),
        vec![(0x500, 0x580), (0x1000, 0x1100)]
    );
}

#[test]
fn spans_prefer_the_section_table() {
    use unlace_sleigh::loadimage::section_flags;
    let sections = vec![(0x1000, 0x100, section_flags::CODE)];
    let segments = vec![(0x0, 0x8000, section_flags::CODE)];
    assert_eq!(spans(&sections, &segments), vec![(0x1000, 0x1100)]);
}

#[test]
fn spans_fall_back_to_the_executable_segments() {
    use unlace_sleigh::loadimage::section_flags;
    // A sectionless ELF: no section table at all, four PT_LOADs, one of them
    // executable. Only the executable one can contain a body.
    let segments = vec![
        (0x0000, 0x810, section_flags::DATA | section_flags::READONLY),
        (
            0x1000,
            0x12d5,
            section_flags::CODE | section_flags::READONLY,
        ),
        (0x3000, 0xd20, section_flags::DATA | section_flags::READONLY),
        (0x7d78, 0x2a8, section_flags::DATA),
    ];
    assert_eq!(spans(&[], &segments), vec![(0x1000, 0x22d5)]);
    // The last entry of that segment runs to its end, where before every
    // entry in the image reported 0.
    assert_eq!(clip(0x12d0, None, &spans(&[], &segments)), 0x1005);
}

#[test]
fn a_section_table_with_no_code_still_falls_back() {
    use unlace_sleigh::loadimage::section_flags;
    // The blindness is "no CODE span", not "no sections": a table of pure
    // data sections leaves the same empty world an absent one does.
    let sections = vec![(0x3000, 0x100, section_flags::DATA)];
    let segments = vec![(0x1000, 0x100, section_flags::CODE)];
    assert_eq!(spans(&sections, &segments), vec![(0x1000, 0x1100)]);
}

#[test]
fn no_segments_either_leaves_the_extent_unrecovered() {
    assert_eq!(spans(&[], &[]), Vec::<CodeSpan>::new());
}

#[test]
fn a_measured_flow_cuts_the_clip_and_nothing_past_it_has_a_body() {
    let ends = std::collections::BTreeMap::from([(0x1000, 0x101c)]);
    assert_eq!(bound_by_flow(0x1000, 0x2f8e, Some(0x1000), &ends), 0x1c);
    assert_eq!(bound_by_flow(0x1010, 0x2f7e, Some(0x1000), &ends), 0xc);
    assert_eq!(bound_by_flow(0x1020, 0x2f6e, Some(0x1000), &ends), 0);
    assert_eq!(bound_by_flow(0x0f00, 0x100, None, &ends), 0);
    // The flow is a bound on the clip, never a widening of it.
    assert_eq!(bound_by_flow(0x1000, 0x10, Some(0x1000), &ends), 0x10);
    // An entry whose flow was not measured keeps its clip.
    assert_eq!(bound_by_flow(0x3000, 0x40, Some(0x3000), &ends), 0x40);
}

#[test]
fn extent_at_finds_the_next_entry_in_the_list() {
    let entries = [0x1000, 0x1020, 0x1080];
    assert_eq!(extent_at(0x1020, &entries, TEXT), 0x60);
    assert_eq!(extent_at(0x1080, &entries, TEXT), 0x80);
    // An address the enumeration does not know still clips against its
    // neighbours (`--addr` on an undiscovered function).
    assert_eq!(extent_at(0x1040, &entries, TEXT), 0x40);
}
