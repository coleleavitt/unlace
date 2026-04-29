// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110 jmp     cs:off_4070
//
// Resolved target: create_data
// Target address:  0x4188
// GOT/IAT slot:    0x4070
// Slot symbol:     off_4070
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

