// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x176D9B0
// Name:            sub_176D9B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x176D9B0 jmp     sub_176D850
//
// Resolved target: sub_176D850
// Target address:  0x176D850
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, __m128)
// ============================================================

/* see target sig */ sub_176D9B0(/* see target signature */)
{
    // Tail-call to sub_176D850 via direct jump indirection
    return sub_176D850(/* forwarded args */);
}

