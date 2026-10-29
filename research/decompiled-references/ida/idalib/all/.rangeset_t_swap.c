// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC540
// Name:            .rangeset_t_swap
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC540 jmp     cs:off_2C7BA88
//
// Resolved target: rangeset_t_swap
// Target address:  0x848EC0
// GOT/IAT slot:    0x2C7BA88
// Slot symbol:     off_2C7BA88
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *, __int64, int, int, int, __int64)
// ============================================================

/* see target sig */ .rangeset_t_swap(/* see target signature */)
{
    // Tail-call to rangeset_t_swap via GOT/IAT indirection
    return rangeset_t_swap(/* forwarded args */);
}

