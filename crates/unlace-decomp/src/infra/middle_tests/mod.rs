//! Unit tests of lower-band modules that read higher-band modules. They live in the driver so each band
//! can become its own crate (unlace-middle, unlace-structure, ...) without a dev-dependency back up.

mod action;
mod action_hooks;
mod architecture;
mod architecture_hooks;
mod block;
mod expression_hooks;
mod fspec_hooks;
mod funcdata_block_hooks;
mod funcdata_hooks;
mod funcdata_op_hooks;
mod funcdata_varnode;
mod funcdata_varnode_ancestor_tests_hooks;
mod funcdata_varnode_hooks;
mod funcdata_varnode_noreturn;
mod heritage;
mod heritage_hooks;
mod indexaliasguard;
mod indirectonly;
mod jumptable;
mod jumptable_highslice_guard;
mod langabi;
mod merge_hooks;
mod modelrules_hooks;
mod msvcstackguard;
mod option_names;
mod prefersplit_hooks;
mod remote_provider;
mod remote_provider_decode;
mod structsynth;
mod transform_hooks;
mod varmap_hooks;
