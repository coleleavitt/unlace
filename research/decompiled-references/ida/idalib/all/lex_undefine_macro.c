// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7A1930
// Name:            lex_undefine_macro
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7A1930 jmp     lex_undefine_macro_0
//
// Resolved target: lex_undefine_macro_0
// Target address:  0x7A1670
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, const char *)
// ============================================================

/* see target sig */ lex_undefine_macro(/* see target signature */)
{
    // Tail-call to lex_undefine_macro_0 via direct jump indirection
    return lex_undefine_macro_0(/* forwarded args */);
}

