// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1C41370
// Name:            sub_1C41370
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1C41370 jmp     sub_1C41150
//
// Resolved target: sub_1C41150
// Target address:  0x1C41150
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1C41370(/* see target signature */)
{
    // Tail-call to sub_1C41150 via direct jump indirection
    return sub_1C41150(/* forwarded args */);
}

