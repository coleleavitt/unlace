// Shared integration-test executable. Process-sensitive tests stay separate.
#[path = "golden_addrsort.rs"]
mod golden_addrsort;

#[path = "partmap_mut.rs"]
mod partmap_mut;

#[path = "testmarshal.rs"]
mod testmarshal;
