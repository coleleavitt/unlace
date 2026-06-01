// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC7A0
// Name:            .lex_print_token
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC7A0 jmp     cs:off_2C7BBB8
//
// Resolved target: lex_print_token
// Target address:  0x7A82A0
// GOT/IAT slot:    0x2C7BBB8
// Slot symbol:     off_2C7BBB8
// Target type:     <no type info>
// ============================================================

void .lex_print_token(/* see target signature */)
{
    // Tail-call to lex_print_token via GOT/IAT indirection
    return lex_print_token(/* forwarded args */);
}

