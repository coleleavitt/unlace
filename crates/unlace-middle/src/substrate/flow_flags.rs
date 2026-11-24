//! Boolean options for flow following (C++ anonymous `enum` in `class FlowInfo`,
//! `flow.hh:60-74`).  Verbatim transcription of the bit values.

#![allow(non_upper_case_globals)]
use unlace_base::types::uint4;

/// Ignore/truncate flow into addresses out of the specified range
pub const ignore_outofbounds: uint4 = 1;
/// Treat unimplemented instructions as a NOP (no operation)
pub const ignore_unimplemented: uint4 = 2;
/// Throw an exception for flow into addresses out of the specified range
pub const error_outofbounds: uint4 = 4;
/// Throw an exception for flow into unimplemented instructions
pub const error_unimplemented: uint4 = 8;
/// Throw an exception for flow into previously encountered data at a different \e cut
pub const error_reinterpreted: uint4 = 0x10;
/// Throw an exception if too many instructions are encountered
pub const error_toomanyinstructions: uint4 = 0x20;
/// Indicate we have encountered unimplemented instructions
pub const unimplemented_present: uint4 = 0x40;
/// Indicate we have encountered flow into unaccessible data
pub const baddata_present: uint4 = 0x80;
/// Indicate we have encountered flow out of the specified range
pub const outofbounds_present: uint4 = 0x100;
/// Indicate we have encountered reinterpreted data
pub const reinterpreted_present: uint4 = 0x200;
/// Indicate the maximum instruction threshold was reached
pub const toomanyinstructions_present: uint4 = 0x400;
/// (unlace) Indicate flow reached a branch target with no mapped bytes
pub const unmappedtarget_present: uint4 = 0x800;
/// Indicate a CALL was converted to a BRANCH and some code may be unreachable
pub const possible_unreachable: uint4 = 0x1000;
/// Indicate flow is being generated to in-line (a function)
pub const flow_forinline: uint4 = 0x2000;
/// Indicate that any jump table recovery should record the table structure
pub const record_jumploads: uint4 = 0x4000;
