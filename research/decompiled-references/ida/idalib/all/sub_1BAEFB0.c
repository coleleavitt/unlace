// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1BAEFB0
// Name:            sub_1BAEFB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1BAEFB0 jmp     sub_1BAEDF0
//
// Resolved target: sub_1BAEDF0
// Target address:  0x1BAEDF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, unsigned __int64, __int64, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1BAEFB0(/* see target signature */)
{
    // Tail-call to sub_1BAEDF0 via direct jump indirection
    return sub_1BAEDF0(/* forwarded args */);
}

