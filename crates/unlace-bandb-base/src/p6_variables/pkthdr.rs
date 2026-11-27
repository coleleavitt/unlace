//! (unlace `pkthdr`) A frame buffer a function builds an IPv4 packet in is
//! declared as the packet's headers: `iphdr` at its start and the `tcphdr`,
//! `udphdr` or `icmphdr` its protocol names after it.
//!
//! Nothing in a prototype says a buffer is a packet: `sendto` takes a
//! `const void *` and a checksum routine an `unsigned short *`. So a raw
//! sender's header fields print as one anonymous local per store, and the
//! headers as raw constants: `v3 = 0x28001045;` is the first IPv4 word
//! (version 4, IHL 5, tos 0x10, tot_len `htons(40)`) and `v6 = 0x640;` the ttl
//! and protocol bytes.
//!
//! With the option on (default off: it reads a packet out of constants), an
//! unlocked frame hint whose type is a scalar or a scalar array is declared
//! `iphdr` when either
//!
//! * every store to its first byte is the constant 0x45 (version 4, IHL 5, no
//!   options) and every store to its protocol byte (offset 9) one constant; or
//! * it is the buffer of a `sendto` on a socket that a `socket(AF_INET,
//!   SOCK_RAW, protocol)` call in the same function created, and the program
//!   supplies the IP header: `protocol` is `IPPROTO_RAW`, or the function sets
//!   `IP_HDRINCL` on that socket with `setsockopt(fd, IPPROTO_IP, IP_HDRINCL,
//!   ...)`.
//!
//! The hint 20 bytes on takes the transport header the protocol byte names
//! (`IPPROTO_ICMP` 1, `IPPROTO_TCP` 6, `IPPROTO_UDP` 17), or the socket's
//! protocol when that byte is not one constant. A raw socket of one of those
//! protocols that does not supply the IP header gets the transport header at the
//! buffer's start, since the kernel builds the IP header itself.
//!
//! The records are `libctypes`' published layouts with their bitfields
//! (`ihl`/`version`, `doff` and the TCP flags), which the console interns while
//! the option is on (`libctypes::intern_packet_headers`), so a constant store
//! over several fields prints one assignment per field. A record the factory
//! does not hold complete at its wire width is not used.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::space::AddrSpace;
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode;

use crate::context::VarnodeId;
use crate::dtype::{Datatype, TypeFactory, type_metatype};
use crate::funcdata::Funcdata;
use crate::options::on_or_off;
use crate::varmap::{MapState, RangeType, ScopeLocal, TYPELOCK};

/// The records the option declares, which `libctypes` interns while it is on.
pub const HEADERS: &[&str] = &["iphdr", "tcphdr", "udphdr", "icmphdr"];

/// The width of an IPv4 header without options (IHL 5).
const IP_HEADER: uintb = 20;
/// Version 4, IHL 5: the first byte of an IPv4 header without options.
const VERSION4_IHL5: uintb = 0x45;
/// The offset of `iphdr::protocol`.
const PROTOCOL: uintb = 9;
const AF_INET: uintb = 2;
const SOCK_RAW: uintb = 3;
/// `socket`'s type argument may carry `SOCK_NONBLOCK`/`SOCK_CLOEXEC` above the type.
const SOCK_TYPE_MASK: uintb = 0xf;
const IPPROTO_IP: uintb = 0;
const IP_HDRINCL: uintb = 3;
const IPPROTO_RAW: uintb = 255;
/// How many `COPY`s [`socket_call`] follows back from a socket descriptor.
const COPY_CHAIN: usize = 8;

/// (unlace) Option `pkthdr`: a frame buffer holding an IPv4 packet takes its headers.
#[derive(Clone, Debug, PartialEq)]
pub struct PktHdr(pub bool);

impl crate::optionset::UnlaceOption for PktHdr {
    const NAME: &'static str = "pkthdr";
    crate::unlace_option_id!();

    fn unset() -> Self {
        PktHdr(false)
    }

    fn shipped() -> Self {
        PktHdr(false)
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        let (v, msg) = OptionPktHdr.apply(value)?;
        Ok((PktHdr(v), msg))
    }
}

/// `option pkthdr on|off`.
pub struct OptionPktHdr;

impl OptionPktHdr {
    /// The option name.
    pub const NAME: &'static str = "pkthdr";

    /// Resolve the flag and its confirmation message; the caller writes it into
    /// the registered option `PktHdr`.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(bool, String)> {
        let val = on_or_off(p1)?;
        let prop = if val { "on" } else { "off" };
        Ok((val, format!("Packet header records turned {prop}")))
    }
}

