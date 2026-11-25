use super::*;
use crate::listing::{DiscoveredFunction, FlowType};

fn insn(addr: u64, len: u32, kind: FlowKind, flows: &[u64]) -> Insn {
    let falls = matches!(
        kind,
        FlowKind::Fallthrough | FlowKind::ConditionalBranch | FlowKind::Call
    );
    Insn {
        addr,
        len,
        fall_through: falls.then_some(addr + u64::from(len)),
        flow: FlowType {
            kind,
            is_call: kind == FlowKind::Call,
            is_jump: matches!(
                kind,
                FlowKind::UnconditionalBranch | FlowKind::ConditionalBranch
            ),
            is_terminal: kind == FlowKind::Return,
            is_conditional: kind == FlowKind::ConditionalBranch,
            has_fallthrough: falls,
            ..Default::default()
        },
        flows: flows.to_vec(),
        mnemonic: String::new().into(),
        operands: String::new(),
        pcode: None,
    }
}

fn jmp(addr: u64, to: u64) -> Insn {
    insn(addr, 5, FlowKind::UnconditionalBranch, &[to])
}

fn op(addr: u64, len: u32) -> Insn {
    insn(addr, len, FlowKind::Fallthrough, &[])
}

fn ret(addr: u64) -> Insn {
    insn(addr, 1, FlowKind::Return, &[])
}

fn listing(insns: Vec<Insn>, entries: &[u64]) -> Listing {
    let funcs = entries
        .iter()
        .map(|&entry| {
            let f = DiscoveredFunction {
                entry,
                name: None,
                from_symbol: false,
                has_no_return: false,
                call_fixup: None,
            };
            (entry, f)
        })
        .collect();
    Listing::from_partition(
        insns.into_iter().map(|i| (i.addr, i)).collect(),
        funcs,
        vec![(0, u64::MAX)],
    )
}

fn accepted(l: &Listing) -> Vec<u64> {
    promote(l, false)
}

/// The issue's table: three adjacent thunks, then three bodies.
#[test]
fn a_thunk_table_promotes_every_target() {
    let l = listing(
        vec![
            jmp(0x1000, 0x1040),
            jmp(0x1005, 0x1010),
            jmp(0x100a, 0x1030),
            op(0x1010, 3),
            ret(0x1013),
            op(0x1030, 4),
            ret(0x1034),
            op(0x1040, 3),
            ret(0x1043),
        ],
        &[0x1000, 0x1005, 0x100a],
    );
    assert_eq!(accepted(&l), vec![0x1010, 0x1030, 0x1040]);
}

/// A stub that no function entry opens, jumping into a block only it reaches.
/// The default walk misses it; `option aggressivethunks` promotes the block.
#[test]
fn an_aggressive_stub_promotes_its_private_target() {
    let l = listing(
        vec![ret(0x1000), jmp(0x1001, 0x1010), op(0x1010, 3), ret(0x1013)],
        &[0x1000],
    );
    assert!(promote(&l, false).is_empty());
    assert_eq!(promote(&l, true), vec![0x1010]);
}

/// `f: jmp cond; body: ...; cond: ...; jne body` is one function.
#[test]
fn a_jump_to_a_rotated_loop_condition_is_not_a_thunk() {
    let fallen_into = listing(
        vec![
            jmp(0x1000, 0x1008),
            op(0x1005, 3),
            op(0x1008, 2),
            insn(0x100a, 2, FlowKind::ConditionalBranch, &[0x1005]),
            ret(0x100c),
        ],
        &[0x1000],
    );
    assert!(accepted(&fallen_into).is_empty());

    let jumped_to = listing(
        vec![
            jmp(0x1000, 0x1010),
            op(0x1005, 3),
            jmp(0x1008, 0x1010),
            op(0x1010, 2),
            insn(0x1012, 2, FlowKind::ConditionalBranch, &[0x1005]),
            ret(0x1014),
        ],
        &[0x1000],
    );
    assert!(
        accepted(&jumped_to).is_empty(),
        "the body after the jump is reached from the target"
    );
}

#[test]
fn a_jump_into_a_straight_line_run_is_not_a_thunk() {
    let l = listing(
        vec![
            jmp(0x1000, 0x1013),
            op(0x1010, 3),
            op(0x1013, 2),
            ret(0x1015),
        ],
        &[0x1000, 0x1010],
    );
    assert!(accepted(&l).is_empty());
}

