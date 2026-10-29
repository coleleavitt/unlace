// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3F3420
// Name:            sub_3F3420
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3F3420 jmp     sub_3F15A0
//
// Resolved target: sub_3F15A0
// Target address:  0x3F15A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_3F3420(/* see target signature */)
{
    // Tail-call to sub_3F15A0 via direct jump indirection
    return sub_3F15A0(/* forwarded args */);
}

