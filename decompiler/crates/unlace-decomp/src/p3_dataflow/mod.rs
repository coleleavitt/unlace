//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod condconst;
pub mod condexe;
pub mod coreaction_early;
pub mod heritage;
pub mod kuna_addcarrychain;
pub mod kuna_alloca; // (kuna) a dynamic stack allocation becomes alloca(size)
pub mod kuna_arraystride;
pub mod kuna_bitidioms;
pub mod kuna_booleanmask;
mod kuna_calleeflags;
pub(crate) mod kuna_calleehomes;
pub mod kuna_calleememory;
pub mod kuna_calloverlap;
pub mod kuna_cancelbytearithmetic;
pub mod kuna_cmpmerge;
pub mod kuna_compareform;
mod kuna_constantbytes;
pub mod kuna_constspaceload;
pub mod kuna_copyrun;
pub(crate) mod kuna_deadcascade;
pub mod kuna_devectorize;
pub mod kuna_flagcompare;
pub(crate) mod kuna_floatnegation;
pub(crate) mod kuna_floatnegpiece;
pub mod kuna_floatquiet;
pub(crate) mod kuna_globalarrayanchor;
pub(crate) mod kuna_globalcallranges;
pub mod kuna_globalcallstore;
pub(crate) mod kuna_globalfieldstore;
pub mod kuna_globalorderkeep;
pub mod kuna_globalstorekeep;
pub(crate) mod kuna_haltloopguard;
pub mod kuna_indexaliasguard;
pub mod kuna_indirectanchor; // (kuna) an op inserted after a guard INDIRECT anchors to the op it speaks for
pub(crate) mod kuna_inputrefinement;
pub mod kuna_inputtile;
pub mod kuna_intfloatround;
pub mod kuna_latecse;
mod kuna_leafmemory;
pub(crate) mod kuna_loadguardreads;
pub mod kuna_loopcounterstore;
pub mod kuna_mba; // (kuna `mba`) linear mixed boolean-arithmetic simplification
pub(crate) mod kuna_memoryguard;
pub mod kuna_mulblob; // (kuna) keep a widened multiply operand a value, not an aggregate
pub(crate) mod kuna_multiregargs;
pub mod kuna_narrowload; // (kuna) a narrow LOAD keeps its own width
pub mod kuna_octeoneffects;
pub mod kuna_opaquepredicate;
pub mod kuna_ovlesssimplify;
pub mod kuna_pairrefine;
pub(crate) mod kuna_partialglobalload;
pub(crate) mod kuna_persistcalls;
pub mod kuna_pointeestorekeep;
pub(crate) mod kuna_prunedssa;
pub mod kuna_rangefold;
pub mod kuna_regnarrow;
pub(crate) mod kuna_renamereads;
pub(crate) mod kuna_repframecopy;
pub mod kuna_repstring;
pub(crate) mod kuna_revisitrefine;
pub mod kuna_segmentize;
pub mod kuna_selectdiv;
pub mod kuna_simdlane;
pub(crate) mod kuna_spillstoreguard;
pub mod kuna_splitstorekeep;
pub(crate) mod kuna_stackbytecopy;
pub mod kuna_stackeffects;
pub(crate) mod kuna_stackreadscope;
pub(crate) mod kuna_stackstoreguard;
pub(crate) mod kuna_storecopyeffects;
pub mod kuna_strlenscan;
pub mod kuna_tiedstorekeep;
pub(crate) mod kuna_volatileload;
pub mod kuna_wideslice;
pub(crate) mod kuna_wrapsplit;
pub mod kuna_x87truncate;
pub mod ruleaction_1;
pub mod ruleaction_2;
pub mod ruleaction_3;
pub mod ruleaction_4;
pub mod ruleaction_5;
pub mod ruleaction_6;
pub mod ruleaction_7;
pub mod ruleaction_8;
pub mod subflow;
