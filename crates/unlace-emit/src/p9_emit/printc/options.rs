//! The c-language printer options (`PrintCOptions`).

use super::*;

// ===========================================================================
// PrintC options (printc.hh:146-156, 242-255; printc.cc:1649-1664)
// ===========================================================================

/// The PrintC-specific options block (C++ `PrintC` `option_*` members,
/// printc.hh:146-156).
///
/// `resetDefaultsPrintC` (printc.cc:1649-1664) establishes the defaults; the
/// `set*` methods (printc.hh:242-255) are the toggles wired from the options.cc
/// `// STUB(W8)` markers (`PrintC::setNULLPrinting(val)` etc.).  The unlace
/// `arraynotation` toggle (printc.hh:250-251) and its DIV-2 default-on
/// (printc.cc:1658) are carried here.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PrintCOptions {
    /// Emit a `NULL` token for a null pointer (C++ `option_NULL`).
    pub null: bool,
    /// Use `+=` / `&=` etc. in-place operators (C++ `option_inplace_ops`).
    pub inplace_ops: bool,
    /// Print the calling convention (C++ `option_convention`).
    pub convention: bool,
    /// Do not print casts (C++ `option_nocasts`).
    pub nocasts: bool,
    /// Display unplaced comments (C++ `option_unplaced`).
    pub unplaced: bool,
    /// Hide implied extension operations (C++ `option_hide_exts`).
    pub hide_exts: bool,
    /// (unlace) Render standalone PTRADD as `&base[index]` rather than
    /// `base + index` (C++ `option_arraynotation`, printc.hh:152).
    pub array_notation: bool,
    /// (unlace) In boolean contexts (if/while/for/ternary conditions, `&&`/`||`/
    /// `!` operands), render `x != 0` as `x` and `x == 0` as `!x` (DIV-37,
    /// `option truthycond`).  Float compares, enum-typed and equate-named
    /// zeros are excluded; value contexts (`v = (x != 0)`) never normalize.
    pub truthy_cond: bool,
    /// (unlace) A single-statement if-body drops its braces and prints the
    /// statement indented on the next line (DIV-38, `option braceelide`).
    /// Copy-leaf single-statement bodies only; labels/comments keep braces.
    pub brace_elide: bool,
    /// (unlace) Warnings render as terse `// slug` end-of-line comments on the
    /// statement they describe instead of full `/* WARNING: ... */` banner
    /// lines (DIV-39, `option warnstyle inline|banner`).
    pub warn_inline: bool,
    /// (unlace) Only caveats print: narration of readability rewrites and the
    /// warnings a statement already states are left out (`option warnlevel
    /// caveats|all`, [`crate::warnlevel`]).
    pub warn_caveats: bool,
    /// Render unconditional C loops with the condition at the top.
    pub inf_loop_top: bool,
    /// Render supported mapped byte-array transfers with standard C helpers.
    pub bytearray_c: bool,
    /// (unlace) A partial access no member names renders as a typed pointer
    /// access instead of `name._<off>_<size>_` (`option partialaccess`).
    pub partial_access: bool,
    /// (unlace) Print the definitions of the composite/enum/typedef types this
    /// function's C names ABOVE the function (`option structdefs`).  See
    /// [`crate::structdefs`].
    pub struct_defs: bool,
    /// A project header carries the definitions omitted from each body.
    pub header_carries_types: bool,
    /// (unlace) A pointer-typed constant that addresses program data prints as
    /// `&dat_<addr>` rather than `(T *)0x<addr>` (`option globalref`).  See
    /// [`crate::globalref`].
    pub global_ref: bool,
    /// How function-declaration braces are formatted (C++ `option_brace_func`).
    pub brace_func: BraceStyle,
    /// How if/else-block braces are formatted (C++ `option_brace_ifelse`).
    pub brace_ifelse: BraceStyle,
    /// How loop-block braces are formatted (C++ `option_brace_loop`).
    pub brace_loop: BraceStyle,
    /// How switch-block braces are formatted (C++ `option_brace_switch`).
    pub brace_switch: BraceStyle,
}

impl Default for PrintCOptions {
    fn default() -> Self {
        Self::new()
    }
}

