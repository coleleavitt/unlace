use super::*;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_base::types::int4;

use crate::dtype::{Datatype, type_metatype};
use crate::varnode::VarnodeBank;

fn dt(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

/// const(0), unique(1), ram(2, 8-byte addressable).
fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn ram(m: &AddrSpaceManager, off: u64) -> Address {
    let spc = Rc::clone(m.get_space(2).unwrap());
    Address::new(spc, off)
}

/// Minimal TypeOp stub values for the op-codes the bank tests touch.
fn typeop(opc: OpCode) -> TypeOp {
    // Flags don't matter for the list-bucketing tests; name is the symbol.
    TypeOp::new(opc, 0, format!("{opc:?}"))
}

#[test]
fn accessors_keep_id_validity() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let retired = bank.create_at(1, ram(&m, 0x100));
    bank.get_mut(retired).unwrap().set_order(7);
    assert_eq!(bank.get(retired).unwrap().get_seq_num().get_order(), 7);
    bank.destroy(retired);
    assert!(bank.get(retired).is_some());
    assert!(bank.get_mut(retired).is_some());

    bank.clear();
    let live = bank.create_at(1, ram(&m, 0x200));
    assert_ne!(retired, live);
    let null = <OpId as slotmap::Key>::null();
    for id in [retired, null] {
        assert!(bank.get(id).is_none());
        assert!(bank.get_mut(id).is_none());
    }
    assert!(bank.get(live).is_some());
    assert!(bank.get_mut(live).is_some());
    bank.clear();
    assert!(bank.get(live).is_none());
    assert!(bank.get_mut(live).is_none());
}

/// A SUBPIECE whose byte offset is negative as an `int4` reads past the
/// word, as the unsigned `sz1 < sizeof(uintb)` of C++ `getNZMaskLocal` has it.
#[test]
fn nz_mask_of_a_subpiece_past_the_word() {
    let m = build_manager();
    let mut vbank = VarnodeBank::new(&m, 0).unwrap();
    let mut bank = PcodeOpBank::new();
    let constant = Rc::clone(m.get_space(0).unwrap());
    for (insize, expected) in [(4, 0), (16, uintb::MAX)] {
        let input = vbank.create(insize, ram(&m, 0x1000), dt(insize));
        vbank.get_mut(input).unwrap().set_nz_mask(0xffff_ffff);
        let offset = vbank.create(4, Address::new(Rc::clone(&constant), (-4i64) as u64), dt(4));
        let output = vbank.create(8, ram(&m, 0x2000), dt(8));
        let op = bank.create_at(2, ram(&m, 0x100));
        bank.change_opcode(op, typeop(OpCode::CPUI_SUBPIECE));
        let subpiece = bank.get_mut(op).unwrap();
        subpiece.set_input(Some(input), 0);
        subpiece.set_input(Some(offset), 1);
        subpiece.set_output(Some(output));
        let mask = get_nz_mask_local(bank.get(op).unwrap(), &vbank, false, &|_| false);
        assert_eq!(mask, expected, "{insize}-byte input");
    }
}

// --- allocation-order monotonicity ------------------------------------

#[test]
fn uniqid_monotonic_and_seqnum_time() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(2, ram(&m, 0x100));
    let b = bank.create_at(1, ram(&m, 0x100));
    let c = bank.create_at(0, ram(&m, 0x200));
    // uniqid feeds SeqNum::uniq one-up from 0.
    assert_eq!(bank.get(a).unwrap().get_time(), 0);
    assert_eq!(bank.get(b).unwrap().get_time(), 1);
    assert_eq!(bank.get(c).unwrap().get_time(), 2);
    assert_eq!(bank.get_uniq_id(), 3);
    // input slots reserved, all null
    assert_eq!(bank.get(a).unwrap().num_input(), 2);
    assert_eq!(bank.get(a).unwrap().get_in(0), None);
}

#[test]
fn create_seq_advances_uniqid() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    // A specific high seqnum bumps uniqid to time+1.
    let sq = SeqNum::new(ram(&m, 0x10), 41);
    let _id = bank.create_seq(1, sq);
    assert_eq!(bank.get_uniq_id(), 42);
    // A later create_at uses the bumped uniqid.
    let id2 = bank.create_at(0, ram(&m, 0x20));
    assert_eq!(bank.get(id2).unwrap().get_time(), 42);
    assert_eq!(bank.get_uniq_id(), 43);
}

