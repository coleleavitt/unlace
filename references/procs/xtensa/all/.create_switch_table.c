// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72A0
// Name:            .create_switch_table
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72A0 jmp     cs:off_1D138
//
// Resolved target: create_switch_table
// Target address:  0x1D468
// GOT/IAT slot:    0x1D138
// Slot symbol:     off_1D138
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .create_switch_table(/* see target signature */)
{
    // Tail-call to create_switch_table via GOT/IAT indirection
    return create_switch_table(/* forwarded args */);
}

