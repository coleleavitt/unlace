// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71F0
// Name:            .add_auto_stkpnt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71F0 jmp     cs:off_1D0E0
//
// Resolved target: add_auto_stkpnt
// Target address:  0x1D410
// GOT/IAT slot:    0x1D0E0
// Slot symbol:     off_1D0E0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .add_auto_stkpnt(/* see target signature */)
{
    // Tail-call to add_auto_stkpnt via GOT/IAT indirection
    return add_auto_stkpnt(/* forwarded args */);
}

