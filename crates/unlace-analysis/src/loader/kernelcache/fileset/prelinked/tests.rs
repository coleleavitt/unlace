use super::super::prelink;
use super::*;

fn fixture(name: &str) -> Vec<u8> {
    std::fs::read(format!(
        "{}/tests/fixtures/kernelcache/{name}",
        env!("CARGO_MANIFEST_DIR")
    ))
    .unwrap()
}

const BASE: u64 = 0xFFFF_FFF0_0700_4000;

#[test]
fn threaded_pointers_are_rebased() {
    let mut bytes = fixture("prelinked_merged.macho");
    assert_eq!(rebase(&mut bytes), 10);
    assert_eq!(rd_u64(&bytes, 0x4000), Some(BASE + 0x2000));
    assert_eq!(rd_u64(&bytes, 0x4008), Some(BASE + 0x2900));
    assert_eq!(rd_u64(&bytes, 0x4010), Some(BASE + 0x1000));
    assert_eq!(rd_u64(&bytes, 0x5008), Some(BASE + 0x2800));
}

#[test]
fn chain_starts_are_rebased() {
    let mut bytes = fixture("chainstarts.macho");
    assert_eq!(rebase(&mut bytes), 2);
    assert_eq!(rd_u64(&bytes, 0x3000), Some(BASE + 0x2020));
    assert_eq!(rd_u64(&bytes, 0x3008), Some(BASE + 0x2020));
}

#[test]
fn merged_kext_is_found_through_kmod_start() {
    let mut bytes = fixture("prelinked_merged.macho");
    rebase(&mut bytes);
    let info = prelink::kexts(&bytes).unwrap();
    assert_eq!(info[0].module_index, Some(0));
    let (all, merged) = entries(&mut bytes, &info);
    assert!(merged);
    assert_eq!(all[1].id, "com.example.driver.Widget");
    assert_eq!(all[1].fileoff, 0x2800);
    let image = cut(bytes, &all, merged, &[1]).unwrap();
    let names: Vec<Vec<u8>> = segs(&image, 0).into_iter().map(|s| s.name).collect();
    assert!(names.contains(&b"__DATA_CONST".to_vec()) && names.contains(&b"__TEXT_EXEC".to_vec()));
    assert!(!names.contains(&b"__KLD".to_vec()));
    let exec = segs(&image, 0)
        .into_iter()
        .find(|s| s.name == b"__TEXT_EXEC")
        .unwrap();
    assert_eq!(exec.vmaddr, BASE + 0x2800);
}

#[test]
fn split_kext_is_cut_out_with_kernel_imports() {
    let mut bytes = fixture("prelinked_split.macho");
    let info = prelink::kexts(&bytes).unwrap();
    assert_eq!(info.len(), 2);
    let (all, merged) = entries(&mut bytes, &info);
    assert!(!merged);
    assert_eq!(all.len(), 2);
    let image = cut(bytes, &all, merged, &[1]).unwrap();
    assert_eq!(rd_u32(&image, 12), Some(MH_KEXT_BUNDLE));
    let file = object::File::parse(image.as_slice()).unwrap();
    use object::read::{Object, ObjectSection, ObjectSymbol};
    let got = file.section_by_name("__got").unwrap();
    assert_eq!(got.address(), BASE + 0xA000);
    let imports = crate::loader::macho_stubs::resolve_macho_imports(&file, &image);
    assert!(
        imports
            .iter()
            .any(|i| i.addr == BASE + 0x9100 && i.name == b"kernel_add")
    );
    let sym = file
        .symbols()
        .find(|s| s.name() == Ok("_kernel_add"))
        .unwrap();
    assert_eq!(sym.address(), BASE + 0x2000);
}

