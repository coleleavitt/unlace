//! Debugger backend implementations.
//!
//! - [`null::NullDebugger`] — always available; every op returns
//!   `BackendUnavailable`. Used in tests + as a safe default.
//! - [`linux_ptrace::LinuxPtraceDebugger`] — real Linux ptrace backend
//!   (feature `linux-ptrace`). Drives PTRACE_ATTACH / PTRACE_CONT /
//!   PTRACE_SINGLESTEP and INT3 software breakpoints.

#[path = "backends_null.rs"]
pub mod null;

#[cfg(feature = "linux-ptrace")]
#[path = "backends_linux_ptrace.rs"]
pub mod linux_ptrace;

#[cfg(feature = "gdb-stub")]
#[path = "backends_gdb_stub.rs"]
pub mod gdb_stub;

#[cfg(feature = "windows-debugapi")]
#[path = "backends_windows.rs"]
pub mod windows;

pub use null::NullDebugger;

#[cfg(feature = "linux-ptrace")]
pub use linux_ptrace::LinuxPtraceDebugger;

#[cfg(feature = "gdb-stub")]
pub use gdb_stub::GdbStubDebugger;

#[cfg(feature = "windows-debugapi")]
pub use windows::WindowsDebugger;
