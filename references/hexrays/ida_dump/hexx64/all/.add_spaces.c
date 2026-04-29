// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3E0
// Name:            .add_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3E0 jmp     cs:off_4EE1D8
//
// Resolved target: add_spaces
// Target address:  0x4F2538
// GOT/IAT slot:    0x4EE1D8
// Slot symbol:     off_4EE1D8
// Target type:     <no type info>
// ============================================================

void .add_spaces(/* see target signature */)
{
    // Tail-call to add_spaces via GOT/IAT indirection
    return add_spaces(/* forwarded args */);
}

