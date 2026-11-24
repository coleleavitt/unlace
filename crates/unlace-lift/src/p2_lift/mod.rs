//! S2 -- Flow & op-graph recovery: lift, CFG, jump tables, p-code injection.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod aeabifloat; // (kuna) AEABI soft-float helpers (__aeabi_dadd, __aeabi_d2iz) as C operators and casts
pub mod arithhelpers; // (kuna) 32-bit runtime arithmetic helpers (__udivdi3, __aeabi_uldivmod, _alldiv) as C operators
pub mod armflowcontext;
pub mod armhoist; // (kuna `armhoist`) hoist the ops both arms of a branch share before structuring
pub mod brktrap; // (kuna) an AArch64 brk compiler trap ends the flow instead of returning through SoftwareBreakpoint
pub mod callpopret; // (kuna) flow a call through a callee that pops the return address and rets to the grandparent
pub mod calltrampoline; // (kuna) flow a call through a callee that discards the pushed return address
pub mod cleanupcode; // (kuna) oxidizer CleanupCodeRemover: delete rust drop/dealloc call sites
pub mod constselectjump; // (kuna) recover a BRANCHIND whose destination is selected between constants
pub mod cortexmpriv; // (kuna) fold the Cortex-M isCurrentModePrivileged() guard around MRS/MSR
pub mod decodehalt; // (kuna) a halt planted where the decode failed says so instead of printing as an ordinary return
pub mod entryretdispatch; // (kuna) recover an entry-point push/push/ret dispatch chain as calls
pub mod evmcalls; // (kuna `evmcalls`) Solidity internal calls and returns in EVM bytecode
pub mod fastfailnoreturn; // (kuna) a Windows `int 0x29` (__fastfail) ends the flow instead of unbalancing the stack
pub mod flow;
pub mod fpuemu; // (kuna) decode the 8087 emulator's INT 34h-3Dh as the x87 instructions they stand for
pub mod funcboundflow; // (kuna) bound fall-through at a known function entry (no cross-function merge)
pub mod gomorestack; // (kuna) fold the Go stack-growth entry guard (docs/multilang.md W2)
pub mod gowritebarrier; // (kuna) fold the Go GC write-barrier diamond (docs/multilang.md W2)
pub mod guarddispatch; // (kuna `guarddispatch`) a call through a Control Flow Guard dispatch slot calls the target register
pub mod honestgaps; // (kuna `honestgaps`) name the losses the decompile otherwise drops silently
pub mod int3pad; // (kuna) name the int3 pad control ran into instead of printing it as a call through swi()
pub mod itaniumeh; // (kuna `itaniumeh`) exceptional edges from each covered call to its Itanium landing pad
pub mod javasync; // (kuna `javasync`) synchronized and finally from a DEX method's catch-all handlers
pub mod javatry; // (kuna `javatry`) exception edges and try dispatches from a DEX method's try items
pub mod jumpassist; // (kuna) the JumpAssisted model: switches computed by a <jumpassist> user-op
pub mod jumptablefault;
pub mod jumptablework; // (kuna `jumptablework`) bound the jump-table recovery work of one function's flow
pub mod kernelbug; // (kuna) a Linux kernel __bug_table trap prints as BUG() or __WARN(file,line)
pub mod lanefuse; // (kuna `lanefuse`) re-fuse per-lane vector p-code into one intrinsic op
pub mod linuxsyscall; // (kuna) name the 32-bit Linux int 0x80 sites instead of calling through swi()
pub mod loweredswitch;
pub mod loweredswitchbits; // (kuna) re-roll a switch lowered to bit tests and offset range checks
pub mod loweredswitchexact; // (kuna) keep a re-rolled lowered switch only when it is its compare tree
pub mod loweredswitchheads; // (kuna) try a lowered-switch cascade behind every head on its variable
pub mod loweredswitchlabels;
pub mod loweredswitchvalue; // (kuna) prove a re-rolled lowered switch reads the value its cascade compared
pub mod mappedflowboundary;
pub mod memtag; // (kuna) lift the AArch64 memory-tagging instructions with their tag effect
pub mod mipsunaligned; // (kuna) lift a MIPS lwl/lwr-style unaligned pair as one whole access
pub mod msvcftol; // (kuna) MSVC __ftol family call-fixup: recover the x87 (ST0) argument
pub mod msvcimportcall; // (kuna `msvcsig`) a call through an import slot with a locked MSVC prototype is direct from the flow on
pub mod msvcstrappend; // (kuna) collapse an inlined MSVC std::string push_back/append diamond into one call
pub mod noreturn_externmatch; // (kuna) angr incorrect-duplication-chcon: name-matched extern no-return
pub mod noreturnextern; // (kuna) angr tail-tail-bytes-ret-dup: undefined-extern name-based no-return
pub mod objcarc; // (kuna) hide Objective-C ARC bookkeeping calls through call-fixups
pub mod outlinedinline; // (kuna) inline clang's OUTLINED_FUNCTION_<n> fragments into their callers
pub mod overlapbranch; // (kuna) a conditional branch target inside its own fall-through instruction (anti-disassembly overlap)
pub mod ppc32piccalls;
pub mod ptrauthtrap; // (kuna) drop the arm64e pointer-auth failure checks
pub mod pushimmediateret; // (kuna) recover a one-store push-immediate/ret tail transfer as a branch
pub mod rawswitch; // (kuna `rawswitch`) recover an x86-64 jump table from its cmp/ja/lea/movslq/jmp instructions
pub mod retpolinethunk; // (kuna) a retpoline thunk recognized by its body is `call *%reg`
pub mod sparcstructret;
pub mod stackprobeloop;
pub mod switchextent; // (kuna) an unguarded jump table ends at the function's next table
pub mod switchguardbound;
pub mod switchguardmerge; // (kuna) merge an equality guard into its switch
pub mod switchguardrange;
pub mod switchmodbound;
pub mod switchrunon; // (kuna) an unguarded jump table stops where its rows leave the function
pub mod switchsharedcase;
pub mod switchtrim; // (kuna) recover an unguarded jump table and end it where its layout ends
pub mod syscallregs; // (kuna) give the ARM/AArch64/RISC-V/MIPS/PowerPC system-call user-op its register effects
pub mod tailcallframe; // (kuna) recover a frame-teardown tail jump whose callee was never discovered
pub mod tailcalljump;
pub mod tailcallsaved; // (kuna) a teardown that restores nothing the entry block saved is argument cleanup
pub mod v850indbranch;
pub mod vexzeroupper; // (kuna `vexzeroupper`) split the VEX zero-upper ZMM write at the result width
pub mod x64syscall; // (kuna) give the x86-64 SYSCALL user-op the Linux ABI register effects

pub mod gojumpchain;
pub mod returnbranch;

pub mod chkstkdarwin;
pub mod rustprobestack; // (kuna) remove the Darwin AArch64 stack probe so the registers it preserves survive it

pub mod calleeoverride; // (kuna) a caller-stated destination for an indirect call
pub mod callsiteproto; // (kuna) a loader-stated prototype for one call instruction
#[doc(hidden)]
pub mod highslice_guard;
pub mod stubtailcall; // (kuna) a loader-proven lazy-binding stub flows as a tail call

pub mod ppcpcread;

pub mod indirectreturn;

pub mod nullable_reloc;

pub mod atomics; // (kuna) a locked x86, AArch64 LSE or RISC-V AMO read-modify-write lifts to one __sync builtin
#[doc(hidden)]
pub mod atomicxadd;
