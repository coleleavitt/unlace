//! Java `.class` file format parser (JVMS §4).
//!
//! Implements a minimal subset of the class-file structure sufficient for
//! pulling out the class name, superclass name, declared fields, and
//! declared methods. Only the constant pool tags actually referenced by
//! those structures are decoded:
//!
//! - `CONSTANT_Utf8` (1)
//! - `CONSTANT_Class` (7)
//! - `CONSTANT_String` (8)
//! - `CONSTANT_Methodref` (10)
//! - `CONSTANT_NameAndType` (12)
//!
//! All other tags are skipped using their fixed JVMS sizes. `Long` (5) and
//! `Double` (6) occupy two pool slots, per JVMS §4.4.5.
//!
//! The parser does not interpret method bodies, attributes, or annotations
//! beyond reading their length and stepping over them.

use thiserror::Error;

/// Java `.class` file magic — `0xCAFEBABE` (JVMS §4.1).
pub const JAVA_CLASS_MAGIC: u32 = 0xCAFE_BABE;

// Constant pool tags actually decoded.
const CP_UTF8: u8 = 1;
const CP_INTEGER: u8 = 3;
const CP_FLOAT: u8 = 4;
const CP_LONG: u8 = 5;
const CP_DOUBLE: u8 = 6;
const CP_CLASS: u8 = 7;
const CP_STRING: u8 = 8;
const CP_FIELDREF: u8 = 9;
const CP_METHODREF: u8 = 10;
const CP_INTERFACE_METHODREF: u8 = 11;
const CP_NAME_AND_TYPE: u8 = 12;
const CP_METHOD_HANDLE: u8 = 15;
const CP_METHOD_TYPE: u8 = 16;
const CP_DYNAMIC: u8 = 17;
const CP_INVOKE_DYNAMIC: u8 = 18;
const CP_MODULE: u8 = 19;
const CP_PACKAGE: u8 = 20;

/// Errors that can arise while parsing a Java `.class` file.
#[derive(Debug, Error, PartialEq, Eq)]
pub enum JavaError {
    /// File is shorter than the fixed header demands.
    #[error("truncated class file: need {needed} bytes, have {have}")]
    Truncated { needed: usize, have: usize },

    /// Magic bytes are not `0xCAFEBABE`.
    #[error("invalid magic: {0:#010x} (expected 0xCAFEBABE)")]
    BadMagic(u32),

    /// A constant pool index is zero or past `constant_pool_count - 1`.
    #[error("constant pool index {0} out of range (count = {1})")]
    BadCpIndex(u16, u16),

    /// A `CONSTANT_*` tag is not one we know how to size.
    #[error("unknown constant pool tag {0} at index {1}")]
    UnknownTag(u8, u16),

    /// A `CONSTANT_Utf8` blob contained invalid Modified UTF-8.
    #[error("invalid UTF-8 in CONSTANT_Utf8 at index {0}")]
    BadUtf8(u16),

    /// A constant-pool entry was referenced as a kind it isn't.
    #[error("constant pool index {0} is not a {1}")]
    WrongCpKind(u16, &'static str),
}

/// One decoded constant-pool entry. Tags we don't need are kept as `Other`.
///
/// `String`, `NameAndType`, and `Methodref` decode their inner indices for
/// completeness (the spec requires us to parse them) but the loader
/// doesn't yet consume the inner fields — flagged `dead_code` to keep
/// `-D warnings` clean.
#[derive(Debug, Clone)]
#[allow(dead_code)]
enum CpEntry {
    Utf8(String),
    Class {
        name_index: u16,
    },
    String {
        string_index: u16,
    },
    NameAndType {
        name_index: u16,
        descriptor_index: u16,
    },
    Methodref {
        class_index: u16,
        name_and_type_index: u16,
    },
    /// Placeholder for tags we skip (Integer, Float, etc.) or the second
    /// slot of a Long / Double pair (JVMS §4.4.5).
    Other,
}

/// A declared method (name + descriptor + raw access flags).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct JavaMethod {
    /// Access flag bitfield (JVMS §4.6, table 4.6-A).
    pub access_flags: u16,
    /// Method name, e.g. `<init>` or `main`.
    pub name: String,
    /// JVM method descriptor, e.g. `([Ljava/lang/String;)V`.
    pub descriptor: String,
}

