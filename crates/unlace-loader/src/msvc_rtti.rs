//! MSVC RTTI metadata parsers (header MVP).
//!
//! Parses the on-disk layout of the MSVC Run-Time Type Information
//! structures: `RTTICompleteObjectLocator`, `TypeDescriptor`,
//! `RTTIClassHierarchyDescriptor`, and `RTTIBaseClassDescriptor`. The
//! low-level parsers operate on raw byte slices; [`scan_vtables`] wires
//! them up to a [`BinaryImage`] and recovers vtables by walking pointer-
//! sized slots in `.rdata`.

use std::collections::BTreeMap;

use crate::image::{ArchId, BinaryImage, Section};

/// Aggregated MSVC RTTI hierarchy recovered from a PE binary.
#[derive(Debug, Clone, Default)]
pub struct MsvcRtti {
    /// Recovered classes keyed by mangled name (`.?AVMyClass@@`).
    pub classes: BTreeMap<String, MsvcClass>,
}

#[derive(Debug, Clone)]
pub struct MsvcClass {
    pub mangled_name: String,
    pub demangled: Option<String>,
    pub vtable_addr: u64,
    pub method_count: usize,
    pub bases: Vec<MsvcBaseClass>,
    pub inheritance: u32,
}

#[derive(Debug, Clone)]
pub struct MsvcBaseClass {
    pub mangled_name: String,
    pub mdisp: i32,
    pub pdisp: i32,
    pub vdisp: i32,
    pub attributes: u32,
}

#[derive(Debug, Clone)]
pub struct CompleteObjectLocator {
    pub signature: u32,
    pub offset: u32,
    pub cd_offset: u32,
    pub p_type_descriptor: u32,
    pub p_class_descriptor: u32,
}

#[derive(Debug, Clone)]
pub struct TypeDescriptor {
    pub name: String,
}

#[derive(Debug, Clone)]
pub struct ClassHierarchyDescriptor {
    pub signature: u32,
    pub attributes: u32,
    pub num_base_classes: u32,
    pub p_base_class_array: u32,
}

#[derive(Debug, Clone)]
pub struct BaseClassDescriptor {
    pub p_type_descriptor: u32,
    pub num_contained_bases: u32,
    pub mdisp: i32,
    pub pdisp: i32,
    pub vdisp: i32,
    pub attributes: u32,
    pub p_class_descriptor: u32,
}

fn read_u32(buf: &[u8], off: usize) -> Option<u32> {
    let slice = buf.get(off..off + 4)?;
    Some(u32::from_le_bytes([slice[0], slice[1], slice[2], slice[3]]))
}

fn read_i32(buf: &[u8], off: usize) -> Option<i32> {
    read_u32(buf, off).map(|v| v as i32)
}

pub fn parse_complete_object_locator(buf: &[u8]) -> Option<CompleteObjectLocator> {
    if buf.len() < 20 {
        return None;
    }
    Some(CompleteObjectLocator {
        signature: read_u32(buf, 0)?,
        offset: read_u32(buf, 4)?,
        cd_offset: read_u32(buf, 8)?,
        p_type_descriptor: read_u32(buf, 12)?,
        p_class_descriptor: read_u32(buf, 16)?,
    })
}

pub fn parse_type_descriptor(buf: &[u8], offset: usize, ptr_size: usize) -> Option<TypeDescriptor> {
    let name_off = offset.checked_add(ptr_size.checked_mul(2)?)?;
    let tail = buf.get(name_off..)?;
    let nul = tail.iter().position(|&b| b == 0)?;
    let name = std::str::from_utf8(&tail[..nul]).ok()?.to_string();
    let body = name.strip_prefix('.').unwrap_or(&name);
    if !body.starts_with("?A") {
        return None;
    }
    Some(TypeDescriptor { name })
}

pub fn parse_class_hierarchy_descriptor(buf: &[u8]) -> Option<ClassHierarchyDescriptor> {
    if buf.len() < 16 {
        return None;
    }
    Some(ClassHierarchyDescriptor {
        signature: read_u32(buf, 0)?,
        attributes: read_u32(buf, 4)?,
        num_base_classes: read_u32(buf, 8)?,
        p_base_class_array: read_u32(buf, 12)?,
    })
}

pub fn parse_base_class_descriptor(buf: &[u8]) -> Option<BaseClassDescriptor> {
    if buf.len() < 28 {
        return None;
    }
    Some(BaseClassDescriptor {
        p_type_descriptor: read_u32(buf, 0)?,
        num_contained_bases: read_u32(buf, 4)?,
        mdisp: read_i32(buf, 8)?,
        pdisp: read_i32(buf, 12)?,
        vdisp: read_i32(buf, 16)?,
        attributes: read_u32(buf, 20)?,
        p_class_descriptor: read_u32(buf, 24)?,
    })
}

