#[path = "c_printer_trace_gate.rs"]
mod gate;
#[path = "c_printer_trace_names.rs"]
mod names;
#[path = "c_printer_trace_pipeline.rs"]
mod pipeline;
#[path = "c_printer_trace_stack.rs"]
mod stack;

pub(super) use gate::*;
pub(super) use names::*;
pub(super) use pipeline::*;
pub(super) use stack::*;
