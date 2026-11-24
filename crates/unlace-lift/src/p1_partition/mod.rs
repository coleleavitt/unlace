//! S1 -- Image & code partition: architecture/loader binding.
//!
//! Stage-aligned module group; declared flatly at the crate root via re-export in
//! `lib.rs` so public paths (`unlace_decomp::<module>`) are unchanged.

pub mod aif;
pub mod cppsig;
pub mod esprom; // (unlace) the Espressif chip whose mask ROM and memory map apply
pub mod formatstring;
pub mod goreg; // (unlace) name+type the goroutine register as the `g` global (docs/multilang.md W4)
pub mod langfamily; // (unlace) the .ldefs processor/size/instruction order FID compares
pub mod litpoolconst;
pub mod memoryspecs; // (unlace) spec trees supplied from memory
pub mod mzdgroup; // (unlace) an MS-DOS executable's functions run with DS holding its data segment
pub mod octeonid; // (unlace) Octeon language IDs, built by the loader and read by call recovery
pub mod raw_arch;
pub mod sleigh_arch;
pub mod xml_arch;
