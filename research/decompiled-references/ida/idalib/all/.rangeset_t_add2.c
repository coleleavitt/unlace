// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B80
// Name:            .rangeset_t_add2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B80 jmp     cs:off_2C79DA8
//
// Resolved target: rangeset_t_add2
// Target address:  0x8473C0
// GOT/IAT slot:    0x2C79DA8
// Slot symbol:     off_2C79DA8
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .rangeset_t_add2(/* see target signature */)
{
    // Tail-call to rangeset_t_add2 via GOT/IAT indirection
    return rangeset_t_add2(/* forwarded args */);
}

