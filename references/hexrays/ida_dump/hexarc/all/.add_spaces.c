// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B240
// Name:            .add_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B240 jmp     cs:off_4BA108
//
// Resolved target: add_spaces
// Target address:  0x4BCB48
// GOT/IAT slot:    0x4BA108
// Slot symbol:     off_4BA108
// Target type:     <no type info>
// ============================================================

void .add_spaces(/* see target signature */)
{
    // Tail-call to add_spaces via GOT/IAT indirection
    return add_spaces(/* forwarded args */);
}

