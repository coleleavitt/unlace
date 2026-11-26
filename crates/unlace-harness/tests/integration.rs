// Shared integration-test executable. Process-sensitive tests stay separate.
#[path = "bitfield_byte_pull.rs"]
mod bitfield_byte_pull;

#[path = "lift_diff.rs"]
mod lift_diff;

#[path = "variadic_readonly_format.rs"]
mod variadic_readonly_format;

#[path = "verify_buildstamp.rs"]
mod verify_buildstamp;
