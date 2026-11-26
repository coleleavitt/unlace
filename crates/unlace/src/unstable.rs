//! Extension surfaces that are not covered by the crate's stability promise.
//!
//! Everything under this module can change shape or disappear between
//! releases without a major version: it exists so the extension points
//! (`notes/extensibility-plan.md`) can be used and corrected before they are
//! promised. The rest of the crate is the stable surface.

pub mod hooks;
