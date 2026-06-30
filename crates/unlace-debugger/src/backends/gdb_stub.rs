//! GDB Remote Serial Protocol (RSP) TCP backend (ROADMAP Phase G.2).
//!
//! Connects to a remote GDB stub (qemu `-s`, gdbserver, a hardware probe, …)
//! over TCP and drives it with the packet helpers in [`crate::gdb_rsp`]. The
//! wire-protocol parsing (`read_packet`, `parse_register_response`, the amd64
//! `g`-packet register order) is factored into pure functions so it can be
//! unit-tested without a live target; a mock-server integration test exercises
//! one real socket round-trip.

use std::cell::RefCell;
use std::io::{Read, Write};
use std::net::TcpStream;

use crate::gdb_rsp;
use crate::regs::RegisterSet;
use crate::{BreakpointTable, Debugger, DebuggerError, Result, StopReason};

/// Standard amd64 `g`-packet register order (GDB `amd64` target): 17 × 8-byte
/// GPRs+rip, then 7 × 4-byte segment/flags registers.
const AMD64_G_ORDER: &[(&str, usize)] = &[
    ("rax", 8),
    ("rbx", 8),
    ("rcx", 8),
    ("rdx", 8),
    ("rsi", 8),
    ("rdi", 8),
    ("rbp", 8),
    ("rsp", 8),
    ("r8", 8),
    ("r9", 8),
    ("r10", 8),
    ("r11", 8),
    ("r12", 8),
    ("r13", 8),
    ("r14", 8),
    ("r15", 8),
    ("rip", 8),
    ("eflags", 4),
    ("cs", 4),
    ("ss", 4),
    ("ds", 4),
    ("es", 4),
    ("fs", 4),
    ("gs", 4),
];

/// A debugger driven over a TCP GDB-RSP connection.
pub struct GdbStubDebugger {
    stream: RefCell<TcpStream>,
    breakpoints: BreakpointTable,
    /// breakpoint id → address, so `remove_breakpoint(id)` can build the `z`
    /// packet.
    bp_addrs: std::collections::BTreeMap<u32, u64>,
}

impl GdbStubDebugger {
    /// Connect to a GDB stub listening at `addr` (e.g. `"127.0.0.1:1234"`).
    pub fn connect(addr: &str) -> Result<Self> {
        let stream = TcpStream::connect(addr)?;
        Ok(Self::from_stream(stream))
    }

    /// Build a backend over an already-open stream (used by tests).
    pub fn from_stream(stream: TcpStream) -> Self {
        Self {
            stream: RefCell::new(stream),
            breakpoints: BreakpointTable::new(),
            bp_addrs: std::collections::BTreeMap::new(),
        }
    }

    /// Send an RSP request packet and return the decoded response payload.
    fn transact(&self, request: &str) -> Result<String> {
        let mut s = self.stream.borrow_mut();
        s.write_all(request.as_bytes())?;
        s.flush()?;
        let payload = read_packet(&mut *s)?;
        // Acknowledge the response.
        s.write_all(b"+")?;
        s.flush()?;
        Ok(payload)
    }
}

/// Read one RSP packet (`$payload#xx`) from `r`, skipping leading `+`/`-`
/// acks, and return the verified payload.
fn read_packet<R: Read>(r: &mut R) -> Result<String> {
    let mut byte = [0u8; 1];
    // Skip acks / noise until we see the packet start.
    loop {
        let n = r.read(&mut byte)?;
        if n == 0 {
            return Err(DebuggerError::Protocol("connection closed".into()));
        }
        if byte[0] == b'$' {
            break;
        }
    }
    let mut payload = String::new();
    loop {
        let n = r.read(&mut byte)?;
        if n == 0 {
            return Err(DebuggerError::Protocol(
                "connection closed mid-packet".into(),
            ));
        }
        if byte[0] == b'#' {
            break;
        }
        payload.push(byte[0] as char);
    }
    // Read the 2-char checksum.
    let mut csum = [0u8; 2];
    r.read_exact(&mut csum)?;
    let full = format!("${payload}#{}", std::str::from_utf8(&csum).unwrap_or("00"));
    gdb_rsp::decode_packet(&full).map_err(|e| DebuggerError::Protocol(format!("{e:?}")))
}

