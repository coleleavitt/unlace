//! Binary format loader (ELF, PE, Mach-O) and debug-info extraction.
//!
//! This crate provides a [`Loader`] trait for parsing binary formats into a
//! uniform [`BinaryImage`] representation, plus concrete implementations
//! starting with [`ElfLoader`].

#[cfg(feature = "format-android")]
pub mod android_art;
#[cfg(feature = "format-android")]
pub mod android_boot;
#[cfg(feature = "unwired")]
pub mod archive;
#[cfg(feature = "unwired")]
pub mod btf;
#[cfg(feature = "unwired")]
pub mod compact_unwind;
#[cfg(feature = "unwired")]
pub mod sframe;
pub mod symcache;
pub mod symcache_fetch;
#[cfg(feature = "format-wasm")]
pub mod wasm_object;
#[cfg(feature = "format-xcoff")]
pub mod xcoff;
#[cfg(feature = "format-android")]
pub use android_boot::{
    AndroidBoot, AndroidBootError, android_boot_to_binary_image, parse_android_boot,
};
#[cfg(feature = "format-android")]
pub mod android_dex;
#[cfg(feature = "format-android")]
pub mod android_image;
#[cfg(feature = "format-android")]
pub mod android_oat;
#[cfg(feature = "format-android")]
pub mod android_vdex;
#[cfg(feature = "unwired")]
pub mod demangle_rust;
pub mod demangle_swift;
pub mod dwarf;
pub use dwarf::{DebugLocationResolver, import_dwarf_with_resolver};
#[cfg(feature = "unwired")]
pub mod dwarf_expr;
pub mod dyld_cache;
#[cfg(feature = "unwired")]
pub mod split_dwarf;
pub use dyld_cache::{
    ArmAuthKey, ArmAuthMeta, ChainedFixups, ChainedImport, DyldCache, DyldCacheCollection,
    DyldCacheHeader, ImageEntry, ImagePlan, Mapping, RebaseEntry, SegmentPlan, SubCacheEntry,
    parse_chained_fixups,
};

/// Quick magic-byte check: does `data` begin with the dyld shared cache
/// `dyld_v1` prefix? Lets callers route to [`DyldCache::parse`] without
/// allocating.
pub fn is_dyld_shared_cache(data: &[u8]) -> bool {
    data.len() >= 7 && &data[..7] == b"dyld_v1"
}
#[cfg(feature = "format-dotnet")]
pub mod dotnet_clr;
pub mod eh_frame;
pub mod elf;
pub mod error;
#[cfg(feature = "format-dotnet")]
pub use dotnet_clr::{
    CLR_MAGIC, ClrMetadata, ClrMethodDef, ClrTypeDef, Cor20Header, cil_to_binary_image, detect_clr,
    parse_clr_header, parse_cor20_header,
};
#[cfg(feature = "format-esp32")]
pub mod esp32_image;
#[cfg(feature = "format-esp32")]
pub use esp32_image::{
    Esp32Error, Esp32Image, Esp32Segment, esp32_to_binary_image, parse_esp32_image,
};
pub mod flirt;
pub mod gcc_except_table;
pub mod go_moduledata;
pub mod go_types;
pub mod gopclntab;
pub mod image;
#[cfg(feature = "unwired")]
pub mod intel_hex;
#[cfg(feature = "unwired")]
pub mod ios_img4;
#[cfg(feature = "format-java")]
pub mod java_class;
#[cfg(feature = "format-lua")]
pub mod lua_bytecode;
pub mod macho;
pub mod msvc_rtti;
pub mod objc;
pub mod packer_detect;
pub mod pdb;
pub mod pdb_types;
pub mod pe;
#[cfg(feature = "format-python")]
pub mod python_pyc;
#[cfg(feature = "format-python")]
pub use python_pyc::{PycError, PycFile, PycHeader, parse_pyc, parse_pyc_header};
pub mod rtti;
pub mod seh;
#[cfg(feature = "unwired")]
pub mod stm32_blob;
#[cfg(feature = "unwired")]
pub use stm32_blob::{
    Stm32DfuError, Stm32Image, parse_stm32_bin, parse_stm32_dfu, stm32_to_binary_image,
};
pub mod strings;
pub mod swift_metadata;
#[cfg(feature = "unwired")]
pub mod til;
#[cfg(feature = "unwired")]
pub mod ttd_trace;
#[cfg(feature = "unwired")]
pub mod uefi_module;
#[cfg(feature = "unwired")]
pub use uefi_module::{
    TE_MAGIC, TeImage, TeSection, UefiModule, UefiModuleKind, UefiSubsystem, detect_uefi_module,
    parse_te_image, te_to_binary_image,
};
#[cfg(feature = "unwired")]
pub mod apple_kernelcache;
#[cfg(feature = "unwired")]
pub mod dyld_mmap;
#[cfg(feature = "unwired")]
pub mod evm_solidity;
#[cfg(feature = "unwired")]
pub mod frida_bridge;
#[cfg(feature = "unwired")]
pub mod gdb_mi;
#[cfg(feature = "unwired")]
pub mod lldb_bridge;
#[cfg(feature = "unwired")]
pub mod minidump;
#[cfg(feature = "unwired")]
pub mod rr_trace;
pub mod wasm_component;
#[cfg(feature = "unwired")]
pub mod wasm_wit;
#[cfg(feature = "unwired")]
pub mod windbg_ttd;

