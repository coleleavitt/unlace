//! S6 -- Variable & storage model: HighVariables, merge, stack layout.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod arraysize;
pub mod callretfold;
pub mod calltransport;
pub mod castobject;
pub mod contextnames;
pub mod cookiescramble;
pub mod declhightype;
pub mod dynamichashmax;
pub mod dynamiclocals;
pub mod flownames;
pub mod foldcallretphi;
pub mod globalvalue;
pub mod guardedreadtrim;
pub mod hideshadow;
pub mod impliedrefs;
pub mod indexstride;
pub mod indirectonly;
pub mod isolated;
pub mod libcnames;
pub mod naming;
pub mod nulterminator;
pub mod paramcopyhoist;
pub mod pointeevalue;
pub mod registerepochs;
pub mod slotptr;
pub mod pkthdr;
pub mod sockfamily;
pub mod spphistack; // (unlace `spphistack`) a bare input stack pointer at a phi is a stack address
pub mod stablenames;
pub mod stackexitanchor; // (unlace) the epilogue settles the last unknown call's purge
pub mod stackranges;
pub mod tiedphitrim;
pub mod undefinedcopy;
pub mod undefname;
pub mod varsources;
pub mod wrappedstackaggregate;
