//! Tests moved out of `kuna_indexaliasguard` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::context::OpId;
use crate::context::VarnodeId;
use crate::funcdata::Funcdata;
use crate::kuna_indexaliasguard::*;
use std::rc::Rc;
use unlace_base::space::AddrSpace;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

#[test]
fn option_is_registered() {
    assert!(crate::kuna_option_dispatch::KUNA_OPTION_NAMES.contains(&OptionIndexAliasGuard::NAME));
}
