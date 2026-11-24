//! (kuna `rawswitch`) Recover an x86-64 jump table from its instructions, as
//! IDA's switch matcher does, when the value-range models cannot.
//!
//! gcc and clang emit a PIC switch as
//!
//! ```text
//!   cmp  $N,%eax ; ja default        (either order with the lea)
//!   lea  table(%rip),%rdi
//!   movslq (%rdi,%rax,4),%rax
//!   add  %rdi,%rax
//!   jmp  *%rax                        (notrack, or a REX register)
//! ```
//!
//! The table holds `N + 1` offsets from its own start. The value-range models read
//! the index from the data flow, which can make it a constant: zlib's
//! `inflateBack` sets `state->mode = TYPE` just before its `switch (state->mode)`,
//! and gcc threaded every case straight to the next one, so the only path into
//! the dispatch carries `TYPE - TYPE = 0`. The model then reads one row (or none
//! once the constant folds the guard away), the dispatch prints as a computed
//! call, and the eighteen other cases are never decoded. This model matches the
//! instructions instead and takes all `N + 1` rows the `cmp`/`ja` admit.
//!
//! It is a fallback of `JumpTable::recover_addresses`: it runs only when the
//! recovered models failed, on a BRANCHIND in a 64-bit little-endian code space
//! whose bytes match the x86-64 shape (a 22-byte sequence no other ISA's code
//! reproduces by chance), and every row must land within [`MAX_SPAN`] bytes of
//! the jump.

use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::error::KunaResult;
use unlace_base::types::{int4, uint4, uintb};

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::jumptable::{JumpModel, JumpTable, LoadTable};

/// Widest distance from the jump at which a row is still taken as a case
/// (upstream's intraprocedural window, `JumpTable::sanityCheck`).
pub const MAX_SPAN: uintb = 0xffff;

/// The most rows a matched table may have.
pub const MAX_ROWS: uintb = 1024;

/// One matched table: its start and its row count.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RawTable {
    pub table: uintb,
    pub rows: uintb,
}

/// The bytes before and at `jmp` (`bytes[i]` is at `jmp - back + i`).
struct Window<'a> {
    bytes: &'a [u8],
    back: usize,
}

impl Window<'_> {
    /// The byte at `jmp + off` (`off` may be negative).
    fn at(&self, off: isize) -> Option<u8> {
        let i = self.back as isize + off;
        (i >= 0)
            .then(|| self.bytes.get(i as usize).copied())
            .flatten()
    }

    fn i32_at(&self, off: isize) -> Option<i32> {
        let b = [
            self.at(off)?,
            self.at(off + 1)?,
            self.at(off + 2)?,
            self.at(off + 3)?,
        ];
        Some(i32::from_le_bytes(b))
    }
}

/// The register an x86-64 `modrm` field names, with the REX extension bit.
fn reg(field: u8, rex_bit: bool) -> u8 {
    (field & 7) | if rex_bit { 8 } else { 0 }
}

/// `jmp *%r` ending at `end` (exclusive): its start and register.
fn match_jmp(w: &Window, end: isize) -> Option<(isize, u8)> {
    let modrm = w.at(end - 1)?;
    if w.at(end - 2)? != 0xff || modrm & 0xf8 != 0xe0 {
        return None;
    }
    let mut start = end - 2;
    let mut rex_b = false;
    if let Some(rex) = w.at(start - 1).filter(|&b| b & 0xf0 == 0x40) {
        rex_b = rex & 1 != 0;
        start -= 1;
    }
    if w.at(start - 1) == Some(0x3e) {
        start -= 1;
    }
    Some((start, reg(modrm, rex_b)))
}

/// `add %base,%dst` (REX.W 01 or 03, register form) ending at `end`.
fn match_add(w: &Window, end: isize, dst: u8) -> Option<(isize, u8)> {
    let (rex, op, modrm) = (w.at(end - 3)?, w.at(end - 2)?, w.at(end - 1)?);
    if rex & 0xf8 != 0x48 || modrm >> 6 != 3 {
        return None;
    }
    let (r, m) = (reg(modrm >> 3, rex & 4 != 0), reg(modrm, rex & 1 != 0));
    match op {
        0x01 if m == dst => Some((end - 3, r)),
        0x03 if r == dst => Some((end - 3, m)),
        _ => None,
    }
}