/// Decode a `g`-packet hex blob into a [`RegisterSet`] using the amd64 order.
/// Each register's bytes are little-endian.
pub fn parse_register_response(hex: &str) -> Result<RegisterSet> {
    let bytes = gdb_rsp::hex_decode(hex).map_err(|e| DebuggerError::Protocol(format!("{e:?}")))?;
    let mut regs = RegisterSet::new();
    let mut off = 0usize;
    for (name, width) in AMD64_G_ORDER {
        if off + width > bytes.len() {
            break;
        }
        let mut val = 0u64;
        for (i, b) in bytes[off..off + width].iter().enumerate() {
            val |= (*b as u64) << (8 * i);
        }
        regs.set(name, val);
        off += width;
    }
    Ok(regs)
}

impl Debugger for GdbStubDebugger {
    fn attach(&mut self, pid: u32) -> Result<()> {
        // vAttach;<pid-hex>. Many stubs are pre-attached and reply `OK`/stop
        // reply; we accept any non-error response.
        let req = gdb_rsp::encode_packet(&format!("vAttach;{pid:x}"));
        self.transact(&req)?; // response is the stop reply; we only need success
        Ok(())
    }

    fn detach(&mut self) -> Result<()> {
        let req = gdb_rsp::encode_packet("D");
        self.transact(&req)?;
        Ok(())
    }

    fn cont(&mut self) -> Result<StopReason> {
        let resp = self.transact(&gdb_rsp::cont_packet())?;
        Ok(stop_reason_from_reply(&resp))
    }

    fn step(&mut self) -> Result<StopReason> {
        let resp = self.transact(&gdb_rsp::step_packet())?;
        match stop_reason_from_reply(&resp) {
            StopReason::Signal(_) => Ok(StopReason::SingleStep),
            other => Ok(other),
        }
    }

    fn set_breakpoint(&mut self, ea: u64) -> Result<u32> {
        let resp = self.transact(&gdb_rsp::insert_breakpoint_packet(0, ea, 1))?;
        if resp != "OK" && !resp.is_empty() {
            return Err(DebuggerError::Protocol(format!(
                "stub rejected breakpoint: {resp}"
            )));
        }
        let id = self.breakpoints.add(ea);
        self.bp_addrs.insert(id, ea);
        Ok(id)
    }

    fn remove_breakpoint(&mut self, id: u32) -> Result<()> {
        let ea = *self
            .bp_addrs
            .get(&id)
            .ok_or(DebuggerError::BreakpointNotFound(id as u64))?;
        self.transact(&gdb_rsp::remove_breakpoint_packet(0, ea, 1))?;
        self.breakpoints.remove(id);
        self.bp_addrs.remove(&id);
        Ok(())
    }

    fn read_memory(&self, ea: u64, n: usize) -> Result<Vec<u8>> {
        let resp = self.transact(&gdb_rsp::read_memory_packet(ea, n))?;
        if resp.starts_with('E') {
            return Err(DebuggerError::Protocol(format!(
                "memory read error: {resp}"
            )));
        }
        gdb_rsp::hex_decode(&resp).map_err(|e| DebuggerError::Protocol(format!("{e:?}")))
    }

    fn write_memory(&mut self, ea: u64, bytes: &[u8]) -> Result<()> {
        let resp = self.transact(&gdb_rsp::write_memory_packet(ea, bytes))?;
        if resp != "OK" {
            return Err(DebuggerError::Protocol(format!(
                "memory write error: {resp}"
            )));
        }
        Ok(())
    }

    fn read_registers(&self) -> Result<RegisterSet> {
        let resp = self.transact(&gdb_rsp::read_regs_packet())?;
        parse_register_response(&resp)
    }

