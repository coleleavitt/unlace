// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B240
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B240 jmp     cs:off_4BF908
//
// Resolved target: create_data
// Target address:  0x4C2E00
// GOT/IAT slot:    0x4BF908
// Slot symbol:     off_4BF908
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

