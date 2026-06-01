// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB070
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB070 jmp     cs:off_2C7B020
//
// Resolved target: rangeset_t_add
// Target address:  0x845CC0
// GOT/IAT slot:    0x2C7B020
// Slot symbol:     off_2C7B020
// Target type:     __int64 __fastcall(int, int, int, int, int, int, int, void *, __int64, int, int, int, __int64)
// ============================================================

/* see target sig */ .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