/// `movslq (%base,%idx,4),%dst` ending at `end`: its start and the index register.
fn match_movslq(w: &Window, end: isize, dst: u8, base: u8) -> Option<(isize, u8)> {
    let (rex, op, modrm, sib) = (
        w.at(end - 4)?,
        w.at(end - 3)?,
        w.at(end - 2)?,
        w.at(end - 1)?,
    );
    if rex & 0xf8 != 0x48 || op != 0x63 || modrm & 0xc7 != 0x04 || sib >> 6 != 2 {
        return None;
    }
    if reg(modrm >> 3, rex & 4 != 0) != dst || reg(sib, rex & 1 != 0) != base {
        return None;
    }
    let idx = reg(sib >> 3, rex & 2 != 0);
    (idx != 4).then_some((end - 4, idx))
}

/// `lea disp(%rip),%base` ending at `end`: its start and the table.
fn match_lea(w: &Window, end: isize, base: u8, jmp: uintb) -> Option<(isize, uintb)> {
    let start = end - 7;
    let (rex, op, modrm) = (w.at(start)?, w.at(start + 1)?, w.at(start + 2)?);
    if rex & 0xfb != 0x48 || op != 0x8d || modrm & 0xc7 != 0x05 {
        return None;
    }
    if reg(modrm >> 3, rex & 4 != 0) != base {
        return None;
    }
    let disp = w.i32_at(start + 3)? as i64;
    let next = (jmp as i64).wrapping_add(end as i64);
    Some((start, next.wrapping_add(disp) as uintb))
}

/// `ja rel` ending at `end`: its start.
fn match_ja(w: &Window, end: isize) -> Option<isize> {
    if w.at(end - 2) == Some(0x77) {
        return Some(end - 2);
    }
    (w.at(end - 6) == Some(0x0f) && w.at(end - 5) == Some(0x87)).then_some(end - 6)
}

/// `cmp $N,%idx` (32- or 64-bit) ending at `end`: its start and `N`.
fn match_cmp(w: &Window, end: isize, idx: u8) -> Option<(isize, uintb)> {
    let with_rex = |start: isize| -> (isize, bool) {
        match w.at(start - 1) {
            Some(r) if r & 0xf0 == 0x40 => (start - 1, r & 1 != 0),
            _ => (start, false),
        }
    };
    if w.at(end - 3) == Some(0x83) {
        let modrm = w.at(end - 2)?;
        let (start, rex_b) = with_rex(end - 3);
        if modrm & 0xf8 == 0xf8 && reg(modrm, rex_b) == idx {
            return Some((start, w.at(end - 1)? as i8 as i64 as uintb));
        }
    }
    if w.at(end - 6) == Some(0x81) {
        let modrm = w.at(end - 5)?;
        let (start, rex_b) = with_rex(end - 6);
        if modrm & 0xf8 == 0xf8 && reg(modrm, rex_b) == idx {
            return Some((start, w.i32_at(end - 4)? as i64 as uintb));
        }
    }
    if idx == 0 && w.at(end - 5) == Some(0x3d) {
        let (start, _) = with_rex(end - 5);
        return Some((start, w.i32_at(end - 4)? as i64 as uintb));
    }
    None
}

