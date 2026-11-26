use super::*;

const BASE: u64 = 0x1_4000_0000;
const RDATA: u64 = BASE + 0x3000;

fn rk() -> RefKind {
    RefKind::new(true, BASE, End::Little)
}

fn put(buf: &mut [u8], at: u64, bytes: &[u8]) {
    let o = (at - RDATA) as usize;
    buf[o..o + bytes.len()].copy_from_slice(bytes);
}

fn words(ws: &[u32]) -> Vec<u8> {
    ws.iter().flat_map(|w| w.to_le_bytes()).collect()
}

fn rdata() -> Vec<u8> {
    let mut b = vec![0u8; 0x400];
    put(&mut b, RDATA + 0x10, b".?AVruntime_error@std@@\0");
    b
}

#[test]
fn fh4_unsigned_lengths() {
    let mut r = Fh4Reader::new(&[0x08, 0x05, 0x01, 0x0f, 0x78, 0x56, 0x34, 0x12]);
    assert_eq!(r.unsigned(), Some(4));
    assert_eq!(r.unsigned(), Some(0x41));
    assert_eq!(r.unsigned(), Some(0x1234_5678));
}

#[test]
fn fh3_try_with_two_catches_and_a_cleanup() {
    let mut b = rdata();
    let info = RDATA + 0x100;
    put(
        &mut b,
        info,
        &words(&[0x1993_0522, 2, 0x3140, 1, 0x3160, 0, 0, 0, 0, 1]),
    );
    put(&mut b, RDATA + 0x140, &words(&[u32::MAX, 0x1500, 0, 0]));
    put(&mut b, RDATA + 0x160, &words(&[0, 0, 1, 2, 0x3180]));
    put(
        &mut b,
        RDATA + 0x180,
        &words(&[8, 0x3000, 0x28, 0x1200, 0x38]),
    );
    put(&mut b, RDATA + 0x194, &words(&[0x40, 0, 0, 0x1240, 0x38]));
    let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
    let d = decode_fh3(&img, &rk(), BASE, info).expect("decodes");
    assert_eq!(d.cleanups, vec![(0, BASE + 0x1500)]);
    assert_eq!(d.tries.len(), 1);
    let t = &d.tries[0];
    assert_eq!((t.low, t.high), (0, 0));
    assert_eq!(t.catches[0].header(), "catch (std::runtime_error &)");
    assert_eq!(t.catches[0].handler, BASE + 0x1200);
    assert_eq!(t.catches[1].header(), "catch (...)");
}

#[test]
fn fh4_try_with_one_catch() {
    let mut b = rdata();
    let info = RDATA + 0x100;
    let mut fi = vec![0x10u8];
    fi.extend_from_slice(&0x3120u32.to_le_bytes());
    fi.extend_from_slice(&0x3200u32.to_le_bytes());
    put(&mut b, info, &fi);
    let mut tm = vec![1u8 << 1, 0, 2 << 1, 2 << 1];
    tm.extend_from_slice(&0x3140u32.to_le_bytes());
    put(&mut b, RDATA + 0x120, &tm);
    let mut hs = vec![1u8 << 1, 0x01 | 0x02, 8 << 1];
    hs.extend_from_slice(&0x3000u32.to_le_bytes());
    hs.extend_from_slice(&0x1200u32.to_le_bytes());
    put(&mut b, RDATA + 0x140, &hs);
    let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
    let d = decode_fh4(&img, &rk(), BASE, info).expect("decodes");
    assert!(d.cleanups.is_empty());
    assert_eq!(d.tries.len(), 1);
    assert_eq!((d.tries[0].low, d.tries[0].high), (0, 2));
    assert_eq!(
        d.tries[0].catches[0].header(),
        "catch (std::runtime_error &)"
    );
    assert_eq!(d.tries[0].catches[0].handler, BASE + 0x1200);
}

#[test]
fn unwind_info_handler() {
    let mut b = rdata();
    let unwind = RDATA + 0x200;
    put(
        &mut b,
        unwind,
        &[0x09 | (0x3 << 3), 0x04, 0x01, 0x00, 0x04, 0x52, 0, 0],
    );
    put(&mut b, unwind + 8, &words(&[0x2000, 0x3100]));
    let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
    assert_eq!(
        language_handler(&img, BASE, unwind),
        Some((BASE + 0x2000, unwind + 12))
    );
    put(&mut b, unwind, &[0x01 | (0x4 << 3)]);
    let img = ImageBytes::from_spans(vec![(RDATA, b.as_slice())]);
    assert_eq!(language_handler(&img, BASE, unwind), None);
}

#[test]
fn state_regions_keep_guarded_ranges() {
    let states = [(0x100, -1), (0x118, 0), (0x11e, -1), (0x127, 1)];
    assert_eq!(
        state_regions(&states, 0x100, 0x127),
        vec![(0x118, 0x11e, 0)]
    );
}

#[test]
fn funclet_return_to_parent() {
    let start = 0x1_4000_10c7u64;
    let code = [
        0x48, 0x8D, 0x05, 0xD9, 0xFF, 0xFF, 0xFF, 0x48, 0x83, 0xC4, 0x20, 0x5D, 0xC3,
    ];
    let img = ImageBytes::from_spans(vec![(start, code.as_slice())]);
    assert_eq!(
        funclet_returns(&img, start, start + 13, 0x1_4000_109f, 0x1_4000_10c7),
        vec![(start + 12, start + 7 - 0x27)]
    );
    assert!(may_return(&img, start, start + 13));
}

#[test]
fn funclet_names() {
    let mut names = FxHashMap::default();
    names.insert(0x1000u64, "catcher".to_string());
    assert_eq!(funclet_name(&names, 0x1000, "catch", 1), "catcher$catch$1");
    assert_eq!(funclet_name(&names, 0x2000, "dtor", 0), "sub_2000$dtor$0");
}

#[test]
fn handler_names() {
    assert_eq!(handler_kind("__CxxFrameHandler3"), Some(Handler::Fh3));
    assert_eq!(handler_kind("__GSHandlerCheck_EH4"), Some(Handler::Fh4));
    assert_eq!(handler_kind("__C_specific_handler"), None);
}
