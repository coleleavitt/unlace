// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2C0
// Name:            .free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2C0 jmp     cs:off_48160
//
// Resolved target: free
// Target address:  0x484A0
// GOT/IAT slot:    0x48160
// Slot symbol:     off_48160
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

