//! S5 -- Value & type facts: the type system + type inference.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod calltargettype; // (kuna) an indirect call's target takes the function-pointer type the call states
pub mod sitetypelock; // (kuna) per-call-site output type lock: a client-asserted call-result type that survives to the declaration
pub mod swiftmetaresult; // (kuna `swifttypes`) type a Swift metadata accessor call's result
