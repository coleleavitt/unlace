// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F40
// Name:            .dlclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F40 jmp     cs:off_2C79788
//
// Resolved target: dlclose
// Target address:  0x2D114D0
// GOT/IAT slot:    0x2C79788
// Slot symbol:     off_2C79788
// Target type:     int(void *handle)
// ============================================================

/* see target sig */ .dlclose(/* see target signature */)
{
    // Tail-call to dlclose via GOT/IAT indirection
    return dlclose(/* forwarded args */);
}

