//! Tests moved out of `unlace_indirectonly` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::context::ArchContext;
use crate::context::BlockId;
use crate::context::OpId;
use crate::context::VarnodeId;
use crate::funcdata::Funcdata;
use crate::indirectonly::OptionIndirectOnly;
use crate::indirectonly::check_indirect_use;
use crate::indirectonly::mark_indirect_only;
use crate::op::pcodeop_flags;
use crate::option_dispatch::UNLACE_OPTION_NAMES;
use crate::options::on_or_off;
use crate::varnode::varnode_flags;
use std::collections::HashSet;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::SpacebaseSpace;
use unlace_base::space::UniqueSpace;
use unlace_base::space::VarnodeStorage;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

#[test]
fn option_name_is_registered_and_parses() {
    assert_eq!(OptionIndirectOnly::NAME, "indirectonly");
    assert!(UNLACE_OPTION_NAMES.contains(&OptionIndirectOnly::NAME));
    let (v, msg) = OptionIndirectOnly.apply("on").unwrap();
    assert!(v);
    assert!(msg.contains("on"));
    let (v, msg) = OptionIndirectOnly.apply("off").unwrap();
    assert!(!v);
    assert!(msg.contains("off"));
    assert!(OptionIndirectOnly.apply("maybe").is_err());
}
