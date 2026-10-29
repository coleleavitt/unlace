// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA2D0
// Name:            .lex_term_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA2D0 jmp     cs:off_2C7A950
//
// Resolved target: lex_term_file
// Target address:  0x7A7D00
// GOT/IAT slot:    0x2C7A950
// Slot symbol:     off_2C7A950
// Target type:     <no type info>
// ============================================================

void .lex_term_file(/* see target signature */)
{
    // Tail-call to lex_term_file via GOT/IAT indirection
    return lex_term_file(/* forwarded args */);
}

