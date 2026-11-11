#[path = "c_printer_postprocess_combine.rs"]
mod combine;
#[path = "c_printer_postprocess_dead_assign.rs"]
mod dead_assign;
#[path = "c_printer_postprocess_decls.rs"]
mod decls;
#[path = "c_printer_postprocess_idents.rs"]
mod idents;
#[path = "c_printer_postprocess_idioms.rs"]
mod idioms;
#[path = "c_printer_postprocess_labels.rs"]
mod labels;
#[path = "c_printer_postprocess_lvar_names.rs"]
mod lvar_names;
#[path = "c_printer_postprocess_repair.rs"]
mod repair;

pub(in crate::c_printer) use combine::{combine_expressions, remove_self_assignments};
pub(in crate::c_printer) use dead_assign::*;
pub(in crate::c_printer) use decls::*;
pub(in crate::c_printer) use idents::*;
pub(in crate::c_printer) use idioms::*;
pub(in crate::c_printer) use labels::*;
pub(in crate::c_printer) use lvar_names::*;
pub(in crate::c_printer) use repair::*;