/// Scan a [`BinaryImage`]'s `.rdata` section for MSVC vtables. Each pointer-
/// sized slot is tested as a candidate "COL pointer": if it points back into
/// `.rdata` at a well-formed [`CompleteObjectLocator`] (signature 0 or 1) and
/// the COL's type-descriptor pointer also resolves, we record a class whose
/// vtable starts at the *following* slot and runs as long as subsequent slots
/// point into `.text`.
///
/// Returns an empty [`MsvcRtti`] for architectures other than x86 / x86_64
/// or when `.rdata` is absent.
pub fn scan_vtables(image: &BinaryImage) -> MsvcRtti {
    let ptr_size: usize = match image.arch {
        ArchId::X86_64 => 8,
        ArchId::X86 => 4,
        _ => return MsvcRtti::default(),
    };
    let Some(rdata) = image.section_by_name(".rdata") else {
        return MsvcRtti::default();
    };
    let text = image.section_by_name(".text");
    let text_range = text.map(|t| (t.vaddr, t.vaddr.saturating_add(t.size)));

    let mut classes = BTreeMap::new();
    let mut off = 0usize;
    while off + 2 * ptr_size <= rdata.data.len() {
        let col_ptr = read_ptr(&rdata.data, off, ptr_size);
        if let Some(col_offset) = vaddr_to_rdata_offset(rdata, col_ptr)
            && let Some(col) = parse_complete_object_locator(&rdata.data[col_offset..])
            && (col.signature == 0 || col.signature == 1)
            && let Some(td_offset) = vaddr_to_rdata_offset(rdata, col.p_type_descriptor as u64)
            && let Some(td) = parse_type_descriptor(&rdata.data, td_offset, ptr_size)
        {
            let vtable_addr = rdata.vaddr + (off + ptr_size) as u64;
            let mut method_count = 0usize;
            let mut p = off + ptr_size;
            while p + ptr_size <= rdata.data.len() {
                let candidate = read_ptr(&rdata.data, p, ptr_size);
                let in_text = text_range.is_some_and(|(s, e)| candidate >= s && candidate < e);
                if !in_text {
                    break;
                }
                method_count += 1;
                p += ptr_size;
            }
            let (bases, inheritance) =
                walk_base_class_array(rdata, col.p_class_descriptor as u64, ptr_size);
            let mangled = td.name;
            let demangled = Some(demangle_rtti_name(&mangled));
            classes.insert(
                mangled.clone(),
                MsvcClass {
                    mangled_name: mangled,
                    demangled,
                    vtable_addr,
                    method_count,
                    bases,
                    inheritance,
                },
            );
        }
        off += ptr_size;
    }
    MsvcRtti { classes }
}

fn read_ptr(buf: &[u8], off: usize, size: usize) -> u64 {
    match size {
        4 => u32::from_le_bytes(buf[off..off + 4].try_into().unwrap()) as u64,
        8 => u64::from_le_bytes(buf[off..off + 8].try_into().unwrap()),
        _ => 0,
    }
}

/// Walk a `RTTIClassHierarchyDescriptor` and its base-class array, returning
/// the parsed base list (excluding the leading self-entry) and the CHD's
/// `attributes` field (bit 0 = multiple, bit 1 = virtual, bit 2 = ambiguous).
///
/// On any malformed read this falls back to `(vec![], 0)` rather than failing
/// the surrounding scan — bad RTTI is common in stripped/obfuscated PEs.
fn walk_base_class_array(
    rdata: &Section,
    chd_vaddr: u64,
    ptr_size: usize,
) -> (Vec<MsvcBaseClass>, u32) {
    let Some(chd_offset) = vaddr_to_rdata_offset(rdata, chd_vaddr) else {
        return (Vec::new(), 0);
    };
    let Some(chd) = parse_class_hierarchy_descriptor(&rdata.data[chd_offset..]) else {
        return (Vec::new(), 0);
    };
    let Some(bca_offset) = vaddr_to_rdata_offset(rdata, chd.p_base_class_array as u64) else {
        return (Vec::new(), chd.attributes);
    };

    let mut bases = Vec::new();
    for i in 1..chd.num_base_classes {
        let entry_off = bca_offset + (i as usize) * 4;
        if entry_off + 4 > rdata.data.len() {
            break;
        }
        let bcd_rva = u32::from_le_bytes(rdata.data[entry_off..entry_off + 4].try_into().unwrap());
        let Some(bcd_off) = vaddr_to_rdata_offset(rdata, bcd_rva as u64) else {
            continue;
        };
        let Some(bcd) = parse_base_class_descriptor(&rdata.data[bcd_off..]) else {
            continue;
        };
        let Some(td_off) = vaddr_to_rdata_offset(rdata, bcd.p_type_descriptor as u64) else {
            continue;
        };
        let Some(td) = parse_type_descriptor(&rdata.data, td_off, ptr_size) else {
            continue;
        };
        bases.push(MsvcBaseClass {
            mangled_name: td.name,
            mdisp: bcd.mdisp,
            pdisp: bcd.pdisp,
            vdisp: bcd.vdisp,
            attributes: bcd.attributes,
        });
    }
    (bases, chd.attributes)
}

