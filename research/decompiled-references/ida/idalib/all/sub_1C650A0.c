// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1C650A0
// Name:            sub_1C650A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1C650A0 jmp     sub_1C63F60
//
// Resolved target: sub_1C63F60
// Target address:  0x1C63F60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     bool __fastcall(__int64, __int64, unsigned __int64, __int64)
// ============================================================

/* see target sig */ sub_1C650A0(/* see target signature */)
{
    // Tail-call to sub_1C63F60 via direct jump indirection
    return sub_1C63F60(/* forwarded args */);
}

