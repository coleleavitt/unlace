//! Port of `decompiler/cpp/printc.{cc,hh}` — the c-language token emitter
//! (`PrintC`), the concrete `PrintLanguage` back-end the M2/M3 datatests
//! string-match against.
//!
//! ## What this module ports faithfully *now*
//!
//! `PrintC` is a 3.9k-line subclass of `PrintLanguage`.  As of the
//! `w10-printc-body` item the **`PrintLanguage` RPN driver** (`pushOp`/
//! `pushAtom`/`pushVn`/`recurse`/`emitOp`/`emitAtom`/`opBinary`/`opUnary`/
//! `parentheses`, printlanguage.cc:129-580) is **ported here** (the
//! `impl PrintC` RPN-driver block) and drives the real `Emit` low-level driver
//! ([`crate::prettyprint`]'s `EmitNoMarkup`).  It is byte-faithfully
//! unit-tested against the C++ `emitOp`/`emitAtom`/`parentheses` logic (the
//! `rpn_*` tests).
//!
//! What still cannot be driven over a real function body is the IR-coupled leaf
//! of the driver — `recurse`'s implied-op `defOp->getOpcode()->push(...)`
//! dispatch and `pushVnExplicit`'s Symbol/HighVariable/Datatype/constant
//! resolution — together with the structured-/flat-block walk (`emitBlock*`,
//! printc.cc:2827-3514) and the real-prototype signature.  These are blocked
//! **upstream of the printer**: the merged tree's decompilation passes
//! (heritage / simplification / merge / type + proto recovery / block
//! structuring) are stubs, so the IR reaching the printer is *raw lifted
//! p-code* (no HighVariables-with-symbols, no recovered types, **empty
//! `sblocks`**, a `void NAME(void)` proto stub).  Printing it would emit non-C
//! garbage, not byte-parity.  Those edges are `// STUB(decompile-passes)`
//! (LOSS-130 / W10) and fall to the upstream pass items; the RPN engine they
//! feed is in place.  The parity gate `tests/printc_parity.rs` measures this
//! honestly: it decompiles + prints >= 8 corpus functions and byte-compares
//! each against the C++ oracle, reporting the (upstream-bounded) match count.
//!
//! What **is** ported faithfully here, and is what this module's tests exercise:
//!
//!   1. **The operator-token table** ([`tokens`]) — every `PrintC::*` `OpToken`
//!      static (printc.cc:24-78) with its exact precedence / associativity /
//!      token-type / spacing / bump, plus the negate cross-links
//!      (printc.cc:130-135) realized as [`token_negate`].  This is *the*
//!      precedence/parenthesization data that drives [`crate::printlanguage::parentheses`]
//!      — the print-fidelity-critical decision.
//!   2. **The keyword / punctuation constants** ([`keywords`], printc.cc:80-104).
//!   3. **`PrintCCapability`** registration metadata ([`CAPABILITY_NAME`],
//!      [`CAPABILITY_IS_DEFAULT`], printc.cc:109-114).
//!   4. **The PrintC options** ([`PrintCOptions`]) — the option fields, the
//!      `resetDefaultsPrintC` defaults (printc.cc:1649-1664, including the unlace
//!      DIV-2 default-on `option_arraynotation`), and the `set*` toggles
//!      (printc.hh:242-255).  These are the PrintC side of the options.cc
//!      `// STUB(W8)` markers (`setNULLPrinting`/`setInplaceOps`/… on the
//!      print object).
//!   5. **The self-contained constant/type formatting** — the byte-for-byte
//!      token-string builders that the M2/M3 datatests match:
//!      [`print_char_hex_escape`] (printc.cc:1580-1591), [`print_unicode`]
//!      (printc.cc:1494-1538), [`format_integer_token`] (the
//!      `push_integer` string body, printc.cc:1407-1434), [`format_float_token`]
//!      (the `push_float` string body, printc.cc:1449-1492, the cfmt `%g`
//!      path), [`generic_type_name`] (printc.cc:3532-3558), and
//!      [`generic_function_name`] (printc.cc:3516-3526).
//!   6. **The opcode→token dispatch** ([`op_emit_kind`]) — the data half of the
//!      inline `op*` overrides (printc.hh:289-351): which [`OpToken`] each
//!      arithmetic/comparison op maps to and through which RPN form
//!      (`opBinary`/`opUnary`/`opFunc`/`opTypeCast`).  The *emission* is the
//!      stub; the *mapping* is faithful data.
//!
//! ## Compareform / arraynotation unlace hooks
//!
//! The unlace `compareform` rendering hook and the `arraynotation` `&base[index]`
//! mode are both controlled from here: `arraynotation` is the
//! [`PrintCOptions::array_notation`] toggle (default on, DIV-2), consulted by
//! the `opPtradd` body; `compareform` is a stage-model assertion that
//! flips which comparison `OpToken` `op_emit_kind` selects (present vs.
//! canonical).  The toggle state lives here; the emission that reads it is the
//! W9 stub.

use crate::funcdata_facing::FuncdataFacingExt;
use crate::funcdata_spacebase::FuncdataSpacebaseExt;
use crate::funcdata_union::FuncdataUnionExt;
use crate::lang::OutLangExt;
use unlace_base::address::{Address, calc_mask};
use unlace_base::error::UnlaceResult;
use unlace_base::space::AddrSpace;
use unlace_base::types::{int4, int8, uint4, uintb};

use crate::architecture::Architecture;
use crate::cast::{CastContext, CastStrategy, CastStrategyC, OpRef, VnRef};
use crate::context::{BlockId, OpId, VarnodeId};
use crate::dtype::type_metatype;
use crate::funcdata::Funcdata;
use crate::options::{BraceStyle, NamespaceStrategy};
use crate::prettyprint::{
    BraceStyle as EmitBraceStyle, Emit, EmitBase, EmitMarkup, EmitNoMarkup, EmitPrettyPrint,
    LowLevel, MarkupProvenance, MarkupRef, SyntaxHighlight,
};
use crate::printlanguage::{
    Atom, OpToken, PrintContext, ReversePolish, TagType, TokenType, format_binary, modifiers,
    most_natural_base, parentheses, unicode_needs_escape,
};
use unlace_num::opcodes::OpCode;

