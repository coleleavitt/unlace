# Emulator Architecture

The `unlace-emu` crate provides an IR-level interpreter for unlace's
75-opcode IR. Used for sandboxed malware analysis, ROP triage, fuzz
harnesses, and as a debugger backend.

## Components

| Module           | Purpose                                     |
|------------------|---------------------------------------------|
| `interpreter`    | Single-step engine + `Interpreter` struct   |
| `memory`         | Paged memory map (4 KB pages, BTreeMap-backed) |
| `regs`           | Uniform register file (BTreeMap<String, u64>) |
| `syscalls`       | Sandboxed Linux syscall simulator           |

## What works today

- ✅ `Interpreter::new()` + `step_noop()` for instruction-count tests
- ✅ `MemoryMap::map() / read() / write()` with page-boundary handling
- ✅ `EmuRegs` with PC aliasing (rip / pc / eip)
- ✅ Syscall dispatch: exit, write (stdout/stderr), brk, mmap, read,
  open, close
- ✅ Sandbox: fork / exec / clone always denied

## What's stubbed

Per `plan.md` Batch 36, the full 75-opcode dispatch table is built
incrementally:

| IR opcode group         | Status |
|-------------------------|--------|
| Copy / Const            | 🟡 stub |
| IntAdd / IntSub / IntMul | 🟡 stub |
| IntAnd / IntOr / IntXor | ❌     |
| IntShift                | ❌     |
| Branch / Cbranch        | ❌     |
| Call / Return           | ❌     |
| Load / Store            | ❌     |
| Float ops               | ❌     |

Each opcode is added with unit tests cross-checked against
unicorn-engine (optional FFI) on a corpus of small x86_64 / AArch64
binary snippets.

## Syscalls (Linux x86_64 ABI)

| Syscall | Number | Status | Notes                            |
|---------|--------|--------|----------------------------------|
| `exit`  | 60     | ✅     | Returns `StepOutcome::SyscallExit` |
| `write` | 1      | ✅     | Stdout/stderr only; other FDs denied |
| `read`  | 0      | 🟡     | Returns 0 (EOF) for safety       |
| `brk`   | 12     | 🟡     | Stub — returns the new break     |
| `mmap`  | 9      | 🟡     | Stub — returns the requested addr |
| `open`  | 2      | 🟡     | Stub — returns fd 0              |
| `close` | 3      | 🟡     | Stub — always returns 0          |
| `fork`  | 57     | ✅     | Denied by sandbox                |
| `execve`| 59     | ✅     | Denied by sandbox                |
| `clone` | 56     | ✅     | Denied by sandbox                |
| any other | —    | 🟡     | Returns -1 in rax                |

## Trace

The interpreter records every syscall in `interpreter.syscall_trace`,
including arguments and outcome. Useful for compliance testing and
malware behavioral analysis.

## Reference

- `research/ida-hexrays-docs/pdfs/bh-us-18-guilfanov-decompiler-internals-microcode.pdf`
  — the canonical IR opcode semantics (matches unlace's `IrInsn`).
- `references/ida/plugins/bochs_user/all/` — 946 decompiled functions
  of IDA's Bochs integration (a reference for the "emulator as debugger"
  pattern).
