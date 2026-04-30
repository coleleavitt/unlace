// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112B60
// Name:            .mktime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112B60 jmp     cs:mktime_ptr
//
// Resolved target: mktime
// Target address:  0x8D4208
// GOT/IAT slot:    0x8A0250
// Slot symbol:     mktime_ptr
// Target type:     time_t(struct tm *tp)
// ============================================================

/* see target sig */ .mktime(/* see target signature */)
{
    // Tail-call to mktime via GOT/IAT indirection
    return mktime(/* forwarded args */);
}

