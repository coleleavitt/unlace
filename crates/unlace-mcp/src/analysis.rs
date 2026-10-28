//! Blocking, in-process analysis behind each MCP tool, returning typed results.

use std::borrow::Cow;
use std::collections::BTreeMap;
use std::path::Path;
use std::str::FromStr;

use anyhow::{Context, Result};
use schemars::{JsonSchema, Schema, SchemaGenerator, json_schema};
use serde::{Serialize, Serializer};
use unlace_cli::annotations;
use unlace_cli::args::EmitFormat;
use unlace_cli::decompiler::Decompiler;
use unlace_cli::ir_dump::{self, IrDumpPhase};
use unlace_cli::load::open_image;
use unlace_cli::pipeline::{self, FlirtConfig, FlirtOptions, FunctionEntry, PipelineConfig};
use unlace_cli::xrefs::instruction_xrefs;
use unlace_ir::xref::InstructionXref;
use unlace_loader::{BinaryImage, Endian, RelocKind, SectionFlags};

/// A virtual address, rendered as `0x…` hex so 64-bit values survive JSON
/// number precision.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct Address(pub u64);

impl Serialize for Address {
    fn serialize<S: Serializer>(&self, serializer: S) -> Result<S::Ok, S::Error> {
        serializer.collect_str(&format_args!("{:#x}", self.0))
    }
}

impl JsonSchema for Address {
    fn schema_name() -> Cow<'static, str> {
        "Address".into()
    }

    fn json_schema(_: &mut SchemaGenerator) -> Schema {
        json_schema!({
            "type": "string",
            "pattern": "^0x[0-9a-f]+$",
            "description": "Virtual address in lowercase hex",
        })
    }
}

impl FromStr for Address {
    type Err = std::num::ParseIntError;

    /// Accepts `0x`/`0X`-prefixed hex or plain decimal.
    fn from_str(s: &str) -> Result<Self, Self::Err> {
        let s = s.trim();
        match s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
            Some(hex) => u64::from_str_radix(hex, 16),
            None => s.parse(),
        }
        .map(Address)
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, JsonSchema)]
#[serde(rename_all = "snake_case")]
pub enum ByteOrder {
    Little,
    Big,
}

impl From<Endian> for ByteOrder {
    fn from(endian: Endian) -> Self {
        match endian {
            Endian::Little => Self::Little,
            Endian::Big => Self::Big,
        }
    }
}

#[derive(Debug, Serialize, JsonSchema)]
pub struct SectionInfo {
    pub name: String,
    pub address: Address,
    pub size: u64,
    pub readable: bool,
    pub writable: bool,
    pub executable: bool,
}

#[derive(Debug, Serialize, JsonSchema)]
pub struct BinaryInfo {
    pub arch: String,
    pub byte_order: ByteOrder,
    pub entry: Address,
    pub image_base: Option<Address>,
    pub sections: Vec<SectionInfo>,
    pub symbol_count: usize,
    pub relocation_count: usize,
    /// Functions unlace discovers and would decompile.
    pub function_count: usize,
}

#[derive(Clone, Debug, PartialEq, Eq, Serialize, JsonSchema)]
pub struct FunctionInfo {
    pub name: String,
    pub address: Address,
    pub size: u64,
}

impl From<&FunctionEntry> for FunctionInfo {
    fn from(entry: &FunctionEntry) -> Self {
        Self {
            name: entry.name.clone(),
            address: Address(entry.addr),
            size: entry.size,
        }
    }
}

#[derive(Debug, Serialize, JsonSchema)]
pub struct FunctionList {
    pub functions: Vec<FunctionInfo>,
}

#[derive(Debug, Serialize, JsonSchema)]
pub struct Decompilation {
    /// The functions matched by the request, in output order.
    pub functions: Vec<FunctionInfo>,
    /// Pseudo-C, byte-identical to `unlace decompile --function <f>`.
    pub code: String,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, JsonSchema)]
#[serde(rename_all = "snake_case")]
pub enum XrefKind {
    Call,
    Branch,
}

impl From<unlace_ir::xref::XrefKind> for XrefKind {
    fn from(kind: unlace_ir::xref::XrefKind) -> Self {
        match kind {
            unlace_ir::xref::XrefKind::Call => Self::Call,
            unlace_ir::xref::XrefKind::Branch => Self::Branch,
        }
    }
}

#[derive(Debug, PartialEq, Eq, Serialize, JsonSchema)]
pub struct Xref {
    pub from: Address,
    /// The discovered function containing `from`.
    pub from_function: Option<String>,
    pub to: Address,
    /// The discovered function starting at `to`.
    pub to_function: Option<String>,
    pub kind: XrefKind,
}

#[derive(Debug, Serialize, JsonSchema)]
pub struct XrefsFrom {
    pub address: Address,
    pub xrefs: Vec<Xref>,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Serialize, JsonSchema)]
#[serde(rename_all = "snake_case")]
pub enum RelocationKind {
    PltJumpSlot,
    GlobDat,
    Relative,
    Other,
}

impl From<RelocKind> for RelocationKind {
    fn from(kind: RelocKind) -> Self {
        match kind {
            RelocKind::PltJumpSlot => Self::PltJumpSlot,
            RelocKind::GlobDat => Self::GlobDat,
            RelocKind::Relative => Self::Relative,
            RelocKind::Other => Self::Other,
        }
    }
}

#[derive(Debug, PartialEq, Eq, Serialize, JsonSchema)]
pub struct RelocationInfo {
    pub symbol: String,
    pub kind: RelocationKind,
}

