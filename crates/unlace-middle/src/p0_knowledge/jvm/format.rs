//! (unlace `jvmmodel`) The Java class-file format (JVMS chapter 4): the constant pool,
//! the methods and their `Code` attributes. Ghidra's `ClassFileJava` reads the
//! same; attributes other than `Code` are skipped.

use unlace_base::error::{UnlaceError, UnlaceResult};

/// The class-file magic.
pub const MAGIC: u32 = 0xCAFE_BABE;

/// The `ACC_STATIC` method access flag.
pub const ACC_STATIC: u16 = 0x0008;

/// A constant-pool entry (JVMS 4.4). Index 0, and the slot after a long or
/// double, is [`Constant::Empty`].
#[derive(Clone, Debug, PartialEq)]
pub enum Constant {
    Empty,
    /// The decoded text and the entry's raw (modified UTF-8) bytes.
    Utf8(String, Vec<u8>),
    Integer(i32),
    Float(u32),
    Long(i64),
    Double(u64),
    Class {
        name: u16,
    },
    String {
        string: u16,
    },
    FieldRef {
        class: u16,
        name_and_type: u16,
    },
    MethodRef {
        class: u16,
        name_and_type: u16,
    },
    InterfaceMethodRef {
        class: u16,
        name_and_type: u16,
    },
    NameAndType {
        name: u16,
        descriptor: u16,
    },
    MethodHandle {
        kind: u8,
        reference: u16,
    },
    MethodType {
        descriptor: u16,
    },
    Dynamic {
        bootstrap: u16,
        name_and_type: u16,
    },
    InvokeDynamic {
        bootstrap: u16,
        name_and_type: u16,
    },
    Module {
        name: u16,
    },
    Package {
        name: u16,
    },
}

/// A method's `Code` attribute: where its instructions sit in the file.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Code {
    pub max_stack: u16,
    pub max_locals: u16,
    /// File offset of the first instruction byte.
    pub offset: usize,
    pub length: usize,
}

/// A `method_info` (JVMS 4.6).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Method {
    pub access: u16,
    pub name: u16,
    pub descriptor: u16,
    pub code: Option<Code>,
}

impl Method {
    pub fn is_static(&self) -> bool {
        self.access & ACC_STATIC != 0
    }
}

/// A parsed class file.
#[derive(Clone, Debug)]
pub struct ClassFile {
    bytes: Vec<u8>,
    pub major: u16,
    pub pool: Vec<Constant>,
    pub access: u16,
    pub this_class: u16,
    pub super_class: u16,
    pub methods: Vec<Method>,
}

/// Is `bytes` a class file? A universal Mach-O binary shares the magic; its
/// next word is an architecture count, where a class file has its version
/// (major 45 and later).
pub fn is_class(bytes: &[u8]) -> bool {
    bytes.len() >= 10
        && be32(bytes, 0) == Some(MAGIC)
        && be16(bytes, 6).is_some_and(|major| (45..=200).contains(&major))
}

fn be16(bytes: &[u8], at: usize) -> Option<u16> {
    bytes
        .get(at..at + 2)
        .map(|b| u16::from_be_bytes([b[0], b[1]]))
}

fn be32(bytes: &[u8], at: usize) -> Option<u32> {
    bytes
        .get(at..at + 4)
        .map(|b| u32::from_be_bytes([b[0], b[1], b[2], b[3]]))
}

fn bad(what: &str) -> UnlaceError {
    UnlaceError::lowlevel(format!("malformed class file: {what}"))
}

/// A reader over the file that fails, rather than panics, past its end.
struct Reader<'a> {
    bytes: &'a [u8],
    at: usize,
}

impl Reader<'_> {
    fn u8(&mut self) -> UnlaceResult<u8> {
        let b = *self.bytes.get(self.at).ok_or_else(|| bad("truncated"))?;
        self.at += 1;
        Ok(b)
    }

    fn u16(&mut self) -> UnlaceResult<u16> {
        let v = be16(self.bytes, self.at).ok_or_else(|| bad("truncated"))?;
        self.at += 2;
        Ok(v)
    }

    fn u32(&mut self) -> UnlaceResult<u32> {
        let v = be32(self.bytes, self.at).ok_or_else(|| bad("truncated"))?;
        self.at += 4;
        Ok(v)
    }

    fn skip(&mut self, len: usize) -> UnlaceResult<()> {
        let end = self.at.checked_add(len).filter(|&e| e <= self.bytes.len());
        self.at = end.ok_or_else(|| bad("truncated"))?;
        Ok(())
    }
}

