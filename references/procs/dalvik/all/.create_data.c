// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5330
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5330 jmp     cs:off_1A180
//
// Resolved target: create_data
// Target address:  0x1A508
// GOT/IAT slot:    0x1A180
// Slot symbol:     off_1A180
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

