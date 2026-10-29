// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9480
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9480 jmp     cs:off_2C7A228
//
// Resolved target: create_strlit
// Target address:  0x35BDB0
// GOT/IAT slot:    0x2C7A228
// Slot symbol:     off_2C7A228
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, int, int, int, int, int, int, void *, __int64, int, int, void *ptr, __int64, int, int, int, int, int, __int64)
// ============================================================

/* see target sig */ .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

