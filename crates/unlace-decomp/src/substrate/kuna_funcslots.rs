//! Per-function pass state that core code reads, kept in the IR band so `Funcdata` can name its
//! accessors: the `switchextent` jump tables (read by `jumptable` and `funcdata_block`) and the
//! `msvcbyval` sites (read by `heritage`). The passes that fill them re-export the types.

use std::collections::BTreeMap;

use crate::context::OpId;

/// The jump tables of one function's extent.
#[derive(Default)]
pub struct ExtentTables {
    /// The table of every computed jump the fold proves reads one, sorted.
    pub tables: Vec<u64>,
    /// The tables indexed by a Swift enum's case, with the enum's case count:
    /// `swift_getEnumCaseMultiPayload` returns a case of the enum whose
    /// metadata it is given, so such a table has exactly that many entries.
    pub cases: BTreeMap<u64, u64>,
}

/// One call whose by-value slot was sized: the call that builds the argument in
/// that slot, if one was found, and whether the slot's address was formed.
#[derive(Clone, Debug)]
pub struct ByvalSite {
    pub call: OpId,
    pub param: usize,
    pub builder: Option<OpId>,
    pub mapped: bool,
}

/// (kuna `switchextent`) The jump tables the function's extent dispatches through, and those a Swift enum's case indexes, once a flow with a computed jump decoded it; kept across `Funcdata::clear`.
#[derive(Default)]
struct ExtentSlot(Option<std::rc::Rc<ExtentTables>>);
crate::kuna_func_state!(ExtentSlot, keep_across_clear: true);

impl crate::funcdata::Funcdata {
    pub fn kuna_extent_tables(&self) -> &Option<std::rc::Rc<ExtentTables>> {
        &self.kuna_state::<ExtentSlot>().0
    }

    pub fn kuna_extent_tables_mut(&mut self) -> &mut Option<std::rc::Rc<ExtentTables>> {
        &mut self.kuna_state_mut::<ExtentSlot>().0
    }
}

/// (kuna `msvcbyval`) The calls whose by-value slot `ActionDefaultParams` sized, with the
/// constructor call that builds each; reset by `Funcdata::clear`.
#[derive(Default)]
struct SitesSlot(Vec<ByvalSite>);
crate::kuna_func_state!(SitesSlot, keep_across_clear: false);

impl crate::funcdata::Funcdata {
    /// (kuna `msvcbyval`) Record the calls whose by-value slot was sized.
    pub fn kuna_set_msvc_byval_sites(&mut self, sites: Vec<ByvalSite>) {
        self.kuna_state_mut::<SitesSlot>().0 = sites;
    }

    /// (kuna `msvcbyval`) The calls whose by-value slot was sized.
    pub fn kuna_msvc_byval_sites(&self) -> &[ByvalSite] {
        &self.kuna_state::<SitesSlot>().0
    }
}
