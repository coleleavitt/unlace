// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1E22B30
// Name:            sub_1E22B30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1E22B30 jmp     sub_1E229B0
//
// Resolved target: sub_1E229B0
// Target address:  0x1E229B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1E22B30(/* see target signature */)
{
    // Tail-call to sub_1E229B0 via direct jump indirection
    return sub_1E229B0(/* forwarded args */);
}

