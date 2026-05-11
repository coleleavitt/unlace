//! Taint source/sink registry for common libc and syscall symbols.
//!
//! Provides a small, deterministic classification of well-known libc and
//! syscall entry points into taint *sources* (where attacker-controlled data
//! can enter a program) and taint *sinks* (where tainted data reaching them
//! is dangerous). Downstream passes (taint propagation, vuln triage, etc.)
//! consume this registry to seed their analyses.
//!
//! The classifier is intentionally permissive on prefix-matching common
//! decorations (`_recv`, `__libc_recv`, `recv@plt`) so callers don't have to
//! pre-normalize symbol names from every loader/back-end.

/// Kinds of taint *sources* — places where untrusted input enters the program.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum SourceKind {
    /// Data received from a network socket (`recv`, `recvfrom`, …).
    NetworkRead,
    /// Data read from a file descriptor or stream (`read`, `fgets`, `getline`, …).
    FileRead,
    /// Process environment lookup (`getenv`, `secure_getenv`, …).
    EnvVar,
    /// Interactive user-facing input (`scanf`, `gets`, …).
    UserInput,
    /// Inter-process communication receive (`msgrcv`, `mq_receive`, …).
    IpcRecv,
}

/// Kinds of taint *sinks* — places where tainted data is dangerous.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum SinkKind {
    /// Command execution (`system`, `execve`, `popen`, …).
    CommandExec,
    /// Bulk memory copy (`memcpy`, `strcpy`, …) — buffer-overflow vector.
    MemoryCopy,
    /// Direct memory write (`memset`, `write`, …).
    MemoryWrite,
    /// Log/format-style output (`printf`, `syslog`, …) — format-string vector.
    LogOutput,
    /// Network egress (`send`, `sendto`, …) — data-exfiltration sink.
    NetworkWrite,
}

/// Strip common symbol decorations so we can match on the bare libc name.
///
/// Handles:
/// * leading underscores (`_recv`, `__libc_recv`)
/// * PLT/GOT suffixes (`recv@plt`, `recv@@GLIBC_2.2.5`)
/// * `__libc_` / `__isoc99_` prefixes
fn normalize(symbol: &str) -> &str {
    // Drop everything from the first `@` (PLT / versioned-symbol marker).
    let s = match symbol.find('@') {
        Some(idx) => &symbol[..idx],
        None => symbol,
    };
    // Strip leading underscores.
    let s = s.trim_start_matches('_');
    // Strip well-known libc internal prefixes (which themselves had leading
    // underscores consumed above).
    for prefix in ["libc_", "isoc99_", "isoc23_", "GI_"] {
        if let Some(rest) = s.strip_prefix(prefix) {
            return rest;
        }
    }
    s
}

/// Classify `symbol` as a known taint source, or `None` if unrecognized.
///
/// Recognized sources include `recv`, `read`, `fgets`, `scanf`, `getenv`,
/// `getline`, and close relatives (see implementation for the full list).
pub fn classify_source(symbol: &str) -> Option<SourceKind> {
    let name = normalize(symbol);
    match name {
        // Network reads
        "recv" | "recvfrom" | "recvmsg" | "recvmmsg" | "read_socket" => {
            Some(SourceKind::NetworkRead)
        }

        // File / stream reads
        "read" | "pread" | "pread64" | "readv" | "preadv" | "fread"
        | "fgets" | "fgetc" | "getc" | "getchar" | "getline" | "getdelim" => {
            Some(SourceKind::FileRead)
        }

        // Environment
        "getenv" | "secure_getenv" | "getenv_r" => Some(SourceKind::EnvVar),

        // Interactive user input
        "scanf" | "fscanf" | "sscanf" | "vscanf" | "vfscanf" | "vsscanf"
        | "gets" | "gets_s" => Some(SourceKind::UserInput),

        // IPC
        "msgrcv" | "mq_receive" | "mq_timedreceive" | "shmat" => {
            Some(SourceKind::IpcRecv)
        }

        _ => None,
    }
}

