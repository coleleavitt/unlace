# Shipped FLIRT-compatible signatures for go-runtime.
# Format: unlace TOML .sig (byte pattern + mask + optional CRC fields).

[[pattern]]
name = "go-runtime::runtime.morestack_noctxt"
bytes = "488d442408483b6110762d"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "go-runtime::runtime.morestack"
bytes = "4c8d6424084d3b661076"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "go-runtime::runtime.newobject"
bytes = "488b4424084885c074"
mask = "ffffffffffffffffff"
length = 9

[[pattern]]
name = "go-runtime::runtime.makeslice"
bytes = "488b442408488b5c2410"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "go-runtime::runtime.gopanic"
bytes = "488b4424084889442408"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "go-runtime::runtime.deferproc"
bytes = "488b4424084885c074"
mask = "ffffffffffffffffff"
length = 9

[[pattern]]
name = "go-runtime::runtime.deferreturn"
bytes = "64488b0c25f8ffffff"
mask = "ffffffffffffffffff"
length = 9

[[pattern]]
name = "go-runtime::runtime.mapaccess1_faststr"
bytes = "488b442408488b5c2410"
mask = "ffffffffffffffffffff"
length = 10

[[pattern]]
name = "go-runtime::runtime.memmove"
bytes = "4889f84885d2740ff3a4c3"
mask = "ffffffffffffffffffffff"
length = 11

[[pattern]]
name = "go-runtime::runtime.duffcopy"
bytes = "488b3424488b7c2408"
mask = "ffffffffffffffffff"
length = 9
