// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x361980
// Name:            sub_361980
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x361980 jmp     sub_3616D0
//
// Resolved target: sub_3616D0
// Target address:  0x3616D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_361980(/* see target signature */)
{
    // Tail-call to sub_3616D0 via direct jump indirection
    return sub_3616D0(/* forwarded args */);
}

