// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DD3030
// Name:            sub_1DD3030
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1DD3030 jmp     sub_1DD2EE0
//
// Resolved target: sub_1DD2EE0
// Target address:  0x1DD2EE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1DD3030(/* see target signature */)
{
    // Tail-call to sub_1DD2EE0 via direct jump indirection
    return sub_1DD2EE0(/* forwarded args */);
}

