# Shipped FLIRT-compatible signatures for rust-libcore.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "rust-libcore::core::panicking::panic_fmt"
bytes = "4883ec1848897c24084889542410"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "rust-libcore::core::panicking::panic_bounds_check"
bytes = "4883ec2848897c24104889742418"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "rust-libcore::core::slice::index::slice_start_index_len_fail"
bytes = "4883ec2848897c24104889742418"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "rust-libcore::core::str::slice_error_fail"
bytes = "4883ec3848897c24104889742418"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "rust-libcore::core::option::unwrap_failed"
bytes = "4883ec18488d3d00000000"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "rust-libcore::core::result::unwrap_failed"
bytes = "4883ec2848897c24104889742418"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "rust-libcore::core::ptr::drop_in_place"
bytes = "4885ff7405e900000000c3"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "rust-libcore::core::alloc::layout::Layout::from_size_align_unchecked"
bytes = "4889f84885f6740a"
mask = "ffffffffffffffff"
length = 8

[[pattern]]
name = "rust-libcore::core::fmt::write"
bytes = "41574156415541545553"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "rust-libcore::core::intrinsics::copy_nonoverlapping"
bytes = "4889f84889d1f3a4c3"
mask = "ffffffffffffffffff"
length = 9
