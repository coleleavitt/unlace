// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118860
// Name:            .term_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118860 jmp     cs:term_database_ptr
//
// Resolved target: term_database
// Target address:  0x8D7D28
// GOT/IAT slot:    0x8A30D0
// Slot symbol:     term_database_ptr
// Target type:     <no type info>
// ============================================================

void .term_database(/* see target signature */)
{
    // Tail-call to term_database via GOT/IAT indirection
    return term_database(/* forwarded args */);
}

