// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9430
// Name:            .gmtime_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9430 jmp     cs:off_2C7A200
//
// Resolved target: gmtime_r
// Target address:  0x2D11758
// GOT/IAT slot:    0x2C7A200
// Slot symbol:     off_2C7A200
// Target type:     struct tm *(const time_t *timer, struct tm *tp)
// ============================================================

/* see target sig */ .gmtime_r(/* see target signature */)
{
    // Tail-call to gmtime_r via GOT/IAT indirection
    return gmtime_r(/* forwarded args */);
}

