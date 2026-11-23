//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod coreaction_cleanup;
pub mod coreaction_stackptr;
pub mod cover;
pub mod dynamic;
pub mod funcdata_facing;
pub mod funcdata_merge;
pub mod funcdata_spacebase;
pub mod kuna_arrayextent;
pub mod kuna_arraysize;
pub mod kuna_bytehonest;
pub mod kuna_calleepop;
pub mod kuna_calleepopframe;
pub mod kuna_calleepopslot;
pub mod kuna_callretfold;
pub mod kuna_castobject;
pub mod kuna_contextnames;
pub mod kuna_cookiescramble;
pub mod kuna_dynamichashmax;
pub mod kuna_dynamiclocals;
pub mod kuna_endptrbound;
pub mod kuna_foldcallretphi;
pub mod kuna_fputruncviews;
pub mod kuna_globalorder;
pub mod kuna_globalvalue;
pub mod kuna_guardedreadtrim;
pub mod kuna_hideshadow;
pub mod kuna_impliedrefs;
pub mod kuna_indirectonly;
pub mod kuna_isolated;
pub mod kuna_libcnames;
pub mod kuna_loadorder;
pub(crate) mod kuna_localstackviews;
pub mod kuna_nulterminator;
pub mod kuna_paramcopyhoist;
pub mod kuna_pointeevalue;
pub mod kuna_registerepochs;
pub mod kuna_reglocals;
pub(crate) mod kuna_savedregisterspills;
pub mod kuna_slotptr;
pub mod kuna_slotreport; // (kuna) a frame slot a printed local lives in is reported as that local
pub mod kuna_slotsplit; // (kuna) a frame row a narrower printed declaration lives inside is split at it
pub mod kuna_stablenames;
pub mod kuna_stackalias;
pub mod kuna_stackexitanchor; // (kuna) the epilogue settles the last unknown call's purge
pub(crate) mod kuna_stackloadcover;
pub mod kuna_stackobjectalias;
pub mod kuna_stackobjectasserts;
pub mod kuna_stackobjectinfo;
pub mod kuna_stackobjects;
pub mod kuna_stackparamviews;
pub mod kuna_stackranges;
pub(crate) mod kuna_stackuses;
pub(crate) mod kuna_stackvaluecopies;
pub(crate) mod kuna_stackvalueorder;
pub(crate) mod kuna_stackvalueviews;
pub mod kuna_stackviews;
pub(crate) mod kuna_storereach;
pub mod kuna_tiedphitrim;
pub mod kuna_undefinedcopy;
pub mod kuna_undefname;
pub mod merge;
pub mod variable;
pub mod varmap;

pub(crate) mod kuna_wrappedstackaggregate;

pub mod kuna_callarrayextent;
pub(crate) mod kuna_stackstruct;
