//! Substrate -- shared IR, containers, and rewrite helpers used by every stage.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod actionprof;
pub mod addtreestate;
pub mod archstate;
pub mod avxintrin; // (unlace `avxintrinsics`) Intel intrinsic names for the SLEIGH AVX user-ops
pub mod block;
pub mod budget;
pub mod calleefacts;
pub mod capability;
pub mod checkedarena;
pub mod comment;
pub mod condcallpush; // (unlace `condcallpush`) a call's return-address push is not a statement
pub mod context;
pub mod cover;
pub mod cpool;
pub mod dtype;
pub mod dwarfregbind; // (unlace `dwarfscopes`) where a DWARF register local binds
pub mod dynamic;
pub mod emittedop;
pub mod expression;
pub mod flow_flags;
pub mod fnmemory;
pub mod funcdata;
pub mod funcdata_block;
pub mod funcdata_encode;
pub mod funcdata_merge;
pub mod funcdata_op;
pub mod funcdata_printraw;
pub mod funcdata_varnode;
pub mod funcreport;
pub mod funcslots;
pub mod funcstate;
pub mod hostmem;
pub mod idiom;
pub mod knownbits; // (unlace #1276) known-one and known-zero masks; the bitwise transfers
pub mod maturity; // (unlace) how far the scheduler has got through a pass (spec §0.10)
pub mod namespaces; // (unlace) which namespaces print in front of a name
pub mod neonintrin; // (unlace `neonintrin`) ACLE NEON intrinsic names and vector types
pub mod op;
pub mod optionset;
pub mod orchainbool; // (unlace `orchainbool`) short-circuit protection only for boolean returns
pub mod outlang;
pub mod passhooks;
pub mod pcodeinject;
pub mod printhandle;
pub mod rangeutil;
pub mod regioneval;
pub mod specnames;
pub mod transform;
pub mod typeop;
pub mod typequal; // (unlace) C type qualifiers on their own type layer
pub mod userop;
pub mod variable;
pub mod varnode;
