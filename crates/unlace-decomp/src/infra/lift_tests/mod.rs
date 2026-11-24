//! Unit tests of lift-band modules that read higher-band modules. They live in the driver so the
//! lift band can become its own crate (unlace-lift) without a dev-dependency back on the passes.

mod int3pad;
mod noreturn_externmatch_hooks;
