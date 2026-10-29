// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE10
// Name:            .rangeset_t_sub2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE10 jmp     cs:off_2C7B6F0
//
// Resolved target: rangeset_t_sub2
// Target address:  0x847430
// GOT/IAT slot:    0x2C7B6F0
// Slot symbol:     off_2C7B6F0
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .rangeset_t_sub2(/* see target signature */)
{
    // Tail-call to rangeset_t_sub2 via GOT/IAT indirection
    return rangeset_t_sub2(/* forwarded args */);
}

