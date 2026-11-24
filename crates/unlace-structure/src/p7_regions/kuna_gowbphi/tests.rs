// Tests for `kuna_gowbphi` (included into `mod tests` in kuna_gowbphi.rs).
//
// Covered here: the action is inert (returns 0) with the gate off, on a
// function with no calls, and under `always` with no matching shape. The
// matcher's refusal ladder and the fold itself are pinned end-to-end by
// `tests/stages/kuna-gowbphi.toml` (hand-assembled multi-op shared-arm
// diamond) and by the store-preservation oracle in the unlace-console
// `verify_go_writebarrier` family over real Go builds.

use super::*;

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

use crate::action::ActionContext;
use crate::context::ArchContext;
use crate::kuna_gowritebarrier::GoWriteBarrierMode;
use crate::kuna_sourcelang::SourceLang;

fn build_fd(mode: GoWriteBarrierMode, lang: SourceLang) -> Funcdata {
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
    let mut ctx = ArchContext::new(m);
    ctx.kuna_options.set(mode);
    ctx.source_lang = lang;
    let glb = Rc::new(ctx);
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x1000_0000, 0x40).unwrap()
}

#[test]
fn apply_is_inert_without_gate_calls_or_shape() {
    let mut ctx = ActionContext::default();
    // Gate off.
    let mut fd = build_fd(GoWriteBarrierMode::Off, SourceLang::Go);
    let mut a = ActionGoWriteBarrierPhi::new(false, "returnsplit");
    assert_eq!(a.apply(&mut fd, &mut ctx), 0);
    // Auto on a non-Go image.
    let mut fd = build_fd(GoWriteBarrierMode::Auto, SourceLang::Unknown);
    assert_eq!(a.apply(&mut fd, &mut ctx), 0);
    // Always, but no calls / no shape.
    let mut fd = build_fd(GoWriteBarrierMode::Always, SourceLang::Unknown);
    assert_eq!(a.apply(&mut fd, &mut ctx), 0);
    assert!(match_guarded_cold_call_phi(&fd, &is_write_barrier_name).is_none());
}
