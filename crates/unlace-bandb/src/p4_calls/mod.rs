//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod callbacktype; // (unlace) a callback takes the prototype of the slot it is passed to
pub mod calleearitylive; // (unlace) extend a partial argument list when the callee body agrees
pub mod calleefilledarg; // (unlace) a register the callee loads itself is no slot, and no evidence about the slots after it
pub mod calleepreserves; // (unlace) the decoded callee's writes narrow the cspec killedbycall set
pub mod calleereadarg; // (unlace) keep a refused argument the callee's own body reads
pub mod calleeretpreserves; // (unlace) the decoded callee's silence answers for the call's return register
pub mod calleescratchbody; // (unlace) a scratch-only clobberer is still a body for calleepreserves
pub mod calleetrial; // (unlace) an active call-argument trial in a preferred-split register is what a single-function drive may bootstrap
pub mod callerreads; // (unlace) a function decompiled alone returns what its callers read
pub mod callpush; // (unlace) a call's own return-address push is part of the call
pub mod callresultuse; // (unlace) an unknown callee's result read by the next call or the RETURN is that call's result
pub mod callretpair; // (unlace) complete the two-register CALL output arm on any image, not just a Rust one
pub mod coreaction_protos;
pub mod funcdata_callsite;
pub mod helperrole;
pub mod hiddenretarg; // (unlace) a value left in the hidden-return register is no argument a callee cannot take
pub mod importvote; // (unlace) an undeclared import takes what its other call sites pass
pub mod reloadarg; // (unlace) a register reloaded from the caller's frame is re-scored once the frame is heritaged
pub mod retsysreg; // (unlace) a register set for a system register is not the high word of the return
pub mod vaarg; // (unlace) the x86-64 va_arg expansion as va_arg(ap, T)
pub mod varargformat;
pub mod varargforward; // (unlace) a declared parameter forwarded unchanged to a variadic call
pub mod vastart; // (unlace) the x86-64 va_start prologue as va_start(ap, last)
pub mod x87depth; // (unlace) x87 register-stack depth at each return
pub mod zerocallregs; // (unlace) a register a -fzero-call-used-regs epilogue clears is no part of the return value

pub mod x87emptyreturn;

pub mod callmechanisms;
pub mod registerslots;

#[cfg(test)]
mod condexeretuse_tests;
pub mod gottailcall; // (unlace) a one-destination computed jump to a function is a tail call when the call loses nothing
#[cfg(test)]
mod inputparamgap_tests;
pub mod qualifiedcall; // (unlace) a type-only declaration binds at a loader-proven MIPS GOT import call
#[cfg(test)]
mod stackaddrargtrial_tests;
#[cfg(test)]
mod stackarggap_tests;
