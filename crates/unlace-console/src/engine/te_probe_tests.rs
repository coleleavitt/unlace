use super::reader_is_te_image;
use std::io::Cursor;
use unlace_analysis::loadimage_te::{TE_PROBE_LEN, synthetic::TeImage};

#[test]
fn the_probe_reads_only_the_bytes_it_needs() {
    let image = TeImage::thumb(&[0x07, 0x20, 0x70, 0x47]).build();
    let mut te = Cursor::new(image.as_slice());
    assert!(reader_is_te_image(&mut te).unwrap());
    assert_eq!(te.position(), TE_PROBE_LEN as u64);

    let mut object = Cursor::new(b"\x7fELFpayload".as_slice());
    assert!(!reader_is_te_image(&mut object).unwrap());
    assert_eq!(object.position(), TE_PROBE_LEN as u64);

    // Two ASCII letters are not a container: this file keeps the
    // unrecognized-input guidance rather than being claimed as TE.
    let mut prose = Cursor::new(b"VZ: a note about the build".as_slice());
    assert!(!reader_is_te_image(&mut prose).unwrap());

    let mut truncated = Cursor::new(b"VZ".as_slice());
    assert!(!reader_is_te_image(&mut truncated).unwrap());
}