    fn stack_trace(&self) -> Result<Vec<u64>> {
        // Best-effort frame-pointer walk: pc, then follow the saved-rbp chain.
        let regs = self.read_registers()?;
        let mut frames = Vec::new();
        if let Some(pc) = regs.pc() {
            frames.push(pc);
        }
        let mut fp = regs.get("rbp").unwrap_or(0);
        for _ in 0..64 {
            if fp == 0 {
                break;
            }
            // [fp + 8] = return address, [fp] = caller's saved rbp.
            let Ok(ret_bytes) = self.read_memory(fp + 8, 8) else {
                break;
            };
            let Ok(next_bytes) = self.read_memory(fp, 8) else {
                break;
            };
            let ret = u64::from_le_bytes(ret_bytes.try_into().unwrap_or([0; 8]));
            let next = u64::from_le_bytes(next_bytes.try_into().unwrap_or([0; 8]));
            if ret == 0 {
                break;
            }
            frames.push(ret);
            if next <= fp {
                break; // not strictly ascending → stop (avoids loops)
            }
            fp = next;
        }
        Ok(frames)
    }
}

/// Map an RSP stop reply (`S05`, `T05…`) to a [`StopReason`].
fn stop_reason_from_reply(payload: &str) -> StopReason {
    if let Some(sig) = gdb_rsp::parse_stop_reply(payload) {
        // SIGTRAP (5) means a breakpoint/step trap.
        if sig == 5 {
            return StopReason::Signal(5);
        }
        return StopReason::Signal(sig as i32);
    }
    if let Some(rest) = payload.strip_prefix('W') {
        let code = i32::from_str_radix(rest.split(';').next().unwrap_or("0"), 16).unwrap_or(0);
        return StopReason::Exited(code);
    }
    StopReason::Signal(0)
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::io::Cursor;

    #[test]
    fn parses_amd64_register_blob() {
        // rax=1, rbx=2, rest zero (enough bytes for at least rax/rbx).
        let mut bytes = vec![0u8; AMD64_G_ORDER.iter().map(|(_, w)| *w).sum()];
        bytes[0] = 1; // rax LE
        bytes[8] = 2; // rbx LE
        let hex = gdb_rsp::hex_encode(&bytes);
        let regs = parse_register_response(&hex).unwrap();
        assert_eq!(regs.get("rax"), Some(1));
        assert_eq!(regs.get("rbx"), Some(2));
        assert_eq!(regs.get("rip"), Some(0));
    }

    #[test]
    fn read_packet_decodes_framed_response() {
        let packet = gdb_rsp::encode_packet("OK");
        // Prepend a `+` ack to exercise the skip-noise path.
        let wire = format!("+{packet}");
        let mut cur = Cursor::new(wire.into_bytes());
        let payload = read_packet(&mut cur).unwrap();
        assert_eq!(payload, "OK");
    }

    #[test]
    fn stop_reply_maps_to_reason() {
        assert_eq!(stop_reason_from_reply("S05"), StopReason::Signal(5));
        assert_eq!(stop_reason_from_reply("T0b"), StopReason::Signal(11));
        assert_eq!(stop_reason_from_reply("W00"), StopReason::Exited(0));
    }

    #[test]
    fn end_to_end_read_registers_over_mock_socket() {
        use std::net::TcpListener;
        let listener = TcpListener::bind("127.0.0.1:0").unwrap();
        let addr = listener.local_addr().unwrap();

        // Mock stub: reply to the `g` packet with rax=0xdead.
        let server = std::thread::spawn(move || {
            let (mut sock, _) = listener.accept().unwrap();
            let mut buf = [0u8; 64];
            let _ = sock.read(&mut buf).unwrap();
            let mut bytes = vec![0u8; AMD64_G_ORDER.iter().map(|(_, w)| *w).sum()];
            bytes[0] = 0xad;
            bytes[1] = 0xde;
            let resp = gdb_rsp::encode_packet(&gdb_rsp::hex_encode(&bytes));
            sock.write_all(resp.as_bytes()).unwrap();
            sock.flush().unwrap();
            // Drain the client's `+` ack.
            let _ = sock.read(&mut buf);
        });

        let dbg = GdbStubDebugger::connect(&addr.to_string()).unwrap();
        let regs = dbg.read_registers().unwrap();
        assert_eq!(regs.get("rax"), Some(0xdead));
        server.join().unwrap();
    }
}
