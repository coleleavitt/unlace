//! S9 -- Surface rendering & refinement: PrintC/PrintJava, casts, strings, naming.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod acleintrinsics; // (unlace) AArch64 barrier, hint and memory-tagging user ops as ACLE intrinsics
pub mod addressdecl;
pub mod aggregatecast;
pub mod armconstantshift;
pub mod armregistershift; // (unlace) defined C for ARM register-controlled LSL
pub mod arraycoverwidth;
pub mod arraynotation;
pub mod barrierintrinsics; // (unlace) PowerPC sync and isync user ops as the GCC/Clang barrier builtins
pub mod bitcast;
pub mod braceelide;
pub mod bytearrayc;
pub mod bytearrayslice;
pub mod bytehonest;
pub mod callargextend;
pub mod callerstack;
pub mod callresult;
pub mod cast;
pub mod castarith; // (unlace) pointer arithmetic stays in pointer terms
pub mod castimplied; // (unlace) casts C's own conversions already perform
pub mod castnarrow; // (unlace) a narrowing C's own assignment, argument or return conversion performs keeps no cast
pub mod castsign; // (unlace) signed declarations for frame locals and the readers signedness vetoes
pub mod castternary; // (unlace) a conditional arm keeps no cast the conditional performs
pub mod castwiden; // (unlace) a 64-bit widening C performs by itself keeps no cast
pub mod cfstr; // (unlace) CFSTR("...") for a Mach-O __cfstring entry
pub mod charnum; // (unlace) non-printable char constants as numbers in comparisons and arithmetic
pub mod constright; // (unlace) value-first ordered comparisons against a constant
pub mod containerof; // (unlace `containerof`) `container_of(p, S, m)` for a pointer stepped back to its struct
pub mod coreaction_casts;
pub mod coreaction_render;
pub mod cppshortnames; // (unlace) short spellings of standard C++ names
pub mod cstringconst;
pub mod ctypes; // (unlace) valid per-architecture C spelling of the core types
pub mod declorder; // (unlace) the order local declarations print in
pub mod dedupvardecls;
pub mod emptystrconst;
pub mod fieldextract;
pub mod floatslice;
pub mod floatstore;
pub mod funcptrnames;
pub mod functionwarnings; // (unlace) the analysis warnings a render wrote, where the engine recorded them
pub mod globalref; // (unlace) a constant address used as a pointer prints as its global
pub mod goatomicreturn;
pub mod gobyteextract;
pub mod gobyteview;
mod goitabcall;
mod gomethod;
pub mod goorderedcompare;
pub mod gopackage;
pub mod gopairreturns;
pub mod gopointerarith;
mod gostringindex;
mod gozerorecord;
pub mod halfstore;
pub mod infloopstyle;
pub mod javanew; // (unlace) `new T(args)` from an allocation and its <init> call
pub mod labelstmt; // (unlace) every printed C label labels a statement
mod lanetrace;
pub mod lang; // (unlace) the output-language plane: profile + capabilities
pub mod langc; // (unlace) the c-language policy objects (CSpeller)
pub mod langgo;
pub mod langjava; // (unlace) the java-language profile and type speller
pub mod langrust; // (unlace) the rust-language policy objects (profile + caps)
pub mod langtypes; // (unlace) the type-spelling seam (TypeSpeller + SpellCtx)
pub mod mapglobalsyms; // (unlace `mapglobalsyms`) keep mapGlobals' DAT_ Symbols in the global scope
pub mod memberbase;
pub mod msvcthrow;
pub mod namedglobals;
pub mod narrowselector; // (unlace) a switch on a narrow expression casts it to its own width
pub mod oslog;
pub mod paramrefdecl;
pub mod partialaccess;
pub mod partialconcat;
pub mod pointerargs; // (unlace) a scalar's address passed to a character-pointer parameter
pub mod pointerstorecast;
pub mod postinc; // (unlace `postinc`) `*p++` for a pointer step after its dereference
pub mod prettyprint;
pub mod printc;
pub mod printlanguage;
pub mod renderfault; // (unlace) test-only: panic one function's render partway through
pub mod renumberlocals;
pub mod rustarrayaddr;
pub mod rustarraydecay;
pub mod rustarrayindex;
pub mod rustarrayzero;
pub mod rustboolcast;
pub mod rustextend;
pub mod rustfmt;
pub mod rustfmtargs;
pub mod rustfmtflags;
pub mod rustfmtio;
pub mod rustfmtliteral;
pub mod rustfmtpanic;
pub mod rustfmtpieces;
pub mod rustfmtresult;
pub mod rustfmtstr;
pub mod rustfmtwrite;
pub mod rustfuncptr;
pub mod rustintegers;
mod rustoption;
pub mod rustptradd;
pub mod rustsigned;
pub mod ruststorevalue;
mod ruststorewidth;
pub mod rusttypes; // (unlace) the rust-language type speller
pub mod rustuserop;
pub mod rustwrapping;
pub mod signeddec; // (unlace) decimal signed constants
pub mod signedread; // (unlace) a signed read of an expression that prints unsigned casts it back
pub mod srcmap;
pub mod stackassign;
pub mod stackbytes;
pub mod stacklayout;
pub mod stackmem;
pub mod structassign; // (unlace) a memcpy of exactly one struct between pointers to that struct prints as *d = *s
pub mod structdefs;
pub mod swiftstrobj; // (unlace) a Swift string object is not a pointer to the bytes it lands on
pub mod truncarg;
pub mod truthycond;
pub mod typeround; // (unlace) the declared-signedness rounding decision
pub mod unknowncasts;
pub mod unsignedread; // (unlace) an unsigned read of an expression C evaluates as signed casts it
pub mod warnstyle;
pub mod widelocal;

pub mod stackmarkers;
pub mod stackversions;

pub mod indirectargs;

pub mod callprototypes;

pub mod gostorevalue;

pub mod constantshift;
pub mod fidproto; // (unlace) the prototype a .fid record carries, and its check against the body
pub mod reglocals;
pub mod selectmul; // (unlace `selectmul`) a*zext(c) + b*zext(!c) prints as c ? a : b
pub mod wideconst; // (unlace `wideconst`) a constant wider than 64 bits prints as one literal

pub mod widenedadd;

pub mod returnselector;
pub mod slotreport; // (unlace) a frame slot a printed local lives in is reported as that local
pub mod slotsplit; // (unlace) a frame row a narrower printed declaration lives inside is split at it
pub mod stackobjectinfo;
