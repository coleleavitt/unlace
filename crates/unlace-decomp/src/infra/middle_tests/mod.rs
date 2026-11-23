//! Unit tests of middle-band modules that read higher-band modules. They live in the driver so the
//! middle band can become its own crate (unlace-middle) without a dev-dependency back on the passes.

mod action;
mod architecture;
mod block;
mod funcdata_varnode;
mod funcdata_varnode_noreturn;
mod heritage;
mod jumptable;
mod jumptable_highslice_guard;
mod remote_provider;
mod remote_provider_decode;
