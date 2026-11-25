use super::*;

#[test]
fn unimplemented_ids_are_refused_not_ignored() {
    let mut buf = [0u8; 32];
    assert!(unfilter(0x80, 0, &mut buf).is_err());
    assert!(unfilter(0xd0, 0, &mut buf).is_err());
    assert!(unfilter(0x55, 0, &mut buf).is_err());
    assert!(!is_supported(0x80));
}

/// The `0x49` unfilter is the inverse of what UPX's filter wrote: a `call`
/// whose stored big-endian target carries the `cto` tag byte becomes the
/// original little-endian `rel32` again.
#[test]
fn cto32_restores_a_tagged_call() {
    // `e8` at index 3; original rel32 = 0x11223344, so the filtered form is
    // big-endian (rel + ic + 1 + cto<<24) with cto = 0x00.
    let ic = 3u32;
    let rel: u32 = 0x0011_2233;
    let stored = rel.wrapping_add(ic).wrapping_add(1);
    let mut buf = vec![0x90u8; 16];
    buf[3] = 0xe8;
    buf[4..8].copy_from_slice(&stored.to_be_bytes());
    unfilter(0x49, 0x00, &mut buf).unwrap();
    assert_eq!(u32::from_le_bytes([buf[4], buf[5], buf[6], buf[7]]), rel);
}

/// The PE arm unfilters only the code, which starts `addvalue` bytes into
/// the image the packer filtered; the stored target carries that bias.
#[test]
fn cto32_folds_out_the_code_bias() {
    let (ic, rel, addvalue) = (3u32, 0x0011_2233u32, 0x1000u32);
    let mut buf = vec![0x90u8; 16];
    buf[3] = 0xe8;
    buf[4..8].copy_from_slice(
        &rel.wrapping_add(ic + 1)
            .wrapping_add(addvalue)
            .to_be_bytes(),
    );
    unfilter_at(0x49, 0x00, addvalue, &mut buf).unwrap();
    assert_eq!(u32::from_le_bytes([buf[4], buf[5], buf[6], buf[7]]), rel);
}

/// `ct32` (`0x11`..`0x16`): every `e8`/`e9` the walk lands on had its
/// displacement made absolute -- stored big-endian for the `bswap` ids --
/// and comes back relative.
#[test]
fn ct32_restores_every_call_it_walks_onto() {
    let calls = [(2usize, 0x10u32), (9, 0xffff_ff00)];
    for (id, bswap) in [(0x11u8, false), (0x14, true)] {
        let mut buf = vec![0x90u8; 20];
        for (at, rel) in calls {
            buf[at] = 0xe8;
            let abs = rel.wrapping_add(at as u32 + 1).wrapping_add(0x400);
            let w = if bswap {
                abs.to_be_bytes()
            } else {
                abs.to_le_bytes()
            };
            buf[at + 1..at + 5].copy_from_slice(&w);
        }
        unfilter_at(id, 0, 0x400, &mut buf).unwrap();
        for (at, rel) in calls {
            assert_eq!(
                u32::from_le_bytes(buf[at + 1..at + 5].try_into().unwrap()),
                rel,
                "filter {id:#x}"
            );
        }
    }
    assert!(
        unfilter_at(0x52, 0, 0x400, &mut [0u8; 16]).is_err(),
        "a biased ARM trick is refused"
    );
}

#[test]
fn cto32_leaves_untagged_branches_alone() {
    let mut buf = vec![0x90u8; 16];
    buf[3] = 0xe8;
    buf[4..8].copy_from_slice(&[0x77, 0x66, 0x55, 0x44]);
    let before = buf.clone();
    unfilter(0x49, 0x00, &mut buf).unwrap();
    assert_eq!(buf, before);
}
