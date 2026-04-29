// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3A3A0
// Name:            sub_3A3A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3A3A0 jmp     sub_39F10
//
// Resolved target: sub_39F10
// Target address:  0x39F10
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__m128i *, unsigned __int8 *, double)
// ============================================================

/* see target sig */ sub_3A3A0(/* see target signature */)
{
    // Tail-call to sub_39F10 via direct jump indirection
    return sub_39F10(/* forwarded args */);
}

