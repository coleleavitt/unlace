// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D20
// Name:            .init_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D20 jmp     cs:off_2C79E78
//
// Resolved target: init_database
// Target address:  0x38DCF0
// GOT/IAT slot:    0x2C79E78
// Slot symbol:     off_2C79E78
// Target type:     <no type info>
// ============================================================

void .init_database(/* see target signature */)
{
    // Tail-call to init_database via GOT/IAT indirection
    return init_database(/* forwarded args */);
}