/// A declared field (name + descriptor + raw access flags).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct JavaField {
    /// Access flag bitfield (JVMS §4.5, table 4.5-A).
    pub access_flags: u16,
    /// Field name.
    pub name: String,
    /// JVM field descriptor, e.g. `Ljava/lang/String;` or `I`.
    pub descriptor: String,
}

/// A parsed Java `.class` file (subset needed by the loader).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct JavaClass {
    /// Internal name of this class, e.g. `java/lang/Object`.
    pub class_name: String,
    /// Internal name of the superclass, or `None` for `java/lang/Object`
    /// itself (where `super_class` is index 0).
    pub super_name: Option<String>,
    /// Declared methods, in declaration order.
    pub methods: Vec<JavaMethod>,
    /// Declared fields, in declaration order.
    pub fields: Vec<JavaField>,
}

/// Cursor over a byte slice with bounds-checked big-endian readers.
struct Cursor<'a> {
    data: &'a [u8],
    pos: usize,
}

impl<'a> Cursor<'a> {
    fn new(data: &'a [u8]) -> Self {
        Self { data, pos: 0 }
    }

    fn need(&self, n: usize) -> Result<(), JavaError> {
        if self.pos.saturating_add(n) > self.data.len() {
            Err(JavaError::Truncated {
                needed: self.pos + n,
                have: self.data.len(),
            })
        } else {
            Ok(())
        }
    }

    fn u8(&mut self) -> Result<u8, JavaError> {
        self.need(1)?;
        let v = self.data[self.pos];
        self.pos += 1;
        Ok(v)
    }

    fn u16(&mut self) -> Result<u16, JavaError> {
        self.need(2)?;
        let v = u16::from_be_bytes([self.data[self.pos], self.data[self.pos + 1]]);
        self.pos += 2;
        Ok(v)
    }

    fn u32(&mut self) -> Result<u32, JavaError> {
        self.need(4)?;
        let v = u32::from_be_bytes([
            self.data[self.pos],
            self.data[self.pos + 1],
            self.data[self.pos + 2],
            self.data[self.pos + 3],
        ]);
        self.pos += 4;
        Ok(v)
    }

    fn bytes(&mut self, n: usize) -> Result<&'a [u8], JavaError> {
        self.need(n)?;
        let s = &self.data[self.pos..self.pos + n];
        self.pos += n;
        Ok(s)
    }
}

/// Resolve a 1-indexed constant-pool slot into the entry array (which is
/// 1-indexed internally; slot 0 holds `Other`).
fn cp_get(pool: &[CpEntry], idx: u16) -> Result<&CpEntry, JavaError> {
    let count = pool.len() as u16;
    if idx == 0 || idx >= count {
        return Err(JavaError::BadCpIndex(idx, count));
    }
    Ok(&pool[idx as usize])
}

fn cp_utf8(pool: &[CpEntry], idx: u16) -> Result<String, JavaError> {
    match cp_get(pool, idx)? {
        CpEntry::Utf8(s) => Ok(s.clone()),
        _ => Err(JavaError::WrongCpKind(idx, "CONSTANT_Utf8")),
    }
}

fn cp_class_name(pool: &[CpEntry], idx: u16) -> Result<String, JavaError> {
    match cp_get(pool, idx)? {
        CpEntry::Class { name_index } => cp_utf8(pool, *name_index),
        _ => Err(JavaError::WrongCpKind(idx, "CONSTANT_Class")),
    }
}

