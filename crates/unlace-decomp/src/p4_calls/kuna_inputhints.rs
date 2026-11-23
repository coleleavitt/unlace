//! (kuna `swiftcall`) Names and types for the inputs a function's own
//! analysis recovers, applied without locking them.
//!
//! A prototype that names one parameter must name them all: a locked input
//! list fixes the arity, so a convention's implicit argument (Swift's
//! `self` in the `swiftself` register) cannot be declared on a function
//! whose other parameters are unknown. A hint names and types one input
//! storage instead. Parameter recovery runs as it always does; when it
//! finds the body reading the hinted storage at exactly the hinted size,
//! type inference gives that input the hinted type, when the hint has one
//! ([`input_type`], the unlocked seam `elfmain` and `calleevote` vote
//! through), and the recovered parameter takes the hinted name
//! ([`param_name`]). A body that never reads the storage declares no such
//! parameter, as before.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::types::int4;

use crate::context::VarnodeId;
use crate::dtype::Datatype;
use crate::funcdata::Funcdata;

/// One input storage's name, and its type when it is known.
#[derive(Debug, Clone)]
pub struct InputHint {
    pub addr: Address,
    pub size: int4,
    pub name: String,
    pub ct: Option<Rc<Datatype>>,
}

fn hint_at<'a>(data: &'a Funcdata, addr: &Address, size: int4) -> Option<&'a InputHint> {
    data.kuna_input_hints()?
        .iter()
        .find(|h| &h.addr == addr && h.size == size)
}

/// The hinted type of the function input `vn`.
pub fn input_type(data: &Funcdata, vn: VarnodeId) -> Option<Rc<Datatype>> {
    let v = data.vbank().get(vn)?;
    if !v.is_input() {
        return None;
    }
    hint_at(data, v.get_addr(), v.get_size()).and_then(|h| h.ct.clone())
}

/// Does the function input `vn` carry its hinted type? Propagation and
/// record synthesis leave it as it is.
pub fn took_hint_type(data: &Funcdata, vn: VarnodeId, ct: &Datatype) -> bool {
    let Some(v) = data.vbank().get(vn) else {
        return false;
    };
    v.is_input()
        && hint_at(data, v.get_addr(), v.get_size())
            .and_then(|h| h.ct.as_ref())
            .is_some_and(|t| crate::kuna_calleevote::same_type(t, ct))
}

/// The hinted name of the recovered parameter in `addr`/`size`.
pub fn param_name(data: &Funcdata, addr: &Address, size: int4) -> Option<String> {
    hint_at(data, addr, size).map(|h| h.name.clone())
}

/// (kuna `swiftcall`) Names and types for the inputs this function's analysis recovers; kept
/// across `Funcdata::clear`.
#[derive(Default)]
struct HintsSlot(Option<std::rc::Rc<Vec<crate::kuna_inputhints::InputHint>>>);
crate::kuna_func_state!(HintsSlot, keep_across_clear: true);

/// The `kuna_inputhints` pass's methods on [`Funcdata`], as an extension trait so the type can
/// live in a lower crate.
pub trait FuncdataInputhintsExt {
    /// (kuna `swiftcall`) Seed the input hints.
    fn kuna_set_input_hints(
        &mut self,
        hints: Option<std::rc::Rc<Vec<crate::kuna_inputhints::InputHint>>>,
    );
    /// (kuna `swiftcall`) The input hints of this function.
    fn kuna_input_hints(&self) -> Option<&[crate::kuna_inputhints::InputHint]>;
}

impl FuncdataInputhintsExt for crate::funcdata::Funcdata {
    /// (kuna `swiftcall`) Seed the input hints.
    fn kuna_set_input_hints(
        &mut self,
        hints: Option<std::rc::Rc<Vec<crate::kuna_inputhints::InputHint>>>,
    ) {
        self.kuna_state_mut::<HintsSlot>().0 = hints;
    }
    /// (kuna `swiftcall`) The input hints of this function.
    fn kuna_input_hints(&self) -> Option<&[crate::kuna_inputhints::InputHint]> {
        self.kuna_state::<HintsSlot>()
            .0
            .as_deref()
            .map(Vec::as_slice)
    }
}

/// (kuna `swiftcall`) The input hints the IOKit pass gave each method's `this`, by entry; an
/// [`ArchTable`](crate::kuna_archstate::ArchTable) on the architecture.
#[derive(Default)]
pub struct ThisHints(
    pub std::collections::BTreeMap<unlace_base::address::Address, std::rc::Rc<Vec<InputHint>>>,
);
crate::kuna_arch_table!(ThisHints);

/// The input hints the loader stated for each function, by entry; an
/// [`ArchTable`](crate::kuna_archstate::ArchTable) on the architecture.
#[derive(Default)]
pub struct LoaderHints(
    pub std::collections::BTreeMap<unlace_base::address::Address, std::rc::Rc<Vec<InputHint>>>,
);
crate::kuna_arch_table!(LoaderHints);

/// Did a pass give any method's `this` input hints?
fn has_this_hints(tables: &crate::kuna_archstate::ArchTables) -> bool {
    !tables.get::<ThisHints>().0.is_empty()
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.inputhints_has_this_hints = Some(has_this_hints);
}
