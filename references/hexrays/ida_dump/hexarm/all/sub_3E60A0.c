// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3E60A0
// Name:            sub_3E60A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3E60A0 jmp     sub_3E5D40
//
// Resolved target: sub_3E5D40
// Target address:  0x3E5D40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, int)
// ============================================================

/* see target sig */ sub_3E60A0(/* see target signature */)
{
    // Tail-call to sub_3E5D40 via direct jump indirection
    return sub_3E5D40(/* forwarded args */);
}

