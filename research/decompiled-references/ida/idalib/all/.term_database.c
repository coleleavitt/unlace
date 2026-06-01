// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB20
// Name:            .term_database
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB20 jmp     cs:off_2C7B578
//
// Resolved target: term_database
// Target address:  0x387880
// GOT/IAT slot:    0x2C7B578
// Slot symbol:     off_2C7B578
// Target type:     <no type info>
// ============================================================

void .term_database(/* see target signature */)
{
    // Tail-call to term_database via GOT/IAT indirection
    return term_database(/* forwarded args */);
}

