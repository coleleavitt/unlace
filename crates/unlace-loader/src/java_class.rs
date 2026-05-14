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
fn cp_get<'a>(pool: &'a [CpEntry], idx: u16) -> Result<&'a CpEntry, JavaError> {
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
}
