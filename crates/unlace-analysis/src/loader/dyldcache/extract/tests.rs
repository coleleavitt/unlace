use super::*;

fn layout(width: Width, cmds: Vec<u8>) -> ImageLayout {
    parse_layout(0, width, vec![0; width.header], cmds)
}

#[test]
fn a_load_command_too_short_for_its_fields_is_skipped() {
    let mut cmds = Vec::new();
    cmds.extend(LC_SYMTAB.to_le_bytes());
    cmds.extend(8u32.to_le_bytes());
    cmds.extend(0x1bu32.to_le_bytes());
    cmds.extend(8u32.to_le_bytes());
    let layout = layout(WIDE, cmds);
    assert_eq!(layout.commands(), [(0x1b, 8)]);
    assert!(layout.symtab.is_none());
}

#[test]
fn a_32_bit_segment_and_its_sections_are_read_at_their_offsets() {
    let mut seg = NARROW.seg_cmd.to_le_bytes().to_vec();
    seg.extend((56u32 + 68).to_le_bytes());
    seg.extend(b"__TEXT\0\0\0\0\0\0\0\0\0\0");
    for v in [0x1000u32, 0x2000, 0, 0x2000, 5, 5, 1, 0] {
        seg.extend(v.to_le_bytes());
    }
    seg.extend(b"__text\0\0\0\0\0\0\0\0\0\0__TEXT\0\0\0\0\0\0\0\0\0\0");
    for v in [0x1100u32, 0x40, 0x100, 2, 0, 0, 0x8000_0400, 7, 0] {
        seg.extend(v.to_le_bytes());
    }
    let layout = layout(NARROW, seg);
    let [seg] = layout.segments.as_slice() else {
        panic!("{:?}", layout.segments)
    };
    assert_eq!(
        (seg.name.as_str(), seg.vmaddr, seg.vmsize, seg.filesize),
        ("__TEXT", 0x1000, 0x2000, 0x2000)
    );
    let [sec] = seg.sections.as_slice() else {
        panic!("{:?}", seg.sections)
    };
    assert_eq!(
        (
            sec.sectname.as_str(),
            sec.addr,
            sec.size,
            sec.flags,
            sec.reserved1
        ),
        ("__text", 0x1100, 0x40, 0x8000_0400, 7)
    );
}

#[test]
fn linkedit_addresses_do_not_overflow() {
    let layout = ImageLayout {
        address: 0,
        width: WIDE,
        header: Vec::new(),
        cmds: Vec::new(),
        segments: vec![Segment {
            name: "__LINKEDIT".into(),
            vmaddr: u64::MAX - 4,
            vmsize: 8,
            fileoff: 0,
            filesize: 8,
            sections: Vec::new(),
            cmd_offset: 0,
        }],
        symtab: None,
        dysymtab: None,
    };
    assert_eq!(layout.linkedit_va(8), None);
}