fn vaddr_to_rdata_offset(rdata: &Section, vaddr: u64) -> Option<usize> {
    if vaddr < rdata.vaddr {
        return None;
    }
    let off = (vaddr - rdata.vaddr) as usize;
    if off >= rdata.data.len() {
        return None;
    }
    Some(off)
}

/// Strip MSVC RTTI name decoration: leading `.?AV` / `.?AU` (or `?AV`/`?AU`)
/// and trailing `@@`. Returns the inner identifier or the original on
/// unrecognized shapes.
pub fn demangle_rtti_name(mangled: &str) -> String {
    let s = mangled.strip_prefix('.').unwrap_or(mangled);
    let s = match s.strip_prefix("?AV").or_else(|| s.strip_prefix("?AU")) {
        Some(rest) => rest,
        None => return mangled.to_string(),
    };
    s.strip_suffix("@@").unwrap_or(s).to_string()
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{Endian, SectionFlags};

    fn empty_image(arch: ArchId) -> BinaryImage {
        BinaryImage {
            arch,
            endian: Endian::Little,
            entry: 0,
            sections: Vec::new(),
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            pe_mitigations: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            pdb_info: None,
            image_base: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
            go_types: std::collections::BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
            wasm_component: None,
        }
    }

    /// Build a synthetic x86_64 image whose `.rdata` contains:
    ///
    /// - vtable layout: [COL*][m0][m1][m2][garbage...]
    /// - COL with signature, p_type_descriptor pointing into `.rdata`
    /// - TypeDescriptor with the supplied mangled name
    ///
    /// `.text` is sized to cover three method addresses.
    fn synthetic_pe(col_signature: u32, mangled: &str) -> BinaryImage {
        const RDATA_BASE: u64 = 0x4000_0000;
        const TEXT_BASE: u64 = 0x4010_0000;

        let col_off: u64 = 0x100;
        let td_off: u64 = 0x200;
        let vtable_off: u64 = 0x000;

        let mut rdata = vec![0u8; 0x400];

        let col_va = RDATA_BASE + col_off;
        rdata[vtable_off as usize..vtable_off as usize + 8].copy_from_slice(&col_va.to_le_bytes());

        for i in 0..3u64 {
            let slot = (vtable_off + 8 + i * 8) as usize;
            let addr = TEXT_BASE + i * 0x10;
            rdata[slot..slot + 8].copy_from_slice(&addr.to_le_bytes());
        }
        let term_slot = (vtable_off + 8 + 3 * 8) as usize;
        rdata[term_slot..term_slot + 8].copy_from_slice(&0u64.to_le_bytes());

        let td_va = (RDATA_BASE + td_off) as u32;
        let coff = col_off as usize;
        rdata[coff..coff + 4].copy_from_slice(&col_signature.to_le_bytes());
        rdata[coff + 4..coff + 8].copy_from_slice(&0u32.to_le_bytes());
        rdata[coff + 8..coff + 12].copy_from_slice(&0u32.to_le_bytes());
        rdata[coff + 12..coff + 16].copy_from_slice(&td_va.to_le_bytes());
        rdata[coff + 16..coff + 20].copy_from_slice(&0u32.to_le_bytes());

        let toff = td_off as usize;
        let name_bytes = mangled.as_bytes();
        rdata[toff + 16..toff + 16 + name_bytes.len()].copy_from_slice(name_bytes);
        rdata[toff + 16 + name_bytes.len()] = 0;

        let mut img = empty_image(ArchId::X86_64);
        img.sections.push(Section {
            name: ".rdata".to_string(),
            vaddr: RDATA_BASE,
            size: rdata.len() as u64,
            data: rdata,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: ".text".to_string(),
            vaddr: TEXT_BASE,
            size: 0x1000,
            data: vec![0u8; 0x1000],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        img
    }

    #[test]
    fn scan_vtables_finds_synthetic_class() {
        let img = synthetic_pe(1, ".?AVMyClass@@");
        let rtti = scan_vtables(&img);
        assert_eq!(rtti.classes.len(), 1);
        let class = rtti.classes.values().next().unwrap();
        assert_eq!(class.mangled_name, ".?AVMyClass@@");
        assert_eq!(class.demangled.as_deref(), Some("MyClass"));
        assert_eq!(class.method_count, 3);
        assert_eq!(class.vtable_addr, 0x4000_0000 + 8);
    }

    #[test]
    fn scan_vtables_empty_when_no_rdata() {
        let img = empty_image(ArchId::X86_64);
        let rtti = scan_vtables(&img);
        assert!(rtti.classes.is_empty());
    }

    #[test]
    fn scan_vtables_skips_invalid_signatures() {
        let img = synthetic_pe(42, ".?AVBogus@@");
        let rtti = scan_vtables(&img);
        assert!(rtti.classes.is_empty());
    }

    #[test]
    fn parse_complete_object_locator_synthetic() {
        let mut buf = Vec::with_capacity(20);
        buf.extend_from_slice(&1u32.to_le_bytes());
        buf.extend_from_slice(&0x10u32.to_le_bytes());
        buf.extend_from_slice(&0x20u32.to_le_bytes());
        buf.extend_from_slice(&0xDEAD_BEEFu32.to_le_bytes());
        buf.extend_from_slice(&0xCAFE_BABEu32.to_le_bytes());

        let col = parse_complete_object_locator(&buf).unwrap();
        assert_eq!(col.signature, 1);
        assert_eq!(col.offset, 0x10);
        assert_eq!(col.cd_offset, 0x20);
        assert_eq!(col.p_type_descriptor, 0xDEAD_BEEF);
        assert_eq!(col.p_class_descriptor, 0xCAFE_BABE);
    }

    #[test]
    fn parse_type_descriptor_decodes_name() {
        let mut buf = vec![0u8; 16];
        buf.extend_from_slice(b".?AVMyClass@@\0");
        let td = parse_type_descriptor(&buf, 0, 8).unwrap();
        assert_eq!(td.name, ".?AVMyClass@@");
    }

    #[test]
    fn demangle_rtti_strips_prefix() {
        assert_eq!(demangle_rtti_name("?AVFoo@@"), "Foo");
        assert_eq!(demangle_rtti_name("?AUBar@@"), "Bar");
        assert_eq!(demangle_rtti_name(".?AVNamespaced@@"), "Namespaced");
        assert_eq!(demangle_rtti_name("not_mangled"), "not_mangled");
    }

    fn synthetic_pe_with_bases(
        self_name: &str,
        parents: &[&str],
        chd_attributes: u32,
    ) -> BinaryImage {
        const RDATA_BASE: u64 = 0x4000_0000;
        const TEXT_BASE: u64 = 0x4010_0000;

        let mut rdata = vec![0u8; 0x800];

        let col_va = RDATA_BASE + 0x100;
        rdata[0..8].copy_from_slice(&col_va.to_le_bytes());
        for i in 0..3u64 {
            let slot = (8 + i * 8) as usize;
            rdata[slot..slot + 8].copy_from_slice(&(TEXT_BASE + i * 0x10).to_le_bytes());
        }

        let td_self_va = (RDATA_BASE + 0x200) as u32;
        let chd_va = (RDATA_BASE + 0x300) as u32;
        let coff = 0x100usize;
        rdata[coff..coff + 4].copy_from_slice(&1u32.to_le_bytes());
        rdata[coff + 4..coff + 8].copy_from_slice(&0u32.to_le_bytes());
        rdata[coff + 8..coff + 12].copy_from_slice(&0u32.to_le_bytes());
        rdata[coff + 12..coff + 16].copy_from_slice(&td_self_va.to_le_bytes());
        rdata[coff + 16..coff + 20].copy_from_slice(&chd_va.to_le_bytes());

        let toff = 0x200usize;
        let nb = self_name.as_bytes();
        rdata[toff + 16..toff + 16 + nb.len()].copy_from_slice(nb);
        rdata[toff + 16 + nb.len()] = 0;

        let bca_va = (RDATA_BASE + 0x340) as u32;
        let num_bases = 1 + parents.len() as u32;
        let chd_off = 0x300usize;
        rdata[chd_off..chd_off + 4].copy_from_slice(&1u32.to_le_bytes());
        rdata[chd_off + 4..chd_off + 8].copy_from_slice(&chd_attributes.to_le_bytes());
        rdata[chd_off + 8..chd_off + 12].copy_from_slice(&num_bases.to_le_bytes());
        rdata[chd_off + 12..chd_off + 16].copy_from_slice(&bca_va.to_le_bytes());

        let bca_off = 0x340usize;
        let self_bcd_rva = (RDATA_BASE + 0x380) as u32;
        rdata[bca_off..bca_off + 4].copy_from_slice(&self_bcd_rva.to_le_bytes());
        for (i, _) in parents.iter().enumerate() {
            let parent_bcd_rva = (RDATA_BASE + 0x3A0 + (i as u64) * 0x20) as u32;
            let entry = bca_off + 4 + i * 4;
            rdata[entry..entry + 4].copy_from_slice(&parent_bcd_rva.to_le_bytes());
        }

        let self_bcd_off = 0x380usize;
        rdata[self_bcd_off..self_bcd_off + 4].copy_from_slice(&td_self_va.to_le_bytes());

        for (i, name) in parents.iter().enumerate() {
            let bcd_off = 0x3A0 + i * 0x20;
            let td_off = 0x500 + i * 0x40;
            let td_va = (RDATA_BASE + td_off as u64) as u32;
            rdata[bcd_off..bcd_off + 4].copy_from_slice(&td_va.to_le_bytes());
            rdata[bcd_off + 4..bcd_off + 8].copy_from_slice(&0u32.to_le_bytes());
            rdata[bcd_off + 8..bcd_off + 12].copy_from_slice(&((i as i32) * 8).to_le_bytes());
            rdata[bcd_off + 12..bcd_off + 16].copy_from_slice(&(-1i32).to_le_bytes());
            rdata[bcd_off + 16..bcd_off + 20].copy_from_slice(&(-1i32).to_le_bytes());
            rdata[bcd_off + 20..bcd_off + 24].copy_from_slice(&0u32.to_le_bytes());
            rdata[bcd_off + 24..bcd_off + 28].copy_from_slice(&0u32.to_le_bytes());

            let nb = name.as_bytes();
            rdata[td_off + 16..td_off + 16 + nb.len()].copy_from_slice(nb);
            rdata[td_off + 16 + nb.len()] = 0;
        }

        let mut img = empty_image(ArchId::X86_64);
        img.sections.push(Section {
            name: ".rdata".to_string(),
            vaddr: RDATA_BASE,
            size: rdata.len() as u64,
            data: rdata,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: ".text".to_string(),
            vaddr: TEXT_BASE,
            size: 0x1000,
            data: vec![0u8; 0x1000],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        img
    }

    #[test]
    fn scan_vtables_recovers_single_inheritance() {
        let img = synthetic_pe_with_bases(".?AVChild@@", &[".?AVParent@@"], 0);
        let rtti = scan_vtables(&img);
        assert_eq!(rtti.classes.len(), 1);
        let class = rtti.classes.get(".?AVChild@@").expect("Child recovered");
        assert_eq!(class.bases.len(), 1);
        assert_eq!(class.bases[0].mangled_name, ".?AVParent@@");
        assert_eq!(class.bases[0].mdisp, 0);
        assert_eq!(class.inheritance, 0);
    }

    #[test]
    fn scan_vtables_recovers_multiple_inheritance() {
        let img =
            synthetic_pe_with_bases(".?AVChild@@", &[".?AVParent1@@", ".?AVParent2@@"], 0b001);
        let rtti = scan_vtables(&img);
        let class = rtti.classes.get(".?AVChild@@").expect("Child recovered");
        assert_eq!(class.bases.len(), 2);
        assert_eq!(class.bases[0].mangled_name, ".?AVParent1@@");
        assert_eq!(class.bases[1].mangled_name, ".?AVParent2@@");
        assert_eq!(class.inheritance, 0b001);
    }

    #[test]
    fn scan_vtables_handles_invalid_chd_gracefully() {
        let mut img = synthetic_pe_with_bases(".?AVLone@@", &[".?AVParent@@"], 0);
        let rdata = &mut img.sections[0].data;
        rdata[0x110..0x114].copy_from_slice(&0xFFFF_FFFFu32.to_le_bytes());
        let rtti = scan_vtables(&img);
        let class = rtti.classes.get(".?AVLone@@").expect("class still found");
        assert!(class.bases.is_empty());
        assert_eq!(class.inheritance, 0);
    }
}
