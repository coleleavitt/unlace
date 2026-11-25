use super::*;

/// The property bytes UPX writes for its default `lc=3 lp=0 pb=2` are
/// `0x1a 0x03`; RetDec reads the same file the same way.
#[test]
fn upx_property_bytes_decode_to_the_default_triple() {
    let (p, body) = Properties::split(&[0x1a, 0x03, 0x00, 0, 0, 0, 0]).unwrap();
    assert_eq!(
        p,
        Properties {
            lc: 3,
            lp: 0,
            pb: 2
        }
    );
    assert_eq!(body.len(), 5);
}

#[test]
fn out_of_range_properties_are_refused_not_allocated() {
    let err = Properties::split(&[0x00, 0xff, 0x00, 0, 0, 0, 0]).unwrap_err();
    assert!(matches!(
        err,
        LzmaError::BadProperties {
            lc: 15,
            lp: 15,
            pb: 0
        }
    ));
}

#[test]
fn a_short_block_is_refused() {
    assert_eq!(decompress(&[0x1a], 4).unwrap_err(), LzmaError::TooShort);
    assert_eq!(
        decompress(&[0x1a, 0x03, 0, 0], 4).unwrap_err(),
        LzmaError::TooShort
    );
}

#[test]
fn a_nonzero_range_init_byte_is_refused() {
    let err = decompress(&[0x1a, 0x03, 0x7f, 0, 0, 0, 0], 4).unwrap_err();
    assert_eq!(err, LzmaError::BadRangeInit(0x7f));
}

/// A stream of zero bytes decodes literals from an all-`PROB_INIT` model and
/// runs out of input long before a real block would end: the decoder must
/// say so rather than return what it managed.
#[test]
fn a_truncated_stream_is_an_error_not_a_short_read() {
    let mut src = vec![0x1a, 0x03];
    src.extend_from_slice(&[0u8; 16]);
    let err = decompress(&src, 1 << 20).unwrap_err();
    assert!(
        matches!(err, LzmaError::InputOverrun | LzmaError::Truncated { .. }),
        "unexpected {err:?}"
    );
}

/// Round-trip against a stream a different implementation produced: the
/// first block of the vendored UPX 4.2.4 `--lzma` witness, which decodes to
/// the original file's Ehdr + Phdrs.
#[test]
fn the_vendored_witness_first_block_decodes() {
    let p = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures/upx_packed_lzma_x86_64");
    let packed = std::fs::read(&p).unwrap_or_else(|e| panic!("read {}: {e}", p.display()));
    // The first `b_info` sits right after `l_info` + `p_info`.
    let at = FIRST_BLOCK;
    let u_len = u32::from_le_bytes(packed[at..at + 4].try_into().unwrap()) as usize;
    let c_len = u32::from_le_bytes(packed[at + 4..at + 8].try_into().unwrap()) as usize;
    assert_eq!(packed[at + 8], 14, "the fixture's first block is LZMA");
    let out = decompress(&packed[at + 12..at + 12 + c_len], u_len).expect("first block");
    assert_eq!(&out[..4], b"\x7fELF");
    assert_eq!(out.len(), u_len);
}

/// The first `b_info` in the fixture, right after `l_info` + `p_info`.
const FIRST_BLOCK: usize = 0x100;

/// The same block again with its `u_len` withheld -- the situation
/// `--raw-lzma` is for. UPX writes no end marker, so the decode has nothing
/// to stop on but the input, and the byte count is what it recovers rather
/// than what it was told.
#[test]
fn a_length_less_decode_ends_on_the_input_and_finds_the_same_bytes() {
    let (block, u_len) = witness_block();
    let got = decompress_exhaustive(&block, 1 << 20).expect("first block");
    assert_eq!(got.bytes.len(), u_len);
    assert_eq!(&got.bytes[..4], b"\x7fELF");
    assert!(!got.end_marker, "UPX writes no end-of-stream marker");
    assert_eq!(got.consumed, block.len(), "the whole block is read");
    assert_eq!(got.bytes, decompress(&block, u_len).unwrap());
}

/// The cap is the only bound a length-less decode has, so hitting it is
/// reported rather than returned as a short answer.
#[test]
fn a_length_less_decode_that_hits_the_cap_says_so() {
    let (block, u_len) = witness_block();
    let err = decompress_exhaustive(&block, u_len / 2).unwrap_err();
    assert_eq!(err, LzmaError::OutputCap { max: u_len / 2 });
}

/// A declared length still judges the same stream the old way in both
/// directions -- this is the path every `unlace unpack` of a real UPX image
/// takes, and the cap that now serves the length-less mode must not have
/// loosened it.
#[test]
fn a_declared_length_still_refuses_a_stream_that_misses_it() {
    let (block, u_len) = witness_block();
    assert_eq!(
        decompress(&block, u_len + 1).unwrap_err(),
        LzmaError::InputOverrun
    );
    assert_eq!(
        decompress(&block, u_len - 1).unwrap_err(),
        LzmaError::OutputOverrun
    );
}

/// The vendored witness's first block, and the `u_len` its `b_info` declares.
fn witness_block() -> (Vec<u8>, usize) {
    let p = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("tests/fixtures/upx_packed_lzma_x86_64");
    let packed = std::fs::read(&p).unwrap_or_else(|e| panic!("read {}: {e}", p.display()));
    let at = FIRST_BLOCK;
    let u_len = u32::from_le_bytes(packed[at..at + 4].try_into().unwrap()) as usize;
    let c_len = u32::from_le_bytes(packed[at + 4..at + 8].try_into().unwrap()) as usize;
    (packed[at + 12..at + 12 + c_len].to_vec(), u_len)
}
