//! `PrintEmit`, the static emit back-end selector.

use super::*;

/// The low-level [`Emit`] back-end `PrintC` drives, selected between the
/// byte-exact plain-text sink ([`EmitNoMarkup`], the `print C` datatest path)
/// and the packed clang token-markup sink ([`EmitMarkup`], the ghidra-mode
/// `decompileAt` `<function>` document).
///
/// C++ swaps a heap `Emit *lowlevel` in `EmitPrettyPrint::setMarkup`
/// (prettyprint.cc:2531); this port holds the two back-ends in a concrete enum
/// so every one of the ~260 `self.emit.<method>()` call sites in `PrintC` stays
/// a **static** call that matches on the active variant — no `Box<dyn Emit>`,
/// no vtable on the hot path (the standalone datatest path is always
/// `NoMarkup`).  Mirrors the [`crate::prettyprint::LowLevel`] precedent
/// (prettyprint.rs:1740) but delegates the FULL `Emit` surface by static match
/// rather than through a `&mut dyn Emit` re-dispatch.
///
/// The delegation MUST cover every `Emit` method — required AND
/// default-provided — because [`EmitNoMarkup`] overrides `tag_line`
/// (pending-brace absorption, prettyprint.rs:603) and `clear`: a method left to
/// fall through to a `PrintEmit` trait default would silently diverge the
/// byte-exact `print C` output the 675 datatests pin.
#[derive(Debug)]
pub enum PrintEmit {
    /// The plain-text back-end (`print C`, the byte-exact datatest path).
    NoMarkup(EmitNoMarkup),
    /// The packed clang token-markup back-end (ghidra-mode `decompileAt`).
    Markup(EmitMarkup),
    /// The line-breaking printer over the plain-text back-end, active once
    /// `option maxlinewidth` sets a line size.
    Pretty(Box<EmitPrettyPrint>),
}

/// Forward one [`Emit`] call to whichever [`PrintEmit`] variant is active — the
/// static match that stands in for C++'s `Emit *` vtable dispatch.
macro_rules! pe_forward {
    ($self:ident . $method:ident ( $($arg:expr_2021),* )) => {
        match $self {
            PrintEmit::NoMarkup(e) => e.$method($($arg),*),
            PrintEmit::Markup(e) => e.$method($($arg),*),
            PrintEmit::Pretty(e) => e.$method($($arg),*),
        }
    };
}

impl PrintEmit {
    /// The plain-text sink, directly or under the line-breaking printer.
    pub(super) fn plain_mut(&mut self) -> Option<&mut EmitNoMarkup> {
        match self {
            PrintEmit::NoMarkup(e) => Some(e),
            PrintEmit::Pretty(e) => match e.lowlevel_mut() {
                LowLevel::NoMarkup(s) => Some(s),
                LowLevel::Markup(_) => None,
            },
            PrintEmit::Markup(_) => None,
        }
    }
    /// Reset the active back-end's output buffer (C++ `Emit::setOutputStream`),
    /// dispatched to the concrete leaf (both leaves clear their owned sink).
    /// Type-divergent (not on the [`Emit`] trait): the leaves' sinks differ.
    pub fn set_output_stream(&mut self) {
        match self {
            PrintEmit::Markup(e) => e.set_output_stream(),
            _ => {
                if let Some(s) = self.plain_mut() {
                    s.set_output_stream();
                }
            }
        }
    }
    /// Borrow the accumulated plain text (the `EmitNoMarkup` standalone
    /// `doc_function_full` return).  The markup leaf holds packed bytes, not
    /// text, so it yields `""` (mirrors [`crate::prettyprint::LowLevel::output`]).
    pub fn output_str(&self) -> &str {
        match self {
            PrintEmit::NoMarkup(e) => e.output(),
            PrintEmit::Markup(_) => "",
            PrintEmit::Pretty(e) => e.output(),
        }
    }
    /// Take ownership of the accumulated packed markup bytes (the `EmitMarkup`
    /// `doc_function_markup` return); empty on the plain-text leaf.
    pub fn take_markup_bytes(&mut self) -> Vec<u8> {
        match self {
            PrintEmit::Markup(e) => e.take_output(),
            _ => Vec::new(),
        }
    }
    /// Take the structured associations captured by the markup leaf.
    pub fn take_markup_provenance(&mut self) -> MarkupProvenance {
        match self {
            PrintEmit::Markup(e) => e.take_provenance(),
            _ => MarkupProvenance::default(),
        }
    }
    /// Take the root statement associations captured by the plain-text leaf.
    pub fn take_plain_statement_provenance(&mut self) -> MarkupProvenance {
        self.plain_mut()
            .map(|e| e.take_statement_provenance())
            .unwrap_or_default()
    }
    /// Enable or disable the plain-text statement-root sidecar.
    pub fn set_plain_statement_provenance(&mut self, val: bool) {
        if let Some(e) = self.plain_mut() {
            e.set_capture_statement_provenance(val);
        }
    }
    /// Enable or disable token capture on the markup leaf.
    pub fn set_capture_tokens(&mut self, val: bool) {
        if let PrintEmit::Markup(e) = self {
            e.set_capture_tokens(val);
        }
    }
    /// Take the tokens captured by the markup leaf.
    pub fn take_markup_tokens(&mut self) -> Vec<crate::prettyprint::EmitToken> {
        match self {
            PrintEmit::Markup(e) => e.take_tokens(),
            _ => Vec::new(),
        }
    }
    /// How many tokens the markup leaf has captured; `0` on any other leaf.
    pub fn token_count(&self) -> usize {
        match self {
            PrintEmit::Markup(e) => e.token_count(),
            _ => 0,
        }
    }
    /// Take the structural marks captured by the markup leaf.
    pub fn take_markup_marks(&mut self) -> Vec<crate::prettyprint::CaptureMark> {
        match self {
            PrintEmit::Markup(e) => e.take_marks(),
            _ => Vec::new(),
        }
    }
    /// Whether the plain-text statement-root sidecar is active.
    pub fn captures_plain_statement_provenance(&self) -> bool {
        match self {
            PrintEmit::NoMarkup(e) => e.captures_statement_provenance(),
            PrintEmit::Pretty(e) => match e.lowlevel() {
                LowLevel::NoMarkup(s) => s.captures_statement_provenance(),
                LowLevel::Markup(_) => false,
            },
            PrintEmit::Markup(_) => false,
        }
    }
}

