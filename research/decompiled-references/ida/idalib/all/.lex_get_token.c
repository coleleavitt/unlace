// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAE00
// Name:            .lex_get_token
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAE00 jmp     cs:off_2C7AEE8
//
// Resolved target: lex_get_token
// Target address:  0x7A71A0
// GOT/IAT slot:    0x2C7AEE8
// Slot symbol:     off_2C7AEE8
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .lex_get_token(/* see target signature */)
{
    // Tail-call to lex_get_token via GOT/IAT indirection
    return lex_get_token(/* forwarded args */);
}