// --- optree iteration order -------------------------------------------

#[test]
fn optree_iteration_is_seqnum_order() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    // Create out of address order; optree must sort by (addr, uniq).
    let _hi = bank.create_at(0, ram(&m, 0x200)); // uniq 0
    let _lo = bank.create_at(0, ram(&m, 0x100)); // uniq 1
    let _mid = bank.create_at(0, ram(&m, 0x100)); // uniq 2 (same addr as lo)
    let times: Vec<u32> = bank.iter_all().map(|(k, _)| k.get_time()).collect();
    // addr 0x100 first: lo(uniq1) then mid(uniq2); then addr 0x200: hi(uniq0)
    assert_eq!(times, vec![1, 2, 0]);
}

/// The buffered run the ActionPool cursor reads must be exactly the
/// sequence its one-at-a-time predecessor produced.
#[test]
fn ops_after_seq_matches_repeated_first_after() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    for off in [0x100u64, 0x108, 0x110, 0x118, 0x120] {
        bank.create_at(0, ram(&m, off));
        bank.create_at(0, ram(&m, off)); // two ops per address
    }
    let first = bank.iter_all().next().map(|(k, _)| k.clone()).unwrap();
    let mut one_at_a_time = Vec::new();
    let mut cur = first.clone();
    while let Some((k, id)) = bank.first_after_seq(&cur) {
        let k = k.clone();
        one_at_a_time.push(id);
        cur = k;
    }
    let mut run = Vec::new();
    bank.ops_after_seq(&first, 64, &mut run);
    assert_eq!(run, one_at_a_time);
    // A short run truncates rather than skipping.
    bank.ops_after_seq(&first, 3, &mut run);
    assert_eq!(run, one_at_a_time[..3].to_vec());
}

/// The epoch is what tells a buffered run it is still valid, so it must
/// move on both halves of the optree's mutation surface.
#[test]
fn optree_epoch_moves_on_insert_and_destroy() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let e0 = bank.optree_epoch();
    let a = bank.create_at(0, ram(&m, 0x100));
    let e1 = bank.optree_epoch();
    assert_ne!(e0, e1, "creating an op must move the epoch");
    bank.create_seq(0, SeqNum::new(ram(&m, 0x200), 99));
    let e2 = bank.optree_epoch();
    assert_ne!(e1, e2, "create_seq must move the epoch");
    bank.destroy(a);
    assert_ne!(
        e2,
        bank.optree_epoch(),
        "destroying an op must move the epoch"
    );
}

#[test]
fn iter_at_address_bounds() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let _a = bank.create_at(0, ram(&m, 0x100)); // uniq 0
    let _b = bank.create_at(0, ram(&m, 0x200)); // uniq 1
    let _c = bank.create_at(0, ram(&m, 0x100)); // uniq 2
    // only the two ops at 0x100, in uniq order
    let at: Vec<u32> = bank
        .iter_at(&ram(&m, 0x100))
        .map(|(k, _)| k.get_time())
        .collect();
    assert_eq!(at, vec![0, 2]);
    let at2: Vec<u32> = bank
        .iter_at(&ram(&m, 0x200))
        .map(|(k, _)| k.get_time())
        .collect();
    assert_eq!(at2, vec![1]);
    // target_lower_bound at 0x150 -> first op at-or-after == the 0x200 op
    let tgt = bank.target_lower_bound(&ram(&m, 0x150)).unwrap();
    assert_eq!(bank.get(tgt).unwrap().get_addr().get_offset(), 0x200);
}

// --- alive/dead list splice semantics vs a Vec model ------------------

#[test]
fn mark_alive_dead_roundtrip() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(0, ram(&m, 0x10));
    let b = bank.create_at(0, ram(&m, 0x20));
    let c = bank.create_at(0, ram(&m, 0x30));
    // all start dead, in creation order
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), vec![a, b, c]);
    assert_eq!(bank.num_dead(), 3);
    // mark b alive: dead -> [a, c], alive -> [b]
    bank.mark_alive(b);
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), vec![a, c]);
    assert_eq!(bank.iter_alive().collect::<Vec<_>>(), vec![b]);
    assert!(!bank.get(b).unwrap().is_dead());
    // mark a alive too: alive append-order -> [b, a]
    bank.mark_alive(a);
    assert_eq!(bank.iter_alive().collect::<Vec<_>>(), vec![b, a]);
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), vec![c]);
    // mark b dead again: appended to dead tail -> [c, b]
    bank.mark_dead(b);
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), vec![c, b]);
    assert_eq!(bank.iter_alive().collect::<Vec<_>>(), vec![a]);
}

