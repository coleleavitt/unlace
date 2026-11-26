use super::*;
use unlace_base::marshal::{ATTRIB_CONTENT, ELEM_DATA, Encoder};

fn compressed(payload: &[u8]) -> Vec<u8> {
    let mut bytes = Vec::new();
    write_sla_header(&mut bytes).unwrap();
    let mut compressor = CompressBuffer::new(&mut bytes, -1).unwrap();
    compressor.write_all(payload).unwrap();
    compressor.flush().unwrap();
    bytes
}

#[test]
fn owned_sla_buffer_decodes_across_inflate_and_packed_boundaries() {
    let manager = AddrSpaceManager::new();
    for length in [1018, 1019, 1020, 4090, 4091, 4092, 8192, 20000] {
        let payload: Vec<_> = (0..length).map(|i| (i % 255 + 1) as u8).collect();
        let mut packed = Vec::new();
        let mut enc = PackedEncode::new(&mut packed);
        enc.open_element(&ELEM_DATA);
        enc.write_string(&ATTRIB_CONTENT, &payload);
        enc.close_element(&ELEM_DATA);
        let bytes = compressed(&packed);
        let mut dec = FormatDecode::new(&manager);
        dec.ingest_stream(&bytes).unwrap();
        let el = dec.open_element_id(&ELEM_DATA).unwrap();
        assert_eq!(dec.read_string_id(&ATTRIB_CONTENT).unwrap(), payload);
        dec.close_element(el).unwrap();
        assert_eq!(dec.peek_element().unwrap(), 0);
    }
}

#[test]
fn owned_sla_buffer_keeps_header_truncation_and_checksum_checks() {
    let manager = AddrSpaceManager::new();
    let bytes = compressed(&[0x41, 0x81]);
    for end in 0..bytes.len() {
        let mut dec = FormatDecode::new(&manager);
        assert!(
            dec.ingest_stream(&bytes[..end]).is_err(),
            "truncation at {end}"
        );
    }
    let mut corrupt = bytes.clone();
    *corrupt.last_mut().unwrap() ^= 1;
    assert!(FormatDecode::new(&manager).ingest_stream(&corrupt).is_err());
    let mut wrong_header = bytes;
    wrong_header[3] = 0;
    assert!(
        FormatDecode::new(&manager)
            .ingest_stream(&wrong_header)
            .is_err()
    );
    assert!(
        FormatDecode::new(&manager)
            .ingest_stream(&compressed(&[]))
            .is_err()
    );
}

#[test]
fn nul_termination_does_not_skip_the_compressed_checksum() {
    let manager = AddrSpaceManager::new();
    let mut bytes = compressed(&[0x41, 0x81, 0, 0x41, 0x81]);
    let mut dec = FormatDecode::new(&manager);
    dec.ingest_stream(&bytes).unwrap();
    let el = dec.open_element().unwrap();
    dec.close_element(el).unwrap();
    assert_eq!(dec.peek_element().unwrap(), 0);
    *bytes.last_mut().unwrap() ^= 1;
    assert!(FormatDecode::new(&manager).ingest_stream(&bytes).is_err());
}
