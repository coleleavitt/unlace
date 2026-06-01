// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1C87380
// Name:            sub_1C87380
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1C87380 jmp     sub_1C87200
//
// Resolved target: sub_1C87200
// Target address:  0x1C87200
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __int64, unsigned __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1C87380(/* see target signature */)
{
    // Tail-call to sub_1C87200 via direct jump indirection
    return sub_1C87200(/* forwarded args */);
}

