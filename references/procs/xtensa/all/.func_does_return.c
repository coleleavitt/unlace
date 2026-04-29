// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7210
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7210 jmp     cs:off_1D0F0
//
// Resolved target: func_does_return
// Target address:  0x1D420
// GOT/IAT slot:    0x1D0F0
// Slot symbol:     off_1D0F0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

