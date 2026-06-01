// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1173C0
// Name:            .lex_get_token
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1173C0 jmp     cs:lex_get_token_ptr
//
// Resolved target: lex_get_token
// Target address:  0x8D7050
// GOT/IAT slot:    0x8A2680
// Slot symbol:     lex_get_token_ptr
// Target type:     <no type info>
// ============================================================

void .lex_get_token(/* see target signature */)
{
    // Tail-call to lex_get_token via GOT/IAT indirection
    return lex_get_token(/* forwarded args */);
}

