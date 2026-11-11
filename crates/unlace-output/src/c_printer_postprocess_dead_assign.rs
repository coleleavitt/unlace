#[path = "c_printer_postprocess_dead_assign_driver.rs"]
mod driver;
#[path = "c_printer_postprocess_dead_assign_liveness.rs"]
mod liveness;
#[path = "c_printer_postprocess_dead_assign_pass.rs"]
mod pass;
#[path = "c_printer_postprocess_dead_assign_segments.rs"]
mod segments;
#[path = "c_printer_postprocess_dead_assign_trace.rs"]
mod trace;

pub(in crate::c_printer) use driver::*;
pub(in crate::c_printer) use liveness::*;
pub(in crate::c_printer) use pass::*;
pub(in crate::c_printer) use segments::*;
pub(in crate::c_printer) use trace::*;
