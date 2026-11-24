use super::*;

/// `PUSH1 ret; PUSH1 7; PUSH1 fn; JUMP; ret: JUMPDEST; STOP; fn: JUMPDEST; SWAP1; JUMP`:
/// one call with one argument whose callee returns it, and one return.
#[test]
fn call_and_return() {
    let code = [
        0x60, 0x07, // PUSH1 0x07 (ret)
        0x60, 0x2a, // PUSH1 42
        0x60, 0x09, // PUSH1 0x09 (fn)
        0x56, // JUMP
        0x5b, // 0x07: JUMPDEST
        0x00, // STOP
        0x5b, // 0x09: JUMPDEST
        0x90, // SWAP1
        0x56, // JUMP (return)
    ];
    let map = classify(&code);
    let call = map.calls.get(&6).copied().expect("call at 6");
    assert_eq!(call.target, 9);
    assert_eq!(call.ret, 7);
    assert_eq!(call.args, 1);
    assert_eq!(call.pop, Some(1));
    assert!(map.call_at(6).is_some());
    assert!(map.returns.contains(&0x0b));
}

/// A jump to a pushed constant with no return label on the stack is plain flow.
#[test]
fn plain_jump_is_not_a_call() {
    let code = [0x60, 0x04, 0x56, 0x00, 0x5b, 0x00];
    let map = classify(&code);
    assert!(map.calls.is_empty());
    assert!(map.returns.is_empty());
}

/// A getter that returns through `DUP2; JUMP` keeps its label in its slot and
/// leaves one result above it: its call removes -1 words.
#[test]
fn getter_keeps_its_label() {
    let code = [
        0x60, 0x06, // PUSH1 0x06 (ret)
        0x60, 0x08, // PUSH1 0x08 (fn)
        0x56, // JUMP
        0x00, // STOP (padding)
        0x5b, // 0x06: JUMPDEST
        0x00, // STOP
        0x5b, // 0x08: JUMPDEST
        0x60, 0x2a, // PUSH1 42
        0x81, // DUP2
        0x56, // JUMP (return through the copy)
    ];
    let map = classify(&code);
    let call = map.calls.get(&4).copied().expect("call at 4");
    assert_eq!((call.target, call.ret, call.args), (8, 6, 0));
    assert_eq!(call.pop, Some(-1));
    assert!(map.keeps_label.contains(&8));
    assert!(map.returns.contains(&0x0c));
}

/// Two jumps into one `RETURN` tail make it a noreturn function reading one word.
#[test]
fn shared_return_tail_is_called() {
    let code = [
        0x60, 0x01, // PUSH1 1
        0x60, 0x0a, // PUSH1 0x0a
        0x57, // JUMPI
        0x60, 0x02, // PUSH1 2
        0x60, 0x0e, // PUSH1 0x0e (tail)
        0x56, // JUMP
        0x5b, // 0x0a: JUMPDEST
        0x60, 0x0e, // PUSH1 0x0e (tail)
        0x56, // JUMP
        0x5b, // 0x0e: JUMPDEST
        0x5f, // PUSH0
        0x52, // MSTORE
        0x60, 0x20, // PUSH1 0x20
        0x5f, // PUSH0
        0xf3, // RETURN
    ];
    let map = classify(&code);
    assert_eq!(map.tails.get(&9), Some(&0x0e));
    assert_eq!(map.tails.get(&0x0d), Some(&0x0e));
    assert_eq!(map.tail_args.get(&0x0e), Some(&1));
}

/// A `JUMPI` into the revert block the instruction before it also falls into: the
/// two arrive at different stack depths, so the conditional edge calls the tail.
#[test]
fn conditional_jump_into_fallthrough_tail_is_called() {
    let code = [
        0x36, // CALLDATASIZE
        0x60, 0x0b, // PUSH1 0x0b (tail)
        0x57, // JUMPI
        0x60, 0x07, // PUSH1 7
        0x60, 0x2a, // PUSH1 42
        0x60, 0x0b, // PUSH1 0x0b (tail)
        0x57, // JUMPI; falls into the tail with 7 still on the stack
        0x5b, // 0x0b: JUMPDEST
        0x5f, // PUSH0
        0x80, // DUP1
        0xfd, // REVERT
    ];
    let map = classify(&code);
    assert_eq!(map.tails.get(&3), Some(&0x0b));
    assert_eq!(map.tails.get(&0x0a), Some(&0x0b));
    assert_eq!(map.tail_args.get(&0x0b), Some(&0));
}
