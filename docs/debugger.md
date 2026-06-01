# Debugger Architecture

The `unlace-debugger` crate provides a uniform `Debugger` trait with
swappable backends:

| Backend         | Feature flag       | Status   |
|-----------------|--------------------|----------|
| Null (no-op)    | (default)          | ✅ shipped |
| Linux ptrace    | `linux-ptrace`     | 🟡 stub  |
| Windows DebugAPI| `windows-debugapi` | 🟡 stub  |
| GDB stub        | `gdb-stub`         | 🟡 stub  |
| Emulator        | (via unlace-emu)   | 🟡 stub  |

The Null backend ships by default so `cargo check` works on any host.
Real backends are feature-gated to avoid pulling host-specific deps.

## The `Debugger` trait

```rust
pub trait Debugger {
    fn attach(&mut self, pid: u32) -> Result<()>;
    fn detach(&mut self) -> Result<()>;
    fn cont(&mut self) -> Result<StopReason>;
    fn step(&mut self) -> Result<StopReason>;
    fn set_breakpoint(&mut self, ea: u64) -> Result<u32>;
    fn remove_breakpoint(&mut self, id: u32) -> Result<()>;
    fn read_memory(&self, ea: u64, n: usize) -> Result<Vec<u8>>;
    fn write_memory(&mut self, ea: u64, bytes: &[u8]) -> Result<()>;
    fn read_registers(&self) -> Result<RegisterSet>;
    fn stack_trace(&self) -> Result<Vec<u64>>;
}
```

## Breakpoint table

All backends share `BreakpointTable` for tracking active breakpoints:

```rust
let mut t = BreakpointTable::new();
let id = t.add(0x401000);
// ... later
t.remove(id);
```

## References

- `research/ida-hexrays-docs/sdk/dbg/` — 87 SDK files showing IDA's
  debugger plugin interface.
- `research/decompiled-references/ida/plugins/linux_user/all/` — 610 decompiled functions
  of IDA's local Linux debugger (the reference for the Linux backend).
- `research/decompiled-references/ida/plugins/gdb_user/all/` — 984 decompiled functions of
  IDA's GDB-stub backend.
- `research/decompiled-references/ida/plugins/bochs_user/all/` — 946 decompiled functions
  of IDA's Bochs integration.

## Roadmap

Per `plan.md` Batch 32, the backend implementation order is:

1. **Linux ptrace** (8 weeks). Software breakpoints via INT3 / BRK
   byte patching, then HW breakpoints via debug registers.
2. **Windows DebugAPI** (4 weeks). `DebugActiveProcess` +
   `WaitForDebugEvent` + `ContinueDebugEvent`.
3. **GDB stub frontend** (4 weeks). RSP packet protocol so unlace can
   drive qemu-system / openocd / JTAG probes.
4. **Bochs integration** (2 weeks). Wrap Bochs as an emulator backend
   for sandboxed malware analysis.

## Supported targets (when feature-enabled)

| OS         | Arch       | Backend          |
|------------|------------|------------------|
| Linux      | x86_64     | linux-ptrace     |
| Linux      | AArch64    | linux-ptrace     |
| Windows    | x86_64     | windows-debugapi |
| Embedded   | any        | gdb-stub         |
| Emulated   | any        | unlace-emu       |
