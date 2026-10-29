// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F60
// Name:            .getuid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F60 jmp     cs:off_2C79798
//
// Resolved target: getuid
// Target address:  0x2D114D8
// GOT/IAT slot:    0x2C79798
// Slot symbol:     off_2C79798
// Target type:     __uid_t(void)
// ============================================================

/* see target sig */ .getuid(/* see target signature */)
{
    // Tail-call to getuid via GOT/IAT indirection
    return getuid(/* forwarded args */);
}

