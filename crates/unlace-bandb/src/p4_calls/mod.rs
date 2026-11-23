//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod coreaction_protos;
pub mod funcdata_callsite;
pub mod kuna_argclobber; // (kuna) drop a trailing register argument a previous call's clobber put there
pub mod kuna_armfloatargs; // (kuna) an ARM hard-float function takes its scalar VFP inputs at their full widths
pub mod kuna_armfloatreturn; // (kuna) an ARM hard-float function returns and takes whole VFP values
pub mod kuna_bejoin; // (kuna) a big-endian pair joins its halves in the ABI's order when its low word is returned on purpose
pub mod kuna_bejoinpass;
pub mod kuna_callbacktype; // (kuna) a callback takes the prototype of the slot it is passed to
pub mod kuna_calleearitybody; // (kuna) recover a lone call's argument list from the callee's own body
pub mod kuna_calleearitycut; // (kuna) accept that run when the callee decode is cut before a dead boundary
pub mod kuna_calleearitylive; // (kuna) extend a partial argument list when the callee body agrees
pub mod kuna_calleearityscratch; // (kuna) let a caller-scratch register bound that cut run
pub mod kuna_calleedeadarg;
pub mod kuna_calleefilledarg; // (kuna) a register the callee loads itself is no slot, and no evidence about the slots after it
pub mod kuna_calleepreserves; // (kuna) the decoded callee's writes narrow the cspec killedbycall set
pub mod kuna_calleereadarg; // (kuna) keep a refused argument the callee's own body reads
pub mod kuna_calleereginputs; // (kuna) an x86-32 callee's register inputs choose its model
pub mod kuna_calleeretpreserves; // (kuna) the decoded callee's silence answers for the call's return register
pub mod kuna_calleescratchbody; // (kuna) a scratch-only clobberer is still a body for calleepreserves
pub mod kuna_calleetrial; // (kuna) an active call-argument trial in a preferred-split register is what a single-function drive may bootstrap
pub mod kuna_calleevote; // (kuna) a callee parameter takes the type every caller passes
pub mod kuna_callerargs; // (kuna) a 32-bit ARM parameter every caller passes narrow is declared that narrow
pub mod kuna_callerptr; // (kuna) a parameter every caller passes a pointer is a pointer
pub mod kuna_callerreads; // (kuna) a function decompiled alone returns what its callers read
pub mod kuna_callpush; // (kuna) a call's own return-address push is part of the call
pub mod kuna_callresultuse; // (kuna) an unknown callee's result read by the next call or the RETURN is that call's result
pub mod kuna_callretpair; // (kuna) complete the two-register CALL output arm on any image, not just a Rust one
pub mod kuna_callrettype; // (kuna) a call returns the type its callee's recovery gave it
pub mod kuna_callwide;
pub mod kuna_entryreads; // (kuna) the incoming registers a function's own body reads
pub mod kuna_helperrole;
pub mod kuna_hiddenretarg; // (kuna) a value left in the hidden-return register is no argument a callee cannot take
pub mod kuna_importvote; // (kuna) an undeclared import takes what its other call sites pass
pub mod kuna_mixedtailret; // (kuna) a value returned beside a claimed tail-call result is returned too
pub mod kuna_narrowargs; // (kuna) a parameter whose body reads only its low bytes is declared that narrow
pub mod kuna_narrowret; // (kuna) a call reads the narrow value its callee returns zero-extended
pub mod kuna_passthrough; // (kuna) a register forwarded untouched to a callee that reads it is a parameter
pub mod kuna_protoorder; // (kuna) a callee's recovered prototype, parked for the callers decompiled after it
pub mod kuna_reloadarg; // (kuna) a register reloaded from the caller's frame is re-scored once the frame is heritaged
pub mod kuna_retcallhalf; // (kuna) a call's result handed back beside a computed second return register
pub mod kuna_retsysreg; // (kuna) a register set for a system register is not the high word of the return
pub mod kuna_returnuncomputed;
pub mod kuna_rustabi; // (kuna) the rustc two-register return: keep the pair, connect it at the call
pub mod kuna_slotargs; // (kuna) a call through an import slot takes the declared parameters its caller's writes back
pub mod kuna_typedcallabi; // (kuna) a declared function-pointer prototype only under the image's float convention
pub mod kuna_vaarg; // (kuna) the x86-64 va_arg expansion as va_arg(ap, T)
pub mod kuna_varargformat;
pub mod kuna_varargforward; // (kuna) a declared parameter forwarded unchanged to a variadic call
pub mod kuna_vastart; // (kuna) the x86-64 va_start prologue as va_start(ap, last)
pub mod kuna_vfpvariadic; // (kuna) a declared ARM hard-float variadic function returns under the base standard
pub mod kuna_voidret; // (kuna) a function whose result a caller reads returns it
pub mod kuna_x87depth; // (kuna) x87 register-stack depth at each return
pub mod kuna_zerocallregs; // (kuna) a register a -fzero-call-used-regs epilogue clears is no part of the return value

pub mod kuna_inputhints; // (kuna) unlocked names and types for recovered inputs
pub mod kuna_swiftinfer; // (kuna) the Swift convention of functions the metadata did not bind
pub mod kuna_x87emptyreturn;

pub mod kuna_callmechanisms;
pub mod kuna_elfmaindecl; // (kuna) an executable's own main declared from its unlocked analysis
pub mod kuna_registerslots;

#[cfg(test)]
mod kuna_condexeretuse_tests;
pub mod kuna_gottailcall; // (kuna) a one-destination computed jump to a function is a tail call when the call loses nothing
#[cfg(test)]
mod kuna_inputparamgap_tests;
pub mod kuna_qualifiedcall; // (kuna) a type-only declaration binds at a loader-proven MIPS GOT import call
#[cfg(test)]
mod kuna_stackaddrargtrial_tests;
#[cfg(test)]
mod kuna_stackarggap_tests;