/// Parse a Java `.class` file. See module docs for the supported subset.
pub fn parse_class(data: &[u8]) -> Result<JavaClass, JavaError> {
    let mut cur = Cursor::new(data);

    // Header: magic + minor + major.
    let magic = cur.u32()?;
    if magic != JAVA_CLASS_MAGIC {
        return Err(JavaError::BadMagic(magic));
    }
    let _minor = cur.u16()?;
    let _major = cur.u16()?;

    // Constant pool. Per JVMS §4.1, the count is one more than the number
    // of entries; valid indices run 1..count.
    let cp_count = cur.u16()?;
    let mut pool: Vec<CpEntry> = Vec::with_capacity(cp_count as usize);
    pool.push(CpEntry::Other); // slot 0 unused

    let mut idx: u16 = 1;
    while idx < cp_count {
        let tag = cur.u8()?;
        let entry = match tag {
            CP_UTF8 => {
                let len = cur.u16()? as usize;
                let raw = cur.bytes(len)?;
                // Modified UTF-8 with no embedded NULs and no supplementary
                // chars happens to coincide with standard UTF-8 — good
                // enough for the loader subset; we reject anything else.
                let s = std::str::from_utf8(raw)
                    .map_err(|_| JavaError::BadUtf8(idx))?
                    .to_owned();
                CpEntry::Utf8(s)
            }
            CP_INTEGER | CP_FLOAT => {
                cur.u32()?;
                CpEntry::Other
            }
            CP_LONG | CP_DOUBLE => {
                cur.u32()?;
                cur.u32()?;
                // Long/Double take two slots; the next slot is unusable.
                CpEntry::Other
            }
            CP_CLASS => {
                let name_index = cur.u16()?;
                CpEntry::Class { name_index }
            }
            CP_STRING => {
                let string_index = cur.u16()?;
                CpEntry::String { string_index }
            }
            CP_FIELDREF | CP_METHODREF | CP_INTERFACE_METHODREF => {
                let class_index = cur.u16()?;
                let name_and_type_index = cur.u16()?;
                if tag == CP_METHODREF {
                    CpEntry::Methodref {
                        class_index,
                        name_and_type_index,
                    }
                } else {
                    CpEntry::Other
                }
            }
            CP_NAME_AND_TYPE => {
                let name_index = cur.u16()?;
                let descriptor_index = cur.u16()?;
                CpEntry::NameAndType {
                    name_index,
                    descriptor_index,
                }
            }
            CP_METHOD_HANDLE => {
                cur.u8()?; // reference_kind
                cur.u16()?; // reference_index
                CpEntry::Other
            }
            CP_METHOD_TYPE | CP_MODULE | CP_PACKAGE => {
                cur.u16()?;
                CpEntry::Other
            }
            CP_DYNAMIC | CP_INVOKE_DYNAMIC => {
                cur.u16()?; // bootstrap_method_attr_index
                cur.u16()?; // name_and_type_index
                CpEntry::Other
            }
            _ => return Err(JavaError::UnknownTag(tag, idx)),
        };

        pool.push(entry);
        // Long/Double consume an extra slot.
        if matches!(tag, CP_LONG | CP_DOUBLE) {
            pool.push(CpEntry::Other);
            idx += 2;
        } else {
            idx += 1;
        }
    }

    // access_flags, this_class, super_class.
    let _access_flags = cur.u16()?;
    let this_class = cur.u16()?;
    let super_class = cur.u16()?;

    let class_name = cp_class_name(&pool, this_class)?;
    let super_name = if super_class == 0 {
        None
    } else {
        Some(cp_class_name(&pool, super_class)?)
    };

    // Interfaces — just step over (count u16 of u16s).
    let interfaces_count = cur.u16()?;
    for _ in 0..interfaces_count {
        cur.u16()?;
    }

    // Fields.
    let fields_count = cur.u16()?;
    let mut fields = Vec::with_capacity(fields_count as usize);
    for _ in 0..fields_count {
        let access_flags = cur.u16()?;
        let name_index = cur.u16()?;
        let descriptor_index = cur.u16()?;
        let name = cp_utf8(&pool, name_index)?;
        let descriptor = cp_utf8(&pool, descriptor_index)?;
        skip_attributes(&mut cur)?;
        fields.push(JavaField {
            access_flags,
            name,
            descriptor,
        });
    }

    // Methods.
    let methods_count = cur.u16()?;
    let mut methods = Vec::with_capacity(methods_count as usize);
    for _ in 0..methods_count {
        let access_flags = cur.u16()?;
        let name_index = cur.u16()?;
        let descriptor_index = cur.u16()?;
        let name = cp_utf8(&pool, name_index)?;
        let descriptor = cp_utf8(&pool, descriptor_index)?;
        skip_attributes(&mut cur)?;
        methods.push(JavaMethod {
            access_flags,
            name,
            descriptor,
        });
    }

    // Class-level attributes — also skipped.
    skip_attributes(&mut cur)?;

    Ok(JavaClass {
        class_name,
        super_name,
        methods,
        fields,
    })
}

