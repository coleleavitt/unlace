// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xDAA700
// Name:            sub_DAA700
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xDAA700 jmp     sub_DA9F40
//
// Resolved target: sub_DA9F40
// Target address:  0xDA9F40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *, int)
// ============================================================

/* see target sig */ sub_DAA700(/* see target signature */)
{
    // Tail-call to sub_DA9F40 via direct jump indirection
    return sub_DA9F40(/* forwarded args */);
}

