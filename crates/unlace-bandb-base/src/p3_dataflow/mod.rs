//! S3 -- Definition web: SSA/heritage + the simplification rule pools.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod addcarrychain;
pub mod addrcompare;
pub mod alloca; // (unlace) a dynamic stack allocation becomes alloca(size)
pub mod arraystride;
pub mod bitfieldarith; // (unlace `bitfieldarith`) pure-arithmetic bitfield get and set
pub mod bitidioms;
pub mod booleanmask;
pub mod boxedcompare;
pub mod cancelbytearithmetic;
pub mod cmpmerge;
pub mod compareform;
pub mod condconst;
pub mod condexe;
#[doc(hidden)]
pub mod constantbytes;
pub mod constspaceload;
pub mod copyrun;
pub mod deadcascade;
pub mod devectorize;
pub mod egraph; // (unlace `egraph`) equality saturation over MBA trees
pub mod flagcompare;
pub mod floatnegation;
pub mod floatnegpiece;
pub mod floatquiet;
pub mod globalstorekeep;
pub mod haltloopguard;
pub mod indirectanchor; // (unlace) an op inserted after a guard INDIRECT anchors to the op it speaks for
pub mod inputrefinement;
pub mod inputtile;
pub mod intfloatround;
pub mod latecse;
pub mod loopcounterstore;
pub mod maskjoin;
pub mod mba; // (unlace `mba`) linear mixed boolean-arithmetic simplification
pub mod memoryguard;
pub mod mulblob; // (unlace) keep a widened multiply operand a value, not an aggregate
pub mod multiregargs;
pub mod octeoneffects;
pub mod opaquearms;
pub mod opaqueimplied;
pub mod ovlesssimplify;
pub mod pairphi; // (unlace `pairlocal`) a 64-bit local held in a register pair joins at its phis
pub mod partialglobalload;
pub mod persistcalls;
pub mod phithread;
pub mod pointeestorekeep;
pub mod prunedssa;
pub mod rangefold;
pub mod renamereads;
pub mod repstring;
pub mod ruleaction_2;
pub mod ruleaction_7;
pub mod satconvert;
pub mod satmul;
pub mod sccp; // (unlace `sccp`) sparse conditional constant propagation solver
pub mod selectdiv;
pub mod simdlane;
pub mod spillstoreguard;
pub mod splitstorekeep;
pub mod stackreadscope;
pub mod storecopyeffects;
pub mod strlenscan;
pub mod tiedstorekeep;
pub mod volatileload;
pub mod wideslice;
pub mod wrapsplit;
pub mod x87truncate;
