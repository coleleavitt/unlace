// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7770
// Name:            .localtime_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7770 jmp     cs:off_2C793A0
//
// Resolved target: localtime_r
// Target address:  0x2D11410
// GOT/IAT slot:    0x2C793A0
// Slot symbol:     off_2C793A0
// Target type:     struct tm *(const time_t *timer, struct tm *tp)
// ============================================================

/* see target sig */ .localtime_r(/* see target signature */)
{
    // Tail-call to localtime_r via GOT/IAT indirection
    return localtime_r(/* forwarded args */);
}

