use super::*;

#[test]
fn the_two_pushes_before_a_call_to_initterm_are_its_bounds() {
    // 0x1000: push 0x2010 ; push 0x2000 ; call 0x1100 (rel32 = 0x1100 - 0x100f)
    let mut code = vec![0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
    code.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
    let targets: HashSet<u64> = [0x1100].into_iter().collect();
    assert_eq!(
        bounds_pushed_before_calls(0x1000, &code, &targets, &|_| false),
        vec![(0x2000, 0x2010, true)]
    );
}

#[test]
fn a_call_through_the_slot_is_read_too() {
    // push 0x2010 ; push 0x2000 ; call [0x3000]
    let code = [
        0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xff, 0x15, 0x00, 0x30, 0, 0,
    ];
    let targets: HashSet<u64> = [0x3000].into_iter().collect();
    assert_eq!(
        bounds_pushed_before_calls(0x1000, &code, &targets, &|_| false),
        vec![(0x2000, 0x2010, true)]
    );
}

#[test]
fn reversed_or_ragged_bounds_and_other_callees_are_ignored() {
    let mut code = vec![0x68, 0x00, 0x20, 0, 0, 0x68, 0x10, 0x20, 0, 0, 0xe8];
    code.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
    let targets: HashSet<u64> = [0x1100].into_iter().collect();
    let no_code = |_: u64| false;
    assert!(bounds_pushed_before_calls(0x1000, &code, &targets, &no_code).is_empty());
    let mut ragged = vec![0x68, 0x12, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
    ragged.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
    assert!(bounds_pushed_before_calls(0x1000, &ragged, &targets, &no_code).is_empty());
    let other: HashSet<u64> = [0x1200].into_iter().collect();
    let mut good = vec![0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
    good.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
    assert!(bounds_pushed_before_calls(0x1000, &good, &other, &no_code).is_empty());
}

#[test]
fn a_direct_call_to_local_code_is_a_static_crt_candidate() {
    let mut code = vec![0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
    code.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
    let none: HashSet<u64> = HashSet::new();
    let code_at = |a: u64| (0x1000..0x1200).contains(&a);
    assert_eq!(
        bounds_pushed_before_calls(0x1000, &code, &none, &code_at),
        vec![(0x2000, 0x2010, false)]
    );
}

#[test]
fn a_static_crt_table_starts_with_null_and_holds_only_code() {
    let code_at = |a: u64| (0x1000..0x1200).contains(&a);
    assert!(crt_shaped(&[0, 0x1040, 0, 0x1050], false, &code_at));
    assert!(!crt_shaped(&[0x1040, 0x1050], false, &code_at));
    assert!(!crt_shaped(&[0, 0x1040, 0x3000], false, &code_at));
    assert!(!crt_shaped(&[0, 0], false, &code_at));
    assert!(!crt_shaped(&[0, 0x1040], true, &code_at));
}
