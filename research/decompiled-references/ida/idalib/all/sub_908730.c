// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x908730
// Name:            sub_908730
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x908730 jmp     sub_907680
//
// Resolved target: sub_907680
// Target address:  0x907680
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, unsigned __int64, __int64, unsigned __int64, __int64 *, char)
// ============================================================

/* see target sig */ sub_908730(/* see target signature */)
{
    // Tail-call to sub_907680 via direct jump indirection
    return sub_907680(/* forwarded args */);
}

