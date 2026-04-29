// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3C3E10
// Name:            sub_3C3E10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3C3E10 jmp     sub_3C3CC0
//
// Resolved target: sub_3C3CC0
// Target address:  0x3C3CC0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_3C3E10(/* see target signature */)
{
    // Tail-call to sub_3C3CC0 via direct jump indirection
    return sub_3C3CC0(/* forwarded args */);
}

