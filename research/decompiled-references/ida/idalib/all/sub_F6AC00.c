// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF6AC00
// Name:            sub_F6AC00
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF6AC00 jmp     sub_F6AA50
//
// Resolved target: sub_F6AA50
// Target address:  0xF6AA50
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_F6AC00(/* see target signature */)
{
    // Tail-call to sub_F6AA50 via direct jump indirection
    return sub_F6AA50(/* forwarded args */);
}

