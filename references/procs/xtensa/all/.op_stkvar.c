// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7040
// Name:            .op_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7040 jmp     cs:off_1D008
//
// Resolved target: op_stkvar
// Target address:  0x1D338
// GOT/IAT slot:    0x1D008
// Slot symbol:     off_1D008
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .op_stkvar(/* see target signature */)
{
    // Tail-call to op_stkvar via GOT/IAT indirection
    return op_stkvar(/* forwarded args */);
}

