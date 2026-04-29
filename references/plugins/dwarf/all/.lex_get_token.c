// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAAB0
// Name:            .lex_get_token
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAAB0 jmp     cs:off_CA540
//
// Resolved target: lex_get_token
// Target address:  0xD0E90
// GOT/IAT slot:    0xCA540
// Slot symbol:     off_CA540
// Target type:     <no type info>
// ============================================================

void .lex_get_token(/* see target signature */)
{
    // Tail-call to lex_get_token via GOT/IAT indirection
    return lex_get_token(/* forwarded args */);
}

