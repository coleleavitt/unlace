// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C270
// Name:            .add_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C270 jmp     cs:off_4C1120
//
// Resolved target: add_spaces
// Target address:  0x4C4158
// GOT/IAT slot:    0x4C1120
// Slot symbol:     off_4C1120
// Target type:     <no type info>
// ============================================================

void .add_spaces(/* see target signature */)
{
    // Tail-call to add_spaces via GOT/IAT indirection
    return add_spaces(/* forwarded args */);
}

