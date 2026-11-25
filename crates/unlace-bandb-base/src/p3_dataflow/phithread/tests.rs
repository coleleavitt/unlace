use super::*;
use crate::optionset::UnlaceOption;

#[test]
fn option_parses_and_ships_off() {
    let off = PhiThread {
        on: false,
        ranges: false,
    };
    assert_eq!(PhiThread::shipped(), off);
    assert_eq!(
        PhiThread::parse("on").unwrap().0,
        PhiThread {
            on: true,
            ranges: false
        }
    );
    assert_eq!(
        PhiThread::parse("ranges").unwrap().0,
        PhiThread {
            on: true,
            ranges: true
        }
    );
    assert!(PhiThread::parse("x").is_err());
}

#[test]
fn sign_and_mask_helpers() {
    assert_eq!(mask(1), 0xff);
    assert_eq!(mask(8), uintb::MAX);
    assert_eq!(signed(0xff, 1), -1);
    assert_eq!(signed(0x7f, 1), 127);
    assert_eq!(signed(0xffff_ffff, 4), -1);
}
