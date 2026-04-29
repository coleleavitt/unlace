// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF90
// Name:            .save_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF90 jmp     cs:off_4CDFB0
//
// Resolved target: save_database
// Target address:  0x4D0A00
// GOT/IAT slot:    0x4CDFB0
// Slot symbol:     off_4CDFB0
// Target type:     <no type info>
// ============================================================

void .save_database(/* see target signature */)
{
    // Tail-call to save_database via GOT/IAT indirection
    return save_database(/* forwarded args */);
}

