// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCD66C0
// Name:            sub_CD66C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCD66C0 jmp     sub_CD6320
//
// Resolved target: sub_CD6320
// Target address:  0xCD6320
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_CD66C0(/* see target signature */)
{
    // Tail-call to sub_CD6320 via direct jump indirection
    return sub_CD6320(/* forwarded args */);
}

