//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod kuna_arraysize;
pub mod kuna_callretfold;
pub mod kuna_calltransport;
pub mod kuna_castobject;
pub mod kuna_contextnames;
pub mod kuna_cookiescramble;
pub mod kuna_declhightype;
pub mod kuna_dynamichashmax;
pub mod kuna_dynamiclocals;
pub mod kuna_flownames;
pub mod kuna_foldcallretphi;
pub mod kuna_globalvalue;
pub mod kuna_guardedreadtrim;
pub mod kuna_hideshadow;
pub mod kuna_impliedrefs;
pub mod kuna_indirectonly;
pub mod kuna_isolated;
pub mod kuna_libcnames;
pub mod kuna_naming;
pub mod kuna_nulterminator;
pub mod kuna_paramcopyhoist;
pub mod kuna_pointeevalue;
pub mod kuna_registerepochs;
pub mod kuna_slotptr;
pub mod kuna_spphistack; // (kuna `spphistack`) a bare input stack pointer at a phi is a stack address
pub mod kuna_stablenames;
pub mod kuna_stackexitanchor; // (kuna) the epilogue settles the last unknown call's purge
pub mod kuna_stackranges;
pub mod kuna_tiedphitrim;
pub mod kuna_undefinedcopy;
pub mod kuna_undefname;
pub mod kuna_varsources;
pub mod kuna_wrappedstackaggregate;