// ===========================================================================
// PrintCCapability — the c-language back-end factory metadata
// (printc.cc:109-114)
// ===========================================================================

/// The name registered by `PrintCCapability` (C++ `name = "c-language"`,
/// printc.cc:112).
pub const CAPABILITY_NAME: &str = "c-language";

/// Whether `PrintCCapability` registers as the default language (C++
/// `isdefault = true`, printc.cc:113).
pub const CAPABILITY_IS_DEFAULT: bool = true;

// ===========================================================================
// Operator token table (printc.cc:24-78)
// ===========================================================================

/// Construct a `static` [`OpToken`] in field order matching the C++ aggregate
/// initializer `{ print1, print2, stage, precedence, associative, type,
/// spacing, bump, negate }`.  `negate` is always `None` here; the six negate
/// cross-links (printc.cc:130-135) are resolved by [`token_negate`] to avoid a
/// self-referential static.
// The eight parameters are the eight C++ `OpToken` aggregate-initializer fields
// in source order; keeping them positional makes the `tokens::*` table a
// line-for-line transcription of the printc.cc table.
#[allow(clippy::too_many_arguments)]
#[doc(hidden)]
pub const fn op_token(
    print1: &'static str,
    print2: &'static str,
    stage: int4,
    precedence: int4,
    associative: bool,
    token_type: TokenType,
    spacing: int4,
    bump: int4,
) -> OpToken {
    OpToken {
        print1,
        print2,
        stage,
        precedence,
        associative,
        token_type,
        spacing,
        bump,
        negate: None,
        paren_before_angle: false,
        left_to_right_only: false,
    }
}

/// Construct a `static` [`OpToken`] that spells and ranks exactly like
/// [`op_token`] would but carries `left_to_right_only`.  Only the IEEE-754
/// arithmetic tokens use it.
const fn float_op_token(print1: &'static str, precedence: int4, spacing: int4) -> OpToken {
    OpToken {
        print1,
        print2: "",
        stage: 2,
        precedence,
        associative: false,
        token_type: TokenType::Binary,
        spacing,
        bump: 0,
        negate: None,
        paren_before_angle: false,
        left_to_right_only: true,
    }
}

/// The `PrintC` operator-token singletons (printc.cc:24-78).
///
/// These are `static` so [`crate::printlanguage::parentheses`]'s `std::ptr::eq`
/// identity check (the C++ `topToken == op2`) is meaningful.  The numbers are
/// the precedence/associativity/spacing/bump that define C operator
/// parenthesization; transcribed value-for-value from the C++ table.
pub mod tokens {
    use super::{OpToken, TokenType, float_op_token, op_token};