// The FULL `Emit` surface (prettyprint.rs:235-492), each method static-delegated
// to the active leaf.  Required AND default-provided methods are ALL forwarded
// so no call can fall through to a `PrintEmit` default that would diverge from
// the leaf (`EmitNoMarkup` overrides `tag_line`/`clear`; see the type doc).
// The statement and brace calls also keep the dangling-label record
// (`unlace_labelstmt`).
impl Emit for PrintEmit {
    fn state(&self) -> &EmitBase {
        pe_forward!(self.state())
    }
    fn state_mut(&mut self) -> &mut EmitBase {
        pe_forward!(self.state_mut())
    }

    fn begin_document(&mut self) -> int4 {
        pe_forward!(self.begin_document())
    }
    fn end_document(&mut self, id: int4) {
        pe_forward!(self.end_document(id))
    }
    fn begin_function(&mut self) -> int4 {
        self.state_mut().dangling_label = false;
        pe_forward!(self.begin_function())
    }
    fn end_function(&mut self, id: int4) {
        pe_forward!(self.end_function(id))
    }
    fn begin_block(&mut self, blockref: int4) -> int4 {
        pe_forward!(self.begin_block(blockref))
    }
    fn end_block(&mut self, id: int4) {
        pe_forward!(self.end_block(id))
    }

    fn tag_line(&mut self) {
        pe_forward!(self.tag_line())
    }
    fn tag_line_indent(&mut self, indent: int4) {
        pe_forward!(self.tag_line_indent(indent))
    }

    fn begin_return_type(&mut self, markup: &MarkupRef) -> int4 {
        pe_forward!(self.begin_return_type(markup))
    }
    fn end_return_type(&mut self, id: int4) {
        pe_forward!(self.end_return_type(id))
    }
    fn begin_var_decl(&mut self, markup: &MarkupRef) -> int4 {
        pe_forward!(self.begin_var_decl(markup))
    }
    fn end_var_decl(&mut self, id: int4) {
        pe_forward!(self.end_var_decl(id))
    }
    fn begin_statement(&mut self, markup: &MarkupRef) -> int4 {
        self.state_mut().dangling_label = false;
        pe_forward!(self.begin_statement(markup))
    }
    fn end_statement(&mut self, id: int4) {
        pe_forward!(self.end_statement(id))
    }
    fn begin_func_proto(&mut self) -> int4 {
        pe_forward!(self.begin_func_proto())
    }
    fn end_func_proto(&mut self, id: int4) {
        pe_forward!(self.end_func_proto(id))
    }

    fn tag_variable(&mut self, name: &str, hl: SyntaxHighlight, markup: &MarkupRef) {
        pe_forward!(self.tag_variable(name, hl, markup))
    }
    fn tag_op(&mut self, name: &str, hl: SyntaxHighlight, markup: &MarkupRef) {
        pe_forward!(self.tag_op(name, hl, markup))
    }
    fn tag_func_name(&mut self, name: &str, hl: SyntaxHighlight, markup: &MarkupRef) {
        pe_forward!(self.tag_func_name(name, hl, markup))
    }
    fn tag_type(&mut self, name: &str, hl: SyntaxHighlight, markup: &MarkupRef) {
        pe_forward!(self.tag_type(name, hl, markup))
    }
    fn tag_field(&mut self, name: &str, hl: SyntaxHighlight, off: int4, markup: &MarkupRef) {
        pe_forward!(self.tag_field(name, hl, off, markup))
    }
    fn tag_bit_field(&mut self, name: &str, hl: SyntaxHighlight, id: int4, markup: &MarkupRef) {
        pe_forward!(self.tag_bit_field(name, hl, id, markup))
    }
    fn tag_comment(
        &mut self,
        name: &str,
        hl: SyntaxHighlight,
        spc: &std::rc::Rc<AddrSpace>,
        off: uintb,
    ) {
        pe_forward!(self.tag_comment(name, hl, spc, off))
    }
    fn tag_label(
        &mut self,
        name: &str,
        hl: SyntaxHighlight,
        spc: &std::rc::Rc<AddrSpace>,
        off: uintb,
    ) {
        pe_forward!(self.tag_label(name, hl, spc, off))
    }
    fn tag_case_label(
        &mut self,
        name: &str,
        hl: SyntaxHighlight,
        markup: &MarkupRef,
        value: uintb,
    ) {
        pe_forward!(self.tag_case_label(name, hl, markup, value))
    }
    fn print(&mut self, data: &str, hl: SyntaxHighlight) {
        pe_forward!(self.print(data, hl))
    }

