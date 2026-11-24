//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod kuna_cachereturn; // (kuna) a return register holding one memory cell's value on every path is the return value
pub mod kuna_calleearity; // (kuna) one callee, one argument list across its call sites
pub mod kuna_calleearityfwd; // (kuna) reconcile against a sibling call that finalizes later
pub mod kuna_calleenoreturn;
pub mod kuna_calleeprotostack; // (kuna) a declared callee's prototype states its stack contract
pub mod kuna_calleepurge; // (kuna) an x86-32 callee's stack purge read off its RET
pub mod kuna_calleeretpurge; // (kuna) a direct callee's `ret imm16` is its extrapop
pub mod kuna_calleestackargs; // (kuna `calleeargs`) the stack-argument bytes an x86-32 callee reads
pub mod kuna_callsitestackargs;
pub mod kuna_condexeret; // (kuna) a return trial failed only on a path ActionConditionalExe removes gets one more pass
pub mod kuna_condexeretuse; // (kuna) a use of a returned value on the branch a re-tested condition rules out does not compete
pub mod kuna_customreturn;
pub mod kuna_darwinvarargs; // (kuna) a callee running Apple's va_start is variadic at its call sites
pub mod kuna_dfunaffected;
pub mod kuna_directalias; // (kuna) a direct access at a known stack offset aliases only the bytes it touches
pub mod kuna_exclusivearguse; // (kuna) a dereference on the other arm of a branch does not compete with a call on this one
pub mod kuna_exclusivecallret; // (kuna) a call and a return on mutually exclusive arms do not compete
pub mod kuna_floatregister;
pub mod kuna_formattail; // (kuna) a resolved format call keeps an open tail through trial scoring
pub mod kuna_formatwitness; // (kuna) equal constant formats can witness a partial call's arity
pub mod kuna_gobool; // (kuna) Go boolean-return stale-high narrowing (docs/multilang.md W4)
pub mod kuna_gochanrecv;
pub mod kuna_gotimportproto;
pub mod kuna_inputparamgap; // (kuna) an unused-argument-register run must not veto a later live-in
pub mod kuna_inputstorage;
pub mod kuna_joincalloutput;
pub mod kuna_langabi; // (kuna) the ABI seam: per-language `extern` rendering
pub mod kuna_msvcbyval; // (kuna) an MSVC __cdecl import's by-value class argument sized at the call site
pub mod kuna_narrowext; // (kuna) a narrow integer argument or return value is extended as the ABI states
pub mod kuna_noreturnretuse;
pub mod kuna_pltlocal; // (kuna) a call through a PLT stub bound to the image's own definition calls that definition
pub mod kuna_protomerge;
pub mod kuna_retinputhalf;
pub mod kuna_retpushedhalf;
pub mod kuna_returnpair;
pub mod kuna_sharedpush; // (kuna) a push above a branch is the argument of the call on each arm
pub mod kuna_spillargtrial;
pub mod kuna_spsolve; // (kuna) an x86-32 function's stack-pointer deltas solved for the calls that pop or do not return
pub mod kuna_stackaddrargtrial;
pub mod kuna_stackarggap; // (kuna) an unwritten argument register ends a call site's argument list
pub mod kuna_stackcookie; // (kuna) the frame cookie MSVC stores on the stack is no argument
pub mod kuna_stackparamalign;
pub mod kuna_swiftcall; // (kuna) Swift calls that may throw, and stale swiftself arguments
pub mod kuna_swifterror; // (kuna) the Swift error register named after a throwing call and before a throwing return
pub mod kuna_vaargconst; // (kuna) a constant-offset SysV va_arg expansion as va_arg(ap, T)
pub mod kuna_varargretreg; // (kuna) a variadic call's argument in the register its value returns in
pub mod kuna_varargsave; // (kuna) the System V register save area of a variadic function
pub mod kuna_varargsharedfloat; // (kuna) a counted variadic double that also feeds an earlier argument
pub mod kuna_varargstackargs; // (kuna) the variadic call's stack tail is its own fillinMap section
pub mod kuna_varargtail; // (kuna) a recovered parameter that only feeds a variadic tail is not one a caller may gain
pub mod kuna_varargtransfer;
pub mod kuna_vectorabi; // (kuna `vectorabi`) SysV x86-64 vector arguments and returns in xmm/ymm/zmm
pub mod kuna_x87free;
pub mod kuna_x87intrinsic; // (kuna) the MSVC x87 one-operand intrinsics' ST0 model
pub mod kuna_x87return;
pub mod kuna_zerofillreturn; // (kuna) the zero a narrow write leaves in a returned q register's upper half is no part of the value
pub mod kuna_zeroidiomuse; // (kuna) a self-cancelling `xor r,r` is not a competing use of the value it eats
