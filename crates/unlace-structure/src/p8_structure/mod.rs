//! S8 -- Structured AST & goto quality: the structuring engine.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod blockaction;
pub mod clonephiorder;
pub mod condfold;
pub mod condstmts;
pub mod crossjumpreverter;
pub mod crossjumptail;
pub mod dedupitetail;
mod domindex;
pub mod earlyreturn;
pub mod gotolabel;
pub mod gotonext;
pub mod gotoreduce;
pub mod gotosink;
pub mod guardedloop;
pub mod ifelseflatten;
pub mod ifnoexit;
pub mod irreducible_split;
pub mod iteboolean;
pub mod itecondlist;
pub mod iteregion;
pub mod loopbreak_recovery;
pub mod loopcontinue;
pub mod looprotate; // (unlace `looprotate`) a guarded do-while loop becomes a while loop
pub mod orchain;
pub mod outline;
pub mod region_structurer;
pub mod retsplitglobal;
pub mod retsplitlimit;
pub mod rettriangle;
pub mod returndup;
pub mod returndupcalls;
pub mod switchmerge;
pub mod switchreturn;
pub mod taildup;
