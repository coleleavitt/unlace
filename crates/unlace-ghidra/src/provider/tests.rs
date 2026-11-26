use super::*;
use std::io::Cursor;

use unlace_base::marshal::{Encoder, PackedEncode};

use crate::translate::{TspecModel, build_registry};

const TSPEC: &[u8] = b"<sleigh bigendian=\"false\" uniqbase=\"0x10000000\">\
<spaces defaultspace=\"ram\">\
<space_other name=\"OTHER\" index=\"1\" size=\"8\" bigendian=\"false\" delay=\"0\" physical=\"true\"/>\
<space_unique name=\"unique\" index=\"2\" size=\"4\" bigendian=\"false\" delay=\"0\" physical=\"true\"/>\
<space name=\"ram\" index=\"3\" size=\"8\" bigendian=\"false\" delay=\"1\" physical=\"true\"/>\
</spaces></sleigh>";

fn test_translate() -> TspecModel {
    TspecModel::decode(TSPEC, &build_registry()).expect("test tspec parses")
}

fn burst(v: &mut Vec<u8>, code: u8) {
    v.extend_from_slice(&[0, 0, 1, code]);
}

/// Nibble-double each byte as `'A'+hi, 'A'+lo` — DecompileProcess.java's
/// getBytes byte-stream encoding (:867-885).
fn nibble_expand(bytes: &[u8]) -> Vec<u8> {
    let mut v = Vec::with_capacity(bytes.len() * 2);
    for &b in bytes {
        v.push(b'A' + (b >> 4));
        v.push(b'A' + (b & 0x0f));
    }
    v
}

/// A getBytes query response carrying `data` (burst 8, byte-stream
/// 12/13, burst 9).
fn get_bytes_response(data: &[u8]) -> Vec<u8> {
    let mut r = Vec::new();
    burst(&mut r, 8);
    burst(&mut r, 12);
    r.extend_from_slice(&nibble_expand(data));
    burst(&mut r, 13);
    burst(&mut r, 9);
    r
}

/// The unmapped-address case: an empty query response (burst 8 then a
/// close burst) that getBytes turns into DataUnavailError.
fn empty_response() -> Vec<u8> {
    let mut r = Vec::new();
    burst(&mut r, 8);
    burst(&mut r, 9);
    r
}

fn shared(reader: Vec<u8>) -> SharedClient<Cursor<Vec<u8>>, Vec<u8>> {
    Rc::new(RefCell::new(GhidraClient::new(
        Cursor::new(reader),
        Vec::new(),
    )))
}

#[test]
fn load_fill_pulls_bytes_from_host() {
    let tr = test_translate();
    let ram = Rc::clone(tr.manager.get_space_by_name("ram").expect("ram"));
    let want = [0xde, 0xad, 0xbe, 0xef];

    let client = shared(get_bytes_response(&want));
    // Exercise it through the trait object, proving the hook plugs in.
    let mut loader: Box<dyn LoadImage> = Box::new(GhidraLoadImage::new(Rc::clone(&client)));

    assert_eq!(loader.get_arch_type(), b"ghidra");
    assert_eq!(loader.get_file_name(), "ghidra_progam");

    let mut buf = [0u8; 4];
    loader
        .load_fill(&mut buf, &Address::new(ram, 0x401000))
        .expect("load_fill");
    assert_eq!(buf, want);

    // The query it issued is byte-exact getBytes framing. Drop the loader
    // first so `client` is the sole owner of the shared handle.
    drop(loader);
    let (_r, w) = Rc::try_unwrap(client).unwrap().into_inner().into_inner();

    // Encode the expected <command_getbytes> document once, then wrap it
    // in the query/string bursts.
    let mut cmd = Vec::new();
    {
        let ram2 = Rc::clone(test_translate().manager.get_space_by_name("ram").unwrap());
        let mut e = PackedEncode::new(&mut cmd);
        e.open_element(&crate::ids::ELEM_COMMAND_GETBYTES);
        Address::new(ram2, 0x401000)
            .encode_sized(&mut e, 4)
            .unwrap();
        e.close_element(&crate::ids::ELEM_COMMAND_GETBYTES);
    }
    let mut expected = Vec::new();
    burst(&mut expected, 4); // query open
    burst(&mut expected, 14); // string open
    expected.extend_from_slice(&cmd);
    burst(&mut expected, 15); // string close
    burst(&mut expected, 5); // query close
    assert_eq!(w, expected, "getBytes request framing");
}

#[test]
fn load_fill_unmapped_is_data_unavail() {
    let tr = test_translate();
    let ram = Rc::clone(tr.manager.get_space_by_name("ram").expect("ram"));
    let client = shared(empty_response());
    let mut loader = GhidraLoadImage::new(client);

    let mut buf = [0u8; 4];
    let err = loader
        .load_fill(&mut buf, &Address::new(ram, 0x0))
        .expect_err("unmapped address must fail");
    assert!(
        matches!(err, UnlaceError::DataUnavail { .. }),
        "expected DataUnavail, got {err:?}"
    );
}
