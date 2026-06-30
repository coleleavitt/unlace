mod insert;
mod locals;
mod names;
mod prune;
mod purity;

pub(in crate::c_printer) use insert::*;
pub(in crate::c_printer) use locals::*;
pub(in crate::c_printer) use names::*;
pub(in crate::c_printer) use prune::*;
pub(in crate::c_printer) use purity::*;
