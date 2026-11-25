use super::*;

#[test]
fn chunks_roundtrip() {
    let chunks = vec![
        Chunk {
            key: keys::TYPE,
            data: vec![0x0C, 0x30, 0x07, 0x01],
        },
        Chunk {
            key: keys::OPS,
            data: vec![],
        },
    ];
    let blob = encode_chunks(&chunks);
    assert_eq!(decode_chunks(&blob).unwrap(), chunks);
}

#[test]
fn summary_reads_type_and_comments() {
    let blob = build(Some(vec![1, 2]), Some("parses the header"));
    let s = summarize(&blob);
    assert_eq!(s.type_info, Some(vec![1, 2]));
    assert_eq!(s.comment.as_deref(), Some("parses the header"));
    assert_eq!(s.keys, vec![keys::TYPE, keys::FCMT]);
    assert!(!s.malformed);
}

#[test]
fn a_truncated_blob_is_reported_not_fatal() {
    let s = summarize(&[keys::FCMT as u8, 9, b'a']);
    assert!(s.malformed);
    assert!(s.keys.is_empty());
}
