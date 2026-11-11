#[path = "c_printer_postprocess_decls_insert.rs"]
mod insert;
#[path = "c_printer_postprocess_decls_locals.rs"]
mod locals;
#[path = "c_printer_postprocess_decls_names.rs"]
mod names;
#[path = "c_printer_postprocess_decls_prune.rs"]
mod prune;
#[path = "c_printer_postprocess_decls_purity.rs"]
mod purity;

pub(in crate::c_printer) use insert::*;
pub(in crate::c_printer) use locals::*;
pub(in crate::c_printer) use names::*;
pub(in crate::c_printer) use prune::*;
pub(in crate::c_printer) use purity::*;
