//! S5 -- Value & type facts: the type system + type inference.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod bitfield;
pub mod coreaction_infertypes;
pub mod funcdata_resolveflow;
pub mod kuna_aggregatefields;
pub mod kuna_boolbyte; // (kuna) type a byte that is only ever a truth value as bool
pub mod kuna_calltargettype; // (kuna) an indirect call's target takes the function-pointer type the call states
pub mod kuna_charbyte; // (kuna) keep char for a byte loaded through a char pointer
pub mod kuna_charptr; // (kuna) commit a pointer used only on characters to char *
pub mod kuna_elemptr; // (kuna) a pointer used only as an array of one element type is T *
pub mod kuna_floatbits; // (kuna) a helper that only works on a float's bits keeps the float
pub mod kuna_floatglobals; // (kuna) a global the program only moves through float registers is a float
pub mod kuna_floatreg; // (kuna) a value returned in a float register is a float
pub mod kuna_libcfit; // (kuna) a libc aggregate vote declines where the caller reads past its end
pub mod kuna_ptrfromuse; // (kuna) type a dereferenced-only function input as a pointer
pub mod kuna_sitetypelock; // (kuna) per-call-site output type lock: a client-asserted call-result type that survives to the declaration
pub mod kuna_stackwordtypes;
pub mod kuna_structheadless; // (kuna) a closed function's parameter read only past its start is a record
pub mod kuna_structmerge; // (kuna) merge a synthesized record with the claims of a sibling reader
pub mod kuna_structsynth; // (kuna) synthesize a struct type from a pointer parameter's constant-offset dereferences
pub mod kuna_swiftmetaresult; // (kuna `swifttypes`) type a Swift metadata accessor call's result
pub mod kuna_valuewitness; // (kuna) a Swift value witness table load through metadata is typed
pub mod kuna_zextreturn; // (kuna) a return the convention zero-extends only when unsigned is unsigned
pub mod unionresolve_run; // (kuna) structured values kept whole until their fields can be named
