//! (unlace `sockfamily`) A frame object passed as a `struct sockaddr *` whose
//! address family the function sets to a constant is declared as that family's
//! address record.
//!
//! `connect`, `bind` and `sendto` declare their address `const struct sockaddr *`,
//! a generic header of `sa_family` and `char sa_data[14]`; the object a program
//! fills is the family's own record (`struct sockaddr_in` for `AF_INET`), cast at
//! the call. Typed from the call, the object's port and address stores land in
//! `sa_data` and print a byte at a time (`v4.sa_data[0] = (char)v1;
//! v4.sa_data[1] = SUB21(v1,1);`).
//!
//! With the option on (the default), an unlocked frame hint typed `sockaddr` whose family slot
//! the function writes only with the constant `AF_INET` (2) or `AF_UNIX` (1)
//! takes `sockaddr_in` or `sockaddr_un`. The record must be one the type factory
//! already holds with a 2-byte family at offset 0, the layout of the target's own
//! type library (`typelib` interns the two with `sockaddr` while the option is
//! on); a BSD layout with `sin_len` first is left alone.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::space::AddrSpace;
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode;

use crate::dtype::{Datatype, TypeFactory, type_metatype};
use crate::funcdata::Funcdata;
use crate::options::on_or_off;
use crate::varmap::{MapState, RangeType, TYPELOCK};

/// The address records `typelib` interns with `sockaddr` while the option is on.
pub const FAMILY_RECORDS: &[&str] = &["sockaddr_in", "sockaddr_un"];

/// (unlace) Option `sockfamily`: a `sockaddr` frame object takes its family's record.
#[derive(Clone, Debug, PartialEq)]
pub struct SockFamily(pub bool);

impl crate::optionset::UnlaceOption for SockFamily {
    const NAME: &'static str = "sockfamily";
    crate::unlace_option_id!();

    fn unset() -> Self {
        SockFamily(false)
    }

    fn shipped() -> Self {
        SockFamily(true)
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        let (v, msg) = OptionSockFamily.apply(value)?;
        Ok((SockFamily(v), msg))
    }
}

/// `option sockfamily on|off`.
pub struct OptionSockFamily;

impl OptionSockFamily {
    /// The option name.
    pub const NAME: &'static str = "sockfamily";

    /// Resolve the flag and its confirmation message; the caller writes it into
    /// the registered option `SockFamily`.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(bool, String)> {
        let val = on_or_off(p1)?;
        let prop = if val { "on" } else { "off" };
        Ok((
            val,
            format!("Socket address records by family turned {prop}"),
        ))
    }
}

/// The record name of an address family constant.
fn family_record(family: uintb) -> Option<&'static str> {
    match family {
        1 => Some("sockaddr_un"),
        2 => Some("sockaddr_in"),
        _ => None,
    }
}

/// The address family every write at `start` stores: each one a COPY of a
/// constant whose first two bytes agree, ignoring the INDIRECTs calls put there.
fn family_stored(fd: &Funcdata, space: &Rc<AddrSpace>, start: uintb) -> Option<uintb> {
    let addr = Address::new(Rc::clone(space), start);
    let mut family = None;
    for size in [2, 4, 8] {
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
            let shift = if space.is_big_endian() {
                8 * (size - 2)
            } else {
                0
            };
            let value = (input.get_offset() >> shift) & 0xffff;
            if family.is_some_and(|f| f != value) {
                return None;
            }
            family = Some(value);
        }
    }
    family
}

/// The family record `name` when the factory holds it with a 2-byte family first.
fn held_record(types: &dyn TypeFactory, name: &str) -> Option<Rc<Datatype>> {
    let record = types.find_by_name(name).ok().flatten()?;
    let first = record.get_field(0)?;
    (record.get_metatype() == type_metatype::TYPE_STRUCT
        && first.offset == 0
        && first.field_type.get_size() == 2)
        .then_some(record)
}

/// Retype the `sockaddr` hints of `state` whose family the function sets.
pub fn settle(fd: &Funcdata, state: &mut MapState, space: &Rc<AddrSpace>) {
    if !fd.get_arch().unlace_options.get::<SockFamily>().0 {
        return;
    }
    let Some(types) = fd.get_arch().types() else {
        return;
    };
    for hint in state.hints_mut().iter_mut() {
        let generic = hint.type_.get_metatype() == type_metatype::TYPE_STRUCT
            && hint.type_.get_name() == "sockaddr";
        if !generic || hint.flags & TYPELOCK != 0 || hint.range_type == RangeType::Endpoint {
            continue;
        }
        let record = family_stored(fd, space, hint.start)
            .and_then(family_record)
            .and_then(|name| held_record(types, name));
        if let Some(record) = record {
            hint.size = record.get_size();
            hint.type_ = record;
        }
    }
}

#[cfg(test)]
mod tests;