#[derive(Debug, Serialize, JsonSchema)]
pub struct XrefsTo {
    pub address: Address,
    pub xrefs: Vec<Xref>,
    /// Relocations that patch the slot at `address` (GOT/PLT entries).
    pub relocations: Vec<RelocationInfo>,
}

pub fn binary_info(path: &Path) -> Result<BinaryInfo> {
    let image = open_image(path)?;
    let functions = pipeline::discover_functions(&image, None)?;
    Ok(BinaryInfo {
        arch: image.arch.to_string(),
        byte_order: image.endian.into(),
        entry: Address(image.entry),
        image_base: image.image_base.map(Address),
        sections: image
            .sections
            .iter()
            .map(|section| SectionInfo {
                name: section.name.clone(),
                address: Address(section.vaddr),
                size: section.size,
                readable: section.flags.contains(SectionFlags::READ),
                writable: section.flags.contains(SectionFlags::WRITE),
                executable: section.flags.contains(SectionFlags::EXEC),
            })
            .collect(),
        symbol_count: image.symbols.len(),
        relocation_count: image.relocations.len(),
        function_count: functions.len(),
    })
}

pub fn list_functions(path: &Path) -> Result<FunctionList> {
    let image = open_image(path)?;
    let functions = pipeline::discover_functions(&image, None)?;
    Ok(FunctionList {
        functions: functions.iter().map(FunctionInfo::from).collect(),
    })
}

/// Decompile the functions matching `function` (a name or entry address)
/// exactly as `unlace decompile --emit c --function <function>` does.
pub fn decompile_function(path: &Path, function: &str) -> Result<Decompilation> {
    let image = open_image(path)?;
    let config = PipelineConfig {
        annotations: annotations::load_default(path)?,
        flirt: FlirtConfig::from_options(FlirtOptions::default())?,
        ..PipelineConfig::default()
    };
    let decompiler = Decompiler::prepare(&image, Some(function), &config)?;
    Ok(Decompilation {
        functions: decompiler
            .functions()
            .iter()
            .map(FunctionInfo::from)
            .collect(),
        code: decompiler.decompile_all(EmitFormat::C),
    })
}

pub fn ir_dump_function(path: &Path, function: &str, phase: Option<&str>) -> Result<String> {
    let phase = phase
        .map(str::parse::<IrDumpPhase>)
        .transpose()?
        .unwrap_or_default();
    let image = open_image(path)?;
    ir_dump::dump_functions(&image, Some(function), phase)
}

/// Direct edges whose source is the instruction at `address`; when `address`
/// is a function entry, every edge whose source lies in that function.
pub fn xrefs_from(path: &Path, address: Address) -> Result<XrefsFrom> {
    let image = open_image(path)?;
    let index = FunctionIndex::discover(&image)?;
    let scope = index.starting_at(address.0);
    let xrefs = instruction_xrefs(&image)?
        .into_iter()
        .filter(|xref| match scope {
            Some(entry) => entry.contains(xref.from),
            None => xref.from == address.0,
        })
        .map(|xref| index.describe(xref))
        .collect();
    Ok(XrefsFrom { address, xrefs })
}

/// Direct edges targeting `address`, plus relocations patching that slot.
pub fn xrefs_to(path: &Path, address: Address) -> Result<XrefsTo> {
    let image = open_image(path)?;
    let index = FunctionIndex::discover(&image)?;
    let xrefs = instruction_xrefs(&image)?
        .into_iter()
        .filter(|xref| xref.to == address.0)
        .map(|xref| index.describe(xref))
        .collect();
    let relocations = image
        .relocations_at(address.0)
        .map(|reloc| RelocationInfo {
            symbol: reloc.sym_name.clone(),
            kind: reloc.kind.into(),
        })
        .collect();
    Ok(XrefsTo {
        address,
        xrefs,
        relocations,
    })
}

/// Discovered functions keyed by entry address, for naming xref endpoints.
struct FunctionIndex(BTreeMap<u64, FunctionEntry>);

impl FunctionIndex {
    fn discover(image: &BinaryImage) -> Result<Self> {
        let functions = pipeline::discover_functions(image, None)
            .context("discovering functions for xref naming")?;
        Ok(Self(
            functions
                .into_iter()
                .map(|entry| (entry.addr, entry))
                .collect(),
        ))
    }

    fn starting_at(&self, addr: u64) -> Option<&FunctionEntry> {
        self.0.get(&addr)
    }

    fn containing(&self, addr: u64) -> Option<&FunctionEntry> {
        self.0
            .range(..=addr)
            .next_back()
            .map(|(_, entry)| entry)
            .filter(|entry| entry.contains(addr))
    }

    fn describe(&self, xref: InstructionXref) -> Xref {
        Xref {
            from: Address(xref.from),
            from_function: self.containing(xref.from).map(|entry| entry.name.clone()),
            to: Address(xref.to),
            to_function: self.starting_at(xref.to).map(|entry| entry.name.clone()),
            kind: xref.kind.into(),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn address_parses_hex_and_decimal() {
        assert_eq!("0x1010".parse::<Address>().unwrap(), Address(0x1010));
        assert_eq!("0X1010".parse::<Address>().unwrap(), Address(0x1010));
        assert_eq!("4112".parse::<Address>().unwrap(), Address(4112));
        assert_eq!(" 0x10 ".parse::<Address>().unwrap(), Address(0x10));
        assert!("main".parse::<Address>().is_err());
        assert!("0x".parse::<Address>().is_err());
    }

    #[test]
    fn address_serializes_as_lowercase_hex() {
        let json = serde_json::to_string(&Address(0xDEAD_BEEF)).unwrap();
        assert_eq!(json, "\"0xdeadbeef\"");
    }
}
