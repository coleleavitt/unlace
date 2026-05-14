# Shipped FLIRT-compatible signatures for ulibc-ng.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "ulibc-ng::__uClibc_main"
bytes = "415741564155415455534883ec"
mask = "ffffffffffffffffffffffffff"
length = 13

[[pattern]]
name = "ulibc-ng::memcpy"
bytes = "4889f84885d2740ff3a4c3"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "ulibc-ng::memmove"
bytes = "4889f84839f776104885d2"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "ulibc-ng::memset"
bytes = "4889f8400fb6f64889d1f3aa"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "ulibc-ng::strlen"
bytes = "4889f84883c0ff80380075f7"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "ulibc-ng::strcmp"
bytes = "0fb6070fb61638d0750a"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "ulibc-ng::strcpy"
bytes = "4889f80fb60e88084883c601"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "ulibc-ng::malloc"
bytes = "4883ec184889fee800000000"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "ulibc-ng::free"
bytes = "4885ff7407488b0500000000"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "ulibc-ng::calloc"
bytes = "4883ec184889f248f7e6"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "ulibc-ng::realloc"
bytes = "4883ec184885ff7410"
mask = "ffffffffffffffffff"
length = 9
