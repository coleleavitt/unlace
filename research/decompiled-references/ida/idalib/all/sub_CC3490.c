// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCC3490
// Name:            sub_CC3490
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCC3490 jmp     sub_CC30F0
//
// Resolved target: sub_CC30F0
// Target address:  0xCC30F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_CC3490(/* see target signature */)
{
    // Tail-call to sub_CC30F0 via direct jump indirection
    return sub_CC30F0(/* forwarded args */);
}

