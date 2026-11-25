use super::*;

/// Patterned but not trivially-constant input, larger than the 4096-byte
/// buffers so CompressBuffer exercises its overflow path.
fn sample_data(len: usize) -> Vec<u8> {
    let mut v = Vec::with_capacity(len);
    let phrase = b"unlace sleigh spec payload ";
    let mut i = 0usize;
    while v.len() < len {
        v.push(phrase[i % phrase.len()] ^ ((i / 251) as u8));
        i += 1;
    }
    v
}

/// Compress `data` through the chunked Compress API in one input() call,
/// finishing the stream.
fn deflate_all(data: &[u8], level: i32) -> Vec<u8> {
    let mut compressor = Compress::new(level).unwrap();
    compressor.input(data);
    let mut out = Vec::new();
    let mut buf = [0u8; 256];
    loop {
        let avail = compressor.deflate(&mut buf, true).unwrap() as usize;
        out.extend_from_slice(&buf[..256 - avail]);
        if avail != 0 {
            break;
        }
    }
    out
}

/// Decompress through the chunked Decompress API, feeding small input
/// slices and a small output buffer, following the consumption loop of
/// slaformat.cc:235-251.
fn inflate_all(comp: &[u8]) -> Vec<u8> {
    let mut decompressor = Decompress::new();
    let mut out = Vec::new();
    let mut buf = [0u8; 64];
    for chunk in comp.chunks(7) {
        decompressor.input(chunk);
        loop {
            let avail = decompressor.inflate(&mut buf).unwrap() as usize;
            out.extend_from_slice(&buf[..64 - avail]);
            // input chunk exhausted once output space is left over
            if avail != 0 || decompressor.is_finished() {
                break;
            }
        }
        if decompressor.is_finished() {
            break;
        }
    }
    assert!(decompressor.is_finished());
    out
}

/// The level the C++ tree pins (slgh_compile.cc passes -1 =
/// Z_DEFAULT_COMPRESSION = level 6) must produce the zlib header
/// `0x78 0x9C` exactly as C zlib does.
#[test]
fn test_compression_zlib_header_default_level() {
    let comp = deflate_all(b"unlace", -1);
    assert_eq!(&comp[..2], &[0x78, 0x9c]);
    // Level 0 (stored blocks) is unused in-tree; miniz_oxide emits the
    // header 0x08 0x1D there (CINFO=0, a smaller declared window) where
    // C zlib emits 0x78 0x01 — a valid, decodable stream either way, so
    // only the round trip is asserted (deviation noted in LOSS-004 terms).
    let comp0 = deflate_all(b"unlace", 0);
    assert_eq!(inflate_all(&comp0), b"unlace");
}

/// Round trip a payload larger than both 4096-byte buffers through
/// CompressBuffer (write/flush) and Decompress (chunked inflate loop).
#[test]
fn test_compression_round_trip_chunked() {
    let data = sample_data(20000);
    let mut compressed: Vec<u8> = Vec::new();
    let mut filter = CompressBuffer::new(&mut compressed, -1).unwrap();
    // write in awkward chunk sizes to exercise the put-area refill logic
    for chunk in data.chunks(1000) {
        filter.write_all(chunk).unwrap();
    }
    filter.flush().unwrap();
    drop(filter);
    assert_eq!(&compressed[..2], &[0x78, 0x9c]);
    assert!(compressed.len() < data.len());
    assert_eq!(inflate_all(&compressed), data);
}

/// CompressBuffer's 4096-byte chunking must not change the produced
/// stream relative to a single-shot Compress of the same bytes
/// (Z_NO_FLUSH boundaries are not observable in deflate output).
#[test]
fn test_compression_buffer_matches_direct_compress() {
    let data = sample_data(10000);
    let direct = deflate_all(&data, -1);
    let mut via_buffer: Vec<u8> = Vec::new();
    let mut filter = CompressBuffer::new(&mut via_buffer, -1).unwrap();
    filter.write_all(&data).unwrap();
    filter.flush().unwrap();
    drop(filter);
    assert_eq!(via_buffer, direct);
}

/// Decode a stream produced by C zlib itself (python3 `zlib.compress` at
/// the default level — the same library the C++ oracle links), proving
/// wire-format interoperability per LOSS-004.
#[test]
fn test_compression_decompress_c_zlib_oracle_stream() {
    let expect = b"unlace .sla payload: unlace .sla payload: unlace .sla payload!\n";
    let comp: [u8; 34] = [
        0x78, 0x9c, 0x2b, 0xcd, 0xcb, 0x49, 0x4c, 0x4e, 0x55, 0xd0, 0x2b, 0xce, 0x49, 0x54, 0x28,
        0x48, 0xac, 0xcc, 0xc9, 0x4f, 0x4c, 0xb1, 0x52, 0x28, 0x25, 0x52, 0x50, 0x91, 0x0b, 0x00,
        0xd1, 0xc5, 0x16, 0x10,
    ];
    assert_eq!(inflate_all(&comp), expect);
}

/// C++ deflateInit returns Z_STREAM_ERROR for levels outside -1..=9 and
/// the constructor throws LowlevelError.
#[test]
fn test_compression_invalid_level_rejected() {
    for level in [-2, 10, 100] {
        match Compress::new(level) {
            Err(UnlaceError::Lowlevel { explain }) => {
                assert_eq!(explain, "Could not initialize deflate stream state");
            }
            _ => panic!("level {} should be rejected", level),
        }
    }
    // valid boundary levels construct fine
    assert!(Compress::new(-1).is_ok());
    assert!(Compress::new(0).is_ok());
    assert!(Compress::new(9).is_ok());
}

/// Corrupt input makes inflate fail the way C++ converts Z_DATA_ERROR.
#[test]
fn test_compression_corrupt_stream_errors() {
    let mut decompressor = Decompress::new();
    // invalid zlib header bytes
    decompressor.input(&[0xde, 0xad, 0xbe, 0xef, 0x00, 0x01, 0x02, 0x03]);
    let mut buf = [0u8; 64];
    match decompressor.inflate(&mut buf) {
        Err(UnlaceError::Lowlevel { explain }) => {
            assert_eq!(explain, "Error decompressing stream");
        }
        other => panic!("expected decompression error, got {:?}", other.map(|_| ())),
    }
    assert!(!decompressor.is_finished());
}
