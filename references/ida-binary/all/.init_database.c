// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113CA0
// Name:            .init_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113CA0 jmp     cs:init_database_ptr
//
// Resolved target: init_database
// Target address:  0x8D4D58
// GOT/IAT slot:    0x8A0AF0
// Slot symbol:     init_database_ptr
// Target type:     <no type info>
// ============================================================

void .init_database(/* see target signature */)
{
    // Tail-call to init_database via GOT/IAT indirection
    return init_database(/* forwarded args */);
}

