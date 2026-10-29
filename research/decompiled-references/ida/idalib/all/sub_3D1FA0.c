// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3D1FA0
// Name:            sub_3D1FA0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3D1FA0 jmp     sub_3D1E50
//
// Resolved target: sub_3D1E50
// Target address:  0x3D1E50
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__m128i *, unsigned __int64, __int64)
// ============================================================

/* see target sig */ sub_3D1FA0(/* see target signature */)
{
    // Tail-call to sub_3D1E50 via direct jump indirection
    return sub_3D1E50(/* forwarded args */);
}

