//! S4 -- Call & prototype model.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod cachereturn; // (kuna) a return register holding one memory cell's value on every path is the return value
pub mod calleearity; // (kuna) one callee, one argument list across its call sites
pub mod calleearityfwd; // (kuna) reconcile against a sibling call that finalizes later
pub mod calleenoreturn;
pub mod calleeprotostack; // (kuna) a declared callee's prototype states its stack contract
pub mod calleepurge; // (kuna) an x86-32 callee's stack purge read off its RET
pub mod calleeretpurge; // (kuna) a direct callee's `ret imm16` is its extrapop
pub mod calleestackargs; // (kuna `calleeargs`) the stack-argument bytes an x86-32 callee reads
pub mod callsitestackargs;
pub mod condexeret; // (kuna) a return trial failed only on a path ActionConditionalExe removes gets one more pass
pub mod condexeretuse; // (kuna) a use of a returned value on the branch a re-tested condition rules out does not compete
pub mod customreturn;
pub mod darwinvarargs; // (kuna) a callee running Apple's va_start is variadic at its call sites
pub mod dfunaffected;
pub mod directalias; // (kuna) a direct access at a known stack offset aliases only the bytes it touches
pub mod exclusivearguse; // (kuna) a dereference on the other arm of a branch does not compete with a call on this one
pub mod exclusivecallret; // (kuna) a call and a return on mutually exclusive arms do not compete
pub mod floatregister;
pub mod formattail; // (kuna) a resolved format call keeps an open tail through trial scoring
pub mod formatwitness; // (kuna) equal constant formats can witness a partial call's arity
pub mod gobool; // (kuna) Go boolean-return stale-high narrowing (docs/multilang.md W4)
pub mod gochanrecv;
pub mod gotimportproto;
pub mod inputparamgap; // (kuna) an unused-argument-register run must not veto a later live-in
pub mod inputstorage;
pub mod joincalloutput;
pub mod langabi; // (kuna) the ABI seam: per-language `extern` rendering
pub mod msvcbyval; // (kuna) an MSVC __cdecl import's by-value class argument sized at the call site
pub mod narrowext; // (kuna) a narrow integer argument or return value is extended as the ABI states
pub mod noreturnretuse;
pub mod pltlocal; // (kuna) a call through a PLT stub bound to the image's own definition calls that definition
pub mod protomerge;
pub mod retinputhalf;
pub mod retpushedhalf;
pub mod returnpair;
pub mod sharedpush; // (kuna) a push above a branch is the argument of the call on each arm
pub mod spillargtrial;
pub mod spsolve; // (kuna) an x86-32 function's stack-pointer deltas solved for the calls that pop or do not return
pub mod stackaddrargtrial;
pub mod stackarggap; // (kuna) an unwritten argument register ends a call site's argument list
pub mod stackcookie; // (kuna) the frame cookie MSVC stores on the stack is no argument
pub mod stackparamalign;
pub mod swiftcall; // (kuna) Swift calls that may throw, and stale swiftself arguments
pub mod swifterror; // (kuna) the Swift error register named after a throwing call and before a throwing return
pub mod vaargconst; // (kuna) a constant-offset SysV va_arg expansion as va_arg(ap, T)
pub mod varargretreg; // (kuna) a variadic call's argument in the register its value returns in
pub mod varargsave; // (kuna) the System V register save area of a variadic function
pub mod varargsharedfloat; // (kuna) a counted variadic double that also feeds an earlier argument
pub mod varargstackargs; // (kuna) the variadic call's stack tail is its own fillinMap section
pub mod varargtail; // (kuna) a recovered parameter that only feeds a variadic tail is not one a caller may gain
pub mod varargtransfer;
pub mod vectorabi; // (kuna `vectorabi`) SysV x86-64 vector arguments and returns in xmm/ymm/zmm
pub mod x87free;
pub mod x87intrinsic; // (kuna) the MSVC x87 one-operand intrinsics' ST0 model
pub mod x87return;
pub mod zerofillreturn; // (kuna) the zero a narrow write leaves in a returned q register's upper half is no part of the value
pub mod zeroidiomuse; // (kuna) a self-cancelling `xor r,r` is not a competing use of the value it eats