/// The transport header record of an IP protocol number.
fn transport(protocol: uintb) -> Option<&'static str> {
    match protocol {
        1 => Some("icmphdr"),
        6 => Some("tcphdr"),
        17 => Some("udphdr"),
        _ => None,
    }
}

/// The byte every store to frame offset `at` writes: each write that covers it
/// a `COPY` of a constant, all agreeing, ignoring the INDIRECTs calls put there.
fn stored_byte(fd: &Funcdata, space: &Rc<AddrSpace>, at: uintb) -> Option<uintb> {
    let mut byte = None;
    for size in [1, 2, 4, 8] {
        for back in 0..size {
            let start = space.wrap_offset(at.wrapping_sub(back as uintb));
            let addr = Address::new(Rc::clone(space), start);
            for vn in fd.vbank().iter_loc_size_addr(size, &addr) {
                let Some(def) = fd.vbank().get(vn).and_then(|v| v.get_def()) else {
                    continue;
                };
                let op = fd.obank().get(def)?;
                match op.code() {
                    OpCode::CPUI_INDIRECT => continue,
                    OpCode::CPUI_COPY => {}
                    _ => return None,
                }
                let input = fd.vbank().get(op.get_in(0)?)?;
                if !input.is_constant() {
                    return None;
                }
                let lsb = if space.is_big_endian() {
                    size - 1 - back
                } else {
                    back
                };
                let value = if lsb >= 8 {
                    0
                } else {
                    (input.get_offset() >> (8 * lsb)) & 0xff
                };
                if byte.is_some_and(|b| b != value) {
                    return None;
                }
                byte = Some(value);
            }
        }
    }
    byte
}

/// The constant `vn` holds.
fn constant(fd: &Funcdata, vn: Option<VarnodeId>) -> Option<uintb> {
    let v = fd.vbank().get(vn?)?;
    v.is_constant().then(|| v.get_offset())
}

/// The descriptor `vn` carries, followed back through `COPY`s.
fn descriptor(fd: &Funcdata, vn: VarnodeId) -> VarnodeId {
    let mut vn = vn;
    for _ in 0..COPY_CHAIN {
        let Some(op) = fd
            .vbank()
            .get(vn)
            .and_then(|v| v.get_def())
            .and_then(|def| fd.obank().get(def))
        else {
            break;
        };
        if op.code() != OpCode::CPUI_COPY {
            break;
        }
        let Some(input) = op.get_in(0) else {
            break;
        };
        vn = input;
    }
    vn
}

/// The protocol of the `socket(AF_INET, SOCK_RAW, protocol)` call whose result
/// the descriptor `sock` is.
fn socket_call(fd: &Funcdata, sock: VarnodeId) -> Option<uintb> {
    let def = fd.vbank().get(sock)?.get_def()?;
    let op = fd.obank().get(def)?;
    if op.code() != OpCode::CPUI_CALL {
        return None;
    }
    let index = fd.get_call_specs_index(def)?;
    if fd.get_call_specs(index).get_name() != "socket" {
        return None;
    }
    let domain = constant(fd, op.get_in(1))?;
    let kind = constant(fd, op.get_in(2))?;
    (domain == AF_INET && kind & SOCK_TYPE_MASK == SOCK_RAW)
        .then(|| constant(fd, op.get_in(3)))
        .flatten()
}

/// Whether the function sets `IP_HDRINCL` on the socket `sock`.
fn sets_hdrincl(fd: &Funcdata, sock: VarnodeId) -> bool {
    (0..fd.num_calls()).any(|i| {
        let fc = fd.get_call_specs(i);
        if fc.get_name() != "setsockopt" {
            return false;
        }
        let Some(op) = fd.obank().get(fc.get_op()) else {
            return false;
        };
        op.get_in(1).map(|vn| descriptor(fd, vn)) == Some(sock)
            && constant(fd, op.get_in(2)) == Some(IPPROTO_IP)
            && constant(fd, op.get_in(3)) == Some(IP_HDRINCL)
    })
}