impl PrintCOptions {
    /// Construct with the `resetDefaultsPrintC` defaults (printc.cc:1649-1664).
    ///
    /// Note the unlace DIV-2 default-on `array_notation = true` (printc.cc:1658),
    /// the `&base[index]` form for a standalone PTRADD (GH-558), the unlace
    /// DIV-34 `brace_func = NextLine` (upstream `Emit::skip_line` leaves a blank
    /// line between the prototype and `{`; `option braceformat function skip`
    /// restores it), the unlace DIV-35 `null = true` (a zero pointer constant
    /// renders as `NULL`, not `(type *)0x0`; `option nullprinting off`
    /// restores the casted form), and the unlace DIV-36 `inplace_ops = true`
    /// (`out = out OP y` renders as `out OP= y` via the ported
    /// `emitInplaceOp`; `option inplaceops off` restores).
    pub fn new() -> PrintCOptions {
        PrintCOptions {
            convention: true,
            hide_exts: true,
            inplace_ops: true, // (unlace) DIV-36; upstream flag default off + never consumed
            nocasts: false,
            null: true, // (unlace) DIV-35; upstream option_NULL default off
            unplaced: false,
            array_notation: true, // (unlace) DIV-2 default-on (GH-558)
            truthy_cond: true,    // (unlace) DIV-37; no upstream equivalent
            brace_elide: true,    // (unlace) DIV-38; no upstream equivalent
            inf_loop_top: true,
            warn_inline: true,   // (unlace) DIV-39; no upstream equivalent
            warn_caveats: false, // (unlace) opt-in; no upstream equivalent
            bytearray_c: false,
            partial_access: true, // (unlace) `option partialaccess off` restores `name._<off>_<size>_`
            header_carries_types: false,
            struct_defs: false, // (unlace) no upstream equivalent; opt-in
            global_ref: true,   // (unlace) no upstream equivalent
            brace_func: BraceStyle::NextLine, // (unlace) DIV-34; upstream Emit::skip_line
            brace_ifelse: BraceStyle::SameLine, // Emit::same_line
            brace_loop: BraceStyle::SameLine, // Emit::same_line
            brace_switch: BraceStyle::SameLine, // Emit::same_line
        }
    }

    /// C++ `setNULLPrinting(val)` (printc.hh:242).
    pub fn set_null_printing(&mut self, val: bool) {
        self.null = val;
    }
    /// C++ `setInplaceOps(val)` (printc.hh:243).
    pub fn set_inplace_ops(&mut self, val: bool) {
        self.inplace_ops = val;
    }
    /// C++ `setConvention(val)` (printc.hh:244).
    pub fn set_convention(&mut self, val: bool) {
        self.convention = val;
    }
    /// C++ `setNoCastPrinting(val)` (printc.hh:245).
    pub fn set_no_cast_printing(&mut self, val: bool) {
        self.nocasts = val;
    }
    /// C++ `setDisplayUnplaced(val)` (printc.hh:248).
    pub fn set_display_unplaced(&mut self, val: bool) {
        self.unplaced = val;
    }
    /// C++ `setHideImpliedExts(val)` (printc.hh:249).
    pub fn set_hide_implied_exts(&mut self, val: bool) {
        self.hide_exts = val;
    }
    /// (unlace) C++ `setArrayNotation(val)` (printc.hh:250).
    pub fn set_array_notation(&mut self, val: bool) {
        self.array_notation = val;
    }
    /// (unlace) Toggle truthy condition rendering (`option truthycond`, DIV-37).
    pub fn set_truthy_cond(&mut self, val: bool) {
        self.truthy_cond = val;
    }
    /// (unlace) Current truthy-condition rendering flag.
    pub fn truthy_cond(&self) -> bool {
        self.truthy_cond
    }
    /// (unlace) Toggle single-statement if-body brace elision (`option
    /// braceelide`, DIV-38).
    pub fn set_brace_elide(&mut self, val: bool) {
        self.brace_elide = val;
    }
    /// (unlace) Current brace-elision flag.
    pub fn brace_elide(&self) -> bool {
        self.brace_elide
    }
    /// (unlace `structdefs`) Print the referenced type definitions above the
    /// function.
    pub fn set_struct_defs(&mut self, val: bool) {
        self.struct_defs = val;
    }
    /// (unlace `structdefs`) Is the per-function type-definition preamble on?
    pub fn struct_defs(&self) -> bool {
        self.struct_defs
    }
    /// (unlace `globalref`) Name constant addresses as the globals they point at.
    pub fn set_global_ref(&mut self, val: bool) {
        self.global_ref = val;
    }
    /// (unlace `globalref`) Current constant-address naming flag.
    pub fn global_ref(&self) -> bool {
        self.global_ref
    }
    /// (unlace) Toggle inline warning style (`option warnstyle`, DIV-39).
    pub fn set_warn_inline(&mut self, val: bool) {
        self.warn_inline = val;
    }
    /// (unlace) Current warning-style flag (true = inline `// slug`).
    pub fn warn_inline(&self) -> bool {
        self.warn_inline
    }
    /// (unlace) C++ `getArrayNotation()` (printc.hh:251).
    pub fn array_notation(&self) -> bool {
        self.array_notation
    }
    /// C++ `setBraceFormatFunction(style)` (printc.hh:252).
    pub fn set_brace_format_function(&mut self, style: BraceStyle) {
        self.brace_func = style;
    }
    /// C++ `setBraceFormatIfElse(style)` (printc.hh:253).
    pub fn set_brace_format_ifelse(&mut self, style: BraceStyle) {
        self.brace_ifelse = style;
    }
    /// C++ `setBraceFormatLoop(style)` (printc.hh:254).
    pub fn set_brace_format_loop(&mut self, style: BraceStyle) {
        self.brace_loop = style;
    }
    /// C++ `setBraceFormatSwitch(style)` (printc.hh:255).
    pub fn set_brace_format_switch(&mut self, style: BraceStyle) {
        self.brace_switch = style;
    }
}