/// The O(1) dead-list cursor must agree with a full `iter_dead()` scan for
/// every position, and must report non-membership (alive, or destroyed) as
/// `None` exactly as the scan did.
#[test]
fn dead_cursor_matches_a_full_scan() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    assert_eq!(bank.dead_front(), None);
    assert_eq!(bank.dead_back(), None);
    let ops: Vec<OpId> = (0..5)
        .map(|i| bank.create_at(0, ram(&m, 0x10 * i)))
        .collect();

    let scan: Vec<OpId> = bank.iter_dead().collect();
    assert_eq!(scan, ops);
    assert_eq!(bank.dead_front(), Some(ops[0]));
    assert_eq!(bank.dead_back(), Some(ops[4]));
    // Forward: dead_next(scan[i]) == scan[i+1], None at the tail.
    for (i, &op) in scan.iter().enumerate() {
        assert_eq!(bank.dead_next(op), scan.get(i + 1).copied(), "next of #{i}");
        assert_eq!(
            bank.dead_prev(op),
            if i == 0 { None } else { Some(scan[i - 1]) },
            "prev of #{i}"
        );
    }
    // An op on the ALIVE list shares the `insertiter` links, so membership --
    // not just "has a link" -- is what the cursor must test.
    bank.mark_alive(ops[2]);
    assert_eq!(bank.dead_next(ops[2]), None);
    assert_eq!(bank.dead_prev(ops[2]), None);
    assert_eq!(bank.dead_next(ops[1]), Some(ops[3]));
    assert_eq!(bank.dead_prev(ops[3]), Some(ops[1]));
    // A destroyed op keeps the `dead` flag but leaves the list.
    bank.destroy(ops[0]);
    assert_eq!(bank.dead_next(ops[0]), None);
    assert_eq!(bank.dead_prev(ops[0]), None);
    assert_eq!(bank.dead_front(), Some(ops[1]));
    // Single element: front == back, no neighbours.
    bank.destroy(ops[3]);
    bank.destroy(ops[4]);
    assert_eq!(bank.dead_front(), Some(ops[1]));
    assert_eq!(bank.dead_back(), Some(ops[1]));
    assert_eq!(bank.dead_next(ops[1]), None);
    assert_eq!(bank.dead_prev(ops[1]), None);
}

/// `first_after_seq_id` is the id-only form the pool cursor memoizes; it must
/// name the same op `first_after_seq` does at every position.
#[test]
fn first_after_seq_id_agrees_with_first_after_seq() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let ops: Vec<OpId> = (0..4)
        .map(|i| bank.create_at(0, ram(&m, 0x10 * i)))
        .collect();
    for &op in &ops {
        let sq = bank.get(op).unwrap().get_seq_num().clone();
        assert_eq!(
            bank.first_after_seq_id(&sq),
            bank.first_after_seq(&sq).map(|(_, id)| id)
        );
    }
    let last = bank
        .get(*ops.last().unwrap())
        .unwrap()
        .get_seq_num()
        .clone();
    assert_eq!(bank.first_after_seq_id(&last), None);
}

#[test]
fn insert_after_dead_places_correctly() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(0, ram(&m, 0x10));
    let b = bank.create_at(0, ram(&m, 0x20));
    let c = bank.create_at(0, ram(&m, 0x30));
    // dead == [a, b, c]; move c after a -> [a, c, b]
    bank.insert_after_dead(c, a);
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), vec![a, c, b]);
}

/// moveSequenceDead must match a Vec splice reference for the inclusive
/// range, including the C++ degenerate-move guard.
#[test]
fn move_sequence_dead_vs_vec_model() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let ops: Vec<OpId> = (0..6)
        .map(|i| bank.create_at(0, ram(&m, 0x10 * i)))
        .collect();
    // dead == [0,1,2,3,4,5]; move [1,2,3] to after 4 -> [0,4,1,2,3,5]
    bank.move_sequence_dead(ops[1], ops[3], ops[4]);
    let want = vec![ops[0], ops[4], ops[1], ops[2], ops[3], ops[5]];
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), want);
    // degenerate move: firstop already immediately follows prev -> unchanged
    let before = bank.iter_dead().collect::<Vec<_>>();
    // 1 currently follows 4; "after 4" is the no-op case for firstop=1
    bank.move_sequence_dead(ops[1], ops[1], ops[4]);
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), before);
}

