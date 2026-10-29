// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA0A0
// Name:            .putenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA0A0 jmp     cs:off_2C7A838
//
// Resolved target: putenv
// Target address:  0x2D11900
// GOT/IAT slot:    0x2C7A838
// Slot symbol:     off_2C7A838
// Target type:     int(char *string)
// ============================================================

/* see target sig */ .putenv(/* see target signature */)
{
    // Tail-call to putenv via GOT/IAT indirection
    return putenv(/* forwarded args */);
}

