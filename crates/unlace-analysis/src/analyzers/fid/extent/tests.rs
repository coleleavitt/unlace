use super::*;
use std::collections::BTreeMap;

fn insn_at(addr: u64, len: u32) -> Insn {
    Insn {
        addr,
        len,
        fall_through: Some(addr + len as u64),
        flow: Default::default(),
        flows: vec![],
        mnemonic: String::new().into(),
        operands: String::new(),
        pcode: None,
    }
}

/// Build an address-ordered instruction map (the shape `instructions()`
/// yields) for the clip tests.
fn map_of(insns: Vec<Insn>) -> BTreeMap<u64, Insn> {
    insns.into_iter().map(|i| (i.addr, i)).collect()
}

#[test]
fn clips_between_consecutive_function_entries() {
    // Two functions: f@0x1000 (3 insns) and g@0x1010 (2 insns), laid out
    // contiguously. The extent of f is exactly its three instructions.
    let map = map_of(vec![
        insn_at(0x1000, 4),
        insn_at(0x1004, 4),
        insn_at(0x1008, 4),
        insn_at(0x1010, 4),
        insn_at(0x1014, 4),
    ]);

    let ext_f: Vec<u64> = clip_extent(map.iter(), 0x1000, Some(0x1010))
        .iter()
        .map(|i| i.addr)
        .collect();
    assert_eq!(ext_f, vec![0x1000, 0x1004, 0x1008]);

    let ext_g: Vec<u64> = clip_extent(map.iter(), 0x1010, None)
        .iter()
        .map(|i| i.addr)
        .collect();
    assert_eq!(ext_g, vec![0x1010, 0x1014]);
}

#[test]
fn last_function_runs_to_end_of_map() {
    let map = map_of(vec![
        insn_at(0x2000, 2),
        insn_at(0x2002, 2),
        insn_at(0x2004, 2),
    ]);
    let ext: Vec<u64> = clip_extent(map.iter(), 0x2000, None)
        .iter()
        .map(|i| i.addr)
        .collect();
    assert_eq!(ext, vec![0x2000, 0x2002, 0x2004]);
}

#[test]
fn instructions_before_entry_excluded() {
    // A function entry that is not the first instruction in the map: anything
    // before the entry is not part of the body.
    let map = map_of(vec![
        insn_at(0x3000, 4), // before entry
        insn_at(0x3004, 4), // entry
        insn_at(0x3008, 4),
    ]);
    let ext: Vec<u64> = clip_extent(map.iter(), 0x3004, None)
        .iter()
        .map(|i| i.addr)
        .collect();
    assert_eq!(ext, vec![0x3004, 0x3008]);
}

#[test]
fn empty_clip_when_no_instructions_in_range() {
    // An entry past every instruction yields an empty extent (the hasher then
    // rejects it as < 4 code units).
    let map = map_of(vec![insn_at(0x4000, 4), insn_at(0x4004, 4)]);
    let ext = clip_extent(map.iter(), 0x5000, None);
    assert!(ext.is_empty());
}