// --- per-opcode code lists in insertion order --------------------------

#[test]
fn code_lists_bucket_in_insertion_order() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let s1 = bank.create_at(3, ram(&m, 0x10));
    let l1 = bank.create_at(2, ram(&m, 0x20));
    let s2 = bank.create_at(3, ram(&m, 0x30));
    let r1 = bank.create_at(1, ram(&m, 0x40));
    bank.change_opcode(s1, typeop(OpCode::CPUI_STORE));
    bank.change_opcode(l1, typeop(OpCode::CPUI_LOAD));
    bank.change_opcode(s2, typeop(OpCode::CPUI_STORE));
    bank.change_opcode(r1, typeop(OpCode::CPUI_RETURN));
    // store list in insertion order
    assert_eq!(
        bank.iter_code(OpCode::CPUI_STORE).collect::<Vec<_>>(),
        vec![s1, s2]
    );
    assert_eq!(
        bank.iter_code(OpCode::CPUI_LOAD).collect::<Vec<_>>(),
        vec![l1]
    );
    assert_eq!(
        bank.iter_code(OpCode::CPUI_RETURN).collect::<Vec<_>>(),
        vec![r1]
    );
    // a non-bucketed opcode yields empty
    assert_eq!(bank.iter_code(OpCode::CPUI_INT_ADD).count(), 0);
}

#[test]
fn change_opcode_moves_between_code_lists() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(2, ram(&m, 0x10));
    bank.change_opcode(a, typeop(OpCode::CPUI_STORE));
    assert_eq!(
        bank.iter_code(OpCode::CPUI_STORE).collect::<Vec<_>>(),
        vec![a]
    );
    // re-assign to LOAD: must leave store list, join load list
    bank.change_opcode(a, typeop(OpCode::CPUI_LOAD));
    assert_eq!(bank.iter_code(OpCode::CPUI_STORE).count(), 0);
    assert_eq!(
        bank.iter_code(OpCode::CPUI_LOAD).collect::<Vec<_>>(),
        vec![a]
    );
    assert_eq!(bank.get(a).unwrap().code(), OpCode::CPUI_LOAD);
}

// --- destroy / destroyDead / clear ------------------------------------

#[test]
fn destroy_dead_op_removes_from_optree_and_lists() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(2, ram(&m, 0x10));
    bank.change_opcode(a, typeop(OpCode::CPUI_STORE));
    let b = bank.create_at(0, ram(&m, 0x20));
    assert_eq!(bank.optree.len(), 2);
    bank.destroy(a); // a is dead
    assert_eq!(bank.optree.len(), 1);
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), vec![b]);
    assert_eq!(bank.iter_code(OpCode::CPUI_STORE).count(), 0);
    assert!(bank.find_op(&SeqNum::new(ram(&m, 0x10), 0)).is_none());
}

#[test]
#[should_panic(expected = "Deleting integrated op")]
fn destroy_alive_op_panics() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(0, ram(&m, 0x10));
    bank.mark_alive(a);
    bank.destroy(a); // not dead -> panic
}

#[test]
fn destroy_dead_clears_dead_list() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    // Ops carry an opcode by the time they are destroyed (the real flow
    // runs changeOpcode right after create); removeFromCodeList reads it.
    let a = bank.create_at(0, ram(&m, 0x10));
    let b = bank.create_at(0, ram(&m, 0x20));
    bank.change_opcode(a, typeop(OpCode::CPUI_INT_ADD));
    bank.change_opcode(b, typeop(OpCode::CPUI_STORE));
    assert_eq!(bank.num_dead(), 2);
    bank.destroy_dead();
    assert_eq!(bank.num_dead(), 0);
    assert!(bank.empty());
    // the STORE op left its dedicated code list too
    assert_eq!(bank.iter_code(OpCode::CPUI_STORE).count(), 0);
}

#[test]
fn clear_resets_uniqid_and_everything() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(2, ram(&m, 0x10));
    bank.change_opcode(a, typeop(OpCode::CPUI_LOAD));
    bank.mark_alive(a);
    bank.clear();
    assert!(bank.empty());
    assert_eq!(bank.get_uniq_id(), 0);
    assert_eq!(bank.num_alive(), 0);
    assert_eq!(bank.num_dead(), 0);
    assert_eq!(bank.iter_code(OpCode::CPUI_LOAD).count(), 0);
}

