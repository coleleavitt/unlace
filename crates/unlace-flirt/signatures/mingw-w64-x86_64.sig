# Shipped FLIRT-compatible signatures for mingw-w64.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "mingw-w64::__main"
bytes = "4883ec28488b05000000004885c074"
mask = "ffffffffffffffffffffffffffffff"
length = 15

[[pattern]]
name = "mingw-w64::__tmainCRTStartup"
bytes = "4157415641554154555756534883ec"
mask = "ffffffffffffffffffffffffffffff"
length = 15

[[pattern]]
name = "mingw-w64::memcpy"
bytes = "4889f84885d2740ff3a4c3"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "mingw-w64::memset"
bytes = "4889f8400fb6f64889d1f3aa"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "mingw-w64::strlen"
bytes = "4889f84883c0ff4883c0018038"
mask = "ffffffffffffffffffffffffff"
length = 13

[[pattern]]
name = "mingw-w64::malloc"
bytes = "4883ec284889cfe800000000"
mask = "ffffffffffffffffffffffff"
length = 12

[[pattern]]
name = "mingw-w64::free"
bytes = "4883ec284885c97405e800000000"
mask = "ffffffffffffffffffffffffffff"
length = 14

[[pattern]]
name = "mingw-w64::printf"
bytes = "4883ec3848895424484c894424"
mask = "ffffffffffffffffffffffffff"
length = 13

[[pattern]]
name = "mingw-w64::_pei386_runtime_relocator"
bytes = "415741564155415455575653"
mask = "ffffffffffffffffffffffff"
length = 12
