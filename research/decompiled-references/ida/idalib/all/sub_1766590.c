// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1766590
// Name:            sub_1766590
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1766590 jmp     sub_17663C0
//
// Resolved target: sub_17663C0
// Target address:  0x17663C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64, double)
// ============================================================

/* see target sig */ sub_1766590(/* see target signature */)
{
    // Tail-call to sub_17663C0 via direct jump indirection
    return sub_17663C0(/* forwarded args */);
}

