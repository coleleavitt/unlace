//! Unit tests of middle-band modules that read higher-band modules. They live in the driver so the
//! middle band can become its own crate (unlace-middle) without a dev-dependency back on the passes.

mod action;
mod architecture;
mod block;
mod jumptable;
mod remote_provider;
mod remote_provider_decode;
