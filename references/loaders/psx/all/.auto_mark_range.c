// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23D0
// Name:            .auto_mark_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23D0 jmp     cs:off_A1D0
//
// Resolved target: auto_mark_range
// Target address:  0xA498
// GOT/IAT slot:    0xA1D0
// Slot symbol:     off_A1D0
// Target type:     <no type info>
// ============================================================

void .auto_mark_range(/* see target signature */)
{
    // Tail-call to auto_mark_range via GOT/IAT indirection
    return auto_mark_range(/* forwarded args */);
}

