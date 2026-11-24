//! (kuna `jvmmodel`) The Java class-file `LoadImage`: each method's code mapped
//! read-only, as Ghidra's `JavaLoader` copies it.
//!
//! A `.class` file's methods map one after another from
//! [`unlace_decomp::jvm::CODE_BASE`], each on a 4-byte boundary; a JAR's
//! classes (its `.class` members, in archive order) follow each other. The
//! constant pools live in [`unlace_decomp::jvm::JvmModel`].

use std::rc::Rc;

use unlace_base::address::{Address, RangeList};
use unlace_base::error::{KunaError, KunaResult};
use unlace_base::space::AddrSpace;
use unlace_decomp::jvm::{CODE_BASE, JvmModel, is_class};
use unlace_sleigh::loadimage::{LoadImage, LoadImageSection, section_flags};

use crate::loader::firmware::bundles::{Bundle, Kind};

/// The language a class file decodes with.
pub const JVM_LANGUAGE: &str = "JVM:BE:32:default";

/// Largest number of classes kuna maps out of one JAR.
const MAX_CLASSES: usize = 1 << 16;

/// Is `bytes` a zip with at least one `.class` member and no `classes.dex`?
pub fn is_jar(bytes: &[u8]) -> bool {
    bytes.starts_with(b"PK\x03\x04")
        && Bundle::parse(bytes).ok().flatten().is_some_and(|b| {
            b.kind == Kind::Zip
                && b.entries.iter().any(|e| e.name.ends_with(".class"))
                && !b.entries.iter().any(|e| e.name == "classes.dex")
        })
}

/// Is `bytes` a class file or a JAR?
pub fn is_class_image(bytes: &[u8]) -> bool {
    is_class(bytes) || is_jar(bytes)
}

/// Parse a class file, or every `.class` member of a JAR, mapping their
/// methods in order from [`CODE_BASE`].
pub fn load_class_models(bytes: Vec<u8>) -> KunaResult<Vec<Rc<JvmModel>>> {
    let files = if is_class(&bytes) {
        vec![bytes]
    } else {
        let bundle = Bundle::parse(&bytes)
            .map_err(KunaError::lowlevel)?
            .ok_or_else(|| KunaError::lowlevel("not a JAR"))?;
        let mut files = Vec::new();
        for entry in bundle.entries.iter().filter(|e| e.name.ends_with(".class")) {
            if files.len() >= MAX_CLASSES {
                break;
            }
            let data = bundle.unpack(entry).map_err(KunaError::lowlevel)?;
            if is_class(&data) {
                files.push(data.into_owned());
            }
        }
        files
    };
    if files.is_empty() {
        return Err(KunaError::lowlevel("no class files"));
    }
    let mut models = Vec::with_capacity(files.len());
    let mut base = CODE_BASE;
    for file in files {
        let model = JvmModel::parse(file, base)?;
        base = model.end.div_ceil(4) * 4;
        if base > u64::from(u32::MAX) {
            return Err(KunaError::lowlevel(
                "classes do not fit in the 32-bit address space",
            ));
        }
        models.push(Rc::new(model));
    }
    Ok(models)
}

/// Class methods mapped in the attached space.
pub struct ClassLoadImage {
    filename: String,
    models: Vec<Rc<JvmModel>>,
    space: Option<Rc<AddrSpace>>,
    section_cursor: std::cell::Cell<usize>,
}

impl ClassLoadImage {
    pub fn new(filename: &str, models: Vec<Rc<JvmModel>>) -> ClassLoadImage {
        ClassLoadImage {
            filename: filename.to_string(),
            models,
            space: None,
            section_cursor: std::cell::Cell::new(0),
        }
    }

    /// The default code space the methods map into.
    pub fn attach_to_space(&mut self, space: Rc<AddrSpace>) {
        self.space = Some(space);
    }

    fn mappings(&self) -> impl Iterator<Item = (u64, u64)> + '_ {
        self.models.iter().flat_map(|m| m.mappings())
    }
}

impl LoadImage for ClassLoadImage {
    fn get_file_name(&self) -> &str {
        &self.filename
    }

    fn load_fill(&mut self, ptr: &mut [u8], addr: &Address) -> KunaResult<()> {
        let start = addr.get_offset();
        let attached = match (addr.get_space(), self.space.as_ref()) {
            (Some(space), Some(own)) => Rc::ptr_eq(space, own),
            _ => false,
        };
        let code = self
            .models
            .iter()
            .find_map(|m| m.code_from(start))
            .filter(|_| attached);
        let Some(code) = code else {
            return Err(KunaError::data_unavail(format!(
                "Unable to load {} bytes at {}:0x{start:x}",
                ptr.len(),
                addr.get_shortcut()
            )));
        };
        let count = ptr.len().min(code.len());
        ptr[..count].copy_from_slice(&code[..count]);
        ptr[count..].fill(0);
        Ok(())
    }

    fn open_section_info(&self) {
        self.section_cursor.set(0);
    }

    fn get_next_section(&self, record: &mut LoadImageSection) -> bool {
        let index = self.section_cursor.get();
        let total = self.mappings().count();
        let (Some(space), Some((base, len))) = (self.space.as_ref(), self.mappings().nth(index))
        else {
            return false;
        };
        record.address = Address::new(Rc::clone(space), base);
        record.size = len;
        record.flags = section_flags::CODE | section_flags::READONLY;
        self.section_cursor.set(index + 1);
        index + 1 < total
    }

    fn get_segments(&self) -> Vec<(u64, u64, u32)> {
        self.mappings()
            .map(|(base, len)| (base, len, section_flags::CODE | section_flags::READONLY))
            .collect()
    }

    fn get_readonly(&self, list: &mut RangeList) {
        if let Some(space) = self.space.as_ref() {
            for (base, len) in self.mappings() {
                list.insert_range(Rc::clone(space), base, base + len.saturating_sub(1));
            }
        }
    }

    fn get_arch_type(&self) -> Vec<u8> {
        JVM_LANGUAGE.as_bytes().to_vec()
    }

    fn adjust_vma(&mut self, _adjust: i64) {}
}
