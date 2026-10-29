// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCDF950
// Name:            sub_CDF950
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCDF950 jmp     sub_CD69A0
//
// Resolved target: sub_CD69A0
// Target address:  0xCD69A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_CDF950(/* see target signature */)
{
    // Tail-call to sub_CD69A0 via direct jump indirection
    return sub_CD69A0(/* forwarded args */);
}

