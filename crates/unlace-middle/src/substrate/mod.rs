//! Substrate -- shared IR, containers, and rewrite helpers used by every stage.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod actionprof;
pub mod addtreestate;
pub mod block;
pub mod capability;
pub mod comment;
pub mod context;
pub mod cover;
pub mod cpool;
pub mod dtype;
pub mod dynamic;
pub mod expression;
pub mod flow_flags;
pub mod funcdata;
pub mod funcdata_block;
pub mod funcdata_encode;
pub mod funcdata_merge;
pub mod funcdata_op;
pub mod funcdata_printraw;
pub mod funcdata_varnode;
pub mod idiom;
pub mod kuna_archstate;
pub mod kuna_avxintrin; // (kuna `avxintrinsics`) Intel intrinsic names for the SLEIGH AVX user-ops
pub mod kuna_budget;
pub mod kuna_calleefacts;
pub mod kuna_checkedarena;
pub mod kuna_dwarfregbind; // (kuna `dwarfscopes`) where a DWARF register local binds
pub mod kuna_emittedop;
pub mod kuna_fnmemory;
pub mod kuna_funcreport;
pub mod kuna_funcslots;
pub mod kuna_funcstate;
pub mod kuna_hostmem;
pub mod kuna_maturity; // (kuna) how far the scheduler has got through a pass (spec §0.10)
pub mod kuna_namespaces; // (kuna) which namespaces print in front of a name
pub mod kuna_optionset;
pub mod kuna_outlang;
pub mod kuna_passhooks;
pub mod kuna_printhandle;
pub mod kuna_regioneval;
pub mod kuna_specnames;
pub mod kuna_typequal; // (kuna) C type qualifiers on their own type layer
pub mod op;
pub mod pcodeinject;
pub mod rangeutil;
pub mod transform;
pub mod typeop;
pub mod userop;
pub mod variable;
pub mod varnode;
