// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD00
// Name:            .free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD00 jmp     cs:off_2C7AE68
//
// Resolved target: free
// Target address:  0x2D11A38
// GOT/IAT slot:    0x2C7AE68
// Slot symbol:     off_2C7AE68
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

