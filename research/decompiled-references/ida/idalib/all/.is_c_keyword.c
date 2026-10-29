// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB8C0
// Name:            .is_c_keyword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB8C0 jmp     cs:off_2C7B448
//
// Resolved target: is_c_keyword
// Target address:  0x7A0870
// GOT/IAT slot:    0x2C7B448
// Slot symbol:     off_2C7B448
// Target type:     __int64 __fastcall(char *s2)
// ============================================================

/* see target sig */ .is_c_keyword(/* see target signature */)
{
    // Tail-call to is_c_keyword via GOT/IAT indirection
    return is_c_keyword(/* forwarded args */);
}

