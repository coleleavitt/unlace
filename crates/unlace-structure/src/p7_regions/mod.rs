//! S7 -- Region hierarchy: the angr RegionIdentifier port.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod msvcstackguard;
pub mod securitycheck;
// (kuna) post-SSA Go write-barrier arm fold (shared/phi-feeding shapes;
// rides option gowritebarrier).
pub mod dynalloca;
pub mod gowbphi;
pub mod regiongraph;
pub mod regionid;
pub mod stackguard;

pub mod gobounds;
