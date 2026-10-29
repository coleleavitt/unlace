// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x79F3E0
// Name:            lex_enum_macros
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x79F3E0 jmp     lex_enum_macros_0
//
// Resolved target: lex_enum_macros_0
// Target address:  0x79F360
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64 (__fastcall *)(__int64, const char *, _QWORD, _QWORD, __int64), __int64)
// ============================================================

/* see target sig */ lex_enum_macros(/* see target signature */)
{
    // Tail-call to lex_enum_macros_0 via direct jump indirection
    return lex_enum_macros_0(/* forwarded args */);
}

