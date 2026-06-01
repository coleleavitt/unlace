// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC4E0
// Name:            .format_charlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC4E0 jmp     cs:off_2C7BA58
//
// Resolved target: format_charlit
// Target address:  0x575230
// GOT/IAT slot:    0x2C7BA58
// Slot symbol:     off_2C7BA58
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *ptr, __int64, int, int, int, int, int, int, int, int, int, int, int, int, int, __int64)
// ============================================================

/* see target sig */ .format_charlit(/* see target signature */)
{
    // Tail-call to format_charlit via GOT/IAT indirection
    return format_charlit(/* forwarded args */);
}

