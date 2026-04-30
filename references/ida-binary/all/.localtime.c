// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119260
// Name:            .localtime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119260 jmp     cs:localtime_ptr
//
// Resolved target: localtime
// Target address:  0x8D8348
// GOT/IAT slot:    0x8A35D0
// Slot symbol:     localtime_ptr
// Target type:     struct tm *(const time_t *timer)
// ============================================================

/* see target sig */ .localtime(/* see target signature */)
{
    // Tail-call to localtime via GOT/IAT indirection
    return localtime(/* forwarded args */);
}

