//! The engine side of `unlace lumina`: every discovered function's Lumina key.
//!
//! The function list and each body come from the same Listing `unlace fid query` builds (the
//! `[entry, next entry)` clip of [`unlace_analysis::fid::extent::calculate_extent`]). Each instruction's
//! relocation mask, IDA's `ev_calcrel`, is read off its SLEIGH operand masks
//! ([`unlace_sleigh::sleigh::Sleigh::instruction_mask`]): an operand's value bits are masked when it
//! resolves to a code or data address, or to a scalar SLEIGH marks as an address or that falls inside a
//! mapped section (an absolute address immediate). [`unlace_lumina::hash::CalcrelBuilder`] turns the
//! bytes and masks into the key.

use std::collections::BTreeSet;
use std::rc::Rc;

use object::{Object, ObjectSection};
use unlace_analysis::listing::Listing;
use unlace_analysis::loadimage_object::ObjectLoadImage;
use unlace_base::address::Address;
use unlace_base::space::AddrSpace;
use unlace_console::engine::bootstrap_from_object;
use unlace_lumina::hash::CalcrelBuilder;
use unlace_sleigh::sleigh::{InsnMask, OpObject, Sleigh};

/// Scalars below this are constants, never addresses, even in an image mapped at zero.
const MIN_MAPPED: u64 = 0x1000;

/// One hashed function.
pub(crate) struct Hashed {
    pub(crate) entry: u64,
    /// The name the binary gives it, if any.
    pub(crate) name: Option<String>,
    /// `name` is a real symbol, not a placeholder.
    pub(crate) named: bool,
    pub(crate) size: u32,
    pub(crate) instructions: usize,
    pub(crate) hash: [u8; 16],
}

impl Hashed {
    pub(crate) fn display_name(&self) -> String {
        self.name
            .clone()
            .unwrap_or_else(|| format!("sub_{:x}", self.entry))
    }
}

/// A function with no key, and why.
pub(crate) struct Skipped {
    pub(crate) entry: u64,
    pub(crate) reason: &'static str,
}

pub(crate) struct Inventory {
    pub(crate) input_md5: [u8; 16],
    pub(crate) language: String,
    pub(crate) hashed: Vec<Hashed>,
    pub(crate) skipped: Vec<Skipped>,
}

/// A name a binary's symbol table gave, as opposed to a generated placeholder.
pub(crate) fn is_real_name(name: &str) -> bool {
    !name.is_empty() && !name.starts_with("sub_") && !name.starts_with("FUN_")
}

/// Hash every function of `binary`, or only the entries in `only` when it is not empty (each is also
/// seeded as an entry, so an address discovery missed can still be hashed).
pub(crate) fn hash_binary(binary: &str, only: &[u64]) -> Result<Inventory, String> {
    let bytes = std::fs::read(binary).map_err(|e| format!("cannot read {binary}: {e}"))?;
    let file =
        object::File::parse(&*bytes).map_err(|e| format!("{binary}: not an object file: {e}"))?;
    let prog = bootstrap_from_object(binary, "", &crate::fid::spec_roots())
        .map_err(|e| format!("bootstrap: {e}"))?;
    let arch = prog.arch();
    let image =
        ObjectLoadImage::from_bytes(binary, &bytes).map_err(|e| format!("load image: {e}"))?;
    let mut seeds = unlace_analysis::passes::listing_seeds(&file, &bytes);
    seeds.extend_from_slice(only);
    seeds.sort_unstable();
    seeds.dedup();
    let listing = Listing::build(&file, &image, arch, arch.translate(), &seeds);
    let space = arch
        .manage()
        .get_default_code_space()
        .cloned()
        .ok_or("the loaded program has no default code space")?;
    let translate = arch
        .translate()
        .as_sleigh()
        .ok_or("the loaded program's decoder is not SLEIGH")?;
    let mapped = mapped_ranges(&file);
    let wanted: BTreeSet<u64> = only.iter().copied().collect();
    let mut inventory = Inventory {
        input_md5: unlace_lumina::hash::md5(&bytes),
        language: arch.archid.clone(),
        hashed: Vec::new(),
        skipped: Vec::new(),
    };
    let mut seen = BTreeSet::new();
    for (&entry, func) in listing.functions() {
        if !wanted.is_empty() && !wanted.contains(&entry) {
            continue;
        }
        seen.insert(entry);
        match hash_function(&listing, translate, &space, &mapped, entry) {
            Ok((hash, size, instructions)) => inventory.hashed.push(Hashed {
                entry,
                name: func.name.clone(),
                named: func.from_symbol && func.name.as_deref().is_some_and(is_real_name),
                size,
                instructions,
                hash,
            }),
            Err(reason) => inventory.skipped.push(Skipped { entry, reason }),
        }
    }
    for &entry in &wanted {
        if !seen.contains(&entry) {
            inventory.skipped.push(Skipped {
                entry,
                reason: "not_a_function",
            });
        }
    }
    Ok(inventory)
}