    /// Hidden functional (that may force parentheses) (printc.cc:24).
    pub static HIDDEN: OpToken = op_token("", "", 1, 70, false, TokenType::HiddenFunction, 0, 0);
    /// The sub-scope/namespace operator `::` (printc.cc:25).
    pub static SCOPE: OpToken = op_token("::", "", 2, 70, true, TokenType::Binary, 0, 0);
    /// The member operator `.` (printc.cc:26).
    pub static OBJECT_MEMBER: OpToken = op_token(".", "", 2, 66, true, TokenType::Binary, 0, 0);
    /// The points-to-member operator `->` (printc.cc:27).
    pub static POINTER_MEMBER: OpToken = op_token("->", "", 2, 66, true, TokenType::Binary, 0, 0);
    /// The array subscript operator `[ ]` (printc.cc:28).
    pub static SUBSCRIPT: OpToken = op_token("[", "]", 2, 66, false, TokenType::Postsurround, 0, 0);
    /// The function-call operator `( )` (printc.cc:29).
    pub static FUNCTION_CALL: OpToken =
        op_token("(", ")", 2, 66, false, TokenType::Postsurround, 0, 10);
    /// The bitwise-negate operator `~` (printc.cc:30).
    pub static BITWISE_NOT: OpToken = op_token("~", "", 1, 62, false, TokenType::UnaryPrefix, 0, 0);
    /// The boolean-not operator `!` (printc.cc:31).
    pub static BOOLEAN_NOT: OpToken = op_token("!", "", 1, 62, false, TokenType::UnaryPrefix, 0, 0);
    /// The unary-minus operator `-` (printc.cc:32).
    pub static UNARY_MINUS: OpToken = op_token("-", "", 1, 62, false, TokenType::UnaryPrefix, 0, 0);
    /// The unary-plus operator `+` (printc.cc:33).
    pub static UNARY_PLUS: OpToken = op_token("+", "", 1, 62, false, TokenType::UnaryPrefix, 0, 0);
    /// The address-of operator `&` (printc.cc:34).
    pub static ADDRESSOF: OpToken = op_token("&", "", 1, 62, false, TokenType::UnaryPrefix, 0, 0);
    /// The pointer-dereference operator `*` (printc.cc:35).
    pub static DEREFERENCE: OpToken = op_token("*", "", 1, 62, false, TokenType::UnaryPrefix, 0, 0);
    /// The type-cast operator `( )` (printc.cc:36).
    pub static TYPECAST: OpToken = op_token("(", ")", 2, 62, false, TokenType::Presurround, 0, 0);
    /// The multiplication operator `*` (printc.cc:37).
    pub static MULTIPLY: OpToken = op_token("*", "", 2, 54, true, TokenType::Binary, 1, 0);
    /// The division operator `/` (printc.cc:38).
    pub static DIVIDE: OpToken = op_token("/", "", 2, 54, false, TokenType::Binary, 1, 0);
    /// The modulo operator `%` (printc.cc:39).
    pub static MODULO: OpToken = op_token("%", "", 2, 54, false, TokenType::Binary, 1, 0);
    /// The binary-addition operator `+` (printc.cc:40).
    pub static BINARY_PLUS: OpToken = op_token("+", "", 2, 50, true, TokenType::Binary, 1, 0);
    /// The binary-subtraction operator `-` (printc.cc:41).
    pub static BINARY_MINUS: OpToken = op_token("-", "", 2, 50, false, TokenType::Binary, 1, 0);
    /// The left-shift operator `<<` (printc.cc:42).
    pub static SHIFT_LEFT: OpToken = op_token("<<", "", 2, 46, false, TokenType::Binary, 1, 0);
    /// The right-shift operator `>>` (printc.cc:43).
    pub static SHIFT_RIGHT: OpToken = op_token(">>", "", 2, 46, false, TokenType::Binary, 1, 0);
    /// The signed right-shift operator `>>` (printc.cc:44).
    pub static SHIFT_SRIGHT: OpToken = op_token(">>", "", 2, 46, false, TokenType::Binary, 1, 0);
    /// The less-than operator `<` (printc.cc:45).
    pub static LESS_THAN: OpToken = op_token("<", "", 2, 42, false, TokenType::Binary, 1, 0);
    /// The less-than-or-equal operator `<=` (printc.cc:46).
    pub static LESS_EQUAL: OpToken = op_token("<=", "", 2, 42, false, TokenType::Binary, 1, 0);
    /// The greater-than operator `>` (printc.cc:47).
    pub static GREATER_THAN: OpToken = op_token(">", "", 2, 42, false, TokenType::Binary, 1, 0);
    /// The greater-than-or-equal operator `>=` (printc.cc:48).
    pub static GREATER_EQUAL: OpToken = op_token(">=", "", 2, 42, false, TokenType::Binary, 1, 0);
    /// The equal operator `==` (printc.cc:49).
    pub static EQUAL: OpToken = op_token("==", "", 2, 38, false, TokenType::Binary, 1, 0);
    /// The not-equal operator `!=` (printc.cc:50).
    pub static NOT_EQUAL: OpToken = op_token("!=", "", 2, 38, false, TokenType::Binary, 1, 0);
    /// The logical-and operator `&` (printc.cc:51).
    pub static BITWISE_AND: OpToken = op_token("&", "", 2, 34, true, TokenType::Binary, 1, 0);
    /// The logical-xor operator `^` (printc.cc:52).
    pub static BITWISE_XOR: OpToken = op_token("^", "", 2, 30, true, TokenType::Binary, 1, 0);
    /// The logical-or operator `|` (printc.cc:53).
    pub static BITWISE_OR: OpToken = op_token("|", "", 2, 26, true, TokenType::Binary, 1, 0);
    /// The boolean-and operator `&&` (printc.cc:54).
    pub static BOOLEAN_AND: OpToken = op_token("&&", "", 2, 22, false, TokenType::Binary, 1, 0);
    /// The boolean-xor operator `^^` (printc.cc:55).
    pub static BOOLEAN_XOR: OpToken = op_token("^^", "", 2, 20, false, TokenType::Binary, 1, 0);
    /// The boolean-or operator `||` (printc.cc:56).
    pub static BOOLEAN_OR: OpToken = op_token("||", "", 2, 18, false, TokenType::Binary, 1, 0);
    /// C's conditional operator, used for guarded dynamic shifts.
    pub static CONDITIONAL: OpToken = op_token("?", ":", 3, 16, false, TokenType::Binary, 1, 0);
    /// The assignment operator `=` (printc.cc:57).
    pub static ASSIGNMENT: OpToken = op_token("=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// (unlace `postinc`) `p++`, a postfix around its one operand and a blank.
    pub static POST_INCREMENT: OpToken =
        op_token("", "++", 2, 66, false, TokenType::Postsurround, 0, 0);
    /// The comma operator `,` for parameter lists (printc.cc:58).
    pub static COMMA: OpToken = op_token(",", "", 2, 2, true, TokenType::Binary, 0, 0);
    /// The `new` operator (printc.cc:59).
    pub static NEW_OP: OpToken = op_token("", "", 2, 62, false, TokenType::Space, 1, 0);

    // In-place assignment operators (printc.cc:62-71)
    /// The in-place multiplication operator `*=` (printc.cc:62).
    pub static MULTEQUAL: OpToken = op_token("*=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place division operator `/=` (printc.cc:63).
    pub static DIVEQUAL: OpToken = op_token("/=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place modulo operator `%=` (printc.cc:64).
    pub static REMEQUAL: OpToken = op_token("%=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place addition operator `+=` (printc.cc:65).
    pub static PLUSEQUAL: OpToken = op_token("+=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place subtraction operator `-=` (printc.cc:66).
    pub static MINUSEQUAL: OpToken = op_token("-=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place left-shift operator `<<=` (printc.cc:67).
    pub static LEFTEQUAL: OpToken = op_token("<<=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place right-shift operator `>>=` (printc.cc:68).
    pub static RIGHTEQUAL: OpToken = op_token(">>=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place logical-and operator `&=` (printc.cc:69).
    pub static ANDEQUAL: OpToken = op_token("&=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place logical-or operator `|=` (printc.cc:70).
    pub static OREQUAL: OpToken = op_token("|=", "", 2, 14, false, TokenType::Binary, 1, 5);
    /// The in-place logical-xor operator `^=` (printc.cc:71).
    pub static XOREQUAL: OpToken = op_token("^=", "", 2, 14, false, TokenType::Binary, 1, 5);

    // Operator tokens for type expressions (printc.cc:74-78)
    /// Type declaration involving a space (printc.cc:74).
    pub static TYPE_EXPR_SPACE: OpToken = op_token("", "", 2, 10, false, TokenType::Space, 1, 0);
    /// Type declaration with no space (printc.cc:75).
    pub static TYPE_EXPR_NOSPACE: OpToken = op_token("", "", 2, 10, false, TokenType::Space, 0, 0);

    // (unlace) IEEE-754 arithmetic, which has no row upstream: the C++ table maps
    // the float opcodes onto the integer `*`/`+` above.  These two are spelled
    // and ranked exactly like that pair -- `float_tokens_match_their_integer_twins_except_for_grouping`
    // pins every field -- and differ only in not re-associating.

    /// IEEE-754 multiplication: [`MULTIPLY`] that does not re-associate. See
    /// `OpToken::left_to_right_only`.
    pub static FLOAT_MULTIPLY: OpToken = float_op_token("*", 54, 1);
    /// IEEE-754 addition: [`BINARY_PLUS`] that does not re-associate. See
    /// `OpToken::left_to_right_only`.
    pub static FLOAT_PLUS: OpToken = float_op_token("+", 50, 1);
    /// Pointer adornment for a type declaration `*` (printc.cc:76).
    pub static PTR_EXPR: OpToken = op_token("*", "", 1, 62, false, TokenType::UnaryPrefix, 0, 0);
    /// Array adornment for a type declaration `[ ]` (printc.cc:77).
    pub static ARRAY_EXPR: OpToken =
        op_token("[", "]", 2, 66, false, TokenType::Postsurround, 1, 0);
    /// The concatenation operator `|` for enumerated values (printc.cc:78).
    pub static ENUM_CAT: OpToken = op_token("|", "", 2, 26, true, TokenType::Binary, 0, 0);
}

/// The complementary (negated) token for the six comparison operators
/// (C++ `PrintC::PrintC` flip-token assignments, printc.cc:130-135).
///
/// In C++ these are stored in each `OpToken::negate` field, set in the
/// constructor.  Because a `static OpToken` cannot hold a `&'static` reference
/// to another `static` defined later (no self-referential statics), the link is
/// realized here as a pointer-identity lookup — the only consumer is
/// `op_binary` reading the complement under the `negatetoken` modifier.
/// Returns `None` for any token without a complement (every C++ token whose
/// `negate` stays null).
pub fn token_negate(tok: &'static OpToken) -> Option<&'static OpToken> {
    use tokens::*;
    // (unlace outlang) A language whose comparison tokens are its own statics
    // carries the pairing on the token (`OpToken::negate`, the C++ field the port
    // left unset because Rust statics cannot self-reference -- they CAN reference
    // each other). The C table below is unreachable for those.
    if let Some(n) = tok.negate {
        return Some(n);
    }
    if std::ptr::eq(tok, &LESS_THAN) {
        Some(&GREATER_EQUAL)
    } else if std::ptr::eq(tok, &LESS_EQUAL) {
        Some(&GREATER_THAN)
    } else if std::ptr::eq(tok, &GREATER_THAN) {
        Some(&LESS_EQUAL)
    } else if std::ptr::eq(tok, &GREATER_EQUAL) {
        Some(&LESS_THAN)
    } else if std::ptr::eq(tok, &EQUAL) {
        Some(&NOT_EQUAL)
    } else if std::ptr::eq(tok, &NOT_EQUAL) {
        Some(&EQUAL)
    } else {
        None
    }
}

/// (unlace `constright`) The comparison token with its operands exchanged (`<` and `>`, `<=`
/// and `>=`); `None` for any other token.
pub fn token_mirror(tok: &'static OpToken) -> Option<&'static OpToken> {
    use tokens::*;
    if std::ptr::eq(tok, &LESS_THAN) {
        Some(&GREATER_THAN)
    } else if std::ptr::eq(tok, &LESS_EQUAL) {
        Some(&GREATER_EQUAL)
    } else if std::ptr::eq(tok, &GREATER_THAN) {
        Some(&LESS_THAN)
    } else if std::ptr::eq(tok, &GREATER_EQUAL) {
        Some(&LESS_EQUAL)
    } else {
        None
    }
}

// ===========================================================================
// Keyword / punctuation constants (printc.cc:80-104)
// ===========================================================================

/// The c-language keyword and punctuation tokens (C++ `PrintC::EMPTY_STRING`
/// .. `PrintC::typePointerRelToken`, printc.cc:80-104).
pub mod keywords {
    /// An empty token (printc.cc:80).
    pub const EMPTY_STRING: &str = "";
    /// `"{"` token (printc.cc:81).
    pub const OPEN_CURLY: &str = "{";
    /// `"}"` token (printc.cc:82).
    pub const CLOSE_CURLY: &str = "}";
    /// `";"` token (printc.cc:83).
    pub const SEMICOLON: &str = ";";
    /// `":"` token (printc.cc:84).
    pub const COLON: &str = ":";
    /// `"="` token (printc.cc:85).
    pub const EQUALSIGN: &str = "=";
    /// `","` token (printc.cc:86).
    pub const COMMA: &str = ",";
    /// `"..."` token (printc.cc:87).
    pub const DOTDOTDOT: &str = "...";
    /// `"void"` keyword (printc.cc:88).
    pub const KEYWORD_VOID: &str = "void";
    /// `"true"` keyword (printc.cc:89).
    pub const KEYWORD_TRUE: &str = "true";
    /// `"false"` keyword (printc.cc:90).
    pub const KEYWORD_FALSE: &str = "false";
    /// `"if"` keyword (printc.cc:91).
    pub const KEYWORD_IF: &str = "if";
    /// `"else"` keyword (printc.cc:92).
    pub const KEYWORD_ELSE: &str = "else";
    /// `"do"` keyword (printc.cc:93).
    pub const KEYWORD_DO: &str = "do";
    /// `"while"` keyword (printc.cc:94).
    pub const KEYWORD_WHILE: &str = "while";
    /// `"for"` keyword (printc.cc:95).
    pub const KEYWORD_FOR: &str = "for";
    /// `"goto"` keyword (printc.cc:96).
    pub const KEYWORD_GOTO: &str = "goto";
    /// `"break"` keyword (printc.cc:97).
    pub const KEYWORD_BREAK: &str = "break";
    /// `"continue"` keyword (printc.cc:98).
    pub const KEYWORD_CONTINUE: &str = "continue";
    /// `"case"` keyword (printc.cc:99).
    pub const KEYWORD_CASE: &str = "case";
    /// `"switch"` keyword (printc.cc:100).
    pub const KEYWORD_SWITCH: &str = "switch";
    /// `"default"` keyword (printc.cc:101).
    pub const KEYWORD_DEFAULT: &str = "default";
    /// `"return"` keyword (printc.cc:102).
    pub const KEYWORD_RETURN: &str = "return";
    /// `"new"` keyword (printc.cc:103).
    pub const KEYWORD_NEW: &str = "new";
    /// The token printed for a PTRSUB relative to a `TypePointerRel`
    /// (C++ `typePointerRelToken = "ADJ"`, printc.cc:104).
    pub const TYPE_POINTER_REL_TOKEN: &str = "ADJ";
}

// ===========================================================================
// Symbol display-format constants (Symbol::force_*, used by push_integer)
// ===========================================================================

/// The `Symbol::force_*` display-format selectors used by [`format_integer_token`]
/// (C++ `Symbol` anon enum; identical to [`crate::database::symbol_dispflags`]).
/// Re-stated here so the formatter is self-describing and matches the C++
/// `displayFormat` switch (printc.cc:1410-1429) value-for-value.
pub mod display_format {
    /// No format forced (C++ `0`).
    pub const NONE: u32 = 0;
    /// Force hexadecimal (`Symbol::force_hex`).
    pub const FORCE_HEX: u32 = 1;
    /// Force decimal (`Symbol::force_dec`).
    pub const FORCE_DEC: u32 = 2;
    /// Force octal (`Symbol::force_oct`).
    pub const FORCE_OCT: u32 = 3;
    /// Force binary (`Symbol::force_bin`).
    pub const FORCE_BIN: u32 = 4;
    /// Force character (`Symbol::force_char`).
    pub const FORCE_CHAR: u32 = 5;
}

/// \brief The c-language print object (C++ `class PrintC : public
/// PrintLanguage`, printc.hh:138).
///
/// In C++ `PrintC` *is-a* `PrintLanguage`, owning the [`PrintContext`] member
/// state (mod/scope stacks, comment/namespace defaults) and an `Emit *` driver,
/// plus the c-language [`PrintCOptions`].  The [`Architecture`](crate::architecture::Architecture)
/// holds it as `glb->print`.  This port carries:
///
///   * the **[`PrintCOptions`]** (the option toggles the `option NAME VALUE`
///     command flips through `ArchOptionContext`),
///   * the **[`PrintContext`]** (the shared print-modification / comment /
///     namespace state),
///   * the **language name** (`"c-language"`, the `getName()` the options
///     `print_is_c_language` predicate reads),
///   * the **flat** flag (`print C flat`, C++ `flat` mod bit), and
///   * an owned **[`EmitNoMarkup`]** back-end (the plain-text `print C` sink).
///
/// ## What `doc_function` emits today
///
/// [`doc_function`](PrintC::doc_function) faithfully transcribes the **shell**
/// of C++ `PrintC::docFunction` / `emitFunctionDeclaration` (printc.cc:2726,
/// 2790) — `beginFunction` → header comment line → the prototype declaration
/// (return type, function name, parenthesized parameters) → `openBraceIndent`
/// → … → `closeBraceIndent` → `endFunction` → `flush` — driving the **real**
/// [`Emit`] primitives.  The function **body** (`emitLocalVarDecls` +
/// `emitBlockGraph`, the per-statement RPN expression emission) is the
/// `// STUB(W9-emit)` RPN/`Emit` driver documented in this module's header
/// (`pushVn`/`recurse`/`emitOp` against the IR), absent from the merged tree;
/// the body slot emits a single marker comment line so the C output is a
/// structurally-complete, compilable-looking function shell (a real signature +
/// matched braces), not full byte-parity C.  The W9 closure fills the body in.
pub struct PrintC {
    /// The c-language options (C++ the `option_*` members).
    pub options: PrintCOptions,
    /// The shared print context (mod/scope stacks, comment/namespace state).
    pub context: PrintContext,
    /// The language name (C++ `PrintLanguage::name`, `"c-language"`).
    name: String,
    /// Whether `print C flat` is active (C++ the `flat` mod bit).
    flat: bool,
    /// The emit back-end (C++ the bound `Emit *`).  Defaults to the plain-text
    /// [`EmitNoMarkup`] for the byte-exact `print C` path; [`set_markup`](PrintC::set_markup)
    /// swaps in the packed clang [`EmitMarkup`] for the ghidra-mode `decompileAt`
    /// `<function>` document.  A concrete enum (not `Box<dyn Emit>`), so the
    /// ~260 `self.emit.<method>()` sites stay static (see [`PrintEmit`]).
    pub emit: PrintEmit,
    /// The `option maxlinewidth` line size for plain-text output; `None` (the
    /// unlace default) prints each statement on one line.
    plain_line_size: Option<int4>,
    /// (unlace) Scoped raw pointer to the [`Funcdata`] currently being emitted,
    /// live ONLY for the duration of [`emit_function_document`](PrintC::emit_function_document).
    /// Lets the fd-free RPN leaf emitters ([`emit_atom`](PrintC::emit_atom) /
    /// [`emit_op`](PrintC::emit_op)) resolve an [`Atom`]'s carried op/varnode
    /// arena key back to the `get_time()` / `get_create_index()` the `<ast>`
    /// stamps — WITHOUT threading `fd` through the pure RPN engine (which the
    /// synthetic `rpn_*` unit tests drive fd-free).  Dereferenced only when the
    /// markup back-end is active (`emits_markup()`); the plain-text datatest path
    /// never touches it, so its byte output is unaffected.  `None` outside body
    /// emission.
    emit_fd: Option<*const Funcdata>,
    /// The reverse-polish-notation operator stack (C++ `PrintLanguage::revpol`).
    /// Owned here because `printlanguage.rs` deferred its RPN driver to this
    /// closure (the driver and the `PrintC` op-emitters are one unit).
    revpol: Vec<ReversePolish>,
    /// The pending data-flow node stack (C++ `PrintLanguage::nodepend`).
    nodepend: Vec<crate::printlanguage::NodePending>,
    /// How much of `nodepend` is claimed (C++ `PrintLanguage::pending`).
    pending: usize,
    /// Comment placement / walk state for the function being printed (C++
    /// `PrintLanguage::commsorter`).  Seeded by [`setup_comments`] at the start of
    /// the body and consulted by `emit_comment_block_tree`/`emit_comment_group`.
    commsorter: crate::comment::CommentSorter,
    /// (unlace `voidtailreturn`) The one `CPUI_RETURN` op `emit_basic_block_ops`
    /// must skip: the function's own trailing bare `return;` in a void function.
    /// Computed once per function by [`elidable_void_tail_return`] at the top of
    /// [`emit_function_body`](PrintC::emit_function_body) and cleared after, so it
    /// is live only for that function's emission.
    void_tail_return: Option<OpId>,
    /// (unlace `itaniumeh`) The landing pad of the `try` being printed: an
    /// exceptional edge to it inside the try body prints as its plain call.
    eh_open_pad: Option<u64>,
    /// (unlace `itaniumeh`) `catch` braces left open because the handler runs
    /// to the end of the function body; closed by `emit_function_body`.
    eh_open_catch: Vec<i32>,
    /// (unlace `javanew`) This function's `<init>` calls that print as `new T(args)`.
    java_new: std::collections::HashMap<OpId, crate::javanew::NewInit>,
    /// (unlace `javanew`) A constructor's `this(...)` / `super(...)` calls.
    java_ctor_calls: std::collections::HashMap<OpId, crate::javanew::CtorCall>,
    /// (unlace `javatry`) This function's catch clauses, in java-language output.
    java_catches: Option<crate::javatry::CatchTable>,
    /// (unlace) The userop index of Dalvik's `throwException`, in java-language
    /// output.
    java_throw_userop: Option<u64>,
    /// (unlace `javatry`) The blocks straddling a `try`'s end, while they print:
    /// for each, the handlers and whether the statements inside their ranges print.
    java_block_filters: std::collections::HashMap<BlockId, Vec<(u64, bool)>>,
    /// (unlace `javatry`) Handlers already printed as a `catch` clause.
    java_caught_shown: std::collections::HashSet<u64>,
    /// (unlace `javasync`) This function's catch-all idioms, by handler.
    java_idioms: std::collections::BTreeMap<u64, crate::javasync::JavaIdiom>,
    /// (unlace `javasync`) Statements a printed `synchronized` or `finally`
    /// stands for.
    java_hidden: std::collections::HashSet<OpId>,
    /// (unlace `javasync`) The `try`s marked to print as `synchronized`: the
    /// handler and the `monitorEnter` op left out for it.
    java_sync_enters: std::collections::BTreeMap<u64, OpId>,
    /// (unlace `gotonext`) The gotos left out or printed as `break;`, and the labels
    /// only they reached.  Computed per function at the top of
    /// [`emit_function_body`](PrintC::emit_function_body).
    goto_rewrites: crate::gotonext::GotoRewrites,
    /// (unlace `switchmerge`) The printed arms of each C `switch` whose arms differ
    /// from its own cases.  Computed per function with `goto_rewrites`.
    switch_plans: crate::switchmerge::SwitchPlans,
    /// (unlace) Resolved `realtypes` rendering context for the function currently
    /// being printed — the the registered option `Realtypes` gate plus the data-model fact
    /// (`long` is 8 bytes) needed to relabel residual `TYPE_UNKNOWN` (`xunknownN`)
    /// types as real C types.  Refreshed at the top of [`doc_function_full`] from
    /// the live `arch`; `OFF` until then (so an out-of-band print never relabels).
    pub rt_ctx: RealTypeCtx,
    /// (unlace outlang) The output language this document renders into.  Selects
    /// the surface vocabulary and capability record every language-varying site
    /// reads (`crate::lang`).  Refreshed per document alongside `rt_ctx`;
    /// `OutLang::C` until then, so an out-of-band print is never non-C.
    pub out_lang: crate::lang::OutLang,
    /// (unlace) The flavour whose profile stands in for `out_lang`'s own
    /// ([`set_flavour`](PrintC::set_flavour)); `None` renders the built-in language.
    flavour: Option<&'static crate::langflavour::Flavour>,
    /// (unlace warnstyle, DIV-39) Warning slugs collected under `warn_inline` by
    /// [`emit_comment_group`](PrintC::emit_comment_group) /
    /// [`emit_comment_func_header`](PrintC::emit_comment_func_header), flushed
    /// as one `// slug, slug` end-of-line comment by
    /// [`flush_eol_warnings`](PrintC::flush_eol_warnings) at the owning line's
    /// last token (statement `;`, `if (cond) {` header, prototype, ...).
    pub eol_warns: Vec<(
        String,
        std::rc::Rc<unlace_base::space::AddrSpace>,
        u64,
        Option<crate::functionwarnings::Warning>,
    )>,
    /// The analysis warnings the last plain render wrote, positioned in its text.
    warnings: Vec<crate::functionwarnings::Warning>,
    /// Per-document spelling for a local HighVariable whose recovered name
    /// collides in the C function scope. Body references consume the same map.
    local_name_overrides: std::collections::HashMap<crate::context::HighVariableId, String>,
    indirect_input_aliases: std::collections::HashSet<crate::context::HighVariableId>,
    signature_param_names: std::collections::HashMap<i32, String>,
    pub go_suppressed_labels: std::collections::HashSet<BlockId>,
    /// (unlace `labelnode`) The loop head whose label line a `Label` node has already printed.
    label_printed: Option<BlockId>,
    /// (unlace `oslog`) Statements that only fill a decoded os_log buffer.
    oslog_hidden: std::collections::BTreeSet<OpId>,
    /// Strict subpieces suppressed in favor of their overlap group's unique
    /// whole-value declaration. References resolve through the whole owner.
    local_name_aliases:
        std::collections::HashMap<crate::context::HighVariableId, crate::context::HighVariableId>,
    /// Grouped pieces that must remain independent declarations because no
    /// same-named unique whole owner exists. Their references are relative to
    /// their own declared object, not the overlap group's synthetic symbol.
    local_name_standalones: std::collections::HashSet<crate::context::HighVariableId>,
    /// (unlace) The locals the last document declared, as [`DeclaredLocal`]s.
    declared_locals: Vec<DeclaredLocal>,
    declared_local_index: std::collections::HashMap<crate::context::HighVariableId, usize>,
    /// (unlace) The entry of the function the last document printed.
    declared_entry: Option<Address>,
    /// Final C declarations, including storage and symbol overrides.
    pointer_decls: crate::pointerargs::Declarations,
    /// Pointer-argument facts are recorded only for a buffered driver that asked
    /// ([`set_record_pointer_arguments`](Self::set_record_pointer_arguments)).
    record_pointer_arguments: bool,
    pointer_record: Option<crate::pointerargs::Record>,
    pointer_candidate: Option<crate::pointerargs::Candidate>,
    /// (unlace `signedness`) The declared-signedness decision for the function
    /// being emitted: which integer locals the operation set says to declare
    /// signed or unsigned, and which of those declarations actually got written
    /// (the ones whose now-redundant `(int)` casts may be dropped).  Empty under
    /// `signedness upstream`.  See [`crate::typeround`].
    sign_plan: crate::typeround::SignPlan,
    /// (unlace `castimplied`) The declarations written for the function being
    /// emitted, which decide the casts C's own conversions make redundant.  See
    /// [`crate::castimplied`].
    cast_implied: crate::castimplied::ImpliedCasts,
    /// (unlace `castimplied`) The op being printed as the statement `lhs = <op>;`.
    stmt_op: Option<OpId>,
    /// (unlace `globalref`) This function's constant-address globals: the facts
    /// the decision reads and the globals its C names. See
    /// [`crate::globalref`].
    globalref: crate::globalref::Plan,
    named_globals: crate::namedglobals::References,
    /// Per-body spelling of a goto-target leaf whose address label another
    /// printed label already uses (see [`assign_label_names`](PrintC::assign_label_names)).
    label_names: std::collections::BTreeMap<BlockId, String>,
    /// (unlace `ctree`) The C syntax tree of the function being printed (none in flat printing).
    ctree: Option<crate::ctree::CTree>,
    /// (unlace `ctreeexport`) The expression nodes the RPN driver prints, recorded during a
    /// tree-capture render (`doc_function_capture`); `None` on every other render.
    rpn_record: Option<ctreerecord::RpnRecord>,
    /// The constant Varnode whose `push_vn_explicit_ir` is printing, so the atoms it pushes
    /// can be recorded with it; `None` outside a constant.
    rpn_constant: Option<crate::printlanguage::IrKey>,
    /// (unlace `noretfirst`) `CBRANCH` ops whose condition prints negated, for an `if` whose
    /// arms the tree swapped.
    flipped_branches: std::collections::BTreeSet<OpId>,
}

impl Default for PrintC {
    fn default() -> Self {
        PrintC::new()
    }
}

mod blocks;
mod body;
mod bytearray;
mod calls;
mod castctx;
mod casts;
mod constants;
mod decls;
mod document;
mod eh;
mod emit;
mod expr;
mod helpers;
mod literals;
mod loops;
mod naming;
mod opkind;
mod options;
mod partial;
mod rpn;
mod statements;
mod switch;
mod switchdecl;
mod symbols;
mod typedecl;
mod vnpush;

pub use castctx::*;
pub use emit::*;
use helpers::*;
pub use literals::*;
pub use naming::*;
pub use opkind::*;
pub use options::*;
pub use switchdecl::*;
pub use typedecl::*;

mod cpoolprint;
mod ctreeprint;
mod ctreerecord;
mod javasyncprint;
mod javatryprint;
mod rustarrayinit;
mod rustoption_niche;
mod strcmpprint;

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.printc_decl_type_representative = Some(decl_type_representative);
    hooks.printc_type_to_c_string = Some(type_to_c_string);
    hooks.printer_new = Some(printer_new);
    hooks.printer_default = Some(printer_default);
}

pub use crate::coreoptions::Realtypes;

crate::unlace_flag!(
    /// (unlace `voidtailreturn`) Elide the trailing bare `return;` of a void
    /// function -- the one the C source it came from does not have, because the
    /// source just falls off the end of the body.
    ///
    /// Only the function's OWN last statement, only when the prototype returns
    /// void, only when the owning structured leaf is not a goto target (a label
    /// would be left dangling) and only when exactly one structured leaf carries
    /// that RETURN op (`returndup`/`taildup` clone a shared epilogue by aliasing
    /// one op across several leaves, and suppressing by identity would delete
    /// genuine mid-body early returns).
    Voidtailreturn,
    "voidtailreturn",
    "void tail-return elision",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `importdata`) Render a data read through a loader-marked import slot
    /// (a GOT / `__got` / `__auth_got` / IAT entry holding an import's address) as
    /// the import itself, instead of a dereference of the anonymous slot. Default
    /// **on**.
    ImportData,
    "importdata",
    "import-slot data-read rendering",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `avxintrinsics`) Print SLEIGH AVX user-ops as Intel intrinsics.
    AvxIntrinsics,
    "avxintrinsics",
    "Intel intrinsic names for AVX user-ops",
    unset: false,
    shipped: true
);

crate::unlace_flag!(
    /// (unlace `barrierintrinsics`) Print PowerPC sync and isync user ops as the GCC and Clang barrier builtins.
    BarrierIntrinsics,
    "barrierintrinsics",
    "PowerPC barrier builtins",
    unset: false,
    shipped: false
);

/// A new C printer for an architecture (C++ `PrintCLanguageCapability::buildLanguage`).
fn printer_new() -> Box<dyn crate::printhandle::PrintHandle> {
    Box::new(PrintC::new())
}

/// A default C printer, standing in while an architecture lends its own out.
fn printer_default() -> Box<dyn crate::printhandle::PrintHandle> {
    Box::new(PrintC::default())
}

impl crate::printhandle::PrintHandle for PrintC {
    fn get_name(&self) -> &str {
        PrintC::get_name(self)
    }
    fn set_name(&mut self, name: &str) {
        PrintC::set_name(self, name);
    }
    fn out_lang(&self) -> crate::outlang::OutLang {
        PrintC::out_lang(self)
    }
    fn reset_wire_defaults(&mut self) {
        self.context = crate::printlanguage::PrintContext::new();
        self.reset_wire_option_defaults();
    }
    fn comment_filter(&self) -> u32 {
        self.context.header_comment() | self.context.instruction_comment()
    }
    fn initialize_from_architecture(&mut self) {
        PrintC::initialize_from_architecture(self);
    }
    fn set_null_printing(&mut self, val: bool) {
        PrintC::set_null_printing(self, val);
    }
    fn set_inplace_ops(&mut self, val: bool) {
        PrintC::set_inplace_ops(self, val);
    }
    fn set_convention_printing(&mut self, val: bool) {
        PrintC::set_convention_printing(self, val);
    }
    fn set_no_cast_printing(&mut self, val: bool) {
        PrintC::set_no_cast_printing(self, val);
    }
    fn set_hide_implied_exts(&mut self, val: bool) {
        PrintC::set_hide_implied_exts(self, val);
    }
    fn set_max_line_size(&mut self, val: int4) -> UnlaceResult<()> {
        PrintC::set_max_line_size(self, val)
    }
    fn set_indent_increment(&mut self, val: int4) {
        PrintC::set_indent_increment(self, val);
    }
    fn set_line_comment_indent(&mut self, val: int4) -> UnlaceResult<()> {
        PrintC::set_line_comment_indent(self, val)
    }
    fn set_comment_style(&mut self, style: &str) {
        PrintC::set_comment_style(self, style);
    }
    fn header_comment_flags(&self) -> uint4 {
        PrintC::header_comment_flags(self)
    }
    fn set_header_comment_flags(&mut self, flags: uint4) {
        PrintC::set_header_comment_flags(self, flags);
    }
    fn instruction_comment_flags(&self) -> uint4 {
        PrintC::instruction_comment_flags(self)
    }
    fn set_instruction_comment_flags(&mut self, flags: uint4) {
        PrintC::set_instruction_comment_flags(self, flags);
    }
    fn set_integer_format(&mut self, fmt: &str) -> UnlaceResult<()> {
        PrintC::set_integer_format(self, fmt)
    }
    fn set_namespace_strategy(&mut self, strategy: NamespaceStrategy) {
        PrintC::set_namespace_strategy(self, strategy);
    }
    fn set_brace_format(&mut self, category: crate::options::BraceCategory, style: BraceStyle) {
        PrintC::set_brace_format(self, category, style);
    }
    fn as_any(&self) -> &dyn std::any::Any {
        self
    }
    fn as_any_mut(&mut self) -> &mut dyn std::any::Any {
        self
    }
}

/// The C printer an [`Architecture`] owns, by its concrete type.
pub trait ArchPrintExt {
    /// Borrow the c-language printer (C++ `glb->print`).
    fn print(&self) -> &PrintC;
    /// Mutably borrow the c-language printer (drives `docFunction` + the print option setters).
    fn print_mut(&mut self) -> &mut PrintC;
    /// Run `render` with the printer moved out of the architecture (a default stands in
    /// meanwhile), so it can drive `PrintC::doc_function_full(fd, &arch)`, which needs an immutable
    /// borrow of the rest of the architecture (register-name lookup) while it mutates the printer,
    /// then move it back.
    ///
    /// The printer goes back on every exit. A panic in `render` returns it cleared of the partial
    /// document ([`PrintC::clear`], C++ `docFunction`'s `catch { clear(); throw; }`) with the
    /// printing modifiers it had before `render`, then resumes unwinding, so a caller that contains
    /// the panic renders every later function with the printer the run configured, not the default.
    fn with_print<R>(&mut self, render: impl FnOnce(&mut PrintC, &Architecture) -> R) -> R;
}

impl ArchPrintExt for Architecture {
    #[inline]
    fn print(&self) -> &PrintC {
        self.printer()
            .as_any()
            .downcast_ref::<PrintC>()
            .expect("the architecture's printer is the C printer")
    }

    fn print_mut(&mut self) -> &mut PrintC {
        self.printer_mut()
            .as_any_mut()
            .downcast_mut::<PrintC>()
            .expect("the architecture's printer is the C printer")
    }

    fn with_print<R>(&mut self, render: impl FnOnce(&mut PrintC, &Architecture) -> R) -> R {
        let mut lent = self.take_printer();
        let result = {
            let print = lent
                .as_any_mut()
                .downcast_mut::<PrintC>()
                .expect("the architecture's printer is the C printer");
            let mods = print.context.mods();
            let arch: &Architecture = self;
            let result = std::panic::catch_unwind(std::panic::AssertUnwindSafe(|| {
                render(&mut *print, arch)
            }));
            if result.is_err() {
                print.clear();
                print.context.set_mods(mods);
            }
            result
        };
        self.put_printer(lent);
        result.unwrap_or_else(|payload| std::panic::resume_unwind(payload))
    }
}

#[cfg(test)]
mod tests;
