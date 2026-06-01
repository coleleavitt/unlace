// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCCC710
// Name:            sub_CCC710
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCCC710 jmp     sub_CC3770
//
// Resolved target: sub_CC3770
// Target address:  0xCC3770
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_CCC710(/* see target signature */)
{
    // Tail-call to sub_CC3770 via direct jump indirection
    return sub_CC3770(/* forwarded args */);
}

