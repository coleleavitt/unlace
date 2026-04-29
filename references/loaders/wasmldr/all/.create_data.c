// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .create_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_150C0
//
// Resolved target: create_data
// Target address:  0x152B0
// GOT/IAT slot:    0x150C0
// Slot symbol:     off_150C0
// Target type:     <no type info>
// ============================================================

void .create_data(/* see target signature */)
{
    // Tail-call to create_data via GOT/IAT indirection
    return create_data(/* forwarded args */);
}

