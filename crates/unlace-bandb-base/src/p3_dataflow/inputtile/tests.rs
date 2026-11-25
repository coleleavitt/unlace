use super::*;
use std::rc::Rc;

use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};

use crate::context::ArchContext;

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<unlace_base::space::AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn no_replace()
-> impl FnMut(&mut crate::varnode::VarnodeBank, VarnodeId, VarnodeId) -> UnlaceResult<()> {
    |_, _, _| Ok(())
}

/// Make a *live* input varnode directly in the bank (bypassing
/// `setInputVarnode`'s xref split-borrow, same shortcut `funcdata_varnode.rs`'s
/// own w10dm tests use).
fn make_input(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    let vn = fd.new_varnode(size, &Address::new(r, off), None);
    fd.vbank_mut().set_input(vn, &mut no_replace()).unwrap()
}

/// A live 1-byte input fully inside the requested 4-byte range (the
/// AH-vs-EAX / narrow-flag-vs-wide-register shape) is declined, not
/// silently combined: nothing marks it a `guardInput` leftover, so it may
/// still be the top of some *other* address key's `VariableStack` this
/// same renaming round, and combining would destroy it out from under
/// that stack. The diagnostic must name both the requested range and the
/// conflicting Varnode's own range so `rename_recurse`'s panic is
/// actionable without a debugger.
#[test]
fn new_tiled_input_declines_fully_contained_live_piece() {
    let mut fd = build_fd();
    let live = make_input(&mut fd, 0x101, 1);
    assert!(fd.vbank().get(live).unwrap().is_input());
    assert!(!fd.vbank().get(live).unwrap().is_write_mask());

    let r = ram(&fd);
    let err = new_tiled_input(&mut fd, 4, &Address::new(r, 0x100))
        .expect_err("a live, non-write-masked contained input must not be combined away");
    let msg = err.to_string();
    assert!(
        msg.contains("ram[0x100,0x104)"),
        "diagnostic names the requested range: {msg}"
    );
    assert!(
        msg.contains("0x101") && msg.contains("0x102"),
        "diagnostic names the conflicting Varnode's own range: {msg}"
    );
    assert!(
        msg.contains("live") || msg.contains("non-write-masked"),
        "diagnostic says *why* it declined (live, not a guardInput piece): {msg}"
    );
    // Declining must not have touched the live varnode.
    assert!(
        fd.vbank().get(live).unwrap().is_input(),
        "live input survives the decline"
    );
}

/// The shape DIV-50 exists for: every byte of the request is covered by
/// `guardInput` write-masked leftovers, so reconciliation may run and the
/// pieces are folded into one full-size input.
#[test]
fn new_tiled_input_combines_write_masked_pieces() {
    let mut fd = build_fd();
    let lo = make_input(&mut fd, 0x100, 2);
    let hi = make_input(&mut fd, 0x102, 2);
    fd.vbank_mut().get_mut(lo).unwrap().set_write_mask();
    fd.vbank_mut().get_mut(hi).unwrap().set_write_mask();

    let r = ram(&fd);
    let whole = new_tiled_input(&mut fd, 4, &Address::new(Rc::clone(&r), 0x100))
        .expect("two contiguous write-masked pieces reconcile into one input");
    let wv = fd.vbank().get(whole).unwrap();
    assert!(wv.is_input());
    assert_eq!(wv.get_size(), 4);
    assert_eq!(wv.get_addr(), &Address::new(r, 0x100));
    assert!(
        fd.vbank().get(lo).is_none(),
        "piece destroyed by the combine"
    );
    assert!(
        fd.vbank().get(hi).is_none(),
        "piece destroyed by the combine"
    );
}
