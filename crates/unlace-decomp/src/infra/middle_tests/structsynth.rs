//! Tests moved out of `unlace_structsynth` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::action::Action;
use crate::action::ActionBase;
use crate::action::ActionContext;
use crate::action::ActionGroupList;
use crate::action::ApplyResult;
use crate::context::VarnodeId;
use crate::dtype::Datatype;
use crate::dtype::DatatypeKind;
use crate::dtype::TypeFactory;
use crate::dtype::TypeField;
use crate::dtype::type_metatype;
use crate::funcdata::Funcdata;
use crate::structsynth::*;
use std::collections::BTreeMap;
use std::rc::Rc;
use unlace_base::error::UnlaceError;
use unlace_base::error::UnlaceResult;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_base::types::intb;
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode;

/// The plateau flag `structsynth` gates on has to latch on a pass that changed
/// nothing even when it is the FIRST pass: a lattice that never needed to move
/// is still a decided one, and gating on "at least one pass changed something"
/// would decline such a function forever.
#[test]
fn the_plateau_latches_when_the_first_pass_changes_nothing() {
    use std::rc::Rc;
    use unlace_base::address::Address;
    use unlace_base::space::{
        AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
    };

    use crate::action::ActionContext;
    use crate::context::ArchContext;
    use crate::coreaction_render::ActionInferTypes;

    let mut manage = AddrSpaceManager::new();
    manage.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manage
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    manage
        .insert_space(Rc::new(AddrSpace::new(
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
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let entry = Address::new(ram, 0x1000);
    let mut fd = Funcdata::new("settled", "settled", glb, entry, 0x1000_0000, 0x40).unwrap();
    fd.set_type_recovery(true);
    assert!(fd.start_type_recovery());
    assert!(!fd.unlace_infertypes_settled());

    // A function with nothing to propagate: the first pass changes nothing.
    let mut infer = ActionInferTypes::boxed("typerecovery");
    let mut ctx = ActionContext::new();
    infer.apply(&mut fd, &mut ctx);
    assert!(fd.unlace_infertypes_settled());
}
