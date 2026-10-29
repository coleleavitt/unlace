// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C10
// Name:            .rangeset_t_intersect
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C10 jmp     cs:off_2C79DF0
//
// Resolved target: rangeset_t_intersect
// Target address:  0x847600
// GOT/IAT slot:    0x2C79DF0
// Slot symbol:     off_2C79DF0
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *, __int64, int, int, int, __int64)
// ============================================================

/* see target sig */ .rangeset_t_intersect(/* see target signature */)
{
    // Tail-call to rangeset_t_intersect via GOT/IAT indirection
    return rangeset_t_intersect(/* forwarded args */);
}

