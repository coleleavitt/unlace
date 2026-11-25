use super::*;

/// Blocks that claim symbols but decode nothing stop at the input length
/// instead of decoding every block: 100,000 32-byte headers, each claiming
/// 50,000 symbols, are refused at once.
#[test]
fn symbols_without_output_are_charged_to_the_input() {
    let mut block = b"bvx2".to_vec();
    block.extend_from_slice(&0u32.to_le_bytes());
    let f0 = 40_000u64 | (10_000u64 << 40) | (7u64 << 60);
    let f1 = 7u64 << 60;
    for field in [f0, f1, 32] {
        block.extend_from_slice(&field.to_le_bytes());
    }
    let mut stream = block.repeat(100_000);
    stream.extend_from_slice(b"bvx$");
    let start = std::time::Instant::now();
    assert_eq!(
        decode(&stream, 0, usize::MAX),
        Err("LZFSE blocks claim far more symbols than they decode")
    );
    assert!(
        start.elapsed() < std::time::Duration::from_secs(1),
        "took {:?}",
        start.elapsed()
    );
}

/// Bits loaded from before the payload's start read as zero but cannot be
/// consumed: a stream that needs them is truncated, not zero-padded.
#[test]
fn bits_from_before_the_payload_cannot_be_pulled() {
    let mut bits = BitIn::new(&[0xa5], 0).unwrap();
    assert_eq!(bits.pull(8), Ok(0xa5));
    assert_eq!(bits.pull(1), Err(TRUNCATED));
    bits.flush();
    assert_eq!(bits.pull(1), Err(TRUNCATED));
}
