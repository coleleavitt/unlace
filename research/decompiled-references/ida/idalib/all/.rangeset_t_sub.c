// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB150
// Name:            .rangeset_t_sub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB150 jmp     cs:off_2C7B090
//
// Resolved target: rangeset_t_sub
// Target address:  0x845DC0
// GOT/IAT slot:    0x2C7B090
// Slot symbol:     off_2C7B090
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *, __int64, int, int, int, __int64)
// ============================================================

/* see target sig */ .rangeset_t_sub(/* see target signature */)
{
    // Tail-call to rangeset_t_sub via GOT/IAT indirection
    return rangeset_t_sub(/* forwarded args */);
}

