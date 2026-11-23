//! Unit tests of lower-band modules that read higher-band modules. They live in the driver so each band
//! can become its own crate (unlace-middle, unlace-structure, ...) without a dev-dependency back up.

mod action;
mod architecture;
mod block;
mod funcdata_varnode;
mod funcdata_varnode_noreturn;
mod heritage;
mod jumptable;
mod jumptable_highslice_guard;
mod kuna_indexaliasguard;
mod kuna_indirectonly;
mod kuna_langabi;
mod kuna_msvcstackguard;
mod kuna_structsynth;
mod option_names;
mod remote_provider;
mod remote_provider_decode;
