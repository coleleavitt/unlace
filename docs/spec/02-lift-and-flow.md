# 02 — Lift & flow recovery

```yaml
Anchors:
  - crates/unlace-lift/src/p2_lift
  - crates/unlace-middle/src/p2_lift
```

For Go images, `atomicxadd.rs` records a bounded single-instruction
LOCK/load/add/exchange/store/UNLOCK candidate before SSA. The record retains
original op identities and the old-value load; it changes no p-code. All memory
accesses must share the same storage address and four- or eight-byte width,
and the exchange must copy a loaded old value into a register without changing
the memory address before the store. Extra calls, branches, transaction hints
and effects refuse. Flow overrides do not acquire a record. The record is
cleared on restart and cannot authorize a later rendering without the final
whole-function SSA proof described in chapter 09.

**(unlace) Atomic instructions — `option atomics auto|msvc|gcc|off`, default `auto` (measured in unlace#581),
`crates/unlace-lift/src/p2_lift/atomics.rs (rewrite)`.**
SLEIGH lifts an x86 `lock`-prefixed read-modify-write as `LOCK()`, a load, an
update, a store and `UNLOCK()`; an AArch64 LSE atomic (`ldadd`, `ldclr`,
`ldeor`, `ldset`, `swp`, `cas` and their `a`/`l`/`al` and `st` forms) and a
RISC-V AMO as the same load and store with nothing to mark them. The C showed a
plain update between `LOCK();` and `UNLOCK();`, or no sign of atomicity at all,
and a `cas` became a compare-and-store that later passes could move out of its
retry loop. Right after an instruction is lifted, its p-code is evaluated
symbolically over every path through its internal branches (at most four),
with `Old` for the value the updated location holds when the instruction
starts. The location is the pointer of the instruction's LOADs and its one
STORE, or, under an x86 lock envelope with no LOAD or STORE (an absolute or
RIP-relative operand), the one RAM varnode the instruction writes. Its width
is 1, 2, 4 or 8 bytes, or 16 for a compare-and-swap. The instruction is rewritten when the value it writes
there is one of:

| written value | builtin (its result is `Old`) |
|---|---|
| `Old + X`, `Old - X`, `Old & X`, `Old \| X`, `Old ^ X` | `__sync_fetch_and_add/sub/and/or/xor(p, X)` |
| `~Old` | `__sync_fetch_and_xor(p, -1)` |
| `X` | `__sync_lock_test_and_set(p, X)` |
| `N` on exactly the path where `Old == E` | `__sync_val_compare_and_swap(p, E, N)` |

with `X`, `E` and `N` independent of `Old`. An addition of a negative constant
prints as a subtraction of its negation. The names are the GCC/Clang `__sync`
builtins, which return the old value and do not encode a memory order. Every
x86 locked instruction is a full barrier, as `__sync` implies; the AArch64
acquire and release markers (`LOAcquire()`, `LORelease()`) stay where SLEIGH
put them.

The rewrite changes ops in place and never changes how many the instruction
has, so relative branches inside it keep their targets. Through a pointer,
the first load becomes the builtin's CALLOTHER (keeping the load's output),
every other load before the store a copy of a storage the evaluation shows
still holds `Old`, every load after it a copy of the stored value, and the
store and the `LOCK`/`UNLOCK` markers copies to fresh temporaries that
dead-code removal deletes. Through a RAM varnode, `LOCK` becomes the builtin
(with the address as a constant pointer and a fresh temporary output), each
read of the varnode reads that temporary or, after the write, the written
value, and the write goes to a fresh temporary instead. Flags and registers
the instruction writes are still computed from `Old`. On the success path of
an x86 `cmpxchg`, where the accumulator equals `Old`, the store's op is reused
to assign `Old` to the accumulator, so both paths agree on it; the branch then
only decides the upper half of `RAX` after a 32-bit `cmpxchg`, which hardware
zero-extends only on failure. `cmpxchg8b`/`cmpxchg16b` compare and, on
failure, refill a register pair (`EDX:EAX`, `RDX:RAX`) from `Old`'s halves; on
its success path the op that built the new value and the store become those
same two `SUBPIECE`s of `Old` (`Plan::pair_accumulator`), so both paths agree
and the C no longer re-tests `expected != result` to copy the halves back. A 32-bit `xadd` or `xchg` on x86-64 ends with
`RAX = ZEXT(EAX)` after `UNLOCK()` (the hardware clear of the upper half);
an instruction with no branch whose ops after the envelope are only such
register-into-containing-register zero-extensions is rewritten without them,
and they then extend the builtin's result
(`crates/unlace-lift/src/p2_lift/atomics.rs (register_zext_tail)`). An operand that no storage holds at the first
load (`~X` for `ldclr`, `imm + CF` for `adc`) is rebuilt with new ops in front
of it, which is allowed only when the instruction updates memory through a
pointer and none of its relative branches targets its end: a new op is
numbered after the instruction's last op, where a branch to the end would find
it instead of the next instruction
(`crates/unlace-lift/src/p2_lift/atomics.rs (branches_to_end)`). Anything else is declined: another user
operation inside the lock envelope (an HLE `xacquire`/`xrelease` hint), an
update that leaves the location unchanged (`lock orq $0, (%rsp)`, the fence
compilers emit, stays `LOCK(); UNLOCK();`), `lock neg`, the min/max forms, an unlocked x86
update, and every instruction of a Go image (`goatomicreturn` owns those).

The builtins are CALLOTHERs with the call flag, so loads, stores and calls stay
ordered around them, and they write memory through their address operand:
`crates/unlace-bandb-base/src/p3_dataflow/memoryguard.rs (memory_ops)`
lists them, so heritage guards writable RAM and address-tied stack ranges
across each one as across a call, and a global updated by `lock inc` is reread
after it. The location's type is the integer the address operand already
points to, or else an integer of its width (unsigned for `and`/`or`/`xor`,
signed otherwise); the address operand points to it, the result and the other
operands have it, and a constant address operand may become an address
reference.

The option's value chooses the spelling (`crates/unlace-lift/src/p2_lift/atomics.rs (spelled)`).
`gcc` prints the `__sync` builtins above; `msvc` prints the MSVC intrinsics
Hex-Rays prints: `_InterlockedExchangeAdd`, `_InterlockedAnd`,
`_InterlockedOr`, `_InterlockedXor`, `_InterlockedExchange` and
`_InterlockedCompareExchange`, suffixed `8`, `16`, nothing or `64` by the
location's width; `auto` prints the MSVC ones on a Windows image (a Windows
compiler spec, or a PE the loader identified as Windows user mode) and the GCC
ones elsewhere. Each intrinsic returns the old value, as its builtin does.
MSVC has no fetch-and-subtract: a subtraction of a constant becomes
`_InterlockedExchangeAdd` of its negation, a subtraction of a value becomes
`_InterlockedExchangeAdd` of its two's complement where that operand can be
built in front of the instruction, and otherwise keeps
`__sync_fetch_and_sub`. `_InterlockedCompareExchange(p, N, E)` takes the new
value before the expected one, as MSVC declares it. The same spelling applies
to the builtins `llscfold` produces.

`c11` prints the C11 `<stdatomic.h>` functions with the memory order the
instruction encodes (`atomics.rs (c11_order)`). AArch64 marks an
acquire load with `LOAcquire` and a release store with `LORelease`:
- neither (`ldadd`, `ldxr`/`stxr`) is `memory_order_relaxed`;
- one of them is `memory_order_acquire` or `memory_order_release`;
- both (`ldaddal`, `ldaxr`/`stlxr`, what compilers emit for a sequentially
  consistent update) is `memory_order_seq_cst`.

A locked x86 instruction, and an atomic whose language marks no order (RISC-V),
is sequentially consistent. A sequentially consistent update prints as the plain
form (`atomic_fetch_add(p, v)`, `atomic_exchange`), any other order as the
`_explicit` form with the order as a `memory_order` enumerator last
(`atomic_fetch_add_explicit(&cnt, 1, memory_order_relaxed)`). C11's
compare-exchange returns a flag and writes the old value back through a
pointer, so a compare-and-swap, whose builtin returns the old value, keeps
`__sync_val_compare_and_swap`.

Register pairs. `cmpxchg8b` and `cmpxchg16b` load the whole 8- or 16-byte
location once, compare it with `EDX:EAX`/`RDX:RAX` built by zero-extension,
shift and or, test the result as `if (ZF == 1)` (a flag compared with 1 or 0
reads as the comparison that set it) and store `ECX:EBX`/`RCX:RBX` on the
equal path. They become `__sync_val_compare_and_swap(p, E, N)` on the whole
location, `E` and `N` rebuilt in front of the load; constant folding stops at
8 bytes, so a 16-byte location takes nothing but a compare-and-swap. An AArch64
`casp` on W registers already loads and stores one 8-byte location; on X
registers it loads `p` and `p + 8` separately, branches past both stores
unless each half equals its expected register, and stores the new pair
(`crates/unlace-lift/src/p2_lift/atomics.rs (pair)`). Both loads, both
compares and both stores are matched on the straight path through the
instruction, each half of `Old` being the `SUBPIECE` the data space's byte
order puts at that address; the instruction becomes one
`__sync_val_compare_and_swap` on the 16-byte location inserted before the
first load, its expected and new values each a `PIECE` of two registers, the
two loads become `SUBPIECE`s of its result and the stores dead copies. MSVC
spells no 16-byte intrinsic with these operands (`_InterlockedCompareExchange128`
returns a flag and writes the old value through a pointer), so the 16-byte forms
keep the GCC name under every spelling.

**(unlace) Load/store-exclusive loops — `option llscfold`, default on (unlace#581; it acts only with `atomics`),
`crates/unlace-lift/src/p2_lift/atomics.rs (ActionLlscLoop)`.**
Without LSE, AArch64 code (and all ARMv6+/Thumb-2 code) updates memory with a retry loop: `ldaxr w8, [x0];
add w9, w8, w1; stlxr w10, w9, [x0]; cbnz w10, loop`. The store-exclusive
lifts to a block ending in a branch on `ExclusiveMonitorPass`, a block holding
the STORE and `ExclusiveMonitorsStatus`, and the block of the `cbnz` that
branches back to the loop head. The head is that first block, or, for a
compare-exchange (`ldaxr; cmp; b.ne fail; stlxr; cbnz`), its one predecessor,
which holds the load and leaves the loop when the compare fails. Pre-SSA
(heritage pass 0), the head, the store-exclusive's blocks and the status test
are evaluated like one atomic instruction with the monitor passing and the
status 0: one LOAD, in the head, and one STORE through one address (compared
as the symbolic value of each op's pointer operand) that the monitor also
checks, the status test leaving the loop, and either a
written value from the table above (a head without a compare) or, for a
compare-exchange, a written value `N` independent of `Old` reached only when
the head's compare finds `Old == E`. A value the loop reads from a register or
temporary it also writes would differ on a retry, so an address, operand or
stored value built from one declines the fold, and so does any other value the
loop leaves in a storage unless that storage is dead after the loop on every
way out: a temporary, a storage written before it is read on the straight path
from the exit (at most four blocks), or a one-byte flag that path never reads
before it calls, returns or jumps away
(`crates/unlace-lift/src/p2_lift/atomics.rs (dead_after)`). ARM's `add`
without `s` copies the carry into a scratch flag the next `mov` overwrites,
which is the case this admits; and so does a compare's exit that branches back to the head after doing
anything but `clrex`. An operand no storage holds at the load (`~x` for an outline `ldclr` helper's `bic`) is built with new ops in front of it. The LOAD becomes `__sync_fetch_and_<op>(p, X)`,
`__sync_lock_test_and_set(p, X)` or `__sync_val_compare_and_swap(p, E, N)`, the
monitor's pass and status become the constants 1 and 0, and the STORE a dead
copy; dead-branch removal then deletes the back edge. A compare-exchange that
fails stores nothing, as the loop did, and keeps its exit (with its `clrex`).

clang rotates an ARM and Thumb compare-exchange: `ldrex r0, [r0]; cmp r0, r1;
bne fail; dmb ish; L: strex r3, r2, [r12]; cbz r3, done; ldrex r0, [r12]; cmp
r0, r1; beq L; fail: clrex`. The store-exclusive block then has two
predecessors: the head (directly or through one block, here the `dmb`) and a
reload block that the status test falls into and that branches back to it or
to the head's failure exit
(`crates/unlace-lift/src/p2_lift/atomics.rs (rotated_blocks)`). The head,
the block between (whose barrier, `DataMemoryBarrier`, stays) and the
store-exclusive's blocks fold as above. Since a retry re-runs only the
store-exclusive, status and reload blocks, the head's values are not
checked against what those blocks write. Instead a storage an op of that
cycle reads before an earlier op of the cycle writes it, while a later op
does (ARM's `cmp` reads the old carry for its shifter carry), is followed
forward through the ops that read it (`cycle_taint`): it may not reach a
load, a store, a user operation or a branch, and what it still holds at the
end must be dead after either exit. The values the reload block leaves must
equal the head's where they stay live after either exit, and the
store-exclusive's constant status writes are exempt (`dead_after`). The reload block must repeat the head: evaluated from the state the loop body
leaves, its one load-exclusive reads the head's address, it reads neither
monitor output, and it branches back exactly when the reloaded value equals
the head's expected value (`reload_matches`). The status test then always
leaves the loop and the reload block is dead.

On ARM and Thumb, `strex rd, rt, [rn]` lifts to `access = hasExclusiveAccess(rn);
rd = 1; if (!access) goto next; rd = 0; *rn = rt`, with no status user
operation: the monitor test is `hasExclusiveAccess`, the status is the
constant the store's block writes, and the status test is the `cmp rd, #0;
bne loop` that follows, which the evaluation folds through the compare's flag
arithmetic (subtraction, borrow and carry, signed and unsigned order). Thumb's
`ldrex` marks its load with `ExclusiveAccess(addr)`; it is accepted inside
the loop and becomes a dead copy with the fold. The doubleword forms
(`ldrexd`/`strexd`, `ldaxp`/`ldxp` with `stlxp`/`stxp`) load and store the two
halves of a `2w`-byte location; a loop whose head is the store-exclusive's
block folds through `crates/unlace-lift/src/p2_lift/atomics.rs (fold_pair_loop)`:
the low half (lower address) reads as `SUBPIECE(Old, 0)`, the high half as
`SUBPIECE(Old, w)`, and the two stored halves must be an exchange (neither
reads `Old`), the same `&`, `|` or `^` of each half with an independent
operand, or an addition with carry (`lo + x0` and `hi + x1 + CARRY(lo, x0)`,
ARM's `adds`/`adc`). A new `2w`-byte builtin call goes in front of the first
load, the loads become its two halves and the stores dead copies, as for
`casp`. Doubleword compare-exchange loops are not folded yet. AArch64's
`stlxp` of X registers stored its second register at `+4`; it is `+8`, and
the W-register `stlxp`/`stxp` test an 8-byte monitor range, not 16. Only AArch64 and ARM declare the monitor user operations, so the option
is inert elsewhere.

This phase turns an entry address into a function: raw p-code ops for every
reachable instruction, a basic-block graph over them, a call-spec record per
call site, and — the centerpiece — a recovered `JumpTable` for every indirect
branch that is really a switch. The driver is
`crates/unlace-decomp/src/infra/decompile_drive.rs (follow_flow_on_fd)`
(the C++ `Funcdata::followFlow`): it constructs a
`crates/unlace-lift/src/p2_lift/flow.rs (FlowInfo)` over the fresh
`Funcdata`, applies the architecture's flow options (default
`error_toomanyinstructions`, instruction budget 100000 —
`crates/unlace-middle/src/infra/architecture.rs (reset_defaults_internal)`),
runs op generation + block generation, maps each recovered jump table's
addresses onto block out-edges (`JumpTable::switch_over`), and finally computes
the dominator tree (`structure_reset`) the SSA phase requires. `FlowInfo`
reaches the architecture only through the
`crates/unlace-lift/src/p2_lift/flow.rs (FlowEnvironment)` trait; the
live implementation is
`crates/unlace-decomp/src/infra/decompile_drive.rs (ArchFlowEnv)`.

In 64-bit code spaces, SLEIGH display operands marked as code addresses retain
that interpretation through their nested display subtables. Their evaluated bit patterns
print as unsigned hexadecimal addresses even when bit 63 is set; ordinary
signed immediates keep their minus sign. Pattern-expression arithmetic already
wraps at 64 bits. This lets disassembly and its direct-reference consumers
agree on upper-half branch and call targets, including Apple arm64e kernel
addresses (issue #1505). Text disassembly always separates the address and
encoding columns, including a full-width address. This is a correctness repair
without an inference option.

Loader-validated MIPS lazy-binding resolver sites carry call-and-return
overrides in the shared architecture snapshot
(`crates/unlace-lift/src/p2_lift/stubtailcall.rs (flow_override)`). The resolver binds the import
and jumps to it with the stub caller's return address restored, so the stub is a
tail call: flow recovery keeps the indirect call, including its delay slot and
register writes, and ends the stub with a return after it. It is not an
indirect branch, so no jump-table recovery or fallback warning applies. It does
not follow a nonexistent local return into the next stub or section padding,
and does not declare the imported function no-return. Explicit per-function
flow overrides take precedence. Raw inputs and unvalidated stubs do not acquire
these facts. The object loader validates the stubs once per image
(`crates/unlace-analysis/src/loader/mipsstubs.rs (MipsLinkage)`);
for a MIPS language bootstrap installs their resolver sites, and the Listing and
`unlace xrefs` walks follow the same sites.
Off, the resolver call is decoded as an ordinary call that falls through into
the next stub, as upstream decodes it, and the Listing keeps that fall-through.

Canonical PowerPC `bcl 20,31` PC reads into the
current function's accepted single-function body follow the taken edge while
preserving the LR write. The inline literal after the instruction is not a
return continuation. This avoids dropping the remaining body when its interior
entry is suppressed. The destination must be forward, skip at most three words,
lie strictly inside that body and not be a known function. A `bcl` to the next
instruction cannot be a call. When it skips literal words, the fall-through path
from the target (following direct unconditional branches inside the body, and
past conditional ones) must read LR with `mflr` within 32 instructions, before
any LR return, LR write, call, other unconditional transfer or trap. Within the
next 32 instructions, a D-form load based on the register that `mflr` wrote
must read one of the skipped words, with a displacement inside the skip, before
any instruction that may overwrite that register and before any return, call,
CTR jump, absolute branch or trap. A load based on r0 does not count, because
a D-form base field of zero means address zero. In the same window the path must
not move the `mflr` register back into LR, and must not return through LR
before `mtlr` from another register restores it. Either of those resumes at the
skipped words, so they were code returned to, not a literal. A forward
`bcl 20,31` to a helper that never loads those words, whether it returns
through LR, restores LR first or tail-jumps away, or to one that loads them and
then returns into them, is therefore still a call. All 20,573 forward `bcl 20,31`
sites inside FDE bodies of 135 compiler-built PPC32 images satisfy this rule;
the 570 that skip literal words load one within 19 instructions of the `mflr`.
Other calls retain their existing treatment. The rewrite is the same
CALL-to-BRANCH conversion the call-trampoline rule uses. The recognition
lives in `crates/unlace-lift/src/p2_lift/ppcpcread.rs (is_pc_capture)`.

The A32 single-register `POP {pc}` alias (`ldr pc,[sp],#4`) lifts as a return,
including its conditional forms. Its address mode still advances SP by four
bytes and its PC write preserves interworking. Other PC loads retain their
existing branch behavior; an explicitly prepared LR retains the indirect-call
form. This is a SLEIGH correctness repair, without an inference option.

The SPARC floating-to-integer constructors use the integer result width:
`fdtoi` and `fqtoi` write one 32-bit word through `fsrd`, while `fstox` and
`fqtox` write 64 bits through `fdrd`. Scalar destinations preserve odd register numbers;
double destinations use the V9 encoding that maps an odd encoded field into
the upper register bank. The rules apply in both language variants. See the
[SPARC V9 instruction mapping](https://docs.oracle.com/cd/E19963-01/html/821-1607/sparcv9-32853.html).
This is a SLEIGH correctness repair, without an inference option.

The V850 spec decodes the instructions the RH850 (V850E3v5) cores add to
V850E2M (`specs/Ghidra/Processors/V850/data/languages/Instructions/RH850.sinc`).
Their encodings are undefined on V850E2M, so a function holding one used to end
in `halt_baddata()` (Unlace #1629). `ROTL` is a rotate whose CY is bit 0 of the
result (0 for a rotate by zero). `BINS` replaces bits `pos` to `pos + width - 1`
of reg2 with the low bits of reg1; the mask is built from the encoded bit
numbers, and an encoding whose top bit is below its bottom bit changes nothing.
`LOOP` adds -1 with the flags of `ADD` and branches backward while the register
is not zero. `PUSHSP rh-rt` stores rh to rt at descending addresses and
`POPSP rh-rt` loads rt down to rh; each register of the range is its own
store or load, so a prologue saves named registers. A range that holds `sp`
stores the value `sp` had before the instruction and, on the way back, leaves
`sp` at the address after the last word, as the manual's temporary does.
`LD.DW`/`ST.DW` move one 8-byte value between memory and a register pair (the
pair register for an even reg3, two word registers for an odd one). `LDL.W`
sets a link flag and `STC.W` stores only while it is set, writes the outcome to
reg3 and clears it (`CLL` clears it too), so the usual retry loop folds to one
read-modify-write. `JARL [reg1], reg3` is an indirect call. `CACHE`, `PREF`,
`SNOOZE`, `HVTRAP`, `HVCALL` and the debug and TLB operations are opaque
operations with their operands. Seven FPU constructors carried the mnemonic of
a neighbour (`cvtf.dw` printed as `cvtf.sw`), `CVTF.DL` converted an integer
instead of a double, `ST.W` with a 23-bit displacement stored two bytes, and
`CVTF.HS`, `CVTF.SH` were missing. The language `V850:LE:32:RH850` is the
same spec plus the system-register banks that the selID field of `LDSR`/`STSR`
selects (selID 0 to 7, names from the RH850G3K and RH850G3MH software manuals,
`SRn_s` for an unnamed slot); `V850:LE:32:default` keeps the single V850E2M
bank, where register 11 is `SCCFG` and a nonzero selID does not decode.
This is a SLEIGH correctness repair, without an inference option.

The AArch64 float-to-integer conversions and round-to-integral instructions
round in the mode they name. Upstream lifts every scalar, SIMD-scalar and
vector `FCVT{A,M,N,P,Z}{S,U}` as `TRUNC(x)`, and every `FRINT{A,I,M,N,P,X,Z}`
and `FRINT32/64{X,Z}` as `TRUNC(x)` written into the float register, so
`(int)floorf(x)` and `(int)ceilf(x)` lifted alike and a test of the floor
against the ceil of one value folded away (Unlace #1535; upstream master is
unchanged as of 2026-11-10). A conversion now truncates `FLOAT_FLOOR(x)`
(`M`), `FLOAT_CEIL(x)` (`P`), `FLOAT_ROUND(x)` (`A`: ties away from zero,
which is what p-code's `ROUND` does), the `FLOAT_ROUNDEVEN(x)` user op (`N`),
or `x` itself (`Z`, unchanged). The conversions do not saturate: an input
whose rounded value is outside the destination's range converts as `TRUNC`
does. `FRINTM`, `FRINTP` and `FRINTA` are `FLOAT_FLOOR`, `FLOAT_CEIL` and
`FLOAT_ROUND`; `FRINTN` and `FRINTZ` are the `FLOAT_ROUNDEVEN` and
`FLOAT_TRUNC` user ops; `FRINTX` and `FRINTI`, which round in the FPCR mode
with and without the inexact exception, are the `FLOAT_RINT` and
`FLOAT_NEARBYINT` user ops. Each of these is exact for every input,
including values too large for any integer, infinities, NaNs and negative
zero. Chapter 05 types the four user ops as floats. `FRINT32Z` and
`FRINT64Z` are `INT2FLOAT` of a 32- or 64-bit `TRUNC(x)`, and `FRINT32X` and
`FRINT64X` the same of `FLOAT_RINT(x)`: exact while the rounded value fits
the integer, except that a result of zero is +0.0 even for a negative input;
like the other scalar and 64-bit vector writes they now zero the bits of the
vector register above the result. Unsigned conversions keep the signed
`TRUNC` of the destination width, exact when the rounded value is at least
zero and below 2^31 (2^63 for a 64-bit destination); a negative one, which
the instruction saturates to zero, converts as a signed value. The only
unsigned spelling p-code has, a wider `TRUNC` narrowed to the destination,
prints `(long)x & 0xffffffff` and widens every variable that holds the
result. The SVE forms stay user ops. Subtables beside the mnemonic tables
decode the mode (`fcvt_srnd`, `fcvt_vrnd`, `fcvt_vlanes`, `frint_s` and
`frint_vlanes` in
`specs/Ghidra/Processors/AARCH64/data/languages/AARCH64neon.sinc`); every
encoding decodes and disassembles as before, and `FCVTZS` and `FCVTZU` lift
to the same p-code. This is a SLEIGH correctness repair, without an inference
option.

The AArch64 pointer-authentication instructions keep their register defined
while hidden. `AARCH64.pspec` leaves the `ShowPAC` context at 0 for every
AArch64 language, so `pac*`, `aut*` and `xpac*` lift under the `"hide"`
constructors of
`specs/Ghidra/Processors/AARCH64/data/languages/AARCH64_base_PACoptions.sinc`
and the decompiler models every signed pointer as already authenticated (the
`ptrauthtrap` section below describes that model). Upstream's `"hide"` bodies
are empty, so `pacda x0,x16` wrote nothing: a function whose only write to
`x0` is the signing had no definition of `x0` at its `ret`, return recovery
found no result, and `return ptrauth_sign_unauthenticated(p, ..)` decompiled
as `void f(void)` (Unlace #1621). A hidden form that writes a general register
(`pac{i,d}{a,b}`, `pac{i,d}z{a,b}`, `aut{i,d}{a,b}`, `aut{i,d}z{a,b}`,
`pac{i}{a,b}1716`, `aut{i}{a,b}1716`, `xpaci`, `xpacd`) now lifts to a copy of
that register onto itself, `Rd = Rd`, the transparent model's own semantics:
the value flows to the return or store, and the function returns its pointer.
When the compiler builds a blended modifier in place in `x1`
(`movk x1, #d, lsl #48` then `pacda x0, x1; ret`), return recovery also takes
that scratch `x1`, and the function returns the `x1:x0` pair, as it does for
any other write to `x1` before `ret`. The forms that act on `x30` or `sp`
(`pac{i}{a,b}sp`, `pac{i}{a,b}z`,
`aut{i}{a,b}sp`, `aut{i}{a,b}z`, `retaa`, `retab`, `xpaclri`) and the
authenticating branches and loads (`braa`, `blraa`, `eretaa`, `ldraa` and
their `b`-key forms) stay empty: the return address carries no value the
output needs, and `ptrauthtrap` keys on `x30` being unwritten. The FPAC-less
failure check after a data `aut*` still folds, since the stripped copy still
equals the original. On an iOS system daemon and three jailbreak dylibs
(6,517 functions, 491 pointer-auth instructions in one of them) the output is
byte-identical. This is a SLEIGH correctness repair, without an inference
option.

The AArch64 memory-tagging (MTE) instructions lift with their tag effect
(`option acleintrinsics on|off`, default on, AArch64 only; Unlace #1626).
`AARCH64.pspec` leaves the `ShowMemTag` context at 0, and under it
`specs/Ghidra/Processors/AARCH64/data/languages/AARCH64base.sinc` lifts
`irg` as a copy, `addg` and `subg` as a plain add, `gmi` as a copy of its
mask, `ldg` and `stg`/`st2g` as nothing, and `stzg`/`stz2g`/`stgp` as their
data store alone. The lift is then false about the program:
`return __arm_mte_create_random_tag(p, 0);` is `irg x0, x0; ret` and
decompiled to `return a0;`, and a function that only tags memory decompiled
to an empty `void f(void)`.
`crates/unlace-lift/src/p2_lift/memtag.rs (paint)` runs
before each function's flow and makes the context agree with the option: it
reads `ShowMemTag` at the function entry and, when that differs, sets the
default and paints the whole code space. Only the memory-tagging
constructors read that context, so every other instruction decodes and lifts
exactly as before, and a language without the variable (every non-AArch64
one) is left alone. `off` paints it back to 0, so one session can lift the
same function both ways.

The `ShowMemTag=1` constructors are unlace's, not upstream's. Upstream kept
the destination register an untouched copy and put the tag operation in a
user op with no output, to keep the pointer's data flow; the output then
still read `return a0;` after a detached `RandomizePtrTag_Exclude(a0, ..)`
statement. Here the tagged pointer is the user op's result:
`Rd = RandomizePtrTag_Exclude(Rn, Xm)` for `irg` (zero when `Xm` is absent),
`Rd = AddPtrTag(Rn +/- imm, tag_offset)` for `addg` and `subg`, both of which
advance the tag, `Rd = ExcludePtrTag(Rn, Rm)` for `gmi`,
`Rt = LoadPtrTag(Rt, address)` for `ldg`, and `StorePtrTag(address, Rt)` for
each granule `stg`, `st2g`, `stzg`, `stz2g` and `stgp` tag (`stgp` takes the
tag from the address itself). `GCR_EL1.Exclude`, which `irg`, `addg` and
`subg` also honour, is part of those ops' meaning and is not an operand. The
`stg` family raises an alignment fault on an address that is not
granule-aligned; upstream modelled it as a branch to `AlignmentFault()`
before each store, a block and two edges that are in no source and that
cost the function its return value, so the fault is not modelled. The
EL1-only bulk forms `ldgm`, `stgm` and `stzgm` keep upstream's
`ShowMemTag=1` bodies, so with the option on they lift as loops of
`LoadMemTag` / `StoreMemTag` over a block whose size is read from `GMID_EL1`
(`DCZID_EL0` for `stzgm`); under `ShowMemTag=0` `ldgm` reads as zero and
`stgm`/`stzgm` store no tag. Chapter 09 prints the tag ops of the single-granule forms as ACLE
intrinsics.

SPARC integer branch conditions snapshot the ICC/XCC carry, negative, and
overflow flags before expanding the delay slot. A flag-writing slot still
publishes its new flags to subsequent instructions, but cannot change the
current branch's decision. Ordinary and predicted branches share these
condition operands; annulled branches retain their conditional slot execution.
The non-annulled register branches (`brz`, `brlez`, `brlz`, `brnz`, `brgz`,
`brgez`) likewise test `rs1` before the delay slot, so a slot that rewrites
that register keeps its new value without changing the branch. Annulled forms
already tested the register first. This is a SLEIGH correctness repair,
without an inference option.

PowerPC `lwarx` sets the reservation (`RESERVE`, its length and its address)
before loading the word, as the ISA constructor does. `stwcx.` and `stdcx.`
store only while `RESERVE` is set, so a load-reserve/store-conditional retry
loop decompiles to its single conditional store instead of a loop that tests
an uninitialized reservation flag. The generic constructor takes precedence
for ordinary encodings in every PowerPC language, the ISA languages included.
This is a SLEIGH correctness repair, without an inference option.

The generic 64-bit PowerPC constructors (the languages without the `IS_ISA`
instruction set, including e500) decode extended opcode 21 of primary opcode
31 as `ldx` and opcode 84 as `ldarx`, matching the ISA languages. Both lift to
an indexed doubleword load. `ldarx` also sets the reservation, as in the ISA
languages, so a following `stdcx.` stores unconditionally rather than testing
an uninitialized reservation flag. Encodings with the exclusive-access hint bit set remain
undecoded there. This is a SLEIGH correctness repair, without an inference option.

The generic 64-bit PowerPC languages (`PowerPC:BE:64:default`, `PowerPC:LE:64:default`)
also decode `isel` (primary opcode 31, extended opcode 15 in bits 5:1). It is Power ISA 2.03
and later, and until now only the e500/PowerQUICC III and ISA languages had it.
`isel.sinc` holds the one constructor, and `quicciii.sinc` includes it at the place where it
used to be defined. `RT` gets `RA|0` when the named CR bit is set, else `RB`. This is a
SLEIGH correctness repair, without an inference option.

Generic ARM `MCR`/`MRC` and `MCR2`/`MRC2` transfers pass the encoded
`CRn` and `CRm` numbers to their opaque coprocessor intrinsics as four-byte
constants. A32 and Thumb constructors use unattached numeric aliases of the token
fields, retaining the `cr0`–`cr15` attachments for assembly spelling. The CPU
source of `MCR` remains live register data; `MRC` still writes its CPU
destination, including the Thumb APSR flag destination. Coprocessor number,
opcode fields, condition handling, and instruction spelling are preserved.
This repairs selector identity without an option and does not emulate CP15,
interpret processor-specific registers, or change named CP15 intrinsics,
coprocessor data processing, or double-register transfers.

An x86 near branch with a 16-bit displacement (`CALL`/`JMP`/`Jcc rel16`) in
32-bit code takes a 0x66 prefix, and its target is masked to the low 16 bits,
since the CPU zeroes the high half of EIP (GH-7418). Code whose default operand
size is 16 bits (`x86:LE:16:Real Mode`, `x86:LE:16:Protected Mode` and
`x86:LE:32:System Management Mode`) decodes with its own spec,
`specs/Ghidra/Processors/x86/data/languages/x86-16.slaspec`, which is
`x86.slaspec` plus the real-mode code segment in the decode context; `x86.sla`
and `x86-64.sla` are unchanged. A real-mode address is the linear CS*16 + IP,
and a code segment need not start on a 64 KiB boundary. The context variable
`realCS` (default 0) holds CS. A near branch (`rel8` and `rel16`: `CALL`,
`JMP`, `Jcc`, `LOOP`, `JCXZ`) wraps IP inside the segment, so its target is
`realCS*16 + ((IP + displacement) & 0xFFFF)`, and it commits `realCS` to that
target (a SLEIGH `globalset`), so a callee decodes in its caller's segment. A
far `CALL`/`JMP ptr16:16` commits the segment it names to its target. Every
16-bit `CALL` pushes IP, not the low half of the linear address; a far `CALL
ptr16:16` keeps its own segment in the scratch context field `callerCS` while
`ptr1616` states its target's, so it pushes IP in its own segment. The CS a `CS:`
override or a near indirect `CALL`/`JMP` reads is `realCS`, so a `jmp
[cs:bx+table]` reads its table from its own segment (upstream assumed the
instruction's 64 KiB block). An instruction that starts outside the 64 KiB
above `realCS*16` cannot be in that segment (one that ends on the segment's last
byte is inside it, and its IP wraps to 0): there a near branch is the linear sum of
the next address and the displacement, which is exact unless the branch was
encoded through the wrap, `CALL` pushes the low 16 bits of its next address,
and CS is upstream's 64 KiB block. A committed segment holds from its target up to
the next address the segment was set at, so this bound is what keeps a far
target's segment from reaching unrelated code above it. With the default CS 0
the first 64 KiB wrap as the GH-7418 mask did (a `.COM` program's
`call 0x9103` from 0x100 encoded as -0x7000), and code above it takes the
linear sum, which the mask had sent into the first 64 KiB (issue #1288: a DOS
program loaded at segment 0x1000 lost all but 12 of its 330 functions). A
loader states the segments it knows through
`crates/unlace-analysis/src/loader/realmodecs.rs (paint)`. A
raw image (`--raw-image`) that ends inside the first 64 KiB keeps CS 0, another
raw image of at most 64 KiB is one segment that starts at its base paragraph,
and a larger one states none (`raw_image_cs`). The raw image's linear call
sweep decodes data as code, so it runs with `realCS` commits masked
(`without_commits`). With the main segment of that DOS program stated (CS
0x2b58), all 697 of its `rel16` branches decode to their targets, against 651
with the linear sum and none with the mask. In 16-bit protected mode an address
is selector*0x10000 + offset, so a near branch keeps the selector and wraps the
offset, as upstream computes it. This is a SLEIGH correctness repair, without
an inference option.

(unlace) CIL has a language of its own,
`specs/Ghidra/Processors/CIL/data/languages/CIL.slaspec`
(`CIL:LE:64:default`), for the managed assemblies the `cil` loader maps
(chapter 01). The evaluation stack is the registers `s0`..`s63`: slot *i* is
always the same register, so heritage puts the stack in SSA form and an
expression left on it across a branch joins as a phi. An instruction reaches
its operands through the depth `sd` of the decode context `cilctx`, which the
loader paints (`crates/unlace-analysis/src/loadimage_cil/body.rs
(type_body)`), and picks its p-code by the operand class `k`: `add` is an
`INT_ADD` of the low four bytes for int32, of all eight for int64 and a
`FLOAT_ADD` for a float. Every slot is eight bytes, an int32 kept
sign-extended and a float32 zero-extended, so a copy, an argument and a
result need no class. An instruction with `ok` 0, which is every one the
loader did not paint, is `unimpl`. Arguments are `a0`..`a15` and the result
is `rv`. A method's arguments are its own across a call, so a call saves the
registers it passes in `sv0`..`sv15` and restores them after, and the
compiler spec states the argument and stack registers unaffected. Locals are
8-byte cells below `SP`, which never moves, so `ldloca` is an address in the
frame. A call's operand is the address the loader rewrote its token to. A
managed array reference points at element 0, so `ldelem` is a load at
`array + index * size`; `ldlen`, `newarr`, `newobj`, `box`, `unbox` and
`isinst` are user operators, since their semantics are the runtime's.
`switch` decodes as its opcode and count only and jumps through the table of
offsets that follows, which the jump-table recovery reads.

A DOS program built by Microsoft's or Borland's compilers for the 8087
emulator carries no x87 opcodes: the linker's emulator fixups turn each `WAIT`
and ESC opcode pair into a software interrupt that the emulator services or,
once it finds a coprocessor, patches back. `INT 34h+n` stands for ESC `D8h+n`
and is followed by the instruction's ModR/M and displacement. `INT 3Ch` is
followed by a byte holding the segment override in bits 6-7 (DS, SS, CS, ES)
and the ESC opcode in bits 0-2, then the ModR/M. `INT 3Dh` is `FWAIT`. Read as
interrupts, the operand bytes decode as garbage instructions: `FLD1` (`CD 35
E8`) becomes `INT 35h` and a near `CALL` to a phantom function. In
`x86-16.slaspec` the ESC constructors are a table `x87` that reads its opcode
byte through the `X87_Dn` patterns. The byte is the opcode itself, the `34h+n`
of an `INT 34h-3Bh` form (context `fpuEsc` 1), or the segment byte of an `INT
3Ch` form (`fpuEsc` 2, which also sets the segment override). Root
constructors dispatch the native opcode and, where the context bit `fpuEmu`
is 1 (default 0), the emulator forms; `INT 3Dh` there is `WAIT`. Each form
emits the p-code of the real instruction. `ia.sinc` keeps the constructors in
place: outside 16-bit x86 each `X87_Dn` expands to the old `byte=0xDn`, the
quoted mnemonics print as before and the `with x87` block is under `@ifdef
IA16`, so `x86.sla` and `x86-64.sla` are byte-identical, and so is the
16-bit decode of every native ESC instruction.
`crates/unlace-lift/src/p2_lift/fpuemu.rs (apply)` paints
`fpuEmu` over the default code space from `option fpuemu` (`off|auto|on`,
default `auto`). `on` sets it, `off` clears it, and `auto` sets it when the
MS-DOS loader found emulator code in the load module (`emulator_evidence`): at
least two emulated instructions that run straight into an emulated `FWAIT` or
follow one. A compiler ends a float sequence with that `FWAIT`, and data
almost never holds the pair. A table of `INT n; RET` thunks holds every `INT
34h-3Dh` back to back but no pair, because each `RET` byte reads as a register
ModR/M. A language without `fpuEmu` ignores the option, and so does a
bytechunk or raw image under `auto`. On the deark-unpacked `DAZZLE.EXE`
(Turbo C, issue #1288) the evidence holds, and `decompile-all` changes 18
functions. All 75 calls through `swi(0x34)`..`swi(0x3d)` become float
arithmetic. The last three bad-instruction warnings go away and
`funcboundflow` truncations go from 10 to 7. Two phantom functions that IDA
does not list (one the `FLD1` call target) are gone, 297 to 295. Borland's
`INT 3Eh` shortcut calls into the emulator library are left as interrupts.
On 42 FreeDOS executables the evidence never holds, so their output is
byte-identical.

MIPS reads and writes a word at an address that may not be aligned with a
pair of instructions: `lwl $3,0($2); lwr $3,3($2)` on a big-endian target,
`lwl $3,3($2); lwr $3,0($2)` on a little-endian one, and `swl`/`swr`,
`ldl`/`ldr` and `sdl`/`sdr` likewise. The processor spec lifts each half
alone as a merge of memory into the register by a shift its address's low
bits pick, so the pair reads the register it overwrites and prints as shifts
and masks around that value: after a call, the call's dead second return word,
which made SQLite's callers read `sqlite3PagerWrite`'s result as a 64-bit
pair, so `unlace_voidret` saw them disagree and printed it `void`. The spec also
has whole-access forms for both halves, selected by the context bit
`PAIR_INSTRUCTION_FLAG`: the half at the lower address on a big-endian target
(the higher on a little-endian one) loads or stores the whole word, and the
other does nothing. Ghidra's `MipsPreAnalyzer` sets the bit;
`crates/unlace-lift/src/p2_lift/mipsunaligned.rs (paint)`
does the same once per image, at the first flow (and before `callwide`'s
whole-image proof); the painting is always on.
It reads the image's executable ranges, collects the target of every direct
branch and jump, and pairs a half with the other half of the same width, base
and data register three (seven) bytes away on the side the byte order puts
it, when that follows within five instructions, nothing on the way writes the
base, reads or writes a load's data register or writes a store's, and no
control transfer comes first except one whose delay slot holds the partner
(not a branch-likely, whose slot runs only when taken). The first half may
not sit in a delay slot, a load may not use its data register as its base,
and no branch (an Octeon `bbit` too, when the language is Octeon) and no
sized function symbol may land after the first half and at or before the
second, since a path entering there would run one half alone. Code decoding
as MIPS16, microMIPS or release 6 is left alone. The whole-access form of a
left half sets the bit at the next instruction too, so a pair whose left
half is followed by a half that pairs with nothing is dropped. Turned off
again, the bit is cleared on the same halves. `unlace raw-pcode` paints the
same pairs before it lifts, so it shows the p-code the decompiler reads.
The scan looks at registers only: a store between the halves of a load (or
any access between the halves of a store) that overlaps the word is assumed
not to change what the pair moves, as it never does in compiled code, where
the only overlaps are struct copies writing the same bytes twice. XML images
and headerless `--raw-image` inputs (no executable ranges) and every other
language are unchanged, so the datatests are byte-identical.
Over 355 gcc and clang MIPS images (zlib, Lua and authored shapes, -O0 to -O3
and -Os, big- and little-endian PIC shared objects and big-endian non-PIC
objects) and four SQLite builds, with their DWARF stripped, 3,481 functions
change: 790 lose all or some of their shift-and-mask merges (clang's struct
copies, whose halves can sit more than five instructions apart, keep some),
2,539 only renumber auto-named struct types after an earlier function's types
changed, and the rest follow from callees whose arguments or results no
longer read a stale register. Fifteen returns change, each to its DWARF type:
`sqlite3PagerWrite` returns its `int` in the three gcc builds, and 12
functions that printed an `int` for a `void` (`walChecksumBytes`,
`checkPtrmap`, a `void fv(int *)` whose caller's `lwl` read `$2`) return
nothing. Of 68 parameter counts that change, 65 move to the DWARF count; the
other three lose an argument only the merge read. PowerPC, ARM, SPARC and x86
images print byte-identically.

Ordinary ARM flow establishes a `TMode` write boundary at the function entry.
A backward interworking call may publish the callee's mode up to that boundary,
but cannot repaint the caller. After a successful instruction, a mode commit
that reached the instruction's own address is bounded by restoring its original
mode there, preserving the call's fall-through. Other context fields, including
Thumb IT state, retain their normal effects. Direct and indirect branches retain
their existing target-mode selection. This strict correctness repair applies
without Listing or frame discovery and adds no option.

Return-dispatch recognizers own their decode context scopes. Segment and mode
commits remain visible within each probe, including ARM `TMode` and local IT
state, but cannot repaint the real walk's entry mode when the probe ends.
The scope journals only touched context partitions, restoring their values and
explicit-set masks and removing new split points on exit. Opening a scope does
not copy the image's context database.

Option defaults and flip guidance for every option named below live in the
generated catalog ([docs/options.md](../options.md)); the rows are defined in
`crates/unlace-decomp/phases.toml` and the intentional
default-divergences are DIV-3/4/13/14 in `docs/history.md`.

> Scope note: `crates/unlace-bandb-core/src/p5_types/funcdata_resolveflow.rs
> (Funcdata::resolve_in_flow)` is, despite its name, the union-field
> `resolveInFlow`/`resolveTruncation` dispatch — type-recovery machinery
> described in chapter [05 — Types](05-types.md). It lives in this folder only
> for file-lineage reasons and plays no part in flow recovery.

## 2.1 Instruction following

**Two-phase model.** `flow.rs (FlowInfo::generate_ops)` produces every raw
p-code op into the op bank's *dead list*, instruction by instruction;
`flow.rs (FlowInfo::generate_blocks)` later organizes them into basic blocks
(§2.2). The simple case is a worklist: pop an address off the fall-through
stack, decode one instruction through the SLEIGH translator
(`flow.rs (FlowInfo::process_instruction)`), record it in the `visited` map
(address → first-op sequence number + byte length), classify the emitted ops'
control flow (`flow.rs (FlowInfo::xref_control_flow)`), and push the
fall-through successor plus any branch targets (`flow.rs
(FlowInfo::new_address)`). RETURN and BRANCH end fall-through; CALL and CALLIND
are treated as fall-through ops; a BRANCHIND is parked on `tablelist` for
jump-table recovery (§2.3). A branch whose target is a *constant* is a branch
internal to the instruction's own p-code (`flow.rs (FlowInfo::find_rel_target)`);
ops beyond the deepest internal branch time are dead and deleted
(`delete_remaining_ops`). The op-creation and classification order here is
observable — it fixes the SeqNum allocation every later phase keys on.

**The dead list is a list, and the walk must treat it as one.** The C++ holds
`std::list<PcodeOp *>::iterator`s directly (`insertiter` on each op), so
"the op after this one", "the op before this one" and "the last op" are all
constant-time. unlace's dead list is the same doubly-linked list, realized as
prev/next `OpId` links on each op (`op.rs (IntrusiveList)`), and
`op.rs (PcodeOpBank::dead_next / dead_prev / dead_front / dead_back)` read those
links. Position must never be re-derived by scanning `iter_dead()`: the marker
idiom in `process_instruction` (remember the tail, decode, then take the first
op after the marker) and the per-op walk in `xref_control_flow` run once per
instruction over a list that grows to the whole function, so a scan there is
quadratic in the function's op count. Membership is the `dead` flag *plus* a live
link — `destroy` retires an op to `deadandgone` with the flag still set, and the
alive list shares the same link pair — so the cursor reports a non-member as
`None`, which is what a scan for an absent op returned.

**Declared flow bounds.** A function normally follows flow wherever the code
goes: `FlowInfo`'s allowed range is initialized to the whole entry-point space, so
the extent is discovered, not asserted. A `Funcdata` that carries a non-zero byte
size instead restricts flow to `[entry, entry + size - 1]`
(`decompile_drive.rs (follow_flow_on_fd)` calls `flow.rs (FlowInfo::set_range)`
before op generation, the C++ `Funcdata::followFlow(baddr, eaddr)` shape). `eaddr`
is inclusive, so the last in-body byte is `entry + size - 1`. A branch target
outside the range is not followed (`flow.rs (FlowInfo::new_address)`), and
fall-through stops when it would leave it (`flow.rs (FlowInfo::fallthru)`); both
route through `flow.rs (FlowInfo::handle_out_of_bounds)`, which under the default
flow options continues rather than failing the decompile — `errorreinterpreted`-style
hard failure needs `error_outofbounds`.

When fall-through reaches an instruction already recorded in `visited`, it joins
that instruction's existing block, including when the instruction starts exactly
at the inclusive `eaddr`. Only an unseen instruction at `eaddr` is decoded as the
last in-range instruction. Decoding a previously visited final `RET` again would
replace its address-to-op record and make earlier return edges target the later
predecessor's body. In a switch with a return-only entry and a last case sharing
that `RET`, this incorrectly moves the last case's write after the switch and
executes it for the return-only entry and out-of-range selectors as well.
`tests/stages/switch-return-paths.toml` and the CLI native round trip pin
this join across both structurers and the return-duplication settings.

Continuing quietly would be the wrong contract for a *declared* bound, because the
caller cannot otherwise tell a correct boundary from one that truncated the body:
both just produce a shorter function. So the out-of-bounds handler emits the C++
diagnostics — a `Funcdata::warning` at each cut edge and, once per function, the
`Function flows out of bounds` `Funcdata::warning_header` — which the emitter
renders as comments on the prototype and the offending statement. A correctly
declared function ends in a return or a recognized tail transfer. A known callee
outside the extent can be recovered under `tailcalljump` without following its
body; an unrecognized edge still clips and warns, so its declared end needs review.

Warning is only half of continuing, though, because the cut edge still needs a
head: the target was never decoded, so it has no op, and until DIV-121 the block
build asked for one anyway and the whole function died with `Could not find op
at target address` — in every mode, so a declared end that cut any real edge
produced no C at all rather than a clipped body. §2.2 closes that: the halt
`fillin_branch_stubs` already planted at each out-of-extent address is now
registered as the instruction there, so the branch lands on it and the body ends
at the boundary carrying the warnings above. The registration is restricted to
the addresses `handle_out_of_bounds` recorded, so the diagnostic still means
what it says everywhere else. Size 0 is the unbounded default every caller took
until the boundary-declaration surface existed (chapter
[00 §0.4](00-overview.md)) and leaves the range at the whole entry-point space, so
both the bound and its diagnostics are inert for a run that declares nothing.

**Branch targets the image cannot supply.** A declared bound is not the only way
flow leaves the code: a `jmp` or `jcc` displacement can resolve to an address no
segment of the image maps at all, which is ordinary in obfuscated, packed and
statically linked binaries. Such a target is a dead end — there is nothing there
to decode under any option — but queueing it anyway made the walk pop it and ask
the loader for its bytes, and `LoadImage::load_fill`'s `Unable to load N bytes`
raise unwound the entire flow follow. The function was then lost whole: a body
whose own bytes are mapped and disassemble cleanly produced no C, and the CLI,
reading that failure out of the console transcript, reported the *selected entry*
as an external symbol defined in another module.

So `flow.rs (FlowInfo::new_address)` probes the load image for one byte at the
target (`flow.rs (FlowEnvironment::code_bytes_mapped)`, the same question
`ConsoleProgram::entry_bytes_mapped` asks) before queueing it, and an unmapped
target ends that path exactly as an out-of-extent one does: recorded on
`unprocessed`, registered in the out-of-extent set so §2.2 gives its edge a halt
to land on, and reported by `flow.rs (FlowInfo::handle_unmapped_target)` as a
`Funcdata::warning` at the branch site plus a once-per-function
`Function flows into unmapped memory` header. Unlike the declared bound this has
no ignore/error mode, because it is a fact about the image rather than a policy
about a range. The probe is only reached for a target that is already inside the
allowed range, and only an address with no bytes behind it can fail it, so no
flow that previously decoded is cut: the change turns functions that produced
nothing into functions that produce a body carrying the warnings above.

**Mapped ELF x86 fall-through.** Mapped-flow boundary recovery (always on)
retains decoded paths when another path falls through an image edge. The
load-time predicate in
`crates/unlace-lift/src/p2_lift/mappedflowboundary.rs (eligible_elf)`
requires a linked little-endian ELF (ET_EXEC or ET_DYN), class/machine
ELF32/i386 or ELF64/x86-64, and matching resolved SLEIGH processor, endian,
and width. Other images and mismatched targets retain legacy flow. Each
flow follow takes a fresh loader `ImageBytes` snapshot and releases it on
completion, so byte overlays remain exclusive and later flows see current
bytes.
Mapping warnings from an earlier eligible flow are refreshed when it is
rebuilt, so an intervening return override
or byte overlay cannot leave a stale unmapped-flow warning on the new body.
Other warnings are retained.
Cleanup and publication of buffered flow comments occur only after all
replacement flow steps succeed. A failed reload retains the previous selected
body and its mapping diagnostics.

On eligible flows, `Translate::one_instruction_checked` validates the
actual decoded instruction span with `ImageBytes::mapped_covers` before
context commits or p-code emission. A full prefetch need not be mapped: a
one-byte RET at the final mapped byte is valid. Touching and overlapping
mappings may supply one instruction, and mapped zero-filled data tails (the
`p_memsz` excess the loader maps for non-executable segments only) are valid,
so flow that branches into one lifts its zeros up to the mapped end; an
instruction spanning a gap is not. SLEIGH's checked entry point
declines delay-slot instructions, which this x86 scope does not produce.
No loader error is converted wholesale into a successful halt: a read failure
on a mapped byte and a genuine decode error keep their existing policies.

An instruction that flow reaches from decoded code, whose first byte is mapped
but whose encoding runs past the contiguous mapped run, is the same fact as a
fall-through into unmapped memory: the path cannot continue on image bytes.
The check in
`crates/unlace-lift/src/p2_lift/mappedflowboundary.rs (truncated_instruction)`
re-derives it from the image with a length-only decode, so a failed read cannot
qualify. That path then ends in a one-byte missing halt at the instruction's own
address with the warning `the instruction at <addr> runs past the mapped bytes`
and the unmapped-memory header; nothing from the truncated encoding is lifted,
and the mapped bytes before it (a zero padding `add [eax],al`, say) are decoded
as usual. The flow's own entry instruction keeps the error, because there is
no decoded path to retain.

In-lined callee flows (`option inline`) take neither this cut nor the
fall-through cut below. The in-line clone turns a callee's RETURN into a branch
to the call's return address and the easy model stops at the first RETURN, so a
missing halt inside the callee would read as a normal return in the caller. Such
a callee keeps the mapping error instead.

An unmapped instruction span may still be the losing stream of an existing
`option overlapbranch on` overlap. A length-only decode must establish that
the queued branch target lies strictly inside that span, its own complete
instruction is mapped, and the two instruction ends differ. Flow then applies
the existing overlap halt and warning without lifting the unmapped stream.
These probes emit no p-code or context commits. With an incomplete target or
`option overlapbranch off`, the losing stream is a truncated instruction as
above; reconvergent prefix streams retain the existing overlap policy.

After effective flow classification, including flow overrides and no-return
facts, an unmapped fall-through inside the declared flow range receives an
immediately registered missing halt and the existing unmapped-flow warnings.
Queued branches can resolve through already decoded p-code-free instructions
to that halt, and later stub filling reuses it. Stub filling shares an op
already registered at a cut address only when it is a missing halt; any other
op there, such as a `funcboundflow` no-return halt reached by fall-through, is
left to its own edge and the branch gets a fresh stub. Other queued mapped paths
still run. Known-function bounds take precedence, and flow outside a declared
range retains the caller's fatal, warning or ignore policy before mapping
recovery. Explicit branches can cross gaps into mapped destinations. Branch
probes also use this authoritative map, so a warmed zero-filled loader window cannot
invent a mapped target. This recovers incomplete flow without inferring a
different ISA or claiming that an unavailable path returns.

**Nested operand expressions.** An operand's defining expression may name
another operand of the same constructor: the PowerPC64 `rldic`, `rldimi` and
`rldcr` masks and every PA-RISC immediate branch target and 11-bit immediate
do. An operand named in an expression is evaluated at the out-of-band state its
constructor sets up
(`crates/unlace-sleigh/src/sleigh.rs (OobWalker)`, the C++
`setOutOfBandState`), and an operand named inside that operand's own
expression is evaluated from the same state. A constructor-relative operand is
offset from the state's simulated offset, as upstream does; an operand whose
offset depends on an earlier variable-length operand reads its resolved child
of the real constructor node, where upstream would index the temporary state,
which has no children. A reference to another constructor, an operand not yet
resolved, or a chain deeper than the parse-depth limit fails that instruction's
decode instead of reading outside the tree.

**Decode scratch storage.** Every SLEIGH translation checks out a parser
context from the engine-local pool
(`crates/unlace-sleigh/src/sleigh.rs (Sleigh::checkout_context)`).
Checkout resets the parse state, addresses, context words, commit records, and
root node; each child node is reset before it is allocated. The state arena and
its allocation capacities are retained across instructions. Reset empties each
node's child list without clearing its reserved slots; resolution appends children
in operand order as plain arena indices. The list length marks the resolved prefix,
so links need no separate null tag. An operand not yet linked remains unresolved, including during
instruction-local context evaluation. Simultaneously
live main-instruction, `inst_next2`, and delay-slot resolutions hold distinct
contexts, and a guard returns each context after successful translation or an
error. The pool keeps each context in a box, transferring ownership through
pointer moves while retaining its address and scratch allocations. The engine
stores no instruction-result cache; ordinary translations
resolve the bytes and painted context on every call.

Assembly-only rendering borrows the engine's reusable mnemonic and operand
buffers without keeping their `RefCell` borrow across translation or the emitter
callback (`crates/unlace-sleigh/src/sleigh.rs (Sleigh::print_assembly)`).
Each render clears its logical text while retaining allocation capacity, and
returns the buffers after either success or a decode error. Failed decodes emit
no assembly; later successful renders cannot observe text from an earlier call.

Read-only constructor and p-code-template queries borrow the parser or builder
cursor (`crates/unlace-sleigh/src/sleigh.rs (ParserWalker)`). Navigation
through such a view first copies the cursor, preserving its parent's position,
depth, and breadcrumb path. Ordinary disassembly traversal owns its cursor. A
cross-build view reads the constructor tree, instruction bytes, and context words
from the target context, and instruction/next/reference addresses from the caller
context.

Speculative consumers can open a `Translate::context_scope` to decode against a
private context database and cache. Dropping the scope restores both; committing
it retains the changes. Copies preserve explicit write boundaries and tracked
registers, so later context writes behave as they would in the original database.
Nested scopes restore their parent, and `probe_original` temporarily restores
the context saved before the outer walk. A scope can protect one variable while
allowing other instruction-local state changes
(`crates/unlace-sleigh/src/contextscope.rs`). Stateless translators
return no scope.

The optional `Translate::one_instruction_reusable` contract also returns a context
key when the result can be retained by an analysis consumer. SLEIGH certifies only
lifts without context commits or delay slots and with exactly one parser-context
query across lifting and assembly rendering. Nested reads, including
`inst_next2`, decline reuse. The consumer must retain the same image, translator
and instruction address and compare every effective context word, including
read overrides, before replaying p-code; other translators decline by default.
Changing an override invalidates a key when it changes the decoded context;
equivalent database and override values still match. This certificate does not suppress any
translation or context effects inside SLEIGH itself.

Constructor matching and operand-expression evaluation retain the concrete
walker type when available, allowing direct instruction and context reads.
Symbol validation, context operations, assembly rendering and handle templates
retain that type through their calls as well. Runtime walkers lend resolved
handles to scalar template reads instead of cloning the handle and all its
address-space references. Exports and emitted varnodes still own the spaces
they retain. Other walker implementations can supply owned handles through the
same interface (`crates/unlace-sleigh/src/handleview.rs`).
Erased walkers still use the same interfaces. Decision branches and terminal
patterns retain their original order, and matching captures the same pattern
leaf before any later context changes. Expression leaves evaluate directly;
compound expressions retain left-to-right evaluation and wrapping arithmetic.

Decoded compound expressions prepare an evaluation plan on their first runtime use
(`crates/unlace-sleigh/src/expressionplan.rs`). It folds only
literal constant subtrees and combines operations with leaf or constant operands,
preserving the order of all instruction, context, address and
operand reads. Subtraction followed by an arithmetic shift and a one-bit mask
executes as one step with the same wrapping arithmetic and masked shift count.
Other right subtrees use bounded scratch storage; expressions requiring more
scratch retain tree evaluation. The original tree remains the
source for encoding, inspection and replacement-value evaluation. Mutable child
access and operand remapping invalidate the plan. Preparation does not evaluate
a division by zero; its failure remains conditional on runtime evaluation.

Constructor-relative primitive operands also bind their token-field or literal
definitions on first use (`crates/unlace-sleigh/src/operandplan.rs`).
Each read computes the original out-of-band offset and evaluates against the
current instruction bytes. Variable offsets, missing definitions and other
expressions retain ordinary symbol resolution and its failure order. Mutable
specification access invalidates these engine-local bindings; independent
symbol-table walkers use ordinary resolution. Subsequent reads access the bound
definitions directly, entering initialization helpers only for a missing plan.

**Instruction-byte window.** A parser context buffers a fixed 16 bytes of the
instruction stream, the longest encoding any supported processor admits. Reads
out of that window are bounded by their *starting* byte: a read that begins at or
past the window is the architecture's instruction-length limit and raises bad
data, which the decode-error policy below turns into a truncating halt. A read
that begins inside the window but runs off its end is not an error, because
pattern matching walks a candidate pattern in fixed-width words however narrow
the pattern really is: matching an instruction at the length limit issues a
word-sized read straddling the end of the window. Those tail bytes are outside
the matcher's mask and cannot affect the verdict, so unlace reads them as zero
rather than rejecting the instruction (the C++ reads whatever memory follows the
buffer). Without this an x86-64 15-byte alignment NOP — clang's `-O2` loop
padding — failed to decode, truncating flow at the padding and dropping the loop
it preceded from the emitted function.

Where a four-byte word fits in the buffer, common one-to-four-byte reads use a
packed big-endian word
(`crates/unlace-sleigh/src/instructionbytes.rs`). Bit fields wholly
inside that word use shifts of the packed value. Tail reads and wider or unusual
fields retain zero padding and masked shifts. Little-endian fields up to eight
bytes use native byte swaps; other widths retain the original bytewise behavior.

**Decode-error policy** (`flow.rs (FlowInfo::handle_decode_error)`). An
unimplemented instruction is, per the flags, treated as a NOP
(`ignore_unimplemented`), re-thrown (`error_unimplemented`), or replaced by an
*artificial halt* that truncates flow at that point. Undecodable bytes (bad
data) halt-truncate or throw; a branch outside the flow bounds is
recorded on the `unprocessed` list (`flow.rs (FlowInfo::new_address)`, via `handle_out_of_bounds` for the warn/throw policy); flow into the
middle of an already-decoded instruction is a *reinterpretation* (warn, or
throw under `error_reinterpreted`). An artificial halt
(`flow.rs (FlowInfo::artificial_halt)`) is a synthesized RETURN annotated with
its cause (`unimplemented`/`badinstruction`/`noreturn`/`missing`), so the CFG
always terminates cleanly and the printer can attribute the truncation.

**(unlace) A decode-failure halt says so (`decodehalt.rs`, always on).**
Three of the four halt causes are decode failures rather than program returns:
`badinstruction` (the bytes at the address are not an instruction),
`unimplemented` (SLEIGH decoded them but has no semantics for them) and
`missing` (the address was never decoded at all — the out-of-extent branch stub
of §2.2). `flow.rs (FlowInfo::handle_decode_error)` buffers
the truncation warning at the failing address and, once per function, the header
warning naming the cause
(`decodehalt.rs` holds the strings), and P9 renders the halt as the
pseudo-call naming it rather than as a `return;` (chapter 09). Before this, the
halt was planted and terminated the CFG but reported nothing: a function that
ran off into bytes it could not read printed a bare `return;` and `error: null`,
indistinguishable from a function that returns normally. The fourth cause,
`noreturn`, is not a decode failure and is deliberately untouched: it is already
reported on the call it follows.

**(unlace) Silent losses named (`honestgaps.rs`, `option honestgaps`, default off).**
Under the `ignoreunimplemented` policy `handle_decode_error` steps over an
instruction SLEIGH decodes but has no p-code for, as a no-op, and only the
once-per-function header said the function ignored unimplemented instructions,
never which. With the option on it also buffers `notmodelled: <insn> has no
p-code semantics; stepped over as a no-op` at the instruction's address, the
instruction named from the decoder's `Unimpl` text (mnemonic and operands, else
`instruction`). The decompile drive does the same for a DWARF register local
that `seed_dwarf_register_locals` could not bind (chapter 01): a header warning
`debuginfo: DWARF local <name> (range from 0x...) not bound: no write of its
register reaches it`. A prototype the load withheld is recorded once per image
in the architecture table `WithheldPrototypes` (by entry address, else by name,
with its cause): a library signature declaring a `float` or `double` on a
target whose convention does not return a `double` whole (the libc tables'
load-time partition, a declared libc function, the ARM list `armfloatreturn`
does not apply), and a DWARF signature `build_pieces` could not type. The
decompile's seed (`honestgaps.rs (seed)`) names it as
`withheldproto: ...; not applied` in the header of the function it belongs to
and at each call whose callee it is, skipping a warning already buffered with
the same type, address and text (a re-flow also drops the function's analysis
warnings before it seeds again, and the commit adds each comment once). The tags are lowercase, so the printer's warning
records file them under the kinds `notmodelled`, `debuginfo` and `withheldproto`, and the CLI's
`--json` lists them with the rest and totals every kind in `warning_kinds`
(`docs/cli.md`). Off by default because the extra comments change the text of
every function with such a gap; the losses that already print (decode-failure
halts, `funcboundflow`, budget and out-of-bounds truncation, unrecovered jump
tables) are unchanged either way.

A target may attach advice to a bad-instruction halt (`decode_failure_hint`); no
target does today. The generic PowerPC64 `isel` hint went away once those
languages decoded `isel`.
ELF machine/class, ABI version flags and GNU vector calling-convention attributes
do not identify a complete ISA: the A2 variants have conflicting vector encodings,
and a matching `isel` word can also be data. The user must choose the variant
appropriate to the input. The ordinary truncation marker remains.

**The instruction budget.** `max_instructions` (100000 by default, `option
maxinstruction N`) caps how many instructions one function's flow may decode.
Reaching it either throws — `option errortoomanyinstructions on`, upstream's
default and what the datatest harness and the interactive console take — or
truncates: a `badinstruction` artificial halt is planted at the address that
would have been decoded, registered in `visited` as the instruction there so a
branch arriving later resolves to it, marked as starting a basic block and an
instruction, and reported with no fall-through, which ends the walk down that
path. Each address still queued is halted the same way when it is popped, so
the decode stops at the budget rather than running to the end of the reachable
body; a function of 1.8 million instructions truncates in seconds instead of
exhausting memory. The truncated function carries a warning header naming the
budget and the option that raises it. The CLI's decompiling surfaces (`unlace
decompile`, `decompile-all`, `decompile-project`, `decompile-graph`) choose the
truncating policy (DIV-120) so an oversized function yields the body unlace did
decode; the engine default is still upstream's throw.

**Call sites.** Each CALL gets a `FuncCallSpecs` bound to the op
(`flow.rs (FlowInfo::setup_call_specs)`, shared body `build_call_specs`): the
callee entry is resolved through the symbol table (`FlowEnvironment::query_call`),
the call op's input 0 is replaced by an *fspec annotation* Varnode carrying the
spec's identity, per-call prototype overrides are applied before the query
(`override prototype`), and a declared callee prototype is copied onto the spec
(unlace performs the C++ `ActionDefaultParams`-time copy here, excluding inline
calls, with identical observable result — the analysis path locks callee
signatures before flow runs). A CALLIND keeps its computed target as input 0
(`setup_callind_specs`) unless a previous decompilation pass planted an
indirect override (de-indirection), which converts it to a direct CALL before
the spec is built. (unlace `vtabletypes`) With that option on, the register the
CALLIND read its target from (`flow.rs (FlowInfo::jump_target_carrier)`) is
recorded on the new spec, so the trial scoring of chapter 04 does not take it
as an argument: a virtual call de-indirected through a folded vtable slot
(chapter 05) loaded the method's address into that register only to jump
through it. (unlace `msvcsig`) One more CALLIND is made direct there: a
call through an import slot whose MSVC-declared prototype the analysis commit
locked onto the import symbol (01, `msvcsig`)
(`crates/unlace-lift/src/p2_lift/msvcimportcall.rs
(locked_import_slot)`). The target must be the word the call's own instruction
reads from a constant address (the folded `COPY` of a memory varnode, or a
`LOAD` through a constant pointer, through temporary copies), that address must
be in the slot set the commit recorded and painted external by `peimportcall`,
and the FunctionSymbol there must carry an input-locked prototype. Left to
`ActionDeindirect`, such a call is resolved only after the default-model
prototype it was given has been merged against a locked `__thiscall` or
`__cdecl` one, which fails and restarts the function to plant exactly this
override; resolving it here removes that restart, which on a 32-bit MSVC C++
image nearly every function paid. Other import calls stay indirect here: one whose
symbol carries only parked pieces (the Win32 and libc tables) takes their
parameters from the early slot query of `ActionDefaultParams` (04), where the
caller's own writes back them, and becomes direct at `ActionDeindirect`, which
keeps that declaration. A call to any address that set names, direct or made direct
here, copies the locked prototype at flow and so never reaches the
`ActionDefaultParams` arm that gives a declared callee the stack adjustment its
parameter list implies (`calleeprotostack.rs`, 04); the copy applies that rule
itself
(`crates/unlace-bandb-base/src/p4_calls/calleeprotostack.rs
(resolve_declared_extra_pop)`), so a
`__thiscall` or `__stdcall` import pops what its declaration says instead of
what the push run in front of it suggests. (unlace `relronoreturn`, default on)
A third CALLIND can be made direct there: one whose target is the word read from
a relocated read-only slot (an `R_*_RELATIVE` `.got` word inside the image's
`dynreloc_const` ranges), when that word holds the entry of a function flagged
no-return (`p2_lift/msvcimportcall.rs (call_slot)` finds the slot,
`infra/decompile_drive.rs (relro_noreturn_call)` reads it). The halt is then
planted during this flow, where upstream binds the call in `ActionDeindirect`
and restarts the whole function to plant it. A PIE without a PLT reaches every
Rust panic helper that way, so the restart roughly doubled the cost of such a
function; the option removes it, at the price of the second pass's other
benefits (every other call the first pass bound is direct from its flow on),
which is why it is not the default.

(unlace `guarddispatch`, on by default) A CALLIND through a Control Flow Guard
dispatch slot calls the register the dispatch routine jumps to
(`crates/unlace-lift/src/p2_lift/guarddispatch.rs
(calls_through_slot)`). An image built with `/guard:cf` makes every
function-pointer call as `mov rax, target; call [__guard_dispatch_icall_fptr]`;
the routine in the slot validates `rax` and jumps to it with the argument
registers untouched. Taken literally the call prints as a call of the slot and
the real target, which only the routine reads, drops out of the output. The PE
load configuration names the slots (01, `unlace_peloadconfig`), and the commit
records `__guard_dispatch_icall_fptr` and `__guard_xfg_dispatch_icall_fptr`.
When the call's target is the word its own instruction reads from one of them
(the same constant-address test as `msvcsig` above), input 0 becomes the target
register, `RAX`. Only the x86-64 ABI calls through the dispatch slot; x86 and
AArch64 call the check routine and then the target directly. The call stays indirect, so its prototype is recovered as for any call through a pointer.
The validation itself is not shown, as with the compiler spec's
`_guard_dispatch_icall` call-fixup, which covers a direct call of the routine but
not a call through its slot. The flag is the reading choice; `option
guarddispatch off` prints the call through the slot as the instructions state it.
Only a PE commit fills the slot set, so the rule is inert on every other input.

(unlace `--assert callee`) The reader can plant the same indirect override. A
front-end parks `call site -> callee entry` facts on the architecture, keyed
by the entry of the function that holds the call, and
`crates/unlace-lift/src/p2_lift/calleeoverride.rs (seed)`
copies a function's facts into its `Override` store when the flow build
creates the `Funcdata`. `setup_callind_specs` then makes the named CALLIND a
direct CALL, so the callee's name and its declared prototype apply. A named
BRANCHIND is a tail call: `recover_jump_tables` asks the environment
(`FlowEnvironment::stated_callee_site`) before it tries a table, and for a
stated site `flow.rs (FlowInfo::stated_tail_call)` builds the CALLIND, the
direct call and, unless the callee never returns, the return, with no warning.
After the follow, `calleeoverride.rs (audit)` looks for a direct call to
the stated callee (or, for a PLT stub, to the definition the stub binds) at
each site and records every site that has none on the
`Funcdata` (`note_rejected_callee_override`); the front-ends report those as
refused directives. A function with no parked fact pays one map lookup.

`flow.rs (FlowInfo::check_for_flow_modification)` then
applies the callee's flow effects: an *inline* callee queues the op for
injection; a *no-return* callee gets an artificial halt planted directly after
the call plus the `"Subroutine does not return"` warning, so flow never runs
off past the call (§2.4 covers who supplies the no-return facts).

**Inlining** (`flow.rs (FlowInfo::inline_sub_function)`). The callee's p-code
is generated by a nested `FlowInfo` over a fresh callee `Funcdata`
(`inline_flow`), then woven in by one of two models. The *EZ model* — the
callee is a straight-line leaf (no call or branch ops, `check_ez_model`) —
clones the body re-addressed to the call site and deletes the call: the inline
is invisible to addressing. The *hard model* clones the body at its original
addresses, replaces each callee RETURN with a BRANCH to the op after the call
site, and rewrites the CALL itself into a BRANCH to the callee entry; it is
refused (`test_hard_inline_restrictions`) when there is no op to return to or
the return address equals the call address. A recursion set
(`inline_recursion`, forwarded into nested flows) stops a function from being
inlined into itself; the failure mode of every refusal is the same — the call
stays a call — with a per-cause warning (`"Could not inline here"` for
recursion; distinct no-fallthrough / return-address messages from
`test_hard_inline_restrictions`; a missing callee body refuses silently).

**P-code injection.** Three substitution kinds run from a queue drained during op
generation (`flow.rs (FlowInfo::inject_pcode)`); the user-op and call-fixup kinds
share one weave (`flow.rs (FlowInfo::do_injection)`), while inlining uses its own
clone weave (above): emit the payload's p-code at the dead-list
tail, classify its control flow, optionally mark it *incidental copy*, splice
it after the original op, repoint the target map, and destroy the original op.

Classification queues an op the moment it is decoded, so the drain must run once
per flow-discovery round or the ops queued by a later round are dropped: the
queue is drained after the initial fall-thru phase (`generate_ops`) and again
after every jump-table round (§2.3), and a drain clears the queue. Which round
found a block therefore has no bearing on whether its injections are applied —
a spec-declared eraser such as ARM's `setISAMode` `<callotherfixup>` removes the
op uniformly, whether the block was reached by fall-thru or only through a
recovered switch table.

- **Injection library.** `crates/unlace-middle/src/substrate/pcodeinject.rs
  (PcodeInjectLibraryBase)` holds the payloads — `<callfixup>`,
  `<callotherfixup>`, and executable-p-code snippets — decoded from the
  compiler/processor specs; their SLEIGH source bodies are compiled to p-code
  templates by `crates/unlace-middle/src/engine/inject_sleigh.rs
  (parse_inject)` and emitted at a concrete address through
  `inject_sleigh.rs (SleighInjectEngine)`. Local compilation needs a loaded
  language, so in ghidra mode — no `.sla` — the payloads are registered but
  never compiled, and each injection instead asks the host to lift the snippet
  for that one call site (chapter 00). The metadata half is unchanged either
  way; only the ops change source.
- **User ops.** `crates/unlace-middle/src/substrate/userop.rs
  (UserOpManage)` manages the CALLOTHER black-box ops (unspecialized, datatype,
  volatile, segment, jump-assist, injected). A CALLOTHER whose user op is
  *injected* is queued during classification and replaced by its
  callother-fixup body (`flow.rs (FlowInfo::inject_user_op)`) — e.g. the ARM and
  MIPS `setISAMode` no-op, which dead-code elimination then removes. A user op
  with no declared fixup is not injected and survives as a black box the printer
  renders as a call; that is the intended rendering for unimplemented semantics
  (ARM `DataMemoryBarrier`, the coprocessor family), and only a *declared* fixup
  makes disappearance the correct outcome.
- **Dynamic payloads.** A `<pcode dynamic="true"/>` body has no SLEIGH source:
  Ghidra builds its p-code in Java for each injection site. The Dalvik
  compiler spec declares one callother-fixup of this kind, `moveRangeToIV`,
  which an `invoke-*/range` instruction uses to copy a run of frame registers
  into the input registers `iv0..`. For a DEX image with `option dexmodel` on,
  `crates/unlace-decomp/src/infra/decompile_drive.rs (emit_inject)`
  answers it from `crates/unlace-middle/src/p0_knowledge/dex.rs
  (emit_range)`: one 4-byte COPY per register, as `InjectPayloadDexRange` emits.
  Any other dynamic payload still goes to the translator, which fails it on a
  standalone run (chapter 00).
- **Call fixups.** A call spec carrying an inject id has its CALL/CALLIND
  replaced by the named call-fixup payload
  (`flow.rs (FlowInfo::inject_sub_function)`); the payload's parameter shift is
  transferred to the call spec created inside the woven body, and a nested call
  to the same fixup entry is cycle-broken (it must not re-inject).
- **unlace-owned call fixups.** Payloads are not required to come from a spec
  file. `crates/unlace-lift/src/p2_lift/msvcftol.rs` synthesizes
  a `<callfixup>` in Rust and registers it through the same
  `PcodeInjectLibraryBase::decode_inject` path immediately after the cspec's own
  (`architecture.rs (decode_unlace_call_fixups)`), so the vendored spec tree stays
  byte-identical to upstream while `parse_inject_all` still compiles every body
  together. Its subject is the MSVC x86-32 float-to-integer CRT helper family
  (`__ftol`, `__ftol2`, `__ftol2_sse`, and the `ftol2.obj` SSE2 entries
  `__ftol2_pentium4` / `__ftol2_sse_excpt`). MSVC passes that helper's argument in the
  x87 stack top `ST0` and returns the `__int64` in `EDX:EAX`, but no vendored
  x86 prototype model has an `<input>` `<pentry>` naming an x87 register — `ST0`
  appears only as an `<output>` pentry — so `FuncProto::characterize_as_input_param`
  answers `NoContainment`, `Heritage`'s call guard never appends the argument,
  nothing reads `ST0`, and the entire feeding `FLD` chain is dead-code eliminated
  along with every register it was based on (on a `__thiscall` method, the `ECX`
  `this` pointer). Widening a shared prototype model with an `ST0` input pentry
  is *not* the alternative: it invents a phantom `float10` first argument on
  every unrelated stack-passing callee. The fixup body pops the return address
  the `CALL` pushed (mandatory — x86 `CALL rel32` lifts as
  `push44(&:4 inst_next); call rel32`, so a replaced CALL otherwise leaks the
  pushed address into the next call's arguments), truncates `ST0`, and pops the
  x87 stack. The result width follows the helper: `__ftol` and `__ftol2` return
  the full `__int64` in `EDX:EAX`, while the SSE2 entries of `ftol2.obj`
  (`__ftol2_sse`, `__ftol2_pentium4`, `__ftol2_sse_excpt`) get a second payload
  that writes `EAX` alone. Their SSE2 path is `cvttsd2si eax, …` and never
  touches `EDX`, and MSVC emits them only for 32-bit conversions; a body that
  wrote `EDX` would make a caller returning the converted `int` on one path and
  an untouched `EDX` on another look like it returns an `EDX:EAX` pair, with the
  untouched `EDX` promoted to a phantom register parameter. Registration is
  guarded to x86-32 (every register the body names must resolve, at a 4-byte
  code space) because the body would not compile elsewhere and the helper exists
  nowhere else.
  Registration is skipped outright in ghidra mode, exactly as the Cortex-M
  callother fixup below is and for the same reason: with no local `.sla` there
  is nothing to compile the body against, so the payload could never install.
  Skipping it also keeps the x86-32 language test — which asks whether this
  language has `ST0` — off the wire, since every 32-bit language reaches it (the
  test's cheap half is the code-space width, which ARM32/MIPS32/PPC32 all pass).
  The analysis-tier call-fixup installer tags the payload onto its targets at
  `read symbols`.
- **Arithmetic runtime helpers.** `crates/unlace-lift/src/p2_lift/arithhelpers.rs`
  registers one more family of unlace-owned call fixups beside `unlace_msvcftol`'s,
  through the same `decode_unlace_call_fixups` seam: the helpers a 32-bit target
  calls for an operation it has no instruction for. Their contracts are
  documented outside any decompiler (the libgcc manual's integer library
  routines, the Arm run-time ABI, the MSVC CRT as Wine implements it), so each
  helper's body is simply the operation: `__udivdi3` becomes `r:8 = a / b`
  written to the return registers, and the caller prints `a / b` after normal
  simplification. Off (`option arithhelpers off`), the call keeps the prototype
  inference gives it — two `long long` operands as four 32-bit words, a dropped
  `__aeabi_idiv` divisor, or a `void` caller when a `__stdcall` helper's popped
  16 bytes confuse its stack frame. `helper_abi` picks the convention from the
  registers the bodies name at a 4-byte code space. On x86-32 the libgcc
  helpers are cdecl: the body pops the return address the `CALL` pushed, reads
  the operands from the stack above it, and writes `EDX:EAX`; `__divmoddi4` and
  `__udivmoddi4` also store the remainder through their pointer argument. The
  MSVC `_alldiv`, `_aulldiv`, `_allrem`, `_aullrem`, `_allmul`, `_alldvrm` and
  `_aulldvrm` are `__stdcall` and also pop their 16 argument bytes (the dvrm
  pair returns the remainder in `EBX:ECX`), and `_allshl`, `_allshr`, `_aullshr`
  shift `EDX:EAX` by `CL`. On 32-bit ARM a `long long` travels in r0:r1 and
  r2:r3, low word in the lower register on little-endian and in the higher one
  on big-endian, and a shift count in r2; `__aeabi_uldivmod`/`__aeabi_ldivmod`
  and `__aeabi_uidivmod`/`__aeabi_idivmod` write both quotient and remainder, and
  dead-code elimination keeps the one the caller reads. The libgcc 32-bit
  division helpers (`__divsi3`, `__udivsi3`, `__modsi3`, `__umodsi3`) share the
  ARM table. A p-code shift by the operand width or more yields zero (or the
  sign), which is what the MSVC shift helpers compute for counts of 64 and
  over; the libgcc and AEABI helpers leave those counts undefined, as C does.
  Each helper is targeted both as spelled and with one more leading
  underscore, because the installer only ever prepends underscores to a
  function name and COFF and Mach-O spell the C name `__udivdi3` as
  `___udivdi3`. Two install changes make the helpers reachable where their
  names are: the console's commit of the call-fixup facts also probes every
  function name an analysis pass recovered (an MSVC image names its CRT helpers
  only in its PDB), and it tags every FunctionSymbol of a matched name (a Thumb
  helper also has an `entry|1` twin, and its calls resolve to the even entry).
  The gate is on the install, as for `msvcftol`.

- **AEABI floating-point helpers** (`crates/unlace-lift/src/p2_lift/aeabifloat.rs`,
  option **`aeabifloat`**, default on): on 32-bit ARM the same payload list
  carries the run-time ABI's floating-point helpers (RTABI32 4.1.2), each body
  the IEEE 754 operation the helper performs on its base-standard operands.
  `__aeabi_dadd`, `dsub`, `drsub`, `dmul`, `ddiv` and the `f` forms are
  `f+`, `f-` (operands swapped for `rsub`), `f*`, `f/`; the `int`
  comparisons `dcmpeq`, `dcmplt`, `dcmple`, `dcmpge`, `dcmpgt` and the `f`
  forms are `zext` of `f==`, `f<` or `f<=` (swapped for `ge` and `gt`),
  false on unordered operands as the helpers return 0, and `dcmpun`/`fcmpun`
  are `nan(a) | nan(b)`; `d2iz`, `d2lz`, `f2iz`, `f2lz` are `trunc`, `d2uiz`
  and `f2uiz` the low word of an eight-byte `trunc` (exact for every result the
  C cast defines), `d2f`/`f2d` `float2float`, and `i2d`, `l2d`, `i2f`, `l2f`
  `int2float`, with `ui2d`/`ui2f` converting the zero-extended word. A `double`
  is joined from r0:r1 (r2:r3 for the second operand) low word first on
  little-endian and high word first on big-endian, and an eight-byte result is
  split back the same way. So `return __aeabi_dadd(a,b);` prints
  `return a + b;` and `dscale`'s `__aeabi_dmul(v, __aeabi_i2d(n))` prints
  `return v * (double)n;`. `d2ulz`, `f2ulz`, `ul2d` and `ul2f` have no exact
  p-code reading and keep their calls, typed by `aeabisigs`, as do the
  flag-returning `cdcmp`/`cfcmp` comparisons. Each payload also targets the
  libgcc routine the helper is (`__adddf3`, `__muldf3`, `__extendsfdf2`,
  `__floatsidf`, `__fixdfsi`, `__fixdfdi`, ...): libgcc defines both names at
  one address, a static image may name the function by either, and newlib
  calls the libgcc names directly. The three-way `__eqdf2`/`__ltdf2` family
  returns something else and keeps its calls. Default on: RTABI32 requires the
  helpers to be round-to-nearest IEEE 754, so the fold changes no value on a
  conforming image; flip it off for a firmware that links non-IEEE helpers
  (flush-to-zero, a fixed-point shim) under the AEABI names. The gate is on the
  install, as for `arithhelpers`. The load-time call-fixup scan
  (`unlace_analysis::callfixup`) matches every unlace family whatever its option,
  because it runs before the run's options reach the architecture; the commit
  re-derives each fact's fixup through the gated map. Gating the scan too left a
  relocatable object's undefined `__aeabi_*` imports, which only the scan names,
  without the fixup. On a hard-float caller that moves the `r0:r1` result into
  `d0` (`vmov d0, r0, r1`), the two halves join back into the value through
  `maskjoin` (chapter 3).

- **Objective-C ARC bookkeeping** (`crates/unlace-lift/src/p2_lift/objcarc.rs`,
  option **`objcarc`**, default on): the second unlace-owned call-fixup family,
  registered next to the one above. An ARC-compiled method is strewn with
  `objc_retain(x)`, `objc_release(x)`, `v = objc_retainAutoreleasedReturnValue(v)`
  and `objc_storeStrong(&slot, x)`, and with the runtime stubs untyped the value
  a helper hands on is lost (`v2 = objc_retainAutoreleasedReturnValue();`). The
  payloads replace each call with what it stands for: a pass-through helper
  (`objc_retain`, `objc_autorelease*`, `objc_retainAutoreleasedReturnValue`,
  `objc_claimAutoreleasedReturnValue`, `objc_retainBlock`, …) is `x0 = x0` marked
  an incidental copy, so its result keeps the argument's variable; `objc_release`
  has no effect; `objc_storeStrong(slot, value)` is the store `*slot = value`;
  clang's outlined arm64 `objc_retain_x<N>` / `objc_release_x<N>` — the object in
  `x<N>`, a retain's result in `x0`, outside every calling convention — are the
  same per register, `x0` through `x28`: a retain copies `x<N>` into `x0`, a
  release has no effect. Registration is guarded by language (arm64 when
  `x0`..`x30` resolve at an 8-byte code space, x86-64 when `RAX`/`RDI`/`RSI`/`RSP`
  do; the x86-64 bodies pop the `CALL`'s pushed return address as above). The
  install is where the gate lives: the analysis-tier call-fixup installer drops
  every `unlace_objcarc_` payload from its map under `option objcarc off`, and —
  because a Mach-O import is a `__stubs` entry whose FunctionSymbol keeps its
  `sub_` name under a display alias — it tags the stubs by *address* from the
  `LC_DYSYMTAB` indirect-symbol walk (`analyzers/callfixup`, `CallFixupFact::addr`)
  rather than by name. A hidden call writes no `replaced with injection` header
  line. With the calls shown, every imported runtime entry point still carries
  its header prototype (`crates/unlace-analysis/src/analyzers/objc/objcruntime.rs`,
  by stub and slot address: `id objc_retain(id)`, `void objc_storeStrong(id *, id)`,
  `id objc_alloc_init(Class)`, …, and `id objc_retain_x19(id obj @ x19)` returning
  in `x0`), so `obj = objc_retainAutoreleasedReturnValue((objc_object *)objc_msgSend(arg1,sel_inner))`
  reads with its argument. The stage test `tests/stages/objcarc.toml` runs
  `macho_objc_arc_arm64` (clang `-fobjc-arc -O2`) both ways: default,
  `-[Holder total:]` is `v1 = objc_msgSend(arg1,sel_count); v2 = objc_msgSend(arg1,sel_inner); return objc_msgSend(v2,sel_count) + v1;`
  with no release left; off, the five ARC calls are shown typed.
- **unlace-owned callother fixups.** The same freedom applies to the user-op side.
  `crates/unlace-lift/src/p2_lift/cortexmpriv.rs` supplies a
  `<callotherfixup>` body for the ARM user op `isCurrentModePrivileged`, which
  the vendored Cortex-M SLEIGH raises at twelve places. Every VERSION_7M MRS/MSR
  constructor in `ARMTHUMBinstructions.sinc` models its special-register move as
  a *runtime* privilege test — `b:1 = isCurrentModePrivileged(); if (!b) goto
  <notPriv>; <effect>` — so lowering the model literally gives each such
  instruction one extra basic block and two extra CFG edges that the source it
  came from does not have; a Cortex-M `irq_disable`/`irq_restore` pair drops four
  phantom branches into an otherwise straight-line function. The fixup body is
  the constant `1` (its single output operand carries no declared size, so the
  injector binds it to the real CALLOTHER output varnode), which lets the guard
  condition constant-fold and its block and edges die while the real effect
  survives untouched. `architecture.rs (register_cortexmpriv_fixup)` installs it
  between the cspec `<callotherfixup>` dispatch and `parse_inject_all`, only on a
  language whose translator presents the user op and only when no compiler spec
  has already specialized it — so a spec-declared fixup always wins, and every
  non-ARM target is unaffected by construction. That "the core is privileged" is
  an assumption rather than a proof (Cortex-M Thread mode really can run
  unprivileged, and the moves really do read as zero there) is why it is
  `option cortexmpriv`, on by default and reached only on a language that
  declares the user-op. Because
  the architecture bootstraps before any `option` line, the flag is read at the
  *consumption* seam instead — `decompile_drive.rs (is_injected_userop)`, the one
  live per-CALLOTHER predicate that sees the applied options — so with the option
  off the CALLOTHER is never queued, survives as an ordinary black box, and the
  emitted C is identical to a build carrying no such payload.
  `architecture.rs (register_octeon_upstream_fixups)` installs upstream's MIPS
  lifting of `ll`/`lld`/`sc`/`scd`/`sync` the same way for an Octeon language's
  reservation and ordering operations, each registered under its operation's
  name (`inject_sleigh.rs (manual_call_other_fixup_named)`; upstream names
  every manual payload "unknown", so only one could exist), and the same gate
  applies them only under `option octeoneffects off` (chapter 3).

## 2.2 CFG construction

Blocks are built only after *all* ops exist — the deferred second phase
(`flow.rs (FlowInfo::generate_blocks)`). First every referenced-but-undecoded
address gets a `missing` artificial halt so branches have a landing op
(`fillin_branch_stubs`), and the halts planted for addresses flow reached by
*leaving the declared extent* are registered in `visited` as the instruction
there, so `collect_edges` can resolve the cut edge to them. The rest are not:
an undecoded address inside the extent means an op that should exist does not,
and resolving that to a halt would silently shorten a function instead of
reporting the defect, so it keeps upstream's "Could not find op at target
address". Then `collect_edges` walks the dead list
pairing branch ops with their target ops — a BRANCHIND contributes one edge per
recovered jump-table entry, deduplicated, and contributes *no* edges when no
table was recovered (the partial-flow "assume no branches out" rule);
`split_basic` cuts the list into blocks at the `startbasic` marks planted
during classification; `connect_basic` materializes the edges. If the entry
block acquired an in-edge (a loop back to the function start), a fresh empty
entry block is prepended so the entry is always in-degree 0. Jump-table
recovery runs *between* the phases (§2.3) precisely because it needs blocks and
SSA over a function whose blocks are not built yet — it gets them on a clone.

The same machinery serves the restart loop: when a late pass requests a
restart, `decompile_drive.rs (run_pipeline)` re-follows flow on the cleared
`Funcdata` (`refollow_flow`; per-function overrides survive the clear, recovered
jump tables do not — they are re-recovered) and re-runs the action pipeline, at
most 8 cross-flow restarts before keeping the last analyzed IR.

**(angr) Tail-call jumps — `option tailcalljump`, default on (DIV-14),
`crates/unlace-lift/src/p2_lift/tailcalljump.rs
(unlace_is_tail_call_branch)`.** At `-O2` a "call X then return" tail compiles to
a direct `jmp X`. Decision rule: a `CPUI_BRANCH` whose direct machine-address target is the
entry of a *known function* (including a PLT thunk) that is not the current
function's own entry is a tail call, unless the target lies inside the current
function's caller-declared extent or an exact-address `flow ... branch` override
was applied at that instruction, turning its call into this branch. The explicit
extent makes an independently discovered interior entry an intraprocedural
destination; a genuine veneer target outside its declared extent remains a tail
call. The flow override owns precedence over the inferred call and is resolved
before either `tailcalljump` or `tailcallframe` is consulted. An override at
another instruction, of another kind, or refused does not suppress recovery; a
`branch` override on an instruction that already branches (a tail `jmp`) has no
call to rewrite and is refused. The
rewrite lives in the BRANCH arm of
`flow.rs (FlowInfo::xref_control_flow)`: the BRANCH becomes a CALL with a full
call spec, an artificial RETURN is planted after it (unless the callee is
no-return, whose halt was already planted), and a
`tailcalljump: recovered tail call` warning makes the introduced call
attributable. Without it the follower walks *into* the PLT thunk, whose body is
an indirect GOT jump; jump-table recovery fails on it and the function renders
a `(*dat_...)(...)` computed call with a `"Treating indirect jump as call"`
warning. Two datatests (Long double #1/#2) opt out per-test.

**Bounded conditional tails.** With an explicit extent, a machine-address
`CPUI_CBRANCH` to another known function's entry outside that extent is the
conditional form of the same direct tail. Both `on` and `direct` recover it
when the branch is the instruction's last p-code op. The taken path receives a
CALL with normal callee prototype and flow-effect setup, followed by RETURN
(or the callee's no-return halt); the false path skips that block and continues
at the next instruction. Each path keeps its own register state, so argument
swaps on the false path cannot change the taken call's inputs. The local taken
block has a stable, effect-free COPY before the call so its relative branch
target survives explicit callee inlining or call-fixup injection; ordinary
dataflow cleanup removes that unused copy.

An entry inside the asserted extent stays local, and a target that is unknown,
mid-function, self-directed, or a relative p-code destination is never recovered
by this rule. It does not infer conditional tails from frame teardown. A
conditional with remaining p-code in its instruction keeps the original flow,
as does an unbounded conditional. `off` retains clipping for an out-of-extent
conditional even when its target is declared. A false edge that itself crosses
the bound still receives the missing halt and out-of-bounds warning.
`tests/stages/conditional-tail.toml` pins argument order, both direct modes,
backward value-returning tails, no-return callees, inlining, and these refusals.

`option tailcalljump` takes three values. `off` disables the rule, `direct`
applies it to direct jumps only, and `on` (the default) also applies it to a
computed jump with exactly one destination. A linker veneer or long-branch
stub (`ldr r1,[pc]; bx r1`, `ldr pc,[pc,#-4]`, the Thumb `ldr r3,=f; bx r3`)
reads its target from a read-only literal, and jump-table recovery turns that
into a table whose every entry names the same address
(`tailcalljump.rs (unlace_sole_table_destination)`). Under `on`,
`flow.rs (FlowInfo::recover_jump_tables)` turns that jump into a tail call when
the address is another known function's entry and one of two things holds
(`tailcalljump.rs (unlace_is_tail_call_table)`):

- following the address can only end in `halt_missing()`: it lies outside
  the function's declared extent, or the image has no bytes there (the
  synthetic extern slot a relocatable object's `tail ext` or `jr` through a
  GOT reaches); or
- no explicit caller extent is supplied and the call states everything the callee's body would
  (`tailcalljump.rs (tail_call_states_the_body)`). The callee's prototype
  is stated: input-locked on its symbol, or parked as pieces by a
  declaration, DWARF, a library signature or a demangled C++ name, which
  `ActionDefaultParams` copies into the call
  (`tailcalljump.rs (stated_by_pieces)`), so it fixes the call's
  arguments. And either that prototype says the callee returns nothing, or the
  function's own output is stated. A function whose output is left to
  recovery never takes a tail call's return value, so with an unstated output
  the call would print `void` where the copied-in body returns the callee's
  result.

  Only a stated `void` says the callee returns nothing: a `void` return type
  in the pieces, or a locked `void` output on the symbol's prototype
  (`tailcalljump.rs (stated_by_proto)`). Pieces with no return type
  leave the return to recovery, which is what `cppsig` parks, because a C++
  mangled name encodes the arguments but not the return type; such a return
  is unknown, not `void`. The function's own output counts as stated only
  when its parked pieces name a return type or return storage, or its
  symbol's prototype locks the output
  (`tailcalljump.rs (output_stated_by_pieces)`). So a C++ veneer or a
  `-mlong-calls` stub into a C++ function keeps the copied-in body unless
  DWARF or a declaration states a return type.

The table is then dropped and `flow.rs (FlowInfo::recover_table_tail_call)`
gives the BRANCHIND a code reference to that entry, as upstream
`RuleSwitchSingle` does for a one-destination switch, and the now-direct jump
takes the direct rewrite above (`flow.rs (FlowInfo::recover_tail_call)`): a
CALL with the callee's call spec, then the artificial RETURN or the callee's
no-return halt, and the `tailcalljump:` warning. The register the jump read
its target from (`flow.rs (FlowInfo::jump_target_carrier)`, traced through
the COPY and mask ops of the jump's own instruction) is recorded on the call
spec, and input recovery marks a trial on it unused
(`funcdata_callsite.rs (check_input_trial_use)`): its value is the callee's
own address, never an argument.

In every other case, unless the GOT-slot rule below takes it, the old behaviour
stays: the follower walks into the callee through the table, and
`RuleSwitchSingle` (03 §3.2) then turns the jump into a direct branch, so the
callee's body is copied in as straight-line code. That copied-in body stands
in for a call, but it still shows the callee's return value and the arguments
it reads, which a call with no stated prototype would lose: a single-function
decompile cannot recover a tail call's arguments or return value without
one. The same holds for a multi-entry table whose entries all name one
function. Only a one-entry table whose index is not a constant keeps its
one-case `switch`.
Outside a declared extent a callee with no prototype is still tail-called and
is printed with whatever arguments the function's own registers show and no
return value, exactly as a direct `b f` there is. A destination that is not a
known function entry keeps the table, and outside a declared extent it still
meets the out-of-bounds halt. A `flow ... branch` override cannot veto this
per site: `override_flow` refuses `branch` on a computed jump, so the only
switch is the option value.

**(unlace) Tail calls through a GOT slot — part of `tailcalljump` (GH-904),
`crates/unlace-bandb/src/p4_calls/gottailcall.rs`.**
A position-independent tail call loads its target from a GOT slot and jumps
through it: MIPS `lw $t9,%call16(f)($gp); jr $t9`, x86-64 `-fno-plt`
`jmp *f@GOTPCREL(%rip)`. Jump-table recovery reads the slot, so it is the
one-destination computed jump above, and with no stated prototype the
function printed `f`'s copied-in body, or, when the slot names an extern of
a relocatable object, `halt_missing();` with the call's arguments gone. Under
`tailcalljump on`, the GOT-slot rule adds two cases to the `call_states_the_body`
test that `decompile_drive.rs (ArchFlowEnv::is_tail_call_table)` hands
`tailcalljump.rs (unlace_is_tail_call_table)`:

- the destination has no bytes (the same mapped-bytes test
  `flow.rs (FlowInfo::new_address)` makes): following the table can only end
  in `halt_missing()`, so the jump is a tail call and keeps the arguments the
  caller sets, `ext(a0 + 1); // tail-call`;
- the destination is a function a callee-first `decompile-all` decompiled
  earlier and filed (`gottailcall.rs (callable)`).

After each function of a callee-first run, `gottailcall.rs (record)`
files it when a call to it loses nothing a copied-in body would show. A
function recovered with no parameters and no return value always qualifies.
Otherwise it needs a `protoorder` statement, no declared prototype (that is
`tailcalljump`'s rule above) and no variadic list, and two more things. If it
returns a value, the statement must state it. Passthrough must also forward
every parameter: each is a register, and its entry probe reads it, or it
hands it on to a callee that takes it, by the same reads passthrough checks
before it forwards a register (`gottailcall.rs (takes_every_input)`).
A function whose stated parameter sits on the stack, or which passthrough
would not see reading it, keeps the body. One example is a MIPS callee that
reads an argument only in its `jr ra` delay slot.
From the statement, passthrough gives the call the registers the caller
forwards untouched and the caller the callee's return value:
`return adler32_z(a0,a1,a2); // tail-call`, as the same code built non-PIC or
through a PLT prints. A callee that returns a value is taken only where the
flow so far reached no return of the caller's own, a RETURN with no call at
its instruction, because passthrough takes no tail call's result beside one.

Whether passthrough then gives the call those arguments and that return
also depends on the caller. clang's `push %rax` stack-alignment slot reads
as a SysV vector count, so passthrough treats the function as variadic and
claims nothing in it. A second tail callee that states no return leaves no
return to claim either. So `gottailcall.rs (record)` checks every tail
call the decompile took against the result (`gottailcall.rs (loses)`).
If the callee returns a value and the caller came out returning nothing, or
a call to the callee passes fewer arguments than its statement names, the
pair is refused and the caller is decompiled again with the copied-in body.
Each flow of a callee-first run first drops the function's earlier
recovered-tail-call warnings (`gottailcall.rs (clear_stale_warnings)`),
and every tail call the new flow takes warns again, so a refused tail call
leaves no `// tail-call` on the body the redo copies in.

The reference walk behind the callee-first plan does not see these jumps. A
MIPS `$gp` slot is not a constant it reads, and an x86 `jmp [slot]` is an
edge to the slot, not to the function. So the callee is often planned after
its caller. `gottailcall.rs (record)` therefore also files every caller
whose flow followed a one-destination table into a callee not yet filed. The
flow notes each such table as it declines the tail call
(`gottailcall.rs (followed)`), because `RuleSwitchSingle` drops the
table before the function is finished.
Once one of the callees it copied in is filed, every other one the plan
holds has been decompiled, and voidret's redos of the round are settled,
`gottailcall.rs (due)` names that caller, and
`crates/unlace-cli/src/decompile_all/callee_first.rs` decompiles it
again in plan order. That redo takes the tail call with the callee's
statement in hand. Waiting for the last callee keeps a `switch` whose cases
tail-call many functions through their slots to one redo instead of one per
callee, each copying in the callees still to come. A refused caller is
redone at once. That is the call-graph edge the walk misses, learned from
the caller's own decompile. The callee-first ledger lives only for the
length of a callee-first run.

A single-function drive (the console's `decompile`, `unlace decompile` of
named targets) has no callee-first run behind it, so it keeps a ledger of
its own for the length of one function
(`gottailcall.rs (begin_single, single_step)`, driven from
`decompile_drive.rs (decompile_func_full_with_objects_inner)`). After a
decompile it collects the known functions a one-destination table reached:
the ones the flow followed, and, because the console follows the flow before
the drive starts, the sole destinations of the jump tables the function still
holds. It decompiles each of them first, bounded the way a tail-called callee
is (`decompile_drive.rs (recover_got_callee)`, at most four callees of at
most 512 instructions), files the ones `record` would file, keeps their
`protoorder` statements, and decompiles the function again, so the jump
takes the tail call: a kernel-extension stub `adrp x16; ldr x16,[x16,#slot];
br x16` to `Base::m1` prints `v1 = Base::m1(); // tail-call` instead of
`switch(Base::m1_ptr) { case ...: return 1; }`. A tail call that then loses
what the copied-in body shows (`loses`) is refused and the function
decompiled once more with the body copied in. Only a drive where some
one-destination table reached a known function pays for the extra
decompiles. A nested drive (a callee being decompiled for its contract),
`protoorder off` and `tailcalljump direct|off` keep the copied-in body.
`tests/stages/gottailcall.toml` pins the extern arm, with
an unmapped non-function and a jump to the function's own code as controls,
`tests/stages/xnutables.toml` (#15) and `tests/stages/veneer-tailcall.toml`
(#10) the single-function arm, and
`tests/cli/gottailcall-*.json` pin the callee-first arm on an x86-64
`-fno-plt` library and a MIPS PIC object.

**(unlace) Frame-teardown tail jumps — `option tailcallframe`, default on
(DIV-109), `crates/unlace-lift/src/p2_lift/tailcallframe.rs
(unlace_is_frame_teardown_tail_call)`.** `tailcalljump` above resolves the callee
through `query_call`, so it only fires on a target some discovery oracle already
found. Every unlace oracle reaches a function from a symbol, from an unwind record,
or from a direct `call` the recursive-descent Listing walk arrived at; a callee
reached *only* through a code pointer in initialized data satisfies none of them,
because the walk never enters the callback that calls it. Decompiling such a
callback by address then follows its tail `jmp` as ordinary intraprocedural flow
and decodes the entire callee into it — on the round-2 RE-friction witness (a
stripped Wayland/xkb PIE) the keyboard callback at `0x6500` emitted 1,555 lines
instead of 427, with the renderer at `0x4610` inlined inside it *and* called by
name a few blocks later. Decision rule: the tail jump is the caller's last
instruction, so the compiler tears the frame down before it and the `jmp`
executes with the stack pointer exactly where `ret` would find it. Two constant
stack-pointer deltas are measured over the already-decoded raw p-code — the
*prologue*, accumulated forward from the function's entry address, and the
*epilogue*, accumulated backward from the branch — and the branch is a tail call
when the epilogue is a strictly positive teardown of exactly the prologue's
frame. The prologue includes the stack motion of the branch that ends the entry
run, but not of a call (whose push the callee's return removes): a stack
machine's conditional jump pops its operand, so a CPython entry block
`LOAD_FAST; POP_JUMP_IF_FALSE` builds no frame, and a jump that leaves the
operand stack balanced inside the code object is not read as a tail call (#690).
Neither tail-call rule is asked about a BRANCH that an earlier relative branch
of its own instruction jumps over (its time is below the deepest internal
target): it does not end the instruction, and the RETURN the rewrite plants
would delete the ops that relative branch reaches (#686). Both scans stop at the first control-flow op (so neither leaves the block
it starts in), at a stack-pointer write that is not `SP = SP ± <const>` (a
`leave`-style `SP = FP` restore is not modelled and declines), at an instruction
address more than 16 bytes from its neighbour (so a hole in the decoded stream
cannot make two unrelated instructions look adjacent), and after 24 instructions.
A frameless leaf can never match: with no frame torn down there is no evidence,
and an ordinary unconditional intraprocedural jump would be indistinguishable
from a tail call. Neither can the function's own entry (self tail recursion stays
a back-edge, as in `tailcalljump`) nor an address this function has already
decoded (already-decoded blocks are live flow, whatever the stack looks like).
The rewrite is the one `tailcalljump` already drives in the BRANCH arm of
`flow.rs (FlowInfo::xref_control_flow)`; `flow.rs (FlowInfo::tail_call_kind)`
checks the caller-declared extent before asking either tail-call rule, then asks
`tailcalljump` first for eligible targets. A known eligible target keeps that
path and warning text, and a `tailcallframe: recovered tail call` warning
attributes calls introduced by the frame rule. Byte-identical on both parity
corpora, whose bytechunks carry no such shape. **Known limit:** without a
caller-declared extent, frame evidence cannot distinguish an external callee
from an in-function target after a complete frame teardown. A jump that tears
the frame down *completely* before branching to a shared return sequence in the
same function can still be recovered as a tail call. That shape is not optimizer
output: a shared return
sequence must be shared including its teardown, so the jump is emitted part-way
through the epilogue and the exact-cancellation test rejects it (gcc and clang at
`-O1/-O2/-O3/-Os` emit `add rsp,0x68; jmp <shared tail>` against a `-0x70`
prologue; a 26,458-function LLVM `-O2` corpus carries 103 sites of the raw shape
and none of them fire). Deferring the decision until the flow work-stack drains,
and then asking whether the function decoded `dest` by another path, is the sound
fix; it is a change to the walk's ordering rather than to this predicate.

**(unlace) EVM internal calls — `option evmcalls`, default on,
`crates/unlace-lift/src/p2_lift/evmcalls.rs (classify, ActionEvmCalls)`.** The
EVM has no call instruction for code inside a contract: solc lowers an internal call
to `PUSH ret; <arguments>; PUSH fn; JUMP` and the callee returns with a `JUMP` to
the label its caller left on the stack, so every return is an indirect jump. With
the option on and a language that has an `evmstack` space, the flow environment
classifies the whole code image once (read from offset 0 of the default code
space): a stack interpreter tracks which stack slots hold pushed constants per
block, merging slot by slot at joins. A `JUMP` to a constant while another
constant `JUMPDEST` is on the stack is a call; the label nearest the top is its
return address and the items above it are its arguments. A `JUMP` to a
non-constant is a return. A `JUMP` or `JUMPI` whose target is the same constant
on every path that reaches it is a direct branch. The slots below a call's return
label survive the call, so the interpreter carries them to the label, with the
callee's results as unknown slots on top once the callee's stack effect is known.
A callee's stack effect (words the call removes, return label included) is
`1 - d` for the one depth `d` its return jumps reach relative to its entry; it is
iterated to a fixed point with the classification (4 rounds) and within one pass
(32 rounds), and a callee with return jumps at two depths has none. A callee whose
walk finds no return and was never cut short (an unknown callee, an unresolved
jump, the visit budget) is noreturn. The BRANCHIND arm of
`flow.rs (FlowInfo::xref_control_flow)` rewrites the jump in place: a return
becomes RETURN; a direct branch becomes BRANCH to the label; a call becomes a CALL
to the callee, followed by an artificial halt when the callee is noreturn, or by a
BRANCH to the return label when that label is not the next instruction.
`ActionEvmCalls` (protorecovery, before ActionFuncLink and ActionExtraPopSetup)
then locks each such call spec: its arguments are the stack words from the top,
its extrapop is the stack effect times 32, and its `args + 1 - pop` results are
one stack-relative output at offset `32 * pop`. A callee every return of which jumps
through a copy of its label (`DUPn; JUMP`, as solc's getters do) leaves the label in
its slot; its results are the `args - pop` words above that slot (`pop` may then be
negative, the output starting below the stack pointer at the call), and the store of the
return label before the call has no reader left. A call spec already input-locked is
left alone. A callee that never returns gets its arguments and no result. A terminal
tail (a block from which every explored path ends in `RETURN`, `REVERT`, `STOP` or
`INVALID` without a return jump) that two or more constant `JUMP`s or `JUMPI`s, call return
labels or the fall-through from the instruction before it share is called rather than
entered: the jump becomes a CALL to it followed by an artificial noreturn halt (for a
`JUMPI`, the BRANCHIND of its taken edge does; the CBRANCH to the next instruction stays), and a call whose return label is such a tail is followed by a
second CALL to the tail and the halt. Its arguments are the deepest stack word below its
entry any of its instructions reads. solc's optimizer shares the ABI-encoding and `RETURN`
tails between external functions, reaching them with different junk below the stack
top, so without this the paths merge at different stack depths, the stack pointer
becomes a pointer variable and every dead stack store stays. When the function being
decompiled is itself a callee whose call sites agree on its argument count, its
own prototype is locked the same way, so it reads its arguments as parameters and
returns its result.

**(unlace) A teardown has to give back what the entry block saved — part of
`tailcallframe` (DIV-157),
`crates/unlace-lift/src/p2_lift/tailcallsaved.rs
(unlace_stack_saved_bytes / unlace_stack_restored_bytes /
unlace_teardown_restores_saves)`.** Cancelling deltas are necessary but not
sufficient. Because both of `tailcallframe`'s scans stop at the first
control-flow op, the backward one cannot see past a `call`, and on a cdecl caller
what sits immediately in front of the branch is the argument cleanup for that
call rather than the frame teardown: on the round-8 RE-friction witness
(crackmes.one `5ab77f5f33c5d40ad448c820`, a character classifier at `0x4010b0`)
the entry block is `push ebx; push esi` for a `-8` frame, and the run ending at
the `jmp 0x401102` is the `add esp,8` that discards the two arguments of the
`call 0x40167d` above it. The deltas cancel, but `ebx` and `esi` are still on the
stack, the stack pointer is still 8 bytes below its entry value, and `0x401102`
is the `TEST EAX,EAX` both sides of the branch at `0x4010e2` reach — so the
recovered call truncated the function at an internal join and emitted the rest of
its body as a callee. Decision rule: a tail jump runs with the stack as `ret`
would find it, so every callee-saved register the entry block pushed must have
been popped back before the branch, and each scan is asked for a second number
beside its delta — the bytes it moved *through* the stack pointer. An instruction
that lowers the stack pointer and stores through it is saving (`push`); one that
raises the stack pointer and loads through it is restoring (`pop`); a `LOAD` or
`STORE` whose pointer operand is not exactly the stack-pointer register (`mov
eax,[esp+8]`) is neither, and each instruction's transfer is capped at its own
stack-pointer motion, so a multi-register `push`/`pop` can never account for more
than it moved. The branch is a tail call only when `restored >= saved`. A frame
built purely by `sub rsp,N` saves nothing and so demands nothing, which is what
keeps the `sub rsp,8; call f; add rsp,8; jmp g` alignment shape gcc emits at
`-O2`; the under-count on an architecture whose multi-register push writes only
its first word through the stack pointer is symmetric, because its pop reads only
the first word back. One-directional: the rule can only decline a recovery
`tailcallframe` would have made, never introduce one. Byte-identical on both
parity corpora and across 803 `decompile-all` runs of the decbench corpus.

**(unlace) Fall-through function bound — `option funcboundflow`, default on
(DIV-67), `crates/unlace-lift/src/p2_lift/funcboundflow.rs
(unlace_should_bound_at_entry)`.** A unlace `FunctionSymbol` is an entry address with
no extent, and CALL/CALLIND are fall-through, so flow stops only at a RETURN or a
*known* no-return callee (`query_call_no_return`). A function whose last act is a
`call` to a routine unlace cannot prove no-return — in a stripped, statically-linked
binary the unnamed `exit`/`abort`/`__stack_chk_fail` bodies and the app-level
`die()`/`throw` wrappers built on them — compiles with no trailing `ret`, just
inter-function alignment padding, and unlace's follower runs the padding's
fall-through straight into the next function's entry, decoding *that* function's
body into the current one (the following function is then emitted twice: once
correctly, once as a garbage tail of its predecessor). Decision rule: a
fall-through whose target is the entry of another *known* function
(`query_call(next).is_some()`), and is not the current function's own entry, has
run off the end of the current function, unless the current function carries an
explicit extent that contains the target. That caller assertion keeps an
independently discovered interior entry in the same flow. Apart from that
extent rule, the bound is omitted only when the complete instruction at the
foreign entry describes an unconditional `CPUI_RETURN` with no other
control-transfer op. Such a return is admitted as a shared epilogue: it has no
successor, so decoding it cannot consume any instruction beyond the separately
callable function. Direct and computed branches, and conditional returns, are
not part of the exception because they can still reach more code and cross a
boundary; if the one-instruction probe cannot decode the entry, the conservative
bound remains. The truncation lives at the fall-through push
of `flow.rs (FlowInfo::process_instruction)`: instead of pushing a non-return
target, a no-return artificial RETURN is planted (mirroring the
`check_for_flow_modification` no-return-call halt) and a `funcboundflow` warning
makes the truncation attributable. The halt also *starts a basic block*:
`flow.rs (FlowInfo::collect_edges)`
emits a fall-through edge for every CBRANCH whatever else the walk decided, so when
the truncated instruction is a conditional branch the edge otherwise resolves back
to the branch's own block. That self-edge is what the structurer renders as the
condition-less, syntactically invalid `} while ;`, and where the branch's taken edge
lands on that same block the two collapse into a single out-edge that the two-way
block readers index off the end of. Giving the halt its own block puts a real
no-return RETURN on the far end of the fall-through instead. The halt is deliberately
*not* marked as an instruction start: `flow.rs (FlowInfo::fallthru_op)` can only
resolve the fall-through to it as a same-instruction op, the truncated address never
having been decoded. This overlaps the no-return name matches of `noreturn_known` (which stop
the same leak by callee *name*) but is name-independent — it bounds at the function
*boundary* whatever the callee. On real binaries ~36% of application functions in a
measured static-pie build end in such a call and were corrupted this way; IDA and
Ghidra both bound decompilation to the function body. The `longdouble` datatest
(which deliberately flows a tail `jmp` into its callee and on across adjacent
functions) and the `ghangr-noreturn_extern` test (which isolates the
name match) opt out per-test.

The foreign entry is also retained as an effective flow cutoff. A branch target
can have been queued but left unprocessed when another path discovers that
boundary; `fillin_branch_stubs` may register its artificial halt only when the
target is in the cutoff's address space and at or beyond the cutoff. This gives a
deliberately clipped edge a resolvable head without weakening the missing-op
invariant: an unprocessed address before the cutoff, or in another space, still
raises `Could not find op at target address`.

The same bound holds at the function's own literal pool
(`crates/unlace-lift/src/p2_lift/funcboundflow.rs
(unlace_should_bound_at_pool)`), on ARM32. A compiler places the PC-relative
constants a body loads right after its last instruction, so a function that ends
in a call unlace cannot prove no-return (an unnamed import, a call to an address
outside the image) is followed by its pool, not by code: armv5te `probe` ends `bl
use; bl die`, and the walk took the second call's fall-through, decoded the first
constants as instructions and stopped at one that decodes as nothing, printing
`die(); halt_baddata(); // warn: Bad instruction - Truncating control flow here`,
while `unlace disassemble` listed the same words as data. Worse, a pool word that
decodes as a branch carried the walk into code the call never returns to (a
`u_pool` that calls `hi` ahead of `__builtin_unreachable()` printed the other
path's `return` after the call). The walk cannot be its own witness for where a
pool is — it reaches the pool by falling through a call, and a constant that
happens to encode a PC-relative load or a branch is then indistinguishable from
evidence — so the pools come from the analysis tier: the Listing's trusted-reference
extents (chapter [01](01-program-prep.md), `unlace_poolextents`), computed once over
the completed image walk and parked on the architecture before any function is
walked. When an unconditional `CALL`/`CALLIND` (no `CBRANCH` in the instruction,
`flow.rs (FlowInfo::ends_in_unconditional_call)`) would fall through into one of
those extents (`funcboundflow.rs (unlace_pool_pad)`, a range lookup, in
executable non-writable image bytes), the call does not return: the walk plants
the no-return halt and a `funcboundflow` warning saying the fall-through is the
literal pool. The pool may start up to one instruction past the fall-through, when
the bytes between decode as instructions that do nothing (`unlace_is_padding_run`)
or are zero — the alignment padding a compiler leaves before a doubleword pool, or
after a Thumb call that ends halfway through a word. Live code never sits between a
call and the pool it must jump over. The halt stays in the call's block, as a known
no-return callee's does, so `p4_calls/noreturnretuse.rs` still lets a status
the failure call is handed be the function's return value. The judgement is a
lookup against a set computed before the walk, so decode order changes nothing,
no evidence the walk gathers is used, and the function is walked once. A word
anything trusted branches to is never in an extent, and a load decoded past a
non-returning `svc` or an unproven call witnesses nothing, so the live code after
a returning call stays; a pool after a call to a function that does return (a
`u_pool` that calls `hi` ahead of `__builtin_unreachable()`) is seen by the strict
witness, whose trust crosses no call at all. The listing's own pool rule (`unlace-console` `litpool.rs`,
which folds any width the decoded rows tile) is a separate decision about what to
render. The pools are a fact of the Listing (`option listing`), so without it —
`--mode fast`, and under `auto` at 2 MiB and above — and on every other target no
call is bounded at a pool; an inlined callee's nested flow is not re-walked, so the
bound does not apply inside an inline; and a code space that is not byte-addressed
keeps every fall-through.

The cutoff address itself maps to the no-return halt inserted by the truncating
fall-through. This lets `target` walk across already-decoded instructions that
generated no p-code and terminate at the proven boundary. It does not mark the
foreign entry as decoded and does not mask a missing op before the cutoff.

**(unlace) Return-address-discarding call trampolines — always on (DIV-144),
`crates/unlace-lift/src/p2_lift/calltrampoline.rs
(unlace_trampoline_branch_target)`.** `CPUI_CALL` is a fall-through op, so the
follower decodes the return address as the next instruction. A protector breaks
that assumption with a fragment the caller reaches by `call`: `lea esp,[esp+4]`
(or `add esp,4`, or a `pop`) throws the pushed return address away, one real
instruction runs, and an unconditional `jmp` resumes the caller. Control never
arrives at the return address, so the byte there is free to be junk — and the
follower lifts it anyway, decoding a store to a global that does not exist and
leaving the whole remaining body one byte out of phase with the real instruction
stream. The re-entry point is the fragment's own `jmp` target, which is *usually*
the return address plus the junk byte but need not be: on the witness the fragment
at `0x44ac4d` re-enters at exactly the return address, so the rule is written
against the `jmp` target and never against `ra + 1`.

Decision rule, over the callee's raw p-code decoded out of band (up to
`UNLACE_TRAMPOLINE_MAX_INSTRS` instructions, `UNLACE_TRAMPOLINE_MAX_OPS` ops, and
stopping at the first control transfer): the stack pointer must reach **exactly**
`entrySP + <pointer size>` — the instant the pushed return address stops
existing — and the run must then end in a direct `CPUI_BRANCH`, with no call,
conditional branch, indirect branch or return in between and no unaccountable
stack-pointer write. The stack pointer is tracked symbolically as
`entrySP + <constant>` through `COPY`/`INT_ADD`/`INT_SUB` chains, because
`lea esp,[esp+4]` lowers through a temporary rather than writing `ESP` directly
the way `add esp,4` does. The *net* delta is deliberately not what is measured:
the witness's first fragment is `lea esp,[esp+4]; sub esp,0xcfc; jmp`, whose net
effect is a large allocation — what identifies the shape is that the run passes
*through* `entrySP + ptrsize`. On an architecture whose call writes a link
register rather than pushing, the displacement never reaches one pointer word and
the rule is inert, which is the correct answer: there is no return address on the
stack to discard.

The rewrite lives in the `CPUI_CALL` arm of `flow.rs
(FlowInfo::xref_control_flow)`: the op becomes a `CPUI_BRANCH` and its target is
queued, which is the rewrite `funcdata_op.rs (Funcdata::override_flow)` applies
for a hand-written `flow <addr> branch` assertion. It is deliberately *not*
routed through the `CPUI_BRANCH` arm, which would hand the branch to
`tail_call_kind`: the fragment is a known function entry precisely because it is a
CALL target, so `tailcalljump` claims it and ends the caller at a synthetic tail
call — the acceptance-passing, body-deleting outcome. A `calltrampoline` warning
at the call site makes the reclassification attributable.

**Known limit and its guard:** `add esp,4; jmp printf` has the same p-code shape
and is an ordinary tail-call thunk; flowing through it would decode `printf` into
the caller and abandon everything after the call site. Nothing in the callee's
bytes separates the two, so `decompile_drive.rs
(ArchFlowEnv::is_return_discarding_trampoline)` additionally requires the `jmp`
target to be an address `query_call` does **not** resolve as a function entry. A
fragment that re-enters mid-stream satisfies that by construction; a thunk to a
discovered callee does not, and stays a `CALL` for `tailcalljump` to claim at its
own `jmp`.

**(unlace) Return-address-popping call transfers — always on (DIV-163),
`crates/unlace-lift/src/p2_lift/callpopret.rs
(unlace_call_pops_return_address)`.** A second flavour of the same family ends in
`ret` instead of `jmp`: `call` jumps over inline data, the callee pops the
pushed return address into a result register, adjusts that pointer, then `ret`s
through the word above it. The callee therefore returns to its caller's caller;
the call site never regains control, and its fall-through bytes are data. The
round-12 witness is `call 0x4f708d; nop; "kernel32.dll\\0..."`, with
`pop eax; inc eax; ret` at the target. Following the ordinary CALL fall-through
decodes the DLL names as port-input operations and arbitrary stores; treating
the call as a transfer lets normal dataflow emit `return s_4f703c;`.

The bounded out-of-band decode shares `calltrampoline`'s six-instruction and
64-op limits, but proves a different terminator. It symbolically tracks the
stack pointer and values loaded through it. A match requires the stack pointer
to pass through exactly `entrySP + pointer-size`, then a `CPUI_RETURN` through
the untouched pointer-sized word loaded from that address. Any call, branch,
CALLOTHER, store, unaccountable stack-pointer write, or a return through another
slot declines. Thus `mov ebx,[esp]; ret` (`__x86.get_pc_thunk`) stays an ordinary
call because the stack pointer never discards the call site's return address;
the `add esp,4; ...; jmp` flavour remains owned by `calltrampoline`; and a callee
that pops two words is declined because it consumes the caller's frame beyond
this rule's claim. Link-register architectures decline because their call does
not put a return address on the stack.

On a match the same `FlowInfo::xref_control_flow` seam rewrites CALL to BRANCH
and queues the callee entry. The push, pop and final return then belong to one
flow graph, preserving the pointer result while excluding the unreachable
inline bytes. A `callpopret` warning at the call site makes the rewrite
attributable. Section executability is deliberately irrelevant: the witness's
whole packer stub, both code and inline data, occupies a section without the
executable flag.

**(unlace) Immediate-stack RET tail transfers — always on (DIV-170,
`crates/unlace-lift/src/p2_lift/pushimmediateret.rs`).** A packer can spell an unconditional terminal transfer
as `push <immediate>; ret`. Left as RETURN, flow ends correctly but dead-store
elimination erases the pushed destination, so emitted C loses the transfer.
Before following the function, the shared console decompile step runs the
bounded raw-p-code provenance walk in
`crates/unlace-console/src/retcallchain.rs
(unlace_push_immediate_ret)`. RETURN must load a stack slot written in the
current straight-line run, the exact last store must carry a constant, and RET
must advance the same affine stack base by the loaded width. The result seeds
the existing P2 BRANCH flow override at that RET. BRANCH has no call-return
fall-through; the C printer may nevertheless spell a terminal branch to an
untyped destination as an indirect tail-call statement.

The proof intentionally declines any second live store through the same stack
base. That keeps `push continuation; push target; ret` exclusively under
`entryretdispatch`, whose two-store proof models a call. A real call clears
provenance, so a pushed argument before a later call/RET cannot match; stack
adjustments, overwritten slots, computed stored values, conditional or
indirect control flow, decode failure, and opaque userops also decline. An
explicit flow fact at the RET owns the site, including an explicit RETURN veto.
The flow override changes only the current function's graph: it never registers
or decodes the constant target as a function, because an unpacker destination
can still be encrypted in the static image.

The RET-transfer walks, including the chain extension of an `override flow`
call, and the bounded out-of-band raw decoder shared by `calltrampoline`,
`callpopret` and the `funcboundflow` entry and padding checks use a private
decode-context transaction. Segment or mode commits remain visible within the
probe, but are rolled back when it ends, even when no transfer is recognized.
An advisory walk can pass a no-return call or a flow override that the real
flow follower respects; its speculative far branches must not change another
function's real-mode return IP. Normal flow decoding still publishes its
segment discoveries.

**(unlace) `__fastfail` is a no-return — always on (DIV-120),
`crates/unlace-lift/src/p2_lift/fastfailnoreturn.rs
(is_fastfail_callind)`.** x86 SLEIGH lifts `INT imm8` to `intloc = swi(imm8);
call [intloc]` — a `call` with no matching push, unlike every other x86 `CALL`,
which lifts as `RSP = RSP - 8; push &next; call target`. Nothing downstream
distinguishes the two, so the interrupt is an ordinary modelled call and the
compiler spec's `extrapop` hands its bytes back after it: on `x86-64-win.cspec`'s
default `__fastcall` (`extrapop="8" stackshift="8"`) every interrupt raises the
stack pointer by eight, and the printer says so — `(*(void *)swi(0x29))(5);`
followed by `v62 = &v61[8];`. The damage is not local. Once two paths join
carrying stack-pointer values eight apart, the frame stops being a constant
offset from the spacebase: stack locals degenerate into offsets off a `char *`,
each `CALL`'s return-address push (normally a dead store into a slot nothing
maps) survives as an explicit store, and outgoing stack arguments go the same
way, so a Win32 call renders with stack blobs where it takes values. Decision
rule: on a Windows image, a CALLIND that reads the storage a `swi` CALLOTHER
wrote in the same instruction, from the one-byte constant vector `0x29`, is
`__fastfail` — the MSVC `/GS` and STL `_STL_VERIFY` failure path, which
terminates the process and by contract never returns. Its call spec is marked
no-return in `flow.rs (FlowInfo::setup_callind_specs)` and the artificial halt
`check_for_flow_modification` plants for a named no-return callee is planted
here too, so the block ends at the interrupt and the unbalanced stack pointer
reaches no join. Unlike that path no `"Subroutine does not return"` warning is
buffered: the divergence is definitional rather than a surprise, and one
function can hold a dozen sites. The vector is checked exactly — `int 0x80` is
a Linux syscall (`option linuxsyscall`) and `int1`/`int3`/`into` carry a
`return` in their own SLEIGH semantics and do return — and the gate is the
compiler-spec component of the resolved language id, since `int 0x29` is
`__fastfail` by Windows convention alone.

**(unlace) DOS exits are no-returns — always on (#1288),
`crates/unlace-lift/src/p2_lift/flow.rs (FlowEnvironment::is_dos_exit_callind)`.**
An interrupt that ends an MS-DOS program (`INT 20h`, `INT 27h`, `INT 21h` with
AH = 00h, 31h or 4Ch) lowers to the same falling-through `swi` call, so flow
used to run past `mov ah,4ch; int 21h` into whatever follows it, typically zero
fill decoding as `ADD [BX+SI],AL` until a `funcboundflow` warning stopped it at
the next function. Which interrupts exit is decided once, for the whole image,
by the raw discovery (chapter [01](01-program-prep.md), *A DOS program exit
ends the flow*): AH is a value the code sets before the interrupt, which only
the Listing's program-wide view of branch targets can prove reaches it on every
path. The decision rule here is a lookup: a CALLIND at an address in the
architecture's `dos_exit_sites` has its call spec marked no-return and goes
through `check_for_flow_modification` like a call to a no-return function, so
the halt is planted after it and the `Subroutine does not return` warning is
buffered (printed `// no-return`). Unlike `__fastfail` the warning is kept: the
service an `INT 21h` asks for is in AH, which the C does not show, so the
annotation is the only thing on the line that says the program ends there. The
list is empty unless a real-mode raw or MZ image was discovered, so every other
input, the XML corpus included, is byte-identical.

**(unlace) The `int3` pad control ran into — `option int3pad`, default `warn`
(DIV-128), `crates/unlace-lift/src/p2_lift/int3pad.rs
(is_int3_callind)`.** `INT3` lowers the same way (`intloc = swi(3); call
[intloc]; return [0:1]`), so a decoded breakpoint byte prints as `v1 = (code
*)swi(3); return (*v1)();` — an ordinary call through a function pointer, whose
result the function then returns. Nothing in the C says the byte at that address
is `0xcc`, that it is one of a run of them, or that control got there by running
off the end of the decoded code; on an anti-debug binary the clean-run path
frequently ends in exactly that pad, and only the disassembly shows it. Decision
rule: a CALLIND that reads the storage a `swi` CALLOTHER wrote in the same
instruction, from the one-byte constant vector `3`, is a decoded `int3` — the
same shape walk `fastfailnoreturn` uses, read for the vector rather than tested
against `0x29` (`fastfailnoreturn.rs (swi_vector_of_callind)`). The site is
named: `int3pad.rs (pad_run_length)` counts the `0xcc` bytes at the address
one loader read at a time (the loader fills a full word and refuses a short one
at a section end, which is where a pad tends to sit) and
`FlowInfo::setup_callind_specs` buffers the warning the P9 slug table renders as
`// int3-pad xN` (chapter 09, `printc.rs (warning_slug)`). The count is dropped rather
than guessed when the read fails or the encoding is the two-byte `INT 0x03`
rather than `0xcc`. Under `option int3pad halt` the call spec is additionally
marked no-return and the artificial halt is planted, so the pad renders as a
statement and the fabricated return value goes away; that is not the default,
because an `int3` does return to a debugger that steps past it, and the value of
naming the pad does not depend on asserting that the process dies there. `option
int3pad off` restores the unannotated rendering. Exercised by
`tests/stages/int3pad.toml`.

**(unlace) A `ud2` after a call is a no-return call site — `option trapaftercall`, default on, `crates/unlace-lift/src/p2_lift/flow.rs (trap_follows_call)`.** clang with trap-unreachable (the Darwin and rustc default) emits `ud2` after every call it knows cannot return. A stripped image gives such a callee no name, so no name list marks it no-return, and flow walks into the trap. `FlowInfo::check_for_flow_modification` checks that the instruction is a machine `call` (E8, or FF /2, after prefixes; a tail `jmp` turned into a call does not count) and reads the two bytes after it (its size is the visited record's); `0F 0B` plants the artificial halt, the same path a named no-return callee takes, and marks a direct call's spec no-return. An indirect call (rustc calls through GOT slots) gets the halt only: `ActionDeindirect` would find a no-return mark disagreeing with the resolved callee's prototype and restart the function, doubling its cost. IDA also reads two `int3` bytes (MSVC) this way; unlace does not, because anti-debug code returns into an `int3` pad on purpose (`int3pad` above). The evidence is per call site and x86 language ids only (`ctx.trap_after_call`). Exercised by `tests/stages/trapaftercall.toml`.

**(unlace) A retpoline thunk is an indirect call — `option retpolinethunk`, default on, `crates/unlace-lift/src/p2_lift/retpolinethunk.rs (thunk_register)`.** `-mretpoline` (clang) and `-mindirect-branch=thunk` (gcc) compile each indirect call into a direct call to a per-register thunk, `call 1f; 2: pause; lfence; jmp 2b; 1: mov %reg,(%rsp); ret`, which returns into the target the register holds. The cspecs model it as the `x86_indirect_thunk_<reg>` call-fixups, which the call-fixup installer tags onto functions by gcc's thunk name only; clang names its thunks `__llvm_retpoline_<reg>`, and a stripped image names neither. When the flow builder asks for a direct callee's inject id and the callee has none, the decompile driver (`decompile_drive.rs (query_call_inject_id)`) reads the callee's first bytes: an `E8` call over the `F3 90 0F AE E8 EB F9` spin to a `[REX] 89 /r 24` store of a register over the return address followed by `C3`. The register picks the `x86_indirect_thunk_<reg>` fixup, which is then injected like any other call-fixup. x86 language ids only; a register the cspec has no fixup for keeps the plain call. Exercised by `tests/stages/retpolinethunk.toml`.

**(unlace) A compiler's AArch64 `brk` trap ends the flow — always on,
`crates/unlace-lift/src/p2_lift/brktrap.rs
(is_brk_trap_branchind)`.** AArch64 SLEIGH lowers `BRK #imm16` to `pc =
SoftwareBreakpoint(imm16, inst_next); goto [pc];` (`AARCH64base.sinc`, `:brk`):
a jump through a user-op's result, not a call. Jump-table recovery cannot
resolve that BRANCHIND, so `truncate_indirect_jump` (§2.3) turns it into a
CALLIND followed by an ordinary return, and the trap path returns whatever the
call leaves in `x0`. Return recovery then drops the function's return value or
returns one fabricated from the call: clang -O2's `adds x0,x0,x1; b.vs trap;
ret; trap: brk #1` (an `__builtin_add_overflow` checked add) prints as a `void`
function that passes the sum it returns to `SoftwareBreakpoint` as an argument,
and a bounds check ending in GCC's `brk #1000` returns `(*v1)()` on its trap
path. That return is false for any `brk`, whose exception returns to the `brk`
itself and never to the caller, so the fix carries no option. Decision rule: a
BRANCHIND that jumps through exactly the storage a `SoftwareBreakpoint`
CALLOTHER wrote in the same instruction, with no other write of that storage in
between, found by the walk back over the instruction's raw ops that
`sparcstructret` uses for SPARC's `unimp`, whose two-byte constant immediate is
one a compiler emits for a trap that does not return: `#1` (`llvm.trap`:
clang's `__builtin_trap`, Rust's `abort`, Swift's overflow and bounds checks,
and the trap Darwin and Windows targets plant for `__builtin_unreachable`),
`#1000` (GCC's `__builtin_trap`), `#0x5500`..`#0x55ff` (`llvm.ubsantrap`:
`-fsanitize-trap` and clang's `-ftrapv`), `#0xc470`..`#0xc473` (the arm64e
pointer-authentication failure traps) or `#0xf003` (MSVC's `__fastfail`, the
counterpart of the x86 `int 0x29` above). Flow already stopped at the jump, so
no instruction is dropped; what changes is that the trap path no longer returns.
`FlowInfo::xref_control_flow` replaces the matched BRANCHIND with the artificial
no-return halt a call that never returns gets, before it reaches `tablelist`,
and hands the halt to its `CPUI_RETURN` arm. The CALLOTHER stays and prints as a
`SoftwareBreakpoint(1,..);` statement; its output has no reader left, so
dead-code removal drops it. `__fastfail` passes its failure code in `w0`
(`mov w0,#8; brk #0xf003`), and the code says why the process died, so for
`#0xf003` alone the flow also appends a read of `w0` to the CALLOTHER's inputs
(`crates/unlace-lift/src/p2_lift/brktrap.rs (read_code)`): the
trap prints as `SoftwareBreakpoint(0xf003,..,8);`, as the x86 `int 0x29` keeps
its `ecx` argument. A `w0` set in the function resolves to its value there; one
the function never sets is its incoming `w0`, which `__fastfail(code)` called
with a parameter really does read. No other trap immediate reads a register. As
for `fastfailnoreturn`, no warning is buffered: the trap is definitional, and a
function with checked arithmetic often holds several. The halt shares the `brk`'s address, so a pointer-authentication trap
block is still the one-instruction block `ptrauthtrap` anchors on, and that
pass removes the check in front of it as before; a trap it leaves (a guard that
is not the return-address bit test, or `option ptrauthtrap off`) now ends the
flow instead of returning. Not matched, because a debugger or a kernel handler
steps past them: `brk #0xf000` (`__builtin_debugtrap` and `__debugbreak`, which
is why clang emits the function's `ret` behind it), `brk #0` (a debugger's
breakpoint, Go's `runtime.breakpoint`) and Linux's kernel immediates (`#0x800`
for `BUG`/`WARN`, KGDB, kprobes, KASAN, KCFI). They keep the jump-as-call,
except for a `#0x800` the image's `__bug_table` names (next paragraph). Only
the AArch64 specs define `SoftwareBreakpoint`; elsewhere the lookup of its
user-op index fails before any op is walked. Exercised by
`tests/stages/brktrap.toml`.

**(unlace) A Linux kernel `WARN`/`BUG` site prints as the statement it is — always
on, `crates/unlace-lift/src/p2_lift/kernelbug.rs (rewrite)`.**
The kernel plants a trap at every `WARN_ON`/`BUG_ON` site — `ud2` on x86, `brk
#0x800` on AArch64 — and names it in a `__bug_table` entry whose flags say
whether the handler resumes after the trap (`BUGFLAG_WARNING`) or panics. x86
SLEIGH lowers `ud2` the way AArch64 lowers `brk`: `target =
invalidInstructionException(); goto [target];` (`ia.sinc`, `:UD2`), so each site
took the jump-as-call path above and printed as `(*(void (*)(void))
invalidInstructionException())(); // jump-as-call` followed by a return — false
both ways, since a `WARN` site falls through to the next instruction and never
returns, and a `BUG` site never continues. The analysis tier reads the table
(chapter 01, `kernelbug`) and parks one `KernelBugSite` per entry on
`Architecture::kernel_bug_sites`, sorted by trap address. Decision rule, asked
in `FlowInfo::xref_control_flow` before the `brktrap` match: a BRANCHIND whose
address is a parked site and which jumps through exactly the storage a
CALLOTHER wrote in the same instruction (`brktrap.rs (trap_producer)`, the
walk `brktrap` and `sparcstructret` use), that CALLOTHER being
`invalidInstructionException` with no operand or `SoftwareBreakpoint` with the
kernel's `#0x800`. The CALLOTHER's user-op index is then replaced by one of two
built-ins (`userop.rs`, `BUILTIN_KERNEL_WARN` / `BUILTIN_KERNEL_BUG`, registered
with the string built-ins): `__WARN(file,line)` — the kernel's own spelling of
the macro, the file a pointer constant the type inference marks `char *`
(`coreaction_infertypes.rs (input_type_local_with)`) so it prints as the literal,
the line an `int` the printer writes in decimal (`printc.rs (op_callother_ir)`);
both absent on a table built without
`CONFIG_DEBUG_BUGVERBOSE`, where the statement prints bare — or `BUG()`. The
BRANCHIND is destroyed. After a `__WARN` the instruction falls through, exactly
as the trap handler resumes it; after a `BUG()` the flow plants the artificial
no-return halt a call that never returns gets, as `brktrap` does. A trap the
table does not name (an `__builtin_trap`, a KGDB or kprobes breakpoint) keeps
its rendering, and an image with no `__bug_table` pays one empty-list test per
BRANCHIND. The AArch64 `#0x800` the previous paragraph leaves alone is matched
here only through a table entry. Exercised by `tests/stages/kernelbug.toml`.

**(unlace) The x86-64 `SYSCALL` user-op's ABI effects — `option x64syscall`,
default `on`, x86-64-gated (DIV-152),
`crates/unlace-lift/src/p2_lift/x64syscall.rs
(ActionX64Syscall)`.** The 64-bit instruction is not an interrupt and takes none
of the paths above: `ia.sinc:4836` lowers it as `RCX = inst_next; R11 = rflags;
syscall();`, a `CALLOTHER` with no inputs and no output at all. That one fact
produces both halves of the damage on a syscall wrapper. With no inputs the
register writes that set the call up have no reader, the dead-code fixpoint
collects them, and the number and every argument are erased — the op prints as
`syscall()` with empty parens. With no output nothing redefines `RAX` across the
instruction, so the `RAX` the wrapper stores afterwards is still the one it
loaded from its own `number` parameter, and the whole body comes out as
`syscall(); return number;`. The return value is not invented: it is correct copy
propagation over an operation unlace has been told writes nothing, which is what
makes the emitted C a false statement about the program rather than an incomplete
one. `linuxsyscall` above cannot cover the native instruction — there is no
`CALLIND` to retarget and the number is a runtime value rather than a constant
to look up in the syscall table. Its x86-64 support is only for the distinct
`INT 0x80` compatibility path, so this fix has to be number-independent.
Decision rule: a `CALLOTHER` whose only input is the user-op
index, with no output, whose index is one the architecture resolved for the name
`syscall` into the ArchSeam (`architecture.rs`, alongside `simd_shuffle_userops`,
because the boundary `ArchContext` carries no userop table), is the instruction.
It is rewritten in place — register reads inserted after the index, `RAX`
installed as the output — which is why the pass sits in the once-per-function
block beside `ActionLinuxSyscall`: like it, the pattern is read off the raw
p-code, and adding a register read or write is only legal before heritage builds
SSA. `RCX` and `R11` are already written by the SLEIGH constructor and are left
alone, and a user-op a compiler spec has specialized with its own
`<callotherfixup>` carries an injection id and is dropped at seam-resolution
time, so a spec-declared model always wins.

A successful rewrite also marks the op with `unlace_x64syscall` in
`substrate/op.rs (pcodeop_addlflags)`. The mark survives dead-code removal of
an unused RAX output; a late memory fence must still recognize a system call
whose result the function ignores. `x64syscall.rs (guard_memory)` adds
unknown effects on writable default-data and stack ranges during chapter 03's
heritage, preserving a global store that the kernel reads before the function
overwrites it. Read-only ranges, register storage and unique temporaries are
excluded. Only marked, recognized, uninjected calls under `on` or `abi` act;
the memory model additionally requires the exact GCC AMD64 target, the live
ordinary `__stdcall` SysV model with eight-byte extra-pop, and its real negative,
byte-addressed eight-byte stack based on `RSP`. `architecture.rs (build_arch_handle)`
passes the exact-target fact through `ArchContext`, and
`x64syscall.rs (memory_abi_supported)` checks the selected function and
evaluation models after prototype setup. Windows targets and MSABI evaluation
or function models retain the existing register-only syscall rendering: the
emitter cannot yet express their unnamed incoming-stack addresses. The mark
alone therefore never admits a memory effect or an ordering fence. `off`
retains its model, and image/preset decisions and ABI argument recovery remain
as described below. Chapter 06 uses the same admitted set to keep saved loads
before the instruction. For a pipe read replacing 3 with 100,
`v = *p; syscall; return v * 5 + *p` returns 115 rather than 600.

Which argument registers are read is the one judgement in the pass, and with a
runtime number nothing can settle it, so the option carries both answers. Under
`on` an argument register is taken only where a bounded backward walk of the
`CALLOTHER`'s own basic block finds an op writing it before the instruction —
declining at the first call or branch, at the top of the block and at a 64-op
budget, and counting any overlapping output, since a 32-bit `MOV ESI` sets up
`RSI` just as a 64-bit one does. Every read it adds is therefore of a value the
function demonstrably places there, and no undefined register is ever introduced;
the cost is that a wrapper whose setup sits in a predecessor block keeps the old
rendering for that argument. Under `abi` all six are taken unconditionally, which
is what the kernel contract permits the callee to read and is the answer for a
multi-block wrapper, at the price that a register the function never writes reads
as an undefined input and can add a parameter the source has not got. `RAX` is
read and written under both: the number is in it by definition, and the output is
the half that retires the false return. Inert on every language but x86-64 —
`RAX` and all six argument registers must resolve at eight bytes and the default
code space must be eight bytes wide — and on any function with no `SYSCALL`.
Exercised by `tests/stages/x64syscall.toml`, whose functions include the
register witness, a no-`SYSCALL` control, a split-block wrapper that separates
`on` from `abi`, and a saved pointer value across a buffer-writing system call.
`crates/unlace-cli/tests/x64_syscall_memory.rs` compares native code
with emitted C using actual Linux pipes, including kernel-observed stores and
returned byte counts followed by a buffer read. Chapter 06 owns the shared
call-result ordering checks for recognized system calls. Its Windows/MSABI
controls compare prior output across default, aggressive, `on`, `abi` and `off`
and compile the enabled output with GCC and Clang; an ordinary SysV metadata
store remains preserved.

**(unlace) The system call of ARM, AArch64, RISC-V, MIPS and PowerPC —
`option syscallregs`, default `auto`,
`crates/unlace-lift/src/p2_lift/syscallregs.rs
(ActionSyscallRegs)`.** `svc` (ARM and AArch64), `ecall` (RISC-V), `syscall`
(MIPS) and `sc` (PowerPC) lift to a `CALLOTHER` with no register inputs and no
output, so the same two halves of damage follow as for x86-64. The Linux and BSD
kernels these instructions trap into return a result in a register (`r0`, `x0`,
`a0`, `v0`, `r3`), and unlace, told that nothing changes, hands later readers the
value the function put there to set the call up: a wrapper that swaps its
arguments into `r0`/`r1` returns them as a register pair, a MIPS wrapper returns
the syscall number it loaded into `v0`, and a test of the result tests the
argument instead.

Not every handler returns a result. A bare-metal RTOS uses the same instruction
for a context switch or a privilege change and preserves every register, and its
compiler keeps live values in the result register across it: FreeRTOS's Cortex-M
`xPortRaisePrivilege` sets `r0 = 0`, issues `svc 2` and returns that `r0`. So the
value decides where the pass acts. `on` acts on any image. `auto`, the default,
acts only when the loader identified the image as a program for an operating
system's user space: `load file` records
`crates/unlace-analysis/src/loader/format/elf_userland.rs
(is_os_userland_image)` on the Architecture, which answers yes for an ELF with an
`EI_OSABI` of NetBSD, GNU/Linux, FreeBSD or OpenBSD, a `PT_INTERP` segment, a
`PT_DYNAMIC` segment holding `DT_NEEDED` or `DT_SONAME`, or a type-1 ABI note of
the `GNU`, `FreeBSD`, `NetBSD`, `OpenBSD` or `Android` owner (in a segment or, for
a relocatable object, a section). Firmware carries none of these, and neither do
a statically linked musl or uClibc program, a relocatable object or a raw image,
so those keep the vendored model unless `on` is set. The XML bootstrap never
sets the fact, which keeps `auto` inert on the datatest corpus, and the Ghidra
front-end, which does not load the file itself, never sets it either.

The pass runs right after `ActionX64Syscall` for the same reasons. The language
id's processor field picks the family, and the family's user-op
(`software_interrupt`, `CallSupervisor`, `ecall`, or `syscall` on MIPS and
PowerPC) is resolved to its index at seam time, leaving out one a compiler spec
has specialized with a `<callotherfixup>`. A matching `CALLOTHER` (the index, at
most the instruction's immediate, no output) is rewritten in place. It writes the
result register. After its existing inputs it reads the number register (`r7`
on ARM, `x8` on AArch64, `a7` on RISC-V, `v0` on MIPS, `r0` on PowerPC) and then
the argument registers in order (`r0`–`r6`, `x0`–`x7`, `a0`–`a6`, `a0`–`a3`
plus `t0, t1` for the 64-bit MIPS ABIs, `r3`–`r8`), each only while the function
writes it on every path to the instruction with no call between the write and
the instruction. The first argument register that fails ends the list, and a
number register that fails empties it. A printed argument is therefore always in
its own position, and every read is of a value the function placed there, so no
undefined register becomes a parameter. The must-define test is a dataflow over
the raw blocks that reach the instruction: a block decides for itself when it
writes the register or makes a call, otherwise it takes the conjunction of its
predecessors, and the entry decides no. Every block starts at yes and only
falls, so a loop is decided by the paths into it, and more than 256 blocks
answers no. Another system call writes the result register, and on MIPS and
PowerPC its error flag (below) as a value the function did not set, so a flag
left by an earlier system call is not an argument the function wrote.

The register pair goes away as a consequence. The low half is now the call's
output, and the high half is an argument the call reads. Return recovery's
`only_op_use` treats a rewritten system call as a call site
([04 — Calls and prototypes](04-calls-and-prototypes.md)): a value it reads as an
argument is not also a returned half, even when the function throws the result
away and the kernel-preserved argument register still reaches the `RETURN`. It
stays free to be the next call's argument.

MIPS and PowerPC kernels also report a failure outside the result: MIPS sets
`a3` to 1 (0 on success) and PowerPC sets the summary-overflow bit of `cr0`, and
the C library tests it right after the instruction (`movz` or `bnez` on `a3`;
`bns`, or `mfcr` and a mask). So on those two families the rewrite also inserts,
right after the system call, `a3 = syscall_error()` or `cr0 = syscall_error()`
(`syscallregs.rs (define_error_flag)`): a `CALLOTHER` of the built-in user
op `BUILTIN_SYSCALL_ERROR` (`crates/unlace-middle/src/substrate/userop.rs`)
whose only input is that user-op id, with its call flag cleared. It is an
ordinary write placed before heritage, so heritage treats it like any other
register write (an `INDIRECT` there would not work, see below), and with no
side effect dead-code removal drops it wherever nothing reads the register. A
copy made when a block is duplicated (`funcdata_block.rs
(CloneBlockOps::build_op_clone)`, `funcdata_op.rs (Funcdata::clone_op)`) clears
the call flag that setting its opcode restores, so a copy dies the same way.
The test after the call then
reads the kernel's flag. Before, it read the function's entry `a3`, which became
a phantom fourth parameter, or a `cr0` nothing set, printed as an uninitialized
local; where the function had itself loaded `a3` as the fourth system-call
argument, the test even folded to a constant, and glibc's MIPS `lutimes` always
returned -1. The whole `cr0` field takes the opaque value: the Linux system-call
ABI lists `cr0` as volatile across `sc`, its summary-overflow bit being the error
condition, so code after the call cannot rely on its other bits.

Three later consumers keep the flag tied to its own call. Every flag has the
same input, the user-op id, but not the same value, so the test of whether two
values are the same (`expression.rs (functional_equality_level)`) answers no for
it, as it does for a call: `(e1 | e2) != 0` over two calls' flags is not folded
to one of them, and the flags of two branches are not merged into a new
`syscall_error()` after the join, which as a new op would also have regained the
call flag and printed as a bare statement. Chapter 04's
`AncestorRealistic` treats the flag reaching a later call's killed-by-call
argument register like a value carried through a call, so it is not that call's
argument. Chapter 06's implied-variable check treats its definition like a
call's output: when its range crosses a call or another system call it is
printed at its definition, so a `syscall_error()` never appears after a later
system call it does not belong to.

On MIPS the phantom `a3` had also pulled a wrapper's real parameters in with
it: parameter recovery fills the positions before the last input it finds, so a
`read` wrapper that hands its three parameters to the kernel in place printed
`(a0,a1,a2,a3)` although the call read none of them, and without the phantom it
printed `(void)`. So a MIPS system call goes on reading argument registers,
written or not, up to as many as the kernel's entry point for its number takes
(`syscallregs.rs (mips_floor)`), each one only while, on every path to the
instruction, it holds the function's incoming value with no call on the path or
a value the function wrote after the path's last call
(`syscallregs.rs (reaches_without_call)`). The o32 ABI does not preserve
`a0`..`a3` across a call, while unlace's call model carries them through it, so a
register that crossed a call would print the value from before the call:
`foo(1,2,3,4)` followed by a `reboot` that sets `a0`..`a2` printed the 4 set up
for `foo` as reboot's fourth argument. The first register that fails ends the
list, which then reads exactly what the written-registers rule reads. The
number is the constant that every write of `v0` reaching the instruction, with
no call in between, writes
(`syscallregs.rs (constant_at)`). The count comes from one table sorted by
number (`syscallregs/mips_args.rs`), since the three ABIs number their
calls in disjoint ranges (o32 from 4000, n64 from 5000, n32 from 6000). It is
built from the kernel's own `syscall_o32.tbl`, `syscall_n64.tbl` and
`syscall_n32.tbl` and the parameter lists of the entry points they name, an o32
64-bit parameter taking an even-aligned register pair; o32 reads at most four
registers and n32/n64 six. These are the kernel's counts, not the documented
wrappers': `faccessat` takes three registers, `ppoll` one more than its
wrapper. A number the table does not know, one computed at run time as in the
C library's `syscall` dispatcher, reads all of `a0`..`a3`: such a function
hands its own `a3` to the kernel, and taking fewer would drop a real parameter.
Where it does not, its flag test still reads as a fourth parameter, as it did
before. A call that sets up fewer registers than the kernel's entry takes, with
no call before it, shows the rest as the function's parameters, since the
kernel does read them: a `write` that sets `a0` and `a1` also passes the `a2`
its caller left. PowerPC keeps the written-registers rule: its flag is not an
argument register, so no phantom pulled parameters in there.

The same policy gives the recognized system call unknown effects on writable
memory. `syscallregs.rs (guard_memory)`, called by chapter 03's
`Heritage::guard`, places an `INDIRECT` on every new writable range in the
default data space or stack space, with address-tied outputs forced as for an
ordinary call. It runs during heritage rather than inserting markers before
heritage, which would falsely make the range look previously processed. A
store before `read(fd, &sink, 4)` remains observable to the kernel, and a load
after it reads the global buffer instead of the earlier stored value: `sink =
v; svc; return v * 5 + sink` no longer folds to `return v * 6` (GH-856).
Registers, unique temporaries, read-only ranges, unrelated user ops, and
compiler-spec injected system calls keep their existing effects. `off`, and
`auto` on an unclassified image, retain the original memory model too.

What it does not model. Outside MIPS, arguments the function hands the kernel
untouched are not read, since nothing says how many of them the kernel reads,
and taking all of them would give a zero-argument call phantom parameters; the list stops at
the first of them, so a later argument the function does write is not shown
either, and a pass-through wrapper prints its call with the number alone. When
that leaves a written register out, return recovery can still take it as the
high half of a returned pair, as the vendored model does. The MIPS `v1` that a
few calls return a second value in keeps its pre-call value, and the o32
arguments past `a3`, which the kernel reads from the stack, are not read. An
`INDIRECT` creation was tried for the error flag first and rejected: `Heritage::collect`
reads a marker op already in a range as evidence of an earlier heritage pass and
clears the range's new-addresses property, which turns off the call, store and
return guards for that register. On MIPS, every call in a function with a
`syscall` then lost its `a3` argument. An image whose handler preserves `a3` or
`cr0` under `on` reads the opaque flag where it kept its own value, the same
caveat as for the result register.
`option syscallregs off` restores the vendored zero-effect `CALLOTHER`.

Exercised by `tests/stages/syscallregs-arm.toml`, `-aarch64.xml`,
`-riscv.xml`, `-mips.xml` and `-ppc.xml`, each with the pair or number witness
under `on`, a use of the result after the call, a barrier `CALLOTHER` as the
control, and a pass under the default `auto` that keeps the vendored model on a
byte chunk. The ARM test adds a call whose result is discarded, a call followed
by a use of the kept `r1`, and a call that writes `r1` but not `r0`; the RISC-V
test adds a loop that passes `a1`/`a2` through and keeps scratch values in
`a3`/`a4`, none of which takes an argument position.
`tests/stages/syscallregs-mips-a3.toml` (a clang `movz` and a gcc branch on
`a3`, the latter followed by a call while `a3` still holds the flag) and
`-ppc-cr0.xml` (an `mfcr` and a `bns` test, and a compare of the result as the
control) check the error flag under `on` and the phantom parameter or the
uninitialized `cr0` under `off`. The MIPS test adds a test of two calls' flags
(`e1 | e2`), a `read` wrapper that hands its three parameters over in place, and
a `reboot` after a call whose `a3` is not read;
the PowerPC test adds a flag that each branch sets and that is saved across a
call after the join. In `-mips.xml`, `number` makes a `write` (4004) with two
registers set, so it also passes the kernel the `a2` its caller left.
`tests/stages/syscallregs-cortexm.toml` is the bare-metal control: FreeRTOS's
`xPortRaisePrivilege` keeps its returned `r0` under `auto` and `off`.
`crates/unlace-cli/tests/syscall_regs_cli.rs` loads the ARM witness as
an object with and without a GNU ABI-tag note: the note turns the default on.

**(unlace) Overlapping branch target — `option overlapbranch`, default on
(DIV-106), `crates/unlace-lift/src/p2_lift/overlapbranch.rs
(unlace_overlaps_pending_branch)`.** A conditional branch pushes both successors and
the follower pops the fall-through first, so the fall-through instruction is
decoded before the branch target is ever looked at. The x86 anti-disassembly
overlap exploits exactly that ordering: a `75 01` short JNZ hops over a junk `e8`
lead byte, so the fall-through decodes as one long bogus `CALL` that *swallows*
the branch target and desynchronises everything downstream — an out-of-image
callee, stores through never-assigned pointers, and invented `dat_` globals, all
of them artefacts of operand bytes read as opcodes. `FlowInfo::set_fallthru_bound`
notices the clash only afterwards, in `reinterpreted`, by which time the losing
stream and its successors are already built. Decision rule: the instruction just
decoded is the fall-through of the previous instruction's conditional branch, and
that branch's own target lies **strictly inside** its encoding (`curaddr < target
< curaddr + step`). Both ends are strict — `target == curaddr` is a branch to its
own fall-through and `target == curaddr + step` is a branch over one instruction,
both ordinary compiler output. **One legitimate overlap is excluded first**
(`unlace_streams_reconverge`): glibc's compiler-generated conditional-`LOCK`
idiom (`JE` over a `LOCK` prefix byte, e.g. `malloc_consolidate` in a static
binary) is the same instruction with its prefix taken or skipped, so the two
decodes END AT THE SAME ADDRESS and both streams are real — truncating the
fall-through there would delete an atomic store on a live path. The branch
target's own instruction length is therefore decoded and the rule declines
whenever `target + target_len == curaddr + step`, and likewise whenever the
target does not decode at all (following it would gain nothing over the decode
that did work). The test is architecture-neutral — no prefix-byte table — and
runs only after the strict-interior test has already matched, which it never
does in ordinary code. Ownership policy: **the branch target wins**,
because a branch target is an address the program *encodes* while a fall-through
is only ever inferred from the previous instruction's length, and because two real
instruction starts cannot sit at `next` and strictly inside `next` — whenever the
rule fires at least one of the two decodes is already wrong. The loser is
truncated in place, in `flow.rs (FlowInfo::process_instruction)` right after the
decode: the ops that decode just emitted are dropped (`delete_remaining_ops`), an
artificial RETURN marked `badinstruction` is planted at the loser's own address,
its recorded size is set to 1, and an `overlapbranch` warning makes the truncation
attributable. The conditional stays a conditional and its fall-through edge stays
in the graph — the edge simply ends in a halt — and the pending target is then
decoded on its own boundary by the ordinary `addrlist` walk. The halt is marked
`badinstruction` rather than `noreturn` because a `noreturn` halt is folded into an
empty `if (cond) { }` by `unlace_ifnoexit`, which reads as though the fall-through
continues. Nothing already committed to is deleted or re-anchored: the loser is
the instruction *currently* being decoded and the winner is still pending, which
is what keeps this out of the "repair the flow graph afterwards" class of change.

**(unlace) Stack-probe loops — always on (DIV-3),
`crates/unlace-lift/src/p2_lift/stackprobeloop.rs
(RuleStackProbeLoop)` (from Ghidra issues GH-8017/6858).** gcc's
stack-clash/`-fstack-check` prologue probes a large frame one page at a time,
leaving the post-loop stack pointer as a self-referential phi
(`PHI = PHI - page`) the spacebase tracker cannot resolve — every post-loop
local renders as `&pxVar[-0x1000]` noise and argument stores at unmatched
offsets vanish from calls. The rule (it runs in the simplification pools but is
stack-pointer normalization, so it is specified here) matches the exact shape —
a two-input stack-pointer `MULTIEQUAL` whose back edge subtracts the page
constant and whose loop exit compares against a stack-relative limit — and
rewrites the phi to the value the exit comparison pins:
`INT_ADD(SP_in, limit_const - page)`. Inert on functions without a probe loop.

**(unlace) V850 indirect branch — `option v850indirectbranch`, default on, V850-gated,
`crates/unlace-lift/src/p2_lift/v850indbranch.rs
(unlace_is_v850_indirect_jmp)` (from Ghidra issue GH-8817).** The V850 SLEIGH
spec lifts `jmp [reg]` to a CALLIND, so a compiler switch dispatch never
reaches jump-table recovery (which is gated on BRANCHIND). When on, a CALLIND
through a named non-PC hardware register is reclassified to BRANCHIND at the
top of `xref_control_flow`. Gated on the V850 language id
(`v850indbranch.rs (applies)`), because the same pattern is a genuine
computed call on other architectures. The register name is resolved
through the translator-neutral `RegisterLookup::get_register_name` surface:
standalone runs read SLEIGH's local register table, while Ghidra mode uses its
existing `getRegisterName` host callback. The shared flow predicate must not
downcast through `EngineTranslate::as_sleigh`, because Ghidra deliberately has
no standalone SLEIGH engine. The backend-boundary failure and regression drive
are recorded in
[`docs/features/ghidra-v850-register-lookup/analysis.md`](../features/ghidra-v850-register-lookup/analysis.md).

**(unlace) Computed return-register jumps — `option returnbranch`, default on,
`crates/unlace-lift/src/p2_lift/returnbranch.rs (computed_target)`.**
A SLEIGH spec marks a jump through the return register as RETURN whatever the
register holds, so MIPS code that loads a constant code address into `$ra` and
executes `jr $ra` ended the function there and dropped what it reached. At the
same point in `xref_control_flow`, a RETURN whose target a bounded
straight-line prefix from the function entry proves constant is reclassified
to BRANCHIND, unless the proven target is zero: `move ra, zero` marks the end
of a backtrace, and a function start that discovery placed on such a delay
slot (u-boot's `relocate_code` jumps to `board_init_r` with it) would otherwise
turn the next function's real return into a jump to address zero. The prefix
starts with the tracked context values, never counts
the incoming return address as known, evaluates at most 256 raw operations in
emitted p-code order (so delay-slot writes after the target is captured do not
change it) and stops at any call, branch or unknown user operation. A write
whose value is not proven invalidates the storage it overlaps, a store forgets
every value in the space it writes, and a read of part of a known register
takes the bytes it names in the space's byte order. Decoded instructions that
emitted no p-code at all may precede the prefix, since they cannot have changed
anything; a MIPS `nop` is one, and demanding an operation at the entry address
itself rejected the proof outright. A mode marker that selects the ordinary ISA
does not stop the prefix. That marker is recognized by the user-op name the
language declares, and the incoming return storage is the cspec's return
address or a register the language names `ra` when the cspec names none — as
the Octeon specs do. Neither consults the architecture id, which the Ghidra
front end spells as a session number, so both front ends decide alike.
`Prefix` is the one evaluator for such bounded target proofs. Only the flow
kind changes: jump recovery must still prove the destination. It inherits one
limitation it shares with every architecture's register jump, rather than
introducing it — a recovered single-entry table whose register is redefined on
a back edge found after recovery is not staged again, so that later transfer is
missing from the output, exactly as it is for an x86-64 `jmp *%rax` of the same
shape. A flow override at the return keeps its classification, and off restores
the spec's RETURN.

**(unlace) Re-entered indirect dispatches — `option constselectjump`, default
`reentry`, `crates/unlace-lift/src/p2_lift/flow.rs (generate_ops_with_jumptables)`.**
A dispatcher loop jumps through one register, and each step's code loads the
next step's address and jumps back. Flow recovers the dispatch's first target
before that code is decoded, so upstream keeps a one-entry table and drops every
later step. Under `reentry` (and `on`), a recovered in-bounds, non-override
singleton table is provisional. After each round of table following,
`crates/unlace-lift/src/p2_lift/indirectreturn.rs (reentry_edges)`
collects the new direct branches and fallthroughs into previously decoded
instructions, reading only the dead list's tail: flow appends what it
generates and moves injected or inlined sequences only next to other new
operations. A recovered table destination that is already decoded is an edge
as well, since following it creates no operations. A re-entered table is
followed again on every round, so its transfer/destination pairs are followed
once each; other tables keep upstream's re-following, which on x86-64 gnulib
`quotearg_buffer_restyled` already shapes the output.

`crates/unlace-lift/src/p2_lift/indirectreturn.rs (reaching_edges)`
keeps, for each provisional dispatch, only the new edges whose destination
reaches it over raw flow: fallthroughs, direct targets, every operation of an
instruction with an internal relative branch, and recovered table targets. An
edge elsewhere cannot bring the dispatch another value, so it costs that
dispatch nothing. A round's walks visit at most 2^20 operations; past that,
every dispatch counts as reached. When every reaching edge lands on the
dispatch instruction itself,
`crates/unlace-lift/src/p2_lift/returnbranch.rs (target_on_edge)`
runs the edge's block and the dispatch instruction's own operations through
the same `Prefix` evaluator as the entry proof, and a proven local constant
extends the table without another partial decompile. Any other reaching edge
requests a full recovery once the locally proved frontier drains. At most 128
such retries run per flow; every dispatch still pending when they run out
keeps its targets and carries `Re-entered indirect jump may have more targets`,
once each. A retry admits the constant-select model whatever `constselectjump`
says except `off`, because the re-entry already shows the targets are one
function's. A retry's failed second stage keeps the old model and targets and
reports that warning; outside re-entry a failed second stage restores its model
silently, as upstream does. `off` records no provisional table and restores
upstream's flow.

A re-entered dispatch can also receive the caller's return address, and not
always last: an early exit can reach it before the later steps are decoded.
For such a retry the select model accepts values that are local constants or
the incoming return, through the transfer's own mask, with its walk bounded by
the table ceiling. The return becomes the table's last, unlabelled address: a
synthetic RETURN that `FlowInfo::unlace_return_stub` plants one byte past the
jump, where no instruction is decoded, and that the table marks as its default
case. If an instruction is already decoded there, the return destination is
dropped with `Indirect jump caller return overlaps decoded code` rather than
flowing into that instruction. Whatever the dispatcher block does, including a
delay-slot update, runs before that return exactly as it does before each case.
Out-of-bounds or unmapped destinations retain one placeholder and do not make a
singleton table provisional. The original transfer's mask is recorded from raw
storage before SSA can combine it with other operations.

`crates/unlace-lift/src/p2_lift/indirectreturn.rs (normalize_return_selector)`
checks a bounded COPY/PHI/low-pointer projection of known destinations and the
incoming return token. All constant targets must already be represented.
`crates/unlace-emit/src/p9_emit/returnselector.rs (ActionReturnSelector)`
then clones only this selector expression, replacing the caller-return input in
the clone with a representable sentinel distinct from every real target. Labels
and guards are recovered first. Other readers of the original values are
unchanged, and dead original selector operations are removed before
declarations. The synthetic default RETURN thus has a defined C selector,
including conditional and early returns. Every dispatcher operation remains;
unknown inputs, destructive masks, unsupported projections or an exhausted
finite encoding refuse normalization with a warning.

## 2.3 Jump tables & switch recovery

A switch exists in the output only if a BRANCHIND op carries a recovered
`crates/unlace-middle/src/p2_lift/jumptable.rs (JumpTable)` — a map
from index values to code targets, attached to the op, with per-target case
labels. Everything in this section exists to manufacture, verify, or rescue
that artifact; when all of it fails the BRANCHIND is demoted to a CALLIND and
the switch (and any loop containing it) is destroyed.

### The recovery stage: a reduced sub-decompilation at flow time

The BRANCHINDs parked on `tablelist` during op generation are recovered before
block building, in a loop that re-fills flow from each new table's targets
(`flow.rs (FlowInfo::generate_ops_with_jumptables)`). Each round of that loop
ends by draining the pending p-code injections (§2.1) — the newly reached blocks
queue their own, and an injected body can itself introduce indirect branches, so
the loop re-runs while `tablelist` is non-empty. The address computation
feeding a raw BRANCHIND is unusable as lifted — it must be simplified first, but
the function has no blocks or SSA yet. So each attempt runs as a **reduced-tree
sub-decompilation on a clone**
(`crates/unlace-middle/src/substrate/funcdata_block.rs
(Funcdata::stage_jump_table)`, C++ `stageJumpTable`): the raw ops and existing
tables are cloned into a partial `Funcdata` (`"@@jumprecovery"`), its blocks are
built against the parent flow's `visited` snapshot (the partial gets the
architecture's default prototype model and then, as the C++ `Funcdata` ctor's
`resetLocalWindow` after `setScope`, its local scope's stack window; without
the window no stack location is in scope, `syncVarnodesWithSymbols` marks every
one unmapped and unaliased, and `RuleIndirectCollapse` drops the guard a call
puts on the fields of a struct whose address it receives, so a switch index
read from such a field folds to the value stored before the call, #871), and the reduced
`"jumptable"` action set — heritage plus the simplification core, no
structuring — is run over it (`decompile_drive.rs (run_jumptable_pipeline)`).
The model is then recovered against the *partial*'s BRANCHIND and the finished
table is written back keyed to the real op. **One partial is built per
`recoverJumpTables` batch and shared by every table in it**
(`jtsharepartial`, default on): the C++ guards the clone plus the reduced
pipeline behind `if (!partial.isJumptableRecoveryOn())`, so upstream pays for the
sub-decompilation once per function however many BRANCHINDs it has, and unlace now
does the same. Recovery itself still runs per table against that shared partial,
and it mutates it (the emulation walks its ops), exactly as upstream's does.
Turning the option off restores unlace's older per-table clone, in which a later
table's fresh partial re-clones the siblings recovered before it; that is what
`unrolledguard` (below) needs to see, and it is the only reason the per-table
shape is still reachable. Sharing is worth about 16% of the wall time of a
two-table function, and on the interleaved shape `unrolledguard` was written for
it recovers the same tables without any tolerance rule, because the shared
partial's edge collection runs once while every sibling table is still empty.
The protection upstream's `ActionRestructureVarnode` gives a switch path
(`funcdata_block.rs (Funcdata::protect_switch_path_indirects)`, C++
`protectSwitchPathIndirects`) walks back from the BRANCHIND through ops with one
non-constant input and marks the earliest INDIRECT `noIndirectCollapse` when the
walk ends at a constant. (unlace) An `INT_XOR` or `INT_SUB` of a varnode with
itself also ends the walk as a constant: MSVC zeroes a struct through
`xor eax,eax`, and in the partial the alias pass sees neither the struct's
address nor its pushed copy (the calls have no inputs yet), so the struct's
fields are marked unaliased and every call's INDIRECT on them would collapse
before a rule folds the `xor`. With the earliest INDIRECT kept, a switch index
read from such a field after a call stays an unknown value instead of folding
to the value stored before the call (#871; Ghidra reaches the same state by
folding the `xor` before its second restructure pass).
(unlace) Under a per-function budget (`00-overview.md`, *The watchdog*) the loop is bounded in
time as well: `flow.rs (FlowInfo::recover_jump_tables)` asks the drive's
deadline before each table and after its attempt, and `jumptable.rs
(JumpTable::recover_model)` after the basic and the default-path model. A
table reached once the deadline has passed is not attempted — its BRANCHIND is
truncated like any unrecovered one, so the loop drains instead of staging more
sub-decompilations — and the budget error names the step and the indirect
jump's address. Without a budget each probe is one thread-local read.
(unlace `jumptablework`, default 250000) The loop is also bounded in work.
Each recovery costs the number of instructions flowed when it starts, because
its partial decompile covers all of them, and
`flow.rs (FlowInfo::jt_work_exhausted)` adds that to the function's sum
before each table. Once the sum passes the bound, that table and every later one
are not attempted. They are truncated like an unrecovered table, and one warning
at the first of them names the option. This is what stops a function whose
recovered tables lead into more and more code: an obfuscated arm64e image that
dispatches every branch through a shared table of signed pointers grows a
972-byte function past 20,000 flowed instructions, one recovery at a time.
`off` removes the bound.
Two pre-checks bound the attempt:
`funcdata_block.rs (Funcdata::early_jump_table_fail)` backtracks up to 8 ops
through value-preserving arithmetic looking for a computation the recovery can
never emulate -- but its only failing arm (the uninjected-CALLOTHER
classification) is a stubbed loss, so in live unlace the check always passes, and `funcdata_block.rs (Funcdata::test_for_return_address)`
recognizes a BRANCHIND whose input chains back to the saved return address —
that is a return, not a switch (`RecoveryMode::FailReturn`).

Failure demotes: `flow.rs (FlowInfo::truncate_indirect_jump)` rewrites the
BRANCHIND to a RETURN (`fail_return`, warning `"Treating indirect jump as
return"`) or to a CALLIND with an artificial RETURN after it (`fail_normal`,
warning `"Treating indirect jump as call"`; `fail_thunk` silently; a
CALLOTHER-computed target additionally marks the halt no-return) (unreachable today: nothing produces the CALLOTHER failure, see above).
(unlace, #421) When the demoted CALLIND resolves to a no-return callee — an
indirect-call override `ActionDeindirect` planted on the previous pass, an IAT
or GOT import slot, a stated callee — the call-spec setup has already put the
no-return halt after it, and no artificial RETURN is added. Upstream adds one
anyway, so a thunk `jmp [__imp_ExitProcess]` or a body ending in a tail jump to
`_CxxThrowException` printed a dead `return;` after the `// no-return` call.
This is the
failure mode every rescue below is fighting for: one unbounded table turns a
switch into an opaque computed call.

(unlace) A panic in the sub-decompilation is not one of these failures.
`decompile_drive.rs (run_jumptable_pipeline)` catches it so it cannot end the
batch, but it does not demote the table: the panic is the function's error,
worded as the main drive words its own (`decompile pipeline reached an
un-ported seam (LOSS-131) in jump-table recovery at <addr>: <panic>`), and the
flow's later tables are not attempted (`decompile_drive.rs
(follow_flow_on_fd)`). A budget already spent when the panic is caught is the
error instead, as in the main drive; within a drive, one spent while the rest
of the flow finishes does not replace the panic. An error the sub-decompilation
returns still demotes that one table, as upstream's `LowlevelError` does.
Demoting on a panic too printed the panic but left the function with C, its
table dropped and no error, so a `decompile-all` record could not tell a
function whose recovery crashed from one with an ordinary unrecoverable table.
For tests,
`UNLACE_JUMPTABLE_FAULT=<entry>` (`jumptablefault.rs (check)`) panics the
recovery of the function at that entry.

### The JumpBasic model

The base recovery (`jumptable.rs (JumpBasicModel::recover_model_basic)`) is
Ghidra's JumpBasic: derive a *normalized switch variable* plus a *value range*
such that emulating the address computation for each in-range value enumerates
the case targets.

1. **Path meld.** Starting from the BRANCHIND input, walk the defining
   expressions backwards, depth-first, pruning at calls/phis/constant-free ops
   (`jumptable.rs (JumpBasic::find_determining_varnodes)`). The
   `jumptable.rs (PathMeld)` intersects all paths into the sequence of Varnodes
   *common to every path* — the candidates for the switch variable — ordered
   from the branch backwards.
2. **Guards.** `jumptable.rs (JumpBasicModel::analyze_guards)` walks up the
   CFG from the branch through at most 2 dominating CBRANCHes, not counting up
   to 2 that test one value for equality (`jumptable.rs (tests_one_value)`;
   unlace: such a test removes one value, so the range check behind it still
   bounds the switch, and OCaml puts `r == 0x41` between its two checks,
   `tests/stages/ocaml-eq-guard.toml`); each guard's
   branch condition is pulled back through at most 2 defining ops
   (`jumptable.rs (circlerange_pull_back)`, the op-coupled `CircleRange`
   pull-back, non-zero-mask-refined) into a `jumptable.rs (GuardRecord)`: a
   circular value range the guarded Varnode must lie in for control to reach
   the switch. A guard applies to a candidate if they are literally the same
   Varnode, quasi-copies of one base value, duplicate calculations, or loads of
   the same location (`jumptable.rs (GuardRecord::value_match)`). Two LOADs
   read the same location when their addresses are one Varnode or one base plus
   equal constants, or when the addresses are computed by the same pure ops
   from the same Varnodes and no STORE, CALL, CALLIND or CALLOTHER lies between
   the loads on a chain of single-predecessor blocks
   (`jumptable.rs (GuardRecord::no_write_between)`). gcc's compact selector
   `cmp byte [rax+rcx],N; ja; movzx edi,byte [rax+rcx]` guards one load and
   indexes the table with the other; without that match the byte's full 256
   rows were emulated and the next table's rows were read with this table's
   base, sending flow into instruction interiors (#1028).
   A logical right shift also matches a high-byte slice of the same SSA input
   (`highslice_guard.rs (matches)`). For an input of `N` bytes, shifting
   right by `8*k` produces exactly the unsigned value of `SUBPIECE(input,k)`
   when the slice has `N-k` bytes and the shift retains the input's width.
   Both offsets must be constant, `0 < k < N`, and `N <= 8`. This lets a
   32-bit bounds comparison constrain an AMD64 table index produced by a
   64-bit right shift. Arithmetic shifts, shorter interior slices, different
   SSA inputs and non-byte shifts do not establish this equality. Matching
   changes no guard condition: the existing circular-range intersection keeps
   its signed, unsigned or wrapping value set. `highsliceguard on|off` gates
   this exact value match; it does not infer equality from a cached non-zero
   mask. The option is off in every preset: enabled recovery added 10.8%
   median CPU time and 11.2% median wall time on the pinned upstream table
   case, exceeding the 5% default speed budget while preserving all 675
   original datatest assertions. An explicit `highsliceguard on` requests the
   additional recovery work.
3. **Range.** For each meld candidate, `jumptable.rs
   (JumpBasicModel::calc_range)` seeds a range from what the Varnode itself
   proves (a constant; a boolean output = {0,1}; an AND-mask bound + power-of-2
   stride from the non-zero mask) and intersects every matching guard range;
   ranges still larger than 0x10000 are assumed positive. After that existing
   domain narrowing, matching guards are intersected again by
   `crates/unlace-lift/src/p2_lift/switchguardrange.rs (intersect)`.
   Two circular guard ranges whose first intersection needed two intervals may
   now intersect as one interval. This retains both bounds of a guarded A32 `ADDPL pc,pc,index,lsl #2`
   table instead of dropping its branch bodies into an unresolved interior call.
   ARM's lifted PC+8 base, the predicate's fallthrough, and actual indirect calls
   retain their existing flow semantics.
   (unlace) When one range of an intersection has a larger step,
   `rangeutil.rs (CircleRange::new_stride)` moves the other's ends onto that
   phase. It reports the result empty only when the first value of the new
   phase lies outside the old range. Upstream compares the order of the two
   ends instead, so a wrapping range whose left end rounds past the top was
   dropped as empty. That lost the upper check of an OCaml tagged-int match:
   `x + 1 < 0x1eb` pulled back to the even `x` is `[-1, 0x1ea)`, which is
   `[0, 0x1ea)` at step 2 (`tests/stages/ocaml-tagged-guard.toml`).
   `find_smallest_normal` picks the candidate with the smallest reaching range
   as the normalized variable — refusing a 1-byte, 256-value candidate unless a
   table LOAD lies between it and the branch (a bare byte is not evidence of a
   switch). One special case: if the meld is a single read-only Varnode, the
   "switch" is a jump through a read-only pointer; its value is read from the
   load image and the table has one entry.
   If that normalized variable is itself the output of a byte-sized LOAD, a
   bounded common input farther down the meld may prove a smaller, exact output
   domain. Unlace emulates every input value through the path, with one total
   budget of 65,536 values across candidates (`jumptable.rs
   (MAX_SELECTOR_INPUTS)`, or `jumptablemax` when that is larger), and accepts that
   domain only when every direct or implicit load-image read is wholly covered,
   byte by byte, by global read-only and non-volatile properties. It then
   carries the resulting finite set through target recovery. An unbounded input,
   failed emulation, or any writable or unclassified read leaves the original
   selector range intact, so an image snapshot cannot stand in for mutable
   program state. The budget counts emulations, not table rows: a map is as long
   as the range of the index that reads it, which can pass `jumptablemax` while
   the map selects only a few rows. MSVC's byte map for a 1,477-value range in
   node.exe selects three; with the budget set to `jumptablemax` the selector kept
   all 256 values, map bytes were read as table rows, and flow left for the
   addresses they named. A candidate stops as soon as its values cover the
   selector's whole range, since it can no longer narrow it: a 65,536-entry
   map that names all 256 rows in its first 256 bytes costs 256 emulations.
   When no candidate proves a domain (the index takes more values than the
   budget, or the map is not read-only), the selector keeps its whole range,
   but the table still cannot run through the map: the map's bytes are
   selector values, not rows. `jumptable.rs
   (JumpBasicModel::end_table_at_selector_map)` finds the bytes the map
   occupies and ends the table at the first selector value whose row would be
   read from them. The map's extent comes from the nearest upstream index that
   a guard bounds to a range that does not wrap: the path is emulated at the
   range's two ends and the selector LOAD's addresses there are the map's
   first and last (`jumptable.rs (JumpBasicModel::selector_map_extent)`). Only
   addresses are used, never the map's values, so this needs no read-only
   proof. Each selector value is then emulated in order with its LOADs
   collected; the first one that reads a byte of the map ends the table, and
   the earlier values keep their rows. A table whose first row already lies
   in the map is left alone. The `selector_domain.S` fixture places a
   three-row table directly before its byte map, as MSVC lays out its
   two-stage tables; with a 70,000-entry or writable map, rows 3 to 255 were
   read from the map and from the bytes after it, and flow left for the
   addresses they named. Only the selector's own map ends the table: a map
   placed before the table, another switch's map after it, or padding between
   table and map is still read as rows.
   **Stranded rows.** The smallest range can belong to a variable in front of
   a map: in `switch (map[mode])` one guard bounds `mode` and a second bounds
   `map[mode] - 8` to the table, and `mode`'s range is the smaller. A value of
   that variable whose map entry the second guard rejects never reaches the
   table, yet the model still gives it a row, read from wherever its
   out-of-range index points. `jumptable.rs
   (JumpBasicModel::skip_stranding_variable)` looks for such values whenever a
   guard's CBRANCH has no record that restricts the chosen variable
   (`jumptable.rs (JumpBasicModel::unbounded_guards)`). It emulates each
   value's path and evaluates those guards' varnodes from what the path
   computed (`crates/unlace-middle/src/engine/emulatefunction.rs
   (EmulateFunction::evaluate_held)`: pure ops back to computed values and
   constants, a LOAD only through an address computed from them). A value
   outside a guard's range is not dispatched (`jumptable.rs
   (JumpBasicModel::row_dispatch)`). The table over the variable is wrong
   (`jumptable.rs (JumpBasicModel::rows_strand)`) when such a row has no
   destination at all, so the table cannot be built and the dispatch would
   print as a call. It is also wrong when the sanity check below cuts it at
   such a row while a later dispatched row reaches a destination no kept row
   reaches, so the bodies only the later values reach are lost, and when a
   kept row the code does not dispatch reaches a destination no dispatched
   row reaches. In those cases the normalized variable moves toward the
   branch, to the smallest range among the candidates in front of it. When
   none of them is bounded, a guard whose varnode holds the same value bounds
   one (`jumptable.rs (JumpBasicModel::bound_by_guard)`): GCC compares
   `map[mode]` in memory and reloads it to index the table, and the two loads
   read through equal addresses (`jumptable.rs (same_value)`). The new
   variable is kept only when every one of its values emulates and none
   strands, and, at the late check below, when it can label the flow-time
   rows. Otherwise the first choice stands. The table is then built over the
   map value and the switch is printed with the map values as its labels.
   Where the lost destination was the default block, the old table could
   still print correctly, but only when the guard's join followed the switch;
   GCC's x86-64 shape returns from the guard and lets the switch fall off the
   end of the function instead. The move stops, keeping the first choice and
   its stranded rows, where a narrow value reaches its sign bit. A 1- or
   2-byte variable can be printed as a signed `char` or `short`: a label
   like `0xf0` then never matches it, and arithmetic on it, such as
   `map[mode] + '\x88'`, is done after sign extension instead of in 8 bits.
   So no candidate is taken when a 1- or 2-byte common varnode between it and
   the first choice holds, for some value the code dispatches, a value with
   its sign bit set, or one the path did not compute (`jumptable.rs
   (JumpBasicModel::narrow_sign_values)`, from the first choice's emulated
   rows); nor when one of the candidate's labels does, on the candidate or a
   variable it extends or offsets by a constant, as the unnormalized switch
   variable below may be chosen (`jumptable.rs
   (JumpBasicModel::labels_reach_sign_bit)`, labels from `jumptable.rs
   (JumpBasicModel::backup_value)`). A byte map holding 0xf0 that the switch
   dispatches therefore keeps its table over `mode`. The rows this search
   emulates read the load image through its 512-byte staging window, and a
   read whose first byte is unmapped succeeds only inside that window, so a
   stray row past the image could read as zero or fail depending on the reads
   before it. The search saves the window first and puts it back when it is
   done (`LoadImage::read_window`, `LoadImage::restore_read_window`), so the
   table built afterwards reads exactly what it would have read without it.
4. **Accept or rescue.** If the chosen range exceeds `max_jumptable_size`
   (1024, `architecture.rs (reset_defaults_internal)`; settable per run as the
   catalogued `option jumptablemax <n>`: upstream's `OptionJumpTableMax`, parsed
   strictly by `Architecture::set_unlace_option`, so anything but a positive
   decimal count is refused; the analysis tier's switch-table read takes the
   same field, see chapter 01) and no guard of the switch bounds it (unlace:
   `JumpBasicModel::guard_bounds_table` accepts a range of at most 65536
   entries, narrower than the selector's width, when `analyze_guards`
   recorded a guard; upstream refuses every range over the cap), the four unlace bound
   extensions below get one chance each, in order; if none installs a bound the
   model is declined, model 2 is tried, and then recovery fails with
   `"Could not recover jumptable ... Too many branches"`
   (`jumptable.rs (JumpTable::recover_addresses)`). A guard-bounded table
   longer than the cap fails the same way after enumeration when its entries
   reach more than `max_jumptable_size` distinct addresses, so the cap still
   bounds the arms the structurer sees: clang lowers one sparse switch into
   range-checked tables of several thousand entries that reach a few hundred
   arms, while a switch with thousands of distinct arms stays a computed call.
   Such a table also fails when it admits more than four values per table slot
   (`GUARDED_VALUES_PER_SLOT`): the slots are the distinct entries its
   emulated values load (`JumpTable::read_slots`), or its distinct addresses
   when it loads none. A table indexed by the selector reads one slot per
   value, but gcc guards the original value and indexes with one derived from
   it (`if (x <= 0x28ff) goto tbl[x >> 8]`: 0x2900 values over 41 slots), and
   every value would print as its own `case` label. Tables of at most
   `max_jumptable_size` entries are not affected.
5. **Enumeration.** `jumptable.rs (JumpBasicModel::build_addresses_basic)`
   emulates the meld path once per in-range value on the one-path syntax-tree
   emulator (`crates/unlace-middle/src/engine/emulatefunction.rs
   (EmulateFunction::emulate_path)`), masking each result by the architecture's
   function-pointer alignment; with `option jumpload` the table LOADs are also
   recorded as `jumptable.rs (LoadTable)` entries. A sanity pass
   (`jumptable.rs (JumpTable::sanity_check)`) truncates the table at the first
   null target or far target (> 0xffff from the first) with no loaded data
   behind it, rejects it outright if the *first* entry is bad, and classifies a
   1-entry table whose target is null or > 0xffff from the branch as a thunk
   (`"Likely thunk"`). A BRANCHIND sitting behind an already-collapsed constant
   guard is marked *partial* — recovered as far as flow allows, revisited by
   `jumptable.rs (JumpTable::recover_multistage)` (re-recover, restoring the
   saved model and addresses on failure).

   **Run-on rows (`switchrunon.rs`, always on).** A table whose model
   found no guard at all (`selectguards` empty) has as many rows as its
   selector's bits allow: 256 for a byte. That is how a compiler that knows
   the selector is in range lowers a switch, Rust matching on a `u8` enum
   parameter or C with an unreachable default, so the real table is the first
   few rows, and the rest are the next functions' tables, which the linker
   put right after it, read as offsets from this table's base. Flow would
   decode each of those destinations, then the tables of the functions it
   reached, and so on: serde-hkx's 1,312-byte 0x14000a040 matches on a
   4-variant enum and decoded 4,791 blocks of 64 other functions, 4.2 GB and
   no C in 300 s. The model's sanity check
   (`jumptable.rs (JumpBasicModel::own_rows)` over
   `crates/unlace-lift/src/p2_lift/switchrunon.rs (own_rows)`)
   reads each row's owner from the global symbol snapshot (the last known
   function entry at or before it, `context.rs
   (GlobalQuery::function_entry_at_or_before)`, together with the entries
   `lazyfuncs` left as names, so that option does not change the cut) and
   keeps only the leading rows the function owns when every later row is
   owned by another function or by none, those rows reach at least two
   different owners, and the first of them lands past the function's entry
   and inside the load-image section that holds the entry (`context.rs
   (ArchContext::in_section_of)`). The run-on rows are the next functions'
   tables, which lie after this one, so they run forward into neighbouring
   code. A case the compiler split off does not: gcc places a function's
   `.cold` block below every hot body, and BOLT moves cold and warm blocks
   to their own `.text.cold` and `.text.warm` sections, so a table whose
   first row out lands below the entry or in another section is a real
   case, not a run-on. That table is kept whole, and so is one that returns
   into its own function after leaving it, one whose outside rows all land
   in one place (a function start discovery put inside a body), a guarded
   table, and one whose first row is already outside. The rows cut are not dispatched
   (`jumptable.rs (JumpTable::cut_rows_dispatched)`), so the late label pass
   does not read them back. The function then decodes its own body only:
   0x14000a040 prints its four cases in 0.7 s.

   **The function's next table (`switchextent.rs`, `switchextent`,
   default on).** A table whose selector the compiler knows to be in range
   has no guard and a selector wider than a byte: Swift's `switch` over a
   multi-payload enum indexes a halfword offset table straight with the case
   `swift_getEnumCaseMultiPayload` returned, and clang does the same for a C
   `switch` whose `default` is `__builtin_unreachable()`. The range then
   exceeds `jumptablemax` before any row is read, the basic model declines,
   and the dispatch prints as a computed call that ends the function's flow:
   a 13 KB Swift copy helper decompiled to its first 500 lines. The entries
   of such a table are offsets and say nothing about where it ends; the
   table after it does. A function's jump tables are emitted together, back
   to back in one read-only section, so a table runs exactly to the lowest
   table of the same function above it. When a table's recovery fails
   outright (no model, or the basic model's normal failure) and the function
   has not been scanned yet, the flow decodes the function's extent once
   (`flow.rs (FlowInfo::recover_jump_tables)` over
   `crates/unlace-lift/src/p2_lift/switchextent.rs
   (function_tables)`: its entry to the next known function entry,
   `context.rs (ArchContext::function_entry_after)`, or a MiB), folds every
   register through the small lattice the dispatch shapes need (the newest
   16 values: past that the oldest is dropped, so a long run of constants
   early in a function does not hide its later tables) and names
   the table of each computed jump the fold proves reads one, sorted on the
   function (`Funcdata::unlace_extent_tables`, shared with the recovery
   partial). An instruction that branches inside its own p-code (AArch64
   `csel`/`csinc` lift to a conditional branch over one copy) joins two
   values, so the fold takes what it writes after the branch as unknown,
   not as its last copy: a dispatch that picks its index with a `csel`
   over constants and adds it to the table's address before the load
   otherwise reads as a load from one address, its table is never named,
   and the table before it runs on into it. With
   two or more tables named, the recovery runs once more: when the basic
   model finds the range unbounded and every other fallback
   declines, `jumptable.rs (JumpBasicModel::unlace_try_extent_bound_table)`
   takes the melded path's one LOAD, reads its address as a constant table
   plus an index scaled by the entry width (`switchextent.rs
   (table_read)`), and re-bounds the range to `[0, N)` on that index with
   `N` the entries that fit before the next table, at least two and at most
   `jumptablemax`, and only when the next table lies in the same load-image
   section (`context.rs (ArchContext::in_section_of)`), as the discovery
   Listing requires; the rows then pass the run-on cut above like any
   unguarded table's. A function whose extent names fewer than two tables,
   or a dispatch retried after an earlier recovery, is not re-run, so a
   recovery that fails for its own reasons costs one extent scan and no
   second pipeline. A function's last table has
   no such bound here (an unguarded one ends at the next function's table
   below): an object the function merely reads
   may sit anywhere in the section, and a bound taken from one could run the
   table on into another function's, whose entries are plausible code
   addresses measured from the wrong base. The discovery Listing applies the
   same rule when it reads an AArch64 compact table with no range check
   (chapter 1, `a64switch.rs`).

   A Swift enum's table needs no neighbour: its count is in the binary.
   `swift_getEnumCaseMultiPayload(value, metadata)` returns a case of the
   enum `metadata` describes, and the enum's context descriptor states its
   payload cases (the low 24 bits of the word at offset 20) and its empty
   cases (offset 24); their sum is exactly the table's length, also for a
   function's last table. The `swiftmetadata` pass records each local enum's
   case count by its metadata accessor
   (`unlace-analysis/src/analyzers/swift/descriptors.rs`,
   `AnalysisOutput::swift_enum_cases`), which the engine hands to the
   architecture (`ArchContext::swift_enum_cases`). The extent scan then also
   follows calls (`switchextent.rs (enum_calls)`): an accessor's result
   register holds that enum's metadata, kept across later calls while it
   sits in a register the default prototype preserves; a call to
   `swift_getEnumCaseMultiPayload` whose second argument holds it returns a
   case, which stays a case through copies, widening and scaling; and a
   table indexed by one is recorded with the count
   (`ExtentTables::cases`). The re-bound takes that count before the next
   table's distance, and a function with such a table is re-run even when it
   names only one. A metadata the function does not get from a local
   accessor (a generic parameter, a value loaded from memory) gives no
   count, and the table falls back to its next table.

   A table that a mask bounds only to its selector's width is the other
   half of the same shape. A Swift enum's string switch masks the case
   with `and x8, x0, #0xff` and reads 256 halfword rows, and when the table
   is its function's last the rows past its own cases are the next
   functions' tables measured from the wrong base: they land all over the
   next functions and back inside this one, so the run-on cut, which keeps
   every row until the first that leaves the function, keeps them all and
   the 45-case switch printed 1,200 lines of phantom cases. A byte selector
   with no range check is the same shape on x86-64 when the rows past the
   table stay inside the function: gnulib's regcomp (csplit `sub_13330`)
   reads its `unsigned char` token type straight into a 37-entry table and
   OCaml compiles an exhaustive match the same way, so the next table's
   offsets, measured from the wrong base, became cases that land mid-instruction.
   For every unguarded table (no guard, or guards that leave its
   selector's top open), `jumptable.rs (JumpBasicModel::unlace_next_table_rows)`
   reads its table and stride as above and ends it at the lowest jump table
   above it in the same section, of this function or of the next ones, when
   that leaves at least two rows and fewer than the rows kept so far; the
   run-on cut applies when no table ends it sooner. The next functions' tables come from the flow: the sanity check
   inside the recovery partial records the table it wants
   (`Funcdata::unlace_later_wanted`) and fails, and
   `flow.rs (FlowInfo::recover_jump_tables)` decodes the extents after this
   function (`switchextent.rs (later_tables)`: function by function, at
   most 32, until one dispatches through a table above the one asked
   about), stores their tables on the function (`Funcdata::unlace_later_tables`)
   and runs the recovery once more. When no known function follows, the
   list is empty and the recovery still runs once more, so the table ends
   at the function's own next table or keeps its rows as before. The
   request can also come from the retry the function's own tables bound
   (a row of the bounded table lies in the next known function); the flow
   then answers it in a second round. Either way the request never leaves
   a table unrecovered. A guarded table costs nothing; an unguarded one
   costs the extent decodes and one more recovery, once per function.

   **Guards that leave the top open (always on).**
   `jumptable.rs (JumpBasicModel::analyze_guards)` records the
   conditional branches on the path just before the dispatch as guards
   whether or not they test the selector, as upstream does; a guard only
   narrows the table when `switchguardrange.rs (intersect)` finds it
   value-matches the variable being sized. A Rust deserializer loop is the
   common case: `match self.next_key()? { ... }` calls `next_key`, compares
   the returned Result's tag (`cmp rcx,r13; jnz`) and then dispatches the
   byte key it holds through an unguarded table. The tag check is recorded,
   so a rule keyed on "no guard at all" leaves the 256-row table whole, and
   the rows past the real four reach the next functions' tables, whose own
   dispatches carry the same tag check: APoseFix.dll's 600-byte serde-hkx
   visitors decoded 6,200 to 23,000 instructions of 25 to 111 other
   functions, hit the 60 to 120 s budget at 0.5 to 2.5 GB (one reached
   11 GB), and never printed. Others first send one key back to the loop
   head (`cmp eax,1; je`). That guard does test the selector, but it only
   takes out a value: the range becomes 2..0xff and wraps to 0, 255 rows
   that run on just the same.

   A model-1 table also counts as unguarded
   (`jumptable.rs (JumpBasicModel::unguarded)`) when the variable it was
   sized from can still take the largest value its size and known-zero
   bits allow (`jumptable.rs (JumpBasicModel::width_range)`, the start of
   `calc_range`), so no recorded guard bounds it from above. The run-on
   conditions above then decide the cut, unchanged, with one addition for
   a range that wraps past its top: its rows for the values below the first
   one (case 0 above) come last in iteration order and would read as rows
   that return into the function. `jumptable.rs (JumpBasicModel::own_values)`
   reads such a table in value order instead, takes the leading values the
   function owns when the rest run on, and replaces the range with exactly
   those values (`JumpValuesRange` explicit values, which iterate in
   ascending order); `jumptable.rs (JumpTable::recover_addresses)` then
   builds and checks the table again from them, so the rows, their loads
   and the late label pass all follow the kept values. A table a guard
   bounds from above keeps its rows, and so does a model-2 table, whose
   default comes from a guard. The visitors then decode only their own
   bodies and print in about a second at 110 MB. Off, any recorded guard
   keeps the table whole.

**Model 2 — the default-path variant** (`jumptable.rs
(JumpBasicModel::recover_model2)`, C++ `JumpBasic2`). Some compilers merge the
out-of-range path back into the switch by loading a constant "default" target
into the same variable: the failed model-1 meld ends at a 2-input MULTIEQUAL,
one input a COPY of a constant. Model 2 re-runs the model-1 analysis restricted
to the non-constant path and iterates the range *plus* that one extra value
(`jumptable.rs (JumpValuesRangeDefault)`), so the default becomes an explicit
last entry; a dominance check (`check_normal_dominance`) decides whether the
normalization walk can proceed past the join.

**Model 3 — the constant destination set** (`constselectjump.rs
(JumpModelConstSelect)`, unlace, `option constselectjump`; `on` admits it for
every table, the default `reentry` only for the re-entry retry described
under re-entered indirect dispatches above). Both
models above are value-range models over one switch variable, and
`jumptable.rs (JumpBasic::isprune)` stops the backward walk at any marker op, so
a destination computed by a conditional move — `CMOVZ R11,R10; JMP R11` over two
`LEA`-loaded code addresses — leaves the MULTIEQUAL output as the normalized
variable with nothing to bound it. The destination set is not lost there, it is
simply never promoted into the CFG: every reaching definition is already a
literal address. When the model is admitted and both value-range models have
declined, `constselectjump.rs (unlace_collect_const_destinations)` walks the
MULTIEQUAL/COPY web behind the BRANCHIND input; if every reaching definition is
a constant, the set becomes a fixed address table whose case labels are the
target addresses themselves, and recovery proceeds as for any recovered table.
The walk admits only MULTIEQUAL and COPY and requires at least one MULTIEQUAL
and two distinct destinations, so it can never claim a shape either basic model
already handles. Every destination must also sit within `0xffff` of the branch —
the same intraprocedural-vs-thunk yardstick `sanity_check` uses above — so a
conditional *tail call* between two distant function entries keeps the upstream
`CALLIND` rendering rather than splicing both callee bodies into the caller.
When the model is not admitted the branch is truncated to a `CALLIND` carrying
`"Treating indirect jump as call"` and neither arm is ever decoded.

**Model 4 — the table matched from its instructions** (`rawswitch.rs
(JumpModelRaw)`, unlace, `option rawswitch`, default on; x86-64 only). When
`jumptable.rs (JumpTable::recover_addresses)` fails with every model above, the
bytes before the BRANCHIND (up to 40, fewer where the image starts closer to
the jump) are matched backward against gcc's and clang's PIC dispatch: `cmp $N,%idx; ja default`, `lea table(%rip),%base` (before or after
the pair), `movslq (%base,%idx,4),%dst`, `add %base,%dst`, `jmp *%dst` (with
`notrack` or a REX prefix). The table's `N + 1` rows are offsets from its start;
each target must lie within `0xffff` of the jump and there must be two distinct
targets, else nothing is installed. The window reads at most 40 bytes back and
stops at the first unmapped byte, so a dispatch near the start of the image still
matches. This is IDA's idiom matcher, and it is what the data flow cannot give
when the index is a constant on the only path into the dispatch: zlib's
`inflateBack` sets `state->mode` just before `switch (state->mode)` and gcc
threads each case to the next, so the value-range models see one value and the
other cases were never decoded (`tests/stages/rawswitch.toml`). It is on by default: over sed, tar, gzip,
patchelf and libz (2263 functions) the matcher changes only `inflateBack`.

The labels are given on the whole function, once every case is decoded. When a
value-range model now recovers the table and its own rows are the matched rows in
order, it labels them as its own original (`JumpTable::recover_labels`), so the
cases that loop back to the dispatch with a new index give the switch its real
values (`tests/stages/rawswitch-loop.toml`: labels 5..8 over a `mode - 5`
index); when its rows differ, the trivial model labels by address. When no model
recovers it, the table keeps `JumpModelRaw` (`JumpTable::recover_model` matches
the instructions again and requires the same rows): the switch variable is the
varnode the row is read with (the `* 4` index of the LOAD the destination adds,
less a zero extension and a constant added to it), the BRANCHIND reads it
directly, and row `i` is labelled `i` minus that constant. An index that is
still a constant there leaves the jump's input alone and labels by address.

**Model 0 — the jump-assist user-op** (`jumpassist.rs
(JumpModelAssisted)`, C++ `JumpAssisted`, `option jumpassist`, default on).
Some instruction sets compute a switch destination the SLEIGH semantics cannot
spell: Dalvik's `sparse-switch` searches a key/target table, and its constructor
ends in `goto [switchAssist(key, size, default, base, distance)]`. The processor
spec's `<jumpassist>` element supplies p-code scripts for the missing step, which
`architecture.rs (Architecture::init_userops_and_fixups)` decodes with the other
user-ops and compiles with the rest of the injection library; `jumpassist.rs
(JumpAssists::from_library)` keeps the compiled scripts per CALLOTHER index. When
the BRANCHIND input is written by a CALLOTHER, `recover_model` tries this model
before JumpBasic. It matches when the user-op has scripts and every argument but
the first (the switch variable) is a constant. The table size is the size
script's answer, or the second argument when there is none. Each entry's
address comes from running the address script on its index, the case label from
the case script (the index itself without one), and the default destination is
the default script's answer, appended last. A script runs as upstream's
`ExecutablePcode::evaluate` does (`jumpassist.rs (Script::evaluate)`): its
inputs sit in temporary registers, its p-code is emitted and interpreted, and a
LOAD reads the load image. Normalization replaces every read of the user-op's
output with the switch variable and deletes the user-op; guard folding marks
the last block as the default. With the option off, or when a script cannot be
evaluated, the destination stays an indirect jump through the user-op and the
flow treats it as a call.

**What is deliberately absent.** The manual `JumpBasicOverride` model is an
unported shell: `jumptable.rs (JumpTable::set_override)` and the
`<basicoverride>` arm of `jumptable.rs (JumpTable::decode)` return errors, and
`recover_model` walks only the jump-assist model, JumpBasic/JumpBasic2 and, when `option constselectjump` is `on` or the table is a re-entry retry, the constant-destination model above (Trivial exists only as the label-time fallback).

**Multistage recovery.** A flow-time table can come out with a single address
when the partial clone folds its index to a constant. One case is a stack slot
stored before a call, whose address is passed to that call and read back as the
switch index. The partial does not yet know the call's inputs, so it collapses
the INDIRECT the call casts over the slot and reads the stored value. As
upstream does at `matchModel` time, a table of one address whose late model has
more entries records a multistage hint for its jump and restarts the function
(`jumptable.rs (JumpTable::match_model)`). On the next flow,
`flow.rs (FlowInfo::check_multistage_jumptables)` queues the hinted table again
and recovers it through `jumptable.rs (JumpTable::recover_multistage)`. (unlace) The
second stage runs on the same kind of partial, so it can fold the index again.
The hint therefore also carries the targets the late model built
(`overrides.rs (Override::multistage_targets)`). A second stage that again finds
one address adopts them (`jumptable.rs (JumpTable::unlace_adopt_multistage_targets)`),
so flow follows every case and the late check below labels them. Each jump is
restarted at most once. A jump is not restarted unless every value in the
late model's range passes the guards on its path
(`jumptable.rs (JumpBasicModel::values_pass_guards)`) and every target is
mapped and within the `0xffff` reach of the jump. A range wider than its guards,
as `switchguardbound` can recover under a lower-bound guard, would otherwise
turn rows the code never dispatches into cases. The restarting pass still
labels its table, without the model-drop warning, because it is the pass
printed when the drive's restart budget runs out. On that last pass
`decompile_drive.rs (run_pipeline)` keeps the analysis instead of re-following
flow, and adds `Exceeded maximum restarts with more pending` to the header.
This is a correctness repair, without an option: before it, such a switch kept
one case, and its other indexes fell through to the code after the switch.

**Guard merging** (`switchguardmerge`, default on; unlace;
`crates/unlace-lift/src/p2_lift/switchguardmerge.rs (ActionSwitchGuardMerge)`,
run after `ActionSwitchNorm`): gcc and clang lower a switch with a far outlier
(`case 100:` beside `case 0 ... 6:`) to a range guard around the jump table and
`x == 100` tests on the guard's other side, or (clang) to a chain of such tests
that the guard folding makes the switch's default. Such a chain is a run of
single-entry blocks that only compute, each testing the switch variable (the
BRANCHIND's input) against one constant that is not already a case. When the
chain hangs off a guard, the walk up from the switch passes only blocks that
compute and guards whose other side is the default, the guard and every block
on the way are evaluated (`strlenscan.rs (eval)`) on each constant (it must
reach the chain, then pass straight to the switch) and on every case label (it
must stay on the switch side), and the default's MULTIEQUALs must read the same
value from the chain and the switch. Each constant then becomes a case
(`add_block_to_switch` and `push_branch`, as guard folding adds a default) and
the guard's edge to the chain is removed. A chain that is the default ends at
its last miss: a new block becomes the default's body; a block that is already
a case becomes the default itself (`JumpTable::unlace_merge_out_edge`), so no
empty block is left beside it. gcc -O2 `two` (cases 0..6, 100, 200) prints one
switch instead of `if (a0 <= 6) { switch ... } if (a0 == 100) ...`; on Lua 5.4
x86-64 five switches gain their outliers (`subexpr` `case 0x7e`, `statement`
`case 0x3b`, `getgeneric` `case 0x54`), Lua AArch64 and ld.so none.

### The late check: labels, normalization folding, guard folding

A table recovered mid-simplification may disagree with fully-simplified
dataflow, so the model is re-derived late, against the finished function, by
`crates/unlace-emit/src/p9_emit/coreaction_render.rs
(ActionSwitchNorm)`: for each unlabelled table, `match_model` saves the
flow-time model and recovers a fresh instance (preferring a variable whose
range size matches the known table size). The fresh model must account for the
table's rows before its labels are used (`jumptable.rs
(JumpTable::choose_label_values)`). Each row keeps the normalized value the
flow-time model gave it; when every such value emulates through the fresh
model's path to that row's recorded destination, and no other value in the
fresh model's range reaches, through a table entry the flow-time model read, a
row's destination that the switch prints as a labelled case (`jumptable.rs
(JumpBasicModel::reproduces_rows)`), the labels come from the flow-time values
as they always have. The second half matters when the table repeats a
destination, as shared case bodies and holes sent to the default do: a mapped
byte can then agree with every index row through the repeat (the index 0 row
reads map byte 4, and table rows 0 and 4 hold the same target), while the map
byte 4 that the code actually dispatches on carries no label. A fresh-range
value outside the row values that reaches a row's destination is such an
unlabelled selector value unless the memory its emulation reads shows the code
never dispatches it (`jumptable.rs (LabelRows::may_be_dispatched)`). An
unlabelled value is printed under `default:`, so one whose destination is the
switch's default block, the block that most rows share when `switch_over`
runs, agrees with the labels (`jumptable.rs (JumpTable::default_addresses)`):
a plain `switch (map[mode])` whose last mode was cut from the rows still
dispatches it to the default. Labels that rely on this keep that default for
the rest of the run (`jumptable.rs (JumpTable::choose_label_values)`), and a
guard whose out-of-range target is any other block is left in place rather
than folded into the switch (`jumptable.rs
(JumpBasicModel::fold_in_one_guard)`), because the fold would make its target
the default and send the unlabelled value there. Flow-time recovery records the entries it
read for the rows the code dispatches, the entries it read for every row it
emulated, and the most loads it performed for one row (`jumptable.rs
(JumpTable::recover_addresses)`). The dispatched rows are the ones the sanity
check kept when the flow-time range spans its variable's full width. When a
guard or a mask bounds that range below the full width (`jumptable.rs
(JumpTable::flow_bounded_values)`), every value in it passes the guard that
bounds it, so a row past a cut can still be one the code dispatches, as when an
earlier row's mapped value fails a second guard further down the path. Such a
cut row counts unless a guard on its own path sends it away
(`jumptable.rs (JumpTable::cut_rows_dispatched)`): its path is emulated again
and each guard recorded while finding the switch variable, whose varnode that
path computes, must hold the computed value in its range
(`jumptable.rs (JumpBasicModel::value_passes_guards)`). Those guards lie on the
single-entry chain into the switch block, so a value outside one never reaches
the table. A cut row whose mapped value fails that second guard reads an entry
past the table, often another switch's table, and is not counted, so a fresh
value that reads the same entry does not reject the labels. The value's
last load, the entry its destination comes from, must be one a dispatched row
read: a value reading past the table end the sanity check found in a
full-width range is not dispatched. When its emulation
performs no more loads than a row, the value starts at or after the flow-time
variable on the path, and each earlier load must read an entry some flow-time
row read, kept or cut: an index past its flow-time range reads map entries no
row read, while an index inside that range whose row was cut, because an
earlier row fell outside a guard further down the path, reads the same map
entries as its row and is still dispatched. A value whose emulation performs
more loads starts in front of the flow-time variable, where nothing was
recorded, and is judged by its last load alone. When nothing was recorded, or
the value loads nothing, every reached row counts. Only destinations are
compared, never the two ranges: a byte index whose guard lies beyond the late
guard search spans the whole byte late, while its flow-time range ended at
that guard or was cut back to the table by the sanity check. Its values past
the guard read entries no row read, even where such an entry leads to a row's
target: an index past the end of the target table reads an unread table entry,
and an index past the end of a short map reads an unread map entry whose
garbage value may select a table entry a row did read. And a late guard can
exclude a row the table still lists. Otherwise, when the fresh
model's own values rebuild the whole table row for row (`jumptable.rs
(JumpBasicModel::rebuilds_rows)`), the labels come from those values; this
covers a fresh normalized variable that is offset from the flow-time one. When
neither holds, the normalized variable first moves away from the branch, to
the first common Varnode behind it whose range is bounded and that labels the
rows (`jumptable.rs (JumpBasicModel::label_by_deeper_variable)`): a guard on a
reloaded map entry can make that entry the smallest range late, while the
flow-time rows were labelled by the selector in front of the map, whose own
guard the late search no longer finds behind the retry loop. When no such
variable exists — typically because the fresh
variable is a mapped selector, an index already looked up in a byte map in
front of the target table — the basic model first tries the guard-bound
recovery paths (`switchmodbound`, `switchguardbound`, `switchsharedcase`,
`switchmultipred`) exactly as an over-sized table does, so that a guarded index
in front of the map can still be found. If none applies, no other model is
tried: JumpBasic2 and the constant-destination model are reached only when the
basic model could not bound the table at all, as on the flow-time path. A
JumpBasic2 model can take the constant input of a loop-carried selector as its
default value, and the printed loop then loses that assignment on its back
edge. The model is dropped with a header warning (`jumptable.rs
(JumpTable::drop_model_for_rows)`) and the trivial model described below
labels the cases by address. Each case is labelled with the flow-time table
values that reach it, the values the printed selector computes, not with its
block's start (`jumptable.rs (JumpTable::label_by_case_values)`): a case body
that takes in lower-addressed code, such as a copy of the shared epilogue it
branches back to, starts at an address no table entry holds, and a case under
that label would never match. A recorded value labels an out-edge only when
that out-edge's block still holds the code the value starts: the block covers
the value itself, or the first op at or after it. A block's cover begins at its
first op, so a case whose first instruction produces no p-code, such as a
`nop`, starts one instruction before its block's cover and is matched through
that op. An out-edge with no such value keeps its block start. A model found through a guard-bound path, or a
JumpBasic2 model after an over-sized basic one, faces the same two tests once
recovery ends and is dropped the same way when it fails both. Flow-time recovery
(including the second stage of a multistage table) checks no rows. Then
`jumptable.rs (JumpTable::recover_labels)` computes the *case labels* by
reverse-emulating the normalization chain from the normalized variable back to
the unnormalized one (`jumptable.rs (JumpBasicModel::backup2_switch)`, exact
inversion of at most 1 add/sub and 1 extension per the table's caps); a
non-reversible value labels `NO_LABEL` (rendered as the default). If no model
can be recovered at all but addresses exist from flow, a trivial model labels
the targets by index (`jumptable.rs (JumpModelTrivial)` — each target labeled
with its own address, its block's start; table size = the block's out-edge
count). `fold_in_normalization` then re-points the BRANCHIND
input at the unnormalized variable — the whole address computation becomes dead
code and the header renders `switch(V)` — and records how many bits of `V` the
switch actually consumes. Finally `jumptable.rs
(JumpBasicModel::fold_in_one_guard)` folds each surviving guard CBRANCH into
the switch: its out-of-range edge becomes the switch's *default* edge (adding
the target as a new label-less destination, or marking an existing destination
as default and collapsing the CBRANCH to a constant predicate). Once a fold
has set the default, a later fold must target the same block, as must every
fold on a table whose labels rely on its current default; a fold clears
the structuring so the new edge is re-structured, and the constant-predicate
residue is severed on the re-run by `ActionDeterminedBranch`.

The default-path model (JumpBasic2) handles surviving guards differently
(`jumptable.rs (JumpBasicModel::fold_in_guards)`). Its final table row is the
constant destination selected on the alternate path, and its `NO_LABEL` means
that destination is the default, not an unresolved user command. The fold
marks that row's existing out-edge as default and clears the guard record
without rewriting the CBRANCH. Normalization and ordinary dead-code removal
can eliminate empty selection blocks, while guarded statements and loop
conditions remain. Sending this shape through the basic guard fold instead
can add another default edge back into the selector block, leaving the real
default row labelled with the sentinel and invalid commands looping or
returning no value. A default that shares an ordinary case body uses that
same out-edge; the most-targeted-edge heuristic is not required to recognize
a distinct default destination.

Flow-time `jumptable.rs (JumpTable::switch_over)` initially chooses the
most-targeted out-edge as default only when at least two rows share it.
Before structuring, `crates/unlace-structure/src/p8_structure/blockaction.rs
(ActionBlockStructure)` calls `funcdata_block.rs (Funcdata::install_switch_defaults)`
to mark the selected default edge in the basic-block graph, from which each
structured `CaseOrder` receives its default classification.

**Table lifetime.** A `JumpTable` is only as alive as the BRANCHIND it points
at, so removing that op has to remove the table. `funcdata_block.rs
(Funcdata::block_remove_internal)` looks up the table of a removed block's
trailing BRANCHIND (`funcdata.rs (Funcdata::find_jump_table_index)`, matched by
op address) and drops it (`funcdata_block.rs (Funcdata::remove_jump_table)`)
before destroying the block's ops; a table that outlived its op would be
re-recovered later against nulled inputs. `ActionSwitchNorm` carries the same
guard `install_switch_defaults` already had and skips any table whose indirect
op is missing, dead, or parentless, and the model walk
`jumptable.rs (JumpBasic::find_determining_varnodes)` reports a stale op as an
error rather than dereferencing it, so a table that slips through abandons its
own recovery instead of the whole function.

### (angr) Lowered-cascade recovery — `option loweredswitch`, default on (DIV-4)

GCC lowers a dense switch over a small variable into a balanced binary-search
tree of compares — no BRANCHIND, so no switch, and Ghidra (like stock angr)
renders a deep if/else chain.
`crates/unlace-lift/src/p2_lift/loweredswitch.rs` (port of
SAILR's `LoweredSwitchSimplifier`) detects the cascade and *manufactures* the
artifact. The two halves straddle a restart because the CFG surgery must not
strand phi state:

- **Detect** (`loweredswitch.rs (ActionLowerSwitchDetect)`) runs late —
  scheduled directly after `ActionSwitchNorm` — on the fully simplified CFG,
  and only reads: it collects the pure-compare blocks, canonicalizes each
  compared variable, groups by variable and takes the most-compared one (tied
  variables are tried in the order they were created and the first whose
  cascade recovers is taken; a Varnode's id is only the arena slot it reused,
  so it cannot break the tie), finds
  the cascade head (skipping a leading getopt-style `V == -1` sentinel guard),
  and walks the compare tree carrying angr's binary-search interval
  (`loweredswitch.rs (recover_cascade)`) to collect case→target pairs and
  default votes. Acceptance is deliberately narrow: at least 3 cases and 2
  distinct targets, at most 16 cases, at least one *range* node (a purely
  linear equality chain is a hand-written if/else-if — without this guard the
  flip regressed 10 upstream assertions, DIV-4), exactly one independent
  default *sink* (candidates that flow into another candidate are paths into a
  shared default, counted by a bounded CFG walk — a hand-written cascade whose
  arms land on independent bodies keeps every arm a sink and is declined), and
  the variable must live in register/stack storage. A hit is recorded in a
  **restart-surviving side store** (keyed by function identity, addresses only
  — no IR handles; the store lives on the Action, outliving the `clear()`) and
  a restart is requested.
- **Install** (`loweredswitch.rs (ActionLowerSwitchInstall)`) runs on the
  restart, scheduled before `ActionHeritage` and gated to heritage pass 0 —
  the pre-SSA window, where edge surgery needs no phi patching.
  `funcdata_block.rs (Funcdata::unlace_install_lowered_switch)` replaces the
  cascade head's CBRANCH with a synthetic `BRANCHIND(V)`, rewires its
  out-edges to the case targets plus default, pushes a hand-built, pre-labelled
  `JumpTable` (signed labels recorded from the cascade's controlling comparisons)
  carrying a `JumpModelTrivial`, and sweeps the orphaned compare spine via
  unreachable-block removal. Heritage then rebuilds SSA over the corrected CFG
  and the ordinary structurer/printer emit the switch.

  Label interpretation is recovered with the structure rather than inferred
  later from case bits. `INT_SLESS`/`INT_SLESSEQUAL` range nodes prove signed
  labels; `INT_LESS`/`INT_LESSEQUAL` prove unsigned labels. Detection reconciles
  every controlling range node and records the one consistent result in the
  restart-surviving side record. Mixed signed/unsigned evidence, or a range
  without a supported interpretation, declines recovery instead of guessing.
  Equality constants never participate: `0xffffffff` can be either unsigned or
  signed -1, and the case bit pattern alone cannot decide. The
  `loweredswitchlabels.rs` policy carries this proof to the installed jump
  table.
  The generic P9 numeric printer is unchanged.

  The synthetic BRANCHIND is inserted through `Funcdata::op_insert`, not the
  bare block splice, because a p-code op is born on the dead list and only
  `op_insert` marks it alive. An op left on the dead list is skipped by every
  alive-list pass, and the one that matters here is the dead-code consume
  propagation: it is what records that the BRANCHIND reads its selector. Without
  that record the selector's consume mask stays empty, `ActionVarnodeProps`
  concludes that no bit of it can be observed and replaces it with the constant
  0, and the emitted `switch(0)` takes `default` unconditionally while the
  parameter it dispatched on drops out of the recovered prototype. Where
  heritage had also widened the read, the same collapse swept the input outright
  and printed the un-compilable `switch()`. The case set and the binary-search
  tree shape survive the collapse either way, so only an assertion on the
  scrutinee can see it.

  Install declines whenever the rewiring would take a genuine switch with it.
  Severing the head's out-edges makes everything reachable only through the
  compare spine unreachable, and the trailing sweep deletes it; when one of
  those blocks ends in a BRANCHIND that *already* owns a recovered `JumpTable`,
  the cascade was a guard chain standing in front of a real jump table, not a
  lowered switch of its own. `funcdata_block.rs
  (Funcdata::unlace_lowered_switch_strands_table)` walks reachability from the
  entry over the post-surgery successor relation before any edit and refuses the
  install in that case, so the real table's cases survive instead of being
  replaced by the (much narrower) cascade dispatch. The pre-existing guard —
  a table already registered at the head's own branch address — never fires
  here, because the cascade head and the real BRANCHIND are different
  instructions. Both coreutils shapes are covered: `comm`/`join`/`uniq` `main`
  (a getopt dispatch split between a compare cascade over the short options and
  a PIC relative-offset table over the dense long-option range) declines, while
  `mv`'s `main` — a cascade with no downstream table — still installs.

One repair hook closes the loop: heritage may widen the synthetic BRANCHIND's
storage read and null its input, so `funcdata_block.rs
(Funcdata::unlace_repair_lowered_switch_inputs)` (driven from
`crates/unlace-bandb/src/p3_dataflow/coreaction_early.rs`) re-points
it at the live reaching SSA def of the recorded storage — accepting a
heritage-known input (written, function input, *or constant*) as healthy. The
constant case is load-bearing: `ActionConditionalConst` may legitimately prove
the switch variable constant on a guarded edge, and classifying that constant
as broken made repair and cond-const toggle the same input forever — the fixed
infinite-loop hang on stripped openssh/bash binaries (`tests/hang-repro/`).

### Restricting the re-roll to a locally computed selector — `option switchselector`, default off

The re-rolled `switch` and the cascade it replaces read the same value, so which
is the better rendering is a judgement call. When the switch value is a
*parameter* — a register argument, the slot the prologue spilled it into, or a
stack argument — the compiler's chain names that parameter at every arm and keeps
the compiler's own ordering, where the re-rolled `switch` presents the dispatch
as if the function had derived the selector itself. That is the Win32 callback
shape: a `DialogProc` dispatching on its `uMsg` parameter.

`loweredswitch.rs (selector_defined_in_function)` is the knob. Turned on, a
cascade is recorded only when its switch variable has a defining op in this
function — a call return, a load, a computed value. Detection runs on the fully
simplified, SSA'd CFG, where that test is exactly `Varnode::is_written`. A
declined cascade renders exactly as `option loweredswitch off` renders it, and
every cascade over a value the function computes still re-rolls, so this is the
per-cascade form of the whole-pass escape hatch. Measured byte-identical on the
675-assertion datatest corpus with the guard forced on.

### The value the switch dispatches on (DIV-181, part of `loweredswitch`)

Detection sees the simplified SSA graph, where every compare in the cascade reads
one value, and records that value's home storage; the install re-lifts raw p-code
on the restart and points the synthetic `BRANCHIND` at storage at the head. The
home storage need not hold the value there. A `gcc -O2` dispatcher compiles its
first parameter once (`mov eax,edi`) and reuses `EDI` as a tail call's argument
(`mov rdi,rsi`) before the compares run; an MSVC `/O2` caller copies `argc` from
`ECX` into `EBX` and loads a byte into `ECX`; a function guards a CMOV whose
result a later pass proves constant. In each case a switch reading the home
storage dispatches on something the cascade never compared, and the parameter it
did compare can drop out of the prototype.

With the option on, the install reads what the head's own compare instruction
reads.
`crates/unlace-lift/src/p2_lift/loweredswitchvalue.rs (head_compare_operand)`
walks the branch condition back through the raw p-code of the head block, and of
its single predecessor. Raw reads are not linked to their writes before heritage,
so each read is matched to the last op writing the same location on that path.
Flags, temporaries and one-byte locations are followed to their integer or
boolean writer; a read of a location of the value's size in the home storage's
space that nothing writes before the branch is the operand, as is the output of a
load of that size. A wider location whose low bytes were last written by a zero or
sign extension is followed into what was extended, so gcc -O0's
`movzwl -4(%rbp),%eax ; cmp $0xea60,%eax` over an `unsigned short` reads the
two-byte load. Every path must reach the same operand, or the install reads the
home storage.

Whichever storage it reads, a named switch is then checked. Detection records a
restart-stable *name* for the compared value
(`loweredswitchvalue.rs (observe)`): the function input at a storage, the
effect of a call or store at an address, or the output of an op of one opcode at
an address — required to be the only such definition overlapping its low bytes,
so a value written twice by one instruction is not named. A value SSA
construction defines (a `MULTIEQUAL`) is not named either: a phi is placed by
heritage, not by an instruction, so a spilled argument's phi on the detected
graph is a raw argument read on the restart. On the restarted run
`loweredswitchvalue.rs (verify_installed_switch_values)` names the
`BRANCHIND` input the same way, through the copies, casts, extensions,
zero-offset truncations and identity arithmetic (`x + 0`, a Thumb
`adds r5,r2,#0`) that keep every byte, and classifies it
(`loweredswitchvalue.rs (classify_input)`). The recorded name (or a wider
value whose low bytes are that name) verifies the switch for the read it was made
over; an install that later reads something else is checked again. A provably
different value — another uniquely-defined value, or a constant — is a wrong
dispatch: a switch that read the head compare's operand is installed once more
over the home storage (simplification can fold an addend into the case
constants, so the operand the instruction reads is not the value the labels are
relative to), and one that still differs is withdrawn and renders as
`option loweredswitch off` renders it. A phi input is classified through its
inputs: it is the recorded value only when every input is (a loop's own back edge
adds nothing), and one provably different input is a wrong dispatch on that path.
That is the gcc -O0 shape `if (a & 1) hv(a); else hv(a + 1); switch (x)`, where
the home register reaches the switch as a phi of what the two calls left in it. Detection can look at the same install
again before the restart it requested; a fallback already pending there is not a
second failure. An input that is merely unnameable is
never taken as evidence against the switch. A record without a name reads the
home storage exactly as `loweredswitch` alone does and is never withdrawn, so the
check can only replace a switch over a provably wrong value, never lose one it
cannot judge. A withdrawal or retry takes effect on the restart it requests, so a
function that has already spent the pipeline's cross-flow restart budget
(`run_pipeline`, eight re-flows) keeps the switch it last installed. Measured
byte-identical on the 675-assertion datatest corpus when the check was introduced.

### The switch is the compare tree (DIV-183, part of `loweredswitch`)

Three things made a re-rolled switch a different program from the cascade it
replaced. The install gave each case body one table entry and kept the first
value that reached it, so of two values sharing a body the second lost its label
and took the default. `recover_cascade` drops a range edge the binary search pins
to one value (it is neither a case nor a default candidate) and breaks a tie
between default candidates by address, so a value can reach a body in the tree
and the default in the switch, or the default can be a case body. And the install
removes every block that the new head edges make unreachable, with whatever those
blocks compute for the code after the cascade (a `v = 0x8a;` on one arm before a
shared join).

`funcdata_block.rs (Funcdata::unlace_install_lowered_switch)`
pushes one table entry per case value, so shared bodies keep every label, and
detection keeps a recovered record only when
`crates/unlace-lift/src/p2_lift/loweredswitchexact.rs (record_is_exact)`
holds. `loweredswitchexact.rs (switch_routes_like_cascade)` replays the
compare tree against the switch the install builds. Every node compares the
switch variable, widened only by zero or sign extension (or a same-width copy),
with a constant under an equality or a signed or unsigned threshold, so each
node's outcome only changes at its constant's neighbourhood or at the variable's
signed and unsigned wrap points; the replay evaluates the tree at each of those
values (every constant and its neighbours, 0, the all-ones value and both sides
of the sign boundary, all at the variable's width) and requires the block reached
to be the block the switch dispatches that value to. A narrowed operand, a label
wider than the variable, a duplicate label or a spine that loops declines the
record. `loweredswitchexact.rs (install_keeps_statements)` computes the
blocks reachable now but not after the head's edges are replaced by edges to the
case bodies and default, and requires every op in them to be a branch or to write
a value read only inside them; a store, call, return, indirect branch or a value
read elsewhere (a phi input at the join included) keeps the compare tree.

Detection judges statements on the simplified graph, where a register a compare
block loads for a case body has been propagated into its reader: gcc -Os puts
`mov esi,7` inside the compare tree for `T: mov edi,esi ; jmp hv`, and on the
simplified graph that is `hv(7)` with nothing left in the compare block. The
install edits raw p-code and would delete the load. So the install itself also
requires `loweredswitchexact.rs (raw_install_keeps_values)`: every storage
location a deleted raw block writes (temporaries aside) must, on every path from a
case body or the default, be written again (by an op, or by a call when the
prototype model marks it killed by calls) before any op reads it, before a call or
tail call that may take it as a parameter, and before a return that may return
it. A declined record renders exactly as `option loweredswitch off` renders it, so
the gate can only replace an inexact switch with the compiler's own tree.

Labels carry a signedness the install records from the compare tree before any
type is inferred, and over a one- or two-byte selector a label with the sign bit
set names different values signed and unsigned once C promotes the selector
(`case 0x81:` never matches a `char`). The printer
(`crates/unlace-emit/src/p9_emit/printc.rs (lowered_switch_label_form)`)
prints such labels with the signedness of the selector's declared type when it is
an integer of the switch size, and otherwise casts the selector to the recorded
signedness (`switch((unsigned char)a0)`). Measured
byte-identical on the 675-assertion datatest corpus when the check was introduced.

### Every cascade head (DIV-184, part of `loweredswitch`)

A head is any compare on the switch variable that no other compare on it
continues into, and a variable is compared outside its switch as often as inside
it. MSVC `/O2` inlines `and_chain(argc, argc*7)` and `cascade_switch(argc)` into
`main`: the inlined `TEST EBX,EBX; JLE` comes first in block order, recovery from
that single test finds no case, and the fifteen-case tree behind it rendered as a
goto ladder into the shared join, because detection only ever tried the first
head.

`crates/unlace-lift/src/p2_lift/loweredswitchheads.rs (cascade_heads)`
lists every head in block order and detection tries each (past its leading
all-ones sentinel guards), recording the first cascade that recovers. Every
cascade is recorded only when `loweredswitchexact.rs (record_is_exact)`
holds for it (the exactness check above); a cascade behind a later head is
additionally recorded only when its head block has a single predecessor,
and when `loweredswitchheads.rs (case_body_entered_elsewhere)` finds no case
body or default entered from outside the compare tree (another case's body falling
into it, or code after the switch jumping to it). The structurer renders a switch
of either shape with a `goto` to a label it never declares, which is tolerated for
the first head, as before, but never introduced by a later one. A record's
dispatch value is then subject to the value check like any other. Measured
byte-identical on the 675-assertion datatest corpus when the check was introduced.

### (unlace) Bit-test lowerings — `option loweredswitchbits`, default on

clang lowers a switch over a narrow selector with clustered labels into a range
check on an offset copy of the selector and a test of a bit of a constant mask
(`t - A <= N && (1 << (t - A)) & mask` on arm64, `bt` on x86), often several masks
sharing one shift, plus equality tests for the outliers. `recover_cascade` reads
only compares of the selector itself against a constant, so these stay `if`
chains. When `ActionLowerSwitchDetect` records nothing for a function,
`crates/unlace-lift/src/p2_lift/loweredswitchbits.rs (recover)`
tries them.

A condition block is one whose CBRANCH condition is computed by integer, boolean,
extension and compare ops from constants and one selector of at most two bytes.
From a head (a condition block no condition block on the same selector branches
into) every selector value is evaluated through each block's condition with the
ops' p-code behaviors: each block splits the values that reach it between its two
edges, a condition block on the selector passes its share on, and any other block
is a target that receives it. The target with the most values is the default; a
target whose ops are the default's on the same inputs (constants by value,
in-block values pairwise) with no successors joins it, so the compiler's copies
of one `return` count once; every other value is a case of the target it reaches.
The cascade must hold a shift by a selector-derived amount, at most 64 cases on
at least two targets, and every block after the head must use only pure ops, be
read only by the cascade and be entered only from it. The record names the
register or stack varnode that holds the selector (or its narrowest zero or sign
extension) and reads that storage at the head (`ValueCheck::read_home`), and the
same restart install manufactures the switch. Because the evaluation covers
every value, the switch routes each value where the tests did. A selector whose
extension the simplified SSA keeps only in a temporary (x86 `movzwl` feeding the
compares directly) has no storage to read and is left. Measured on cmark O2ni
(clang -O2 -fno-inline, arm64): `free_node_as`, `cmark_node_own` and
`cmark_node_set_literal` print their source switches, GED 9580 to 9536.

### Linear chains and wider trees — `loweredswitch linear|tree|all`, opt-in

`loweredswitch.rs (recover_cascade)` records a cascade only after it has
seen a range node, because a chain of equality tests with no binary-search
split reads as a hand-written if/else-if, and it takes three to sixteen cases
(the cap keeps the structurer from being handed a switch so wide that some case
edges end up as unstructured gotos). Two values of the option widen that.

`linear` also accepts a chain with no range node. clang lowers a switch of
three or four cases exactly that way, and an if/else-if chain on one variable
is a switch in all but syntax. The chain still needs three to sixteen cases.
Each case body must be entered only from the chain and be dominated by the
chain head: a chain the compiler copied into two paths keeps its ifs, since
re-rolling one copy would split what the two share. With no range comparison to
prove the signedness of the labels, an extension on the path to the selector
decides it; with none, no case value may have the sign bit set, so every label
prints the same either way. It is not the default because the author's own
if/else-if chain re-rolls too.

`tree` moves the limits of a cascade that does have a range node to two and
sixty-four cases. gcc at -O0 lowers a sparse switch to a compare tree with no
jump table whatever its size, so a switch of seventeen or more cases otherwise
stays a deep if/else tree. A linear chain is not affected.

`all` is both. Every other check of the recovery still applies under each
value: one shared default sink, the value check, the exactness check and the
every-head rule. The re-roll is installed through the same restart, so a switch
installed for a function stays if the value is narrowed later in the session.

### Bound extensions: rescuing an unboundable table

Four gated extensions run, in this order, only when JumpBasic's range exceeds
the table cap; each installs a `[0, N)` bound on a chosen index Varnode and
hands back to the enumeration core — at most re-deriving the path meld and
seeding loop-invariant values (`switchsharedcase`); the enumeration core itself
is never changed, only what counts as a bound.

- **(unlace) `switchmodbound`, default off (from Ghidra issue GH-9191) —**
  `jumptable.rs (JumpBasicModel::unlace_try_modulo_bound_table)` (option shell:
  `crates/unlace-lift/src/p2_lift/switchmodbound.rs`). Accepts
  an *in-band* bound: the meld path from the BRANCHIND, through realigning ops
  and exactly one table LOAD, reaches an `INT_REM`/`INT_SREM` by a constant `N`
  or an `INT_AND` with a contiguous low mask (`bound = mask+1`); the index is
  re-bound to `[0, N)`, `N ∈ [2, max_jumptable_size]` (default 1024), starting emulation at the already-
  reduced modulo result. Opt-in: on a program whose indirect jump genuinely has
  no modulo bound it can over-bound an unrelated computed jump.
- **(angr) `switchguardbound`, default off —**
  `jumptable.rs (JumpBasicModel::unlace_try_guard_bound_table)` (option shell:
  `crates/unlace-lift/src/p2_lift/switchguardbound.rs`).
  Accepts an *out-of-band* CBRANCH range guard that guard analysis missed —
  the GCC `sub LOW; ja DEFAULT` dispatch where, on the early partial-function
  run, the guard is still unsimplified x86 flag arithmetic (the pull-back
  extracts no bound) and the index is spilled to the stack between test and
  load (so the guarded Varnode never value-matches). Rather than
  pattern-matching comparison constants, `scan_guard_tree` *evaluates* the
  guard's boolean as a function of a candidate meld index (sibling meld values
  resolved through a linear-offset map) for `v = 0, 1, …` and takes `N` = the
  first value whose routing flips from `v = 0`'s. Opt-in for the same
  over-bounding reason: the guard↔index correspondence is asserted across a
  memory round-trip dataflow cannot prove.
- **(angr) `switchsharedcase`, default on (DIV-14) —**
  `jumptable.rs (JumpBasicModel::unlace_try_loop_carried_guard_table)` (option
  shell: `crates/unlace-lift/src/p2_lift/switchsharedcase.rs`).
  Rescues the GCC PIC relative-offset table (`target = base +
  sext(load4(base + idx*4))`) whose `lea .rodata` base register is set *before*
  a getopt-style loop while the BRANCHIND sits inside it: the base reaches the
  jump through a loop-header phi, so the meld collapses to the final add and
  the index guard never bounds anything. The walk rebuilds a clean single path
  from the BRANCHIND down to a guard-bounded load index, identifies the base as
  the unique read-only-image constant reachable through the COPY/phi tree, and
  re-runs normalization with the base pre-seeded into the emulator
  (`emulatefunction.rs (EmulateFunction::seed_varnode_value)`). Slower on
  exactly the functions it rescues; declines restore the saved model.
- **(angr) `switchmultipred`, default on (DIV-14) —**
  `jumptable.rs (JumpBasicModel::unlace_try_multipred_guard_table)` (no
  dedicated module; the option row lives in
  `crates/unlace-decomp/phases.toml`). Rescues the dispatch whose
  bound guard is duplicated — "unrolled" — across *multiple* predecessors of
  the BRANCHIND block, the per-path indices meeting in a MULTIEQUAL (angr's
  "abnormal switch case", e.g. an MSVC memmove small-count tail). The same gate
  also arms the upstream-faithful `jumptable.rs
  (JumpBasicModel::check_unrolled_guard)` inside guard analysis (a no-op when
  off), whose lockstep walk only fires when the *same* guard is duplicated on
  every path; when the per-path guards are semantically different (entry
  `count <= 16` vs back-copy `count & 7 != 0`) the fallback evaluates each
  predecessor's guard as a function of its MULTIEQUAL input (same
  first-routing-flip evaluation as `switchguardbound`, trampoline blocks
  peeled up to 4 deep) and re-binds the table to the *union* — the max — of
  the per-path prefixes. The lockstep walk also records nothing when the
  copies of one check branch with opposite senses (one `ja default`, the other
  `jbe dispatch`, as in libselinux `getprocattrcon_raw`), and a byte index then
  kept its full 256-row range, which is not over-sized, so the fallback never
  ran. `jumptable.rs (JumpBasicModel::check_unrolled_guard_by_edge)` pulls
  each edge's check back under that edge's own toward-switch sense until it
  reaches the edge's input to one MULTIEQUAL of the dispatch block, and records
  the union of the per-edge ranges as an unrolled guard on the MULTIEQUAL
  output (#1028).

**(angr) `unrolledguard`, default off** — despite the name, not a guard
analysis: a partial-flow tolerance in `flow.rs (FlowInfo::collect_edges)` for
the MSVC optimized-memcpy shape where several *interleaved* tables' case bodies
are only reachable as one another's case targets. With `jtsharepartial` **off**,
unlace recovers tables one at a time, each in a fresh partial clone that re-clones
already-recovered siblings; the clone's edge collection then hits a sibling case
body that was never decoded into *this* partial's `visited` and throws
`"Could not find op at target address"`, demoting a recoverable dispatch. With
the gate on, an unresolvable recovered-table case-target edge inside a recovery
clone is skipped instead (the same "assume no branches out" shape as the no-table
path). Opt-in because on a truly malformed table it would mask a real missing
target instead of declining. Under the shipped `jtsharepartial on` default the
condition it tolerates does not arise at all — there is one partial, built before
any sibling recovered — and the memcpy witness recovers all sixteen dispatches
with this gate off, so the two settings are paired: turn `unrolledguard` on only
together with `jtsharepartial off`.

**`switchtrim`, default on** — the last bound extension, for a table that no
guard bounds at all: no guard was found and the index range is wider than
`0xffff`. A switch with an unreachable default
(`__builtin_unreachable()`, an enum the compiler trusts) dispatches through
`jmp [table + idx*8]` with no range check, so the index range is its whole
width and every extension above declines. `switchextent` runs first and ends
such a table at the function's next table; only a table it leaves unbounded
(a function's last one) reaches this step. There, a table whose path
holds exactly one `LOAD` has its range opened to `[0, jumptablemax)`
(`jumptable.rs (unlace_try_trimmed_table)`). Emulation stops at the first row it
cannot read instead of failing the table, and the sanity check keeps the rows
before the first one that breaks the table's layout
(`switchtrim.rs (trimmed_rows)`, IDA's `trim_jtable` stop rules): a row
that points into the table's own bytes, a row read at or above the lowest code
address an earlier row jumps to (an inline table cannot run into the code it
dispatches to), or, on an object load, a row that points outside the image's
executable memory, plus upstream's zero / far-and-unloaded rule. Every row
must read its own table entry, above the previous row's, so a range opened on
a value that is not the table index (the loaded entry itself, when the index
feeds an image-base add) reads no table at all. Fewer than two rows is no
table, and the jump stays a computed call. A bounded table
never reaches this arm. A trimmed basic model is only a fallback: the
default-path model (`JumpBasic2`) is tried first and wins when it bounds the
switch (`jumptable.rs (recover_model)`). An AArch64 hardened jump table
(arm64e, clang `-faarch64-jump-table-hardening`, Swift enum dispatch) clamps
its index with `cmp x16, #N-1; csel x16, x16, xzr, ls` instead of branching to
a default, so the switch variable is a `MULTIEQUAL` of the index and the
constant 0 and the basic model sees no guard. A trimmed arm that took that
unbounded `MULTIEQUAL` first would read past the table into the code after
it, fail its sanity check, and leave the switch a
`(*(code *)(*(int *)&table[i * 4] + base))()` computed call; model 2 recovers
it as `switch(a0 >> 0x3e)` with every case
(`tests/stages/relswitch-a64.toml`).

**`fdeflowbound`, default on** (`flow.rs (leaves_own_fde)`). An unwind-table
extent (an `.eh_frame` FDE or a Go `functab` entry: the extents the analysis tier
hands `fdeinterior`) states where its function ends. A PE `.pdata` record is
not used, because it can be one chunk of a chained function. A call to
an import that unlace cannot know never returns (`call mydie@plt` as a function's
last instruction, `call [GOT _Unwind_Resume]` closing a cleanup rung) is taken
to return. Flow then walks off the function's end into whatever bytes follow:
the next cleanup rung, padding, or code no known entry names, which
`funcboundflow` cannot bound. When the function's entry starts a
single-function extent, fall-through to an address at or past the extent's end
is truncated the way `funcboundflow` truncates at a foreign entry, with its own
warning. A declared extent (`--define-function S-E`) still wins. Under `functails`
(chapter 01) a `.cold` tail that starts exactly where the function's extent ends is
the function's own fall-through, so the extent runs to the end of that tail.

## 2.4 No-return at lift time

The mechanism is §2.1's halt plant: if `check_for_flow_modification` believes a
call never returns, an artificial noreturn RETURN lands right after the CALL
and flow stops. The *facts* come from
`decompile_drive.rs (ArchFlowEnv::query_call_no_return)` as an OR of three
sources, checked in order:

1. the resolved callee symbol's no-return flag — set by `option noreturn`, by a
   declared prototype, or by the analysis-tier passes (`noreturn_known`, and
   the call-graph fixpoint `noreturn_propagate`) described in chapter
   [01 — Program preparation](01-program-prep.md);
2. **(angr) the vendored-list name match (DIV-13, under `noreturn_known`)** —
   `crates/unlace-lift/src/p2_lift/noreturn_externmatch.rs
   (is_known_noreturn_name)`: the callee *display name* matched against the
   same vendored list the analysis tier uses
   (`crates/unlace-analysis/data/ElfFunctionsThatDoNotReturn`,
   build-time-included so the two matchers cannot drift), with the same
   all-leading-underscore strip, global/`std`-only namespace guard, and
   trailing-`*` wildcard-prefix support;
3. **(angr) the closed-list name match (DIV-14, under `noreturn_known`)** —
   `crates/unlace-lift/src/p2_lift/noreturnextern.rs
   (matches_noreturn_extern_name)`: an exact-match check against a closed,
   hard-coded ELF no-return name set with the same namespace guard.

Both name matchers exist for the case the address-keyed analysis pass
structurally cannot reach: in an ET_REL `.o`, `__stack_chk_fail` is an
undefined extern — no definition, no address, no PLT — so no address-keyed fact
is ever emitted, and without the match flow runs off the function's end into
inter-function alignment padding (`00 00` decoding as `add byte ptr [rax], al`),
swallowing neighbour functions in garbage. On a normal dynamically-linked ELF
the proto flag is already set and the OR is a no-op. This *removes code* by
design — the fall-through past a matched call is dropped as unreachable — so
the match surface is kept deliberately narrow (exact names, closed lists, no
class methods): the failure mode of a false positive is truncating live code
after a returning callee that happens to share a listed name.

**Proxy stubs (under `noreturn_known`).** A stub that carries a runtime name
behind a prefix (`stub___stack_chk_fail`, an empty `__wrap___assert_fail`
bound by `ld --wrap`) is a returning function by its own body, yet the code
that calls it was compiled for the no-return original and ends at the call;
the three sources above all miss it. One more check therefore answers per call
site rather than per callee:
`decompile_drive.rs (ArchFlowEnv::query_call_no_return_at)`, asked by
`flow.rs (FlowInfo::call_site_no_return)` with the call instruction's address
and fall-through, and decided by
`crates/unlace-bandb-base/src/p4_calls/calleenoreturn.rs
(is_proxy_no_return_at)`. The call is no-return when three facts hold
together. The callee's name is `<prefix>__<entry>`
(`noreturn_externmatch.rs (is_proxy_noreturn_name)`): the text after the
last `__` of the stripped name is an exact list entry holding an `_` of its
own, so `stub___stack_chk_fail` qualifies while `stub__stack_chk_fail_count`,
`machine__exit` and `ui__abort` (single-word entries never take the prefix) do
not. The callee's body is a stub (`noreturn_externmatch.rs
(is_stub_body)`): its symbol states a size, and those bytes, every one of them
mapped, decode as exactly one unconditional return or unconditional jump with
no control transfer before it. And the call is the last instruction of the
sized function symbol holding it (`noreturn_externmatch.rs
(call_ends_function)`): its fall-through is at or past that symbol's end, so
the compiler emitted nothing after it. The last condition is what makes the
rule safe. A one-instruction body is exactly what a compiler emits for an
empty function or for a tail call to a returning one, so name and body alone
would read a `hooks__pthread_exit(){}` or a `report__assert_fail` that jumps to
a logger as no-return and drop the live code after every call to it; with live
code after the call inside the caller, the call keeps its fall-through. A
callee whose symbol states no size (an import, a bytechunk image), a body that
runs on past its first instruction, or an instruction that runs past the
mapped bytes is judged by the three sources above alone. Because the decision
belongs to the call site, `is_no_return` (and with it the `bejoin` and
`rustabi` callee queries) never reports a proxy stub as no-return.

### Caller-local PPC32 PIC imports

`crates/unlace-lift/src/p2_lift/ppc32piccalls.rs (prove)` implements
`ppc32picimports on` (default off). The separate `abi` mode uses the loader
analysis and assumptions in `docs/spec/01-program-prep.md`. After ordinary flow builds raw P-code blocks,
constant propagation follows every reachable CFG successor. It recognizes a
complete short or long r30-relative stub at a direct call, or a four-byte load
from a validated JMP_SLOT at an indirect transfer. Equal facts survive joins;
conflicting slots or unknown bases refuse the entire caller. Only ABI-preserved
registers survive a proved import call. Every returning import also invalidates
further slot reads, including the implicit load in a direct stub: its global
and pointer-mediated writes are unproved. This memory-clobber fact survives
joins even when register values agree. A target already loaded into an
ABI-preserved register remains a value and can still prove a subsequent indirect
call; a reload cannot. Loads from stack or ordinary data never
supply constants, and non-stack stores require an alias proof not provided here.
Unknown local calls, CALLOTHER operations, unresolved transfers and unexplained
exits refuse recovery. Block count, operations, facts and worklist iterations
have fixed limits; reaching a limit also refuses recovery.

Every reachable exit must be a proved no-return import. Returning callers remain
unchanged: a PPC RETURN may implement computed-LR dispatch, which ordinary flow
does not fully represent. The pass does not infer preservation through local
callees or solve that separate flow problem. A closed loop is allowed only if
propagation converges without an unproved exit. No-return names come from the
existing ELF list and require `noreturn_known` to remain enabled.

An accepted proof rebuilds the same entry's flow, installing call-specific
names and contracts before following the call continuation. Proved terminal
indirect jumps become calls in that second flow. The discarded first flow ran
past those calls, so the warnings it buffered (bad instructions or truncation in
the bytes after a terminal call) are dropped with it; comments buffered before
it, such as a restart's, are kept. Slot and stub addresses never
become global FunctionSymbols or externref properties. A refused proof leaves
the original raw flow intact. Clearing or restarting Funcdata discards the
bindings and proves them again; no image cache or process environment switch
participates. Explicit call overrides take precedence and withhold inference.

Native CLI, console and WASM loading share the metadata and flow path. Embedders
can supply `ImportSlot` records through `Architecture::ppc32_pic_imports` and
read `Funcdata::ppc32_import_calls`; a host without validated slot metadata,
including the Ghidra bridge, leaves this option inert. Xrefs add proved call
edges to their relocation slots without aliasing a shared executable stub to
one import. Recovered edges decode their instruction text when the original
walk had no resolved reference at that address. They use the same declared analysis bounds as decompilation, with
unbounded flow when no extent was declared; an inventory estimate clipped at
another entry must not hide a shared suffix. Scoped edges retain the entry
contexts that proved them for caller labels. An incoming query reports no
single owner when multiple entries prove the same edge; an outgoing query uses
its selected entry, and the text and JSON renderers share that owner. Function
inventories and unrelated caller contexts remain unchanged.

An xrefs query proves only entries that can contribute a row, using
`crates/unlace-decomp/src/infra/decompile_drive.rs (ppc32_pic_call_bindings)`:
one unpublished flow per entry, under the drive's per-function budget, without
the replacement flow a decompile builds. `--to` an import slot proves every
entry; `--to` any other target proves none; `--from` a function proves that
entry alone and `--from` an instruction proves every entry. Pointer-only and
non-call kind filters prove none. An entry whose flow fails or exceeds the
budget is reported as a coverage note, since its import calls are then missing.

## 2.5 Arch quirks

**(unlace) SPARC struct return — `option sparcstructret`, default on, SPARC-gated,
`crates/unlace-lift/src/p2_lift/sparcstructret.rs
(unlace_sparc_struct_ret_trap_producer)` (from Ghidra issue GH-6882).** The SPARC ABI
places an `unimp <structsize>` word after a call to a struct-returning function.
SLEIGH lifts this marker to an `IllegalInstructionTrap` CALLOTHER feeding a
BRANCHIND. Flow classification recognizes the named
trap within the same instruction and removes the branch so execution falls
through. When the producer has an output, it becomes an inert COPY, retaining
its instruction-start operation until SSA so raw flow targets remain valid.
If the producer cannot be rewritten, the branch is still removed, preserving
the previous drop-only behavior. The user-op exists only in the SPARC SLEIGH, so
the pass is inert on every other language; on SPARC, `off` keeps a genuine trap's
effect, since the marker test cannot tell an ABI word from a real `unimp`.

**Emulate-function hooks.** `emulatefunction.rs (EmulateFunction)` is the
lightweight emulator behind every address enumeration in §2.3: a memory state
keyed by Varnode, constants read off the IR, RAM/register reads pulled from the
load image, and exactly *one* execution path — MULTIEQUAL inputs are selected
by which block the previous op came from, LOADs optionally collected as table
records, and any CALL/CALLOTHER is ignored while a nested branch op aborts the
path (the meld guarantees straight-line evaluation). Its one (unlace) extension
is the pre-seeding hook (`seed_varnode_value`) that lets `switchsharedcase`
inject the loop-carried table base — a register value that exists in no load
image — before each path walk.

## 2.6 Cleanup-call removal

**(oxidizer) `option cleanupcode`, default on (DIV-81),
`crates/unlace-lift/src/p2_lift/cleanupcode.rs
(ActionRemoveCleanupCode)`.** Rust's automatic resource management emits a
drop-glue call at every scope exit and every `?` early return. None of those
calls is in the source, none carries meaning for a reader, and on a real binary
they are the single largest source of emitted lines in a Rust function — the
showcase `FakeCrypt::fileops::encrypt_file` carries eight of them. This pass
deletes them, following SEFCOM Oxidizer's `CleanupCodeRemover`.

**What is deleted.** A *direct* CALL whose recovered callee display name
normalizes to one of exactly five paths: `core::ptr::drop_in_place`,
`core::ops::drop::Drop::drop`, `alloc::raw_vec::RawVecInner::deallocate`,
`__rust_dealloc`, `__rustc::__rust_dealloc`. Oxidizer's list also carries
`free`, `close` and `_close`; those are **deliberately not ported**, because
unlace's primary corpus is C binaries and deleting `free()` from C output would
be a catastrophically wrong answer. What remains cannot occur in a C program,
which is what makes the pass *structurally inert* on a C binary — the reason it
can default on without a compiler-detection channel from the loader to the
engine (there is none).

**Matching is normalize-then-compare-exactly, never `starts_with`.** unlace's
demangler leaves a legacy-mangled Rust symbol with its generic arguments in
escaped form, so the names that actually arrive look like
`core::ptr::drop_in_place$LT$std..fs..File$GT$`,
`alloc::raw_vec::RawVecInner$LT$A$GT$::deallocate` and
`_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop`.
`cleanupcode.rs (normalize_rust_name)` reproduces Oxidizer's
`normalize(monopolize=True, use_trait_name=True)`: strip a trailing
`::h<16 lowercase hex>` disambiguator, un-escape the `$LT$`/`$GT$`/`$C$`/`$uXX$`
sequences and the `..` path separator, then repeatedly collapse the *innermost*
angle-bracket group — deleting a plain generic argument list (with the `::` of a
turbofish), and replacing a `<T as Trait>` qualified path with the **trait**
name. The three examples above reduce to the first, third and second list
entries. Innermost-first is what makes the ` as ` split safe: the inner groups
of a nested qualified path are already gone when it runs.
Uppercase or mixed-case hash-shaped final components remain user names. A call
whose name ends in such a component must not become a cleanup victim merely by
removing that component; the same exact lowercase rule governs loader names.

Normalization only ever shrinks a name and the comparison is exact, so nothing
outside those five paths can be reached. `FakeCrypt::fileops::drop_ransom_note`
is untouched (the reason a prefix test would be wrong), and so is
`<T as crossbeam_epoch::atomic::Pointable>::drop`, which normalizes to a
*different* trait's `drop`. Oxidizer's `smallvec::deallocate` is not carried:
no available binary witnesses that path, and an unverifiable entry in a delete
list is worse than a missing one.

**The seam is pre-SSA, and that is the whole point.** The Action is registered
at the top of `mainloop` (`infra/universalaction.rs (universal_sched)`) in the
`deadcode` group and self-gates on `get_heritage_pass() == 0` — the same
pre-SSA window `unlace_loweredswitch`'s install half and `unlace_outline` use, and
the analogue of Oxidizer's `STAGE = BEFORE_VARIABLE_RECOVERY`. Before heritage
there are no INDIRECT call-effect ops to unpick and no MULTIEQUAL to patch;
CALL is not a control-transfer op, so no edge moves and the CFG is untouched.
The payoff is dead code: the register and stack writes that existed only to set
up the drop's arguments lose their last reader and are collected by the ordinary
`ActionDeadCode` fixpoint, so the setup goes with the call instead of being left
behind as unexplained assignments. Removing the call after SSA would keep all of
it.

Each victim is removed with the stock pair `Funcdata::delete_call_specs` then
`Funcdata::op_destroy` — what `Funcdata::block_remove_internal` already does for
a CALL inside a deleted block. A call whose output Varnode still has a reader is
skipped rather than destroyed (a cleanup routine returns `()`, so in practice
none does); declining is always safe, freeing a read Varnode is not.

This *removes code with real side effects* — the drop really did release the
resource — which is why the option is marked destructive. Turn it off to audit
when a value is actually dropped or freed; with it off the rendering is
byte-identical to a build without the pass.

## 2.7 Linux `int 0x80` syscall naming

**(unlace) `option linuxsyscall off|auto|on`, default `auto`,
`crates/unlace-lift/src/p2_lift/linuxsyscall.rs
(ActionLinuxSyscall)`.** x86 SLEIGH lowers `INT imm8` to a black-box userop
feeding an indirect call —
`tmp:1 = imm8; intloc:4 = swi(tmp); call [intloc];` — which is the honest
lifting of a *general* software interrupt: the spec cannot know which operating
system is behind the vector. Left alone it renders as
`(*(void *)swi(0x80))();`, a call through a pointer nothing assigns. The damage
is not only the missing name. The call has no recovered parameters, so the
register writes that set the syscall up have no reader, and the ordinary
dead-code fixpoint collects them: on a hand-written `int 0x80` program the
number *and* every argument leave the output together. The Linux i386 ABI is
fixed both in a 32-bit image and through the compatibility entry from long mode:
the number is in `EAX`, the arguments are `EBX`, `ECX`, `EDX`, `ESI`, `EDI`,
`EBP` in that order, and the result comes back in `EAX`. In particular syscall
number 1 remains i386 `exit`, not native x86-64 `write`.

**Recognition is structural, not dataflow.** The Action runs in the pre-SSA
window (registered in `infra/universalaction.rs (universal_sched)` immediately
after `ActionConstbase`), where the `swi` output is a *free* Varnode with no
def-use edge to follow. So the lowering is identified by adjacency inside one
instruction: walking the op bank's CALLOTHER list, a two-input CALLOTHER whose
second input is the one-byte constant `0x80`, whose next op in the same block
and at the same instruction address is a CALLIND, and whose output storage is
that CALLIND's target. Nothing else in the x86 lifting has that shape.

**The number comes from a bounded backward walk.**
`linuxsyscall.rs (syscall_number_before)` walks the CALLOTHER's basic block
backwards and accepts exactly one thing: a constant COPY into the whole storage
that supplies `EAX`. In x86-32 that is the four-byte `EAX` storage. In long mode
SLEIGH normalizes `MOV EAX,imm32` into an eight-byte, zero-extending constant
COPY to `RAX`; the scan accepts that exact form and takes its known low four
bytes. It stops — declining — at the first op that writes any part of `EAX` by
any other means, at any call or branch (whose effect on `EAX` it cannot see),
and at the top of the block. `xor %eax,%eax; inc %eax; int $0x80` is therefore
*declined*, not folded: the fold would need the constant propagation that only
exists after SSA, and by then the argument setup this pass exists to save has
already been collected.

**The table is a subset by construction.**
`linuxsyscall.rs (SYSCALL_TABLE)` maps a number to a name *and an argument
count*; a number with no entry is declined. Names and numbers come from the
kernel's `asm/unistd_32.h`; the argument count is the arity of the syscall's
documented prototype read from its section-2 manual page, kept only where that
reading is unambiguous — 332 of the 438 `__NR_` names. Four numbers whose i386
entry point takes a different register set than the documented wrapper are
removed by hand (`select` and `mmap`, whose i386 entry points take one pointer
to an argument struct; `sigsuspend`, which carries two unused history words;
`ipc`, a multiplexer), and nineteen are set by hand from the kernel entry point
where the manual page documents the wrapper instead (`exit`, `open`, `ioctl`,
`clone`, `rt_sigaction`, the `*64` stat family, `openat`, …). The arity is not
optional detail: printing a known name with a *guessed* argument count states
something false about the call, where declining states nothing.

**The rewrite retargets the CALLIND in place.** It already owns a
`FuncCallSpecs` slot and a block position, so the pass sets its opcode to CALL,
replaces input 0 with a fresh fspec annotation, names the spec `sys_<name>`
(`FuncCallSpecs::set_funcdata`) and destroys the now-unread `swi` CALLOTHER. The
name carries the `sys_` prefix deliberately: the raw syscall returns `-errno`
where the libc wrapper returns `-1` and sets `errno`, so rendering it as
`write(...)` would assert a call that is not being made — and on a dynamically
linked image the real `write` PLT stub is in the same output.

Two properties of the synthesized prototype are load-bearing:

- **The inputs are locked** to the first N argument registers
  (`FuncProto::set_param` + `set_input_lock`). A locked prototype is what makes
  `ActionFuncLink` materialize the argument Varnodes itself, exactly as it does
  for a declared callee — which is why the `mov $1,%ebx` feeding the call keeps
  a reader and survives to the output. This is also why the Action is scheduled
  *before* `ActionFuncLink` rather than in `mainloop`.
- **`extrapop` is zero** (`FuncProto::set_extra_pop`). `int 0x80` pushes no
  return address, where a normal x86 `CALL rel32` lifts as `push &next; call
  target` and the default `__cdecl` `extrapop` of 4 is what
  `ActionExtraPopSetup` uses to hand `ESP` those four bytes back. Applying it
  here — which is what the plain indirect call gets today — moves `ESP` across
  every syscall and shifts every later `ESP`-relative reference in the function.
  With `extrapop == 0` `ActionExtraPopSetup` emits no adjustment at all.

**The language gate** is `linuxsyscall.rs (resolve_abi)`. A four-byte code
space must expose the full `EAX`..`EBP` registers at four bytes. An eight-byte
code space must expose the full `RAX`..`RBP` registers at eight bytes; the pass
then uses the low four-byte storage at each same offset, which is the i386
compatibility ABI the kernel reads. This is deliberately not the native
x86-64 `SYSCALL` ABI (`RAX`, then `RDI`, `RSI`, `RDX`, `R10`, `R8`, `R9`) and
does not match that instruction's different CALLOTHER-only lift. Every non-x86
language is excluded because the register set does not resolve. Resolution is
the speculative probe of §0, not the exact lookup, so in ghidra mode the gate
sees only names the register cache already holds; the seven it needs are there
because the compiler spec's `<prototype>` elements are decoded during
`registerProgram`, before the first function is lifted.

**The image gate.** `auto`, the default, acts only on an image the loader
identified as a Linux ELF
(`crates/unlace-analysis/src/loader/format/elf_userland.rs (is_linux_image)`:
an `EI_OSABI` of GNU, or System V with no FreeBSD/NetBSD/OpenBSD ABI-tag note),
carried as `Architecture::image_linux_elf` and resolved into the per-function
flag in `build_arch_handle`. Naming the call asserts that the operating system
behind vector `0x80` is Linux; the vector alone does not prove it (on the
original IBM PC the `0x80`–`0xF0` range was reserved for BASIC) and a BSD
`int 0x80` takes its arguments from the stack, so a BSD or Solaris OSABI, a PE,
a Mach-O and a raw image are left alone. `on` drops the image test for
shellcode and raw dumps; `off` keeps the `swi` rendering.

## 2.8 Inlined MSVC `std::string` appends

**(unlace) `option msvcstrappend`, default off,
`crates/unlace-lift/src/p2_lift/msvcstrappend.rs
(ActionMsvcStrAppend)`.** MSVC inlines `std::string::push_back` — which is what
`operator+=(char)` calls — and the literal form of `append(const char *,
size_t)` at every call site. The x64 string object keeps its buffer or heap
pointer at `+0`, `_Mysize` at `+16` and `_Myres` at `+24`, and each append lands
as the same capacity diamond: a head that loads `_Mysize` and `_Myres` and
branches on room; a fast arm that stores `_Mysize + n`, selects the buffer with
`_Myres > 15 ? _Bx._Ptr : &_Bx._Buf` (a `CMOVA`, which SLEIGH lowers to its own
two-block sub-diamond) and writes the bytes and a terminating zero at
`ptr[_Mysize]`; and a grow block that calls `_Reallocate_grow_by`. Structured,
every append prints as its own five-to-ten-line `if`/`else`, so a password built
from four appends reads as four identical blocks whose count is the fact a
reader needs.

**The match is a proof over the raw p-code.** The Action runs in the universal
group beside `ActionLinuxSyscall`, before `ActionDefaultParams` and
`ActionFuncLink`, where every value is still register- or `LOAD`/`STORE`-level.
Candidates are direct calls whose block has one predecessor ending in a
`CBRANCH` and one successor (the join), with nothing after the call. `Engine`
symbolically executes the head (from after its last call, which clears every
register), the grow block, and every path through the fast arm — a single-entry
DAG of at most six blocks and eight paths ending at the join
(`msvcstrappend.rs (fast_paths)`). Values are linear combinations of
opaque atoms modulo their width (`Val`): a register or temporary never written
since the head or the last call, a `LOAD` tagged with the memory version it read
at, or an opaque operation. Linear arithmetic folds, so `lea rax,[rcx+1]` and a
store address `rax+rcx+2` compare exactly, and a narrow register read looks
through the zero extension that wrote it. `msvcstrappend.rs (try_match)`
then declines unless all of these hold for one object address `A`:

- the fast arm stores, to its own load slot, `_Mysize + n` where `_Mysize` is a
  head `LOAD` taken after the head's last store; that fixes `A` as the slot
  minus 16, and `_Myres` must be the head's `LOAD` of `A + 24` at the same
  version;
- the head's branch takes the fast arm exactly when `_Mysize < _Myres`
  (`push_back`, `n == 1`) or `_Myres - _Mysize >= n` (`append`). Conditions are
  decided, not pattern-matched: `Syms::lang_ok` admits only boolean connectives
  over 0/1 constants and comparisons that relate the two loads to each other, or
  one value to constants, and for those languages evaluation at every ordering
  of the two loads (`Syms::decide_two`), or at each constant and its neighbours
  (`Syms::classify_one`), is complete. An `INT_SLESS`, an offset ordered compare
  or a register from outside the head declines;
- on every feasible fast path (`prove_fast_path`) the only stores are that size
  store and exactly `n` bytes plus a zero at `ptr + _Mysize`, where `ptr` is `A`
  on every path whose `_Myres` range lies at or below 15 and is one `LOAD` of `A`
  (read with at most the size store before it) on every path whose range lies
  above 15. A path whose range straddles 15 declines, and both kinds must exist
  — that is `_Myptr()` with 15 as the small-string capacity. Every path must
  store the same bytes;
- the grow block's only effect before its call instruction is register writes
  (and, for `append`, the fifth-argument count at `RSP + 0x20`), with `A` in
  `RCX` and, for `push_back`, the stored character in `R9B` and `RDX` untouched
  or 1; for `append`, `n` in `RDX` and in `R9` a constant pointer into read-only
  memory whose image bytes are the stored bytes;
- no register either arm writes is one the default model preserves. The Win64
  cspec kills only `RAX` and `XMM0` and leaves the other volatile registers and
  the flags unmentioned, so every register an arm may write is already one the
  grow arm's call can clobber on its own path; a callee-saved write in either arm
  declines, because a later call would carry it past the join;
- nothing after the join reads a register byte the rewrite changes
  (`msvcstrappend.rs (read_after_join)`): every byte either arm or the
  rewrite writes, less `RAX` when the call returns `this`, must be overwritten
  on every path before any op reads it, until the path reaches a call or a
  return. A call ends the walk because each of those registers is one its callee
  may clobber; a return ends it because the only one a caller reads is `RAX`.
  An op that combines a register with itself into a value independent of it
  (`xor ecx,ecx`, `sub eax,eax` and their flags) is not a read, and an indirect
  branch or a walk longer than 4096 ops declines.

The grow call's own body is never read: a call handed exactly the append's
arguments on the capacity-exhausted edge is taken to be the library's
reallocating append. A helper of the same shape that does something else on
that edge would be misnamed; that trust is the reason the option ships off.

**The rewrite keeps the grow call.** `msvcstrappend.rs (rewrite)` removes
the head's fast-arm edge with `remove_branch`, destroys the grow block's ops
before the call instruction, and inserts `RCX = <base> + k` and `DL = <char>`
(or `RDX = <literal>`, `R8 = n`) re-derived from registers live at the head's
exit — never `RCX`, `RDX` or `R8`, which it writes. The call instruction's own
return-address push, and so its stack effect under the model's `extrapop`, is
untouched. The call gets a fresh `FuncCallSpecs` with an invalid entry address,
because it stands for no single body (so no callee-body probe answers for it),
named `std::string::push_back` or `std::string::append` and carrying a locked
`void (void *this, char c)` or `(void *this, char *s, size_t n)` prototype that
returns `void *` in `RAX` only when every fast path left `A` there — the
reference an `operator+` chain uses after the join. Its effect records are the
model's, except that a register the model kills at a call and no fast path
writes is declared unaffected: on the deleted path it keeps its value, and a
definite kill on every path erases that value from the data flow parameter
recovery reads at later calls — measured to drop a real argument from a later
call whose first argument slot the callee ignores. `ActionFuncLink` materializes
the arguments as for any declared callee, and the fast arm, now unreachable, is
collected. A run of appends then prints one call per append:
`std::string::push_back((void *)v1,'k');`.

**Scope.** Inert unless the code space is eight bytes wide, the x86-64 register
names resolve, and the default model preserves `RSI` and `RDI` (a Win64-shaped
convention): the 32-bit MSVC layout and `__thiscall` argument passing are not
matched, and neither is libstdc++, whose buffer pointer is loaded on every path.
An `append` whose count the grow arm takes from a register set outside the head
(`mov rdx,rsi`) is left unrolled, since nothing local proves it equals `n`.
**Why it ships off:** it deletes the fast arm's stores and renames a call to a
library name the image does not contain, on the strength of the grow call's
argument shape alone, and no MSVC C++ corpus in the tree can measure it;
`msvcstrappend` is on the `EXCLUDED_ON_PURPOSE` list in `p0_knowledge/modes.rs`,
so `--mode aggressive` does not turn it on either. Exercised by `tests/stages/msvcstrappend.toml`: four constant appends, a loop
appending a register-carried byte through a specialized grow helper, a two-byte
literal append whose returned reference is used, an unprovable register-count
append, a collapse whose continuation zeroes the changed registers, and 29 near
misses, one defect each, that must stay unrolled in both passes.

### Instruction buffer length (#98)

The SLEIGH parser context buffers `MAX_INSTRUCTION_LEN` = 32 instruction bytes
(`crates/unlace-sleigh/src/sleigh.rs`), twice upstream's 16, and `load_fill` reads
that many at each decode. Long-operand ISAs need it: a NEC V60 Format II
instruction with two double-displacement operands is 20 bytes, and VAX operand
specifiers chain to well past 16. A read that starts past the buffer is still a
`BadData` decode error ("Instruction is using more than 32 bytes"); the packed
reads in `instructionbytes.rs` take any buffer width. A start address that
is mapped zero-fills the rest of the read, as before, so a decode near the end of
a segment sees the same bytes it did with 16. Valid x86 encodings stop at 15 bytes, so
their decodes do not change; only a run of 16 to 31 redundant prefixes, which
the CPU faults on, now decodes instead of failing.

### ARM CPSR control fields (GH-848)

ARM-state `MRS CPSR` combines modeled NZCVQ flags with
`readCPSRControl()` state. Before ARMv6, the helper supplies bits 0 through 26,
including the architecturally reserved status bits 19:16. On ARMv6 and later,
`GE1` through `GE4` supply bits 19:16 directly and those bits are excluded from
the helper value. `MSR CPSR` sends selected non-flag control bits to
`writeCPSRControl(value, mask)`; on ARMv6 and later, selected GE bits update the
modeled `GE1` through `GE4` fields instead. The helper accesses explicit
architectural state, including the IRQ/FIQ and processor-mode control byte; it
does not change the host process interrupt state. An execution adapter must
provide processor-version and privilege-appropriate reads and masked writes.
Register and immediate MSR update NZCVQ only when the flag byte is selected,
preserving arithmetic flags across control-only writes.

### x86 16-bit near branches keep their code segment

`rel16` in `ia.sinc` masks the target to 16 bits, the Intel SDM's rule for a
16-bit operand-size branch in 32-bit code (GH-7418): EIP's high bytes are
zeroed. In 16-bit code (`addrsize=0`) the instruction pointer is the low 16 bits
of an address whose segment base is the rest of it, so the masked form sent
every near `call`/`jmp` in segment F000 of a BIOS to `0x0xxxx`. The 16-bit
constructor now keeps the address bits above the low 16, as upstream's 64-bit
build does (`((inst_next >> 16) << 16) | ((inst_next + simm16) & 0xFFFF)`); a
code segment is therefore assumed 64 KiB-aligned, which holds for BIOS segments
E000 and F000. Only `x86.sla` changes; the 32-bit masked form is unchanged.
### Synopsys ARCv2 (GH-1632)

`specs/Ghidra/Processors/ARC/data/languages/arcv2.sinc` is the ARCv2 base
instruction set of the ARC EM and HS cores, compiled once per byte order
(`arcv2_le.slaspec`, `arcv2_be.slaspec`). A 32-bit instruction is two 16-bit
words, the most significant first, each word in the image's byte order, and a
long immediate is two more words after the instruction; the spec therefore uses
16-bit tokens only and the two byte orders share every pattern. The six-bit
`b` register field is split across both words, so each operand table starts at
the instruction and spans it: register 62 in a source field reads the long
immediate, register 62 in a destination field discards the result, and
register 63 reads `pcl`, the instruction address with its low two bits clear.
The operand mode bits select `a = b op c`, `a = b op u6`, `b = b op s12` or
the conditional `b = b op c|u6`, whose condition skips the instruction when it
fails. The `F` bit selects a second constructor that writes `Z`, `N`, `C` and
`V`; carry on a subtraction is the borrow. A `.d` branch, jump or call
evaluates its condition and target first, then runs the delay slot whether
or not the condition holds, and only then branches. A delayed `bl`/`jl` links
`blink` to the instruction after the delay slot.

The zero-overhead loop is carried in the decode context. `lp end` records the
address after itself in `lpstart` at address `end` and sets `lpend` there
(`globalset`); it writes `lp_start` and `lp_end` and, in its conditional form,
branches to `end` when the condition fails. The instruction decoded at `end`
is prefixed with the hardware's test: `lp_count` is decremented and, while it
is not zero, control branches directly to the loop start. The test is on the
instruction at the loop end, not on the last body instruction, because the
core compares the next program counter with `LP_END` however that address is
reached. A counted loop therefore structures as a `do .. while` over
`lp_count`. Languages without `lp` are unaffected.

The compiler spec is the ARC ELF ABI: `r0`-`r7` carry arguments, `r0` (and
`r1:r0`, `r0:r1` big-endian, for 64 bits) the result, `blink` the return
address, and `r13`-`r25`, `gp`, `fp` and `sp` are callee-saved. `enter_s` and
`leave_s` store `blink` lowest, then `r13` upward, then `fp`. Auxiliary
registers are opaque (`lr`/`sr`/`aex` lift to `aux_read`/`aux_write`), as are
`flag`, `sleep`, `swi`, `trap_s`, `seti`/`clri`, `llock`/`scond`. `jli_s`,
`ei_s` and `ldi` index tables at the `jli_base`, `ei_base` and `ldi_base`
registers, which nothing sets; `bi`/`bih` are computed jumps. The DSP, FPU and
64-bit multiply-accumulate extensions (major opcodes 6 and 7 and the
accumulator forms of 5) and ARCompact are not decoded. Exercised by
`tests/stages/arcv2-zeroloop.toml` and
`unlace-sleigh/tests/arcv2_decode.rs` (one vector per instruction class and
operand form, assembled by the GNU ARC assembler).

### TMS320C28x (#98)

`specs/Ghidra/Processors/TMS320C28` vendors the SLEIGH specification of
ghidra-c28x (Apache-2.0, pinned commit in its README) unchanged:
`tms320c28:LE:32:default`, the C28x CPU with the FPU32 extension, over a
word-addressed RAM space (16-bit words), with an ELF opinion for e_machine 141.
Upstream's Ghidra analyzers set several decode-context bits that select proven
idiom lifts (canonical switch dispatch, the FFC helper return, the 32-step
division); they are not ported, so those bits stay 0 and the general lift is
used. Before, the C2000 family had no language. Exercised by
`unlace-cli/tests/c28x_raw.rs` (a word-addressed `ADDB ACC,#5; LRET` image
decompiles with no bad or unimplemented instruction).

### AArch64 RME and ATS1A system instructions (#98)

`specs/Ghidra/Processors/AARCH64/data/languages/AARCH64_rme.sinc` names the
Armv9 Realm Management Extension maintenance instructions, which the base spec
decoded only as a generic `sys`: `TLBI RPAOS`, `RPALOS`, `PAALLOS`,
`PAALL` (and their FEAT_XS `nXS` forms), `DC CIPAPA` and `DC CIGDPAPA`, plus
the FEAT_ATS1A translations `AT S1E1A`, `S1E2A` and `S1E3A`. Each lifts to a
user operation named after it (`TLBI_RPAOS(Xt)`, `DC_CIPAPA(Xt)`); the AT
forms write `par_el1`, as the base spec's AT instructions do. The register-less
TLBI forms match only Rt=31 (as in LLVM); another Rt stays `sys`. Exercised by
`unlace-cli/tests/aarch64_rme.rs` (a raw image decompiles to the user
operations).

### TriCore TC1.6.2 and TC1.8 (#98)

A new language `tricore:LE:32:tc18` (`tricore_tc18.slaspec`) decodes the
instructions added by TriCore TC1.6.2 (AURIX TC3xx) and TC1.8 (AURIX TC4x),
from the opcode diagrams of Infineon's TC1.8 architecture manual: population
count, byte shuffle, 64-bit divide and remainder (with the overflow flags),
`lha`, `jri`, 16-bit `calli`, the single-precision additions (`abs.f`,
`neg.f`, `max.f`, `min.f`, `ftoin`, half-precision conversions) and the
TC1.8 double-precision FPU on the E register pairs (arithmetic, `madd.df`,
`msub.df`, `cmp.df`, min/max, conversions), plus `mfdcr`/`mtdcr` and
`rfh`. CRCs other than `crc32b.w`, the carry-less multiply, `lsync`,
`trapinv`, `hvcall` and the virtual-machine cache operations are named
pcodeops. The TC1.6.1 `crc32` keeps its name in the older languages and is
`crc32b.w` in this one; nothing else in the older languages changes. Before,
each of these was a bad instruction. Exercised by
`unlace-cli/tests/tricore_tc18.rs`: a probe of every added encoding
(hand-assembled from the manual; no TriCore assembler is available) and raw
images whose C is checked (`div64` is a 64-bit division of the register
pairs, `shuffle` with 0x1b is `bswap`, `itodf` a `(double)` cast). Gaps
are listed in `specs/Ghidra/Processors/tricore/README.md`.

### MIPS MSA and Release 6 decode (#98)

`mips_msa.sinc` (generated by `tools/gen_mips_msa.py` from LLVM's `MipsMSAInstrFormats.td` and
`MipsMSAInstrInfo.td`) decodes all 529 MIPS SIMD Architecture encodings in every MIPS32/MIPS64
language except Octeon, with `lsa`/`dlsa` (MSA brought them in before Release 6) (MSA is part of R5 and R6 cores; its major opcode 0x1E and COP1 branch
formats are unused otherwise). The 128-bit registers `w0`-`w31` are separate from the FPRs (the
FR=1 aliasing is not modelled). Loads and stores move each element at its own address in the
language's byte order (element 0 is the least significant), `copy_s`/`copy_u` and `move.v`,
`cfcmsa`/`ctcmsa` and the `bz`/`bnz` branches (with their delay slot) have real p-code, and so
do the element-wise groups: `addv`/`subv`/`mulv` (and `addvi`/`subvi`), the bitwise `.v` and `andi`/`ori`/
`xori`/`nori`, `bmnz`/`bmz`/`bsel`, the shifts `sll`/`srl`/`sra` (and immediates; the count is the
element's low bits), the compares `ceq`/`clt`/`cle` (and immediates; all-ones or zero elements),
`min`/`max` (signed, unsigned, immediates), the saturating `adds_s`/`adds_u`/`subs_s`/`subs_u`,
`div`/`mod` (a zero divisor gives what QEMU gives: the architecture leaves it UNPREDICTABLE),
`pcnt`/`nlzc`/`nloc`, `fill`/`ldi`/`splat`/`splati`, the `ilv*`/`pck*` permutations, `shf`, `vshf`,
`sld`/`sldi` (byte windows of the element count, as QEMU slides them), `binsl`/`binsr`, the rounding
shifts `srar`/`srlr`, `ave`/`aver`, `sat_s`/`sat_u`, `max_a`/`min_a`, `hadd`/`hsub`, `asub`,
`subsus_u`/`subsuu_s`, `bclr`/`bset`/`bneg` (each with its immediate form), `add_a`/`adds_a`,
`bmnzi`/`bmzi`/`bseli`, `maddv`/`msubv`, `insert`/`insve` and the dot products `dotp`/`dpadd`/`dpsub`; the `bz`/`bnz` branches test the
register directly (`.v`: all bits zero or not; `.df`: some element zero, or every element nonzero).
The floating-point instructions are IEEE-exact in round-to-nearest (MSACSR's reset mode;
the Cause/Flags bits are not modelled): `fadd`/`fsub`/`fmul`/`fdiv`/`fsqrt`, `fmadd`/`fmsub` (the `.w`
forms fused through float64, the `.d` forms not fused), `fmax`/`fmin`/`fmax_a`/`fmin_a` (IEEE 754-2008
maxNum/minNum: a signalling NaN gives it quieted), the `fc*`/`fs*` compares (the signalling forms
give the same results), `fclass`, `ffint`, `ftint` (round to nearest even) and `ftrunc` with
saturation and NaN to 0, `frint`, `frcp`/`frsqrt` (as the exact quotient), `fexupl`/`fexupr`/`fexdo`,
and the Q15/Q31 forms `mul_q`/`mulr_q`/`madd_q`/`maddr_q`/`msub_q`/`msubr_q`, `ffql`/`ffqr` and `ftq`
with QEMU's saturation. Only `fexp2` and `flog2` are user operations named after its mnemonic (`msa_addv_w`) with the
destination as output and the read operands (and the destination, for the accumulating forms)
as inputs.

Release 6 (`MIPS:*:32:R6`, `MIPS:*:64:R6`): `blezalc`/`bgtzalc` (rs = 0) no longer decode as
`bgeuc`/`bltuc`; `bgec`/`bltc` require rs, rt nonzero and different (rt = 0 is reserved);
`blez`/`bgtz $zero` decode (they were `bad1`/`bad2`); the R6 encodings of `sc`, `pref`, `sdbbp`,
`swc2`, `sdc2`, `lld` and `scd` are added; the pre-R6 opcodes R6 removed (SPECIAL2 including
`save`/`restore` and `sdbbp`, `pref` 0x33, `sdc2`/`swc2` 0x3E/0x3A, `ldl`/`ldr`/`sdl`/`sdr`,
`lld`/`scd` 0x34/0x3C) no longer decode there; the three-operand R6 FPU operations (`min`, `max`,
`mina`, `maxa`, `maddf`, `msubf`, `sel`, `seleqz`, `selnez`, ...) no longer require ft = f0; and the
non-existent `sdcx` (opcode 0x1E, which is MSA `st.d`) is gone. Exercised by `processors.toml`
row `mips_msa` and by `tools/difffuzz --arch mipsr6 --oracle qemu` (qemu-mips64 -cpu I6400).

### TriCore overflow and carry flags (#563)

The 32-bit integer arithmetic of every TriCore language sets PSW.V from the exact
result: each constructor computes the result in 64 bits (sign-extended operands,
zero-extended for the `.u` forms) and `vflags`/`vflagsu` set V when it does not fit
in 32 bits, with AV from bits 31 and 30 of the stored result. Before, V was the
result's sign bit. The saturating forms clamp that exact value (`ssov32`,
`suov32a`, `suov32s`); `msubs`/`msubs.u` multiply (they subtracted), `csubn`
subtracts when D[d] is zero, `cadd`/`caddn`/`csub`/`csubn` leave the flags alone when
their condition is false, `subc` takes its carry from D[a] + ~D[b] + C, and the
`madd.q`/`msub.q`/`mul.q` 32x16 and 32x32 products are no longer truncated to 32
bits before the shift. `sha` sets C to the OR of the bits shifted out (the top
`count` bits left, the low `-count` bits right); `shas` leaves C alone. The 64-bit
(E register) multiply-accumulate forms set V from the add's signed overflow (unsigned
carry for `madds.u`). Checked with `tools/difffuzz` against Unicorn.

The q-format 16x16 multiplies (`mul.q`/`mulr.q`/`madd(r)(s).q`/`msub(r)(s).q` on the U/L
halves) multiply in 32 bits; they truncated the product to 16 bits, and the rounding forms
cleared the result (`zext(res[16,16] << 16)`). The 64-bit (E register) `madd`, `msub`, `mul`
families, plain, `.u`, saturating and `.q`, extend the operands before multiplying (they
truncated the 32x32 product), take V from the 64-bit add's signed overflow (unsigned carry or
borrow for `.u`) instead of bit 63, and saturate on it; `msubs.u` multiplies (it subtracted).
The 32-bit `msub.q`/`msubs.q` (32x32 and 32x16) subtract at full precision and then drop the
low bits, as `madd.q` does, so the result is `D[d] - ceil(product)` rather than
`D[d] - floor(product)`, matching Unicorn's TriCore core.

The packed multiply-accumulate forms (`madd(s).h`, `msub(s).h`, `maddsu(s).h`, `msubad(s).h`, the
rounding `...r(s).h` and the multi-precision `...m(s).h` families) compute each half's result
exactly: V is set when either 32-bit half (or the 64-bit `m` result) overflows, not from the halves'
sign bits, and the saturating forms clamp the exact value. The rounding forms with a D[d]
accumulator take `sext(D[d][31:16]) << 16` (the halfword was shifted inside its 16 bits, so it was
0), and the `m` forms add `(mul_res1 +/- mul_res0) << 16` in 64 bits (the sum was truncated to 32).
### AArch64 SVE2 and SVE2.1 (#98)

`specs/Ghidra/Processors/AARCH64/data/languages/AARCH64_sve2.sinc` decodes
SVE2 and SVE2.1 with the SVE2 crypto (AES, AES2, SHA3, SM4), BitPerm and
B16B16 extensions: 1066 instruction forms, every LLVM 22 TableGen record with
one of those predicates. Before, each was a bad instruction, except the B16B16
arithmetic and the 128-bit element stores, which the SVE spec mis-decoded
(`fadd z0.B` for `bfadd z0.h`). The file is generated by
`tools/gen_aarch64_ext.py`: fixed bits from the TableGen records, and for
each operand field the values `llvm-mc -M no-aliases` accepts, each with
LLVM's text and the register or constant it exports. Each instruction lifts to
a user operation named after its mnemonic (`SVE2_sqrdmlah`); its output is
the register it writes (the first of a register list) and its inputs are the
read operands, with the old destination for destructive and accumulating forms;
the `while*` generators also set NZCV through `SVE2_sve_first`,
`SVE2_sve_none` and `SVE2_sve_nlast`, so `b.first`/`b.none` loops keep
their condition. Exercised by `unlace-cli/tests/aarch64_sve2.rs`: every
record's encoding against LLVM's text (`fixtures/aarch64_sve2/probe.txt`)
and clang-compiled ACLE functions (`svqrdmlah`, `svaddp`, `svwhilege`,
a `svhistcnt` loop) that decompile with no bad or unimplemented instruction.

### Hexagon HMX (#98)

`hexagon_hmx.sinc` decodes the ten documented instructions of the Hexagon
Matrix Extension (FP16 set, V68/V73, Hexagon V81 HMX Programmer's Reference
Manual 80-N2040-62): `activation.hf = mxmem(Rs,Rt)` with its `:deep` and
`:single` forms, `weight.hf = mxmem(Rs,Rt)` and its `:deep` form,
`bias = mxmem2(Rs)`, `mxmem2(Rs) = bias`, `cvt.hf = acc(Rs)`,
`mxmem(Rs,Rt) = cvt` and `mxclracc.hf`. They sit in LD class 9 (op 0x10, low
byte 0xe2..0xfe, beside `memw_locked`, `memd_locked`, `memw_phys` and
`vextract`, whose bits 7..5 are not 111) and ST class 10 op 0x37, which
nothing else decodes, so the existing `Hexagon:LE:32:default` language takes
them without a variant. The accumulators, convert state, bias sets and the
VTCM buffers are not registers here: each instruction lifts to a named
pcodeop over its decoded fields (activation: 2 KB-aligned address, the low
control bits, Rt; weight: 128-byte-aligned address, the negate bit, the dW
range; bias: 256-byte-aligned address and set index; convert: bias select and
the remaining control bits), so a raw `activation.hf = mxmem(r0,r1)`
decompiles to `hmx_activation_hf(a0 & 0xfffff800,a0 & 0x7ff,a1);`. Before,
every HMX word was a bad instruction. The activation/weight pair must share a
packet; such packets lift since the crossbuild fix below.
Exercised by `unlace-cli/tests/hexagon_hmx.rs`: probe rows for all ten
encodings against LLVM's syntax and a raw image with one instruction per
packet. Notes in `specs/Ghidra/Processors/Hexagon/README.md`.

### SLEIGH crossbuild targets resolve on demand (#679)

A `crossbuild addr, section` names another instruction, which C++ reads out of the
disassembly cache that the flow walk fills. `one_instruction` here resolves only the
instruction and its delay slots, so every crossbuild failed with "Could not obtain cached
crossbuild instruction". This is how Hexagon lifts each packet's later slots, so every
Hexagon function failed. `SleighBuilder::append_cross_build`
(`crates/unlace-sleigh/src/sleigh.rs`) now resolves a target that is not in the set to
p-code state and appends it. Such an instruction is not cached for reuse, because its
p-code depends on other addresses. The ELF loader also maps `EM_HEXAGON` to
`Hexagon:LE:32:default`, so a Hexagon object no longer needs `--target`.

### AArch64 FEAT_PAuth_LR and the BTI hint space

The Armv9.5 PAC-with-PC instructions decode (`AARCH64base.sinc`, with `__PACpart` tables in
`AARCH64_base_PACoptions.sinc` so they follow the same `ShowPAC`/`PAC_clobber` options):
`paciasppc`, `pacibsppc`, `pacnbiasppc`, `pacnbibsppc`, `pacia171615`, `pacib171615`,
`autia171615`, `autib171615`, `autiasppc`/`autibsppc` (label `#-imm*4` and register forms) and
`retaasppc`/`retabsppc` (label and register), plus `pacm` (`hint #39`). The PC (the
instruction address, the label address, or the register holding it) is the third operand
of the `pacia`/`pacib`/`AuthIA`/`AuthIB` user operations; the `171615` forms pass `x15`.
`bti` now requires bit 5 clear, so the odd hints `#33`, `#35`, `#37` print as `hint` and
`#39` as `pacm` instead of `bti`. Every PAuth/PAuth_LR record of LLVM 22's TableGen
(two words each, `unlace-cli/tests/aarch64_pauth.rs`) prints as `llvm-mc` does, and the
PAC instructions of the arm64e iOS 16.4.1 `backboardd`, `trustd` and `debugserver`
`__text` sections decode with the same counts as `llvm-objdump`.

### AArch64 SMSTART/SMSTOP text

`smstart`/`smstop` (`AARCH64base.sinc`) print as LLVM does: `smstart`, `smstart sm`, `smstart za`
(they printed `smstart {}`, `smstart {SM}`). Their p-code is unchanged.

### AArch64 RMIF

`rmif xn,#shift,#mask` (`AARCH64base.sinc`) rotates `xn` right by `shift` and copies bits
3..0 of the result into N, Z, C and V where `mask` has a 1; the `set_NZCV` macro
(`AARCH64instructions.sinc`) now leaves the other flags unchanged (it used to copy N into
them), and the source is rotated, not shifted. Found by `tools/difffuzz --oracle qemu`.

### AArch64 unsigned float-to-integer conversions

`fcvtzu`, `fcvtmu`, `fcvtnu` and `fcvtpu` to a 32-bit register (`AARCH64neon.sinc`, the
scalar-integer constructors from `Rn_FPR16`, `Rn_FPR32` and `Rn_FPR64`) shared their
constructors with the signed forms and lifted as `trunc`, which is a signed conversion: `(unsigned)f`
printed as `(int)f`, which saturates 3e9 to `INT_MAX` when the C is compiled (tools/semantic
`floats.f2u`). The unsigned forms (opcode bit 16 set) now have their own constructors, which
truncate to 64 bits and keep the low word, exact for every value below 2^32
(`tests/stages/aarch64-fcvtzu.toml`). A negative input or one of 2^32 or more is not
clamped as the instruction does; neither is a 64-bit destination's input of 2^63 or more,
whose constructors still use the signed `trunc`.

### AArch64 scalar UCVTF from a SIMD register

`ucvtf` with its integer in a scalar SIMD register (`ucvtf d0, d0`, `s0, s0`, `h0, h0`;
`AARCH64neon.sinc`) lifted as the user op `NEON_ucvtf`, which the printer prints as an
undeclared call (tools/semantic `floats.i2d`, clang -O0). It now zero-extends the integer one
byte wider than it is and converts that with `int2float`, as the general-register `ucvtf`
forms beside it already do, so the conversion is unsigned and exact.

### AArch64 SVE matrix multiply and BFloat16 (#98)

`AARCH64_svemm.sinc` decodes the SVE forms of FEAT_F64MM (`ld1ro*`, `fmmla .d`, the
128-bit-element `zip`/`uzp`/`trn`), FEAT_F32MM (`fmmla .s`), FEAT_I8MM (`smmla`,
`ummla`, `usmmla`, `usdot`, `sudot`), SVE BF16 (`bfdot`, `bfmlalb`/`bfmlalt`,
`bfmmla`, `bfcvt`, `bfcvtnt`) and FEAT_SVE_F16F32MM. Before, all 32 forms were bad
instructions: 85 of 6000 random SVE-space words that Capstone decodes, the decode
failures difffuzz reported. The file is generated by `tools/gen_aarch64_ext.py`, which
now takes an optional list of required predicates, so that it selects only the SVE
records among those that carry HasBF16, and a file of record names to skip. Each
instruction lifts to a user operation (`SVEMM_smmla`) in the SVE2 file's style.
Exercised by `unlace-cli/tests/aarch64_svemm.rs`: every record's word against LLVM's text,
and clang-compiled ACLE functions (`svmmla_f64`, `svmmla_s32`, `svbfdot_f32`,
`svbfmlalb`/`svbfmlalt`, `svld1ro_s32`).

### AArch64 SME, SME2, SME2.1 and SME2.2 (#98)

`specs/Ghidra/Processors/AARCH64/data/languages/AARCH64_sme.sinc` decodes the
Scalable Matrix Extension: SME, SME2, SME2.1, SME2.2 and the SME F64F64,
I16I64, F16F16, B16B16, F8F16, F8F32, LUTv2, MOP4 and TMOP extensions, 1074
instruction forms (every LLVM 22 TableGen record with one of those predicates,
less the 18 also predicated on SVE2, which `AARCH64_sve2.sinc` has). Before,
each was a bad instruction. It is generated by `tools/gen_aarch64_ext.py`
like the SVE2 file. The ZA array and ZT0 are not varnodes: a tile, tile slice
or ZA array vector is passed to the user operation as its encoded number,
followed by its index register and immediates, so `fmopa za0.s, p0/m, p0/m,
z0.s, z1.s` lifts to `SME_fmopa(0,p0,p0,z0,z1)` and `mova z0.s, p0/m,
za1h.s[w12, 0]` to `z0 = SME_mova(z0,p0,1,w12,0)`. An instruction whose
output is ZA or ZT0 takes that operand as its first input; one that writes a
Z, P or general register assigns it. The same change makes an `xzr`/`wzr`
source operand of the generated SVE2 and SME instructions read as 0. Exercised
by `unlace-cli/tests/aarch64_sme.rs`: every record's encoding against LLVM's
text (`fixtures/aarch64_sme/probe.txt`) and clang-compiled ACLE streaming
functions (`svmopa`, `svread_hor`, `svzero_za`, `svst1_hor`,
`svadd_za32_vg1x2`) that decompile with no bad or unimplemented instruction.

### Zero-overhead loops (#98)

A hardware loop instruction (`LSETUP`, `lp`, `DO`, `RPTB`, `loop`, `loopdo`) names its loop end,
and the core branches back when the program counter reaches it; no branch instruction sits at
the end of the body. Every language that lifts these as loops does it the same way. The loop
instruction marks one address with `noflow` context through `globalset`: a flag plus the
loop start, or the distance back to it. A root constructor that sees the flag adds the
hardware's test there: count down and, while the count holds, branch directly to the loop
start. The decompiler then sees an ordinary back edge and structures a `do`/`while` over
the count. There are two placements:

- At the last body instruction, when the loop operand names it (ADSP-218x, Blackfin, DSP56000,
  DSP56300, PRU, SHARC `DO ... UNTIL`, TMS320C3x `RPTB`, TMS320C5x `RPTB`). The test runs
  after that instruction.
- At the address after the body, when the operand names that, or names the last word of a
  block whose last instruction may be several words long (ARC `lp`, KVX `loopdo`, TMS320C54x
  `RPTB` at `REA + 1`, Xtensa `LEND`). The test runs before that instruction, as the core
  compares the next program counter with the loop end however it is reached.

Single-instruction repeats (TMS320C3x `RPTS`, TMS320C5x `RPT`, DSP56300 `REP`) mark the next
instruction and wrap it in a counted loop. The root constructor either builds a subtable that
holds the ordinary instructions (Blackfin's `:^ins`), or builds `instruction` itself under
`phase=0`, with the ordinary constructors in a `with : phase=1` block (Xtensa, TMS320C3x,
TMS320C5x, TMS320C54x). Without that block, the self-referencing root never takes precedence
over the ordinary constructors and the loop-back is silently dropped.

C-SKY `bloop` needs none of this: it sits after the body it closes and is lifted as a
decrement-and-branch.

Hexagon is the other way round: the packet that ends the loop carries the mark (its parse
bits, `:endloop0`/`:endloop1`), and only `loop0`/`loop1` names the start. Those
instructions record the start in flowing (not `noflow`) context, `lp0sa`/`lp1sa`, set
with `globalset(inst_next, ...)`, so it reaches every instruction the loop setup flows to.
An end-of-loop packet that sees a recorded start counts `LC0`/`LC1` down and branches
directly to it; with no recorded start (a loop set up in another function, or through
`SA0`/`SA1` writes) it keeps the indirect branch through `SA0`/`SA1`. A packet that ends
both loops at once keeps the indirect form.

Epiphany names no loop in one instruction either: `movts ls`, `movts le` and `movts lc` write
the loop start, the last loop instruction and the count from registers. `mov` and `movt` of a
constant record the register and value in flowing context; `movts ls` from that register keeps
the value, and `movts le` from it marks the instruction at its value with the kept start, so
the root constructor adds the count-down-and-branch there as above (the test is `LC != 0`
after the decrement). A write to that register by another instruction in between is not
tracked; a loop register written from any other value marks nothing.

StarCore SC140 marks loop ends in the prefix words of execution sets (`LPMARKA`, `LPMARKB`),
not by address. `DOSETUPn` records the start `SAn` and `DOENn`/`DOENSHn` the enabled loops
and the short-loop flag in flowing context; the highest enabled loop is the active one. A
mark that ends an iteration later than its own set passes noflow context forward set by set:
`LPMARKB` two sets before the end of a long loop, or on the first set of a two-set short
loop, reaches the last set, and `LPMARKA` on the last set (or on a one-set short loop) acts
there. The root constructor adds the manual's test after that set: while `LCn > 1`, count
down and branch directly to the start; otherwise clear `LCn`. The loop end clears the loop's
enable bit for the code after it, so an enclosing loop becomes active again. `CONT`/`CONTD`
end an iteration early in the same way: when its set's condition holds, the root constructor
branches to the label once `LCn` is down to one (clearing it and the loop's enable bit there)
and back to the start otherwise. A set carrying both marks (an inner and an outer loop ending
together) is not modelled.

### Vendored community processor modules (#98)

These processor directories vendor a community SLEIGH module unchanged (its
license file and a provenance README with the pinned commit sit in the
directory, and NOTICE credits it). Each language is compiled by `slacomp` like
the Ghidra-vendored ones and is covered by the vendored-language count in
`unlace-sleigh/tests/verify_context_commits.rs`, which compiles every
`.slaspec` in the tree; a raw image selects one with `--raw-image --target`.

| Directory | Processors | Languages | Upstream |
|---|---|---|---|
| `SM83` | Sharp SM83 (Game Boy LR35902) | `SM83:LE:16:default` | aleph-void/ghidra-sm83 (fork of minorum/ghidra-sm83) @ `617689a194`, Apache-2.0 |
| `i960` | Intel i960 | `i960:LE:32:default`, `i960:LEBE:32:lebe` | aleph-void/ghidra-i960 @ `1b84289e7f`, Apache-2.0 |
| `Alpha` | DEC Alpha (21064-21364) | `21064:LE:64:unix`, `21064:LE:64:vms`, `21064:LE:64:nt`, `21164:LE:64:unix`, `21164:LE:64:vms`, `21164:LE:64:nt`, `21264:LE:64:unix`, `21264:LE:64:vms`, `21264:LE:64:nt`, `21364:LE:64:unix`, `21364:LE:64:vms`, `21364:LE:64:nt`, `21464:LE:64:unix`, `21464:LE:64:vms`, `21464:LE:64:nt` | aleph-void/ghidra-alpha (fork of kkaempf/ghidra-alpha) @ `b01ef29723`, Apache-2.0 |
| `OpenRISC` | OpenRISC 1000 (or1k) | `OpenRISC:LE:32:default`, `OpenRISC:BE:32:default` | aleph-void/ghidra-or1k-le-hack (fork of Spritetm/ghidra-or1k-le-hack) @ `ec64ef6631`, Apache-2.0 |
| `C6000` | TI TMS320C6000 (C6x, C64x, C674x) | `C6000:LE:32:default`, `C6000:LE:32:analysis`, `C6000:BE:32:default`, `C6000:BE:32:analysis` | aleph-void/ghidra-c6000 (fork of geepot/ghidra-c6000) @ `854fa26859`, Apache-2.0 |
| `TLCS900H` | Toshiba TLCS-900/H | `TLCS900H:LE:32:default` | aleph-void/ghidra-tlcs900h (fork of nevesnunes/ghidra-tlcs900h) @ `585eb6070f`, MIT |
| `LM32` | Lattice LatticeMico32 | `lm32:BE:32:default`, `lm32:LE:32:default` | aleph-void/ghidra-lm32 (fork of jevinskie/ghidra-lm32) @ `5be258ec6d`, MIT |
| `MCORE` | Motorola M-CORE | `MCORE:BE:32:default`, `MCORE:LE:32:default` | aleph-void/ghidra-mcore (fork of CUB3D/ghidra-mcore) @ `0c10e14854`, Apache-2.0 |
| `EBC` | EFI Byte Code | `EBC:LE:64:default`, `EBC:LE:32:default` | aleph-void/Ghidra-EFI-Byte-Code-Processor (fork of meromwolff/Ghidra-EFI-Byte-Code-Processor) @ `f27afea157`, MIT |
| `SPC700` | Sony SPC700 (SNES audio) | `spc700:LE:16:default`, `spc700:LE:16:65816` | aleph-void/SPCdra (fork of qwertymodo/SPCdra) @ `e4f0b34412`, Apache-2.0 |
| `EmotionEngine` | PlayStation 2 Emotion Engine (R5900, MMI, VU) | `r5900:LE:32:default` | aleph-void/ghidra-emotionengine-reloaded (fork of chaoticgd/ghidra-emotionengine-reloaded) @ `77e147c007`, Apache-2.0 |
| `Allegrex` | PSP Allegrex (with VFPU) | `Allegrex:LE:32:default` | aleph-void/ghidra-allegrex (fork of kotcrab/ghidra-allegrex) @ `7929c178ae`, Apache-2.0 |
| `DSP56300` | Motorola DSP563xx | `DSP56300:LE:24:default`, `DSP56300:LE:24:modulo` | aleph-void/ghidra-dsp56300 (fork of roblg/ghidra-dsp56300) @ `78509aa7f8`, Apache-2.0 |
| `NS32000` | National Semiconductor NS32000 | `NS32016:LE:32:default`, `NS32016:LE:32:NS32532` | aleph-void/ghidra-NS32016 (fork of raybellis/ghidra-NS32016) @ `de87d2c093`, Apache-2.0 |
| `A29K` | AMD Am29000 | `a29k:LE:32:default`, `a29k:BE:32:default` | aleph-void/ghidra_a29k (fork of mumbel/ghidra_a29k) @ `f3b6ab7373`, Apache-2.0 |
| `uPD78xx` | NEC 78K0 / 78K0S / 78K4 (uPD78xx) | `upd78:LE:16:default` | aleph-void/ghidra-upd78xx @ `036419037e`, Apache-2.0 |
| `R8C` | Renesas M16C/20 and R8C/Tiny | `R8C:LE:16:default` | AlexDev-TH/ghidra-r8c @ `6484b9470a`, Apache-2.0 |
| `C166` | Infineon C166 / XC166, ST10 | `C166:LE:16:default`, `C166:LE:16:CS` | aleph-void/c166-ghidra-module (fork of keyhana/c166-ghidra-module) @ `c544f0ad16`, MIT |
| `F2MC16` | Fujitsu F2MC-16L / 16LX | `F2MC:LE:24:default` | aleph-void/F2MC-16LX (fork of mehmooda/F2MC-16LX) @ `0308d3095a`, MIT |
| `8008` | Intel 8008 | `8008:LE:16:default` | aleph-void/ghidra-8008 @ `71c3e7378c`, Apache-2.0 |
| `F8` | Fairchild F8 | `F8:BE:16:default`, `F8:BE:16:F3850`, `F8:BE:16:MK3870`, `F8:BE:16:F3870`, `F8:BE:16:MK3873` | aleph-void/ghidra-f8 @ `bad5887f84`, Apache-2.0 |
| `H8` | Hitachi H8/300, H8/300H, H8S | `h8_300:BE:16:normal`, `h8_300l:BE:16:normal`, `h8_300h:BE:32:normal`, `h8_300h:BE:32:advanced`, `h8s:BE:32:normal`, `h8s:BE:32:advanced`, `h8sx:BE:32:normal`, `h8sx:BE:32:middle`, `h8sx:BE:32:advanced`, `h8sx:BE:32:maximum` | aleph-void/ghidra-h8-300 (fork of shizmob/ghidra-h8-300) @ `480471258a`, WTFPL |
| `JieLi` | JieLi audio SoC | `pi32:LE:32:default`, `pi32v2:LE:32:default`, `q32s:LE:32:default` | aleph-void/ghidra-jieli (fork of quarkslab/ghidra-jieli) @ `a69a59056f`, Apache-2.0 |
| `M740` | Mitsubishi MELPS 740 | `MELPS740:LE:16:default`, `MELPS740:LE:16:wit`, `MELPS740:LE:16:muldiv` | aleph-void/ghidra-m740 @ `4495d71ab8`, Apache-2.0 |
| `MN102` | Panasonic MN10200 | `MN102:BE:24:default` | aleph-void/ghidra-mn102-lang (fork of Pokechu22/ghidra-mn102-lang) @ `3cf1d57f86`, Apache-2.0 |
| `MN103` | Panasonic MN10300 (AM33) | `mn10300:LE:32:default`, `mn10300:LE:32:am33`, `mn10300:LE:32:mn10300` | aleph-void/ghidra-mn103-extension (fork of michaelbrandi/ghidra-mn103-extension) @ `32d7ce4d79`, Apache-2.0 |
| `PDK` | Padauk PDK (PMS/PFS) | `pdk13:LE:16:default`, `pms152:LE:16:default`, `pms132:LE:16:default`, `pms134:LE:16:default`, `pmc884:LE:16:default` | aleph-void/ghidra-pdk (fork of CUB3D/ghidra-pdk) @ `d4cdebc983`, Apache-2.0 |
| `PIC16F153xx` | Microchip PIC16F153xx enhanced midrange | `PIC-16:LE:16:PIC-16F153xx` | aleph-void/ghidra-pic16f153xx @ `85c02a04a0`, Apache-2.0 |
| `PicoBlaze` | Xilinx PicoBlaze (KCPSM) | `KCPSM3:BE:24:default`, `KCPSM6:BE:24:default` | aleph-void/ghidra-picoblaze-kcpsm @ `ba271a21d6`, Apache-2.0 |
| `MC68HC16` | Motorola MC68HC16 | `68HC16:BE:24:cpu16`, `68HC16:BE:24:default`, `68HC16:BE:24:JTEC` | aleph-void/Ghidra-Processor-MC68HC16Z (fork of HausRummel/Ghidra-Processor-MC68HC16Z) @ `974d796590`, Apache-2.0 |
| `GCDSP` | Nintendo GameCube DSP | `GCDSP:BE:16:default`, `GCDSP:BE:16:exact` | aleph-void/ghidra-gcdsp-lang (fork of Pokechu22/ghidra-gcdsp-lang) @ `4fc59950c6`, Apache-2.0 |
| `RadeonF32` | AMD Radeon F32 microengine | `F32:BE:64:default`, `F32:LE:64:default` | aleph-void/ghidra-radeon-f32 (fork of cyrozap/ghidra-radeon-f32) @ `104e93f7af`, Apache-2.0 |
| `RL78` | Renesas RL78 | `RL78:LE:16:default`, `RL78:LE:16:S2` | aleph-void/ghidra-rl78 (fork of CUB3D/ghidra-rl78) @ `b870c6eaf0`, Apache-2.0 |
| `N64RSP` | Nintendo 64 RSP | `RSP:BE:32:default` | aleph-void/Ghidra-RSP (fork of Random06457/Ghidra-RSP) @ `35d58e76ea`, MIT |
| `SCORE7` | Sunplus S+core (SCORE7) | `SCORE7:BE:32:default`, `SCORE7:LE:32:default` | aleph-void/ghidra-score7 @ `940b07da9b`, Apache-2.0 |
| `SHARC` | Analog Devices SHARC (ADSP-21xxx) | `SHARC:BE:32:214xx` | aleph-void/ghidra-sharc (fork of roblg/ghidra-sharc) @ `8d0c391e71`, Apache-2.0 |
| `Si4440` | Silicon Labs Si4440 | `8051:BE:24:si4440` | aleph-void/ghidra-si4440 @ `b82633ef31`, MIT |
| `ST7` | STMicro ST7 | `ST7:BE:16:default`, `ST72:BE:16:default` | aleph-void/ghidra-st7 @ `244cfae881`, Apache-2.0 |
| `SuperFX` | SuperFX (GSU) | `SuperFX:LE:24:default` | aleph-void/ghidra-superfx (fork of ChekeEdd/ghidra-superfx) @ `98dd7bcd85`, BSD-3-Clause |
| `TMS320C24x` | TI TMS320C24x | `TMS320c24x:LE:16:default`, `TMS320c24x:BE:16:default` | aleph-void/ghidra-tms320c24x (fork of banksy-git/ghidra-tms320c24x) @ `0bcad2a490`, Apache-2.0 |
| `TMS320C54x` | TI TMS320C54x | `TMS320C54x:BE:16:default` | aleph-void/ghidra-tms320c54x (fork of gabtremblay/ghidra-tms320c54x) @ `bef69d7c53`, Apache-2.0 |
| `unSP` | Sunplus unSP | `unsp:LE:16:default` | aleph-void/ghidra-unSP (fork of SamuelWAnderson45/ghidra-unSP) @ `a609027c50`, Apache-2.0 |
| `VideoCore4` | Broadcom VideoCore IV | `vc4:LE:32:default` | aleph-void/ghidra-videocore4 @ `db09a308c2`, Apache-2.0 |
| `VMU` | Sega Dreamcast VMU (LC86K) | `LC8670:LE:8:VMU`, `LC8670:LE:8:VMU-dynamic` | aleph-void/Ghidra-VMU-Processor (fork of RossMeikleham/Ghidra-VMU-Processor) @ `7528a82f81`, MIT |
| `WE32100` | AT&T WE32100 | `WE32100:BE:32:default` | aleph-void/ghidra-we32100 (fork of fletto2/ghidra-we32100) @ `0324efb5cd`, MIT |
| `WonderSwan` | NEC V30MZ (WonderSwan) | `V30MZ:LE:16:default` | aleph-void/ghidra-wonderswan (fork of JidouGhost-TL/ghidra-wonderswan) @ `f499014b08`, Apache-2.0 |
| `XaviX` | XaviX | `XaviX:LE:24:default` | aleph-void/ghidra-xavix @ `8a94e7953b`, MIT |
| `CellSPU` | Cell SPU (PS3) | `SPU:BE:32:default` | aleph-void/GhidraSPU (fork of aerosoul94/GhidraSPU) @ `a2efc11569`, Apache-2.0 |
| `Falcon` | NVIDIA Falcon | `falcon:LE:32:v0`, `falcon:LE:32:v3`, `falcon:LE:32:v4`, `falcon:LE:32:v5`, `falcon:LE:32:v6` | aleph-void/ghidra_falcon (fork of marysaka/ghidra_falcon) @ `d835a7c618`, ISC |
| `TMS34010` | TI TMS34010 (GSP) | `tms34010:LE:32:default`, `tms34020:LE:32:default` | aleph-void/Ghidra_TMS34010 (fork of ZPaul2Fresh8/Ghidra_TMS34010) @ `271d988289`, Apache-2.0 |
| `TeakLite` | CEVA-TeakLite, CEVA OakDSP | `teak:LE:16:default`, `teak:LE:16:modulo`, `oakdsp:LE:16:default`, `oakdsp:LE:16:modulo` | aleph-void/TeakLite-SLEIGH (fork of SachinVin/TeakLite-SLEIGH) @ `32d05a51a3`, MIT; the OakDSP languages are generated from it by `tools/gen_oakdsp.py` (TeakLite II constructors restricted to Oak's encodings, checked against an Oak first-word map) |
| `RockwellL39` | Rockwell C39 / L39 | `RockwellL39:LE:16:default` | aleph-void/ghidra-rockwell-l39 @ `df9c28fdc1`, Apache-2.0 |
| `AdrenoQRISC` | Qualcomm Adreno SQE / QRISC | `QRisc:LE:32:a6xx`, `QRisc:LE:32:a7xx`, `QRisc:LE:32:a7xx_gen3`, `QRisc:LE:32:a8xx` | aleph-void/ida-adreno-qrisc (fork of locus-x64/ida-adreno-qrisc) @ `f5b3d0de28`, MIT |
| `PRU` | TI PRU / PRU-ICSS | `PRU:LE:32:v0`, `PRU:LE:32:v1`, `PRU:LE:32:v2`, `PRU:LE:32:v3`, `PRU:LE:32:v4` | aleph-void/Ghidra-Rare (PRU) @ `87cc554e33`, MIT |
| `MicroBlaze` | AMD/Xilinx MicroBlaze | `MicroBlaze:BE:32:default`, `MicroBlaze:LE:32:default`, `MicroBlaze:BE:64:default`, `MicroBlaze:LE:64:default` | aleph-void/Ghidra-Rare (MicroBlaze) @ `87cc554e33`, MIT |
| `xCORE` | XMOS xCORE | `xCORE:LE:32:XS3`, `xCORE:LE:32:XS2`, `xCORE:LE:32:XS1` | aleph-void/Ghidra-Rare (xCORE) @ `87cc554e33`, MIT |
| `C7x` | TI C7000 DSP | `C7x:LE:64:C7100`, `C7x:LE:64:C7120`, `C7x:LE:64:C7504`, `C7x:LE:64:C7524` | aleph-void/Ghidra-Rare (C7x) @ `87cc554e33`, MIT |
| `SASS` | NVIDIA GPU SASS | `SASS:LE:64:SM35`, `SASS:LE:64:SM52`, `SASS:LE:64:SM60`, `SASS:LE:64:SM70`, `SASS:LE:64:SM75`, `SASS:LE:64:SM80`, `SASS:LE:64:SM86`, `SASS:LE:64:SM89`, `SASS:LE:64:SM90`, `SASS:LE:64:SM100`, `SASS:LE:64:SM120` | aleph-void/Ghidra-Rare (SASS) @ `87cc554e33`, MIT |
| `Z8` | Zilog Z8 | `Z8:BE:16:default`, `Z8:BE:16:extstack` | aleph-void/Ghidra-Rare (Z8) @ `87cc554e33`, MIT |
| `ST9` | STMicro ST9 / ST9+ | `ST9:BE:16:default`, `ST9:BE:24:ST9+` | aleph-void/Ghidra-Rare (ST9) @ `87cc554e33`, MIT |
| `XA` | Philips/NXP XA | `XA:LE:24:default`, `XA:LE:24:page0` | aleph-void/Ghidra-Rare (XA) @ `87cc554e33`, MIT |
| `TMS320C2x` | TI TMS320C2x / C5x | `TMS320C2x:BE:16:default`, `TMS320C2x:LE:16:default`, `TMS320C5x:BE:16:default`, `TMS320C5x:LE:16:default` | aleph-void/Ghidra-Rare (TMS320C2x) @ `87cc554e33`, MIT |
| `RX` | Renesas RX (RXv1-v3) | `RX:LE:32:RXv1`, `RX:LE:32:RXv2`, `RX:LE:32:RXv3` | aleph-void/Ghidra-Rare (RX) @ `87cc554e33`, MIT |
| `i860` | Intel i860 | `i860:LE:32:XR`, `i860:LE:32:XP` | aleph-void/Ghidra-Rare (i860) @ `87cc554e33`, MIT |
| `ADSP218x` | Analog Devices ADSP-218x | `ADSP218x:BE:16:default` | aleph-void/Ghidra-Rare (ADSP218x) @ `87cc554e33`, MIT |
| `DSP56000` | Motorola DSP56000 / DSP56156 | `DSP56000:BE:16:default`, `DSP56000:BE:16:DSP56156` | aleph-void/Ghidra-Rare (DSP56000) @ `87cc554e33`, MIT |
| `IA64` | Intel IA-64 (Itanium) | `IA64:LE:64:default`, `IA64:BE:64:default`, `IA64:BE:32:default` | aleph-void/Ghidra-Rare (IA64) @ `87cc554e33`, MIT |
| `SH4ALDSP` | Renesas SH4AL-DSP | `SH4ALDSP:BE:32:default`, `SH4ALDSP:LE:32:default` | aleph-void/Ghidra-Rare (SH4ALDSP) @ `87cc554e33`, MIT |
| `TC32` | Telink TC32 (TLSR82xx/8x5x BLE SoCs) | `TC32:LE:32:default` | aleph-void/Ghidra-Rare (TC32) @ `87cc554e33`, MIT |
| `PXF` | Cisco PXF "Toaster" microcode (NSE-100) | `PXF:BE:16:NSE-100` | aleph-void/Ghidra-Rare (PXF) @ `87cc554e33`, MIT |
| `ESRL` | Sharp ESR-L | `ESR-L:LE:20:default` | benryves/GhidraESRL @ `baa1b81512`, MIT |
| `TopSM` | TI TopSM RF core | `topsm:LE:16:default` | antoniovazquezblanco/GhidraTopSM @ `3f45fd9d28`, MIT |
| `SH` | Renesas SuperH SH-2E/SH-3/SH-3E/SH-4A | `sh3:BE:32:default`, `sh3:LE:32:default`, `sh3e:BE:32:default`, `sh3e:LE:32:default`, `sh2e:BE:32:default` | aleph-void/ghidra-sh (fork of will07c5/ghidra-sh) @ `31c6ca03e9`, MIT |
| `M32R` | Renesas (Mitsubishi) M32R, M32RX, M32R2 | `M32R:BE:32:default` | written for unlace from the M32R software manuals and binutils CGEN `m32r.cpu` (semantics only); decode checked against `m32r-elf-objdump` 2.43.1, Apache-2.0 |
| `PDP11` | DEC PDP-11 (base set, EIS, MFPS/MTPS) | `PDP-11:LE:16:default` | written for unlace from the DEC PDP-11 handbooks, Apache-2.0 |
| `FR` | Fujitsu FR (FR30, FR60, FR80) | `FR:BE:32:default` | written for unlace from the Fujitsu FR instruction manual, binutils CGEN `fr30.cpu` and MAME `frdasm.cpp` (opcode map only); decode checked against `fr30-elf-objdump` 2.43.1, Apache-2.0 |
| `Moxie` | Moxie (moxielogic) | `moxie:BE:32:default`, `moxie:LE:32:default` | written for unlace from the Moxie architecture page and the binutils opcode table |
| `tricore` (TC1.8) | Infineon TriCore TC1.6.2/TC1.8 (AURIX TC3xx, TC4x) | `tricore:LE:32:tc18` | written for #98 from Infineon's TriCore TC1.8 architecture manual |
| `FT32` | FTDI FT32 (FT900/FT930) | `ft32:LE:32:default` | written for unlace from the FT32 documentation and the binutils opcode table |
| `M88000` | Motorola 88000 (MC88100) | `88000:BE:32:default` | written for unlace from the MC88100 User's Manual, Apache-2.0 |
| `RISCV` (T-Head) | RISC-V with the T-Head vendor extensions (XThead*) | `RISCV:LE:64:XThead`, `RISCV:LE:32:XThead` | written for #98 from T-Head's thead-extension-spec and LLVM's XTHead encodings |
| `Clipper` | Fairchild/Intergraph CLIPPER C100/C300 | `clipper:LE:32:default` | written for unlace from the CLIPPER C300 data book, Apache-2.0 |
| `ROMP` | IBM ROMP (RT PC) | `ROMP:BE:32:default` | written for unlace from the RT PC Hardware Technical Reference, Apache-2.0 |
| `FRV` | Fujitsu FR-V (FR400, FR450, FR500, FR550) | `FRV:BE:32:default` | written for unlace from the FR-V ISA manuals; decode table generated from binutils CGEN `frv-opc.c` (field layout and mask/value only); decode checked against `frv-elf-objdump` 2.43.1 on all 743 instructions, Apache-2.0 |
| `Nova` | Data General Nova (Nova 1200/800/2, Nova 3, Nova 4) | `Nova:BE:16:default` | written for unlace from the DG Nova programmer's references, Apache-2.0 |
| `SH5` | SuperH SH-5 (SHmedia) | `SH5:LE:64:SHmedia`, `SH5:BE:64:SHmedia` | written for unlace from the SH-5 CPU Core Architecture manual (SHmedia); decode checked against `sh64-elf-objdump` 2.29.1, Apache-2.0 |
| `ND100` | Norsk Data ND-100 (NORD-10, ND-110) | `ND100:BE:16:default` | written for unlace from the ND-100 Reference Manual (ND-06.014.02), Apache-2.0 |
<!-- vendor-rows -->

### Data General Nova (#98)

`specs/Ghidra/Processors/Nova` is a SLEIGH module written for unlace from Data
General's Nova programmer's references (no prior SLEIGH existed):
`Nova:BE:16:default`. Memory is word addressed. An operate instruction is one
constructor per ALU function and shift: the carry out is a comparison, the
17-bit rotate goes through carry, and the no-load flag and the skip condition
are tested on the shifted result, so a `SUBZ#` with a carry skip folds to a C
comparison. `JSR` links in AC3 and `JMP 0,3` returns; the Nova 3 `SAV`/`RET`
frame lives on an upward-growing stack. Device I/O is a user op. Exercised by
`unlace-cli/tests/nova_raw.rs` (hand-assembled add, unsigned max, page-zero
load/store, rotate and Nova 3 frame-call routines decompile to the expected C).

### SuperH SH-5 SHmedia (#98)

`specs/Ghidra/Processors/SH5` is a SLEIGH module written for unlace from the
SuperH SH-5 CPU Core Architecture manual (no prior SLEIGH existed):
`SH5:LE:64:SHmedia` and `SH5:BE:64:SHmedia`, the 32-bit SHmedia instruction set.
Branches go through the eight target registers: `pta`/`ptb`/`ptabs`/`ptrel` load
one and the conditional branches and `blink` use it. The target a `pta` loads is
tracked in the decode context along the flow (cleared when a target register is
rewritten, after a call and at a return), so `pta label,tr0; blink tr0,r18` is a
direct call; `ptabs r18,trN; blink trN,r63` returns. r63 reads as zero; the
multimedia, matrix and cache instructions are user ops; SHcompact is not decoded.
The decode agrees with `sh64-elf-objdump` (binutils 2.29.1) on a 6,639-word probe
except the reserved odd FP register forms. Exercised by the `sh5` and `sh5-be`
families of `unlace-cli/tests/processors.toml` (add, signed max, absolute load,
direct call and float add routines built with `sh64-elf-as`).

### Norsk Data ND-100 (#98)

`specs/Ghidra/Processors/ND100` is a SLEIGH module written for unlace from the
ND-100 Reference Manual (ND-06.014.02); the only prior SLEIGH carries no licence
and was not opened: `ND100:BE:16:default`. Memory is word addressed. Memory
reference instructions take the eight ,X / I / ,B modes relative to the
instruction's own address; ROP is one constructor per sub-instruction code of
the manual's table (CLD, CM1, AD1, ADC, RAD), a P destination jumps and `EXIT`
(COPY SL DP) returns; JPL links in L. SKP tests dr - sr; the status flags are
registers for the bit operations. The ND 48-bit floating point, I/O and system
instructions are user ops. Exercised by the `nd100` family of
`unlace-cli/tests/processors.toml` (hand-assembled add, signed max, P-relative
load/store, call, shift and add-argument routines).

### Rabbit 4000 / 5000 / 6000 (#98)

`Rabbit4000:LE:16:default` and `Rabbit6000:LE:16:default` extend the Rabbit module
(`rabbit.sinc` under `@define R4000` / `R6000`). On the 4000, LD r,g and the 8-bit ALU on
a register or (HL) take the 7F prefix (a context bit the prefix sets), and the freed
single-byte opcodes, the 6D page and new ED/DD/FD rows carry the 32-bit BCDE/JKHL
registers, the PW-PZ pointer registers, 24-bit LDF accesses and the GT/GTU/LT/V
conditions; the 5000 has the same set. A pointer-register access goes to the physical
space unless the upper 16 bits are all ones (a long logical address), so an LDL-loaded
constant pointer folds to the logical global. The 6000 adds the 49 page (ALU with
pointer and stack operands, pointer block moves, SHA/MD5 round functions, register-chain
shifts), SWAP, TSTNULL, MUL/MULU HL,DE and the ALTS/ALTSD prefixes (ALTS sources are not
modelled). Every single-instruction line of z88dk's r4k and r6k tables decodes to the
same instruction. Exercised by the `rabbit4000` row of `unlace-cli/tests/processors.toml`.

### Toshiba TLCS-870/C (#98)

`TLCS870C:LE:16:default` (`specs/Ghidra/Processors/TLCS870/data/languages/tlcs870c.slaspec`)
is the TMP86 core: the TLCS-870 mnemonics with a new encoding, seven 16-bit registers and the
SF/VF flags. Instructions are an optional prefix (source memory E0-E7/D4-D7/4F, destination
memory F0-F7/54-57, register E8-EF) and a second opcode byte; each prefix group is its own
subtable so the decoder resolves the second byte. Encodings follow Toshiba's TLCS-870/C
instruction-set excerpt and were checked against the 4,212 encodings of the AS assembler's
TLCS-870/C test (two AS deviations from the manual are corrected; see the README). Exercised
by the `tlcs870c` row of `unlace-cli/tests/processors.toml`.

### IBM ROMP (#98)

`specs/Ghidra/Processors/ROMP` is a SLEIGH module written for unlace from the IBM
RT PC Hardware Technical Reference (no prior SLEIGH existed):
`ROMP:BE:32:default`. Branches test one bit of the condition status (LT, EQ,
GT, C, OV, TB, and bit 8, the permanent zero that makes `bnb` unconditional);
the "with execute" forms run the next instruction as a delay slot. The cspec
follows the RT linkage (arguments r2-r5, result r2, link r15, stack r1).
Exercised by `unlace-cli/tests/romp_raw.rs` (hand-assembled add, signed max,
absolute load and branch-with-execute call routines decompile to the expected
C).


### CLIPPER (#98)

`specs/Ghidra/Processors/Clipper` is a SLEIGH module written for unlace from the
CLIPPER C300 data book (no prior SLEIGH existed): `clipper:LE:32:default`. An
instruction is one to four 16-bit parcels; the eight address modes put the
data register (or branch condition) in the first or second parcel, which the
`gd`, `fsr`, `fdr` and `ec` subtables follow. `call` pushes the return
address on the named stack register (r15 under CLIX) and `ret` pops it; the
cspec passes the first two arguments in r0/r1 (f0/f1) and returns in r0/f0.
Exercised by `unlace-cli/tests/clipper_raw.rs` (hand-assembled add, signed
max, absolute load and call routines decompile to the expected C).


### Motorola 88000 (#98)

`specs/Ghidra/Processors/M88000` is a SLEIGH module written for unlace from the
MC88100 RISC Microprocessor User's Manual (no prior SLEIGH existed):
`88000:BE:32:default`. `cmp` writes the manual's condition bit vector, which
`bb0`/`bb1` test, so a compare-and-branch folds into a C comparison; the
`.n` forms of br, bsr, bb0, bb1, bcnd, jmp and jsr carry a one-instruction
delay slot; r0 reads as zero; doubles live in register pairs. The cspec follows
the 88open BCS (arguments r2-r9, result r2, return address r1, stack r31).
Exercised by `unlace-cli/tests/m88k_raw.rs` (hand-assembled add, signed max,
absolute load and delay-slot call routines decompile to the expected C).


### DEC PDP-11 (#98)

`specs/Ghidra/Processors/PDP11` is a SLEIGH module written for unlace from the
DEC PDP-11 Processor and Architecture Handbooks (no prior SLEIGH existed):
`PDP-11:LE:16:default`. The destination operand's mode and register are
copied into the decode context so its extension word decodes after the
source's; N, Z, V and C follow the handbook per instruction; JSR with the PC
link is a call, and the cspec passes arguments on the stack above the return
address and returns in R0 (R0:R1 for 32 bits). FP11 floating point decodes as
one user op. Exercised by `unlace-cli/tests/pdp11_raw.rs` (hand-assembled add
and signed max routines decompile to the expected C).


### x86-64 APX: REX2 and EVEX map 4 (#98)

`specs/Ghidra/Processors/x86/data/languages/apx.sinc` adds Intel APX to
`x86:LE:64:*` (Intel APX Architecture Specification 355828-009): the extended
GPRs `R16`-`R31` under the REX2 prefix (`D5`, map 0 and, with M0=1, map 1,
whose constructors `apx_rex2map1.sinc` repeats under the REX2 key), and the
legacy instructions promoted to EVEX map 4 in `apx_map4.sinc`: new data
destination (EVEX.ND writes the V4:vvvv register), no-flags forms (EVEX.NF
drops the flag writes), CCMPscc/CTESTscc (a false source condition loads OF,
SF, ZF and CF from the dfv bits), CMOVcc NDD and CFCMOVcc (the memory access
happens only on a true condition), SETcc.zu and IMUL.zu, PUSH2/POP2 with the
PPX hint, and JMPABS. The 32-bit and 16-bit x86 languages are unchanged: in
64-bit mode `D5` was AAD, which is invalid there, so a REX2 prefix was a bad
instruction before, as was every map-4 instruction. Both generated files come
from `scripts/gen_x86_apx.py`. Exercised by `unlace-cli/tests/x86_apx.rs`:
a probe of each APX form against `llvm-objdump` and an LLVM-assembled raw
image whose functions (PUSH2/POP2 around an NDD multiply-add, a CCMP chain,
a CFCMOV load, EGPR addressing, an NF add between a CMP and its SETcc)
decompile to the expected C. Coverage and gaps are in
`specs/Ghidra/Processors/x86/README.md`.

The other EVEX maps reach the EGPRs too: the 64-bit EVEX prefix in `ia.sinc`
accepts the X4 and B4 bits (inverted P1 bit 2 and P0 bit 3, which AVX-512
required to be 1 and 0) and sets the fifth register-id bits from them and from
EVEX.R', so AVX-512 memory operands and GPR operands can name `R16`-`R31`;
encodings AVX-512 accepted decode as before. `apx_evex.sinc` adds the EVEX
forms of the VEX GPR instructions (BMI1, BMI2, KMOV, the AMX tile loads and
stores and tile configuration), with the `.NF` forms of the flag-writing BMI
instructions, and `apx_map4.sinc` the map-4 forms of MOVDIR64B, MOVDIRI,
INVEPT, INVVPID, INVPCID and the CET shadow-stack writes. Before, each of these
with an EGPR was a bad instruction. Exercised by `x86_apx.rs` (an
`evex_probe` against `llvm-objdump`, and an EVEX ANDN/SHRX routine that
decompiles to `(~a1 & a0) >> (a2 & 0x3f)`).

### x86 ENQCMD and CMPccXADD (#98)

`ia.sinc` decodes ENQCMD and ENQCMDS (F2/F3 0F 38 F8) in every x86 language:
the 64-byte enqueue store is a user operation whose result is ZF (the retry
status), with OF SF AF PF CF cleared. `cmpccxadd.sinc` adds CMPccXADD to
`x86:LE:64:*` (VEX E0+cc, and its APX EVEX form in `apx_evex.sinc`): the old
memory value is compared with the first register as CMP does, the sum with the
second register is stored only when the condition holds, and the first register
gets the old value, so a `cmpexadd` decompiles to the compare-and-add it is.
Before, each was a bad instruction. The EVEX-promoted GPR forms in
`apx_evex.sinc` now also leave a disp8 uncompressed (N=1); before, they took
the AVX-512 scaling of whatever tuple context was current. Exercised by the
`x86_64_cmpccxadd` row of `unlace-cli/tests/processors.toml`.

### x86 legacy/VEX fixes from the native oracle (#98)

Checking SSE, VEX and integer instructions against this CPU (`tools/difffuzz --oracle native`)
fixed: a REX.X or VEX.X bit no longer extends a ModRM.rm vector register to XMM16-31 (only EVEX's
does); the VEX scalar add/subtract/multiply keep bits 127:32/127:64 from the first source; 34 VEX
scalar instructions ignore VEX.L; `lzcnt` with one register as source and destination takes CF from
the source; `extractps m32` stores four bytes and `pinsrb` reads one. GFNI (legacy and VEX), the
VEX.256 VAES and VPCLMULQDQ forms and AVX-NE-CONVERT decode (`gfni_vaes.sinc`, `avx_ne_convert.sinc`).
Exercised by the `x86_64_native_oracle` row of `unlace-cli/tests/processors.toml`.

### x86 MOV DRn mod and VFPCLASSPH/SH display (#98)

`MOV DRn, r64` decodes whatever ModRM.mod holds (the SDM says the field is ignored), as the
other debug- and control-register moves did; before, `0f 23` with mod != 3 was a bad
instruction. `vfpclassph`/`vfpclasssh` print their class mask as an immediate, as `vfpclassps`
and LLVM do. `66 0f 52/53` and `extrq` with ModRM.reg != 0 stay undecoded: both manuals leave them
undefined and the difffuzz reference raises #UD. Exercised by the `x86_64_movdr_mod` row of
`unlace-cli/tests/processors.toml`.

### x86 AVX-512 {sae} and embedded rounding (#98)

An EVEX register form with EVEX.b=1 is 512 bits wide (or scalar), and its L'L field is the
rounding mode. A pre-parse in `ia.sinc` records L'L in `evexRcMode`, sets `evexRcOn` and decodes
the instruction again with L'L=10; `avx512_round.sinc` (generated by
`tools/gen_x86_avx512_round.py` from LLVM's 301 EVEX.b register records) adds the `{sae}`/
`{rn-sae}`..`{rz-sae}` constructors keyed on `evexRcOn`. Before, the rounding mode was read as a
vector length, so `vaddps zmm0, zmm0, zmm1, {rz-sae}` lifted as a 256-bit add. The 16-bit
language has no pre-parse (its high context bits hold the real-mode CS). Exercised by the
`x86_64_avx512_round` row of `unlace-cli/tests/processors.toml`.

### x86 AVX-512 Disp8*N from LLVM (#98)

The compressed displacement of 134 AVX-512 constructors (sub-vector broadcasts, inserts and
extracts, `vpmov[sz]x`, byte/word expand and compress, scalar FP16, ...) comes from LLVM's
`CD8_Scale`, and a few constructors gained their missing immediate or the right memory size.
Before, a disp8 in these was scaled by the wrong N, so `vpbroadcastb zmm0, [rdi + 1]` read
`[rdi + 4]`. `tools/x86_avx512_sweep.py` reruns the comparison against `llvm-objdump`.
Exercised by the `x86_64_avx512_disp8` row of `unlace-cli/tests/processors.toml`.

### x86 prefix, BSF/BSR and MOVSXD fixes (#548)

Found by `tools/difffuzz`. In 64-bit mode a REX prefix that another prefix (a
legacy prefix or a second REX) follows is ignored, as the CPU does: before, the
REX constructor moved decoding past the prefix phase and the encoding was a bad
instruction (about 2% of random encodings, none from compilers). 3DNow! decodes
after a REX too. BSF and BSR with a zero source set ZF and leave the
destination unchanged (the manual calls it undefined; CPUs keep it), where
before they wrote the bit index of their search loop. `66 63 /r` decodes as
`movsxd r16, r/m32` (the low word of the source). Exercised by the
`x86_64_issue548` row of `unlace-cli/tests/processors.toml`.

### x86 AVX-512 base-spec decode fixes (#98)

Four wrong AVX-512 decodes in the Ghidra-derived tables are fixed in every x86
language. VPBROADCASTB/W/D/Q from a GPR now read their `Rmr32`/`Rmr64` source
(before, the operand was missing and the lift called the user operation with no
input). The EVEX gathers and scatters address through the VSIB tables, with
EVEX.V' selecting index registers 16-31, so `vpgatherdd zmm0{k1}, [rdi +
4*zmm1 + 64]` lifts to the vector-indexed address (before, RCX was used as a
scalar index). A memory broadcast prints `{1toN}`. Disp8*N is right for 16-bit
broadcast elements: three tuple rows in `ia.sinc` (full, half and quarter
vector with a word broadcast) give N, and the register-or-memory operand tables
no longer evaluate `evexDisp8N` a second time, which had read tuple bits the
first evaluation overwrote. Exercised by `unlace-cli/tests/x86_avx10.rs`
(`base_fixes`) and the `x86_64_avx512_base` row of `processors.toml`.

### x86-64 AVX10.2 (#98)

`specs/Ghidra/Processors/x86/data/languages/avx10_2.sinc` decodes AVX10.2 in
every x86 language (`x86:LE:64:*`, the 32-bit and, without the 256-bit {sae}
forms, the 16-bit ones): every LLVM TableGen record with a `HasAVX10_2*` predicate (2326
records, 123 mnemonics: BF16 arithmetic, FP8 conversions, saturating
conversions, `vminmax*`, `vcomx*`, `vmpsadbw`, the EVEX VNNI-INT8/INT16 dot
products, MOVRS, SM4, the AMX-AVX512 row moves), plus the VEX AVX-VNNI-INT8/INT16
and SM4 forms. It is generated by `tools/gen_x86_avx10.py`, which folds the plain,
masked and broadcast records of a form into one constructor in the style of
`avx512.sinc` and takes Disp8*N from LLVM's `CD8_Scale`; the {sae}/{rc} register
forms are separate constructors (EVEX.b=1, L'L the rounding mode, EVEX.U=0 the
256-bit {sae} forms). Each instruction lifts to a user operation named after its
mnemonic (`avx10_vminmaxpd`) through the base masking tables, except that
`vmovrs*` are masked loads, `vmovd`/`vmovw` zero-extending moves, and the
`vcomx`/`vucomx`/`vcomisbf16` compares set EFLAGS as the AVX10.2 specification
gives them, so `vcomxsd; seta` decompiles to `return a1 < a0;`. Before, each
was a bad instruction. Exercised by `unlace-cli/tests/x86_avx10.rs`: a probe
of every plain, broadcast and {sae}/{rc} record against its checked listing
(`fixtures/x86_avx10/probe.txt`) and routines whose C is checked. Details in
`specs/Ghidra/Processors/x86/README.md`.

### Processor modules written for unlace (#98)

These processor directories hold SLEIGH written for unlace from public ISA documentation
(no prior SLEIGH, or only an unlicensed one that was not consulted). Each directory's README
lists its sources, what the p-code models and the gaps. They are compiled and counted like
the vendored modules, and each has a CLI test that decompiles a small raw image.

| Directory | Processors | Languages | Sources | Test |
|---|---|---|---|---|
| `CHIP8` | CHIP-8 (COSMAC VIP) and SUPER-CHIP 1.1 | `CHIP8:BE:16:VIP`, `CHIP8:BE:16:SCHIP` | COSMAC VIP manual, SUPER-CHIP 1.1 notes | `unlace-cli/tests/chip8.rs` |
| `HuC6280` | Hudson Soft HuC6280 (PC Engine) | `HuC6280:LE:16:default` | 65C02 and HuC6280 instruction descriptions, MAME `h6280` | `unlace-cli/tests/huc6280.rs` |
| `4004` | Intel 4004 / 4040 | `4004:LE:16:default` | Intel MCS-4 and MCS-40 Users Manuals | `unlace-cli/tests/i4004_raw.rs` |
| `uPD7725` | NEC uPD7725 / uPD96050 DSP | `uPD7725:LE:16:default`, `uPD96050:LE:16:default` | NEC uPD7725 data sheet, necdsp notes, MAME `upd7725` | `unlace-cli/tests/upd7725.rs` |
| `KR1878` | Angstrem KR1878VE1 (TESEY core) | `KR1878:LE:16:default` | ChipNews 2000/1 instruction table, Angstrem datasheet | `unlace-cli/tests/kr1878_raw.rs` |
| `Moxie` | Moxie (moxielogic) | `moxie:BE:32:default`, `moxie:LE:32:default` | Moxie architecture page, binutils `moxie` opcode table | `unlace-cli/tests/moxie_raw.rs` |
| `FT32` | FTDI FT32 (FT900/FT930) | `ft32:LE:32:default` | FT32 programmer documentation, binutils `ft32` opcode table, GCC `config/ft32` | `unlace-cli/tests/ft32_raw.rs` |
| `NiosII` | Altera/Intel Nios II (R1) | `nios2:LE:32:R1`, `nios2:BE:32:R1` | Nios II Processor Reference Guide and ABI, binutils 2.43 `nios2` opcode table | `unlace-cli/tests/nios2_raw.rs` |
| `2650` | Signetics 2650 / 2650A / 2650B | `2650:BE:16:default` | Signetics 2650 Microprocessor manual, 2650 data sheet | `unlace-cli/tests/s2650_raw.rs` |
| `MeP` | Toshiba MeP-c4 core, both byte orders | `MeP:BE:32:default`, `MeP:LE:32:default` | binutils `cpu/mep-core.cpu` (CGEN), GCC `mep.h` | `unlace-cli/tests/mep.rs` |
| `V810` | NEC V810 (Virtual Boy, PC-FX) | `V810:LE:32:default` | NEC uPD70732 user's manual, Virtual Boy development manual, MAME `v810` | `unlace-cli/tests/v810.rs` |
| `Lua` | Lua 5.1, 5.2, 5.3 and 5.4 VM bytecode (one function's code array) | `Lua:LE:32:5.1`, `Lua:LE:32:5.2`, `Lua:LE:32:5.3`, `Lua:LE:32:5.4` | each release's `lopcodes.h`/`lvm.c` (MIT), reference manual; oracle `luac -l` of 5.1.5, 5.2.4, 5.3.6, 5.4.8 | `unlace-cli/tests/lua54.rs`, `processors.toml` (`lua5x`) |
| `CDP1802` | RCA CDP1802 COSMAC | `CDP1802:BE:16:default`, `CDP1802:BE:16:SCRT` | RCA CDP1802 data sheet, User Manual MPM-201 | `unlace-cli/tests/cdp1802_raw.rs` |
| `IQ2000` | Vitesse IQ2000 | `iq2000:BE:32:default` | binutils CGEN `cpu/iq2000.cpu` and `cpu/iq2000m.cpu`, GCC `config/iq2000` | `unlace-cli/tests/iq2000_raw.rs` |
| `SCMP` | National SC/MP, INS8060 SC/MP II | `SCMP:LE:16:default` | National SC/MP Technical Description, INS8060 data sheet | `unlace-cli/tests/scmp_raw.rs` |
| `KonamiCPU` | KONAMI CPU (052001/052526/053248, Konami-2) | `KONAMI:BE:16:default` | MC6809 programming manual, MAME `konami` (opcode map and postbyte) | `unlace-cli/tests/konami.rs` |
| `Uxn` | Uxn virtual machine (Varvara ROMs) | `Uxn:BE:16:default` | Uxntal reference (opcode table and modes) | `unlace-cli/tests/uxn.rs` |
| `Visium` | Visium (CDS GR5/GR6) | `visium:BE:32:default` | binutils `visium` opcode table and disassembler, GCC `config/visium` | `unlace-cli/tests/visium_raw.rs` |
| `TMS320C3x` | TI TMS320C3x (C30/C31/C32/C33) and the C3x core of the C4x | `TMS320C3x:LE:32:default` | TI TMS320C3x User's Guide (SPRU031), TMS320C4x User's Guide (SPRU063), binutils `tic4x` opcode table | `unlace-cli/tests/tms320c3x_raw.rs` |
| `TMS9900` | TI TMS9900 | `TMS9900:BE:16:default` | TI TMS9900 Microprocessor Data Manual, TMS9900 Family System Development Manual | `unlace-cli/tests/tms9900_raw.rs` |
| `Blackfin` | Analog Devices Blackfin (ADSP-BF5xx, BF6xx) | `Blackfin:LE:32:default` | Blackfin Processor Programming Reference rev 2.2, binutils `bfin.h` layouts; checked against `bfin-elf-objdump` | `unlace-cli/tests/blackfin_raw.rs` |
| `Epiphany` | Adapteva Epiphany | `epiphany:LE:32:default` | Epiphany Architecture Reference, binutils CGEN `cpu/epiphany.cpu`, GCC `config/epiphany` | `unlace-cli/tests/epiphany_raw.rs` |
| `uPD7810` | NEC uPD7810 / 7811 / 78C10 / 78C11 / 78C14 | `uPD7810:LE:16:default` | NEC uPD7810/7811 user's manual, MAME `upd7810` tables | `unlace-cli/tests/upd7810.rs` |
| `sBPF` | Solana sBPF (SBPFv0/v1 and SBPFv2) | `sBPF:LE:64:v1`, `sBPF:LE:64:v2` | anza-xyz/sbpf `doc/bytecode.md`, RFC 9669; syscall hashes labelled | `unlace-cli/tests/sbpf.rs` |
| `TLCS90` | Toshiba TLCS-90 (TMP90C840, TMP90C841, TMP90C844) | `TLCS90:LE:16:default` | Toshiba TLCS-48/90 data book (1988); MAME tlcs90 core | `unlace-cli/tests/tlcs90_raw.rs` |
| `SAM8` | Samsung SAM8 (S3C8/S3F8), SAM88RCRI (S3C9/S3F9) | `SAM8:BE:16:default`, `SAM88RCRI:BE:16:default` | Samsung S3C8-series user's manual ch. 6 (instruction set), S3C9454B/F9454B user's manual | `unlace-cli/tests/processors.toml` (`sam8`) |
| `EVM` | Ethereum Virtual Machine bytecode, Cancun opcode set | `EVM:BE:32:Cancun` | Ethereum Yellow Paper appendix H, evm.codes opcode reference, EIPs 145/1153/3855/4844/5656/7516 | `unlace-cli/tests/evm.rs` |
| `Rabbit` | Rabbit Semiconductor Rabbit 2000 / 3000A / 4000 / 5000 / 6000 | `Rabbit2000:LE:16:default`, `Rabbit3000:LE:16:default`, `Rabbit4000:LE:16:default`, `Rabbit6000:LE:16:default` | Rabbit 2000/3000 Instruction Reference Manual and Rabbit Family Instruction Reference (019-0098), Rabbit 6000 instruction spreadsheet, Rabbit User's Manuals, Dynamic C docs; 4000/6000 checked against z88dk's r4k/r6k tables | `unlace-cli/tests/processors.toml` (`rabbit`, `rabbit4000`) |
| `Lanai` | Lanai v11 (Myricom, Google) | `lanai:BE:32:default` | LLVM Lanai backend (`LanaiInstrFormats.td` format descriptions, `LanaiInstrInfo.td`, `LanaiCallingConv.td`) | `unlace-cli/tests/processors.toml` (`lanai`) |
| `META` | Imagination Technologies META (Meta 1.1, 1.2, 2.1): GP, FPU and DSP instructions | `META:LE:32:default` | binutils `include/opcode/metag.h` and `opcodes/metag-dis.c` field layouts, Linux `arch/metag` ABI; checked against `metag-linux-gnu-objdump` | `unlace-cli/tests/processors.toml` (`meta`, `meta_fpu`, `meta_dsp`) |
| `S1C` | Epson S1C17 and S1C33000 cores | `S1C17:LE:24:default`, `S1C33:LE:32:default` | Epson S1C17 Core Manual Rev. 1.2, S1C33000 Core CPU Manual, S1C17 Startup Manual, S1C33 Application Note | `unlace-cli/tests/s1c_raw.rs` |
| `ST20` | Inmos/ST ST20-C2 and ST20-C4 integer cores | `ST20:LE:32:default` | ST20C2/C4 Core Instruction Set Reference Manual (72-TRN-273-01), transputer compiler writer's guide | `unlace-cli/tests/processors.toml` (`st20`) |
| `TILEGX` | Tilera TILE-Gx (TILE-Gx8000 family), parallel X/Y-mode bundles | `TILEGX:LE:64:default` | TILE-Gx ISA reference (UG401); encodings generated from the binutils `tilegx` opcode table by `tools/gen_tilegx_sleigh.py`; checked against `tilegx-linux-gnu-objdump` | `unlace-cli/tests/processors.toml` (`tilegx`) |
| `TILEPRO` | Tilera TILEPro (TILEPro32/TILEPro64, TILE64), parallel X/Y-mode bundles | `TILEPRO:LE:32:default` | TILEPro ISA reference (UG120); encodings generated from the binutils `tilepro` opcode table by `tools/gen_tilepro_sleigh.py`; checked against `tilepro-linux-gnu-objdump` | `unlace-cli/tests/processors.toml` (`tilepro`) |
| `CSKY` | C-SKY ABIv2 (CK801-CK860): integer ISA, FPUv2, FPUv3, VDSP, DSP, DSP-enhance; ABIv1 (CK510, CK610) | `CSKY:LE:32:v2`, `CSKY:BE:32:v2`, `CSKY:LE:32:ck810v`, `CSKY:LE:32:ck860`, `CSKY:LE:32:v1`, `CSKY:BE:32:v1` | C-SKY V2 instruction set manual; encodings from the binutils `csky-opc.h` table (FPU, VDSP, DSP and DSP-enhance generated by `tools/gen_csky_ext_sleigh.py`); checked against `csky-elf-objdump` | `unlace-cli/tests/processors.toml` (`csky`, `csky_fpuv2`, `csky_fpuv3`, `csky_vdsp`, `csky_dsp`, `csky_edsp`, `csky_abiv1`) |
| `V60` | NEC V60 (uPD70616), V70 (uPD70632) | `V60:LE:32:default` | NEC V60/V70 user's manuals (instruction formats, addressing modes); MAME `v60` disassembler as length oracle | `unlace-cli/tests/processors.toml` (`v60*`) |
| `PowerPC` (Gekko) | IBM Gekko / Broadway (PowerPC 750CL) paired singles | `PowerPC:BE:32:Gekko` | IBM PowerPC 750CL User's Manual (paired-single chapter); checked against `powerpc-elf-objdump -M gekko` 2.43.1 | `unlace-cli/tests/ppc_gekko.rs` |
| `PowerPC` (SPE2) | NXP e200z4/e200z7 with SPE2 and EFS2 | `PowerPC:BE:32:e200-SPE2` | binutils PowerPC opcode table (SPE2/EFS2 rows), SPE2 intrinsic names; checked against `powerpc-elf-objdump` 2.43.1 | `unlace-cli/tests/ppc_spe2.rs` |
| `M16C` (`M32C_80`) | Renesas M32C/80 (M16C/80 set plus `MUL.L`, `DIV*.L`, `SHANC.L`, `SHLNC.L`) | `M32C/80:LE:24:default` | Renesas M32C/80 Series Software Manual REJ09B0319; checked against `m32c-elf-as` 2.43.1 | `unlace-cli/tests/m32c_raw.rs` |
| `Propeller` | Parallax Propeller 1 (P8X32A) cog | `propeller:LE:16:default` | Propeller Manual v1.2 assembly reference, P8X32A datasheet opcode matrix | `unlace-cli/tests/processors.toml` (`propeller`) |
| `MIPS` (MIPS-3D, SmartMIPS) | MIPS64 with MIPS-3D, MIPS32 with SmartMIPS (pre-R6 languages) | existing `MIPS:*:64:*` and `MIPS:*:32:*` pre-R6 languages | binutils MIPS opcode table (MIPS-3D/SmartMIPS rows), MIPS-3D (MD00099) and SmartMIPS ASE specifications; checked against `mips-elf-objdump` 2.43.1 | `unlace-cli/tests/mips_ase.rs` |
| `NFP` | Netronome NFP-6xxx flow-processor microengine (ME v2.8, 8 contexts) | `NFP:LE:32:ME28` | binutils `opcodes/nfp-dis.c` and `include/opcode/nfp.h` field layouts; checked against binutils objdump (`elf64-nfp`) | `unlace-cli/tests/nfp_raw.rs` |
| `TLCS870` | Toshiba TLCS-870 (TMP87xx) | `TLCS870:LE:16:default` | Toshiba TLCS-870 data books; MAME tlcs870 (BSD-3) | `unlace-cli/tests/processors.toml` (`tlcs870`) |
| `TLCS870` (870/C) | Toshiba TLCS-870/C (TMP86xx) | `TLCS870C:LE:16:default` | Toshiba TLCS-870/C Series Instruction Set (INST-1..23, 1999); encodings checked against the AS assembler's TLCS-870/C test table | `unlace-cli/tests/processors.toml` (`tlcs870c`) |
| `MMIX` | Knuth MMIX | `MMIX:BE:64:default` | MMIXware (Knuth), binutils `mmix` opcode table, GCC `config/mmix` ABI | `unlace-cli/tests/processors.toml` (`mmix`) |
| `Z8000` | Zilog Z8002 (non-segmented), Z8001 (segmented) | `Z8002:BE:16:default`, `Z8001:BE:32:segmented` | Zilog Z8000 CPU Technical Manual + PLZ/ASM manual; MAME z8000 (BSD-3) cross-check; tgtakaoka/libasm (Apache-2.0) | `unlace-cli/tests/processors.toml` (`z8000`) |
| `Z380` | Zilog Z380 (Native/Extended, Word/Long Word, DDIR W/LW/IB/IW) | `Z380:LE:32:default` | Zilog Z380 User's Manual DC-8297-03 (Appendix C opcode tables); flag macros adapted from the in-repo Z80 module | `unlace-cli/tests/processors.toml` (`z380`) |
| `VAX` | DEC VAX (base, G/H floating and vector encodings) | `VAX:LE:32:default` | VAX Architecture Reference Manual; MAME `vax` disassembler (opcode table, length oracle) | `unlace-cli/tests/processors.toml` (`vax_*`) |
| `Xtensa` (ESP32-S3 PIE) | Xtensa LX7 with the ESP32-S3 Processor Instruction Extensions (`EE.*`) | `Xtensa:LE:32:esp32s3` | Espressif LLVM `XtensaS3DSPInstrInfo.td` (encodings, generated), ESP32-S3 TRM PIE chapter | `unlace-cli/tests/processors.toml` (`xtensa_esp32s3_pie_*`) |
| `Xtensa` (HiFi 4, NXP i.MX RT700) | Xtensa LX7 with the Cadence HiFi 4 DSP: FLIX bundles and `AE_*` operations | `Xtensa:LE:32:hifi4_rt700` | Zephyr SDK overlay `xtensa_nxp_rt700_hifi4` `xtensa-modules.c` (Cadence, generated by `tools/gen_xtensa_hifi.py`); checked against the overlay's objdump | `unlace-cli/tests/processors.toml` (`xtensa_hifi4_rt700`) |
| `Xtensa` (HiFi 1, NXP i.MX RT700) | Xtensa LX7 with the Cadence HiFi 1 DSP: FLIX bundles and `AE_*` operations | `Xtensa:LE:32:hifi1_rt700` | Zephyr SDK overlay `xtensa_nxp_rt700_hifi1` `xtensa-modules.c` (Cadence, generated by `tools/gen_xtensa_hifi.py`); checked against the overlay's objdump | `unlace-cli/tests/processors.toml` (`xtensa_hifi1_rt700`) |
| `Xtensa` (HiFi 3, Intel Tiger Lake) | Xtensa LX6 with the Cadence HiFi 3 DSP (cAVS 2.5): FLIX bundles and `AE_*` operations | `Xtensa:LE:32:hifi3_tgl` | Zephyr SDK overlay `xtensa_intel_tgl_adsp` `xtensa-modules.c` (Cadence, generated by `tools/gen_xtensa_hifi.py`); checked against the overlay's objdump | `unlace-cli/tests/processors.toml` (`xtensa_hifi3_tgl`) |
| `Xtensa` (HiFi 5, MediaTek MT8196) | Xtensa LX7 with the Cadence HiFi 5 DSP: FLIX bundles and `AE_*` operations | `Xtensa:LE:32:hifi5_mt8196` | Zephyr SDK overlay `xtensa_mtk_mt8196_adsp` `xtensa-modules.c` (Cadence, generated by `tools/gen_xtensa_hifi.py`); checked against the overlay's objdump | `unlace-cli/tests/processors.toml` (`xtensa_hifi5_mt8196`) |
| `eZ80` | Zilog eZ80 (eZ80Acclaim! eZ80F91/F92/F93/L92, eZ80190), ADL and Z80 modes | `eZ80:LE:24:ADL`, `eZ80:LE:24:Z80` | Zilog UM0077/UM0080; MAME z80 (BSD-3); libasm (Apache-2.0); binutils z80-dis.c read to cross-check encodings only | `unlace-cli/tests/processors.toml` (`ez80`) |
| `eZ80` | Zilog eZ80 (eZ80Acclaim! eZ80F91/F92/F93/L92, eZ80190), ADL and Z80 modes | `eZ80:LE:24:ADL`, `eZ80:LE:24:Z80` | Zilog UM0077/UM0080; MAME z80 (BSD-3); libasm (Apache-2.0); binutils z80-dis.c read to cross-check encodings only | `unlace-cli/tests/ez80_raw.rs` |
| `AMDGPU` | AMD GCN5 (Vega, gfx900-gfx908), CDNA 2/3 (gfx90a, gfx942: MFMA and AGPRs), RDNA 1/2 (gfx10), RDNA 3 (gfx11) and RDNA 4 (gfx12) shader ISAs, one-lane lift (RDNA wave32, and wave64 with 64-bit lane masks; gfx11 true16 halves, VOP3P/WMMA and MIMG from generated includes) | `AMDGPU:LE:64:GFX9`, `AMDGPU:LE:64:GFX90A`, `AMDGPU:LE:64:GFX942`, `AMDGPU:LE:64:GFX10`, `AMDGPU:LE:64:GFX11`, `AMDGPU:LE:64:GFX12`, `AMDGPU:LE:64:GFX10-W64`, `AMDGPU:LE:64:GFX11-W64`, `AMDGPU:LE:64:GFX12-W64` | LLVM AMDGPU encodings (`llvm-mc -show-encoding` / `--disassemble`, `llvm-objdump` tables read by `tools/amdgpu_gfx11_probe.py`), AMD Vega ISA reference; checked on clang-built OpenCL kernels | `unlace-cli/tests/processors.toml` (`amdgpu*`) |
| `KVX` | Kalray KVX kv3-1 (Coolidge v1) and kv3-2 (Coolidge v2), 64-bit mode; bundles of up to eight syllables with tail immediate extensions | `KVX:LE:64:kv3-1`, `KVX:LE:64:kv3-2` | encodings generated from the binutils `kvx` opcode table and disassembler register classes by `tools/gen_kvx_sleigh.py`; checked against `kvx-elf-objdump` | `unlace-cli/tests/processors.toml` (`kvx`, `kvx_wide`) |
| `CPython` | CPython 3.12 bytecode (one code object's co_code) | `CPython:LE:32:3.12` | CPython 3.12 `dis`/`opcode` tables, `Python/bytecodes.c` semantics; oracle `dis` | `unlace-cli/tests/cpython_raw.rs` |
| `H8500` | Hitachi H8/500 (H8/510, H8/520, H8/532, H8/534, H8/536, H8/570) | `H8500:BE:16:minimum`, `H8500:BE:24:maximum` | H8/500 Programming Manual; MAME h8500dasm.cpp (BSD-3) | `unlace-cli/tests/processors.toml` (`h8500`) |
| `S12Z` | NXP S12Z (MC9S12ZVL, MC9S12ZVC, MC9S12ZVM, S12ZVH) | `S12Z:BE:24:default` | NXP S12Z CPU RM; encodings checked against binutils s12z-opc.c (read only) | `unlace-cli/tests/processors.toml` (`s12z`) |
| `V8Ignition` | V8 Ignition bytecode (V8 13.6, Node.js 24) | `V8Ignition:LE:32:13.6` | V8 `src/interpreter/bytecodes.h`, `bytecode-operands.h` (BSD-3-Clause); oracle `node --print-bytecode` | `unlace-cli/tests/v8ignition_raw.rs` |
| `JavaCard` | Java Card virtual machine bytecode (Java Card Platform 3.1) | `JavaCard:BE:16:3.1` | Java Card Platform VM Specification v3.1, chapters 7 and 8 | `unlace-cli/tests/javacard_raw.rs` |
| `StarCore` | NXP (Freescale) StarCore SC140 DSP core, variable-length execution sets with prefix and serial grouping | `StarCore:LE:32:SC140` | SC140 DSP Core Reference Manual rev 4.1 (encoding and field tables read by `tools/gen_sc140_sleigh.py`); no public toolchain, checked for decode self-consistency and on hand-assembled sets | `unlace-cli/tests/processors.toml` (`starcore`, `starcore_max`, `starcore_loops`) |
| `PowerPC` (Xenon VMX128) | Xbox 360 Xenon (64-bit PowerPC, AltiVec, VMX128) | `PowerPC:BE:64:Xenon` | Xenia emulator `ppc-instructions.xml` and VX128 decode formats (BSD-3) | `unlace-cli/tests/processors.toml` (`ppc_xenon_vmx128`) |
| `S1C6200` | Seiko Epson S1C6200 / E0C6200 / E0C6200A 4-bit core | `S1C6200:BE:16:default` | Epson E0C6200/6200A Core CPU Manual (MF297-06a); checked against MAME `e0c6200` on all 4,096 encodings | `unlace-cli/tests/processors.toml` (`s1c6200`) |
| `Propeller` (P2) | Parallax Propeller 2 (P2X8C4M64P), hub execution | `propeller2:LE:32:default` | Parallax "Propeller 2 Instructions" table v35 (encodings, operations, flags); checked against the flexspin assembler | `unlace-cli/tests/processors.toml` (`propeller2`) |
| `S1C88` | Seiko Epson S1C88 8-bit core (Pokemon mini CPU) | `S1C88:LE:16:default` | Epson S1C88 Core CPU Manual (MF658-05); checked against MAME `minx` on all 768 opcode slots | `unlace-cli/tests/processors.toml` (`s1c88`) |
| `M7700` | Mitsubishi/Renesas 7700 Family (M37700/M37702/M37710, 7750/7751 additions) | `M7700:LE:24:default` | Renesas 7700 Family Software Manual (chapter 4 instruction pages, Appendix 2 code tables) | `unlace-cli/tests/processors.toml` (`m7700`) |
| `MULTOS` | MULTOS Executable Language (MEL) smart-card bytecode | `MULTOS:BE:16:MEL` | MULTOS Developer's Reference Manual v1.58 (instruction descriptions, Instruction Map) | `unlace-cli/tests/processors.toml` (`multos_mel`) |
| `M7900` | Mitsubishi/Renesas 7900 Series (DPR0 only, and DPR0-DPR3) | `M7900:LE:24:default`, `M7900:LE:24:DPR4` | Renesas 7900 Series Software Manual (chapter 4 machine-code rows) | `unlace-cli/tests/processors.toml` (`m7900`) |
| `R32C` | Renesas R32C/100 Series | `R32C:LE:32:default` | Renesas R32C/100 Series Software Manual (chapter 4 instruction codes) | `unlace-cli/tests/processors.toml` (`r32c`) |
| `TMS320C1x` | TI TMS320C1x (TMS32010, C10/C14/C15/C17) | `TMS320C1x:BE:16:default`, `TMS320C1x:LE:16:default` | TI TMS320C1x User's Guide (SPRU013D, chapters 3-4) | `unlace-cli/tests/processors.toml` (`tms320c1x`) |
<!-- native-rows -->

### WDC 65816 (#98)

`specs/Ghidra/Processors/65816` vendors the SLEIGH specification of
ghidra-65816 (MIT, pinned commit in its README) unchanged:
`65816:LE:16:default` for the WDC 65816/65C816 (SNES, Apple IIgs). The program
counter is the 24-bit `PBR:PC`, and the M, X and E status bits are decode
context, so `REP`/`SEP`/`XCE` change the operand width of the instructions
after them; the default context is native mode with 16-bit accumulator and
index registers. Before, only the 6502 and 65C02 had languages. Exercised by
`unlace-cli/tests/w65816_raw.rs` (a 16-bit load/add/store routine decompiles
with no bad or unimplemented instruction).

### STM8 (#98)

`specs/Ghidra/Processors/STM8` vendors the SLEIGH specification of ghidra_STM8
(Apache-2.0, pinned commit in its README) unchanged: `STM8:BE:16:default`
(medium memory model, 16-bit pointers) and `STM8:BE:24:default` (large model,
24-bit far pointers, `CALLF`/`RETF`), both from `STM8.sinc` with the
prefix bytes 0x72, 0x90, 0x91 and 0x92 tracked in a decode context. Before, the
STM8 had no language. Exercised by `unlace-cli/tests/stm8_raw.rs` (a
hand-assembled load/add/store routine decompiles in both models with no bad or
unimplemented instruction).

### M6800 family: MC6800, MC6801, HD6301, MC68HC11 (#98)

`specs/Ghidra/Processors/M6800` vendors the SLEIGH specifications of
GhidraMC6800 (Apache-2.0, pinned commit in its README): `MC6800:BE:16:default`
(MC6800/6802/6808), `MC6801:BE:16:default` (MC6801/6803 and HD6803, with the
16-bit D register and the 6801 additions), `HD6301:BE:16:default`
(HD6301/6303, adding the memory-immediate `AIM`, `OIM`, `EIM`, `TIM`,
`XGDX` and `SLP`) and `MC68HC11:BE:16:default` (the Y register and the
0x18/0x1A/0xCD prefix pages). Before, only the 6805, 6809 and 6309 of this
lineage had languages. The files are upstream's unchanged; upstream checks
each opcode's decode and semantics with per-processor disassembly and
emulator tests. A raw image selects them with `--raw-image --target`.
Exercised by `unlace-cli/tests/m6800_family.rs` (hand-assembled MC6800,
HD6301 and MC68HC11 routines decompile with no bad or unimplemented
instruction).

### RISC-V Zcmp and Zcmt (GH-1630)

The Zc code-size extensions (`specs/Ghidra/Processors/RISCV/data/languages/riscv.zc.sinc`)
put `cm.push`, `cm.pop`, `cm.popret`, `cm.popretz`, `cm.mvsa01`, `cm.mva01s`
(Zcmp) and `cm.jt`, `cm.jalt` (Zcmt) in the `c.fsdsp` encoding space
(op=10, funct3=101), so they exist only where Zcd does not. The `Zcmp` context
bit (`riscv.reg.sinc`) selects between the two readings: `c.fsdsp` decodes at
`Zcmp=0`, the Zc instructions at `Zcmp=1`, and the default RV32/RV64 processor
specs leave the bit 0, so every existing RISC-V language decodes byte-identically.
The `RISCV:LE:32:Zcmp` and `RISCV:LE:64:Zcmp` language variants
(`riscv.ldefs`, `RV32zcmp.pspec`, `RV64zcmp.pspec`) share the `.sla` files
and set the bit; the ELF loader picks them from `Tag_RISCV_arch` (§1).

The register list `rlist` (bits 7:4, values 4..15) is a prefix of
`{ra, s0, s1, ..., s11}`: `rlist - 3` registers, except 15, which is the full
list of 13 (`s10` is never saved without `s11`). The stack adjustment is the
list's byte size rounded up to 16 plus `16 * spimm` (bits 3:2), so one
constructor per `rlist` value carries the base and a per-base operand
(`zcadj16` ... `zcadj112`) adds `spimm`. `cm.push` stores the highest-numbered
register at `sp - XLEN/8` and each lower one `XLEN/8` below it, `ra` lowest,
then subtracts the adjustment; `cm.pop` loads the same registers from
`sp + adjustment` downward and then adds the adjustment; `cm.popret` returns
through the reloaded `ra`; `cm.popretz` also writes `a0 = 0`. `cm.mvsa01`
copies `a0`, `a1` into two `s0..s7` registers, `cm.mva01s` copies them back.
`cm.jt index` loads the jump target from the `jvt` CSR (0x017) table at
`(jvt & ~0x3f) + index * XLEN/8` and jumps; `cm.jalt` (index 32..255) sets
`ra` and calls. Displays print the register list and the adjustment as
`cm.push {ra,s0-s1},-0x10`. Before this the issue's `-Os` prologue decoded as
`c.fsdsp fs8,0x30(sp)` and its epilogue as a float store followed by a jump
through whatever `ra` held, so the saves, the stack adjustment and the return
were lost. Exercised by `tests/stages/riscv-zcmp.toml` (the issue's
`keep`, hand-written `swapcall`/`zret`/`popsep`, the raw push/popret p-code)
and `unlace-cli/tests/riscv_zcmp.rs` (one decode per encoding shape against
LLVM's names, RV32 and RV64). Zcb and the T-Head vendor extensions the
issue also lists are not decoded here; Zicond and Zcb have their own sections
below.

### RISC-V ratified bit manipulation and Zicond (#98)

`riscv.zb.sinc` decodes the ratified Zba, Zbb, Zbc and Zbs extensions
(Bitmanip 1.0.0), Zbkb and Zbkx (Scalar Crypto 1.0.1) and Zicond (1.0). It
is generated from the Sail RISC-V model by `tools/gen_riscv_sail.py`
(`docs/sleigh-from-isa-specs.md` has the command and the comparison with the
hand-written `riscv.rv32b.sinc` and `riscv.rv64b.sinc` it replaced, which
decoded every word the same way). Those files had replaced the 0.92 bitmanip draft they carried, whose constructors were
all `unimpl` and whose names and encodings differ from the ratified ones: the
RVA22 profile's `cpop` decoded as the draft `pcnt`, `bset` as `sbset`,
`rev8` and `orc.b` as `grevi`/`gorci`, and Zicond's `czero.eqz` as the
draft `cmov`, each an unimplemented instruction that cut the function's
data flow. The draft-only instructions (`bdep`, `bfp`, `cmix`, `fsl`,
`shfl`, `slo`, `crc32.*`, `bmat*`, `addwu` and the rest) were never
ratified and no longer decode.

Each instruction lifts to ordinary p-code where p-code has the operation:
`sh1add`/`sh2add`/`sh3add` (and the `.uw` forms, which zero-extend the
low word of `rs1` first) are a shift and an add, `add.uw`/`zext.w`,
`slli.uw`, `sext.b`, `sext.h` and `zext.h` are extensions, `andn`, `orn`
and `xnor` are their bitwise forms, `clz` is LZCOUNT, `cpop` is POPCOUNT,
and `ctz` is `POPCOUNT((x & -x) - 1)`, which is the register width for
`x = 0` as the ISA requires; the `w` forms work on the low 32 bits and
sign-extend (`clzw`, `ctzw`, `cpopw` produce a count, which is never
negative). `rol`, `ror`, `rori` and their `w` forms are the shift pair
`(x << n) | (x >> (W - n))`, `rev8` is the byte-reversing shift-and-mask
tree, the shapes `bitidioms` folds to `bswap` (and, for a constant amount,
to a rotate) on other architectures. The Zbs single-bit operations mask the register shift amount
to the register width. `pack`, `packh` and `packw` concatenate the low
halves (bytes for `packh`; `packw` sign-extends its 32-bit result).
`max`, `maxu`, `min`, `minu` and Zicond's `czero.eqz`/`czero.nez` lift
as a copy of the Sail `if` expression's then-value into a temporary, a
conditional branch around a copy of the else-value, and one write of `rd`,
so the structurer prints a conditional assignment. `xperm4` and `xperm8`
lift to one such select per nibble or byte (an in-range index picks that
lane of `rs1`, any other gives 0), and `zip`/`unzip` (RV32 only) to their
bit-by-bit shuffles, which the hand-written file had as user operations.
The user operations left are `carryless_mul` (`clmul` is its low half,
`clmulh` its high half), `carryless_mulr` and `brev8`, whose inlined
p-code would exceed the generator's budget, and `orc_b`, kept opaque so a
string scan reads `orc_b(x)` rather than eight byte tests. `zext.w` is the
riscv-opcodes display alias of `add.uw` with `rs2 = x0`.

The encodings that depend on XLEN are guarded by `ADDRSIZE`: `rev8` is
`0x698` on RV32 and `0x6b8` on RV64, `zext.h` is `pack rd, rs1, x0` on
RV32 (OP) and `packw rd, rs1, x0` on RV64 (OP-32), and the immediate shifts
take a 6-bit amount whose top bit must be clear on RV32 (on RV32 the
generator fixes bit 25 to 0 and the amount is `op2024`). The
default RISC-V languages decode all of them, as the GNU and LLVM
disassemblers do without an `-march` restriction, because no other standard
or draft instruction in these languages shares their encodings. Exercised by
`unlace-cli/tests/riscv_bitmanip.rs`: one probe row per encoding, RV32 and
RV64, against `llvm-objdump`'s names, and LLVM-selected `max`, `minu`,
`cpop`, `clz`, `ctz`, `czero.eqz`, `rev8`, `andn`, `bset` and
`sh3add.uw` functions that decompile with no unimplemented instruction.

### RISC-V Zcb and Zacas (#98)

`riscv.zcb.sinc` decodes the Zcb code-size extension (Zc* 1.0.0) in every
RISC-V language: `c.lbu`, `c.lhu`, `c.lh`, `c.sb`, `c.sh` (quadrant 0,
funct3 100; the byte forms take a 2-bit offset with bit 6 as offset bit 0 and
bit 5 as bit 1, the halfword forms a 1-bit offset in bit 5 scaled by 2, bit 6
choosing `c.lh` over `c.lhu`), and `c.zext.b`, `c.sext.b`, `c.zext.h`,
`c.sext.h`, `c.zext.w` (RV64), `c.not` and `c.mul` (quadrant 1, funct6
100111, bits 6:5 = 11 with the operation in bits 4:2, or 10 for `c.mul`).
Those encodings are reserved in the C extension, so no other instruction
shares them and no language variant is needed; before, a Zcb build's byte and
halfword accesses decoded as bad instructions. The loads zero- or
sign-extend into the register, the stores write its low byte or halfword,
the extensions and `c.not` rewrite `rd'` in place and `c.mul` is
`rd' = rd' * rs2'`.

The Zacas compare-and-swap (Zacas 1.0, AMO funct5 00101) lifts like the other
AMOs: `amocas.w` (`riscv.rv32a.sinc`, RV32 and RV64) reads the word at
`(rs1)` into `rd` (sign-extended on RV64) and stores `rs2` there only when
the word equals the old `rd`; `amocas.d` (`riscv.rv64a.sinc`) does the same
on RV64 doublewords. The register-pair forms (RV32 `amocas.d`, RV64
`amocas.q`) are in `riscv.zacas.sinc` (below). Exercised by `unlace-cli/tests/riscv_zcb.rs`:
one probe row per encoding against LLVM's names, RV32 and RV64, and
LLVM-selected `c.lbu`, `c.lh`, `c.sb`, `c.mul`/`c.not` and
`cmpxchg`-lowered `amocas` functions that decompile with no bad or
unimplemented instruction.


### RISC-V T-Head vendor extensions (#98)

`riscv.xthead.sinc` decodes the T-Head (XuanTie) vendor extensions in two new
languages, `RISCV:LE:64:XThead` and `RISCV:LE:32:XThead`: the default RISC-V
languages plus XTheadBa, Bb, Bs, CondMov, Mac, MemPair, MemIdx, FMemIdx, Cmo
and Sync, all in the custom-0 opcode space. Those encodings collide with the
generic `custom0` placeholders of `riscv.custom.sinc`, so the placeholders
for custom-0 are compiled out of these two languages (`@define
CUSTOM0_VENDOR`) and the default languages are unchanged. The arithmetic,
bit-field, conditional-move, multiply-accumulate and memory forms lift
exactly (`th.extu a0,a0,19,8` is `(a0 & 0xfffff) >> 8`, `th.lrd` is a
load from `rs1 + (rs2 << n)`, the `ia`/`ib` forms write the base back
after or before the access, the pair forms move two consecutive words or
doublewords); the cache and sync operations are named pcodeops. A binary is
not routed to these languages by its ELF header; `--target` selects them.
Before, every T-Head instruction was an opaque `custom0` call. Exercised
by `unlace-cli/tests/riscv_xthead.rs`: a probe of every encoding (agreeing
with LLVM 23's disassembler, 102 rows RV64 and 80 RV32), LLVM-selected
`th.lrd`/`th.lrw`, `th.extu`, `th.mvnez` and `th.mula` functions, and a
raw RV64 image. Gaps (XTheadVector, Vdot, Fmv, Int) are listed in
`specs/Ghidra/Processors/RISCV/README.md`.

### PowerPC Gekko / Broadway paired singles (#98)

A new language `PowerPC:BE:32:Gekko` (`ppc_32_gekko_be.slaspec`) adds
`paired_single.sinc` to the 32-bit big-endian PowerPC language without AltiVec:
the paired-single instructions of the GameCube's Gekko and the Wii's Broadway
(PowerPC 750CL). Each FPR carries a second single-precision slot, `ps1_N`, in the
otherwise unused low half of the overlaid VSX register; arithmetic, the slot
moves (`ps_sum*`, `ps_muls*`, `ps_madds*`, `ps_merge*`, `ps_sel`) and the
compares follow the 750CL manual, each slot rounded to single. `psq_l`/`psq_st`
with GQR index 0 are plain float loads and stores of one or two slots (the SDKs
keep GQR0 at the float type); any other GQR makes the transfer a
`psq_load`/`psq_store` user op on that GQR. Under `@define PAIRED_SINGLE` the
405/440 multiply-accumulate instructions, which share primary opcode 4, are left
out, so the other PowerPC languages are unchanged. A 7,060-word probe agrees with
`objdump -M gekko` except on the invalid rA = 0 update forms. A raw
`psq_l; psq_l; ps_add; psq_st` decompiles to two float stores of the slot sums.
Exercised by `unlace-cli/tests/ppc_gekko.rs`; gaps in
`specs/Ghidra/Processors/PowerPC/README.md`.

### PowerPC SPE2 and EFS2 (#98)

A new language `PowerPC:BE:32:e200-SPE2` (`ppc_32_e200_spe2_be.slaspec`) adds
`SPE2.sinc` to the Power ISA embedded + VLE language: the SPE2 and EFS2
instructions of the NXP e200z4/e200z7 cores (MPC56xx/MPC57xx), with encodings from
the binutils opcode table and names from the SPE2 intrinsics. Every SPE2/EFS2 row
decodes (a probe of 2428 words agrees with `objdump -M spe2 -M efs2`). Lane add,
subtract, negate, absolute value, min and max, extends, splats, `evmar` and the
addressing of every load and store lift exactly: immediate offsets are scaled by
the access size with rA read as 0 for r0, the `u` forms write the address back to
rA, the modulo `mx` forms access at rA and then advance it through `__circinc`.
The rest are named pcodeops that read and write `ACC` as the mnemonic says (an
`a` suffix writes it, the `aa`/`an` forms also read it, the `3` forms read rD
instead). Under `@define SPE2` the encodings SPE2 and EFS2 reuse are left out of
the included files (`maddhd`/`maddhdu`/`maddld`, `evmwhusiaaw`/`evmwhusianw`,
`efdcfuid`/`efdcfsid`/`efdctuidz`/`efdctsidz`), so the other PowerPC languages are
unchanged. A raw `evlbbsplatbx r3,r3,r4; evaddd r3,r3,r5; blr` decompiles to
`return *(unsigned char *)(a0 + a1) * 0x101010101010101ULL + a2;`. Exercised by
`unlace-cli/tests/ppc_spe2.rs`; gaps (record-form CR updates, encodings binutils
rejects) in `specs/Ghidra/Processors/PowerPC/README.md`.

### MIPS-3D and SmartMIPS (#98)

`mips3d.sinc` (included by `mips64be`/`mips64le`, so every pre-R6 MIPS64 language with
64-bit FPRs) decodes the MIPS-3D ASE and `smartmips.sinc` (included by
`mips32be`/`mips32le`) the SmartMIPS ASE, from the binutils opcode rows and the
MIPS-3D and SmartMIPS specifications. Both occupy encodings reserved in the base ISA
and require `REL6=0`, so no existing decode changes. MIPS-3D lifts exactly:
`addr.ps`/`mulr.ps` reduce each source pair, `recip1`/`rsqrt1` are modelled as the
full-precision reciprocal and reciprocal square root, `recip2` is `-(fs*ft - 1)`
and `rsqrt2` half that, `cabs.cond` compares absolute values into condition code
`cc` (PS: `cc` lower, `cc+1` upper; code n is FCSR bit 23 for n = 0, else 24 + n),
`bc1any2`/`bc1any4` branch with a delay slot when any of 2 or 4 consecutive codes
matches, and `cvt.ps.pw`/`cvt.pw.ps` convert each lane. SmartMIPS adds an 8-bit
`ACX` register: `lwxs` loads from `base + 4*index`, `mflhxu`/`mtlhx` shift LO, HI
and ACX, `multp`/`maddp` write or xor a GF(2) product (pcodeop `smartmips_multp`)
into HI/LO and `pperm` is a pcodeop. Before, these words were bad instructions or
opaque `SPECIAL2` placeholders. A raw `lwxs $2,$5($4)` decompiles to
`return *(unsigned int *)(a0 + a1 * 4);`. Exercised by `unlace-cli/tests/mips_ase.rs`
(probes of every row agreeing with `mips-elf-objdump`); gaps (ACX carry from the base
multiply-accumulates, Toshiba TX19A whose encodings are not publicly documented) in
`specs/Ghidra/Processors/MIPS/README.md`.

### RISC-V Zacas register pairs (#98)

`riscv.zacas.sinc` decodes the Zacas 1.0 forms whose operands are 2*XLEN
wide: RV32 `amocas.d` (funct3 011) and RV64 `amocas.q` (funct3 100), with
the `.aq`/`.rl`/`.aqrl` suffixes. `rd` and `rs2` name an even/odd register
pair (even = low half); the `x0` pair reads as zero and is never written, and
an odd register number is reserved and stays a bad instruction. The lift reads
the 2*XLEN value at `(rs1)` into the `rd` pair and stores the `rs2` pair
(read before `rd` is written) only when memory equalled the old `rd` pair, so
a raw `amocas.d a0,a2,(a4)` decompiles to `if (v == CONCAT44(a1,a0)) *a4 =
CONCAT44(a3,a2);`. No language variant is needed: on RV32 funct3 011 and on
RV64 funct3 100 decode nothing else. Before, both forms were bad
instructions. Exercised by `unlace-cli/tests/riscv_zacas.rs`: probe rows
against LLVM's names (plain, `.aqrl`, `x0` pair) and raw RV32/RV64 images.
Notes in `specs/Ghidra/Processors/RISCV/README.md`.

### RISC-V Zabha (#98)

`riscv.zabha.sinc`, generated from the Sail model's `AMO` clause
(`zaamo_insts.sail`, `--only` the byte and halfword forms) by `tools/gen_riscv_sail.py`
under its abstract memory model (no translation faults, triggers or misalignment traps;
a read is a RAM load and a write a RAM store), decodes Zabha 1.0, the byte (funct3 000) and halfword
(funct3 001) forms of every A-extension AMO (`amoswap`, `amoadd`, `amoxor`,
`amoand`, `amoor`, `amomin`, `amomax`, `amominu`, `amomaxu`) and, with
Zacas, `amocas.b`/`amocas.h`, with the `.aq`/`.rl`/`.aqrl` suffixes, in RV32
and RV64. They lift like the word forms: `rd` receives the old memory value
sign-extended to the register, the arithmetic and logical forms store the
combined value, min/max store whichever of `rs2` and the old value wins the
(signed or unsigned) comparison, as Sail always writes back, and `amocas` stores `rs2` only when memory equals the
low byte or halfword of the old `rd`. The ordering bits `aq`/`rl` change only the
mnemonic. The generated file decodes every word the hand-written one did, and both
agree with QEMU. Before the hand-written file, all of them were bad instructions. Exercised by `unlace-cli/tests/riscv_zabha.rs`: one probe row
per encoding against LLVM's names, RV32 and RV64, and LLVM-selected 8- and
16-bit `atomicrmw`/`cmpxchg` functions that decompile with no bad or
unimplemented instruction.


### RISC-V vector extension (#98)

`riscv.rvv.sinc` decodes the ratified vector extension (RVV 1.0) and the
ratified vector extensions built on it: Zvbb, Zvbc, Zvkg, Zvkned, Zvknha/Zvknhb,
Zvksed, Zvksh, Zvfbfmin and Zvfbfwma. It replaces a 0.9-draft table in which
every instruction was `unimpl` (so any function that reached a `vsetvli`
stopped at an unimplemented instruction) and which used draft names and
encodings: `vlxei` instead of `vluxei`/`vloxei`, `vpopc.m`, `vmandnot.mm`,
`vfredsum.vs`, the removed `vamo*` and `vdot` instructions, and 128- to
1024-bit element loads. The file is generated: encodings from riscv-opcodes
(`extensions/rv_v`, `rv_zv*`), mnemonics and operand order from LLVM's
disassembler (`-M no-aliases`), including the segment forms
(`vlseg<n>e<eew>.v`, `vlsseg`, `vluxseg`, `vloxseg` and their stores, one
constructor per `nf`) and a separate constructor for each masked form
(`vm=0`, displayed `,v0.t`). `vsetvli`/`vsetivli` print their `vtype` as
`e<sew>,m<lmul>|mf<n>,ta|tu,ma|mu` (new token fields `op2325` for vsew and
`op2029` for the 10-bit `vsetivli` immediate).

Each instruction lifts to a user operation named after it, with dots as
underscores (`vadd_vv`, `vlseg2e8_v`, `vsetvli`): its output is the
register it writes (`vd`, `rd` for `vset*`, `vmv.x.s`, `vcpop.m`,
`vfirst.m`, or the FP `rd` for `vfmv.f.s`; stores have none) and its inputs
are the source operands in assembly order, with the old `vd` first for the
multiply-accumulate, slide-up, scalar-move-into-vector and vector-crypto forms
and for every masked form, and `v0` last for masked forms. Element-wise
semantics depend on `vl` and `vtype` at run time, which a static lift cannot
fix, so they stay inside the user operations; what is kept is the data flow
between vector registers, scalar registers, FP registers and the memory
addresses a load or store uses, so a vectorized function decompiles to a
sequence of calls such as `v8 = vadd_vv(v8,v9)` instead of stopping.
Whole-register loads, stores and moves (`vl<n>re<eew>.v`, `vs<n>r.v`, `vmv<n>r.v`)
move `n` registers whatever `vtype` says, so for `n` = 2, 4 and 8 they read or write a
register group: the overlapping registers `v0m2`..`v30m2`, `v0m4`..`v28m4` and
`v0m8`..`v24m8` (64, 128 and 256 bytes, operand subtables `vdm<n>` and `vs2m<n>`), and
`vmv<n>r.v` lifts as a copy of the group (`vmv1r.v` as a register copy). A register number not
a multiple of `n` is reserved and, as in LLVM, not decoded.

The other operands are register groups too, of a size `vtype` decides, so `vtype` is tracked
as context (`tools/gen_rvv_groups.py` generates the tables and the constructors).
- **Context.** `vsetvli` and `vsetivli` set context fields from their immediate for the
  instructions after them (`globalset(inst_next, ...)`, subtable `vtctx`): `vknown`, and
  log2 of the group size of each operand class. The classes are `gk` for LMUL, `wk` for 2*LMUL,
  and `e8k`..`e64k` for EEW/SEW*LMUL; the field is 0 for one register and when the vtype makes
  the encoding reserved. `vsetvl`, whose vtype is a register, clears `vknown`. The context holds
  from the `vsetvli` to the next one in address order. Compiled code sets vtype before each
  strip-mined loop and after each call, so that matches execution there.
- **Groups.** After each constructor there is one constructor per group shape, under a pattern
  over those fields, whose operands are fixed-size subtables (`vd_k4a4` is a 4-register group at
  a 4-aligned vd). The register file has an overlapping register for every run of 2..8
  registers (`v8m2`, `v9_11`); a run past v31, which only a reserved segment encoding names,
  reaches into unused register space.
  - Data, index and destination groups are LMUL for most operands, 2*LMUL for widening results
    and `.w` sources, and 2*LMUL for narrowing sources.
  - Loads and stores use EEW/SEW*LMUL for their data, and indexed ones for their index.
  - A segment access covers nf groups; with no known vtype it still writes its nf registers.
  - Reduction, mask and scalar-move operands stay one register.
  - A misaligned group at a known vtype is reserved and falls back to the single-register form.
- **Old destination.** Every user operation that writes a vector register takes the old
  destination (group) as its first input. Tail- or mask-undisturbed elements, and every element
  when vl = 0, keep their old values.
- **Vector crypto.** The Zvk* instructions (and Zvbb's) stay user operations. Their exact
  semantics run over element groups up to the run-time `vl`, which p-code could only express as a
  loop over indexed register-space accesses for every instruction. That prints as a pointer loop
  over the register file, and heritage does not follow dynamically indexed register bytes, so
  the data flow would be worse than the user operations give.
- **`vset*`.** `vsetvli`, `vsetivli` and `vsetvl` write `vl` (the user operation's result, also
  in `rd`) and `vtype`. `vtype` is the immediate, or `rs2`, unless the vtype is reserved: then
  `vill` is set. Reserved here means bits above 7 set, LMUL encoding 4, or SEW above 64. A
  fractional LMUL with SEW > LMUL*ELEN is implementation-defined; QEMU accepts it, and so does
  the lift. `vsetvli x0, x0` keeps `vl`.
- **Not written.** The accrued flags (fflags, vxsat) are not written, as in the scalar F/D lift.
Exercised by `unlace-cli/tests/riscv_vector.rs`: all 1258 encoding shapes
against LLVM's names (`fixtures/riscv_vector/probe64.txt`) and LLVM-lowered
vector functions (load/add/store, a reduction into a scalar, an FMA with a
scalar operand, a select) that decompile with no bad or unimplemented
instruction, RV32 and RV64.

### RISC-V scalar cryptography (#98)

`riscv.zk.sinc`, generated from the Sail model's `zkn_insts.sail` and
`zks_insts.sail` by `tools/gen_riscv_sail.py` (`docs/sleigh-from-isa-specs.md`),
decodes the ratified scalar cryptography
extensions (Scalar Crypto 1.0.1): Zknh (`sha256sig0/1`, `sha256sum0/1`; on
RV64 `sha512sig0/1`, `sha512sum0/1`; on RV32 the half-word forms
`sha512sum0r`, `sha512sum1r`, `sha512sig0l/h`, `sha512sig1l/h`), Zksh
(`sm3p0`, `sm3p1`), Zksed (`sm4ed`, `sm4ks`), and Zkne/Zknd (`aes32esi`,
`aes32esmi`, `aes32dsi`, `aes32dsmi` on RV32; `aes64es`, `aes64esm`,
`aes64ds`, `aes64dsm`, `aes64im`, `aes64ks1i`, `aes64ks2` on RV64). It
replaces the hand-written `riscv.rv32k.sinc` and `riscv.rv64k.sinc`, which
decoded every word the same way; those had replaced the 0.6.2 draft, which put these instructions
in the custom-1 and custom-2 opcode spaces (where vendor extensions live)
under draft names (`ssha256.sig0`, `saes32.encs`, `pollentropy`, ...), all
`unimpl`; the ratified encodings are in OP and OP-IMM.

The hash functions lift to their definitions: each SHA-256 and SM3 function
is three rotates or shifts of the low word XORed together, sign-extended to
the register on RV64 (`assignW`); each RV64 SHA-512 function is the same on
the doubleword; each RV32 SHA-512 half forms the 64-bit value `rs2:rs1`
(`rs2` high), applies its three 64-bit rotates (for `sig0h`/`sig1h` the
middle term shifts only the low word) and keeps the low 32 bits. The AES
and SM4 instructions, whose results go through an S-box, are user
operations named after the instruction (`--opaque`), taking `rs1`, `rs2`
and, for the RV32 AES and SM4 forms, the byte select `bs` (`aes64ks1i`
takes `rnum`). `aes64ks2` lifts to its XOR definition. `aes64ks1i` decodes
every `rnum`, as LLVM does, though Sail reserves 0xB..0xF
(`--decode-reserved AES64KS1I`).
Zbkb, Zbkc and Zbkx are in the bit manipulation files. The Zkr `seed` CSR
and the vector crypto extensions (Zvk*) are not covered. Exercised by
`unlace-cli/tests/riscv_crypto.rs`: one probe row per encoding against LLVM's
names, RV32 and RV64, and intrinsic-selected functions that decompile with
no unimplemented instruction.


### RISC-V Zfh half-precision floating point (#98)

`riscv.zfh.sinc` decodes Zfh 1.0 (and so its Zfhmin subset) in every RISC-V
language that has the F extension: `flh`/`fsh`, the arithmetic, square root,
sign-injection, min/max, fused multiply-add, compare, move, `fclass.h` and conversion
instructions, and the `fmv.h`/`fneg.h`/`fabs.h` aliases. Like `riscv.fd.sinc`, it is
generated from the Sail model (`extensions/FD/zfh_insts.sail`, and `fext_insts.sail` for
the half load and store), with the options of the F/D generation (see
`docs/sleigh-from-isa-specs.md`):
- **Writes and reads.** A half value is the low 16 bits of an f register; a write NaN-boxes
  it (`0xffffffffffff0000 | zext(h)`). A read is NaN-unboxed exactly: when the upper 48 bits are
  not all ones, the read is the canonical NaN `0x7e00`. `boxedcompare` folds the test for
  boxed values, and `fpargboxed` for argument and return registers (§3).
- **Rounding.** `rne` and `dyn` lift as p-code float operations on 2-byte varnodes. The
  other static rounding modes, and the fused forms, are user operations.
- **Integer conversions.** `rtz` saturates as the ISA defines. Every finite half lies in the
  integer range, so only the infinities and NaN clamp (`x f< -65504`, `x f>= inf`), and
  `satconvert` prints the cast.
- **Display.** `fcvt.s.h` and `fcvt.d.h` are exact, so like LLVM they print no rounding mode.
- **Checks.** Decode matches llvm-objdump on every sampled word and near miss; on QEMU no
  non-opaque word differs.
- **Tests.** `unlace-cli/tests/riscv_zfh.rs` checks one probe row per encoding against LLVM's
  names, RV32 and RV64, and that LLVM-selected half-precision functions decompile.

Zvfh adds no encodings: the vector FP instructions in `riscv.rvv.sinc` cover SEW 16, as user
operations. The vector accrued flags (fflags, vxsat) are not written, as in the scalar lift.

### RISC-V Q (quad precision): the `RISCV:LE:64:GQ` language

Q needs 128-bit f registers, so it has its own language: `riscv.lp64q.slaspec` (FLEN 16,
FPSIZE 128), id `RISCV:LE:64:GQ`. The loader picks it for a 64-bit ELF whose
`Tag_RISCV_arch` declares `q` (`riscvzc.rs`).
- **F and D.** `riscv.fdq.sinc` is the F/D generation at `--flen 128`: single and double
  values are NaN-boxed into the 16-byte registers.
- **Q.** `riscv.q.sinc` is generated from a Q extension derived from the Sail model's D
  extension. sail-riscv names `Ext_Q` but defines no Q instruction, so `tools/sail_d_to_q.py`
  rewrites `dext_insts.sail`:
  - The binary64 layout becomes binary128, the fmt field 01 becomes 11, and `riscv_f64*` becomes
    `riscv_f128*`.
  - `fcvt.d.q`/`fcvt.q.d` and `flq`/`fsq` are added; `fmv.x.d`/`fmv.d.x` have no Q form below
    RV128 and are dropped.
- **What lifts as p-code.** `rne` and `dyn` arithmetic, square root, compares, sign injection,
  min/max, `fclass.q` and the moves are p-code on 16-byte floats. Static rounding modes, the
  fused forms and the integer conversions other than `rtz` are user operations.
- **Display.** The exact conversions into Q print no rounding mode, as LLVM prints them.
- **Not in this language.** Zfh, Zfa and Zfbfmin are generated for FLEN 64 and left out.
- **Constants.** A binary128 constant cannot be a constant varnode: they hold 64 bits. So the
  generator writes every binary128 bound as the exact double it is, widened (`float2float(c:8)`).
  That prints as the double, and compares against it fold back to double compares
  (`satconvert` then prints the cast). The decompiler keeps no 16-byte float format for the same
  reason.
- **Argument unboxing.** `fpargboxed` folds the double unboxing test of a 16-byte argument or
  return register. The float and half tests are 12 and 14 bytes wide and stay.
- **Check.** QEMU has no Q, so this is checked against llvm-objdump only: every sampled word and
  near miss of rv_q/rv64_q/F/D agrees.

### RISC-V Svinval, hypervisor fences, Zalasr, Zfbfmin, Smrnmi and Ssctr

These fill decode gaps that `tools/sail_sleigh_compare.py decode` against llvm-objdump showed:
- **Svinval and hypervisor fences.** `riscv.svinval.sinc` is generated from the Sail model
  (`extensions/H/hext_insts.sail`, `extensions/Svinval/svinval_insts.sail`). It holds
  `hfence.vvma`/`hfence.gvma`, `sinval.vma`, `hinval.vvma`/`hinval.gvma` as user operations
  over `rs1` and `rs2`, and `sfence.w.inval`/`sfence.inval.ir` with no effect.
- **Hypervisor loads and stores.** In `riscv.priv.sinc` these now print as LLVM does:
  `hlv.b rd,(rs1)` and `hsv.b rs2,(rs1)`.
- **Zalasr.** `riscv.zalasr.sinc` adds the load-acquire forms `l{b,h,w,d}.aq`/`.aqrl` and the
  store-release forms `s{b,h,w,d}.rl`/`.aqrl`. Each is a plain load or store; the ordering is
  not modelled.
- **Zfbfmin.** `riscv.zfbfmin.sinc`, also generated, holds `fcvt.bf16.s` and `fcvt.s.bf16`.
  Both are user operations whose result is written NaN-boxed, and `fcvt.s.bf16` prints no
  rounding mode.
- **Smrnmi and Ssctr.** `mnret` returns to `mnepc`; `mnscratch`, `mnepc`, `mncause` and
  `mnstatus` now have names. `sctrclr` (Ssctr) replaces the pre-1.10 `sfence.vm` on its
  encoding.
- **Not done.** Q (128-bit FP) stays undecoded: it needs a language with 16-byte f registers. CSR
  operands print as numbers where LLVM prints names, and `jalr` and `fence` print in Ghidra's
  form.

The generator's opaque fallback now writes a result only to `rd`/`frd`, so a fence takes all its
operands as inputs. It also boxes the result of a conversion to S or H by the format after
`fcvt.`, which affects `fcvt.s.w`/`fcvt.h.l`... with a static rounding mode in `riscv.fd.sinc`
and `riscv.zfh.sinc`.

### RISC-V F and D

`riscv.fd.sinc` decodes the F and D extensions. It is generated from the Sail model's
`fext_insts.sail` and `dext_insts.sail` by `tools/gen_riscv_sail.py`
(`docs/sleigh-from-isa-specs.md` has the command). It replaces the hand-written
`riscv.rv32f.sinc`, `riscv.rv64f.sinc`, `riscv.rv32d.sinc` and `riscv.rv64d.sinc`; `riscv.rv32f.sinc`
now holds only the `fliConstS` table that `riscv.zfa.sinc` displays through. It is included for
FPSIZE 64, the only FLEN any RISC-V language uses.

- Arithmetic, square root and conversions lift to `f+`/`f-`/`f*`/`f/`/`sqrt`/`int2float`/
  `float2float` when the rounding mode is `rne`, or `dyn` (read as the `rne` a program starts with).
  Conversions that are always exact (`fcvt.d.s`, `fcvt.d.w`, `fcvt.d.wu`) lift this way under every
  mode. With a static `rtz`/`rdn`/`rup`/`rmm`, where p-code has no operation that rounds that way,
  an inexact operation is a user operation named after the mnemonic (`fadd_s`). The exception is
  float-to-integer conversion with `rtz`, the C cast: it truncates and saturates as the ISA does.
  NaN and values above the range give the maximum, values below it the minimum (0 for the
  unsigned forms). `fcvt.lu` handles values of 2^63 and above by subtracting 2^63 first.
  Unsigned 64-bit integer-to-float conversion halves the value, keeping a sticky bit, when the top
  bit is set.
- The fused multiply-adds are user operations (`fmadd_d(a, b, c)`): p-code has no fused operation,
  and `a * b + c` rounds twice. Exception flags are not modelled.
- `fclass` builds its one-hot mask from the sign, exponent and mantissa. `fmin`/`fmax` return the
  other operand for one NaN and the canonical NaN for two, and order -0 below +0. `feq`/`flt`/`fle`
  are the p-code compares.
- `fsgnj*` build the result from the sign and magnitude bits. The `rs2 = rs1` aliases `fmv`,
  `fneg` and `fabs` (constructors with `op1519=op2024`) are a copy, `f-` and `abs()`.
- Single-precision results are written NaN-boxed (`0xffffffff00000000 | zext(v)`), as `fassignS`
  does. That includes the user operations, whose result is the low word: `frd = 0xffffffff00000000 |
  zext(fadd_s(...))`. Single-precision sources are NaN-unboxed as the ISA requires
  (`--unbox exact`): a register whose upper 32 bits are not all ones reads as the canonical NaN.
  `boxedcompare` (§3) folds the test for values written boxed or loaded boxed. Under
  `fpargboxed` it also folds the test for the FP argument registers on entry and a call's
  `fa0`/`fa1` result, which the psABI boxes, so compiled code prints no unboxing.

The generated file decodes what LLVM decodes: 2496/2496 RV64 and 2176/2176 RV32 sampled words, plus
every near miss. The hand-written files rejected `fcvt.d.s`, `fcvt.d.w` and `fcvt.d.wu` with a
static rounding mode. Against QEMU (`tools/sail_sleigh_compare.py --fp`), the generated file
differs only on unboxed sources. The hand-written one differed on 109 of 251 sampled words:
rounding, saturation, `fclass` (unimplemented) and the fused multiply-adds.

### RISC-V Zfa (#98)

`riscv.zfa.sinc` decodes Zfa 1.0. It is generated from the Sail model's
`zfa_insts.sail` by `tools/gen_riscv_sail.py` (`docs/sleigh-from-isa-specs.md`) and
replaces the hand-written file and `fli.s` in `riscv.rv32f.sinc` (§ GH-7451), whose
decoding it repeats word for word. The 32 `fli` constants (`fli.s`, `fli.d`, `fli.h`)
are one constructor each, displayed through `fliConstS`, that writes the
constant's bit pattern (NaN-boxed for S and H) instead of calling the `fli` user
operation. Single- and half-precision sources are NaN-unboxed as the ISA requires:
a register whose upper bits are not all ones reads as the canonical NaN, and S/H
results are written NaN-boxed. `fminm`/`fmaxm` follow Sail: either operand NaN
gives the canonical NaN, `-0` orders below `+0`, otherwise the quiet `f<=`
decides. The quiet compares `fleq`/`fltq` are `f<=`/`f<` on the unboxed values.
`fround`/`froundnx` with a static rounding mode lift to `floor` (rdn), `ceil` (rup),
`round` (rmm) or `floor`/`ceil` by sign (rtz); `rne` and `dyn` have no p-code
operation and stay user operations named after the mnemonic, taking the source and
the rounding mode. `fcvtmod.w.d` lifts Sail's modular conversion: the low 32 bits
of the truncated integer, 0 for NaN, infinities, subnormals and exponents of 84 or
more, sign-extended on RV64. On RV32, `fmvh.x.d` takes the high word of a double and
`fmvp.d.x` builds one from `rs2:rs1`. Floating-point exception flags are not
modelled. Before, the hand-written file read S and H operands without unboxing and
returned the other operand instead of the canonical NaN, so `fminm.s`, `fmaxm.s`,
`fleq.s` and `fltq.s` (and their H forms) disagreed with QEMU on unboxed inputs.
Exercised by `unlace-cli/tests/riscv_zfa.rs`: one probe row per encoding (all 32
`fli` constants) against LLVM's names, RV32 and RV64, and LLVM-selected `fminm.d`,
`fmaxm.s`, `fround.d`, `fli.d` and `fleq.d` functions that decompile with no bad or
unimplemented instruction.

### RISC-V cache-block operations, hints, may-be-operations and CFI (#98)

`riscv.hints.sinc` decodes, in every RISC-V language:
Zicbom/Zicboz `cbo.clean`, `cbo.flush`, `cbo.inval`, `cbo.zero` (MISC-MEM
funct3 010, lifted as user operations on `rs1`, since the block size is
not known statically); the Zicbop prefetches `prefetch.i/r/w` (the `ori x0`
encodings with `rs2` 0, 1, 3, offset `imm[11:5] << 5`; no-ops); Zawrs
`wrs.nto`/`wrs.sto` and Zihintpause `pause` (user operations); Ztso
`fence.tso` (`fence()`, which plain `fence` with its `fm=0` pattern never
matched); and the Zihintntl hints `ntl.p1`, `ntl.pall`, `ntl.s1`, `ntl.all`
and their `c.ntl.*` forms (no-ops, in the `add x0,x0,rs2` and `c.add x0,rs2`
HINT space). Before, the cache-block, wait and may-be-operation encodings
were bad instructions and the hints printed as `ori`, `fence` or `add`.

Zimop `mop.r.0`..`mop.r.31` and `mop.rr.0`..`mop.rr.7` (SYSTEM funct3 100
with bit 31 set, disjoint from the hypervisor loads and stores there) write
zero to `rd`, their behaviour unless an extension redefines them; Zcmop
`c.mop.1`..`c.mop.15` (the reserved `c.lui` with an odd register and a zero
immediate) do nothing. The number in each mnemonic comes from a display-only
subtable. Zicfiss redefines some of them: `sspush` (`mop.rr.7` with
`rs2` = `ra` or `t0`), `sspopchk` (`mop.r.28` with `rs1` = `ra` or `t0`),
`c.sspush ra` (`c.mop.1`) and `c.sspopchk t0` (`c.mop.5`), whose shadow-stack
push and check do not touch the program's own data and lift as no-ops, as
x86 `endbr64` does; `ssrdp rd` (`mop.r.28` with `rs1` = 0) reads the
shadow-stack pointer through a user operation; and `ssamoswap.w`/`.d` (AMO
funct5 01001) swap like `amoswap`. Zicfilp's `lpad` (`auipc x0`) is a no-op.
Exercised by `unlace-cli/tests/riscv_hints.rs`: one probe row per encoding
against LLVM's names, RV32 and RV64, and hand-written functions using them
that decompile with no bad or unimplemented instruction (`cfi_add`, whose
landing pad and shadow-stack push and check surround `add a0,a0,a1`, still
returns `a0 + a1`).

### RISC-V moves and conversions from FP to integer registers (GH-831)

`fmv.x.d` copies the 64-bit pattern of its FP source into the integer
destination. `fmv.x.w` copies the low 32 bits of the FP register and, on RV64,
sign-extends them to the register width. `fcvt.w.d`, `fcvt.wu.d`, `fcvt.w.s`
and `fcvt.wu.s` write their 32-bit result the same way. The unsigned forms
convert to a 64-bit integer and keep its low 32 bits, so a source in
[2^31, 2^32) gets its unsigned value, which a 32-bit signed conversion cannot
represent.
The FP operand is read as a value. Reading it through a register-space pointer
to the operand's address would read the temporary that the operand table
exports, at register offset 0x900, which prints as `dat_900`. The result is
written to `rd` with `assignW`. A destination table that exports a temporary
copy of the register would drop the write, which made these conversions
produce no value at all. The fix is in the RISC-V SLEIGH sources, so
`riscv.lp64d.sla`, `riscv.ilp32d.sla` and `andestar_v5.sla` must be rebuilt.
Exercised by `tests/stages/gh831-riscv-fpmove.toml` (RV64: a call result moved
by `fmv.x.d` and `fmv.x.w`, and all four conversions) and
`tests/stages/gh831-riscv32-fpmove.toml` (the RV32 forms).

The x87 `FIST` and `FISTP` lifts preserve integer conversion as width-specific
`x87_float_to_int16`, `x87_float_to_int32`, or `x87_float_to_int64` user operations.
Each receives the full 80-bit operand and control word, retaining rounding-mode
dependence and masked-invalid conversion behavior symbolically. A generic
round-then-cast would incorrectly impose half-away rounding and discard the
control word. `FISTP` retains its stack pop; `FIST` does not pop. `FISTTP` remains
the separate truncating conversion. These operations do not add modeling of
x87 status updates or unmasked exceptions that suppress writes and pops. When
the control word provably selects round-toward-zero, as in compiled C
conversions, `x87truncate` (§3.5) turns the operation back into `FLOAT_TRUNC`.
That proof reads the control word's dataflow, so every instruction that
replaces the control word defines it: `FLDCW`, `FLDENV`, `FRSTOR`,
`FINIT`/`FNINIT`, and the reinitialization after `FSAVE`/`FNSAVE`. `FXRSTOR`
loads it from the first word of its area. `XRSTOR` and `XRSTORS` load it the
same way when `EAX` bit 0 and the area's `XSTATE_BV` bit 0 are set, reset it
to `0x037f` when only `EAX` bit 0 is set, and leave it unchanged otherwise.

A VEX instruction that has no vvvv operand requires the field to be 1111b, as the
processor does (anything else is #UD), and the VEX mask and AMX tile instructions
require register operands without the R/B extensions. Outside 64-bit mode VEX.W
is ignored by the instructions whose W1 form exists only in 64-bit mode, and the
FMA3 tables are part of the 16- and 32-bit languages.

AMD's XOP encoding (an `8F` byte whose next byte selects map 8, 9 or 0Ah) decodes
like a 3-byte VEX prefix into map numbers 8-10, and `amd_xop.sinc` (generated by
`tools/gen_x86_xop.py` from LLVM's TableGen records) holds the FMA4, XOP, TBM and LWP
instructions. FMA4, `VFRCZ`, `VPPERM`, `VPERMIL2` and LWP lift to user operations;
the XOP integer instructions and TBM lift to p-code, written from the AMD64 APM.
Outside 64-bit mode the high bit of VEX/XOP.vvvv and of an is4 register byte is
ignored when it names a register.

The stack width of a push, pop, call, return, `ENTER`/`LEAVE` or `PUSHA`/`POPA` is
the stack segment's, so an `0x67` prefix (which only changes how a memory operand
is addressed) does not switch such an instruction between `SP` and `ESP`: the
`prefix_67` context bit records the prefix and `$(STACK16)`/`$(STACK32)` undo it
(a repeated `0x67` changes nothing). In 16-bit code, a 32-bit address (an `0x67`
prefix, the `ESI`/`EDI` string forms, `XLAT`) still adds the segment base:
selector*16 in real mode and selector*0x10000 in 16-bit protected mode, with `SS`
the default for an `EBP` or `ESP` base. `AAA` adds 0x106 to `AX` and `AAS`
subtracts 6 from `AX` and 1 from `AH`; `AAD`/`AAM` take their flags from `AL`.
`PUSHF` stores `EFLAGS` bit 1 as 1, a segment-register push or pop follows the
operand size, and a far `CALL` with a 32-bit operand pushes `CS` zero-extended.

The x87 condition bits `C0`-`C3` are their own registers; `FSTSW`/`FNSTSW` (to
`AX` or memory) store `FPUStatusWord` with bits 8-10 and 14 replaced by them,
so a status word read after an arithmetic instruction, `FPREM` or `FXAM` sees
the bits that instruction set (before, only `FCOM`-family compares wrote the
word). `FXAM` classifies `ST0` from its encoding: `C1` is the sign bit (also for
a zero or NaN), `C0` is an all-ones exponent (NaN or infinity), `C3` a zero
exponent (zero or denormal), `C2` a non-NaN non-zero value; an empty register
and the unsupported 80-bit encodings are not told apart. `FPREM` converts its
truncated quotient back to a float before the multiply (it multiplied the
integer's bits), and `FPREM`/`FPREM1` set `C2` when the exponents differ by
more than 63 (a partial remainder) and `C1`, `C3`, `C0` to bits 0-2 of the
quotient's magnitude. Their remainder comes from a rounded divide and multiply,
so it is exact only while the quotient's product with `ST1` fits 64 bits.
Loads, exact stores, `FXCH`, `FCHS`, `FABS`, `FINCSTP`, `FISTTP` and the
constant loads clear `C1` as the SDM says. `FLDPI`, `FLDL2E`, `FLDL2T`, `FLDLG2`
and `FLDLN2` stay the widened double values (their low 11 bits differ from the
hardware's): a p-code constant is at most 8 bytes, and building the 80-bit value
from two integers prints as bit operations.

The x86 `BOUND` lift loads adjacent signed lower and upper limits at the
operand width and passes the index and both limits to the side-effecting,
outputless `x86_bound_check16` or `x86_bound_check32` user-op. Its contract is to
continue normally exactly when `lower <= index <= upper`, with all comparisons
signed at the named width, and otherwise raise the vector-5 bounds-range
exception (#BR) associated with the faulting instruction. Normal completion
preserves registers and flags. The user-op introduces no ordinary-call
arguments, clobbers, or stack adjustment, and avoids adding control-flow
diamonds around every check. The abstraction does not specify OS handler
dispatch or resumable exception state. Both operand widths preserve the checks
instead of lifting to an empty operation list.

In 64-bit mode the x86 spec decodes the user-interrupt group (`uintr.sinc`):
`SENDUIPI r64` is the `F3`-prefixed register form of `0F C7 /6` (a `66` or
`REX.W` prefix does not change its 64-bit operand), so it is no
longer lifted as `RDRAND`, and `UIRET`, `TESTUI`, `CLUI` and `STUI` are the
`F3`-prefixed `0F 01 EC..EF` forms (`CLUI`/`STUI` were `RDPKRU`/`WRPKRU`). Each
lifts to a user-op of its own name; `UIRET` pops `RIP`, `RFLAGS` and `RSP` and
returns, and `TESTUI` writes `CF` from its user-op and clears the other
arithmetic flags. `PREFETCHIT0`/`PREFETCHIT1` are the RIP-relative `0F 18 /7`
and `/6` encodings, lifted as the other prefetch hints are (no operations);
every other `0F 18 /4..7` encoding stays a reserved NOP. The AVX-512PF
`VGATHERPF0/1{D,Q}P{S,D}` constructors take their VSIB operand (`vm32z`,
`vm64z`, `vm32y`) like the `VSCATTERPF` family, so the index is the ZMM or YMM
register the SIB names and the user-op receives the gather address; the lift
loads nothing. Outside 64-bit mode `z_vm64z` is the 32-bit-address form of
the same operand (`vMem32z`), so the qword-index gathers still decode in
32-bit code, while the other qword-index EVEX scatters (`VSCATTERPF*Q*`,
`VPSCATTERQ*`) are still built for 64-bit mode only. An index in
`ZMM16`..`ZMM31` (`EVEX.V'`) still reads as `ZMM0`..`ZMM15`, as for every EVEX
VSIB operand. Exercised by
`tests/stages/gh1627-x86-senduipi-gatherpf.toml`.

In 64-bit mode the x86 spec also decodes Intel AMX (`amx.sinc`, #98):
AMX-TILE `LDTILECFG`, `STTILECFG`, `TILERELEASE`, `TILEZERO`, `TILELOADD`,
`TILELOADDT1`, `TILESTORED`; AMX-INT8 `TDPBSSD`/`TDPBSUD`/`TDPBUSD`/`TDPBUUD`;
AMX-BF16 `TDPBF16PS`; AMX-FP16 `TDPFP16PS`; AMX-COMPLEX `TCMMIMFP16PS` and
`TCMMRLFP16PS` (VEX.128 map 0F38, W0, opcodes 49, 4B, 5C, 5E and 6C, the
mandatory prefix in VEX.pp selecting the variant; the dot products take the
destination tile in ModRM.reg, the first source in ModRM.rm and the second in
VEX.vvvv). The tile registers are not varnodes: each instruction is a user
operation that takes tile numbers (displayed `TMM0`..`TMM7`), `LDTILECFG`
reads and `STTILECFG` writes the 64-byte configuration in memory, and the tile
loads and stores take the `[base + index*scale]` address whose index register
is the row stride. Before, each was a bad instruction. Exercised by
`unlace-cli/tests/x86_amx.rs` (every instruction against the LLVM-assembled
probe, and a tile int8 multiply kernel that decompiles to the user operations).

The x86 VMX lifts report the instruction's outcome the way the hardware does
(Intel SDM 31.2, "Conventions"): each of `VMLAUNCH`, `VMRESUME`, `VMXOFF`,
`VMXON`, `VMPTRLD`, `VMCLEAR`, `VMWRITE`, `INVEPT` and `INVVPID` is a user-op
of its own name whose 4-byte result is the status, 0 for VMsucceed, 1 for
VMfailValid and 2 for VMfailInvalid (the values the `__vmx_*` compiler
intrinsics return), and the `vmxflags` macro writes `ZF = status == 1`,
`CF = status == 2` and clears `OF`, `SF`, `AF` and `PF`, so a following
`setna`/`jbe` tests that status and a `jz`/`jc` picks one failure kind.
`VMREAD` keeps its value output and takes the status from the input-less
`vmx_status` user-op that follows it; `VMPTRST` stores the result of `vmptrst`
to its operand (it no longer passes the loaded qword to the user-op) and
always succeeds. In 64-bit mode `VMREAD r/m64, r64` and `VMWRITE r64, r/m64`
decode whatever `REX.W` says, since their operand size is fixed at 64 bits
there and compilers encode them without the prefix. `VMFUNC` and `VMCALL`
write no flags: `VMFUNC` leaves them unchanged, and the flags after a guest's
`VMCALL` are whatever the hypervisor returns. Exercised by
`tests/stages/gh1628-x86-vmx-decode-flags.toml`.

For the bounded local policy (`localstackviews.rs`), the `FlowEmit::dump` seam in
`crates/unlace-lift/src/p2_lift/flow.rs` records original STORE and
persistent memory COPY identities for the bounded P6 policy. Register COPYs do
not contribute. Generational operation identity and original receiver storage
are retained separately from instruction-start flags, which clones can copy.
The callback changes neither lifted P-code nor flow; it supplies provenance
before optimization can create indistinguishable same-address reconstructions.

### z/Architecture (s390x) processor module (GH-1635)

`specs/Ghidra/Processors/s390x` is a unlace-written SLEIGH module for the 64-bit
IBM z/Architecture, language id `s390x:BE:64:default`. It is the first slice of
s390x support: the general instructions through the z15 facilities, the
binary-floating-point instructions on `f0`-`f15` (short, long, and extended in
register pairs), the vector facility (`s390x_vector.sinc`, below), and the s390x
ELF ABI. The four `s390x_*.sinc` files are written by
`specs/Ghidra/Processors/s390x/gen_sinc.py` from its opcode tables.

Instructions are 2, 4 or 6 bytes long, fixed by the top two bits of the first
byte, and each length has its own token. A base or index field of 0 means "no
register", never `r0`, so every address operand has a constructor per
combination and a displacement-only operand exports a constant. A 32-bit
instruction reads and writes the low half `rNl` of its register and leaves the
high half alone.

The 2-bit condition code is held one-hot in four flags, `CC0`-`CC3`: `CCn` is
set exactly when the condition code is `n`. A branch mask is then a boolean
over the flags. A mask that leaves out condition code 3 is written as the
negation of the flags it excludes (`jlh`, mask 6, is `!CC0 && !CC3`), and a
comparison writes a constant 0 to `CC3`, so the test after a compare folds to
one relation: `cgr; jlh` is `a != b`. Two more flags repeat the same state for
the masks that name two codes: `CCA` is "condition code 2 or 3" and `CCB` is
"1 or 3". Every instruction that sets the condition code sets both, in the form
it can state most simply: a compare writes its two strict relations, so
`clgr; jhe` (`!CCB`) is an unsigned `a >= b`; a logical add writes the carry to
`CCA` and "result is not zero" to `CCB`, so the add-with-carry that follows
reads the carry itself and `algr; jhe` is a test for zero. Signed arithmetic
sets `CC3` on overflow and qualifies the other three with its negation, as the
machine does. `ipm` rebuilds the numeric value as `CC1 + 2*CC2 + 3*CC3`.

`STMG`/`LMG` and the other load- and store-multiple forms move registers R1
through R3, wrapping from 15 to 0. Each of the 16 registers has its own
sub-constructor pair, one matching when the register is in the range and one
when it is not, so a prologue is 16 named stores at constant offsets and the
saved registers are recognized as such. The address is latched in the scratch
register `multi_addr` before the first load because `lmg %r6,%r15,48(%r15)`
replaces its own base.

`br %r14` is a return and `br` through any other register an indirect jump;
`brasl`/`basr` write the return address to their first operand and call.
Compare-and-branch instructions test their own operands without touching the
condition code. Load, store and select on condition skip to the next
instruction when the condition fails.

`MVC`, `CLC`, `NC`, `OC` and `XC` of 1, 2, 4 or 8 bytes are one access of that
width (big-endian storage makes an unsigned integer compare the same as the
byte-wise one). Other lengths, and the string instructions `SRST`, `CLST` and
`MVST`, are user operations over their operands; the model is the completed
operation, so the `jo` that re-runs a partially completed one is never taken.
`EX`/`EXRL` stay a user operation over the modified register and the target
address.

`s390x.cspec` is the ELF ABI: `r2`-`r6` for integer arguments, `f0`, `f2`, `f4`,
`f6` for floating-point ones, further arguments from `160(r15)`, results in `r2`
or `f0`, the return address in `r14`. A `float` is the leftmost four bytes of
its register, so each floating-point register is listed as its short view and
then whole. The caller's 160-byte register save area at `0(r15)` is in the
callee's local range, because the callee's prologue stores into it.
Exercised by `tests/stages/s390x.toml`.

The module also decodes, with exact p-code: the high-word facility (`aih`, `alsih`,
`alsihn`, `ahhhr`/`ahhlr`, `alhhhr`/`alhhlr`, `shhhr`/`shhlr`, `slhhhr`/`slhhlr`,
`chhr`/`chlr`/`chf`/`cih`, `clhhr`/`clhlr`/`clhf`/`clih`, `lbh`/`lhh`/`lfh`/`llch`/`llhh`,
`stch`/`sthh`/`stfh`, `brcth`), which operates on bits 0-31 (`rNh`) of a register; the z14
`msrkc`/`msgrkc`/`msc`/`msgc` (condition code 3 when the signed product overflows) and `mg`;
the z15 `ncrk`/`ncgrk`, `ocrk`/`ocgrk`, `nnrk`/`nngrk`, `nork`/`nogrk` and `nxrk`/`nxgrk`;
`bi`/`bic` (a branch to the doubleword at the address); `cds`/`cdsy`/`cdsg` (a compare and
swap of a register pair) and `lpq`/`stpq`; `lae`/`laey`; `bal`/`balr` (64-bit linkage, as
`bas`/`basr`); `bxh`/`bxle`/`bxhg`/`bxleg`; `slda` (condition code 3 when a bit unlike the sign
is shifted out); and the BFP `TEST DATA CLASS` instructions `tceb`/`tcdb`/`tcxb` (the class of
the operand, one of zero, normal, subnormal, infinity, quiet or signalling NaN by sign, against
the 12-bit mask in the second-operand address), which `isnan`/`isinf` compile to. Before, a
z13+ build halted on the high-word instructions and every `isnan` halted on `tcdb`. Checked with
`tools/difffuzz --arch s390x --oracle qemu`, which also found that `risbhg` and `risblg` took their
start and end positions from six bits of I3/I4 instead of bits 3-7 (a position within the word),
so `risblg r11,r1,0xdf,0xe4,11` cleared the register instead of inserting a wrapped field.

### s390x hexadecimal floating point and decimal instructions (#862)

`specs/Ghidra/Processors/s390x/gen_hfpdec.py` writes `s390x_hfpdec.sinc` from
`hfpdec_insts.json`: the LLVM SystemZ TableGen records of the hexadecimal floating-point
instructions, packed decimal (`ap`, `cp`, `zap`, `srp`, `ed`, `pack`, `unpk`, `cvb`, `cvd`,
...), decimal floating point (`adtr` ... `tdgxt`, `cdzt`, `cdpt`, ...), the translate and
storage-to-storage forms the module lacked (`tr`, `trt`, `trtr`, `trte`, `mvn`, `mvz`, `mvcin`,
`mvck`, `mvcle`, `mvcrl`, `plo`, ...) and the BFP storage multiply-adds; `mxr` and `mxd`,
which LLVM lacks, are added by hand. The token fields it uses go to `hfpdec_fields.txt`, which
`gen_sinc.py` adds to the three instruction tokens. Exact p-code: the HFP sign operations
(`lpdr`, `lndr`, `lcdr`, `ltdr` and the short forms; the condition code is 0 for a zero
fraction whatever the sign and exponent), `ts`, `mdebr`/`mdeb` (exact in long), `madb`,
`maeb`, `msdb`, `mseb` (multiply then add, rounded twice, like `madbr`), `mxdb`, and
`bsm`/`bassm` in the 64-bit addressing mode (an indirect branch and an indirect call to R2
with bit 63 cleared; bit 63 of R1 is set). Every other instruction is a user operation
`hd_<mnemonic>` over its operands (an `L`-length operand passes its byte count), with
`hd_<mnemonic>_cc` setting the condition code. The difffuzz sweep configuration of #862
(`--arch s390x --oracle qemu --count 200 --seed 1`) went from 97 decode findings to none; QEMU
implements neither HFP nor `bsm`/`bassm`, so those lifts are checked against the
architecture's definition only.

The same generator now also covers the CPACF crypto instructions, the privileged and system
instructions (with the control registers `c0`-`c15`), transactional execution, guarded
storage, access-register moves and the remaining storage forms, so every instruction of LLVM's
SystemZ target decodes. Their user operations take the implicit registers of the LLVM record
(`r0l` and `r1` for CPACF) and write every output register, the condition code included.
`lpsw`/`lpswe`/`lpswey` return to the new PSW's instruction address. Exact p-code for `lzrg`,
`lzrf`, `llzrgf`, `lpd`, `lpdg`, `lfpc`, `stfpc` and `srnm`/`srnmb`/`srnmt`, and for the
condition masks the hand-written rows lacked (0 and 15 of load/store/select on condition, 0, 1,
14 and 15 of compare and trap, every mask of `locfh`, `stocfh`, `clt` and `clgt`), each its own
constructor; mask 0 has no effect and mask 15 is unconditional. Checked against QEMU (`--oracle
qemu`, every mask of those records plus the exact loads): no mismatch.

### s390x vector facility (#98)

`specs/Ghidra/Processors/s390x/gen_vector.py` writes `s390x_vector.sinc` from
`vector_insts.json`, the 798 `E6`/`E7` instructions of LLVM's SystemZ TableGen records
(mnemonics, operands and encoding bits). `v0`-`v31` are 16-byte registers and `f16`-`f31`
(and `f16s`-`f31s`) extend the existing `f0`-`f15` views of their leftmost doubleword (word),
so a scalar W instruction (`wfadb %f0,%f2,%f4`) reads and writes a `double` like the BFP
instructions do. A register operand is a subtable over its four-bit field and its RXB bit.
The generator gives exact p-code to the families LLVM emits at `-march=z13` and later
(lane arithmetic, logic, compares, shifts, permutes, loads and stores, scalar and vector
binary floating point including compares, data-class tests, conversions and `vfi`/`wfi` for
explicit rounding modes) and a user operation `vec_<mnemonic>` (plus `vec_<mnemonic>_cc`)
to the rest. `vsl`/`vsrl`/`vsra` shift each byte by its own count from the matching byte
of the shift operand, as the vector-enhancements 2 facility defines. `lde`/`lder` (HFP load
lengthened, which keeps the bits and clears the right half) are decoded because LLVM loads a
`float` with them. Checked with `tools/difffuzz --arch s390x-vec --oracle qemu` (every
encoding of the exact families, three per instruction): no mismatch outside the fused
multiply-adds. A static musl image built for `-mcpu=z15` went from 49 of 113 functions
halting to 7, all on the `0x0000` crash word.

### PowerPC Power ISA 3.1 (POWER10) (#98)

`specs/Ghidra/Processors/PowerPC/gen_isa31.py` writes `ppc_isa31.sinc` from `isa31_insts.json`,
the 267 LLVM PowerPC TableGen records of Power ISA 3.1 (prefixed 8-byte instructions, MMA,
the paired vector loads and stores, and the new fixed-point, VMX and VSX instructions) plus
four ISA 3.0 records the vendored spec lacked. Every Power ISA language includes it except
`PowerPC:BE:32:e200-SPE2`. A prefixed instruction is one constructor over a prefix token and
a suffix token, with the 34-bit displacement or immediate assembled in a disassembly action;
an `R=1` (PC-relative) address is `inst_start + D`. `acc0`-`acc7` are 64-byte registers over
the VSRs they shadow. The generator gives exact p-code to the loads and stores (including
the paired and the rightmost-element forms), `paddi`/`pli`, the byte reverses, `setbc`
and its three variants, the mask moves, extracts, expands and counts, the 128-bit integer
compares, shifts and rotate, the vector integer divides and moduli, the doubleword
multiplies, the shift-double-by-bit-immediate, the clear-bytes, the vector string isolates,
the blends and the immediate splats, and a user operation `p31_<mnemonic>` to the rest (MMA
rank-k updates, permutes, inserts and extracts, bit gathers, quad-precision and BF16
conversions). In `vsx.sinc`, the 83 VSX user operations that took their target as an
argument now assign it, and the permutes, merges, selects, lane arithmetic and compares,
scalar compares and data-class test, the ISA 3.0 scalar loads and stores, the direct moves
and the byte reverses lift exactly. Decode was checked against `llvm-objdump --mcpu=pwr10`
(every ISA 3.0/3.1 record decodes) and the p-code with `tools/difffuzz --arch ppc64le-p10` and
`--arch ppc64-p10` against QEMU's `power10` CPU. A Lua 5.2 object built for `-mcpu=pwr10` went
from 352 of 545 functions halting to 91, the count of its `-mcpu=pwr8` build. Details and
gaps in `specs/Ghidra/Processors/PowerPC/README.md`.

### x86-64 lifter fixes from differential fuzzing

`tools/difffuzz` (see `docs/difffuzz.md`) runs single x86-64 instructions through the
SLEIGH p-code and through Unicorn from the same register state; each disagreement below was
confirmed on hardware before the spec changed.

- A 32-bit register destination clears bits 63:32 in 64-bit mode. `ia.sinc`, `lockable.sinc`,
  `avx.sinc`, `avx512.sinc`, `avx512_manual.sinc` and `rdrand.sinc` now build
  `check_Reg32_dest` (or `check_Rmr32_dest`) for `XADD m32,r32`, `XCHG m32,r32`,
  `MOVBE r32,m32`, `MOVMSKPS`/`MOVMSKPD`, MMX `PEXTRW`, `LSL`, `RDRAND`/`RDSEED r32`,
  the VEX and EVEX `VCVT[T]SS2SI`/`VCVT[T]SD2SI`/`VCVT[T]S[SDH]2USI`/`VCVT[T]SH2SI`,
  `VMOVMSKPS`/`VMOVMSKPD`, `VPEXTRW` and `KMOV[BWD] r32`; before, `lock xadd [rdi],eax`
  left the old upper half of RAX in place. In the locked `XADD`/`XCHG` the zero extension is
  built right after the register write, inside the `LOCK()`..`UNLOCK()` envelope, so the
  `atomics` fold, which requires `UNLOCK()` to be the instruction's last op, still applies.
- `MOV r32,Sreg` and `MOV r64,Sreg` (`8C` with a register operand) zero-extend the selector
  into the whole register; only the 16-bit form writes 16 bits.
- `90` with a REX prefix that lacks REX.B (`44 90`, `4C 90`, ...) is `NOP`, not
  `XCHG EAX,EAX` (which zeroed the top of RAX).
- The hint-NOP rows `0F 18`..`0F 1F` decode with REX.W (`NOP rm64`).
- A repeated `66` prefix changes nothing: before, the second one toggled the operand size
  back, so `66 66 35 imm16` decoded as a 7-byte `XOR EAX,imm32`.
- `EXTRQ xmm,xmm` reads the bit index from bits 13:8 of the control register (it read 11:6),
  and `EXTRQ`/`INSERTQ` treat a field length of 0 as 64, as the AMD APM defines.

### AArch64 lifter fixes from differential fuzzing

Found by `tools/difffuzz` against Unicorn and checked against the Arm ARM.

- `LDRSB`/`LDRSH` into a W register (immediate, register, unscaled and unprivileged forms in
  `AARCH64base.sinc`) sign-extend the value to 32 bits and zero-extend that into the X register;
  before, the immediate and register forms sign-extended to 64 bits and `LDURSB`/`LDTRSB` W
  zero-extended the byte.
- A write to a B, H, S or D register or to a 64-bit vector arrangement clears the rest of the Z
  register. 395 constructors in `AARCH64neon.sinc` that named `Zd` but never called
  `zext_zb`/`zext_zh`/`zext_zs`/`zext_zd` (scalar FP arithmetic and min/max, `FMADD`/`FMSUB`,
  `BSL`/`BIT`/`BIF`, `EXT`, the saturating, rounding and narrowing shifts, the across-lanes
  reductions, ...) now do, as do the 41 `LD1`..`LD4` and `LD1R`..`LD4R` constructors in
  `AARCH64ldst.sinc` with 64-bit arrangements (one `zext_zd` per loaded register).
- The fixed-point `FCVTZU d,d,#fbits` and `FCVTZU h,h,#fbits`, `SCVTF`/`UCVTF` `.4H`/`.8H`
  `#fbits` and scalar `URSHR d,d,#shift` decode their shift with the element size of the
  destination (`Imm_shr_imm64`/`Imm_shr_imm16`); `fcvtzu d22,d5,#50` printed `#-0xe`.

### RISC-V NaN-boxing of narrower float results (#549)

With D (FLEN 64) every single-precision result written to an `f` register is NaN-boxed:
bits 63:32 are set to one (ISA manual, "NaN Boxing of Narrower Values"). `fassignS`
(`riscv.table.sinc`) writes `zext(src) | ~zext(0xffffffff:4)`, and every single-precision
write goes through it: the F arithmetic, `flw`, `fmv.w.x`, the conversions to `.s` including
`fcvt.s.d`, `fsgnj*.s`, `fmin`/`fmax.s`, and RV32's `c.flw`/`c.flwsp` (the generated Zfa forms box
in their own p-code). `fassignH` boxes a Zfh half result the same way (bits 63:16). A single-precision read still
takes the low 32 bits without checking that the register is boxed (the ISA reads an
unboxed value as the canonical NaN). Found by `tools/difffuzz`.

The float argument and return entries of `riscv32-fp.cspec` and `riscv64-fp.cspec` take
2-byte values (`minsize="2"`), since the LP64D/ILP32D ABIs pass a `_Float16` NaN-boxed in
`fa0`..`fa7`. With `minsize="4"` a half argument was not recognised and `fadd.h fa0,fa0,fa1;
ret` decompiled to `return a;`.

### RISC-V compressed indirect jumps clear bit 0

`c.jr`, `c.jalr` and `ret` (`riscv.rvc.sinc`) expand to `jalr`, which clears bit 0 of the
target; they now jump to `rs1 & ~1` as the `jalr` constructors in `riscv.rv32i.sinc` already
did. Found by `tools/difffuzz`.

### ARM lifter fixes from differential fuzzing

Found by `tools/difffuzz` against Unicorn.

- `STRHT` (`ARMinstructions.sinc`) builds its `addrmode3` after `COND`, so a failing
  condition no longer writes the base register back, and stores `Rd:2` (it stored all 4 bytes).
- The T32 `AND`, `BIC`, `MOV.W` and `MVN` immediate forms and the `AND.W` and `MVN.W`
  shifted-register forms (`ARMTHUMBinstructions.sinc`) take `thSBIT_CZN` and
  `th_logicflags()`, so with S they set C from the shifter (`ThumbExpandImm12` or `thshift2`),
  as `ORR`, `EOR` and `TST` already did; before, `ANDS.W r8,r11,r9,ROR #21` left C unchanged.

### LoongArch lifter fixes from differential fuzzing

Found by `tools/difffuzz --arch loongarch64 --oracle qemu` (`qemu-loongarch64 -cpu max`).

- `bstrins.w` and `bstrins.d` insert bits `[msb-lsb:0]` of `rj` at `[msb:lsb]` of `rd`; they
  computed `bstrpick`'s field (bits `[msb:lsb]` of `rj`, shifted down) and cleared the low bits of
  `rd`, so `bstrins.w s0,fp,23,14` left `s0` almost unchanged.
- `slli.d`, `srli.d` and `srai.d` mask their 6-bit immediate with `0x3f`; with `0x1f` a shift by
  32..63 was a shift by 0..31.
- `rotr.w`, `rotri.w`, `rotr.d` and `rotri.d` rotate with a logical right shift; an arithmetic
  one filled the rotated-in bits of a negative value with ones.
- `bytepick.w` and `bytepick.d` concatenate the low bytes of `rk` with the high `sa` bytes of `rj`;
  they masked the wrong ends, so `bytepick.w t5,a0,t4,0` returned `a0` instead of `t4`.
- The float-to-integer conversions round as named: `ftintrm` toward minus infinity (`floor`),
  `ftintrp` toward plus infinity (`ceil`), `ftintrz` toward zero; `ftint`, which uses the FCSR
  mode, is the round-to-nearest-even user op that `ftintrne` already was. Before, all but
  `ftintrne` truncated. The `.l.s` forms write the whole 64-bit register; they wrote its low word.

### PowerPC lifter fixes from differential fuzzing

Found by `tools/difffuzz --oracle qemu` (`qemu-ppc`, `qemu-ppc64` and `qemu-ppc64le`).

- `divw.` (`ppc_instructions.sinc`) no longer sets XER[OV] and XER[SO]: only the `o` forms
  record overflow, as `divwu.` already did. Before, `divw. r7,r16,r8` cleared an OV that was set.
- `lhbrx` and `lwbrx` load the halfword or word in the image's byte order and reverse it,
  so they are correct in the little-endian languages too; they composed the result from
  single bytes in big-endian order, so on `PowerPC:LE:64:*` `lhbrx` returned the bytes
  unreversed. `ldbrx` and `stdbrx` (`ppc_isa.sinc`) lift to the byte-reversed doubleword
  load and store instead of the `LoadDoublewordByteReverseIndexed` and
  `StoreDoublewordByteReverseIndexed` user ops, and `ldbrx` reads `(RA|0)`.
- `stswi` with a byte count that is not a multiple of 4 stores only the leftmost bytes of its
  last register (`storeRegisterPartial` in `ppc_common.sinc`); it stored the whole word, so
  `stswi r23,r3,17` wrote 20 bytes.
- `sradi.` sets CR0 from its result (`cr0flags`); it left CR0 unchanged.
- The extended divides `divwe[u][o][.]` and `divde[u][o][.]` (`ppc_isa.sinc`) divide
  `RA || 0` (64 bits for the word forms, 128 for the doubleword forms) by `RB`, and the `o`
  forms set OV when the quotient does not fit. The word forms divided 0 by 0 and the
  doubleword forms divided `RA` itself.
- `bpermd` lifts to the bit permutation (each byte of `RS` selects a bit of `RB`) instead of
  the `BitPermuteDoubleword` user operation, which did not write `RA`.

### AArch64 rounding, saturation and by-element operands (#546)

- `SRSRA`/`URSRA` add the rounding bit (`(x >> s) + ((x >> (s-1)) & 1)`, which cannot overflow);
  the inline `SQRDMULH`/`SQDMULH` (by element) round and saturate the one overflowing product
  (both operands the minimum); `SQDMLAL`/`SQDMLSL`(2) saturate the doubled product and the
  accumulation; `SUQADD` saturates. These 63 constructors in `AARCH64neon.sinc` are rewritten
  lane by lane; the forms that already lift to a `NEON_*` user operation are unchanged.
- The unsigned float-to-integer conversions still lift as `trunc`, so a negative input wraps
  instead of giving 0. Clamping it makes every `(unsigned)f` decompile with a sign test of the
  float's bits, and the C conversion of a negative value is undefined anyway.
- `SUDOT`, `USDOT` and `BFDOT` (by element) read the 32-bit group of Vm selected by H:L
  (`Re_VPR128.4B.dotIndex`, `Re_VPR128.2H.dotIndex`), and `BFMLALB`/`BFMLALT` (by element) the
  halfword of V0-V15 selected by H:L:M (`Re_VPR128Lo.H.vIndexHLM3`); before, the first three
  failed to lift (`generateLocation: null space`) and the last did not decode.
- The FEAT_MOPS `cpyType` table had the four write-unprivileged options (`wt`, `wtn`, `wtrn`,
  `wtwn`) at the wrong encodings, so e.g. `cpyfewtrn` did not decode, and `SETP/SETM/SETE`
  printed as `setpp`/`setpm`/`setpe`.

### AArch64 SHA3, pairwise half-precision add and scalar shift-left immediates

Found by `tools/difffuzz --oracle qemu`. `EOR3` computed `Rn ^ (Rm | Ra)`, `BCAX` did not
complement Ra into an AND-NOT of Rm, and `XAR` shifted the XOR right instead of rotating it;
they now lift as `Rn ^ Rm ^ Ra`, `Rn ^ (Rm & ~Ra)` and a 64-bit rotate. `FADDP` `.4H` put the
pairs of Rm in the low half of the result (the other arrangements already put Rn there). The
scalar `SQSHL`/`SQSHLU`/`UQSHL` (immediate) decoded their left shift with the right-shift
formula (`sqshl d13, d6, #10` printed `#0x36`), and scalar `SLI d` read only 5 bits of its
6-bit shift; they now take `Imm_uimm3`/`Imm_uimm4`/`Imm_uimm5`/`Imm_imm0_63` by element size.

### AArch64 FP16 fixed-point conversions, FMLAL/FMLSL, FP16 FMOV immediate, SABD

Found by `tools/difffuzz --oracle qemu`.

- `FBits16`/`FBits32`/`FBits64` (`AARCH64instructions.sinc`) build 2^fbits from two powers of two,
  so fbits = 64 no longer shifts out to 0. The half-precision fixed-point conversions
  (`FCVTZS`/`FCVTZU` from H to a general register, `SCVTF`/`UCVTF` to H) scale in double
  precision with `FBits64` (2^fbits overflows a half for fbits > 15, and two of them multiplied by
  the fbits count itself), and `FCVTZU h/s/d, #fbits` scales by a double built the same way.
- `FMLAL`/`FMLSL`(2), vector and by element, widen each half to single and accumulate with
  `f+`/`f-` (they multiplied in half precision and added the single-precision bit patterns as
  integers); the product of two halves is exact in single precision, so this is the fused result.
  The by-element forms index V0-V15 by H:L:M (`Re_VPR128Lo.H.vIndexHLM3`).
- `FMOV v.4H/v.8H, #imm` converts the single-precision expansion of the immediate to half
  (`float2float`); it converted the bit pattern as an integer.
- `SABD v.4S` read lane 2 of its doubled difference from bit 94.

### MIPS64 and Release 6 lifter fixes from differential fuzzing

Found by `tools/difffuzz --oracle qemu` (`mips64`, `mips64r6`, `mipsr6`).

- The Release 6 compact branch-and-link instructions (`BLEZALC`, `BGEZALC`, `BGTZALC`,
  `BLTZALC`, `BEQZALC`, `BNEZALC`, in `mips32Instructions.sinc` and `mipsmicro.sinc`) write the
  return address whether or not they branch; they wrote it only on the taken path. `BEQZALC`
  tested `rt s> 0` instead of `rt != 0`.
- `DSLLV`, `DSRLV` and `DSRAV` shift by the low six bits of rs; `DROTRV` rotates by
  `64 - shift` (it used 32).
- On MIPS64, `INS` inserts into the low 32 bits and sign-extends the 32-bit result, as every
  32-bit operation does; it worked on the full 64-bit register.

## 2.9 Go stack-growth prologue folding

**(unlace) `option gomorestack off|auto|always`, default auto,
`crates/unlace-lift/src/p2_lift/gomorestack.rs
(ActionGoMorestack)`.** Every non-leaf function the Go compiler emits opens
with a stack-growth guard: compare SP against the goroutine's stackguard
(`0x10(%r14)` under the amd64 register ABI, the TLS-reached `g` before it), on
failure call `runtime.morestack`/`runtime.morestack_noctxt`, and **loop back to
the function entry** to re-run the prologue on the grown stack. The check is
runtime machinery — the function's own semantics are the fall-through path —
but the back-edge makes the entry a loop head: every live argument register
joins its incoming value with its after-growth value, so parameter recovery
sees phi-fed arguments on every non-leaf Go function and the body renders
wrapped in a loop whose latch calls the runtime. The fold restores
straight-line entry flow.

**Matching is a shape, not a name.** The matcher is the first shared
entry-guard-loop shape in `crates/unlace-middle/src/substrate/idiom.rs
(match_entry_guard_loop)` (the language-runtime idiom vocabulary of
`docs/multilang.md` W2): the cold arm is a basic block whose ONE predecessor
and ONE successor are the same block — the guard — which itself ends in a
CBRANCH and sits directly on the inserted empty entry block
(`FlowInfo::generate_blocks` inserts one whenever the start address has an
incoming edge, which the loop back-edge guarantees here). Only inside that
shape is the callee name consulted (`gomorestack.rs (is_morestack_name)`:
`runtime.morestack` and its `_noctxt`/`c`/`.abi0` spellings — names only the
Go runtime package can define, supplied by the pclntab on a stripped binary or
the symbol table on an unstripped one). A coincidental `runtime.morestack`
call in straight-line flow therefore cuts nothing, and a name-free guard
cuts nothing either.

**The edit and the window.** One `remove_branch` on the guard's cold edge plus
`remove_unreachable_blocks` — the `securitycheck`/`stackguard` primitives —
performed **pre-SSA** (`get_heritage_pass() == 0`, registered at the top of
`mainloop` directly after `cleanupcode`, which owns the same window), so the
entry phi never forms and the guard's compare and stackguard load lose their
readers and die to the ordinary dead-code fixpoint. Deleting the edge asserts
what the runtime guarantees: the function body runs on a stack that holds its
frame.

**The truncated form.** On an unstripped image the discovered no-return
propagation reaches `runtime.morestack*` through its `newstack` tail, marks it
diverging, and flow then HALTS at the prologue's call: the back-edge is never
lifted, no entry block is inserted, and the loop shape above cannot exist —
which silently kept the guard on every function of such an image while its
stripped twin folded. The matcher therefore accepts a second, equally tight
sub-shape (`crates/unlace-middle/src/substrate/idiom.rs
(match_entry_guard_halt)`): the cold arm is a basic block with no out-edges
whose ONLY call is the matched runtime routine, its one predecessor ends in a
CBRANCH, and that predecessor is the function start (a block nothing enters —
without the back-edge there is no inserted entry block). The edit is the same
guard-edge cut. The no-other-call refusal is what keeps a real panic arm —
also diverging, also guarded — out of reach: a genuine runtime prologue arm
contains nothing but the growth call.

**Modes.** `auto` (shipped default) acts only when the image's source language
is Go — the `sourcelang` fact (chapter 01), so the pass is a structural no-op
on every non-Go binary and the XML datatest corpus cannot see it; `always`
drops the language test for corpora with no detection signal (the stage test's
bytechunk); `off` keeps the guard for auditing a hand-patched stackguard.
Pinned by `tests/stages/gomorestack.toml` (four passes: off/always over
the loop form, then `option noreturn runtime.morestack_noctxt` reproduces the
truncated form and off/always pin it) and by the unlace-console
`verify_go_morestack` gate, which builds a real stripped Go binary and proves
the detection-driven `auto` path end to end.
Pinned by `tests/stages/gomorestack.toml` (two-pass, off = the `while` loop
and the `morestack_noctxt()` call render, always = both gone and the body
survives) and by the unlace-console `verify_go_morestack` gate, which builds a
real stripped Go binary and proves the detection-driven `auto` path end to end.

## 2.10 Go write-barrier folding

**(unlace) `option gowritebarrier off|auto|always`, default auto,
`crates/unlace-lift/src/p2_lift/gowritebarrier.rs
(ActionGoWriteBarrier)`.** Every pointer store the Go garbage collector must
see compiles to a flag-test diamond: when `runtime.writeBarrier` is set, a
`runtime.gcWriteBarrier<N>` thunk hands back the GC pointer buffer (R11 on
amd64) and the cold arm records the old and new values in it; both paths then
perform the program's own stores at the join. The cold arm is GC bookkeeping,
and worse than noise in the output: the thunk's buffer register is not a
modeled return, so the recording stores read an undefined local, and the
value split can mangle even the real store's address expression.

**The second shared idiom shape.** The matcher is
`crates/unlace-middle/src/substrate/idiom.rs (match_guarded_cold_call)`:
a one-block cold arm holding exactly one call (`block_has_other_call` refuses
an arm with a second transfer — that is a real `if` body), whose guard ends in
a CBRANCH and whose other out-edge closes the diamond in ONE hop. Either
branch polarity is accepted — Go emits the barrier arm as the fall-through —
because the cold arm is identified by what it contains, and the callee name
(`gowritebarrier.rs (is_write_barrier_name)`: `runtime.gcWriteBarrier`,
`gcWriteBarrier1`–`8`, their `.abi0` spellings, and the bare assembly thunk
`gcWriteBarrier`, whose pclntab name carries no package path) is only
consulted inside the shape. `runtime.wbBufFlush*` is deliberately not
matched: user code never calls it inline — it is the thunks' own slow path.

**The edit and the window.** One `remove_branch` on the guard's cold edge
plus `remove_unreachable_blocks`, pre-SSA, registered directly after
`gomorestack` (the same window, for the same reasons: no INDIRECT effects to
unpick, no MULTIEQUAL to patch, and the loads feeding only the GC buffer die
to the ordinary dead-code fixpoint). The program's stores live at the join,
which both arms reached, so nothing the program performs is deleted — the
stage test pins the store surviving once per pass, never duplicated, never
dropped.

**Modes.** `auto` (shipped default) acts only when the image's source
language is Go (the `sourcelang` fact, chapter 01); `always` drops the
language test for no-signal corpora (the stage test's bytechunk); `off` keeps
the barrier for auditing GC behavior. Pinned by
`tests/stages/gowritebarrier.toml` (two-pass, hand-assembled diamond in
the compiler's own polarity) and by the unlace-console `verify_go_writebarrier`
gate, which builds a real stripped Go binary and proves the detection-driven
`auto` path end to end.

## 2.11 arm64e pointer-auth failure checks

**(unlace) `option ptrauthtrap on|off`, default on,
`crates/unlace-lift/src/p2_lift/ptrauthtrap.rs
(ActionPtrAuthTrap)`.** The AArch64 SLEIGH spec gives every pointer-auth
instruction a `ShowPAC` context, off in `AARCH64.pspec`, and with it off the
instruction lifts to no p-code. `paciasp`, `pacibsp`, `autibsp`, `pacia`,
`pacda` and `xpaci` vanish. `retab` is a plain return. `braa`, `blraa` and
`blraaz` branch to their first register exactly like `br` and `blr`, so a
call target the decompiler resolves through `blr x8` resolves the same way
through `blraa x8, x9`. `ldraa` is a plain load. The decompiler therefore
treats every signed pointer as already authenticated.

One construct survives that. A CPU without `FEAT_FPAC` does not trap on a
failed `aut*`: it returns the pointer with an error code in its top bits, and
the fault only comes at the next use. So Apple's clang checks the result
inline and branches to `brk #0xc470 + key` when it is bad. LLVM reserves
those four immediates for this trap. There are two forms:

- Before a tail call, `eor x16, x30, x30, lsl #1; tbz x16, #62, ok` tests that
  bits 62 and 61 of the authenticated return address agree.
- After a data `aut*`, the result is compared with its `xpac`-stripped copy.

The second form folds by itself, because the hidden `xpac` leaves the copy
equal to the original. The first reads the incoming `x30`, which nothing can
fold. It printed `if ((v1 ^ v1 << 1) >> 0x3e & 1) { (*SoftwareBreakpoint(0xc471,..))(); return; }`
before nearly every tail call of an Apple binary: 205 times in an iOS system
daemon, 1,017 times in a system framework. (`brktrap` above now ends the flow at
the `brk` itself, so a check this pass keeps prints as
`if (...) SoftwareBreakpoint(0xc471,..);`.)

**Matching.** The trap block is the anchor. It is a basic block whose ops
all come from one instruction, and that instruction's `SoftwareBreakpoint`
`CALLOTHER` carries an immediate in `0xc470..=0xc473`. The immediate alone is
not evidence: any AArch64 code can branch to a `brk #0xc470` on a condition of
its own, and cutting that edge would delete a real check. So an in-edge that is
one arm of a CBRANCH is removed only when the guard's condition is the bit
test of the return address, `((x30 ^ x30 << 1) >> 62) & 1` compared with 0 or
1. The shape is what LLVM emits and nothing else does: no image-format gate is
kept, so the pass runs the same under every front-end (object loader, XML
`<binaryimage>`, Ghidra, web). Before SSA the reads are not linked to their
writes, so the test is followed back through the guard block's own ops by
storage: the CBRANCH condition to the `INT_AND` with 1, the `INT_RIGHT` by 62,
the `INT_XOR` of `x30` with an `INT_LEFT` of `x30` by 1. The `x30` read must
see the return address, either unwritten anywhere in the function or reloaded
from the frame (a `LOAD` whose address is `sp` or `x29` plus constants, directly
or through one copy of a temporary, as `ldp x29, x30` lifts): a value the code
itself put in `x30` (`mov x30, x0` in that block or an earlier one,
`ldr x30, [x0]`) is some other value. The edge cut must be the arm taken when
the two bits disagree, the failed check; the polarity is followed through the
`INT_EQUAL`/`INT_NOTEQUAL`/`BOOL_NEGATE` chain and the CBRANCH's boolean flip,
so a guard that traps when the bits agree, which on any authentic return
address always traps, keeps its trap. On arm64e hardware a forged `x30` fails
authentication, so that test only fires on a pointer-auth failure. A trap block entered any other way
keeps that entry, and so does a CBRANCH whose both arms trap: no arm would be
left to fall through to.

**The edit and the window.** `remove_branch` plus `remove_unreachable_blocks`,
pre-SSA, registered after `gowritebarrier` in the same window. The `eor` and
the `x30` read lose their only reader and die to dead-code elimination.
`off` keeps the checks, to audit where the compiler authenticates. Pinned by
`tests/stages/ptrauthtrap.toml` (two passes over the `macho_arm64e_auth`
fixture, one over `macho_arm64e_brk`, whose `brk #0xc470` and `brk #0xc472`
traps sit behind a `w0` compare and an `x0` bit test and stay, and plain-AArch64
bytechunks of the real check, the same compare, a `mov x30` forgery in the
guard block and in an earlier block, an `x30` load from a non-frame address, and
a guard that traps when the bits agree).

## 2.12 Darwin AArch64 stack probes

Apple clang calls `___chkstk_darwin` before it allocates a frame larger than a
page or a variable-length array, with the byte count in `x9`. The probe touches
each page below the stack pointer and returns. It writes no register but `x9`,
the `x16`/`x17` call scratch and the flags, and the code after it reads the
argument registers it was entered with. The AArch64 prototype model kills `x0`,
`x1` and `x8`-`x18` at every call, so such a read became the call's return value
or a value nothing assigns: `int big_frame(int k)` printed as
`int _big_frame(void)` with `v2 = __chkstk_darwin();`, and a variable-length
array was sized from an unassigned `x1`.

With `option chkstkdarwin` on (the default), the action in
`crates/unlace-lift/src/p2_lift/chkstkdarwin.rs` removes those
calls from the raw p-code. It runs right after `rustprobestack`, before
ExtraPopSetup, FuncLink and SSA, and only on a Darwin AArch64 image: an AArch64
language and an Apple container (Mach-O, fat Mach-O or dyld shared cache,
`Architecture::image_apple`, which the console sets at `load file`; the XML
`<binaryimage>` bootstrap never does). A direct `CALL`
matches when its callee is named `__chkstk_darwin`, as the Mach-O loader names
the import (one leading underscore stripped), or `___chkstk_darwin`, as an image
that defines it does. A `CALLIND` matches when a backward walk of at most 32 raw
operations in its block finds its target loaded from a constant address built
only from `COPY` and `INT_ADD` of constants, as in
`adrp x16; ldr x16,[x16,#off]; blr x16`, and a function symbol of either name
starts at that address. The walk declines at a call, at a partial write of the
storage it follows and at any other producer. A call whose prototype carries an
inject id, the inline flag or the no-return flag is left alone, and so is a call
followed by a `RETURN` at its own address: a jump the flow turned into a call,
such as the `br x16` of the probe's own `__stubs` entry, has no code after it
that could read what the probe preserves.

The match is by name because the probe is an import: the image holds no body to
check, and the dynamic linker binds the slot by that name. A call-fixup, which is
how Ghidra removes the Windows `__chkstk`, is woven in when flow follows a direct
call; this call stays indirect until ActionDeindirect resolves the slot, so a
fixup would cost a restart of every function with a large frame. The probe's page
touches, and the stack-overflow fault they turn into, are not modelled. On
x86-64 the probe takes its size in `RAX` and its `CALL` pushes a return address,
so that target is not served, and an ELF or PE function that happens to carry
the name keeps its calls. The option is destructive by declared intent: it
deletes a real call and the stack-overflow fault its page touches can raise.
Through an arm64e `__auth_ptr` slot (`adrp x16; ldr x16,[x16,#off]; blraaz x16`,
named by `authptrcall`) the same walk matches, since the slot carries the
import's function symbol. `off` keeps the call.

## 2.13 MachineOutliner fragments

**(unlace) `option outlinedinline on|off`, default on,
`crates/unlace-lift/src/p2_lift/outlinedinline.rs
(is_outlined_name)`.** At `-Oz`, and in much Swift and Apple system code,
clang's MachineOutliner moves instruction sequences that repeat across
functions into shared `OUTLINED_FUNCTION_<n>` fragments. A caller reaches a
fragment with `bl`, or ends by tail-branching to one. A fragment has no frame
of its own and reads and writes its caller's registers, so a caller split
across fragments printed as opaque calls with arguments that make no sense.
IDA marks the fragments outlined by name and Hex-Rays inlines them.

At the analysis commit, every function symbol named `OUTLINED_FUNCTION_<n>`
(any number of leading underscores) is flagged inline, which is what
`option inline <name>` does; flow then splices the fragment into each caller
through upstream's inliner (§2.4). Upstream's hard-model inliner refuses two
shapes that are the common ones here: a tail call (`b OUTLINED_FUNCTION_n`
lifts to a CALL with a RETURN at its own address, so there is no distinct
return address) and a call nothing follows (the fragment ends its caller by
tail-calling a no-return routine). For a fragment, both are accepted and the
clone keeps the fragment's own RETURN as the caller's. A fragment whose flow
reaches unmapped memory, which happens in a dyld-cache extract when it
tail-branches into another library, is not inlined and stays a call. The
detection is name based, like IDA's: a stripped image keeps its fragments as
calls. Pinned by `tests/stages/outlined.toml`.

## 2.14 AArch64 system registers and Apple instructions

The AARCH64 SLEIGH spec named 304 system registers by hand; any other
`MRS`/`MSR` lifted to `UnkSytemRegRead(op0, op1, CRn, CRm, op2)` /
`UnkSytemRegWrite(..., Xt)`. `AARCH64_sysregs.sinc` defines 1,612 more as
volatile 8-byte registers at `register:0x8000` (the `AARCH64.pspec` volatile
ranges cover them), and `AARCH64_sysregs_cop.sinc` adds a `CopReg`
constructor for each. The names come from two public tables: LLVM's AArch64
system-register table, read back by disassembling every MRS/MSR encoding,
and the Apple implementation-defined registers of the Asahi Linux m1n1
project (`HID*`, `SPRR_*`, `GXF_*`, `CTRR_*`, `PMC*`, ...). Where the read
and write names of one encoding differ, as for `DBGDTRRX_EL0` and
`DBGDTRTX_EL0`, each direction gets its own constructor. A read of HID0_EL1
now prints `v = hid0_el1;`, the same way `tpidrro_el0` always printed.

`AARCH64_apple.sinc` decodes Apple's instructions in the unallocated
`0x0020xxxx` space for every AArch64 image, as IDA does. The words are
permanently undefined on other cores, so decoding them costs nothing there.
The group is in bits 15..10: `MUL53LO`/`MUL53HI Vd, Vn` (0, 1),
`WKDMC`/`WKDMD Xd, Xn` (2, 3; they replace two `NotYetImplemented`
placeholders), AMX (4, `AARCH64_AMXext.sinc`), and in group 5 `GEXIT`,
`GENTER #imm5` and `SDSB #imm5` (bits 9..5 = 0, 1, 3). Each lifts to an
opaque pcodeop over its register operands, because the semantics are not
documented. An iOS kernelcache function that used to stop at its first
`GENTER` with a bad-instruction halt now decodes through it. These are
decode-table corrections with no option. Pinned by
`tests/stages/a64-sysregs.toml`.


## 2.15 Itanium exception edges

**(unlace) `option itaniumeh on|off`, default on,
`crates/unlace-lift/src/p2_lift/itaniumeh.rs`, fed by
`crates/unlace-analysis/src/analyzers/entry/itaniumeh.rs
(ItaniumEhPass)`.** An Itanium landing pad is reached only by the unwinder, so
normal flow never gets to it: catch bodies, destructor calls on the exception
path and `_Unwind_Resume` are dropped from the pseudocode. Upstream Ghidra and
IDA 9.5 both do this for ELF and Mach-O. IDA's `eh34` plugin shows try/catch
only for MSVC x64. Its design is a helper call on each control-flow edge where
the exception state changes, which the structurer then reads. This option
applies that design to the Itanium call-site table.

**The table.** The analysis pass decodes every LSDA, reached through an
`.eh_frame` FDE or, on ARM32, through the generic-model `.ARM.extab` entry an
`.ARM.exidx` entry names (chapter 01, ARM EHABI unwind index), and read from
whichever section holds it. The header and call-site records are decoded as for
`eh_frame_full`, but the walk also reads the action table and the type table.
A call-site record with a landing pad becomes one `EhCallSite`: the covered
range (relative to the FDE start), the pad (relative to `LPStart`) and the
pad's clauses, in action-chain order. A clause is one of four kinds:

- filter 0: a cleanup;
- a positive filter: a `catch (T)`, named from the type-table entry. A pcrel
  entry, an absolute entry and an indirect entry through a relocated slot all
  resolve, and so does an entry a dynamic relocation fills, which is read as
  its own slot. On ARM32 an `absptr` entry is an `R_ARM_TARGET2` word, read
  as a self-relative offset to a GOT slot (Linux) or to the object (bare
  metal). A typeinfo symbol `_ZTI…` demangles to the type; without one, the
  `std::type_info` object's own name string (its second word, which survives
  stripping) is demangled as a type name. An entry of 0 is `catch (...)`;
- a negative filter: an exception specification.

The positive filter is also the selector value the pad's own code compares
against. The commit installs the table on the architecture with the two
registers the unwinder fills: RAX/RDX on x86-64, EAX/EDX on x86, x0/x1 on
AArch64 and r0/r1 on ARM.

**Flow.** In `FlowInfo::process_instruction`:

- A CALL or CALLIND in an instruction inside a covered range is followed, in
  the same instruction, by `t = eh_unwinding(); CBRANCH pad, t`. Clang starts
  a range at the call's argument set-up, so an instruction of the range that
  holds no call leaves the pad for the call that follows. The CBRANCH is
  an ordinary branch, so the pad is decoded and becomes a successor block.
- A no-return halt that `check_for_flow_modification` plants after a covered
  call goes after the CBRANCH (`unwind_edge_end`). This keeps the edge when
  the callee is no-return, as with `__cxa_throw` inside a `try`.
- Before the pad's instruction is decoded, `eh_exception()` defines the
  exception register. If the pad has a clause other than cleanup,
  `eh_selector()` defines the selector register. A cleanup pad does not get
  the selector, because a live RDX would read as an extra argument of the
  cleanup's calls.
- The pad gets an instruction comment that lists its clauses, for example
  `landing pad: catch (std::runtime_error) when selector == 1; catch (...) when selector == 2`.
- Only the unwinder enters a landing pad, so a call whose fall-through
  address is one does not return: the walk plants the no-return halt there
  with the warning `itaniumeh: the call's fall-through is an exception landing
  pad`, as `funcboundflow` does at the next function's entry. This ends a
  clang terminate pad (`mov rdi,rax; call __clang_call_terminate`) whose
  callee a stripped image does not name.

The three helpers are builtin user-ops (`eh_unwinding` returns `bool`,
`eh_exception` a `void *` and `eh_selector` a signed integer,
`coreaction_infertypes.rs`). They have no side effects, so they live only as long as something
reads them. The result is structured C, not a `try` statement:

```c
v2 = risky(a0);
if (!eh_unwinding())
  return v2;
/* landing pad: catch (std::runtime_error) when selector == 1; catch (...) when selector == 2 */
if (eh_selector() == 1) {
  v3 = __cxa_begin_catch(eh_exception());
```

- GCC's default hot/cold partitioning puts the handler code in a separate
  `.cold` FDE, and the pad is a stub that jumps there. That FDE is also a
  function entry, so the jump would read as a tail call. Flow records the pad
  and its fall-through successors (`FlowInfo::eh_pad_stub`), and
  `tail_call_kind` does not classify a branch from those instructions, so the
  cold code is decoded as part of the function.

**One edge per pad.** Only the first call that unwinds to a pad gets the
edge (`FlowInfo::eh_records_seen`); later calls to the same pad stay plain
calls. That keeps the cost down (one extra block per pad, not per call), and
the printer shows those calls inside the same `try`. Under `itaniumeh catch`
only pads with a catch clause get an edge, so cleanup pads stay hidden. On
`/usr/bin/patchelf` (252 KB, g++, decompile-all, user-mode instruction count
on one P-core) `off` takes 102.87 G instructions, `catch` 103.35 G (+0.5%) and
`on` 128.95 G (+25%). The aggressive preset uses `catch`.

**try/catch in the C output**
(`crates/unlace-emit/src/p9_emit/printc.rs (emit_eh_try,
is_eh_if, eh_pad_start)`). An `if` whose condition is the `eh_unwinding()`
CBRANCH prints as `try { <condition-block statements> } catch (..) { <pad> }`:

- when its true branch starts at a landing pad, that branch is the handler.
  An `else` branch, the normal path, prints inside the `try`: printed after
  the `catch` it would read as code the handler falls into. The same holds
  when the `else` branch is the pad and the true branch the normal path;
- when the structurer negated it (`if (!eh_unwinding()) { normal }`, whose
  normal path never falls through) and the rest of the enclosing list starts
  at the pad, the normal path prints inside the `try` and the rest of the list
  is the handler. If that list is on the function's top-level spine (only
  lists above it, or `if`s it is the condition of: the pad's own selector
  tests), the catch brace stays open to the end of the body
  (`eh_open_catch`), because everything after that point is reached only
  through the pad;
- inside a `try`, an exceptional edge to the same pad
  (`eh_open_pad`, compared with the CBRANCH target) prints as its plain
  statements: the calls of one try region share it;
- when neither branch starts at a landing pad, because the pad only loads the
  exception registers and jumps on into handler code it shares with another
  pad and its own block was folded into that code (g++'s hot/cold split,
  patchelf's `catch (SysError &)` in `shrinkRPath`), the pad is the one the
  call-site record of the edge's call names, and the handler is the branch
  whose first block is the edge's own successor: the CBRANCH's true out-edge,
  or its false out-edge when the condition is `eh_unwinding()` negated
  (`printc.rs (eh_if_arms)`).

The header lists the pad's caught types in handler order, joined by ` | `:
`catch (std::runtime_error | ...)`, with `...` for a catch-all or a type no
name resolves. A cleanup or an exception specification is not a handler and
is left out; a pad with neither type nor catch-all prints `catch (...)`. With
several clauses the selector tests stay in the handler
(`if (eh_selector() == 1)`) and the pad comment maps each selector to its
type.

**Limits.** SjLj tables are not read. A call whose exceptional edge structures as a
loop condition prints `while (readFile(...), !eh_unwinding()) { ... }` with the pad
after the loop, not a `try` (`eh4_x86_64.elf` `probe`), and a negated edge whose pad
falls out of an enclosing `if` (a g++ `-fno-reorder-blocks-and-partition` build of
the same source) stays an `if`. Pinned by
`tests/stages/itaniumeh.toml` (two passes over the `itaniumeh/eh_x86_64.elf`
fixture), `tests/stages/itaniumeh-cold.toml` (the partitioned build),
`tests/stages/itaniumeh-a64.toml` (AArch64, x0/x1),
`tests/stages/itaniumeh-arm.toml` (ARM32 and stripped Thumb EHABI tables,
a type named only by its `type_info` string) and
`tests/stages/itaniumeh-clang.toml` (clang ranges that start before the
call, the multi-clause header) and `tests/stages/itaniumeh-sharedpad.toml`
(pads folded into a shared handler).

**(unlace) MSVC x64 catch funclets as pads** (`option msvceh on`, with
`itaniumeh` on, which keeps the table; `itaniumeh.rs (define_funclet_frame,
return_to_continuation)`, fed by
`crates/unlace-analysis/src/analyzers/entry/msvcfuncinfo.rs (splice_sites)`).
An MSVC catch body is a separate funclet the runtime calls with the parent's
establisher frame in RDX; it returns, in RAX, the parent address where
execution resumes. The analysis tier turns each try block into call-site
records the same edges use: the IP-to-state map (FH3 `{ip RVA, state}`
entries; FH4 compressed `(ip delta, state + 1)` pairs from the function
start, through the segment table of an `isSeparated` function) cut at the
parent's `.pdata` end gives one region per state transition, and every
region whose state the try guards gets one record per catch funclet, in
handler order, whose pad is the funclet's entry and whose one clause is its
caught type. A funclet is used when the `ret` after its
`lea rax, [rip+d]` (followed only by `add rsp` and `pop`s) loads an
address inside the parent, or when it has no `ret` byte at all (a rethrow).
These records are kept apart from the Itanium ones (`EhTable::msvc_sites`):
regions of one function do not overlap, so the records covering an address
are the ones sharing the last region start at or below it. Flow gives the
first call in a region one `if (eh_unwinding()) goto funclet;` per catch
funclet, the first handler's test first, each pad once. At a funclet pad
reached from a parent, RDX is defined as the parent's frame register less
its `UNWIND_INFO` frame offset (the stack pointer when it has none) and the
stack pointer drops by 8 for the return address the runtime's call pushed;
the funclet's frame accesses (`lea rbp, [rdx+0x40]`) then fold onto the
parent's frame. The funclet's `ret` with a known continuation becomes a
`BRANCH` to it, so the handler rejoins the parent and the printer shows
`try { ... } catch (Err &) { <funclet body> }` through the Itanium forms
above. When the funclet is decompiled on its own, its entry gets no pad
definitions and its `ret` stays a return.

An x86 C++ function (`msvcseh.rs (x86_splice)`) keeps its EH state in
`[ebp-4]` instead of an IP map, so its regions come from the state stores
(`mov dword/byte [ebp-4], n`, `and dword [ebp-4], 0`, `or dword [ebp-4], -1`)
between the function start and its first catch block (at most 16 KiB), in
layout order, the function starting in state -1. Its catch blocks lie in the
function and are called by the runtime with EBP already the parent's, so the pad
only drops ESP by 4 (no RDX), and a block is used when it ends in
`mov eax, <continuation in the function>; ret`, whose `ret` then branches there.

Cleanup funclets are pads too (`msvcfuncinfo.rs (splice_sites)`,
`msvcseh.rs (finally_pads)`): a region whose state no try guards gets a
`Cleanup` record into that state's unwind (destructor) funclet (every FH3
unwind action, an FH4 unwind entry of type RVA), and an x64 `__finally`
scope gets one over its `[BeginAddress, EndAddress)` into its termination
funclet. They are entered like catch funclets (RDX from the parent's frame, the
stack pointer down by 8), but after a cleanup the exception keeps propagating,
so each `ret` decoded inside a cleanup funclet's `[entry, end)` from a parent
becomes a no-return halt (`return_to_halt`), and the pad comment says
`cleanup, then the exception propagates`. Under `itaniumeh catch` cleanup
records get no edge, as Itanium cleanup pads do not.

**(unlace) x64 SEH `__except` blocks as pads** (`msvceh`;
`crates/unlace-analysis/src/analyzers/entry/msvcseh.rs (x64_scopes)`).
An x64 `__C_specific_handler` scope record's `__except` block lies inside
the function, so it is an ordinary Itanium-style call-site record: range
`[BeginAddress, EndAddress)`, pad `JumpTarget`, one clause whose type is the
header `__except (<filter>)` (a constant filter by its `excpt.h` name, a
filter funclet by its `<parent>$filt$<n>` name). The first call in the range
gets the edge, the pad defines RAX (the exception code the handler block
reads) and RDX as at any pad, and the printer's catch header prints a lone
`__except` clause as given: `try { ... } __except (EXCEPTION_EXECUTE_HANDLER)
{ ... }`. A `__try` with no call in it gets no edge; x64 `__finally` funclets
are cleanup pads (above).

On x86 (`msvcseh.rs (x86_seh_splice)`) the SEH3/SEH4 frame keeps the try
level in `[ebp-4]`, so the regions come from the same state stores as x86 C++
(the function starts outside every level; SEH4's -2 and SEH3's -1 mean none),
between the function start and its first filter or handler block, at most
16 KiB. A region at level `n` gets one record into scope record `n`'s `__except`
block, which lies in the function and restores the stack pointer itself, so it
is an ordinary pad, printed `__except (filter 0x401050)` or by its constant
filter's name. The region also gets a record for each enclosing level, out to
the outermost (`x86_level_chain`; a record's enclosing level is always a lower
one), so the edges test the innermost handler first and the next one when it
declines. A `__finally` level is a routine the runtime calls: it is a cleanup
pad (ESP down by 4) whose extent runs to its first `ret` byte within 1 KiB, and
that `ret` ends the path. These records are MSVC records (`msvc_sites`), which
take one edge per pad on the first call of a region.

## 2.13 VEX zero-upper writes and per-lane vector p-code

**(unlace) `option vexzeroupper on|off`, default on,
`crates/unlace-lift/src/p2_lift/vexzeroupper.rs`.** A VEX- or
EVEX-encoded instruction that writes an XMM or YMM register clears the rest
of the ZMM register, and the x86 SLEIGH spec states that as one write of the
whole register, `ZmmReg1 = zext(result)`. Every such write overlaps every
read of the same XMM/YMM register, so heritage widened the register to all
64 bytes: a function that read `ymm0` had a 64-byte `zmm0` input and read
`SUB6432(zmm0, 0)`. At flow time (`FlowInfo::process_instruction`, x86-64
only) each `INT_ZEXT` into a 32- or 64-byte register from a 4-, 8-, 16- or
32-byte value is split (the 4- and 8-byte values are scalar results such as
`vmulsd`'s and `vaddss`'s):

- the low part keeps the value at its own width. When the value is a
  temporary that only this write reads, its producer (the user-op) writes the
  low register itself; when the value already is the low register, nothing is
  copied;
- the bytes above it are zeroed by `COPY 0` ops cut at the XMM and YMM/ZMM
  boundaries (`[8, 16)`, `[16, 32)` and `[32, 64)` for a scalar `double`;
  `[16, 32)` and `[32, 64)` for an XMM write), so neither creates a wider value.
  A scalar result left whole was a 64-byte `zmm0` write between the `double`
  a function computes in `xmm0` and its `ret`, and the function printed `void`
  (fixture `vexret_avx_x86_64`, which Ubuntu's gcc emits without `-mavx`).

**(unlace) `option lanefuse on|off`, default on,
`crates/unlace-lift/src/p2_lift/lanefuse.rs`.** The spec writes
many SSE/AVX instructions lane by lane: `VADDPS ymm0, ymm0, ymm1` is eight
`FLOAT_ADD`s on 4-byte slices, so no op reads or writes a whole vector. After
translation, a run of two or more ops of one opcode whose output and inputs
are consecutive equal-width slices of the same storage (or `SUBPIECE`s of one
varnode at consecutive offsets), covering 16, 32 or 64 bytes, is rebuilt into
one `CALLOTHER` on the whole operands. The instruction's first lane op is
rewritten in place, so the instruction keeps its first op. The user-op is a
generated built-in (`BUILTIN_LANE_BASE`) named for the intrinsic:
`_mm256_add_ps`, `_mm_sub_pd`, `_mm256_add_epi32`. Which runs fuse:

- `FLOAT_ADD/SUB/MULT/DIV` and `INT_ADD/SUB/MULT` always under VEX/EVEX;
- under legacy SSE encoding, only four-lane float runs (`addps`) at the
  default `on`. Legacy SSE integer lanes and two-lane double runs are what
  compilers emit for auto-vectorised and SLP-paired scalar code, and
  `devectorize`, `wideslice`, `simdlane` and the float-precision rules read
  them back as scalars. `lanefuse all` fuses them too, for hand-written SSE2
  intrinsic code (`__m128i add128i(__m128i a0,__m128i a1) { return
  _mm_add_epi32(a0,a1); }`);
- never lane-wise `AND/OR/XOR`, which carry scalar idioms (`xorps x,x`,
  `andps` with a sign mask for `fabs`).

An EVEX `{k}` mask is applied by the spec per lane after the user-op:
`r[j] = zext(k_j)*r[j] | zext(!k_j)*src[j]`. When every lane of the user-op's
result is rewritten that way (`fold_mask`), the lane ops and the mask
extraction are removed. The user-op becomes its masked built-in
(`BUILTIN_MASK_BASE + 2*id`, `vaddps_avx512f_mask`) reading
`(src, k, operands...)`, or its zero-masked one (`+1`, `..._maskz`) reading
`(k, operands...)` when EVEX.z is set (byte 3 bit 7 of the `62` prefix). The
mask is passed at the intrinsic's width (`__mmask16`), and a following
`dst = COPY r` is folded so the op writes `dst`. `avxintrinsics` prints these
as `_mm512_mask_add_ps(src, k, a, b)` / `_mm512_maskz_add_ps(k, a, b)`. A
function in which either step finds a whole-register vector run is marked
`Funcdata::unlace_vector_code`, which `vectorabi` (chapter 04) keys on.
Pinned by `tests/stages/vectorabi.toml`.


## 2.16 DEX exception edges

**(unlace) `option javatry on|off`, default on,
`crates/unlace-lift/src/p2_lift/javatry.rs`.** A DEX method lists
its protected ranges and their catch clauses in its `code_item`
(`dex/format.rs (DexFile::tries)`); nothing in the instruction stream
reaches a handler, so without the table every catch body is unreachable code.
Upstream Ghidra's Dalvik support never reaches them either.

**Handlers.** Each clause names a type (or the catch-all) and a handler
address. D8 gives every type of a multi-type catch its own stub, a
`move-exception` and a `goto` (or fall-through) into the one catch body; two
handlers of one try item whose stubs bind the same register and continue at the
same place are one handler, catching both types
(`javatry.rs (canonical_blocks)`).

**Flow.** `FlowInfo::process_instruction`, before decoding an instruction:

- At a handler whose first instruction is `move-exception vA` (which the Dalvik
  spec leaves empty), `vA = java_caught(handler)` defines the exception.
- At the start of the first range that names a handler, `t = java_try(handler);
  CBRANCH handler, t` dispatches to it, once per handler. A handler whose ranges
  reach further is dispatched first, so an enclosing `try` comes before the one
  it contains; handlers of one try item keep their match order. The dispatch
  ops start a basic block of their own, and `ActionRedundBranch` does not splice
  that block into its predecessor, so the statements before a `try` are never
  part of its condition.
- Every other instruction inside a range that can throw (an invoke, a field or
  array access, an allocation, a cast, `throw`, a monitor operation, integer
  division) is preceded by `t = java_throws(); CBRANCH handler, t` for each of
  its handlers. These edges carry the register state at the throw to the
  handler, so a value the protected code assigns reaches the catch body.
- Dalvik's `throw` lifts to `throwException(x)` and a RETURN; the RETURN is
  marked a no-return halt, so return recovery gives it no value.

**Pruning.** `ActionJavaThrowPrune` (in `fullloop`, beside the edge-removing
strippers) removes an exceptional edge when every MULTIEQUAL at its handler
brings the same value along another edge: the edge then tells the handler
nothing. Removing it lets the next `mainloop` splice the two halves of the block
it split, which keeps a condition in the protected code a single block.
`RuleConditionalMove` never turns a dispatch or exceptional edge into a value.

**Structuring** (chapter 8). The structuring graph drops every `java_throws`
edge (`javatry.rs (drop_throws_edges)`), so a handler is reached only
from its dispatch. A function with a dispatch takes `CollapseStructure` rather
than the region structurer, which there knows to: make the handler the clause of
an `if` with no exit; never fold a dispatch into `&&`/`||`, a loop condition or
a condition list; and prefer an exit other than a handler when choosing a
loop's exit, so a catch inside a loop stays in the loop. The printer (chapter 9)
reads the dispatch `if` as the `try` statement.

**(unlace) `option javasync on|off`, default off: catch-all idioms,
`crates/unlace-lift/src/p2_lift/javasync.rs`.** javac and D8 compile two
Java constructs to a catch-all handler, and `javasync.rs (idioms)` reads
each catch-all handler of a method (one no typed clause names) from the
instruction bytes and the try items, for the printer:

- **synchronized.** The handler is exactly `move-exception vE; monitor-exit vX;
  throw vE` with X other than E, and the instruction just before the first range
  it protects is `monitor-enter vX`. The ranges are taken less the handler's own
  code (D8 lets a range run on over the handler; javac gives it a range of its
  own). Every `monitor-exit vX` inside the ranges, and one that starts right at
  their end, is a normal way out of the block; a `monitor-enter vX` inside them
  declines (a nested lock on the same register).
- **finally.** The handler is `move-exception vE`, then straight-line code F (no
  branch, return, throw, monitor operation or payload; at most 512 bytes), then
  `throw vE`. Each protected range must end in a byte-equal copy of F, or run on
  into the next one through instructions that cannot throw (a D8 split); no
  handler may start inside a copy; a method with a switch declines; and no goto
  or if may jump into a copy, or to its start from outside the protected ranges
  (that path would lose F when the copy is left out). A handler that is only
  `monitor-exit` is no `finally`.

Reading the bytes keeps the check exact and cheap: it runs once per function
when the printer starts, only for DEX methods with try items and the option on.
### Early Go jump chains (`gojumpchain.rs`)

`gojumpchain.rs (ActionGoJumpChain)` runs before Go write-barrier
recognition, while heritage has not yet built SSA. Unoptimized Go builds place
unconditional forwarding jumps between the flag test and runtime bookkeeping.
Later branch cleanup is too late to expose these shapes to the early pass.

It runs whenever `gowritebarrier` is enabled on a Go image.
It matches a conditional whose two forwarding paths lead to a single-entry
block with exactly one recognized barrier call and its common join. It removes
only forwarding blocks in those paths, including any between the call and join;
unrelated control flow is unchanged. Each removable block must be non-entry,
have one predecessor and successor, and contain exactly one unconditional branch.
Self-loops, two-block cycles, duplicate-edge cases, and blocks with assignments,
loads, stores, calls, or conditional branches are excluded. The existing
block-removal primitive redirects the edge and resets structure.

This normalization removes no computation or memory effect. The existing
`gowritebarrier` pass independently removes the exposed runtime bookkeeping.

## 2.17 Pre-structuring arm hoist

**(ida) `option armhoist`, default off,
`crates/unlace-lift/src/p2_lift/armhoist.rs (ActionArmHoist)`.** When both
arms of a two-way branch begin or end with the same instruction, the compiler
has emitted it twice and the structured C prints it twice:
`if (c) { x = 1; f(x); } else { x = 2; f(x); }` where the source wrote
`f(x)` once after the `if`. Hex-Rays moves such instructions out of the arms
on microcode before it structures (`EXTRACT_IDENTICAL_HEAD_IF_INSNS`,
`EXTRACT_EQUAL_IF_TAIL_INSNS`, and `REMOVE_IF_BRANCH` for an arm left empty;
`notes/ida-hexrays-rules.md`). `dedupitetail` (chapter 8) merges equal leaves
of the structured tree after structuring; this pass does the hoist in the
p-code, before structuring, so the structurer, the merge and every later rule
see one copy.

**Candidates.** A basic block B ending in a CBRANCH with two distinct
successors T and F, neither of them B, each with B as its only predecessor.
The *head* of an arm is its first op when that op is not a flow break. When T
and F also each have a single out-edge to the same block J, J is neither B, T
nor F, and J has exactly the two in-edges from T and F, the branch also has a
*tail*: the last op of each arm, skipping one closing BRANCH.

**Op identity.** Two ops are the same op when their opcodes are equal, their
outputs are both absent or name the same storage (space, offset, size), and
each input pair names the same storage or is a pair of equal constants of
equal size. Annotation inputs never match. The pass declines an op that reads
or writes the unique space (a SLEIGH temporary must not cross a block) and the
opcodes BRANCH, CBRANCH, BRANCHIND, RETURN, MULTIEQUAL, INDIRECT, NEW, CPOOLREF
and SEGMENTOP.

**The edit.** At the head, while the two first ops are the same op, the op in
T moves to just before B's CBRANCH and the op in F is destroyed. At the tail,
while the two last ops are the same op, the op in T moves to the start of J
(each later one before the one moved last, so their order is kept) and the op
in F is destroyed. A destroyed CALL loses its `FuncCallSpecs` record first
(`Funcdata::delete_call_specs`); the moved call keeps its own. At most 16 ops
move from each end of one branch.

**Why it preserves semantics.** The pass runs in the pre-SSA window: it is
registered in `mainloop` right after `outline` and before `varnodeprops`,
and it returns at once when the `Ssa` maturity fact is settled. There an op is
the storage it reads and writes; nothing links one op's output to another
op's input, and no INDIRECT or MULTIEQUAL has to be patched. A tail op and its
copy run right before the branch into J, and J is entered only from T and F,
so running the op once at the start of J runs it at the same point on every
path. A head op moves only across B's CBRANCH, which writes nothing and reads
only its condition, so the move is sound when the op cannot change the
condition: a pure op or LOAD must not write storage that overlaps it, and a
CALL, CALLIND, CALLOTHER or STORE, whose effects are not limited to its output,
moves only when the condition is a constant or a unique temporary.

**What it changes downstream.** A shared call prints once after the `if`, and
the per-arm argument setup becomes a phi at the join, so the example above
reads `if (c) { x = 1; } else { x = 2; } f(x);`. An arm left with nothing but
its branch is removed by the dead-control-flow passes (`ActionDoNothing`), and
a branch with both arms emptied is folded like any other redundant CBRANCH.

**The option.** `option armhoist on|off`, default **off**: it moves code across
a branch before structuring and has not yet been measured against the 675
datatest assertions, decbench GED or the speed budget. When off,
`ActionArmHoist::apply` returns before reading the CFG and output is
unchanged.

## Octeon integer targets

Explicit BE Octeon/Plus/II/III language variants share the MIPS core while replacing the four CP2 load/store opcode meanings with bit-test branches. Their conditions are sampled before delay-slot execution. Integer extension arithmetic, comparisons, population counts and bitfield operations use ordinary p-code; II/III additionally expose indexed loads with exact width and signedness. Generic MIPS retains its opcode meanings and SPECIAL2 fallback; Octeon has no wildcard SPECIAL2 success.

Both 64-bit address and 32-bit address (N32) variants have explicit soft-float compiler specifications; III also offers hard-float models. ELF selection and compiler conventions are described in chapters 01 and 04. System and crypto coverage remain separate from the integer and memory operations described here.

The generic MIPS `save`/`restore` constructors and their helper tables are also
excluded from every Octeon variant. Their SPECIAL2 function 0x1f overlaps the
Octeon II/III load-and-atomic instructions. Disabling only the wildcard SPECIAL2
constructor is insufficient: an unsupported atomic must fail assembly decoding
and p-code lifting without emitting stack effects. Original GNU-assembled atomic
probes cover both colliding constructors; generic MIPS retains them unchanged.

`specs/Ghidra/Processors/MIPS/data/languages/octeonAtomics.sinc` models
SAA/SAAD on Plus and later, and the twelve LA forms and ZCB/ZCBT on II/III.
Read-modify-write instructions use one width-specific stateful user operation,
with their address and value captured before any aliased register is replaced.
Word results sign-extend to 64 bits. A zero destination discards the result while
retaining the operation; zero sources supply literal zero. Reserved fields and
generation exclusions remain decoding failures. These operations require an
execution model; replacing them with ordinary load/add/store is not equivalent.
They decode on the generations that define them in every `octeoneffects` mode:
upstream lifts them only through generic MIPS's SPECIAL2 catch-all, which
Octeon excludes, so there is no upstream lifting for `off` to restore. Cavium's
binutils moved SAA/SAAD to Octeon I in 2012, but Linux's Cavium-written feature
check enables SAA only from CN58XX, so Octeon I still rejects them.

Octeon LL/LLD establish reservation state through user operations. SC/SCD return
a runtime success byte and conditionally update memory through the same state,
instead of inheriting generic MIPS's unconditional store-and-success p-code.
An executor must specify its memory mapping, interference and reservation rules.
In particular, flat ordinary RAM execution does not model Octeon III's extended
128-bit scratch/LMT operation, MMIO, cache state or TLB exceptions.

SYNC, SYNCW, SYNCWS, SYNCS and SYNCIOBDMA (selectors 0, 4, 5, 6 and 2, as the
CN50XX hardware manual defines them) retain distinct ordering operations.
Repeated barriers remain observable. Every other selector, including 1 and 3,
which Cavium's assembler alone aliases as `syncio`/`syncioall` and its SDK
deprecates as no-ops, disassembles as `sync 0xN`, as upstream GNU binutils
prints it, and lifts as `octeon_sync_unknown(N)`; decoding does not establish
its execution semantics. A single-thread executor may record
barriers without proving device completion or inter-core ordering. The
decompiler's memory guards and pointer roles are described in chapter 03.

## Verified Rust stack-probe summaries

`rustprobestack` ships off in every preset: its predeclared default comparison
exceeded the 5% wall-time confidence bound. When enabled, it runs before
ExtraPopSetup, FuncLink and SSA. At explicit `auto` it
requires Rust source-language evidence; `always` permits the same proof on other
images, and `off` retains the helper. The action in
`crates/unlace-lift/src/p2_lift/rustprobestack.rs` matches the
complete 57-byte AMD64 page-probing helper, canonical x86-64 register storage,
a direct relative CALL and its raw stack push/return-address store, and an
immediately following `sub rsp,rax`. The full RAX frame-size constant must reach
the call within 48 raw operations in the same block, with no intervening call,
branch or overlapping unknown write, and be at most 16 MiB. Unavailable bytes,
changed helper bodies, interior targets, injected/inline/nonreturning call facts,
and intervening flag observations decline the summary.

The summary preserves the existing return-address store, writes saved RBP eight
bytes below the call-time SP, restores SP by eight bytes for RET, and writes R11
as zero for a zero frame or `((frame - 1) % 4096) + 1` otherwise. Other general
registers retain their values; the next SUB kills the helper's arithmetic flags.
Ordinary SSA and dead-store analysis decide which scratch writes remain. The
option deliberately abstracts page-touch reads and their fault behavior and is
therefore destructive. It never suppresses a call by its name or in the printer.

The live shared image must prove mapped coverage of every helper and call-site
byte. Direct reads leave the loader prefetch window unchanged; frontends without
that coverage interface retain the call. An overlay participates through the live
image, so stale file bytes cannot establish the helper identity.

The saved-RBP store carries transient callee-spill provenance so P6 does not
reserve its bytes as a caller callee-save slot. This affects storage ownership,
not the store's value or observability.

The summary declines when `stackviews` or `stackalias` is enabled. Those policies
retain transient physical stack writes, which can create an independent scalar
in the tail of a later buffer. Their original call representation remains until
that overlapping ownership can be represented without shrinking the buffer.
