# Shipped FLIRT-compatible signatures for dietlibc.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "dietlibc::_start"
bytes = "31ed4989d15e4889e24883e4f0"
mask = "ffffffffffffffffffffffffff"
length = 13

[[pattern]]
name = "dietlibc::memcpy"
bytes = "4889f84889d14885d27407f3a4c3"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "dietlibc::memset"
bytes = "4889f84889d10fb6f6f3aac3"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "dietlibc::strlen"
bytes = "4889f8803800740748ffc0ebf6"
mask = "ffffffffffffffffffffffffff"
length = 13

[[pattern]]
name = "dietlibc::strcmp"
bytes = "0fb6070fb60e38f0750ac3"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "dietlibc::strcpy"
bytes = "4889f80fb60e880848ffc648ffc1"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "dietlibc::malloc"
bytes = "4883ec084889fee800000000"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "dietlibc::free"
bytes = "4885ff7405e900000000"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "dietlibc::read"
bytes = "b8000000000f05c3"
mask = "ffffffffffffffff"
length = 8

[[pattern]]
name = "dietlibc::write"
bytes = "b8010000000f05c3"
mask = "ffffffffffffffff"
length = 8

[[pattern]]
name = "dietlibc::open"
bytes = "b8020000000f05c3"
mask = "ffffffffffffffff"
length = 8

[[pattern]]
name = "dietlibc::close"
bytes = "b8030000000f05c3"
mask = "ffffffffffffffff"
length = 8