/// A thousand starts that each walk the same hundred-slot chain: the walk
/// is budgeted by the file, so the rebase writes stay within it.
#[test]
fn thread_start_walks_share_one_budget() {
    let n = 1000;
    let mut bytes = vec![0u8; 0x4000];
    let segs = [Seg {
        cmd: 0,
        name: b"__TEXT".to_vec(),
        vmaddr: 0,
        fileoff: 0,
        filesize: 0x4000,
        code: false,
    }];
    for i in 0..99 {
        bytes[0x200 + 8 * i..0x208 + 8 * i].copy_from_slice(&(1u64 << 51).to_le_bytes());
    }
    bytes[0x100..0x104].copy_from_slice(&1u32.to_le_bytes());
    for i in 1..=n {
        bytes[0x100 + 4 * i..0x104 + 4 * i].copy_from_slice(&0x200u32.to_le_bytes());
    }
    let written = thread_starts(&mut bytes, &segs, 0, 0x100, 4 * (n + 1));
    assert!(
        written <= bytes.len(),
        "{written} writes: the walks were not budgeted"
    );
}

#[test]
fn drop_segments_refuses_load_commands_past_the_file() {
    let mut bytes = vec![0u8; 0x40];
    bytes[0..4].copy_from_slice(&MH_MAGIC_64.to_le_bytes());
    bytes[16..20].copy_from_slice(&1u32.to_le_bytes());
    bytes[20..24].copy_from_slice(&0x1000u32.to_le_bytes());
    bytes[32..36].copy_from_slice(&0x1bu32.to_le_bytes());
    bytes[36..40].copy_from_slice(&8u32.to_le_bytes());
    assert!(drop_segments(&mut bytes, 0, false, |_| false).is_err());
}

/// A `__got` section whose declared size exceeds the file: its slots are
/// skipped, not collected into a vector sized from the header.
#[test]
fn bind_to_kernel_skips_a_section_larger_than_the_file() {
    let mut bytes = vec![0u8; 288];
    bytes[0..4].copy_from_slice(&MH_MAGIC_64.to_le_bytes());
    bytes[12..16].copy_from_slice(&MH_KEXT_BUNDLE.to_le_bytes());
    bytes[16..20].copy_from_slice(&3u32.to_le_bytes());
    bytes[20..24].copy_from_slice(&256u32.to_le_bytes());
    let seg = 32;
    bytes[seg..seg + 4].copy_from_slice(&0x19u32.to_le_bytes());
    bytes[seg + 4..seg + 8].copy_from_slice(&152u32.to_le_bytes());
    bytes[seg + 8..seg + 14].copy_from_slice(b"__DATA");
    bytes[seg + 24..seg + 32].copy_from_slice(&0x1000u64.to_le_bytes());
    bytes[seg + 32..seg + 40].copy_from_slice(&0x100u64.to_le_bytes());
    bytes[seg + 48..seg + 56].copy_from_slice(&0x100u64.to_le_bytes());
    bytes[seg + 64..seg + 68].copy_from_slice(&1u32.to_le_bytes());
    let sect = seg + 72;
    bytes[sect..sect + 5].copy_from_slice(b"__got");
    bytes[sect + 16..sect + 22].copy_from_slice(b"__DATA");
    bytes[sect + 32..sect + 40].copy_from_slice(&0x1000u64.to_le_bytes());
    bytes[sect + 40..sect + 48].copy_from_slice(&0xFFFF_FFFF_FFFF_FFF8u64.to_le_bytes());
    bytes[184..188].copy_from_slice(&0x2u32.to_le_bytes());
    bytes[188..192].copy_from_slice(&24u32.to_le_bytes());
    bytes[208..212].copy_from_slice(&0xbu32.to_le_bytes());
    bytes[212..216].copy_from_slice(&80u32.to_le_bytes());
    let kernel = KernelSymbols {
        by_addr: std::collections::BTreeMap::from([(0x2000u64, [0u8; NLIST_LEN])]),
        stroff: 0,
        strsize: 0,
    };
    bind_to_kernel(&mut bytes, 0, &kernel);
    assert_eq!(bytes.len(), 288);
}