/// Modified UTF-8 (JVMS 4.4.7): standard UTF-8 except that NUL is `C0 80` and a
/// supplementary character is a surrogate pair, three bytes each.
fn modified_utf8(raw: &[u8]) -> String {
    if let Ok(text) = std::str::from_utf8(raw) {
        return text.to_string();
    }
    let mut units: Vec<u16> = Vec::with_capacity(raw.len());
    let mut i = 0;
    while i < raw.len() {
        let b = raw[i];
        let (unit, len) = if b < 0x80 {
            (u16::from(b), 1)
        } else if b & 0xE0 == 0xC0 && i + 1 < raw.len() {
            ((u16::from(b & 0x1F) << 6) | u16::from(raw[i + 1] & 0x3F), 2)
        } else if b & 0xF0 == 0xE0 && i + 2 < raw.len() {
            (
                (u16::from(b & 0x0F) << 12)
                    | (u16::from(raw[i + 1] & 0x3F) << 6)
                    | u16::from(raw[i + 2] & 0x3F),
                3,
            )
        } else {
            (0xFFFD, 1)
        };
        units.push(unit);
        i += len;
    }
    String::from_utf16_lossy(&units)
}

impl ClassFile {
    pub fn parse(bytes: Vec<u8>) -> UnlaceResult<ClassFile> {
        let (major, pool, access, this_class, super_class, methods) = {
            let mut r = Reader {
                bytes: &bytes,
                at: 0,
            };
            if r.u32()? != MAGIC {
                return Err(bad("no 0xCAFEBABE magic"));
            }
            let _minor = r.u16()?;
            let major = r.u16()?;
            let count = r.u16()?;
            let mut pool = vec![Constant::Empty];
            while pool.len() < usize::from(count) {
                let tag = r.u8()?;
                let entry = match tag {
                    1 => {
                        let len = usize::from(r.u16()?);
                        let start = r.at;
                        r.skip(len)?;
                        let raw = bytes[start..start + len].to_vec();
                        Constant::Utf8(modified_utf8(&raw), raw)
                    }
                    3 => Constant::Integer(r.u32()? as i32),
                    4 => Constant::Float(r.u32()?),
                    5 => Constant::Long((u64::from(r.u32()?) << 32 | u64::from(r.u32()?)) as i64),
                    6 => Constant::Double(u64::from(r.u32()?) << 32 | u64::from(r.u32()?)),
                    7 => Constant::Class { name: r.u16()? },
                    8 => Constant::String { string: r.u16()? },
                    9 => Constant::FieldRef {
                        class: r.u16()?,
                        name_and_type: r.u16()?,
                    },
                    10 => Constant::MethodRef {
                        class: r.u16()?,
                        name_and_type: r.u16()?,
                    },
                    11 => Constant::InterfaceMethodRef {
                        class: r.u16()?,
                        name_and_type: r.u16()?,
                    },
                    12 => Constant::NameAndType {
                        name: r.u16()?,
                        descriptor: r.u16()?,
                    },
                    15 => Constant::MethodHandle {
                        kind: r.u8()?,
                        reference: r.u16()?,
                    },
                    16 => Constant::MethodType {
                        descriptor: r.u16()?,
                    },
                    17 => Constant::Dynamic {
                        bootstrap: r.u16()?,
                        name_and_type: r.u16()?,
                    },
                    18 => Constant::InvokeDynamic {
                        bootstrap: r.u16()?,
                        name_and_type: r.u16()?,
                    },
                    19 => Constant::Module { name: r.u16()? },
                    20 => Constant::Package { name: r.u16()? },
                    other => return Err(bad(&format!("constant-pool tag {other}"))),
                };
                let wide = matches!(entry, Constant::Long(_) | Constant::Double(_));
                pool.push(entry);
                if wide {
                    pool.push(Constant::Empty);
                }
            }
            let access = r.u16()?;
            let this_class = r.u16()?;
            let super_class = r.u16()?;
            let interfaces = usize::from(r.u16()?);
            r.skip(2 * interfaces)?;
            let fields = r.u16()?;
            for _ in 0..fields {
                r.skip(6)?;
                skip_attributes(&mut r)?;
            }
            let count = r.u16()?;
            let mut methods = Vec::with_capacity(usize::from(count));
            for _ in 0..count {
                let access = r.u16()?;
                let name = r.u16()?;
                let descriptor = r.u16()?;
                let mut code = None;
                let attributes = r.u16()?;
                for _ in 0..attributes {
                    let attr_name = r.u16()?;
                    let len = r.u32()? as usize;
                    let start = r.at;
                    let is_code = matches!(pool.get(usize::from(attr_name)),
                        Some(Constant::Utf8(n, _)) if n == "Code");
                    if is_code && len >= 8 {
                        let mut c = Reader {
                            bytes: &bytes,
                            at: start,
                        };
                        let max_stack = c.u16()?;
                        let max_locals = c.u16()?;
                        let length = c.u32()? as usize;
                        let offset = c.at;
                        c.skip(length)?;
                        if offset + length > start + len {
                            return Err(bad("Code attribute shorter than its code"));
                        }
                        code = Some(Code {
                            max_stack,
                            max_locals,
                            offset,
                            length,
                        });
                    }
                    r.skip(len)?;
                }
                methods.push(Method {
                    access,
                    name,
                    descriptor,
                    code,
                });
            }
            (major, pool, access, this_class, super_class, methods)
        };
        Ok(ClassFile {
            bytes,
            major,
            pool,
            access,
            this_class,
            super_class,
            methods,
        })
    }

