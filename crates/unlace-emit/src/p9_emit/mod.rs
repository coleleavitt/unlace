//! S9 -- Surface rendering & refinement: PrintC/PrintJava, casts, strings, naming.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod cast;
pub mod coreaction_casts;
pub mod coreaction_render;
pub mod kuna_acleintrinsics; // (kuna) AArch64 barrier, hint and memory-tagging user ops as ACLE intrinsics
pub mod kuna_addressdecl;
pub mod kuna_aggregatecast;
pub mod kuna_armconstantshift;
pub mod kuna_armregistershift; // (kuna) defined C for ARM register-controlled LSL
pub mod kuna_arraycoverwidth;
pub mod kuna_arraynotation;
pub mod kuna_bitcast;
pub mod kuna_braceelide;
pub mod kuna_bytearrayc;
pub mod kuna_bytearrayslice;
pub mod kuna_bytehonest;
pub mod kuna_callargextend;
pub mod kuna_callerstack;
pub mod kuna_callresult;
pub mod kuna_castarith; // (kuna) pointer arithmetic stays in pointer terms
pub mod kuna_castimplied; // (kuna) casts C's own conversions already perform
pub mod kuna_castnarrow; // (kuna) a narrowing C's own assignment, argument or return conversion performs keeps no cast
pub mod kuna_castsign; // (kuna) signed declarations for frame locals and the readers signedness vetoes
pub mod kuna_castternary; // (kuna) a conditional arm keeps no cast the conditional performs
pub mod kuna_castwiden; // (kuna) a 64-bit widening C performs by itself keeps no cast
pub mod kuna_cfstr; // (kuna) CFSTR("...") for a Mach-O __cfstring entry
pub mod kuna_charnum; // (kuna) non-printable char constants as numbers in comparisons and arithmetic
pub mod kuna_constright; // (kuna) value-first ordered comparisons against a constant
pub mod kuna_containerof; // (kuna `containerof`) `container_of(p, S, m)` for a pointer stepped back to its struct
pub mod kuna_cppshortnames; // (kuna) short spellings of standard C++ names
pub mod kuna_cstringconst;
pub mod kuna_ctypes; // (kuna) valid per-architecture C spelling of the core types
pub mod kuna_declorder; // (kuna) the order local declarations print in
pub mod kuna_dedupvardecls;
pub mod kuna_emptystrconst;
pub mod kuna_fieldextract;
pub mod kuna_floatslice;
pub mod kuna_floatstore;
pub mod kuna_funcptrnames;
pub mod kuna_functionwarnings; // (kuna) the analysis warnings a render wrote, where the engine recorded them
pub mod kuna_globalref; // (kuna) a constant address used as a pointer prints as its global
pub mod kuna_goatomicreturn;
pub mod kuna_gobyteextract;
pub mod kuna_gobyteview;
mod kuna_goitabcall;
mod kuna_gomethod;
pub mod kuna_goorderedcompare;
pub mod kuna_gopackage;
pub mod kuna_gopairreturns;
pub mod kuna_gopointerarith;
mod kuna_gostringindex;
mod kuna_gozerorecord;
pub mod kuna_halfstore;
pub mod kuna_infloopstyle;
pub mod kuna_javanew; // (kuna) `new T(args)` from an allocation and its <init> call
pub mod kuna_labelstmt; // (kuna) every printed C label labels a statement
mod kuna_lanetrace;
pub mod kuna_lang; // (kuna) the output-language plane: profile + capabilities
pub mod kuna_langc; // (kuna) the c-language policy objects (CSpeller)
pub mod kuna_langgo;
pub mod kuna_langjava; // (kuna) the java-language profile and type speller
pub mod kuna_langrust; // (kuna) the rust-language policy objects (profile + caps)
pub mod kuna_langtypes; // (kuna) the type-spelling seam (TypeSpeller + SpellCtx)
pub mod kuna_mapglobalsyms; // (kuna `mapglobalsyms`) keep mapGlobals' DAT_ Symbols in the global scope
pub mod kuna_memberbase;
pub mod kuna_msvcthrow;
pub mod kuna_namedglobals;
pub mod kuna_narrowselector; // (kuna) a switch on a narrow expression casts it to its own width
pub mod kuna_oslog;
pub mod kuna_paramrefdecl;
pub mod kuna_partialaccess;
pub mod kuna_partialconcat;
pub mod kuna_pointerargs; // (kuna) a scalar's address passed to a character-pointer parameter
pub mod kuna_pointerstorecast;
pub mod kuna_postinc; // (kuna `postinc`) `*p++` for a pointer step after its dereference
pub mod kuna_renderfault; // (kuna) test-only: panic one function's render partway through
pub mod kuna_rustarrayaddr;
pub mod kuna_rustarraydecay;
pub mod kuna_rustarrayindex;
pub mod kuna_rustarrayzero;
pub mod kuna_rustboolcast;
pub mod kuna_rustextend;
pub mod kuna_rustfmt;
pub mod kuna_rustfmtargs;
pub mod kuna_rustfmtflags;
pub mod kuna_rustfmtio;
pub mod kuna_rustfmtliteral;
pub mod kuna_rustfmtpanic;
pub mod kuna_rustfmtpieces;
pub mod kuna_rustfmtresult;
pub mod kuna_rustfmtstr;
pub mod kuna_rustfmtwrite;
pub mod kuna_rustfuncptr;
pub mod kuna_rustintegers;
mod kuna_rustoption;
pub mod kuna_rustptradd;
pub mod kuna_rustsigned;
pub mod kuna_ruststorevalue;
mod kuna_ruststorewidth;
pub mod kuna_rusttypes; // (kuna) the rust-language type speller
pub mod kuna_rustuserop;
pub mod kuna_rustwrapping;
pub mod kuna_signeddec; // (kuna) decimal signed constants
pub mod kuna_signedread; // (kuna) a signed read of an expression that prints unsigned casts it back
pub mod kuna_srcmap;
pub mod kuna_stackassign;
pub mod kuna_stackbytes;
pub mod kuna_stacklayout;
pub mod kuna_stackmem;
pub mod kuna_structassign; // (kuna) a memcpy of exactly one struct between pointers to that struct prints as *d = *s
pub mod kuna_structdefs;
pub mod kuna_swiftstrobj; // (kuna) a Swift string object is not a pointer to the bytes it lands on
pub mod kuna_truncarg;
pub mod kuna_truthycond;
pub mod kuna_typeround; // (kuna) the declared-signedness rounding decision
pub mod kuna_unknowncasts;
pub mod kuna_unsignedread; // (kuna) an unsigned read of an expression C evaluates as signed casts it
pub mod kuna_warnstyle;
pub mod kuna_widelocal;
pub mod prettyprint;
pub mod printc;
pub mod printlanguage;

pub mod kuna_stackmarkers;
pub mod kuna_stackversions;

pub mod kuna_indirectargs;

pub mod kuna_callprototypes;

pub mod kuna_gostorevalue;

pub mod kuna_constantshift;
pub mod kuna_fidproto; // (kuna) the prototype a .fid record carries, and its check against the body
pub mod kuna_reglocals;
pub mod kuna_selectmul; // (kuna `selectmul`) a*zext(c) + b*zext(!c) prints as c ? a : b
pub mod kuna_wideconst; // (kuna `wideconst`) a constant wider than 64 bits prints as one literal

pub mod kuna_widenedadd;

pub mod kuna_returnselector;
pub mod kuna_slotreport; // (kuna) a frame slot a printed local lives in is reported as that local
pub mod kuna_slotsplit; // (kuna) a frame row a narrower printed declaration lives inside is split at it
pub mod kuna_stackobjectinfo;
