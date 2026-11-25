use super::*;

#[test]
fn relr_bitmap_expands_to_slots() {
    // address 0x1000, then bitmap 0b101 << 1 | 1: slots 0x1008 and 0x1018.
    let mut slots = Vec::new();
    let words: [u64; 2] = [0x1000, (0b101 << 1) | 1];
    let mut bytes = vec![0u8; 0x40];
    bytes[..4].copy_from_slice(b"\x7fELF");
    bytes[4] = 2;
    bytes[5] = 1;
    let mut image = bytes.clone();
    for w in words {
        image.extend_from_slice(&w.to_le_bytes());
    }
    let view = ElfView {
        bytes: &image,
        is64: true,
        le: true,
        loads: vec![(0x40, 16, 0x40)],
        dynamic: None,
    };
    read_relr(&view, 0x40, 16, &mut slots);
    let offsets: Vec<u64> = slots.iter().map(|e| e.offset).collect();
    assert_eq!(offsets, vec![0x1000, 0x1008, 0x1018]);
}

#[test]
fn aps2_groups_share_info_and_offset_delta() {
    // count 3, start offset 0x1000-8; one group of 3, by info and by delta 8.
    let mut stream = b"APS2".to_vec();
    for v in [3i64, 0x1000 - 8, 3, 1 | 2, 8, 0x403] {
        let mut v = v;
        loop {
            let byte = (v & 0x7f) as u8;
            v >>= 7;
            let done = (v == 0 && byte & 0x40 == 0) || (v == -1 && byte & 0x40 != 0);
            stream.push(if done { byte } else { byte | 0x80 });
            if done {
                break;
            }
        }
    }
    let mut image = vec![0u8; 0x40];
    image[..4].copy_from_slice(b"\x7fELF");
    image.extend_from_slice(&stream);
    let view = ElfView {
        bytes: &image,
        is64: true,
        le: true,
        loads: vec![(0x40, stream.len() as u64, 0x40)],
        dynamic: None,
    };
    let mut out = Vec::new();
    read_aps2(&view, 0x40, stream.len() as u64, true, &mut out);
    assert_eq!(out.len(), 3);
    assert_eq!(out[2].offset, 0x1010);
    assert_eq!(out[0].r_type, 0x403);
    assert_eq!(out[0].addend, Some(0));
}
