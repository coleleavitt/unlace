//! S5 -- Value & type facts: the type system + type inference.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod aggregatefields;
pub mod bitfield;
pub mod boolbyte; // (unlace) type a byte that is only ever a truth value as bool
pub mod charbyte; // (unlace) keep char for a byte loaded through a char pointer
pub mod charptr; // (unlace) commit a pointer used only on characters to char *
pub mod coreaction_infertypes;
pub mod elemptr; // (unlace) a pointer used only as an array of one element type is T *
pub mod floatbits; // (unlace) a helper that only works on a float's bits keeps the float
pub mod floatglobals; // (unlace) a global the program only moves through float registers is a float
pub mod floatreg; // (unlace) a value returned in a float register is a float
pub mod funcdata_resolveflow;
pub mod libcfit; // (unlace) a libc aggregate vote declines where the caller reads past its end
pub mod ptrfromuse; // (unlace) type a dereferenced-only function input as a pointer
pub mod stackwordtypes;
pub mod structheadless; // (unlace) a closed function's parameter read only past its start is a record
pub mod structmerge; // (unlace) merge a synthesized record with the claims of a sibling reader
pub mod structsynth; // (unlace) synthesize a struct type from a pointer parameter's constant-offset dereferences
pub mod unionresolve_run;
pub mod valuewitness; // (unlace) a Swift value witness table load through metadata is typed
pub mod vtblbase; // (unlace) a pointer a C_vtbl * is stored through is a C *
pub mod zextreturn; // (unlace) a return the convention zero-extends only when unsigned is unsigned // (unlace) structured values kept whole until their fields can be named
