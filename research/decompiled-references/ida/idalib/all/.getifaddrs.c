// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD070
// Name:            .getifaddrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD070 jmp     cs:off_2C7C020
//
// Resolved target: getifaddrs
// Target address:  0x2D11F38
// GOT/IAT slot:    0x2C7C020
// Slot symbol:     off_2C7C020
// Target type:     int(struct ifaddrs **ifap)
// ============================================================

/* see target sig */ .getifaddrs(/* see target signature */)
{
    // Tail-call to getifaddrs via GOT/IAT indirection
    return getifaddrs(/* forwarded args */);
}