/// Skip an `attributes_count` followed by `attributes_count` attribute_info
/// records (JVMS §4.7).
fn skip_attributes(cur: &mut Cursor<'_>) -> Result<(), JavaError> {
    let count = cur.u16()?;
    for _ in 0..count {
        let _name_index = cur.u16()?;
        let length = cur.u32()? as usize;
        cur.bytes(length)?;
    }
    Ok(())
}

// ---------------------------------------------------------------------------
// JAR (ZIP) loader + BinaryImage projection
// ---------------------------------------------------------------------------

/// One `.class` entry recovered from a JAR file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct JarClassEntry {
    pub name: String,
    pub uncompressed_size: u64,
    pub local_header_offset: u64,
}

/// Walk a JAR / ZIP byte stream and list every `.class` entry. Only
/// the central-directory record fields are read; payloads are not
/// decompressed here (`flate2` is a transitive workspace dep but
/// listing alone doesn't require it).
///
/// The central directory is located via the End-Of-Central-Directory
/// record (`PK\x05\x06`) which lives in the last ~22 bytes of the
/// archive (plus a variable comment). For each central-directory
/// entry, we read the file name + sizes and filter for `.class`
/// suffixes.
pub fn jar_list_classes(jar_bytes: &[u8]) -> Option<Vec<JarClassEntry>> {
    const EOCD_SIGNATURE: [u8; 4] = [b'P', b'K', 5, 6];
    const CDH_SIGNATURE: [u8; 4] = [b'P', b'K', 1, 2];
    if jar_bytes.len() < 22 {
        return None;
    }
    // Search the last 64 KiB + 22 bytes for the EOCD signature.
    let search_start = jar_bytes.len().saturating_sub(0xFFFF + 22);
    let eocd_offset = jar_bytes[search_start..]
        .windows(4)
        .rposition(|w| w == EOCD_SIGNATURE)?
        + search_start;
    if eocd_offset + 22 > jar_bytes.len() {
        return None;
    }
    let cd_entries =
        u16::from_le_bytes(jar_bytes[eocd_offset + 10..eocd_offset + 12].try_into().ok()?) as usize;
    let cd_size =
        u32::from_le_bytes(jar_bytes[eocd_offset + 12..eocd_offset + 16].try_into().ok()?) as usize;
    let cd_offset =
        u32::from_le_bytes(jar_bytes[eocd_offset + 16..eocd_offset + 20].try_into().ok()?) as usize;
    if cd_offset + cd_size > jar_bytes.len() {
        return None;
    }

    let mut entries = Vec::with_capacity(cd_entries);
    let mut cursor = cd_offset;
    for _ in 0..cd_entries {
        if cursor + 46 > jar_bytes.len() {
            return None;
        }
        if jar_bytes[cursor..cursor + 4] != CDH_SIGNATURE {
            return None;
        }
        let uncompressed_size = u32::from_le_bytes(
            jar_bytes[cursor + 24..cursor + 28].try_into().ok()?,
        ) as u64;
        let name_len =
            u16::from_le_bytes(jar_bytes[cursor + 28..cursor + 30].try_into().ok()?) as usize;
        let extra_len =
            u16::from_le_bytes(jar_bytes[cursor + 30..cursor + 32].try_into().ok()?) as usize;
        let comment_len =
            u16::from_le_bytes(jar_bytes[cursor + 32..cursor + 34].try_into().ok()?) as usize;
        let local_header_offset = u32::from_le_bytes(
            jar_bytes[cursor + 42..cursor + 46].try_into().ok()?,
        ) as u64;
        let name_start = cursor + 46;
        let name_end = name_start + name_len;
        if name_end > jar_bytes.len() {
            return None;
        }
        let name = String::from_utf8_lossy(&jar_bytes[name_start..name_end]).into_owned();
        cursor = name_end + extra_len + comment_len;
        if name.ends_with(".class") {
            entries.push(JarClassEntry {
                name,
                uncompressed_size,
                local_header_offset,
            });
        }
    }
    Some(entries)
}

