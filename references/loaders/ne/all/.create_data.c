// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_B130
//
// Resolved target: create_data
// Target address:  0xB3C8
// GOT/IAT slot:    0xB130
// Slot symbol:     off_B130
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

