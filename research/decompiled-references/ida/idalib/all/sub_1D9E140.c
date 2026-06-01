// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D9E140
// Name:            sub_1D9E140
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D9E140 jmp     sub_1D9DFB0
//
// Resolved target: sub_1D9DFB0
// Target address:  0x1D9DFB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128, __m128)
// ============================================================

/* see target sig */ sub_1D9E140(/* see target signature */)
{
    // Tail-call to sub_1D9DFB0 via direct jump indirection
    return sub_1D9DFB0(/* forwarded args */);
}