/// The headers each raw `sendto` buffer holds, at its frame offset.
fn raw_sends(fd: &Funcdata, space: &Rc<AddrSpace>, out: &mut Vec<(uintb, &'static str)>) {
    for i in 0..fd.num_calls() {
        let fc = fd.get_call_specs(i);
        if fc.get_name() != "sendto" {
            continue;
        }
        let Some(op) = fd.obank().get(fc.get_op()) else {
            continue;
        };
        let (Some(sock), Some(buf)) = (op.get_in(1), op.get_in(2)) else {
            continue;
        };
        let Some((at, 1)) = crate::stackranges::frame_address(fd, buf).and_then(|a| a.extent(1))
        else {
            continue;
        };
        let start = space.wrap_offset(at);
        let sock = descriptor(fd, sock);
        let Some(protocol) = socket_call(fd, sock) else {
            continue;
        };
        if protocol == IPPROTO_RAW || sets_hdrincl(fd, sock) {
            out.push((start, "iphdr"));
            let carried = stored_byte(fd, space, start + PROTOCOL).unwrap_or(protocol);
            if let Some(l4) = transport(carried) {
                out.push((space.wrap_offset(start + IP_HEADER), l4));
            }
        } else if let Some(l4) = transport(protocol) {
            out.push((start, l4));
        }
    }
}

/// The headers a constant IPv4 header at a hint's start declares.
fn constant_headers(
    fd: &Funcdata,
    space: &Rc<AddrSpace>,
    state: &mut MapState,
    out: &mut Vec<(uintb, &'static str)>,
) {
    let mut starts: Vec<uintb> = state.hints_mut().iter().map(|h| h.start).collect();
    starts.sort_unstable();
    starts.dedup();
    for start in starts {
        if stored_byte(fd, space, start) != Some(VERSION4_IHL5) {
            continue;
        }
        let Some(protocol) = stored_byte(fd, space, space.wrap_offset(start + PROTOCOL)) else {
            continue;
        };
        out.push((start, "iphdr"));
        if let Some(l4) = transport(protocol) {
            out.push((space.wrap_offset(start + IP_HEADER), l4));
        }
    }
}

/// The header record `name` when the factory holds it complete at its wire width.
fn held_record(types: &dyn TypeFactory, name: &str) -> Option<Rc<Datatype>> {
    let width = match name {
        "iphdr" | "tcphdr" => 20,
        _ => 8,
    };
    let record = types.find_by_name(name).ok().flatten()?;
    (record.get_metatype() == type_metatype::TYPE_STRUCT
        && record.get_size() == width
        && !record.is_incomplete())
    .then_some(record)
}

/// Whether a hint of type `ct` holds bytes a header may claim: a scalar, or an
/// array of scalars.
fn replaceable(ct: &Datatype) -> bool {
    let scalar = |meta| {
        matches!(
            meta,
            type_metatype::TYPE_UNKNOWN
                | type_metatype::TYPE_INT
                | type_metatype::TYPE_UINT
                | type_metatype::TYPE_BOOL
        )
    };
    match ct.get_metatype() {
        type_metatype::TYPE_ARRAY => ct
            .get_array_base()
            .is_some_and(|base| scalar(base.get_metatype())),
        meta => scalar(meta),
    }
}

/// Declare the packet headers the frame of `fd` holds, and return the offsets
/// of the hints that now carry one, for [`lock`].
pub fn settle(fd: &Funcdata, state: &mut MapState, space: &Rc<AddrSpace>) -> Vec<uintb> {
    let mut declared = Vec::new();
    if !fd.get_arch().unlace_options.get::<PktHdr>().0 {
        return declared;
    }
    let Some(types) = fd.get_arch().types() else {
        return declared;
    };
    let mut headers = Vec::new();
    raw_sends(fd, space, &mut headers);
    constant_headers(fd, space, state, &mut headers);
    for (start, name) in headers {
        let Some(record) = held_record(types, name) else {
            continue;
        };
        match state.hints_mut().iter_mut().find(|h| h.start == start) {
            Some(hint) => {
                let free = hint.flags & TYPELOCK == 0 && hint.range_type != RangeType::Endpoint;
                if !free || !replaceable(&hint.type_) {
                    continue;
                }
                hint.size = record.get_size();
                hint.range_type = RangeType::Fixed;
                hint.type_ = record;
            }
            None => state.add_range_pub(start, Some(record), 0, RangeType::Fixed, -1),
        }
        declared.push(start);
    }
    declared
}

/// Type-lock the header Symbols `restructure` made at `starts`. The lock is
/// what carries the record onto the Symbol's Varnodes, so a constant store over
/// a bitfield byte materializes as one assignment per bitfield
/// (`RuleBitFieldOut`) instead of a cast store of the byte; the next pass's
/// gather finds the Symbol locked and keeps it.
pub fn lock(lm: &mut ScopeLocal, space: &Rc<AddrSpace>, starts: &[uintb]) {
    let scope = lm.scope_id();
    let usepoint = Address::new_invalid();
    for &start in starts {
        let addr = Address::new(Rc::clone(space), start);
        let db = lm.database();
        let Some(entry) = db.find_addr(scope, &addr, &usepoint) else {
            continue;
        };
        let symbol = db.entry(scope, entry).symbol;
        let is_header = db
            .symbol(symbol)
            .dtype
            .as_ref()
            .is_some_and(|ct| HEADERS.contains(&ct.get_name()));
        if is_header {
            lm.set_attribute(symbol, crate::varnode::varnode_flags::typelock);
        }
    }
}