/// Classify `symbol` as a known taint sink, or `None` if unrecognized.
///
/// Recognized sinks include `system`/`execve`/`execv`/`popen` → `CommandExec`,
/// `memcpy`/`strcpy` → `MemoryCopy`, and `printf`/`syslog` → `LogOutput`,
/// among others.
pub fn classify_sink(symbol: &str) -> Option<SinkKind> {
    let name = normalize(symbol);
    match name {
        // Command execution
        "system" | "popen" | "execve" | "execv" | "execvp" | "execvpe"
        | "execl" | "execlp" | "execle" | "posix_spawn" | "posix_spawnp" => {
            Some(SinkKind::CommandExec)
        }

        // Bulk memory copy (classic overflow sinks)
        "memcpy" | "memmove" | "mempcpy" | "strcpy" | "stpcpy" | "strncpy"
        | "strcat" | "strncat" | "bcopy" => Some(SinkKind::MemoryCopy),

        // Direct memory write
        "memset" | "bzero" | "write" | "pwrite" | "pwrite64" | "writev"
        | "pwritev" | "fwrite" | "fputs" | "fputc" | "putc" => {
            Some(SinkKind::MemoryWrite)
        }

        // Format / log output (format-string sinks)
        "printf" | "fprintf" | "sprintf" | "snprintf" | "vprintf" | "vfprintf"
        | "vsprintf" | "vsnprintf" | "dprintf" | "vdprintf"
        | "syslog" | "vsyslog" => Some(SinkKind::LogOutput),

        // Network egress
        "send" | "sendto" | "sendmsg" | "sendmmsg" | "sendfile" => {
            Some(SinkKind::NetworkWrite)
        }

        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sources_required_set() {
        // Symbols the task spec explicitly calls out.
        assert_eq!(classify_source("recv"), Some(SourceKind::NetworkRead));
        assert_eq!(classify_source("read"), Some(SourceKind::FileRead));
        assert_eq!(classify_source("fgets"), Some(SourceKind::FileRead));
        assert_eq!(classify_source("scanf"), Some(SourceKind::UserInput));
        assert_eq!(classify_source("getenv"), Some(SourceKind::EnvVar));
        assert_eq!(classify_source("getline"), Some(SourceKind::FileRead));
    }

    #[test]
    fn sinks_required_set() {
        // Spec-mandated mappings.
        assert_eq!(classify_sink("system"), Some(SinkKind::CommandExec));
        assert_eq!(classify_sink("execve"), Some(SinkKind::CommandExec));
        assert_eq!(classify_sink("execv"), Some(SinkKind::CommandExec));
        assert_eq!(classify_sink("popen"), Some(SinkKind::CommandExec));
        assert_eq!(classify_sink("memcpy"), Some(SinkKind::MemoryCopy));
        assert_eq!(classify_sink("strcpy"), Some(SinkKind::MemoryCopy));
        assert_eq!(classify_sink("printf"), Some(SinkKind::LogOutput));
        assert_eq!(classify_sink("syslog"), Some(SinkKind::LogOutput));
    }

    #[test]
    fn unknown_symbols_return_none() {
        assert_eq!(classify_source("frobnicate"), None);
        assert_eq!(classify_source(""), None);
        assert_eq!(classify_sink("frobnicate"), None);
        assert_eq!(classify_sink(""), None);
        // Sinks shouldn't be classified as sources and vice-versa.
        assert_eq!(classify_source("memcpy"), None);
        assert_eq!(classify_sink("recv"), None);
    }

    #[test]
    fn symbol_decorations_are_stripped() {
        // Leading underscores (Mach-O / some toolchains).
        assert_eq!(classify_source("_recv"), Some(SourceKind::NetworkRead));
        assert_eq!(classify_sink("_memcpy"), Some(SinkKind::MemoryCopy));

        // PLT-style suffixes.
        assert_eq!(classify_source("recv@plt"), Some(SourceKind::NetworkRead));
        assert_eq!(classify_sink("printf@plt"), Some(SinkKind::LogOutput));

        // Versioned glibc symbols.
        assert_eq!(
            classify_sink("memcpy@@GLIBC_2.14"),
            Some(SinkKind::MemoryCopy)
        );

        // glibc internal prefixes.
        assert_eq!(
            classify_source("__libc_read"),
            Some(SourceKind::FileRead)
        );
        assert_eq!(
            classify_source("__isoc99_scanf"),
            Some(SourceKind::UserInput)
        );
    }

    #[test]
    fn extended_sources_categorized() {
        // Network family.
        assert_eq!(
            classify_source("recvfrom"),
            Some(SourceKind::NetworkRead)
        );
        assert_eq!(classify_source("recvmsg"), Some(SourceKind::NetworkRead));

        // File family.
        assert_eq!(classify_source("fread"), Some(SourceKind::FileRead));
        assert_eq!(classify_source("getdelim"), Some(SourceKind::FileRead));

        // Env family.
        assert_eq!(
            classify_source("secure_getenv"),
            Some(SourceKind::EnvVar)
        );

        // User input family.
        assert_eq!(classify_source("gets"), Some(SourceKind::UserInput));
        assert_eq!(classify_source("sscanf"), Some(SourceKind::UserInput));

        // IPC family.
        assert_eq!(classify_source("msgrcv"), Some(SourceKind::IpcRecv));
        assert_eq!(
            classify_source("mq_receive"),
            Some(SourceKind::IpcRecv)
        );
    }

    #[test]
    fn extended_sinks_categorized() {
        // Command exec family.
        assert_eq!(classify_sink("execvp"), Some(SinkKind::CommandExec));
        assert_eq!(
            classify_sink("posix_spawn"),
            Some(SinkKind::CommandExec)
        );

        // Memory copy family.
        assert_eq!(classify_sink("memmove"), Some(SinkKind::MemoryCopy));
        assert_eq!(classify_sink("strncpy"), Some(SinkKind::MemoryCopy));
        assert_eq!(classify_sink("strcat"), Some(SinkKind::MemoryCopy));

        // Memory write family (distinct from copy).
        assert_eq!(classify_sink("memset"), Some(SinkKind::MemoryWrite));
        assert_eq!(classify_sink("write"), Some(SinkKind::MemoryWrite));

        // Log output family.
        assert_eq!(classify_sink("snprintf"), Some(SinkKind::LogOutput));
        assert_eq!(classify_sink("vfprintf"), Some(SinkKind::LogOutput));

        // Network write family.
        assert_eq!(classify_sink("send"), Some(SinkKind::NetworkWrite));
        assert_eq!(classify_sink("sendto"), Some(SinkKind::NetworkWrite));
    }
}
