// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1171A0
// Name:            .free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1171A0 jmp     cs:free_ptr
//
// Resolved target: free
// Target address:  0x8D6EE0
// GOT/IAT slot:    0x8A2570
// Slot symbol:     free_ptr
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

