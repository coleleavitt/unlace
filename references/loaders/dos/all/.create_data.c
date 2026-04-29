// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2390
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2390 jmp     cs:off_B1B0
//
// Resolved target: create_data
// Target address:  0xB648
// GOT/IAT slot:    0xB1B0
// Slot symbol:     off_B1B0
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

