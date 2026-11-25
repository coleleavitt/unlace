// Shared integration-test executable. Process-sensitive tests stay separate.
#[path = "boolean_complement.rs"]
mod boolean_complement;

#[path = "golden_float.rs"]
mod golden_float;

#[path = "golden_opbehavior.rs"]
mod golden_opbehavior;

#[path = "testfloatemu.rs"]
mod testfloatemu;

#[path = "testmultiprec.rs"]
mod testmultiprec;
