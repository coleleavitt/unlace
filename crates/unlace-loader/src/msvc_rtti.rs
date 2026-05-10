//! MSVC RTTI metadata parsers (header MVP).
//!
//! Parses the on-disk layout of the MSVC Run-Time Type Information
//! structures: `RTTICompleteObjectLocator`, `TypeDescriptor`,
//! `RTTIClassHierarchyDescriptor`, and `RTTIBaseClassDescriptor`. PE-loader
//! wiring (RVA resolution, vftable scan) is deferred — these parsers operate
//! on raw byte slices and are exercised via synthetic-byte unit tests.

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
}
