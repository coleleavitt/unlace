// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x18B2EA0
// Name:            sub_18B2EA0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x18B2EA0 jmp     sub_18B2030
//
// Resolved target: sub_18B2030
// Target address:  0x18B2030
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, double, __m128, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_18B2EA0(/* see target signature */)
{
    // Tail-call to sub_18B2030 via direct jump indirection
    return sub_18B2030(/* forwarded args */);
}

