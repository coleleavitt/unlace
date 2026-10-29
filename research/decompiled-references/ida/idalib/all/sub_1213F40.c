// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1213F40
// Name:            sub_1213F40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1213F40 jmp     sub_1213E90
//
// Resolved target: sub_1213E90
// Target address:  0x1213E90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__m128i *, __int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_1213F40(/* see target signature */)
{
    // Tail-call to sub_1213E90 via direct jump indirection
    return sub_1213E90(/* forwarded args */);
}

