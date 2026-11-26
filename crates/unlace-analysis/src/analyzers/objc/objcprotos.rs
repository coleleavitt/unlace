//! Objective-C protocols: `__objc_protolist`, the `protocol_t` records and the
//! `__objc_protorefs` slots.
//!
//! A protocol declares selectors with their type encodings but no IMP, which is
//! exactly the knowledge the selector stubs lack for a method this image only
//! *calls*: `UITableViewDelegate` redeclared here spells the signature of every
//! `tableView:didSelectRowAtIndexPath:` send. Each protocol is parsed to its
//! name and four method lists; the caller records the encodings and names the
//! `protocol_t` `_OBJC_PROTOCOL_$_<name>`, the `__objc_protorefs` slot
//! `protoRef_<name>`.

use object::read::Object;

use super::methods::{self, Method};
use super::objcrefs::section_slots;
use super::sections::MachoImage;

const SEC_PROTOLIST: &str = "__objc_protolist";

/// `protocol_t` field offsets (64-bit): `isa`, `mangledName`, `protocols`,
/// `instanceMethods`, `classMethods`, `optionalInstanceMethods`,
/// `optionalClassMethods`, `instanceProperties`, ….
mod protocol_t {
    pub const NAME: u64 = 0x08;
    pub const METHOD_LISTS: [u64; 4] = [0x18, 0x20, 0x28, 0x30];
    pub const INSTANCE_PROPERTIES: u64 = 0x38;
    /// `size` (`u32`): how much of the record the emitting compiler wrote.
    pub const SIZE: u64 = 0x40;
    /// `_classProperties`, present when `size` reaches past it.
    pub const CLASS_PROPERTIES: u64 = 0x58;
}

/// One protocol: where it lives, what it is called, what it declares.
#[derive(Debug)]
pub struct Protocol {
    pub addr: u64,
    pub name: String,
    /// Every declared method (required and optional, instance and class), IMP 0.
    pub methods: Vec<Method>,
    /// The declared properties' getters and setters with their encodings.
    pub properties: Vec<(String, String)>,
}

/// Every protocol of `file`, in `__objc_protolist` order.
pub fn protocols(img: &MachoImage, file: &object::File) -> Vec<Protocol> {
    let ps = img.ptr_size();
    let mut out = Vec::new();
    for slot in section_slots(file, SEC_PROTOLIST, ps) {
        let Some(addr) = img.rebase_ptr(slot) else {
            continue;
        };
        let Some(name) = protocol_name(img, addr) else {
            continue;
        };
        let mut methods = Vec::new();
        for off in protocol_t::METHOD_LISTS {
            if let Some(list) = img.rebase_ptr(addr.wrapping_add(off)) {
                methods.extend(methods::walk_method_list(img, list, file.architecture()));
            }
        }
        let mut properties = img
            .rebase_ptr(addr.wrapping_add(protocol_t::INSTANCE_PROPERTIES))
            .map(|list| super::objcprops::declarations(img, list))
            .unwrap_or_default();
        let size = img
            .read_u32(addr.wrapping_add(protocol_t::SIZE))
            .unwrap_or(0) as u64;
        if size > protocol_t::CLASS_PROPERTIES {
            if let Some(list) = img.rebase_ptr(addr.wrapping_add(protocol_t::CLASS_PROPERTIES)) {
                properties.extend(super::objcprops::declarations(img, list));
            }
        }
        out.push(Protocol {
            addr,
            name,
            methods,
            properties,
        });
    }
    out
}

/// The name of the `protocol_t` at `addr`, if readable and non-empty.
pub fn protocol_name(img: &MachoImage, addr: u64) -> Option<String> {
    img.rebase_ptr(addr.wrapping_add(protocol_t::NAME))
        .and_then(|p| img.read_cstr(p))
        .filter(|n| !n.is_empty())
}

#[cfg(test)]
mod tests;
