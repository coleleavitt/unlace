// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA850
// Name:            .save_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA850 jmp     cs:off_2C7AC10
//
// Resolved target: save_database
// Target address:  0x5989C0
// GOT/IAT slot:    0x2C7AC10
// Slot symbol:     off_2C7AC10
// Target type:     <no type info>
// ============================================================

void .save_database(/* see target signature */)
{
    // Tail-call to save_database via GOT/IAT indirection
    return save_database(/* forwarded args */);
}

