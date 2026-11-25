use super::*;
use crate::funcdata_merge::FuncdataMergeExt;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;

use crate::context::{ArchContext, TypeOp};
use crate::dtype::{Datatype, type_metatype};

/// Build an AddrSpaceManager with constant/unique/ram spaces, mirroring the
/// op.rs/block.rs test harness.
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

fn ram_space(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.glb.manage().get_space_by_name("ram").unwrap())
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn unk_type() -> Rc<Datatype> {
    Rc::new(Datatype::new(4, type_metatype::TYPE_UNKNOWN))
}

#[test]
fn construction_sets_up_containers() {
    let fd = build_fd();
    assert_eq!(fd.get_name(), "func");
    assert_eq!(fd.get_size(), 0x40);
    assert_eq!(fd.num_varnodes(), 0);
    assert!(fd.obank().empty());
    // Two graph roots exist.
    assert_eq!(fd.bblocks_get_size(), 0);
    assert_eq!(fd.sblocks_get_size(), 0);
    // Default flags clear.
    assert!(!fd.is_proc_started());
    assert!(!fd.is_high_on());
    assert!(fd.has_no_struct_blocks());
}

#[test]
fn flag_toggles_match_cpp_masks() {
    let mut fd = build_fd();
    fd.set_no_code(true);
    assert!(fd.has_no_code());
    fd.set_no_code(false);
    assert!(!fd.has_no_code());

    // jumptable recovery toggle clears/sets the *dont* bit (inverse sense).
    fd.set_jumptable_recovery(true);
    assert_eq!(fd.flags & funcdata_flags::jumptablerecovery_dont, 0);
    fd.set_jumptable_recovery(false);
    assert_ne!(fd.flags & funcdata_flags::jumptablerecovery_dont, 0);

    assert!(fd.start_type_recovery()); // first call -> true
    assert!(!fd.start_type_recovery()); // already started -> false
    assert!(fd.has_type_recovery_started());
}

#[test]
fn create_index_phases_track_vbank() {
    let mut fd = build_fd();
    let ram = ram_space(&fd);
    let ct = unk_type();
    // Create a few free varnodes to advance the create index.
    let _ = fd
        .vbank
        .create(4, Address::new(Rc::clone(&ram), 0x40), Rc::clone(&ct));
    let _ = fd
        .vbank
        .create(4, Address::new(Rc::clone(&ram), 0x44), Rc::clone(&ct));
    let ci = fd.vbank.get_create_index();
    assert_eq!(ci, 2);
    fd.start_clean_up();
    assert_eq!(fd.get_clean_up_index(), 2);
    fd.start_cast_phase();
    assert_eq!(fd.get_cast_phase_index(), 2);
}

/// Build a basic block holding `n` ops, returning (block id, op ids in order).
fn make_block_with_ops(fd: &mut Funcdata, n: int4) -> (BlockId, Vec<OpId>) {
    let root = fd.bblocks_root();
    let bl = fd.bblocks.new_block_basic(root);
    let ram = ram_space(fd);
    let mut ops = Vec::new();
    for i in 0..n {
        let pc = Address::new(Rc::clone(&ram), 0x1000 + i as u64 * 4);
        let op = fd.obank.create_at(2, pc);
        // Give the op an opcode so code() works (COPY = harmless).
        fd.obank
            .change_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.bb_insert_op(op, bl, None); // append at end
        ops.push(op);
    }
    (bl, ops)
}

#[test]
fn bb_insert_append_order_and_links() {
    let mut fd = build_fd();
    let (bl, ops) = make_block_with_ops(&mut fd, 3);
    assert_eq!(fd.bb_op_len(bl), 3);
    assert_eq!(fd.bb_op_head(bl), Some(ops[0]));
    assert_eq!(fd.bb_op_tail(bl), Some(ops[2]));
    // List order matches insertion order.
    assert_eq!(fd.bb_ops(bl), ops);
    // Orders are strictly increasing (insert assigns midpoints / setOrder).
    let orders: Vec<uintm> = ops
        .iter()
        .map(|&o| fd.obank.get(o).unwrap().get_seq_num().get_order())
        .collect();
    assert!(orders[0] < orders[1] && orders[1] < orders[2]);
}

