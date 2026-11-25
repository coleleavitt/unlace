//! (unlace) Constructor p-code templates decoded on first use.
//!
//! Most of a `.sla` is the `<construct_tpl>` of every constructor, and a run
//! builds p-code for a small fraction of them. When the `.sla` is read through a
//! byte-encoded decoder, [`LazyTemplates`] keeps each template's encoded bytes
//! (`Decoder::skip_element_raw`) instead of decoding it, reads only the two
//! attributes needed before use (the section id, which places the handle in the
//! constructor, and the delay-slot count, which instruction resolution reads), and
//! decodes the rest from those bytes the first time the template is asked for.
//! The decode is the eager one, `ConstructTpl::decode`, run over the same bytes
//! against the engine's own address-space manager, whose spaces keep their indices
//! once the `.sla` has declared them; so a template decodes to the same value
//! whenever it is decoded. `UNLACE_SLA_LAZY=0` decodes every template at load,
//! as before.

use std::cell::OnceCell;

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::marshal::{Decoder, PackedDecode};
use unlace_base::space::AddrSpaceManager;

use crate::semantics::ConstructTpl;
use crate::slaformat as sla;

/// The environment switch: `0` decodes every constructor template at load.
pub const LAZY_ENV: &str = "UNLACE_SLA_LAZY";

/// Is lazy template decoding on (`$UNLACE_SLA_LAZY` is not `0`)?
pub fn lazy_enabled() -> bool {
    std::env::var_os(LAZY_ENV).is_none_or(|v| v != "0")
}

/// One template: decoded already, or its encoded bytes.
#[derive(Debug, Default)]
struct Slot {
    /// Byte range of the encoded element in [`LazyTemplates::bytes`] (empty when
    /// the template was decoded at load).
    start: usize,
    end: usize,
    /// The template's `delay` attribute (C++ `delayslot`).
    delayslot: u32,
    tpl: OnceCell<ConstructTpl>,
}

/// The constructor-template store of a lazily decoded `.sla` (the
/// `ConstructTplHandle` index space).
#[derive(Debug, Default)]
pub struct LazyTemplates {
    bytes: Vec<u8>,
    slots: Vec<Slot>,
}

impl LazyTemplates {
    /// An empty store.
    pub fn new() -> LazyTemplates {
        LazyTemplates::default()
    }

    /// Number of templates.
    pub fn len(&self) -> usize {
        self.slots.len()
    }

    /// No templates at all (the eager store is in use).
    pub fn is_empty(&self) -> bool {
        self.slots.is_empty()
    }

    /// Take the next `<construct_tpl>` element from `decoder`, keeping its bytes
    /// for later, or decoding it now when `decoder` cannot hand out bytes.
    /// Returns `(section id, handle)` as `ConstructTpl::decode` + push would.
    pub fn take(
        &mut self,
        decoder: &mut dyn unlace_num::opcodes::OpcodeDecoder,
    ) -> UnlaceResult<(i32, usize)> {
        let start = self.bytes.len();
        if !decoder.skip_element_raw(&mut self.bytes)? {
            let mut tpl = ConstructTpl::new();
            let sectionid = tpl.decode(decoder)?;
            let slot = Slot {
                delayslot: tpl.delay_slot(),
                ..Slot::default()
            };
            let _ = slot.tpl.set(tpl);
            self.slots.push(slot);
            return Ok((sectionid, self.slots.len() - 1));
        }
        let end = self.bytes.len();
        let (sectionid, delayslot) =
            header(&self.bytes[start..end], decoder.get_addr_space_manager())?;
        self.slots.push(Slot {
            start,
            end,
            delayslot,
            tpl: OnceCell::new(),
        });
        Ok((sectionid, self.slots.len() - 1))
    }

    /// The delay-slot count of a template, without decoding it.
    pub fn delay_slot(&self, handle: usize) -> UnlaceResult<u32> {
        self.slots
            .get(handle)
            .map(|slot| slot.delayslot)
            .ok_or_else(|| UnlaceError::sleigh("bad ConstructTpl handle"))
    }

    /// The template behind `handle`, decoded now if this is its first use.
    pub fn get(&self, handle: usize, manager: &AddrSpaceManager) -> UnlaceResult<&ConstructTpl> {
        let slot = self
            .slots
            .get(handle)
            .ok_or_else(|| UnlaceError::sleigh("bad ConstructTpl handle"))?;
        if let Some(tpl) = slot.tpl.get() {
            return Ok(tpl);
        }
        let mut decoder = PackedDecode::new(manager);
        decoder.ingest_stream(&self.bytes[slot.start..slot.end])?;
        let mut tpl = ConstructTpl::new();
        tpl.decode(&mut decoder)?;
        Ok(slot.tpl.get_or_init(|| tpl))
    }

    /// Every template, decoded, in handle order (the encoder needs them all).
    pub fn all(&self, manager: &AddrSpaceManager) -> UnlaceResult<Vec<ConstructTpl>> {
        (0..self.slots.len())
            .map(|handle| self.get(handle, manager).cloned())
            .collect()
    }
}

/// The `section` and `delay` attributes of one encoded `<construct_tpl>`, read
/// as `ConstructTpl::decode` reads them (section -1 and delay 0 when absent).
fn header(bytes: &[u8], manager: &AddrSpaceManager) -> UnlaceResult<(i32, u32)> {
    let mut decoder = PackedDecode::new(manager);
    decoder.ingest_stream(bytes)?;
    decoder.open_element_id(&sla::ELEM_CONSTRUCT_TPL)?;
    let mut sectionid: i32 = -1;
    let mut delayslot: u32 = 0;
    let mut attrib = decoder.get_next_attribute_id()?;
    while attrib != 0 {
        if attrib == sla::ATTRIB_DELAY {
            delayslot = decoder.read_signed_integer()? as u32; // C++ intb -> uint4
        } else if attrib == sla::ATTRIB_SECTION {
            sectionid = decoder.read_signed_integer()? as i32; // C++ intb -> int4
        }
        attrib = decoder.get_next_attribute_id()?;
    }
    Ok((sectionid, delayslot))
}

#[cfg(test)]
mod tests;
