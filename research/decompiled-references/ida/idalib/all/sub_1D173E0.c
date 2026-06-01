// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D173E0
// Name:            sub_1D173E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D173E0 jmp     sub_1D17220
//
// Resolved target: sub_1D17220
// Target address:  0x1D17220
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __int64, unsigned __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D173E0(/* see target signature */)
{
    // Tail-call to sub_1D17220 via direct jump indirection
    return sub_1D17220(/* forwarded args */);
}

