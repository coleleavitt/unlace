// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3E5B60
// Name:            sub_3E5B60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3E5B60 jmp     sub_3E5800
//
// Resolved target: sub_3E5800
// Target address:  0x3E5800
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, int)
// ============================================================

/* see target sig */ sub_3E5B60(/* see target signature */)
{
    // Tail-call to sub_3E5800 via direct jump indirection
    return sub_3E5800(/* forwarded args */);
}