// --- markIncidentalCopy (cursor-while-mutating) ------------------------

#[test]
fn mark_incidental_copy_marks_only_copies_in_range() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(1, ram(&m, 0x10));
    let b = bank.create_at(1, ram(&m, 0x20));
    let c = bank.create_at(1, ram(&m, 0x30));
    let d = bank.create_at(1, ram(&m, 0x40));
    bank.change_opcode(a, typeop(OpCode::CPUI_COPY));
    bank.change_opcode(b, typeop(OpCode::CPUI_INT_ADD));
    bank.change_opcode(c, typeop(OpCode::CPUI_COPY));
    bank.change_opcode(d, typeop(OpCode::CPUI_COPY));
    // mark [a, c]: a and c are COPY (marked), b is ADD (skipped), d is out of range
    bank.mark_incidental_copy(a, c);
    assert!(bank.get(a).unwrap().is_incidental_copy());
    assert!(!bank.get(b).unwrap().is_incidental_copy());
    assert!(bank.get(c).unwrap().is_incidental_copy());
    assert!(!bank.get(d).unwrap().is_incidental_copy());
}

// --- PcodeOp slot / input mutation -------------------------------------

#[test]
fn get_slot_and_input_mutation() {
    let m = build_manager();
    let mut vbank = VarnodeBank::new(&m, 0).unwrap();
    let v0 = vbank.create(4, ram(&m, 0x10), dt(4));
    let v1 = vbank.create(4, ram(&m, 0x20), dt(4));
    let mut op = PcodeOp::new(2, SeqNum::new(ram(&m, 0x100), 0));
    op.set_input(Some(v0), 0);
    op.set_input(Some(v1), 1);
    assert_eq!(op.get_slot(v0), 0);
    assert_eq!(op.get_slot(v1), 1);
    // absent varnode -> numInput (C++ returns i==n, not -1)
    let vx = vbank.create(4, ram(&m, 0x30), dt(4));
    assert_eq!(op.get_slot(vx), 2);
    // removeInput renumbers
    op.remove_input(0);
    assert_eq!(op.num_input(), 1);
    assert_eq!(op.get_in(0), Some(v1));
    // insertInput shifts
    op.insert_input(0);
    assert_eq!(op.num_input(), 2);
    assert_eq!(op.get_in(0), None);
    assert_eq!(op.get_in(1), Some(v1));
}

/// The basic-block membership (third intrusive list) is driven by the
/// block wave via the per-op `set_basic_prev`/`set_basic_next` links the
/// C++ caches as `basiciter`; verify they round-trip.
#[test]
fn basic_block_membership_links_roundtrip() {
    let m = build_manager();
    let mut bank = PcodeOpBank::new();
    let a = bank.create_at(0, ram(&m, 0x10));
    let b = bank.create_at(0, ram(&m, 0x20));
    let c = bank.create_at(0, ram(&m, 0x30));
    // model a per-block list [a, b, c] by wiring the basic links directly
    bank.get_mut(a).unwrap().set_basic_next(Some(b));
    bank.get_mut(b).unwrap().set_basic_prev(Some(a));
    bank.get_mut(b).unwrap().set_basic_next(Some(c));
    bank.get_mut(c).unwrap().set_basic_prev(Some(b));
    assert_eq!(bank.get(a).unwrap().basic_neighbours(), (None, Some(b)));
    assert_eq!(bank.get(b).unwrap().basic_neighbours(), (Some(a), Some(c)));
    assert_eq!(bank.get(c).unwrap().basic_neighbours(), (Some(b), None));
    // the basic membership is independent of the alive/dead (insert) list
    assert_eq!(bank.iter_dead().collect::<Vec<_>>(), vec![a, b, c]);
}

#[test]
fn set_opcode_caches_flags() {
    let m = build_manager();
    let mut op = PcodeOp::new(2, SeqNum::new(ram(&m, 0x100), 0));
    // pretend INT_ADD is binary|commutative
    let flags = pcodeop_flags::binary | pcodeop_flags::commutative;
    op.set_opcode(TypeOp::new(OpCode::CPUI_INT_ADD, flags, "+"));
    assert!(op.is_commutative());
    assert_eq!(op.get_eval_type(), pcodeop_flags::binary);
    assert_eq!(op.code(), OpCode::CPUI_INT_ADD);
    // reassigning to a non-commutative op-code clears the opcode-derived bits
    op.set_opcode(TypeOp::new(OpCode::CPUI_COPY, pcodeop_flags::unary, "copy"));
    assert!(!op.is_commutative());
    assert_eq!(op.get_eval_type(), pcodeop_flags::unary);
}

