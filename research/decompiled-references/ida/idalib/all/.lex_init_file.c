// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A30
// Name:            .lex_init_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A30 jmp     cs:off_2C79500
//
// Resolved target: lex_init_file
// Target address:  0x7A7A00
// GOT/IAT slot:    0x2C79500
// Slot symbol:     off_2C79500
// Target type:     <no type info>
// ============================================================

void .lex_init_file(/* see target signature */)
{
    // Tail-call to lex_init_file via GOT/IAT indirection
    return lex_init_file(/* forwarded args */);
}