pub use objc::{
    ObjcCategory, ObjcClass, ObjcInfo, ObjcIvar, ObjcMethod, ObjcProperty, scan_objc_categories,
    scan_objc_classlist,
};

#[cfg(feature = "format-android")]
pub use android_image::{art_to_binary_image, dex_to_binary_image, oat_to_binary_image};
pub use dwarf::{
    DebugLanguage, DwarfInfo, DwoRef, EnumType, FunctionDebugInfo, LocalVariable, MacroDefinition,
    ParameterInfo, SimpleLocation, SourceLocation, StructField, StructType, UnionType,
    evaluate_simple_location, import_dwarf, import_dwarf_with_sidecar,
};
pub use eh_frame::{EhFrameInfo, FunctionExtent, LsdaEntry, parse_eh_frame};
pub use elf::ElfLoader;
pub use error::LoadError;
pub use flirt::{
    FlirtDb, FlirtSignature, GeneratedSigPattern, SigGenerateError, SigGenerateOptions,
    default_db as default_flirt_db, generate_archive_patterns,
    generate_archive_patterns_from_bytes, render_patterns_toml,
};
pub use gcc_except_table::{FunctionLsda, GccExceptTableInfo, TryRegion, parse_gcc_except_table};
pub use image::{
    ArchId, AuthenticodeCertificate, BinaryImage, BoundImport, DebugRecord, DylibDep, DylibKind,
    Endian, LoadConfig, PeMitigations, RelocKind, Relocation, ResourceEntry, RichHeader,
    RichRecord, Section, SectionFlags, Symbol, SymbolKind, WIN_CERT_REVISION_1_0,
    WIN_CERT_REVISION_2_0, WIN_CERT_TYPE_PKCS_SIGNED_DATA, WIN_CERT_TYPE_RESERVED_1,
    WIN_CERT_TYPE_TS_STACK_SIGNED, WIN_CERT_TYPE_X509,
};
#[cfg(feature = "unwired")]
pub use intel_hex::{
    IntelHexError, IntelHexImage, SRecordError, SRecordImage, load_intel_hex, load_s_record,
};
#[cfg(feature = "unwired")]
pub use ios_img4::{Img4Container, Img4Error, img4_to_binary_image, is_img4, parse_img4};
#[cfg(feature = "format-java")]
pub use java_class::{
    JAVA_CLASS_MAGIC, JarClassEntry, JavaClass, JavaError, JavaField, JavaMethod, jar_list_classes,
    java_class_to_binary_image, parse_class,
};
#[cfg(feature = "format-lua")]
pub use lua_bytecode::{
    LuaBytecode, LuaChunkHeader, LuaConstant, LuaProto, LuaVersion, detect_lua, parse_chunk_header,
    parse_lua_bytecode,
};
pub use macho::MachoLoader;
pub use pdb::{PdbInfo, PdbLocal, import_pdb, merge_pdb_symbols};
pub use pdb_types::{
    CanonicalPdbType, PdbError, PdbField, PdbType, PdbTypeAlias, PdbTypeKind, PdbTypeUnification,
    PdbTypes, ProcSig, import_pdb_types, ipi_type_hash, unify_pdb_type_sets, walk_tpi,
};
pub use pe::PeLoader;
pub use rtti::{
    BaseClass, CppClass, InheritanceKind, RttiInfo, VtableLayout, VtableSlotKind, VtableSubtable,
    scan_rtti,
};
pub use swift_metadata::{
    SwiftBuiltinAsyncFunction, SwiftConformance, SwiftInfo, SwiftProtocolDescriptor,
    SwiftTypeDescriptor, scan_swift_metadata,
};
pub use wasm_component::{
    WasmCanonicalFunction, WasmComponentExport, WasmComponentImport, WasmComponentInfo,
    WasmComponentStart, WasmCoreExport, WasmCoreImport, WasmEncoding, WasmLoader,
    WasmNestedComponent, WasmNestedModule, WasmStartFunction,
};

/// Trait for binary format loaders.
///
/// Each implementation handles one format family (ELF, PE, Mach-O, etc.)
/// and produces a [`BinaryImage`] on success.
pub trait Loader {
    /// Returns `true` if `data` appears to be in this loader's format
    /// (typically by checking magic bytes).
    fn can_load(data: &[u8]) -> bool;

    /// Parse `data` into a [`BinaryImage`].
    ///
    /// # Errors
    ///
    /// Returns [`LoadError`] if the data is malformed or contains
    /// unsupported features.
    fn load(data: &[u8]) -> Result<BinaryImage, LoadError>;
}

#[cfg(test)]
mod top_tests {
    use super::*;

    #[test]
    fn is_dyld_shared_cache_recognises_magic() {
        assert!(is_dyld_shared_cache(b"dyld_v1   x86_64\0\0\0\0\0"));
        assert!(is_dyld_shared_cache(b"dyld_v1 \0"));
    }

    #[test]
    fn is_dyld_shared_cache_rejects_short_or_wrong_magic() {
        assert!(!is_dyld_shared_cache(b""));
        assert!(!is_dyld_shared_cache(b"dyld_v"));
        assert!(!is_dyld_shared_cache(b"\x7fELF\x02\x01\x01\x00"));
    }
}
