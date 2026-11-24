//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod condconst;
pub mod condexe;
pub mod kuna_addcarrychain;
pub mod kuna_alloca; // (kuna) a dynamic stack allocation becomes alloca(size)
pub mod kuna_arraystride;
pub mod kuna_bitidioms;
pub mod kuna_booleanmask;
pub mod kuna_cancelbytearithmetic;
pub mod kuna_cmpmerge;
pub mod kuna_compareform;
#[doc(hidden)]
pub mod kuna_constantbytes;
pub mod kuna_constspaceload;
pub mod kuna_copyrun;
pub mod kuna_deadcascade;
pub mod kuna_devectorize;
pub mod kuna_flagcompare;
pub mod kuna_floatnegation;
pub mod kuna_floatnegpiece;
pub mod kuna_floatquiet;
pub mod kuna_globalstorekeep;
pub mod kuna_haltloopguard;
pub mod kuna_indirectanchor; // (kuna) an op inserted after a guard INDIRECT anchors to the op it speaks for
pub mod kuna_inputrefinement;
pub mod kuna_inputtile;
pub mod kuna_intfloatround;
pub mod kuna_latecse;
pub mod kuna_loopcounterstore;
pub mod kuna_mba; // (kuna `mba`) linear mixed boolean-arithmetic simplification
pub mod kuna_memoryguard;
pub mod kuna_mulblob; // (kuna) keep a widened multiply operand a value, not an aggregate
pub mod kuna_multiregargs;
pub mod kuna_octeoneffects;
pub mod kuna_opaquearms;
pub mod kuna_opaqueimplied;
pub mod kuna_ovlesssimplify;
pub mod kuna_partialglobalload;
pub mod kuna_persistcalls;
pub mod kuna_phithread;
pub mod kuna_pointeestorekeep;
pub mod kuna_prunedssa;
pub mod kuna_rangefold;
pub mod kuna_renamereads;
pub mod kuna_repstring;
pub mod kuna_selectdiv;
pub mod kuna_simdlane;
pub mod kuna_spillstoreguard;
pub mod kuna_splitstorekeep;
pub mod kuna_stackreadscope;
pub mod kuna_storecopyeffects;
pub mod kuna_strlenscan;
pub mod kuna_tiedstorekeep;
pub mod kuna_volatileload;
pub mod kuna_wideslice;
pub mod kuna_wrapsplit;
pub mod kuna_x87truncate;
pub mod ruleaction_2;
pub mod ruleaction_7;
