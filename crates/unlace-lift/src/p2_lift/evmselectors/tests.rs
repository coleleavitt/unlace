use super::*;

fn hex(bytes: &[u8]) -> String {
    bytes.iter().map(|b| format!("{b:02x}")).collect()
}

#[test]
fn keccak256_empty_input() {
    assert_eq!(
        hex(&evm_keccak256(b"")),
        "c5d2460186f7233c927e7db2dcc703c0e500b653ca82273b7bfad8045d85a470"
    );
}

#[test]
fn selectors_match_solidity() {
    assert_eq!(
        solidity_selector("transfer(address,uint256)"),
        [0xa9, 0x05, 0x9c, 0xbb]
    );
    assert_eq!(
        solidity_selector("balanceOf(address)"),
        [0x70, 0xa0, 0x82, 0x31]
    );
}

#[test]
fn dispatcher_entry_with_dup() {
    // PUSH4 transfer; DUP2; EQ; PUSH2 0x0040; JUMPI
    let code = [
        0x63, 0xa9, 0x05, 0x9c, 0xbb, 0x81, 0x14, 0x61, 0x00, 0x40, 0x57,
    ];
    let entries = dispatch_entries(&code);
    assert_eq!(
        entries,
        vec![DispatchEntry {
            selector: [0xa9, 0x05, 0x9c, 0xbb],
            target: 0x40,
            offset: 0
        }]
    );
}

#[test]
fn eq_without_constant_jumpi_is_not_an_entry() {
    // PUSH4 sel; EQ; ISZERO; JUMPI (no PUSH target before the JUMPI)
    let code = [0x63, 0xa9, 0x05, 0x9c, 0xbb, 0x14, 0x15, 0x57];
    assert!(dispatch_entries(&code).is_empty());
}

#[test]
fn push_data_is_not_decoded() {
    // PUSH2 0x6314 hides a PUSH4 and EQ byte pair inside its immediate.
    let code = [0x61, 0x63, 0x14, 0x61, 0x00, 0x40, 0x57];
    assert!(dispatch_entries(&code).is_empty());
}