    pub fn bytes(&self) -> &[u8] {
        &self.bytes
    }

    pub fn constant(&self, index: u16) -> Option<&Constant> {
        self.pool.get(usize::from(index))
    }

    /// The text of UTF-8 entry `index`.
    pub fn utf8(&self, index: u16) -> Option<&str> {
        match self.constant(index)? {
            Constant::Utf8(text, _) => Some(text.as_str()),
            _ => None,
        }
    }

    /// The internal name (`java/lang/String`) of class entry `index`.
    pub fn class_name(&self, index: u16) -> Option<&str> {
        match self.constant(index)? {
            Constant::Class { name } => self.utf8(*name),
            _ => None,
        }
    }

    /// `(name, descriptor)` of name-and-type entry `index`.
    pub fn name_and_type(&self, index: u16) -> Option<(&str, &str)> {
        match self.constant(index)? {
            Constant::NameAndType { name, descriptor } => {
                Some((self.utf8(*name)?, self.utf8(*descriptor)?))
            }
            _ => None,
        }
    }

    /// `(class index, name, descriptor)` of a field, method or interface-method
    /// reference; a (invoke)dynamic entry has no class (`None`).
    pub fn member(&self, index: u16) -> Option<(Option<u16>, &str, &str)> {
        let (class, nat) = match self.constant(index)? {
            Constant::FieldRef {
                class,
                name_and_type,
            }
            | Constant::MethodRef {
                class,
                name_and_type,
            }
            | Constant::InterfaceMethodRef {
                class,
                name_and_type,
            } => (Some(*class), *name_and_type),
            Constant::InvokeDynamic { name_and_type, .. }
            | Constant::Dynamic { name_and_type, .. } => (None, *name_and_type),
            _ => return None,
        };
        let (name, descriptor) = self.name_and_type(nat)?;
        Some((class, name, descriptor))
    }
}

fn skip_attributes(r: &mut Reader<'_>) -> UnlaceResult<()> {
    let count = r.u16()?;
    for _ in 0..count {
        r.skip(2)?;
        let len = r.u32()? as usize;
        r.skip(len)?;
    }
    Ok(())
}

/// The parameter and return descriptors of method descriptor `(IJ)V`.
pub fn method_descriptor(descriptor: &str) -> Option<(Vec<String>, String)> {
    let body = descriptor.strip_prefix('(')?;
    let close = body.find(')')?;
    let (mut params, ret) = (Vec::new(), &body[close + 1..]);
    let mut rest = &body[..close];
    while !rest.is_empty() {
        let len = field_descriptor_len(rest)?;
        params.push(rest[..len].to_string());
        rest = &rest[len..];
    }
    Some((params, ret.to_string()))
}

/// The length of the field descriptor at the start of `s`.
fn field_descriptor_len(s: &str) -> Option<usize> {
    let bytes = s.as_bytes();
    let mut at = 0;
    while bytes.get(at) == Some(&b'[') {
        at += 1;
    }
    match bytes.get(at)? {
        b'L' => Some(at + s[at..].find(';')? + 1),
        b'B' | b'C' | b'D' | b'F' | b'I' | b'J' | b'S' | b'Z' | b'V' => Some(at + 1),
        _ => None,
    }
}

/// Is the field descriptor a long or a double (computational category 2)?
pub fn is_wide(descriptor: &str) -> bool {
    matches!(descriptor.as_bytes().first(), Some(b'J' | b'D'))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn method_descriptors_split() {
        let (params, ret) = method_descriptor("(I[JLjava/lang/String;[[Lp/Q;D)V").unwrap();
        assert_eq!(params, ["I", "[J", "Ljava/lang/String;", "[[Lp/Q;", "D"]);
        assert_eq!(ret, "V");
        assert!(method_descriptor("(X)V").is_none());
    }

    #[test]
    fn a_universal_binary_is_not_a_class_file() {
        let mut fat = vec![0xCA, 0xFE, 0xBA, 0xBE, 0, 0, 0, 2];
        fat.resize(64, 0);
        assert!(!is_class(&fat));
        let mut class = vec![0xCA, 0xFE, 0xBA, 0xBE, 0, 0, 0, 52];
        class.resize(64, 0);
        assert!(is_class(&class));
    }
}
