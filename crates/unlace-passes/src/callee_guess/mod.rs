//! Prototype guesses for callees from the arguments their callers set up.
//!
//! When no prototype is known for a call target (no debug info, no library
//! signature, no analysable body), Hex-Rays guesses one from the call site
//! (`sub_E1F80`, `research/hexrays-type-recovery.md` S5 section 4): it
//! scans backwards from the call for written argument registers and stack
//! slots, and keeps the minimum stack size over every call to the same
//! callee. [`collect_call_sites`] reads one function's call sites from its
//! lifted IR; [`guess_from_call_sites`] combines the sites of one callee
//! from the whole image into a [`SignatureRank::CallSite`] prototype.
//!
//! [`SignatureRank::CallSite`]: unlace_ir::signature::SignatureRank::CallSite

mod guess;
mod site;

pub use guess::guess_from_call_sites;
pub use site::{CallSite, CallSiteArgs, collect_call_sites};
