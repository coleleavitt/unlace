// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC090
// Name:            .create_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC090 jmp     cs:off_2C7B830
//
// Resolved target: create_dirtree
// Target address:  0x779D20
// GOT/IAT slot:    0x2C7B830
// Slot symbol:     off_2C7B830
// Target type:     <no type info>
// ============================================================

void .create_dirtree(/* see target signature */)
{
    // Tail-call to create_dirtree via GOT/IAT indirection
    return create_dirtree(/* forwarded args */);
}