#[test]
fn bb_insert_before_middle() {
    let mut fd = build_fd();
    let (bl, ops) = make_block_with_ops(&mut fd, 3);
    // Insert a new op before ops[1].
    let ram = ram_space(&fd);
    let pc = Address::new(ram, 0x2000);
    let newop = fd.obank.create_at(1, pc);
    fd.obank
        .change_opcode(newop, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
    fd.bb_insert_op(newop, bl, Some(ops[1]));
    assert_eq!(fd.bb_op_len(bl), 4);
    assert_eq!(fd.bb_ops(bl), vec![ops[0], newop, ops[1], ops[2]]);
    // The inserted op is ordered between ops[0] and ops[1].
    let o0 = fd.obank.get(ops[0]).unwrap().get_seq_num().get_order();
    let on = fd.obank.get(newop).unwrap().get_seq_num().get_order();
    let o1 = fd.obank.get(ops[1]).unwrap().get_seq_num().get_order();
    assert!(o0 < on && on < o1);
}

#[test]
fn bb_insert_preserves_order_between_odd_neighbors() {
    for (left, right) in [(5, 7), (5, 9), (uintm::MAX - 2, uintm::MAX)] {
        let mut fd = build_fd();
        let (bl, ops) = make_block_with_ops(&mut fd, 2);
        fd.obank.get_mut(ops[0]).unwrap().set_order(left);
        fd.obank.get_mut(ops[1]).unwrap().set_order(right);
        let newop = fd.obank.create_at(1, Address::new(ram_space(&fd), 0x2000));
        fd.obank
            .change_opcode(newop, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.bb_insert_op(newop, bl, Some(ops[1]));
        let middle = fd.obank.get(newop).unwrap().get_seq_num().get_order();
        assert!(
            left < middle && middle < right,
            "{left} < {middle} < {right}"
        );
        assert_eq!(fd.bb_ops(bl), vec![ops[0], newop, ops[1]]);
        assert_eq!(
            fd.obank.get(ops[0]).unwrap().get_seq_num().get_order(),
            left
        );
        assert_eq!(
            fd.obank.get(ops[1]).unwrap().get_seq_num().get_order(),
            right
        );
    }
}

#[test]
fn bb_insert_natural_gap_exhaustion_keeps_distinct_cover_points() {
    let mut fd = build_fd();
    let (block, ops) = make_block_with_ops(&mut fd, 2);
    fd.bb_set_order(block);
    let left = ops[0];
    let mut right = ops[1];
    loop {
        let a = fd.obank.get(left).unwrap().get_seq_num().get_order();
        let b = fd.obank.get(right).unwrap().get_seq_num().get_order();
        if b - a <= 3 {
            break;
        }
        let inserted = fd.obank.create_at(1, Address::new(ram_space(&fd), 0x2000));
        fd.obank
            .change_opcode(inserted, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.bb_insert_op(inserted, block, Some(right));
        right = inserted;
    }
    for _ in 0..2 {
        let inserted = fd.obank.create_at(1, Address::new(ram_space(&fd), 0x2000));
        fd.obank
            .change_opcode(inserted, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.bb_insert_op(inserted, block, Some(right));
    }
    assert_strict_block_order(&fd, block);
    let covers: Vec<_> = fd
        .bb_ops(block)
        .iter()
        .map(|id| fd.op_cover_point_pub(*id).get_uindex())
        .collect();
    assert!(covers.windows(2).all(|pair| pair[0] < pair[1]));
}

fn assert_strict_block_order(fd: &Funcdata, block: BlockId) {
    let orders: Vec<_> = fd
        .bb_ops(block)
        .into_iter()
        .map(|id| fd.obank.get(id).unwrap().get_seq_num().get_order())
        .collect();
    assert!(
        orders.windows(2).all(|pair| pair[0] < pair[1]),
        "{orders:?}"
    );
}

#[test]
fn bb_renumber_refreshes_cached_variable_covers() {
    use crate::p6_variables::merge::MergeContext;
    let mut fd = build_fd();
    let root = fd.bblocks_root();
    let block = fd.bblocks.new_block_basic(root);
    let ram = ram_space(&fd);
    let ops = [
        fd.new_op(1, Address::new(Rc::clone(&ram), 0x1000)),
        fd.new_op(1, Address::new(ram, 0x1004)),
    ];
    for op in ops {
        fd.op_set_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.bb_insert_op(op, block, None);
    }
    let value = fd.new_unique_out(4, ops[0]).unwrap();
    fd.new_unique_out(4, ops[1]).unwrap();
    let constant = fd.new_constant(4, 7);
    fd.op_set_input(ops[0], constant, 0).unwrap();
    fd.op_set_input(ops[1], value, 0).unwrap();
    fd.set_high_level();
    let high = fd.vbank.get(value).unwrap().get_high().unwrap();
    MergeContext::bank_update_cover(&mut fd, high);
    let original = fd.vbank.get(value).unwrap().cover().unwrap().clone();
    assert!(!fd.vbank.get(value).unwrap().is_cover_dirty_flag());
    assert!(!fd.high_bank.get(high).unwrap().is_cover_dirty());

    let previous_order = fd.obank.get(ops[0]).unwrap().get_seq_num().get_order();
    let mut right = ops[1];
    for _ in 0..64 {
        let inserted = fd.new_op(1, Address::new(ram_space(&fd), 0x1010));
        fd.op_set_opcode(inserted, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.op_set_input(inserted, constant, 0).unwrap();
        fd.new_unique_out(4, inserted).unwrap();
        fd.bb_insert_op(inserted, block, Some(right));
        right = inserted;
        if fd.obank.get(ops[0]).unwrap().get_seq_num().get_order() != previous_order {
            break;
        }
    }
    assert_ne!(
        fd.obank.get(ops[0]).unwrap().get_seq_num().get_order(),
        previous_order
    );
    assert!(fd.vbank.get(value).unwrap().is_cover_dirty_flag());
    assert!(fd.high_bank.get(high).unwrap().is_cover_dirty());
    MergeContext::bank_update_cover(&mut fd, high);
    let rebuilt = fd.vbank.get(value).unwrap().cover().unwrap();
    assert_ne!(format!("{original:?}"), format!("{rebuilt:?}"));
    let cover = rebuilt.get_cover_block(fd.block_index_pub(block));
    assert_eq!(
        cover.get_start().unwrap().get_uindex(),
        fd.op_cover_point_pub(ops[0]).get_uindex()
    );
    assert_eq!(
        cover.get_stop().unwrap().get_uindex(),
        fd.op_cover_point_pub(ops[1]).get_uindex()
    );
}

#[test]
fn bb_append_past_order_space_renumbers_rarely() {
    let mut fd = build_fd();
    let (block, _) = make_block_with_ops(&mut fd, 1);
    let start = fd.affecting_ops_revision();
    for i in 0..200_000u64 {
        let op = fd
            .obank
            .create_at(1, Address::new(ram_space(&fd), 0x2000 + i));
        fd.obank
            .change_opcode(op, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.bb_insert_op(op, block, None);
    }
    assert_strict_block_order(&fd, block);
    let renumbers = fd.affecting_ops_revision() - start;
    assert!(renumbers <= 16, "{renumbers} renumbers");
}

#[test]
fn bb_insert_repeated_positions_preserve_list_and_cover_order() {
    let mut fd = build_fd();
    let (block, mut expected) = make_block_with_ops(&mut fd, 128);
    let mut state = 17u32;
    for i in 0..2000 {
        state = state.wrapping_mul(1664525).wrapping_add(1013904223);
        let at = state as usize % (expected.len() + 1);
        let inserted = fd
            .obank
            .create_at(1, Address::new(ram_space(&fd), 0x2000 + i));
        fd.obank
            .change_opcode(inserted, TypeOp::new(OpCode::CPUI_COPY, 0, "COPY"));
        fd.bb_insert_op(inserted, block, expected.get(at).copied());
        expected.insert(at, inserted);
        if i % 128 == 0 {
            assert_strict_block_order(&fd, block);
        }
    }
    assert_eq!(fd.bb_ops(block), expected);
    assert_strict_block_order(&fd, block);
    let covers: Vec<_> = expected
        .iter()
        .map(|id| fd.op_cover_point_pub(*id).get_uindex())
        .collect();
    assert!(covers.windows(2).all(|pair| pair[0] < pair[1]));
}

#[test]
fn bb_remove_op_fixes_links() {
    let mut fd = build_fd();
    let (bl, ops) = make_block_with_ops(&mut fd, 3);
    // Remove the middle op.
    fd.bb_remove_op(bl, ops[1]);
    assert_eq!(fd.bb_op_len(bl), 2);
    assert_eq!(fd.bb_ops(bl), vec![ops[0], ops[2]]);
    assert_eq!(fd.bb_op_head(bl), Some(ops[0]));
    assert_eq!(fd.bb_op_tail(bl), Some(ops[2]));
    // Removed op has no parent.
    assert_eq!(fd.obank.get(ops[1]).unwrap().get_parent(), None);

    // Remove head.
    fd.bb_remove_op(bl, ops[0]);
    assert_eq!(fd.bb_op_head(bl), Some(ops[2]));
    assert_eq!(fd.bb_op_tail(bl), Some(ops[2]));
    // Remove last remaining.
    fd.bb_remove_op(bl, ops[2]);
    assert!(fd.bb_empty_op(bl));
    assert_eq!(fd.bb_op_head(bl), None);
    assert_eq!(fd.bb_op_tail(bl), None);
}

#[test]
fn branchind_marks_switch_out() {
    use crate::op::pcodeop_flags;
    let mut fd = build_fd();
    let root = fd.bblocks_root();
    let bl = fd.bblocks.new_block_basic(root);
    let ram = ram_space(&fd);
    let op = fd.obank.create_at(1, Address::new(ram, 0x1000));
    // The W6 TypeOp for BRANCHIND carries the `branch` flag; replicate it so
    // is_branch()/code() drive the f_switch_out mark in bb_insert_op.
    fd.obank.change_opcode(
        op,
        TypeOp::new(OpCode::CPUI_BRANCHIND, pcodeop_flags::branch, "BRANCHIND"),
    );
    fd.bb_insert_op(op, bl, None);
    assert!(fd.bblocks.block(bl).is_switch_out());
}

#[test]
fn clear_resets_ir_and_flags() {
    let mut fd = build_fd();
    let (_bl, _ops) = make_block_with_ops(&mut fd, 2);
    fd.set_flag_raw(funcdata_flags::processing_started | funcdata_flags::highlevel_on);
    assert!(fd.is_proc_started());
    fd.clear();
    assert!(!fd.is_proc_started());
    assert!(!fd.is_high_on());
    assert!(fd.obank().empty());
    assert_eq!(fd.num_varnodes(), 0);
    // bblocks reset to a fresh empty graph.
    assert_eq!(fd.bblocks_get_size(), 0);
}

// ---- W7 HighVariable / Cover wiring ----------------------------------

/// Create a coverable (insert-flagged) register varnode at the given offset,
/// with the given datatype, returning its id.  Mirrors the post-heritage
/// "real" varnode the merge phase sees.
fn make_insert_vn(fd: &mut Funcdata, off: u64, ct: Rc<Datatype>) -> VarnodeId {
    let ram = ram_space(fd);
    let id = fd.vbank.create(ct.get_size(), Address::new(ram, off), ct);
    // Mark inserted (output of an op / input) so hasCover() is true.
    fd.vbank.get_mut(id).unwrap().set_insert_for_test();
    id
}

#[test]
fn set_high_level_assigns_a_high_to_each_varnode() {
    let mut fd = build_fd();
    let v1 = make_insert_vn(&mut fd, 0x40, unk_type());
    let v2 = make_insert_vn(&mut fd, 0x48, unk_type());
    assert!(!fd.is_high_on());
    fd.set_high_level();
    assert!(fd.is_high_on());
    // Each non-annotation varnode got a HighVariable.
    assert!(fd.vbank.get(v1).unwrap().get_high().is_some());
    assert!(fd.vbank.get(v2).unwrap().get_high().is_some());
    assert_eq!(fd.high_bank().num_highs(), 2);
    // Distinct highs, in creation order (HighVariableId order).
    assert_ne!(
        fd.vbank.get(v1).unwrap().get_high(),
        fd.vbank.get(v2).unwrap().get_high()
    );
}

#[test]
fn build_dynamic_symbol_guards_and_equate_format_accessors() {
    // The DynamicHash/equate-Symbol creation path needs a local scope + a
    // live decompiled IR (exercised end-to-end by the `force varnode` console
    // command); here we cover the C++ guard arms (`!isHighOn()` /
    // `isTypeLock()`) and the merged-tree `vn->getHigh()->getSymbol()`
    // display-format stand-in accessors (vn_high_equate_symbol /
    // vn_high_display_format), which return the no-equate sentinel until
    // build_dynamic_symbol binds one.
    let mut fd = build_fd();
    let c = fd.new_constant(4, 0xaa);
    let unk = unk_type();

    // !isHighOn() -> "Cannot create dynamic symbols until decompile has completed".
    assert!(!fd.is_high_on());
    let err = fd
        .build_dynamic_symbol(c, 8, Rc::clone(&unk))
        .expect_err("must reject before high-level");
    assert!(err.explain().contains("decompile has completed"));

    fd.set_high_level();
    // No equate symbol bound yet: the stand-in accessors report "none"/0.
    assert!(fd.vn_high_equate_symbol(c).is_none());
    assert_eq!(fd.vn_high_display_format(c), 0);

    // isTypeLock() -> "Trying to build dynamic symbol on locked varnode".
    fd.vbank
        .get_mut(c)
        .unwrap()
        .set_flags_pub(crate::varnode::varnode_flags::typelock);
    let err = fd
        .build_dynamic_symbol(c, 8, unk)
        .expect_err("must reject a type-locked varnode");
    assert!(err.explain().contains("locked varnode"));
}

/// (ghidra Phase 4, review round C2) The DYNAMIC name-recommendation
/// channel — upstream `ScopeLocal::dynRecommend` +
/// `recoverNameRecommendationsForSymbols`'s hash loop (varmap.cc:1557).
///
/// This is the mechanism a GUI rename of a variable with hash storage
/// (anything `requiresDynamicStorage`: a unique-space representative, a
/// `splitOutMergeGroup` product) comes back through.  Seed a
/// recommendation keyed on the SAME hash `DynamicHash` computes for a
/// varnode, apply it, and the varnode's HighVariable must take the
/// recommended name AND acquire a dynamic Symbol carrying that hash — so
/// the re-encoded `<localdb>` hands Java a `<mapsym type="dynamic">` it
/// resolves to the very variable the user renamed.
#[test]
fn dynamic_name_recommendation_renames_the_hashed_variable() {
    // A manager WITH a stack space so the Funcdata gets a real ScopeLocal
    // (the recommendation lists live on it).
    let mut m = build_manager();
    let regspc = Rc::new(unlace_base::space::AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        false,
        8,
        1,
        5,
        unlace_base::space::addrspace_flags::hasphysical,
        1,
        1,
    ));
    m.insert_space(Rc::clone(&regspc)).unwrap();
    m.insert_space(Rc::new(unlace_base::space::SpacebaseSpace::new(
        "stack", 6, 8, &regspc, 1, true, false,
    )))
    .unwrap();
    let glb = Rc::new(ArchContext::new(m));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let entry = Address::new(ram, 0x1000);
    let mut fd = Funcdata::new("func", "func", glb, entry, 0x10000000, 0x40).unwrap();
    assert!(
        fd.get_scope_local().is_some(),
        "fixture must have a local scope"
    );
    let rs = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    let root = fd.bblocks_root_pub();
    let bl = fd.bblocks_mut().new_block_basic(root);
    fd.bblocks_mut().set_start_block(root, bl);
    // out = in + in, so `out` is a written varnode the hasher can key on.
    let a = fd.new_varnode(4, &Address::new(Rc::clone(&rs), 0x100), None);
    let a = fd.set_input_varnode(a).unwrap();
    let op = fd.new_op(2, Address::new(Rc::clone(&rs), 0x1000));
    fd.op_set_opcode(
        op,
        crate::context::TypeOp::new(OpCode::CPUI_INT_ADD, 0, "ADD"),
    );
    let out = fd
        .new_varnode_out(4, &Address::new(Rc::clone(&rs), 0x200), op)
        .unwrap();
    fd.op_set_input(op, a, 0).unwrap();
    fd.op_set_input(op, a, 1).unwrap();
    fd.op_insert(op, bl, None);
    fd.structure_reset();
    fd.set_high_level();

    // The hash Java would compute for this variable (same algorithm, same
    // hardcoded budget of 8 — DynamicHash.java:440).
    let (hash, hash_addr) = crate::dynamic::dynamic_unique_hash(out, 8, &mut fd).expect("hash");
    assert_ne!(hash, 0, "the fixture varnode must hash uniquely");

    fd.seed_dynamic_recommendations(&[("user_renamed".to_string(), hash_addr, hash)]);
    fd.unlace_apply_dynamic_recommendations();

    let high = fd
        .vbank()
        .get(out)
        .and_then(|v| v.get_high())
        .expect("high");
    let h = fd.high_bank().get(high).expect("high present");
    assert_eq!(
        h.unlace_name(),
        Some("user_renamed"),
        "the dynamic recommendation did not name the hashed variable"
    );
    assert!(
        h.unlace_link_symbol().is_some(),
        "the recommendation must also bind a Symbol so the wire carries an id"
    );
    // A second apply is idempotent (the name is already resolved).
    fd.unlace_apply_dynamic_recommendations();
    assert_eq!(
        fd.high_bank().get(high).unwrap().unlace_name(),
        Some("user_renamed")
    );
}

/// Adversarial (Convert B2): binding a dynamic SymbolEntry to a Varnode marks
/// it `Varnode::mapped` (the C++ `setSymbolEntry`/`varnode.cc:448` effect that
/// pins it explicit so the equated COPY survives copy-elimination), and the
/// binding is the idempotency key — `vn_high_has_dynamic_binding` reports it even
/// when the Varnode has no HighVariable yet (the early `ActionDynamicMapping`
/// runs before highs are built; without the Varnode-level key the repeat-apply
/// pass loops forever).  Generic over any SymbolId — no convert-specific value.
#[test]
fn varnode_symbol_entry_binding_marks_mapped_and_is_idempotent() {
    use crate::database::SymbolId;
    let mut fd = build_fd();
    let c = fd.new_constant(4, 0x100);
    // Unbound, no high: not mapped, no dynamic binding.
    assert!(!fd.vbank.get(c).unwrap().is_mapped());
    assert!(fd.vbank.get(c).unwrap().get_high().is_none());
    assert!(!fd.vn_high_has_dynamic_binding(c));
    // Bind an arbitrary symbol id (slotmap default key stands in for any equate).
    let sym: SymbolId = Default::default();
    fd.vbank.get_mut(c).unwrap().set_unlace_symbol_entry(sym);
    // setSymbolEntry marks `mapped` (the B2 copy-elim survival pin) ...
    assert!(fd.vbank.get(c).unwrap().is_mapped());
    // ... and is the idempotency key even with no HighVariable present.
    assert!(fd.vbank.get(c).unwrap().get_high().is_none());
    assert!(fd.vn_high_has_dynamic_binding(c));
    assert_eq!(fd.vbank.get(c).unwrap().unlace_symbol_entry(), Some(sym));
}

#[test]
fn high_get_type_reads_member_datatype() {
    let mut fd = build_fd();
    let int4_ty = Rc::new(Datatype::new(4, type_metatype::TYPE_INT));
    let v = make_insert_vn(&mut fd, 0x40, Rc::clone(&int4_ty));
    fd.set_high_level();
    // The high's type derives from its single member's type (INT).
    let ty = fd.high_get_type(v).expect("high present");
    assert_eq!(ty.get_metatype(), type_metatype::TYPE_INT);
}

#[test]
fn update_varnode_cover_rebuilds_input_def_point() {
    // An input varnode with a single-block cover: its def-point is the input
    // marker in block 0.  Drive the cross-arena cover rebuild.
    let mut fd = build_fd();
    let root = fd.bblocks_root();
    let bl = fd.bblocks.new_block_basic(root);
    // Give the block index 0 (new_block_basic assigns indices in order).
    let _ = bl;
    let ram = ram_space(&fd);
    let v = fd.vbank.create(4, Address::new(ram, 0x40), unk_type());
    // Make it an input + inserted so it has a cover and is non-free.
    fd.vbank.get_mut(v).unwrap().set_insert_for_test();
    fd.vbank.get_mut(v).unwrap().set_input_for_test();
    fd.vbank.get_mut(v).unwrap().calc_cover();
    assert!(fd.vbank.get(v).unwrap().is_cover_dirty_flag());
    fd.update_varnode_cover(v);
    // No longer dirty; the cover now marks the input point in block 0.
    assert!(!fd.vbank.get(v).unwrap().is_cover_dirty_flag());
    let cover = fd.vbank.get(v).unwrap().cover().expect("cover built");
    assert!(!cover.get_cover_block(0).empty());
}

#[test]
fn recalculated_cover_dirties_the_owning_high() {
    // A Varnode whose Cover was dropped (`opUnsetOutput` -> `clearCover`) and
    // then re-allocated by `setVarnodeProperties` must leave its HighVariable
    // cover-dirty, mirroring the C++ `calcCover` -> `setFlags(coverdirty)` ->
    // `high->coverDirty()` forward.  Without it `HighIntersectTest::updateHigh`
    // reads a clean high, never rebuilds the empty member Cover, and an
    // intersecting merge looks legal.
    let mut fd = build_fd();
    let v = make_insert_vn(&mut fd, 0x40, unk_type());
    fd.set_high_level();
    let h = fd.vbank.get(v).unwrap().get_high().expect("high assigned");
    fd.high_update_cover(h);
    assert!(!fd.high_bank.get(h).unwrap().is_cover_dirty());
    // The `opUnsetOutput` half: the Cover object goes away entirely.
    fd.vbank.get_mut(v).unwrap().clear_cover();
    assert!(fd.vbank.get(v).unwrap().cover().is_none());
    // The `opSetOutput` half: `setVarnodeProperties` re-allocates it empty.
    fd.set_varnode_properties(v);
    assert!(fd.vbank.get(v).unwrap().cover().is_some());
    assert!(fd.vbank.get(v).unwrap().is_cover_dirty_flag());
    assert!(
        fd.high_bank.get(h).unwrap().is_cover_dirty(),
        "the re-allocated empty Cover must dirty its HighVariable"
    );
}

#[test]
fn covermerge_persists_across_with_covermerge_calls() {
    // The persistent `covermerge` (C++ `Funcdata::covermerge`) must survive the
    // move-out / move-back of `with_covermerge`, so the `copyTrims` accumulated
    // by an earlier merge action (`ActionMergeRequired`) reach the later
    // `ActionDominantCopy` (`processCopyTrims`).  Pin that the engine instance
    // and its accumulator persist (this is the architectural fix that lets the
    // dominant-copy hoist see the trim COPYs at all).
    let mut fd = build_fd();
    assert!(fd.covermerge.is_none());
    // First use builds it lazily and reads an empty accumulator.
    let first = fd.with_covermerge(|merge, _data| merge.copy_trims_len());
    assert_eq!(first, 0);
    assert!(
        fd.covermerge.is_some(),
        "covermerge built lazily on first use"
    );
    // Push a (fake) trim into the persistent engine, then re-enter: the push
    // must still be visible (the engine was moved back, not re-created).
    let fake = OpId::from(slotmap::KeyData::from_ffi(7));
    fd.covermerge
        .as_mut()
        .unwrap()
        .push_copy_trim_for_test(fake);
    let second = fd.with_covermerge(|merge, _data| merge.copy_trims_len());
    assert_eq!(second, 1, "copyTrims accumulator survives with_covermerge");
    // clear_covermerge empties it (C++ Merge::clear in Funcdata::clear).
    fd.clear_covermerge();
    let third = fd.with_covermerge(|merge, _data| merge.copy_trims_len());
    assert_eq!(third, 0);
}

/// Unlace #1674: a constant wider than 8 bytes holds zero above bit 63, so a
/// piece 8 or more bytes into it shadows only the constant 0.
#[test]
fn partial_copy_shadow_reads_zero_above_bit_63_of_a_wide_constant() {
    let mut fd = build_fd();
    let zero16 = fd.new_constant(16, 0);
    let low16 = fd.new_constant(16, 0x1234);
    let zero8 = fd.new_constant(8, 0);
    let low8 = fd.new_constant(8, 0x1234);
    let zero4 = fd.new_constant(4, 0);
    assert!(fd.varnode_partial_copy_shadow(low8, low16, 0));
    assert!(fd.varnode_partial_copy_shadow(zero8, zero16, 8));
    assert!(fd.varnode_partial_copy_shadow(zero8, low16, 8));
    assert!(fd.varnode_partial_copy_shadow(zero4, low16, 12));
    assert!(!fd.varnode_partial_copy_shadow(low8, low16, 8));
    assert!(!fd.varnode_partial_copy_shadow(low8, zero16, 8));
}
