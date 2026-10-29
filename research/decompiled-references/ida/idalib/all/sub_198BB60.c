// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198BB60
// Name:            sub_198BB60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x198BB60 jmp     sub_198B9D0
//
// Resolved target: sub_198B9D0
// Target address:  0x198B9D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_198BB60(/* see target signature */)
{
    // Tail-call to sub_198B9D0 via direct jump indirection
    return sub_198B9D0(/* forwarded args */);
}

