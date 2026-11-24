//! Tests moved out of `kuna_stackaddrargtrial` because they reach pass hooks a higher crate
//! provides (unlace-bandb, the crate above). They live in that crate.

#![allow(unused_imports, dead_code)]

/// The imports of `kuna_stackaddrargtrial` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::{context::VarnodeId, funcdata::Funcdata};
}
use crate::stackaddrargtrial::*;
use crate::{
    dtype::type_class,
    fspec::{ParamActive, ParamEntry, ParamListKind, ParamListStandard},
};
use module_scope::*;
use std::rc::Rc;
use unlace_base::{
    address::Address,
    space::{AddrSpace, AddrSpaceManager, spacetype},
};

#[test]
fn only_a_proven_register_trial_survives_the_prefix_gap() {
    for (proof, dead, expected) in [(false, false, 0), (true, false, 4), (true, true, 0)] {
        let mgr = AddrSpaceManager::new();
        let reg = Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            false,
            4,
            1,
            3,
            0,
            0,
            0,
        ));
        let mut model = ParamListStandard::new(ParamListKind::Standard);
        for group in 0..4 {
            let e = ParamEntry::seed(
                group,
                type_class::TYPECLASS_GENERAL,
                Rc::clone(&reg),
                group as u64 * 4,
                4,
                1,
                0,
                0,
                true,
                false,
                model.get_entry(),
                &mgr,
            )
            .unwrap();
            model.push_entry(e);
        }
        model.finish_decode();
        let mut active = ParamActive::new(true);
        active.register_trial(&Address::new(reg, 12), 4);
        let trial = active.get_trial_mut(0);
        trial.mark_active();
        if proof {
            trial.set_stack_address();
        }
        if dead {
            trial.mark_no_use();
        }
        model.fillin_map(&mut active, &mgr).unwrap();
        assert_eq!(
            (0..active.get_num_trials())
                .filter(|&i| active.get_trial(i).is_used())
                .count(),
            expected
        );
    }
}
