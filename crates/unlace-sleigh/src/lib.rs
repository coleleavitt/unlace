//! SLEIGH instruction decoding, p-code execution and shared compiler machinery.
//!
//! The runtime reads compiled `.sla` files, resolves instruction patterns and
//! emits p-code. Pattern builders, symbols and semantic templates also support
//! `unlace-slacomp`, which owns the SLEIGH source parser and compiler driver.
//! P-code expression construction is shared with the runtime snippet parser.
pub mod context;
pub mod emulate;
pub mod emulateutil;
pub mod globalcontext;
pub mod kuna_contextscope;
pub mod kuna_ctxsnapshot;
mod kuna_expressionplan;
mod kuna_handleview;
mod kuna_instructionbytes;
pub mod kuna_lazytemplates;
pub mod kuna_sharedbytes;
pub mod loadimage;
pub mod loadimage_xml;
pub mod memstate;
pub mod pcodecompile;
pub mod pcodeparse;
pub mod semantics;
pub mod slaformat;
pub mod sleigh;
pub mod sleighbase;
pub mod slghpatexpress;
pub mod slghpattern;
pub mod slghsymbol;
pub mod translate;
