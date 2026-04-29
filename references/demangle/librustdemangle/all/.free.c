// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .free
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x10C0 endbr64
//   0x10C4 bnd jmp cs:off_6020
//
// Resolved target: free
// Target address:  0x6068
// GOT/IAT slot:    0x6020
// Slot symbol:     off_6020
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

