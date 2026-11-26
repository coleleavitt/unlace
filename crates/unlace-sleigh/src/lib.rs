//! SLEIGH instruction decoding, p-code execution and shared compiler machinery.
//!
//! The runtime reads compiled `.sla` files, resolves instruction patterns and
//! emits p-code. Pattern builders, symbols and semantic templates also support
//! `unlace-slacomp`, which owns the SLEIGH source parser and compiler driver.
//! P-code expression construction is shared with the runtime snippet parser.
pub mod context;
pub mod contextscope;
pub mod ctxsnapshot;
pub mod emulate;
pub mod emulateutil;
mod expressionplan;
pub mod globalcontext;
mod handleview;
mod instructionbytes;
pub mod lazysla;
pub mod loadimage;
pub mod loadimage_xml;
pub mod memstate;
pub mod pcodecompile;
pub mod pcodeparse;
pub mod semantics;
pub mod sharedbytes;
pub mod slaformat;
pub(crate) mod slascan;
pub mod sleigh;
pub mod sleighbase;
pub mod slghpatexpress;
pub mod slghpattern;
pub mod slghsymbol;
pub mod translate;
