# Shipped FLIRT-compatible signatures for glibc-2.34.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "glibc-2.34::memcpy"
bytes = "f30f1efa4889f84889d1f3a4c3"
mask = "ffffffffffffffffffffffffff"
length = 13

[[pattern]]
name = "glibc-2.34::memmove"
bytes = "f30f1efa4889f84839f7"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "glibc-2.34::memset"
bytes = "f30f1efa400fb6c64889d1f3aac3"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "glibc-2.34::strlen"
bytes = "f30f1efa660fefc04889f8"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.34::strcmp"
bytes = "f30f1efa4889f84829fe"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "glibc-2.34::strncmp"
bytes = "f30f1efa4885d274"
mask = "ffffffffffffffff"
length = 8

[[pattern]]
name = "glibc-2.34::strcpy"
bytes = "f30f1efa4889f84889f1"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "glibc-2.34::malloc"
bytes = "f30f1efa488b05000000004885c0"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "glibc-2.34::free"
bytes = "f30f1efa4885ff7400488b05"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.34::calloc"
bytes = "f30f1efa4885ff74004885f6"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.34::realloc"
bytes = "f30f1efa4885ff74004885f6"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.34::printf"
bytes = "f30f1efa4883ec004889f2"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.34::puts"
bytes = "f30f1efa4883ec18"
mask = "ffffffffffffffff"
length = 8

[[pattern]]
name = "glibc-2.34::open"
bytes = "f30f1efab8020000000f05"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.34::read"
bytes = "f30f1efab8000000000f05"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.34::write"
bytes = "f30f1efab8010000000f05"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.34::close"
bytes = "f30f1efab8030000000f05"
mask = "ffffffffffffffffffffff"
length = 11
