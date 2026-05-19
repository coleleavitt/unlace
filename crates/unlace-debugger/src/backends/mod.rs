//! Debugger backend implementations.
//!
//! - [`null::NullDebugger`] — always available; every op returns
//!   `BackendUnavailable`. Used in tests + as a safe default.
//! - [`linux_ptrace::LinuxPtraceDebugger`] — real Linux ptrace backend
//!   (feature `linux-ptrace`). Drives PTRACE_ATTACH / PTRACE_CONT /
//!   PTRACE_SINGLESTEP and INT3 software breakpoints.

pub mod null;

#[cfg(feature = "linux-ptrace")]
pub mod linux_ptrace;

pub use null::NullDebugger;

#[cfg(feature = "linux-ptrace")]
pub use linux_ptrace::LinuxPtraceDebugger;
