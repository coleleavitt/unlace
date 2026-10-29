// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4B2140
// Name:            sub_4B2140
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4B2140 jmp     sub_4B1E70
//
// Resolved target: sub_4B1E70
// Target address:  0x4B1E70
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_4B2140(/* see target signature */)
{
    // Tail-call to sub_4B1E70 via direct jump indirection
    return sub_4B1E70(/* forwarded args */);
}