/// A thunk to a thunk promotes both, and only from a thunk that is an entry.
#[test]
fn chained_thunks_promote_in_order() {
    let l = listing(
        vec![
            jmp(0x1000, 0x1020),
            jmp(0x1020, 0x1040),
            op(0x1040, 2),
            ret(0x1042),
        ],
        &[0x1000],
    );
    assert_eq!(accepted(&l), vec![0x1020, 0x1040]);

    let orphan = listing(
        vec![
            op(0x1000, 2),
            ret(0x1002),
            jmp(0x1010, 0x1040),
            op(0x1040, 2),
            ret(0x1042),
        ],
        &[0x1000],
    );
    assert!(
        accepted(&orphan).is_empty(),
        "a jump that is not a function entry is not a thunk"
    );
}

/// A chain of jumps is followed [`MAX_CHAIN_HOPS`] jumps deep and no further.
#[test]
fn a_long_jump_chain_is_cut_at_the_hop_bound() {
    let links: Vec<Insn> = (0..10u64)
        .map(|i| jmp(0x1000 + 0x10 * i, 0x1010 + 0x10 * i))
        .collect();
    let l = listing(
        links
            .into_iter()
            .chain([op(0x10a0, 2), ret(0x10a2)])
            .collect(),
        &[0x1000],
    );
    assert_eq!(accepted(&l), vec![0x1010, 0x1020, 0x1030, 0x1040]);
}

/// The thunk at 0x1020 is followed by the body the thunk at 0x1040 jumps to:
/// that body is code, so the neighbour test passes only once it is promoted.
#[test]
fn the_neighbour_test_reads_the_growing_entry_set() {
    let l = listing(
        vec![
            op(0x1000, 2),
            ret(0x1002),
            jmp(0x1020, 0x1000),
            op(0x1025, 2),
            ret(0x1027),
            jmp(0x1040, 0x1025),
        ],
        &[0x1020, 0x1040],
    );
    assert_eq!(accepted(&l), vec![0x1000, 0x1025]);
}

fn stubs(base: u64, targets: &[u64]) -> Vec<u8> {
    let mut v = Vec::new();
    for (k, &t) in targets.iter().enumerate() {
        let next = base.wrapping_add(5 * (k as u64 + 1));
        v.push(0xe9);
        v.extend_from_slice(&(t.wrapping_sub(next) as i32).to_le_bytes());
    }
    v
}

#[test]
fn an_incremental_link_table_yields_every_stub_and_target() {
    let targets: Vec<u64> = (0..20).map(|k| 0x2000 + 0x40 * k).collect();
    let mut code = vec![0xcc; 5];
    code.extend(stubs(0x1005, &targets));
    code.push(0xcc);
    let pairs = table_runs(&code, 0x1000, |vma| (0x1000..0x3000).contains(&vma));
    assert_eq!(pairs.len(), 20);
    assert_eq!(pairs[0], (0x1005, 0x2000));
    assert_eq!(pairs[19], (0x1005 + 5 * 19, 0x2000 + 0x40 * 19));
}

#[test]
fn a_short_run_or_a_target_outside_code_is_no_table() {
    let short: Vec<u64> = (0..MIN_TABLE_RUN as u64 - 1).map(|k| 0x2000 + k).collect();
    assert!(table_runs(&stubs(0x1000, &short), 0x1000, |_| true).is_empty());
    let mut wild: Vec<u64> = (0..20).map(|k| 0x2000 + k).collect();
    wild[7] = 0x9000_0000;
    assert!(table_runs(&stubs(0x1000, &wild), 0x1000, |vma| vma < 0x8000).is_empty());
}

#[test]
fn a_stub_into_its_own_table_is_no_table() {
    let mut targets: Vec<u64> = (0..20).map(|k| 0x2000 + k).collect();
    targets[3] = 0x1000;
    assert!(table_runs(&stubs(0x1000, &targets), 0x1000, |_| true).is_empty());
}

#[test]
fn a_jump_island_after_code_is_no_table() {
    let targets: Vec<u64> = (0..20).map(|k| 0x2000 + 0x40 * k).collect();
    let mut code = vec![0x90; 27];
    code.extend([0x48, 0x01, 0xc0, 0xff, 0xe0]);
    code.extend(stubs(0x1020, &targets));
    assert!(table_runs(&code, 0x1000, |_| true).is_empty());
}

#[test]
fn a_run_to_one_shared_target_is_no_table() {
    let mut code = vec![0xcc];
    code.extend(stubs(0x1001, &[0x2000; 20]));
    assert!(table_runs(&code, 0x1000, |_| true).is_empty());
}

#[test]
fn a_section_wrapping_past_the_address_space_does_not_overflow() {
    let targets: Vec<u64> = (0..20).map(|k| 0x2000 + 0x40 * k).collect();
    let base = u64::MAX - 49;
    let code = stubs(base, &targets);
    assert!(table_runs(&code, base, |_| true).is_empty());
}
