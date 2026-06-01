// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8EE0
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8EE0 jmp     cs:off_2C79F58
//
// Resolved target: skip_spaces
// Target address:  0x84E9E0
// GOT/IAT slot:    0x2C79F58
// Slot symbol:     off_2C79F58
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

