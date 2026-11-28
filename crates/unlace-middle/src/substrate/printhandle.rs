//! (unlace) The printer an `Architecture` owns, as the core sees it.
//!
//! `Architecture` holds its output-language printer as a [`PrintHandle`]: the core reads the
//! output language and the printer's name, resets its context and forwards the print options
//! through it, without naming the concrete C printer, which lives in the emit band
//! (`p9_emit/printc/` implements this trait for `PrintC` and lends the concrete type through
//! `printc::ArchPrintExt`). A fresh printer comes from the `printer_new` and `printer_default`
//! pass hooks.

use unlace_base::error::UnlaceResult;
use unlace_base::types::{int4, uint4};

/// The printer operations the core drives.
pub trait PrintHandle: std::any::Any {
    /// The printer's language name (C++ `PrintLanguage::getName`).
    fn get_name(&self) -> &str;
    /// Select the output language by name.
    fn set_name(&mut self, name: &str);
    /// The output language the printer renders.
    fn out_lang(&self) -> crate::outlang::OutLang;
    /// Reset the printing context and the wire-visible print options to their defaults.
    fn reset_wire_defaults(&mut self);
    /// The header and per-instruction comment-type masks, combined.
    fn comment_filter(&self) -> u32;
    /// C++ `PrintLanguage::initializeFromArchitecture`.
    fn initialize_from_architecture(&mut self);
    fn set_null_printing(&mut self, val: bool);
    fn set_inplace_ops(&mut self, val: bool);
    fn set_convention_printing(&mut self, val: bool);
    fn set_no_cast_printing(&mut self, val: bool);
    fn set_hide_implied_exts(&mut self, val: bool);
    fn set_max_line_size(&mut self, val: int4) -> UnlaceResult<()>;
    fn set_indent_increment(&mut self, val: int4);
    fn set_line_comment_indent(&mut self, val: int4) -> UnlaceResult<()>;
    fn set_comment_style(&mut self, style: &str);
    fn header_comment_flags(&self) -> uint4;
    fn set_header_comment_flags(&mut self, flags: uint4);
    fn instruction_comment_flags(&self) -> uint4;
    fn set_instruction_comment_flags(&mut self, flags: uint4);
    fn set_integer_format(&mut self, fmt: &str) -> UnlaceResult<()>;
    fn set_namespace_strategy(&mut self, strategy: crate::options::NamespaceStrategy);
    fn set_brace_format(
        &mut self,
        category: crate::options::BraceCategory,
        style: crate::options::BraceStyle,
    );
    /// The printer by its concrete type.
    fn as_any(&self) -> &dyn std::any::Any;
    /// The printer by its concrete type, for writing.
    fn as_any_mut(&mut self) -> &mut dyn std::any::Any;
}
