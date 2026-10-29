// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7A7A00
// Name:            lex_init_file
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7A7A00 jmp     lex_init_file_0
//
// Resolved target: lex_init_file_0
// Target address:  0x7A78F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ lex_init_file(/* see target signature */)
{
    // Tail-call to lex_init_file_0 via direct jump indirection
    return lex_init_file_0(/* forwarded args */);
}

