// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x154FF30
// Name:            sub_154FF30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x154FF30 jmp     sub_154F3E0
//
// Resolved target: sub_154F3E0
// Target address:  0x154F3E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, __int64, double, __m128)
// ============================================================

/* see target sig */ sub_154FF30(/* see target signature */)
{
    // Tail-call to sub_154F3E0 via direct jump indirection
    return sub_154F3E0(/* forwarded args */);
}

