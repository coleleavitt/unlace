// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1BB62C0
// Name:            sub_1BB62C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1BB62C0 jmp     sub_1BB6130
//
// Resolved target: sub_1BB6130
// Target address:  0x1BB6130
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1BB62C0(/* see target signature */)
{
    // Tail-call to sub_1BB6130 via direct jump indirection
    return sub_1BB6130(/* forwarded args */);
}