    fn open_paren(&mut self, paren: &str, id: int4) -> int4 {
        pe_forward!(self.open_paren(paren, id))
    }
    fn close_paren(&mut self, paren: &str, id: int4) {
        pe_forward!(self.close_paren(paren, id))
    }
    fn open_group(&mut self) -> int4 {
        pe_forward!(self.open_group())
    }
    fn close_group(&mut self, id: int4) {
        pe_forward!(self.close_group(id))
    }
    fn clear(&mut self) {
        pe_forward!(self.clear())
    }
    fn set_markup(&mut self, val: bool) {
        pe_forward!(self.set_markup(val))
    }
    fn set_packed_output(&mut self, val: bool) {
        pe_forward!(self.set_packed_output(val))
    }
    fn start_indent(&mut self) -> int4 {
        pe_forward!(self.start_indent())
    }
    fn stop_indent(&mut self, id: int4) {
        pe_forward!(self.stop_indent(id))
    }
    fn start_comment(&mut self) -> int4 {
        pe_forward!(self.start_comment())
    }
    fn stop_comment(&mut self, id: int4) {
        pe_forward!(self.stop_comment(id))
    }
    fn flush(&mut self) -> UnlaceResult<()> {
        pe_forward!(self.flush())
    }
    fn set_max_line_size(&mut self, mls: int4) -> UnlaceResult<()> {
        pe_forward!(self.set_max_line_size(mls))
    }
    fn get_max_line_size(&self) -> int4 {
        pe_forward!(self.get_max_line_size())
    }
    fn set_comment_fill(&mut self, fill: &str) {
        pe_forward!(self.set_comment_fill(fill))
    }
    fn emits_markup(&self) -> bool {
        pe_forward!(self.emits_markup())
    }
    fn reset_defaults(&mut self) {
        pe_forward!(self.reset_defaults())
    }

    fn get_paren_level(&self) -> int4 {
        pe_forward!(self.get_paren_level())
    }
    fn get_indent_increment(&self) -> int4 {
        pe_forward!(self.get_indent_increment())
    }
    fn set_indent_increment(&mut self, val: int4) {
        pe_forward!(self.set_indent_increment(val))
    }
    fn spaces(&mut self, num: int4, bump: int4) {
        pe_forward!(self.spaces(num, bump))
    }
    fn open_brace_indent(&mut self, brace: &str, style: EmitBraceStyle) -> int4 {
        self.state_mut().dangling_label = false;
        pe_forward!(self.open_brace_indent(brace, style))
    }
    fn open_brace(&mut self, brace: &str, style: EmitBraceStyle) {
        self.state_mut().dangling_label = false;
        pe_forward!(self.open_brace(brace, style))
    }
    fn close_brace_indent(&mut self, brace: &str, id: int4) {
        self.settle_dangling_label();
        pe_forward!(self.close_brace_indent(brace, id))
    }
    fn set_pending_brace(&mut self, style: EmitBraceStyle) {
        pe_forward!(self.set_pending_brace(style))
    }
    fn has_pending_brace(&self) -> bool {
        pe_forward!(self.has_pending_brace())
    }
    fn cancel_pending_brace(&mut self) {
        pe_forward!(self.cancel_pending_brace())
    }
    fn pending_brace_indent_id(&self) -> int4 {
        pe_forward!(self.pending_brace_indent_id())
    }
    fn emit_pending(&mut self) {
        pe_forward!(self.emit_pending())
    }
}

// ===========================================================================
// PrintC — the stateful c-language printer object (the `glb->print` the
// `Architecture` owns).  (w9x-arch-engine-glue)
// ===========================================================================

/// Convert an `options::BraceStyle` (the PrintC-option enum) to the
/// `prettyprint::BraceStyle` the [`Emit`] driver consumes.  Both are the same
/// 3-variant `same_line`/`next_line`/`skip_line` enum (printc.hh:252-255 vs
/// emit.hh); the conversion is the identity mapping.
#[doc(hidden)]
pub fn to_emit_brace(style: BraceStyle) -> EmitBraceStyle {
    match style {
        BraceStyle::SameLine => EmitBraceStyle::SameLine,
        BraceStyle::NextLine => EmitBraceStyle::NextLine,
        BraceStyle::SkipLine => EmitBraceStyle::SkipLine,
    }
}
