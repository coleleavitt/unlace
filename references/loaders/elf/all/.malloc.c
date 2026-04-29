// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9750
// Name:            .malloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9750 jmp     cs:off_89390
//
// Resolved target: malloc
// Target address:  0x8C6A0
// GOT/IAT slot:    0x89390
// Slot symbol:     off_89390
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ .malloc(/* see target signature */)
{
    // Tail-call to malloc via GOT/IAT indirection
    return malloc(/* forwarded args */);
}

