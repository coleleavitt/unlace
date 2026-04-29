// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x395DD0
// Name:            sub_395DD0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x395DD0 jmp     sub_394E20
//
// Resolved target: sub_394E20
// Target address:  0x394E20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int, __int64, __int64)
// ============================================================

/* see target sig */ sub_395DD0(/* see target signature */)
{
    // Tail-call to sub_394E20 via direct jump indirection
    return sub_394E20(/* forwarded args */);
}

