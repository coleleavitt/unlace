// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x302A20
// Name:            sub_302A20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x302A20 jmp     sub_3026A0
//
// Resolved target: sub_3026A0
// Target address:  0x3026A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_302A20(/* see target signature */)
{
    // Tail-call to sub_3026A0 via direct jump indirection
    return sub_3026A0(/* forwarded args */);
}

