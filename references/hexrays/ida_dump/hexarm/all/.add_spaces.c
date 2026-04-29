// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F2A0
// Name:            .add_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F2A0 jmp     cs:off_4EA138
//
// Resolved target: add_spaces
// Target address:  0x4ECB98
// GOT/IAT slot:    0x4EA138
// Slot symbol:     off_4EA138
// Target type:     <no type info>
// ============================================================

void .add_spaces(/* see target signature */)
{
    // Tail-call to add_spaces via GOT/IAT indirection
    return add_spaces(/* forwarded args */);
}

