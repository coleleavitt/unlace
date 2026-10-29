// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA340
// Name:            .lex_init_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA340 jmp     cs:off_2C7A988
//
// Resolved target: lex_init_string
// Target address:  0x7A7D10
// GOT/IAT slot:    0x2C7A988
// Slot symbol:     off_2C7A988
// Target type:     <no type info>
// ============================================================

void .lex_init_string(/* see target signature */)
{
    // Tail-call to lex_init_string via GOT/IAT indirection
    return lex_init_string(/* forwarded args */);
}