/// Project a parsed [`JavaClass`] onto a generic [`BinaryImage`]. Each
/// method becomes a `Function` symbol at a synthetic virtual address
/// derived from the method index. The class's constant-pool name is
/// stashed in the string table at the manifest-hash slot so callers
/// can recover the qualified class name.
pub fn java_class_to_binary_image(class: &JavaClass) -> crate::image::BinaryImage {
    use crate::image::{ArchId, BinaryImage, Endian, Symbol, SymbolKind};
    let mut out = BinaryImage::empty(ArchId::Unknown(0x4A56), Endian::Big); // "JV"
    out.string_table
        .insert(0xFFFF_FFFF_FFFF_FF02, class.class_name.clone());
    for (idx, method) in class.methods.iter().enumerate() {
        let addr = 0x0000_0001_0000_0000 + (idx as u64) * 16;
        out.symbols.insert(
            addr,
            Symbol {
                name: format!("{}.{}{}", class.class_name, method.name, method.descriptor),
                addr,
                size: 0,
                kind: SymbolKind::Function,
            },
        );
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Helper: builder for a synthetic minimal `.class` file. Avoids
    /// pulling in `javac` for unit tests.
    struct ClassBuilder {
        out: Vec<u8>,
        cp_entries: u16,
    }

    impl ClassBuilder {
        fn new() -> Self {
            let mut out = Vec::new();
            out.extend_from_slice(&JAVA_CLASS_MAGIC.to_be_bytes());
            out.extend_from_slice(&0u16.to_be_bytes()); // minor
            out.extend_from_slice(&52u16.to_be_bytes()); // major (Java 8)
            // Reserve space for constant_pool_count; patched at finish().
            out.extend_from_slice(&0u16.to_be_bytes());
            Self { out, cp_entries: 0 }
        }

        fn add_utf8(&mut self, s: &str) -> u16 {
            self.out.push(CP_UTF8);
            let bytes = s.as_bytes();
            self.out
                .extend_from_slice(&(bytes.len() as u16).to_be_bytes());
            self.out.extend_from_slice(bytes);
            self.cp_entries += 1;
            self.cp_entries
        }

        fn add_class(&mut self, name_index: u16) -> u16 {
            self.out.push(CP_CLASS);
            self.out.extend_from_slice(&name_index.to_be_bytes());
            self.cp_entries += 1;
            self.cp_entries
        }

        fn add_string(&mut self, string_index: u16) -> u16 {
            self.out.push(CP_STRING);
            self.out.extend_from_slice(&string_index.to_be_bytes());
            self.cp_entries += 1;
            self.cp_entries
        }

        fn add_name_and_type(&mut self, name_idx: u16, desc_idx: u16) -> u16 {
            self.out.push(CP_NAME_AND_TYPE);
            self.out.extend_from_slice(&name_idx.to_be_bytes());
            self.out.extend_from_slice(&desc_idx.to_be_bytes());
            self.cp_entries += 1;
            self.cp_entries
        }

        fn add_methodref(&mut self, class_idx: u16, nat_idx: u16) -> u16 {
            self.out.push(CP_METHODREF);
            self.out.extend_from_slice(&class_idx.to_be_bytes());
            self.out.extend_from_slice(&nat_idx.to_be_bytes());
            self.cp_entries += 1;
            self.cp_entries
        }

        fn finish_pool(&mut self) {
            let count = self.cp_entries + 1; // JVMS: count = entries + 1
            self.out[8..10].copy_from_slice(&count.to_be_bytes());
        }

        fn write_u16(&mut self, v: u16) {
            self.out.extend_from_slice(&v.to_be_bytes());
        }
    }

    fn build_minimal(class_name: &str, super_name: Option<&str>) -> Vec<u8> {
        let mut b = ClassBuilder::new();
        let this_name = b.add_utf8(class_name);
        let this_cls = b.add_class(this_name);
        let super_cls = match super_name {
            Some(n) => {
                let nu = b.add_utf8(n);
                b.add_class(nu)
            }
            None => 0,
        };
        b.finish_pool();
        b.write_u16(0x0021); // ACC_PUBLIC | ACC_SUPER
        b.write_u16(this_cls);
        b.write_u16(super_cls);
        b.write_u16(0); // interfaces_count
        b.write_u16(0); // fields_count
        b.write_u16(0); // methods_count
        b.write_u16(0); // attributes_count
        b.out
    }

    #[test]
    fn parses_minimal_class_with_super() {
        let data = build_minimal("com/example/Foo", Some("java/lang/Object"));
        let c = parse_class(&data).expect("parse");
        assert_eq!(c.class_name, "com/example/Foo");
        assert_eq!(c.super_name.as_deref(), Some("java/lang/Object"));
        assert!(c.methods.is_empty());
        assert!(c.fields.is_empty());
    }

    #[test]
    fn parses_object_class_with_no_super() {
        // java/lang/Object itself has super_class == 0.
        let data = build_minimal("java/lang/Object", None);
        let c = parse_class(&data).expect("parse");
        assert_eq!(c.class_name, "java/lang/Object");
        assert_eq!(c.super_name, None);
    }

    #[test]
    fn parses_fields_and_methods_with_all_required_tags() {
        // Exercise CP_Utf8, CP_Class, CP_String, CP_Methodref, CP_NameAndType
        // and one field + one method.
        let mut b = ClassBuilder::new();
        let n_this = b.add_utf8("Hello");
        let c_this = b.add_class(n_this);
        let n_super = b.add_utf8("java/lang/Object");
        let c_super = b.add_class(n_super);
        let n_init = b.add_utf8("<init>");
        let d_void = b.add_utf8("()V");
        let nat_init = b.add_name_and_type(n_init, d_void);
        let _mref = b.add_methodref(c_super, nat_init);
        let n_msg = b.add_utf8("Hello, world!");
        let _s_msg = b.add_string(n_msg);
        let n_field = b.add_utf8("counter");
        let d_int = b.add_utf8("I");
        let n_main = b.add_utf8("main");
        let d_main = b.add_utf8("([Ljava/lang/String;)V");
        b.finish_pool();

        b.write_u16(0x0021); // access_flags
        b.write_u16(c_this);
        b.write_u16(c_super);
        b.write_u16(0); // interfaces_count

        // Fields: one private int counter.
        b.write_u16(1);
        b.write_u16(0x0002); // ACC_PRIVATE
        b.write_u16(n_field);
        b.write_u16(d_int);
        b.write_u16(0); // field attributes_count

        // Methods: one public static main.
        b.write_u16(1);
        b.write_u16(0x0009); // ACC_PUBLIC | ACC_STATIC
        b.write_u16(n_main);
        b.write_u16(d_main);
        b.write_u16(0); // method attributes_count

        b.write_u16(0); // class attributes_count

        let c = parse_class(&b.out).expect("parse");
        assert_eq!(c.class_name, "Hello");
        assert_eq!(c.super_name.as_deref(), Some("java/lang/Object"));
        assert_eq!(c.fields.len(), 1);
        assert_eq!(c.fields[0].name, "counter");
        assert_eq!(c.fields[0].descriptor, "I");
        assert_eq!(c.fields[0].access_flags, 0x0002);
        assert_eq!(c.methods.len(), 1);
        assert_eq!(c.methods[0].name, "main");
        assert_eq!(c.methods[0].descriptor, "([Ljava/lang/String;)V");
        assert_eq!(c.methods[0].access_flags, 0x0009);
    }

    #[test]
    fn rejects_bad_magic_and_truncation() {
        // Bad magic.
        let mut bad = vec![0xDE, 0xAD, 0xBE, 0xEF];
        bad.extend_from_slice(&[0; 6]); // pad enough for header reads
        match parse_class(&bad) {
            Err(JavaError::BadMagic(m)) => assert_eq!(m, 0xDEAD_BEEF),
            other => panic!("expected BadMagic, got {other:?}"),
        }

        // Truncated: only the magic, nothing else.
        let tiny = 0xCAFE_BABE_u32.to_be_bytes().to_vec();
        assert!(matches!(
            parse_class(&tiny),
            Err(JavaError::Truncated { .. })
        ));
    }

    /// Build a minimal STORED-method (no compression) ZIP archive
    /// holding one or more synthetic file entries.
    fn build_jar(entries: &[(&str, &[u8])]) -> Vec<u8> {
        let mut out: Vec<u8> = Vec::new();
        let mut cd_records: Vec<(u32, u32, &str, &[u8])> = Vec::new();

        for (name, body) in entries {
            let local_offset = out.len() as u32;
            // Local file header (PK\3\4).
            out.extend_from_slice(b"PK\x03\x04");
            out.extend_from_slice(&20u16.to_le_bytes()); // version_needed
            out.extend_from_slice(&0u16.to_le_bytes()); // flags
            out.extend_from_slice(&0u16.to_le_bytes()); // STORED
            out.extend_from_slice(&0u16.to_le_bytes()); // mtime
            out.extend_from_slice(&0u16.to_le_bytes()); // mdate
            out.extend_from_slice(&0u32.to_le_bytes()); // crc32
            out.extend_from_slice(&(body.len() as u32).to_le_bytes()); // comp_size
            out.extend_from_slice(&(body.len() as u32).to_le_bytes()); // uncomp_size
            out.extend_from_slice(&(name.len() as u16).to_le_bytes()); // name_len
            out.extend_from_slice(&0u16.to_le_bytes()); // extra_len
            out.extend_from_slice(name.as_bytes());
            out.extend_from_slice(body);
            cd_records.push((local_offset, body.len() as u32, name, body));
        }

        let cd_start = out.len() as u32;
        for (local_offset, size, name, _) in &cd_records {
            // Central directory header (PK\1\2).
            out.extend_from_slice(b"PK\x01\x02");
            out.extend_from_slice(&20u16.to_le_bytes()); // version_made_by
            out.extend_from_slice(&20u16.to_le_bytes()); // version_needed
            out.extend_from_slice(&0u16.to_le_bytes()); // flags
            out.extend_from_slice(&0u16.to_le_bytes()); // STORED
            out.extend_from_slice(&0u16.to_le_bytes()); // mtime
            out.extend_from_slice(&0u16.to_le_bytes()); // mdate
            out.extend_from_slice(&0u32.to_le_bytes()); // crc32
            out.extend_from_slice(&size.to_le_bytes()); // comp_size
            out.extend_from_slice(&size.to_le_bytes()); // uncomp_size
            out.extend_from_slice(&(name.len() as u16).to_le_bytes()); // name_len
            out.extend_from_slice(&0u16.to_le_bytes()); // extra_len
            out.extend_from_slice(&0u16.to_le_bytes()); // comment_len
            out.extend_from_slice(&0u16.to_le_bytes()); // disk_number_start
            out.extend_from_slice(&0u16.to_le_bytes()); // internal_attrs
            out.extend_from_slice(&0u32.to_le_bytes()); // external_attrs
            out.extend_from_slice(&local_offset.to_le_bytes());
            out.extend_from_slice(name.as_bytes());
        }
        let cd_size = out.len() as u32 - cd_start;

        // End of central directory (PK\5\6).
        out.extend_from_slice(b"PK\x05\x06");
        out.extend_from_slice(&0u16.to_le_bytes()); // disk_number
        out.extend_from_slice(&0u16.to_le_bytes()); // disk_with_cd
        out.extend_from_slice(&(cd_records.len() as u16).to_le_bytes()); // entries_on_disk
        out.extend_from_slice(&(cd_records.len() as u16).to_le_bytes()); // total_entries
        out.extend_from_slice(&cd_size.to_le_bytes()); // cd_size
        out.extend_from_slice(&cd_start.to_le_bytes()); // cd_offset
        out.extend_from_slice(&0u16.to_le_bytes()); // comment_len
        out
    }

    /// `jar_reader_lists_inner_class_files` — a minimal STORED ZIP
    /// containing two `.class` files and one `META-INF/MANIFEST.MF`
    /// should list both classes and skip the manifest.
    #[test]
    fn jar_reader_lists_inner_class_files() {
        let jar = build_jar(&[
            ("META-INF/MANIFEST.MF", b"Manifest-Version: 1.0\n"),
            ("Hello.class", b"\xca\xfe\xba\xbe"),
            ("World.class", b"\xca\xfe\xba\xbe"),
        ]);
        let classes = jar_list_classes(&jar).expect("jar must parse");
        assert_eq!(classes.len(), 2);
        let names: Vec<&str> = classes.iter().map(|c| c.name.as_str()).collect();
        assert!(names.contains(&"Hello.class"));
        assert!(names.contains(&"World.class"));
    }

    /// `class_methods_become_symbols` — `java_class_to_binary_image`
    /// emits one Function symbol per declared method.
    #[test]
    fn class_methods_become_symbols() {
        use crate::image::SymbolKind;
        let class = JavaClass {
            class_name: "MyClass".to_string(),
            super_name: Some("java/lang/Object".to_string()),
            methods: vec![
                JavaMethod {
                    access_flags: 1,
                    name: "<init>".to_string(),
                    descriptor: "()V".to_string(),
                },
                JavaMethod {
                    access_flags: 9,
                    name: "main".to_string(),
                    descriptor: "([Ljava/lang/String;)V".to_string(),
                },
            ],
            fields: vec![],
        };
        let bin = java_class_to_binary_image(&class);
        assert_eq!(bin.symbols.len(), 2);
        let mut iter = bin.symbols.values();
        let s0 = iter.next().unwrap();
        let s1 = iter.next().unwrap();
        assert!(s0.name.starts_with("MyClass.<init>"));
        assert!(s1.name.starts_with("MyClass.main"));
        assert!(matches!(s0.kind, SymbolKind::Function));
        assert!(matches!(s1.kind, SymbolKind::Function));
        assert_eq!(
            bin.string_table.get(&0xFFFF_FFFF_FFFF_FF02).map(|s| s.as_str()),
            Some("MyClass")
        );
    }
}