/// Match the dispatch shape in `bytes`, whose last `len` bytes are the jump.
/// `jmp` is the jump's address.
pub fn match_dispatch(bytes: &[u8], jmp: uintb, len: usize) -> Option<RawTable> {
    let w = Window {
        bytes,
        back: bytes.len().checked_sub(len)?,
    };
    let (jstart, dst) = match_jmp(&w, len as isize)?;
    if jstart != 0 {
        return None;
    }
    let (astart, base) = match_add(&w, jstart, dst)?;
    let (mstart, idx) = match_movslq(&w, astart, dst, base)?;
    let (table, bound) = if let Some((lstart, table)) = match_lea(&w, mstart, base, jmp) {
        // cmp ; ja ; lea
        let jastart = match_ja(&w, lstart)?;
        (table, match_cmp(&w, jastart, idx)?.1)
    } else {
        // lea ; cmp ; ja
        let jastart = match_ja(&w, mstart)?;
        let (cstart, bound) = match_cmp(&w, jastart, idx)?;
        (match_lea(&w, cstart, base, jmp)?.1, bound)
    };
    let rows = bound.checked_add(1)?;
    (rows >= 2 && rows <= MAX_ROWS).then_some(RawTable { table, rows })
}

/// The `rawswitch` model: a table matched from its instructions.
#[derive(Debug, Clone, Default)]
pub struct JumpModelRaw {
    dests: Vec<uintb>,
}

impl JumpModel for JumpModelRaw {
    fn is_override(&self) -> bool {
        false
    }

    fn get_table_size(&self) -> int4 {
        self.dests.len() as int4
    }

    fn recover_model(
        &mut self,
        fd: &mut Funcdata,
        indop: OpId,
        _matchsize: uint4,
        _maxtablesize: uint4,
    ) -> KunaResult<bool> {
        self.dests.clear();
        Ok(raw_destinations(fd, indop).is_some_and(|d| {
            self.dests = d;
            true
        }))
    }

    fn build_addresses(
        &self,
        fd: &Funcdata,
        indop: OpId,
        addresstable: &mut Vec<Address>,
        _loadpoints: Option<&mut Vec<LoadTable>>,
        _loadcounts: Option<&mut Vec<int4>>,
    ) -> KunaResult<()> {
        addresstable.clear();
        let Some(spc) = fd
            .obank()
            .get(indop)
            .and_then(|o| o.get_addr().get_space().cloned())
        else {
            return Ok(());
        };
        for &d in &self.dests {
            addresstable.push(Address::new(Rc::clone(&spc), d));
        }
        Ok(())
    }

    fn find_unnormalized(
        &mut self,
        _fd: &mut Funcdata,
        _maxaddsub: uint4,
        _maxleftright: uint4,
        _maxext: uint4,
    ) -> KunaResult<()> {
        Ok(())
    }

    fn build_labels(
        &self,
        _fd: &mut Funcdata,
        addresstable: &mut [Address],
        label: &mut Vec<uintb>,
        _orig: &dyn JumpModel,
    ) -> KunaResult<()> {
        for i in 0..addresstable.len() {
            label.push(i as uintb);
        }
        Ok(())
    }

    fn fold_in_normalization(
        &mut self,
        _fd: &mut Funcdata,
        _indop: OpId,
    ) -> KunaResult<Option<VarnodeId>> {
        Ok(None)
    }

    fn fold_in_guards(&mut self, _fd: &mut Funcdata, _jump: &mut JumpTable) -> KunaResult<bool> {
        Ok(false)
    }

    fn sanity_check(
        &mut self,
        fd: &mut Funcdata,
        _indop: OpId,
        addresstable: &mut Vec<Address>,
        _loadpoints: &mut Vec<LoadTable>,
        _loadcounts: Option<&Vec<int4>>,
    ) -> KunaResult<bool> {
        Ok(!addresstable.is_empty()
            && addresstable
                .iter()
                .all(|a| fd.get_arch().get_load_image_value(a, 1).is_ok()))
    }

    fn clone_box(&self) -> Box<dyn JumpModel> {
        Box::new(self.clone())
    }

    fn as_any(&self) -> &dyn std::any::Any {
        self
    }
}

