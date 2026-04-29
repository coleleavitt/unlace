// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D2C0
// Name:            .compare_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D2C0 jmp     cs:off_B3148
//
// Resolved target: compare_tinfo
// Target address:  0xB38D0
// GOT/IAT slot:    0xB3148
// Slot symbol:     off_B3148
// Target type:     <no type info>
// ============================================================

void .compare_tinfo(/* see target signature */)
{
    // Tail-call to compare_tinfo via GOT/IAT indirection
    return compare_tinfo(/* forwarded args */);
}