fn hash_function(
    listing: &Listing,
    translate: &Sleigh,
    space: &Rc<AddrSpace>,
    mapped: &[(u64, u64)],
    entry: u64,
) -> Result<([u8; 16], u32, usize), &'static str> {
    let extent = unlace_analysis::fid::extent::calculate_extent(listing, entry);
    if extent.is_empty() {
        return Err("no_instructions");
    }
    let mut builder = CalcrelBuilder::new();
    let mut size: u32 = 0;
    for insn in &extent {
        let addr = Address::new(Rc::clone(space), insn.addr);
        let mask = translate
            .instruction_mask(&addr)
            .map_err(|_| "mask_failed")?;
        builder.push(&mask.bytes, &calcrel_mask(&mask, mapped));
        size = size.saturating_add(insn.len);
    }
    Ok((builder.finish(), size, extent.len()))
}

/// The `ev_calcrel` mask of one instruction: the value bits of every operand that names an address.
pub(crate) fn calcrel_mask(mask: &InsnMask, mapped: &[(u64, u64)]) -> Vec<u8> {
    let mut out = vec![0u8; mask.bytes.len()];
    for op in &mask.operands {
        let relocatable = op.objects.iter().any(|o| match o {
            OpObject::Address => true,
            OpObject::Scalar {
                signed, is_address, ..
            } => *is_address || is_mapped(*signed as u64, mapped),
            OpObject::Register { .. } => false,
        });
        if relocatable {
            for (slot, bits) in out.iter_mut().zip(&op.value_mask) {
                *slot |= *bits;
            }
        }
    }
    out
}

fn is_mapped(value: u64, mapped: &[(u64, u64)]) -> bool {
    mapped.iter().any(|&(lo, hi)| value >= lo && value < hi)
}

fn mapped_ranges(file: &object::File<'_>) -> Vec<(u64, u64)> {
    file.sections()
        .filter(|s| s.size() > 0 && s.address() >= MIN_MAPPED)
        .map(|s| (s.address(), s.address().saturating_add(s.size())))
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_sleigh::sleigh::OperandView;

    fn insn(operands: Vec<OperandView>) -> InsnMask {
        InsnMask {
            bytes: vec![0xE8, 0x10, 0x20, 0x30, 0x40],
            fixed_mask: vec![0xFF, 0, 0, 0, 0],
            length: 5,
            operands,
        }
    }

    fn value_bits() -> Vec<u8> {
        vec![0, 0xFF, 0xFF, 0xFF, 0xFF]
    }

    #[test]
    fn address_operands_are_masked() {
        let m = insn(vec![OperandView {
            value_mask: value_bits(),
            objects: vec![OpObject::Address],
        }]);
        assert_eq!(calcrel_mask(&m, &[]), value_bits());
    }

    #[test]
    fn registers_and_small_constants_are_kept() {
        let m = insn(vec![
            OperandView {
                value_mask: vec![0, 0x38, 0, 0, 0],
                objects: vec![OpObject::Register { offset: 0 }],
            },
            OperandView {
                value_mask: value_bits(),
                objects: vec![OpObject::Scalar {
                    signed: 0x10,
                    whole_operand: true,
                    is_address: false,
                }],
            },
        ]);
        assert_eq!(calcrel_mask(&m, &[(0x40_0000, 0x50_0000)]), vec![0; 5]);
    }

    #[test]
    fn a_scalar_inside_a_section_is_an_address() {
        let m = insn(vec![OperandView {
            value_mask: value_bits(),
            objects: vec![OpObject::Scalar {
                signed: 0x40_1000,
                whole_operand: true,
                is_address: false,
            }],
        }]);
        assert_eq!(calcrel_mask(&m, &[(0x40_0000, 0x50_0000)]), value_bits());
        assert_eq!(calcrel_mask(&m, &[]), vec![0; 5]);
    }

    #[test]
    fn placeholder_names_are_not_real() {
        assert!(is_real_name("parse_header"));
        assert!(!is_real_name("sub_401000"));
        assert!(!is_real_name("FUN_00401000"));
        assert!(!is_real_name(""));
    }
}
