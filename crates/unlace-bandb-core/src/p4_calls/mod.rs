//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod argclobber; // (kuna) drop a trailing register argument a previous call's clobber put there
pub mod armfloatargs; // (kuna) an ARM hard-float function takes its scalar VFP inputs at their full widths
pub mod armfloatreturn; // (kuna) an ARM hard-float function returns and takes whole VFP values
pub mod bejoin; // (kuna) a big-endian pair joins its halves in the ABI's order when its low word is returned on purpose
pub mod bejoinpass;
pub mod calleearitybody; // (kuna) recover a lone call's argument list from the callee's own body
pub mod calleearitycut; // (kuna) accept that run when the callee decode is cut before a dead boundary
pub mod calleearityscratch; // (kuna) let a caller-scratch register bound that cut run
pub mod calleedeadarg;
pub mod calleereginputs; // (kuna) an x86-32 callee's register inputs choose its model
pub mod calleevote; // (kuna) a callee parameter takes the type every caller passes
pub mod callerargs; // (kuna) a 32-bit ARM parameter every caller passes narrow is declared that narrow
pub mod callerptr; // (kuna) a parameter every caller passes a pointer is a pointer
pub mod callrettype; // (kuna) a call returns the type its callee's recovery gave it
pub mod callwide;
pub mod elfmaindecl;
pub mod entryreads; // (kuna) the incoming registers a function's own body reads
pub mod hfareturn; // (kuna) a float result in a higher vector register implies the lower ones
pub mod inputhints; // (kuna) unlocked names and types for recovered inputs
pub mod mixedtailret; // (kuna) a value returned beside a claimed tail-call result is returned too
pub mod narrowargs; // (kuna) a parameter whose body reads only its low bytes is declared that narrow
pub mod narrowret; // (kuna) a call reads the narrow value its callee returns zero-extended
pub mod passthrough; // (kuna) a register forwarded untouched to a callee that reads it is a parameter
pub mod protoorder; // (kuna) a callee's recovered prototype, parked for the callers decompiled after it
pub mod retcallhalf; // (kuna) a call's result handed back beside a computed second return register
pub mod returnuncomputed;
pub mod rustabi; // (kuna) the rustc two-register return: keep the pair, connect it at the call
pub mod slotargs; // (kuna) a call through an import slot takes the declared parameters its caller's writes back
pub mod swiftinfer; // (kuna) the Swift convention of functions the metadata did not bind
pub mod typedcallabi; // (kuna) a declared function-pointer prototype only under the image's float convention
pub mod vfpvariadic; // (kuna) a declared ARM hard-float variadic function returns under the base standard
pub mod voidret; // (kuna) a function whose result a caller reads returns it // (kuna) an executable's own main declared from its unlocked analysis
