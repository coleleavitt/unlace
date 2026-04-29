// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33C0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33C0 jmp     cs:off_141C8
//
// Resolved target: create_data
// Target address:  0x147B8
// GOT/IAT slot:    0x141C8
// Slot symbol:     off_141C8
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

