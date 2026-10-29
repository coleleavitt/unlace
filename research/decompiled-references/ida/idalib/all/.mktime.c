// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8180
// Name:            .mktime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8180 jmp     cs:off_2C798A8
//
// Resolved target: mktime
// Target address:  0x2D11528
// GOT/IAT slot:    0x2C798A8
// Slot symbol:     off_2C798A8
// Target type:     time_t(struct tm *tp)
// ============================================================

/* see target sig */ .mktime(/* see target signature */)
{
    // Tail-call to mktime via GOT/IAT indirection
    return mktime(/* forwarded args */);
}

