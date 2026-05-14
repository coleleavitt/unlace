# Shipped FLIRT-compatible signatures for glibc-2.39.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "glibc-2.39::memcpy"
bytes = "f30f1efa4889f84889d1f3a4c3"
mask = "ffffffffffffffffffffffffff"
length = 13

[[pattern]]
name = "glibc-2.39::memmove"
bytes = "f30f1efa4889f84839f70f82"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.39::memset"
bytes = "f30f1efa400fb6c64889d1f3aac3"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "glibc-2.39::strlen"
bytes = "f30f1efa660fefc04889f8"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.39::strcmp"
bytes = "f30f1efa4889f84829fe0fb6"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.39::strncmp"
bytes = "f30f1efa4885d274004889"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.39::strcpy"
bytes = "f30f1efa4889f84889f1"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "glibc-2.39::malloc"
bytes = "f30f1efa488b05000000004885c0"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "glibc-2.39::free"
bytes = "f30f1efa4885ff7400488b05"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.39::calloc"
bytes = "f30f1efa4885ff74004885f6"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.39::realloc"
bytes = "f30f1efa4885ff74004885f6"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.39::printf"
bytes = "f30f1efa4883ec004889f2"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "glibc-2.39::fopen"
bytes = "f30f1efa554889e54883ec00"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "glibc-2.39::pthread_create"
bytes = "f30f1efa415741564155"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "glibc-2.39::__libc_start_main"
bytes = "f30f1efa4157415641554889"
mask = "ffffffffffffffffffffffff"
length = 12
