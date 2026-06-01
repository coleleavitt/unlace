// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC250
// Name:            .localtime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC250 jmp     cs:off_2C7B910
//
// Resolved target: localtime
// Target address:  0x2D11D38
// GOT/IAT slot:    0x2C7B910
// Slot symbol:     off_2C7B910
// Target type:     struct tm *(const time_t *timer)
// ============================================================

/* see target sig */ .localtime(/* see target signature */)
{
    // Tail-call to localtime via GOT/IAT indirection
    return localtime(/* forwarded args */);
}

