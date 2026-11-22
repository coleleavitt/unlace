//! Firmware images without an object-file header: probes that say where the
//! bytes load, which processor runs them and where execution starts.

pub mod cortexm;
pub mod tiano;
pub mod uefifv;
pub mod containers;
pub mod svd;
