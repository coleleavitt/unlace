// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C260
// Name:            .add_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C260 jmp     cs:off_4C0118
//
// Resolved target: add_spaces
// Target address:  0x4C3650
// GOT/IAT slot:    0x4C0118
// Slot symbol:     off_4C0118
// Target type:     <no type info>
// ============================================================

void .add_spaces(/* see target signature */)
{
    // Tail-call to add_spaces via GOT/IAT indirection
    return add_spaces(/* forwarded args */);
}

