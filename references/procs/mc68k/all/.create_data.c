// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6470
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6470 jmp     cs:off_1D220
//
// Resolved target: create_data
// Target address:  0x1D710
// GOT/IAT slot:    0x1D220
// Slot symbol:     off_1D220
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