/// The rows of the table the jump at `indop` dispatches through, when its
/// instructions match [`match_dispatch`] on an x86-64 image and every row lands
/// within [`MAX_SPAN`] of the jump.
fn raw_destinations(fd: &Funcdata, indop: OpId) -> Option<Vec<uintb>> {
    let arch = fd.get_arch();
    let at = fd.obank().get(indop)?.get_addr().clone();
    let spc = at.get_space().cloned()?;
    if spc.get_addr_size() != 8 || spc.is_big_endian() {
        return None;
    }
    let jmp = at.get_offset();
    const BACK: uintb = 40;
    let mut bytes = Vec::with_capacity(BACK as usize + 4);
    let start = jmp.checked_sub(BACK)?;
    for off in start..jmp + 4 {
        bytes.push(
            arch.get_load_image_value(&Address::new(Rc::clone(&spc), off), 1)
                .ok()? as u8,
        );
    }
    let found = (2..=4).find_map(|len| {
        let slice = &bytes[..(BACK as usize + len)];
        match_dispatch(slice, jmp, len)
    })?;
    let mut dests = Vec::with_capacity(found.rows as usize);
    for i in 0..found.rows {
        let row = Address::new(Rc::clone(&spc), found.table.checked_add(4 * i)?);
        let off = arch.get_load_image_value(&row, 4).ok()? as u32 as i32 as i64;
        let dest = (found.table as i64).wrapping_add(off) as uintb;
        let span = dest.abs_diff(jmp);
        if span > MAX_SPAN {
            return None;
        }
        dests.push(dest);
    }
    let distinct: std::collections::BTreeSet<_> = dests.iter().collect();
    (distinct.len() >= 2).then_some(dests)
}

/// The `rawswitch` model of `table`'s jump at `indirect`, when the option is on.
pub fn recover(
    _table: &JumpTable,
    fd: &mut Funcdata,
    indirect: OpId,
    matchsize: uint4,
    maxtablesize: uint4,
) -> KunaResult<Option<Box<dyn JumpModel>>> {
    if !fd.get_arch().kuna_options.get::<RawSwitch>().0 {
        return Ok(None);
    }
    let mut model = JumpModelRaw::default();
    if model.recover_model(fd, indirect, matchsize, maxtablesize)? {
        return Ok(Some(Box::new(model)));
    }
    Ok(None)
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.rawswitch_recover = Some(recover);
}

/// (kuna) Parse `option rawswitch on|off`.
pub struct OptionRawSwitch;

impl OptionRawSwitch {
    /// The option name.
    pub const NAME: &'static str = "rawswitch";

    /// Parse and validate the value.
    pub fn apply(&self, p1: &str) -> KunaResult<(bool, String)> {
        let on = crate::options::on_or_off(p1)?;
        let state = if on { "on" } else { "off" };
        Ok((
            on,
            format!("Jump tables matched from their instructions turned {state}"),
        ))
    }
}

/// (kuna) Recover a jump table from its x86-64 instructions when the models
/// fail (option `rawswitch`, default off).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct RawSwitch(pub bool);

impl crate::kuna_optionset::KunaOption for RawSwitch {
    const NAME: &'static str = "rawswitch";
    crate::kuna_option_id!();

    fn unset() -> Self {
        RawSwitch(false)
    }

    fn shipped() -> Self {
        RawSwitch(false)
    }

    fn parse(value: &str) -> KunaResult<(Self, String)> {
        let (on, msg) = OptionRawSwitch.apply(value)?;
        Ok((RawSwitch(on), msg))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn matches_the_gcc_pic_dispatch() {
        // zlib inflateBack at 0x7ae9: cmp $0x12,%eax ; ja ; lea 0xbb0b(%rip),%rdi ;
        // movslq (%rdi,%rax,4),%rax ; add %rdi,%rax ; notrack jmp *%rax
        let bytes = [
            0x83, 0xf8, 0x12, 0x77, 0x12, 0x48, 0x8d, 0x3d, 0x0b, 0xbb, 0x00, 0x00, 0x48, 0x63,
            0x04, 0x87, 0x48, 0x01, 0xf8, 0x3e, 0xff, 0xe0,
        ];
        let jmp = 0x7afc;
        let t = match_dispatch(&bytes, jmp, 3).unwrap();
        assert_eq!(
            t,
            RawTable {
                table: 0x13600,
                rows: 0x13
            }
        );
        assert!(match_dispatch(&bytes[3..], jmp, 3).is_none());
    }
}
