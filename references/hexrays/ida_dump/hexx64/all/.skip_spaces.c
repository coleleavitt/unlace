// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C4A0
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C4A0 jmp     cs:off_4EDA38
//
// Resolved target: skip_spaces
// Target address:  0x4F1D58
// GOT/IAT slot:    0x4EDA38
// Slot symbol:     off_4EDA38
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

