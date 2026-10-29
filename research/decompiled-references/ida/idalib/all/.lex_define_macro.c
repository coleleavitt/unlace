// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD390
// Name:            .lex_define_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD390 jmp     cs:off_2C7C1B0
//
// Resolved target: lex_define_macro
// Target address:  0x7A2220
// GOT/IAT slot:    0x2C7C1B0
// Slot symbol:     off_2C7C1B0
// Target type:     <no type info>
// ============================================================

void .lex_define_macro(/* see target signature */)
{
    // Tail-call to lex_define_macro via GOT/IAT indirection
    return lex_define_macro(/* forwarded args */);
}

