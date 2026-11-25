use super::*;

fn fixture() -> Vec<u8> {
    std::fs::read(concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/kernelcache/fileset.macho"
    ))
    .unwrap()
}

fn mach_header(filetype: u32, ncmds: u32, cmds: &[u8]) -> Vec<u8> {
    let mut out = Vec::new();
    for v in [
        MH_MAGIC_64,
        0x0100_000c,
        0,
        filetype,
        ncmds,
        cmds.len() as u32,
        0,
        0,
    ] {
        out.extend_from_slice(&v.to_le_bytes());
    }
    out.extend_from_slice(cmds);
    out
}

fn le_words(words: &[u32]) -> Vec<u8> {
    words.iter().flat_map(|w| w.to_le_bytes()).collect()
}

/// Entries aliasing one header are read against it once: ten thousand
/// entries naming one 50,000-command header cost one parse, not 10,000.
#[test]
fn aliased_entries_are_read_once() {
    let mut image = fixture();
    let all = entries(&image).unwrap();
    let kext = all.iter().position(|e| e.filetype != MH_EXECUTE).unwrap();
    let expected = bind_to_collection(&mut image.clone(), &all, kext);
    let ncmds = 50_000u32;
    let at = image.len().next_multiple_of(8);
    image.resize(at, 0);
    for v in [
        MH_MAGIC_64,
        0x0100_000c,
        0,
        MH_EXECUTE,
        ncmds,
        ncmds * 8,
        0,
        0,
    ] {
        image.extend_from_slice(&v.to_le_bytes());
    }
    for _ in 0..ncmds {
        image.extend_from_slice(&0x7fff_ffffu32.to_le_bytes());
        image.extend_from_slice(&8u32.to_le_bytes());
    }
    let alias = FilesetEntry {
        id: "alias".into(),
        fileoff: at as u64,
        filetype: MH_EXECUTE,
    };
    let mut aliased = all.clone();
    aliased.extend(std::iter::repeat_n(alias, 10_000));
    let start = std::time::Instant::now();
    let bound = bind_to_collection(&mut image, &aliased, kext);
    let elapsed = start.elapsed();
    assert_eq!(bound, expected);
    assert!(
        elapsed < std::time::Duration::from_millis(500),
        "10k aliases took {elapsed:?}"
    );
}

/// Distinct entry headers that skip into one shared tail of load commands
/// stop at the work budget instead of re-reading the tail per header, and
/// the real entries before them still bind.
#[test]
fn headers_sharing_commands_stop_at_the_work_budget() {
    let mut image = fixture();
    let all = entries(&image).unwrap();
    let kext = all.iter().position(|e| e.filetype != MH_EXECUTE).unwrap();
    let expected = bind_to_collection(&mut image.clone(), &all, kext);
    let (headers, tail_cmds) = (2_000usize, 40_000usize);
    let first_header = image.len().next_multiple_of(8);
    image.resize(first_header, 0);
    let tail_at = first_header + headers * 40;
    let mut aliased = all.clone();
    for i in 0..headers {
        let at = first_header + i * 40;
        let skip = (tail_at - (at + 32)) as u32;
        let cmds = (tail_cmds as u32 + 1, skip + tail_cmds as u32 * 8);
        let header = mach_header(MH_EXECUTE, cmds.0, &[]);
        image.extend_from_slice(&header[..20]);
        image.extend_from_slice(&cmds.1.to_le_bytes());
        image.extend_from_slice(&header[24..]);
        image.extend_from_slice(&le_words(&[0x7fff_ffff, skip]));
        aliased.push(FilesetEntry {
            id: format!("h{i}"),
            fileoff: at as u64,
            filetype: MH_EXECUTE,
        });
    }
    for _ in 0..tail_cmds {
        image.extend_from_slice(&le_words(&[0x7fff_ffff, 8]));
    }
    let start = std::time::Instant::now();
    let bound = bind_to_collection(&mut image, &aliased, kext);
    let elapsed = start.elapsed();
    assert_eq!(bound, expected);
    assert!(
        elapsed < std::time::Duration::from_secs(5),
        "shared-tail headers took {elapsed:?}"
    );
}

/// A segment command must hold every section its header declares, so one
/// 72-byte command claiming a million sections is refused whole.
#[test]
fn sections_stop_at_the_segment_command() {
    let mut image = vec![0u8; 0x1000];
    let at = 0x100;
    let mut seg = le_words(&[LC_SEGMENT_64, SEGMENT_LEN as u32]);
    seg.resize(SEGMENT_LEN, 0);
    seg[64..68].copy_from_slice(&1_000_000u32.to_le_bytes());
    let header = mach_header(MH_EXECUTE, 1, &seg);
    image[at..at + header.len()].copy_from_slice(&header);
    for off in (at + 32 + SEGMENT_LEN..image.len()).step_by(4) {
        image[off..off + 4].copy_from_slice(&S_ATTR_SOME_INSTRUCTIONS.to_le_bytes());
    }
    assert!(load_commands(&image, at).is_none());
}

/// Undefined symbols that all read one long unterminated name copy it at
/// most once per byte of the file; the loop ends promptly without a blow-up.
#[test]
fn undefined_names_copy_at_most_the_file() {
    let count = 30_000u32;
    let name_len = 1usize << 20;
    let symoff = 0x4000usize;
    let stroff = symoff + count as usize * NLIST_LEN;
    let mut cmds = le_words(&[
        LC_SYMTAB,
        24,
        symoff as u32,
        count,
        stroff as u32,
        name_len as u32 + 2,
    ]);
    let mut dysym = le_words(&[LC_DYSYMTAB, 80, 0, 0, 0, 0, 0, count]);
    dysym.resize(80, 0);
    cmds.extend_from_slice(&dysym);
    let header = mach_header(0xb, 2, &cmds);
    let mut image = vec![0u8; stroff + name_len + 2];
    image[0x1000..0x1000 + header.len()].copy_from_slice(&header);
    for i in 0..count as usize {
        let at = symoff + i * NLIST_LEN;
        image[at..at + 4].copy_from_slice(&(1 + i as u32).to_le_bytes());
    }
    image[stroff + 1..stroff + 1 + name_len].fill(b'A');
    let all = [FilesetEntry {
        id: "own".into(),
        fileoff: 0x1000,
        filetype: 0xb,
    }];
    let start = std::time::Instant::now();
    assert_eq!(bind_to_collection(&mut image, &all, 0), 0);
    let elapsed = start.elapsed();
    assert!(
        elapsed < std::time::Duration::from_secs(5),
        "undefined-name bomb took {elapsed:?}"
    );
}
