# Shipped FLIRT-compatible signatures for msvcrt-14.x.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "msvcrt-14.x::memcpy"
bytes = "488bc14885d2740ff3a4c3"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "msvcrt-14.x::memmove"
bytes = "488bc1483bd1760f4885"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::memset"
bytes = "488bc1440fb6ca488bd2"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::strlen"
bytes = "488bc8803900740c48ff"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::strcmp"
bytes = "0fb6010fb6092bc1740d"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::strncmp"
bytes = "4885d274210fb6010fb6"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::strcpy"
bytes = "488bc80fb611881048ff"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::malloc"
bytes = "4883ec284885c9740d"
mask = "ffffffffffffffffff"
length = 9

[[pattern]]
name = "msvcrt-14.x::free"
bytes = "4885c9740648ff250000"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::calloc"
bytes = "4883ec28488bd1488bc1"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::realloc"
bytes = "4883ec28488bd1488bc1"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::printf"
bytes = "4883ec2848895424104c"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::fopen"
bytes = "48895c24084889742410"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "msvcrt-14.x::exit"
bytes = "4883ec28488bcfff15"
mask = "ffffffffffffffffff"
length = 9
