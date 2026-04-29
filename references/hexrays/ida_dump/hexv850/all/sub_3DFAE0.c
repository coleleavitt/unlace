// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3DFAE0
// Name:            sub_3DFAE0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3DFAE0 jmp     sub_3DF780
//
// Resolved target: sub_3DF780
// Target address:  0x3DF780
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, int)
// ============================================================

/* see target sig */ sub_3DFAE0(/* see target signature */)
{
    // Tail-call to sub_3DF780 via direct jump indirection
    return sub_3DF780(/* forwarded args */);
}