// --- get_repeat_slot ---------------------------------------------------

#[test]
fn get_repeat_slot_handles_duplicate_inputs() {
    let m = build_manager();
    let mut vbank = VarnodeBank::new(&m, 0).unwrap();
    let v = vbank.create(4, ram(&m, 0x10), dt(4));
    let w = vbank.create(4, ram(&m, 0x20), dt(4));
    // op with v in slots 0 and 2, w in slot 1
    let mut op = PcodeOp::new(3, SeqNum::new(ram(&m, 0x100), 0));
    op.set_input(Some(v), 0);
    op.set_input(Some(w), 1);
    op.set_input(Some(v), 2);
    let self_id: OpId = slotmap::SlotMap::<OpId, ()>::with_key().insert(());
    // first occurrence (empty prefix -> count 1) returns first_slot
    assert_eq!(op.get_repeat_slot(v, 0, &[], self_id), 0);
    // second occurrence: prefix contains one earlier hit of self -> count 2
    assert_eq!(op.get_repeat_slot(v, 0, &[self_id], self_id), 2);
}

// --- PieceNode / gather_pieces ----------------------------------------

/// A single-level CONCAT tree `PIECE(hi@4, lo@0)` over two free (leaf)
/// Varnodes is gathered into two leaf nodes.  In a little-endian space, slot 0
/// (the most-significant input) gets type-offset == in1->getSize(), slot 1
/// (least-significant) gets type-offset 0 (C++ `PieceNode::gatherPieces` byte
/// math, `op.cc:900`).
#[test]
fn gather_pieces_single_level_two_leaves() {
    let m = build_manager();
    let mut vbank = VarnodeBank::new(&m, 0).unwrap();
    let mut obank = PcodeOpBank::new();

    // out @ ram:0 (8 bytes), built from hi @ ram:4 (4b) and lo @ ram:0 (4b).
    let lo = vbank.create(4, ram(&m, 0x0), dt(4));
    let hi = vbank.create(4, ram(&m, 0x4), dt(4));
    let out = vbank.create(8, ram(&m, 0x0), dt(8));

    let pieceop = obank.create_at(2, ram(&m, 0x100));
    {
        let o = obank.get_mut(pieceop).unwrap();
        o.set_opcode(typeop(OpCode::CPUI_PIECE));
        o.set_input(Some(hi), 0); // most-significant
        o.set_input(Some(lo), 1); // least-significant
        o.set_output(Some(out));
    }
    // Link the output's def + the inputs' descend so the bank reads are
    // consistent (gather_pieces only reads code()/get_in/get_size here).
    vbank.add_descend(hi, pieceop).unwrap();
    vbank.add_descend(lo, pieceop).unwrap();

    let mut stack: Vec<PieceNode> = Vec::new();
    gather_pieces(&mut stack, &obank, &vbank, out, pieceop, 0, 0);

    // Both inputs are free (no def) -> leaves; the recursion stops at them.
    assert_eq!(stack.len(), 2);
    // slot 0 (hi) -> offset = in1(lo)->getSize() = 4; slot 1 (lo) -> offset 0.
    assert_eq!(stack[0].get_slot(), 0);
    assert_eq!(stack[0].get_type_offset(), 4);
    assert!(stack[0].is_leaf());
    assert_eq!(stack[0].get_varnode(&obank), hi);
    assert_eq!(stack[1].get_slot(), 1);
    assert_eq!(stack[1].get_type_offset(), 0);
    assert!(stack[1].is_leaf());
    assert_eq!(stack[1].get_varnode(&obank), lo);
}

/// `piece_is_leaf` returns true for a free (unwritten) Varnode: a free read
/// is always a leaf of the CONCAT tree (C++ `PieceNode::isLeaf` `!isWritten()`
/// arm, `op.cc:837`).
#[test]
fn piece_is_leaf_free_is_leaf() {
    let m = build_manager();
    let mut vbank = VarnodeBank::new(&m, 0).unwrap();
    let obank = PcodeOpBank::new();
    let root = vbank.create(8, ram(&m, 0x0), dt(8));
    let free = vbank.create(4, ram(&m, 0x0), dt(4));
    assert!(piece_is_leaf(&obank, &vbank, root, free, 0));
}
