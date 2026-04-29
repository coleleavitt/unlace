// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3E5C90
// Name:            sub_3E5C90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3E5C90 jmp     sub_3E5930
//
// Resolved target: sub_3E5930
// Target address:  0x3E5930
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, int, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_3E5C90(/* see target signature */)
{
    // Tail-call to sub_3E5930 via direct jump indirection
    return sub_3E5930(/* forwarded args */);
}

