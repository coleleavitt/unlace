# Shipped FLIRT-compatible signatures for musl-1.2.x.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "musl-1.2.x::memcpy"
bytes = "4889f84885d2740ff3a4c3"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "musl-1.2.x::memmove"
bytes = "4889f84839f776104885d2"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "musl-1.2.x::memset"
bytes = "4889f80fb6f64889d148"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::strlen"
bytes = "4889f8803f0074054883c0"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "musl-1.2.x::strcmp"
bytes = "0fb6070fb61638d0750a"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::strncmp"
bytes = "4885d2741a0fb6070fb6"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::strcpy"
bytes = "4889f80fb60e88084883"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::malloc"
bytes = "4883ec084889fe488b3d"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::free"
bytes = "4885ff7405488b050000"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::calloc"
bytes = "4883ec184889fa48f7e6"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::realloc"
bytes = "4885ff74104885f674"
mask = "ffffffffffffffffff"
length = 9

[[pattern]]
name = "musl-1.2.x::pthread_create"
bytes = "41574156415541545553"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "musl-1.2.x::__libc_start_main"
bytes = "4883ec2848897c2408"
mask = "ffffffffffffffffff"
length = 9
