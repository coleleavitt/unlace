// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7080
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7080 jmp     cs:off_1D028
//
// Resolved target: verror
// Target address:  0x1D358
// GOT/IAT slot:    0x1D028
// Slot symbol:     off_1D028
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

