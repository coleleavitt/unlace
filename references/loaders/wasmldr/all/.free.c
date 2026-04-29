// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            .free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_150D8
//
// Resolved target: free
// Target address:  0x152C8
// GOT/IAT slot:    0x150D8
// Slot symbol:     off_150D8
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

