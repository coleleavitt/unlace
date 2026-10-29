// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC260
// Name:            .freeifaddrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC260 jmp     cs:off_2C7B918
//
// Resolved target: freeifaddrs
// Target address:  0x2D11D40
// GOT/IAT slot:    0x2C7B918
// Slot symbol:     off_2C7B918
// Target type:     void(struct ifaddrs *ifa)
// ============================================================

/* see target sig */ .freeifaddrs(/* see target signature */)
{
    // Tail-call to freeifaddrs via GOT/IAT indirection
    return freeifaddrs(/* forwarded args */);
}

