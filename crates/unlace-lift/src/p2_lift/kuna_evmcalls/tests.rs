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
