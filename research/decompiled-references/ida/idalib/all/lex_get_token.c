// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7A71A0
// Name:            lex_get_token
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7A71A0 jmp     lex_get_token_0
//
// Resolved target: lex_get_token_0
// Target address:  0x7A7060
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, char *, __int64, __int64, __int64)
// ============================================================

/* see target sig */ lex_get_token(/* see target signature */)
{
    // Tail-call to lex_get_token_0 via direct jump indirection
    return lex_get_token_0(/* forwarded args */);
}

