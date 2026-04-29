// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3C7590
// Name:            sub_3C7590
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3C7590 jmp     sub_3C7440
//
// Resolved target: sub_3C7440
// Target address:  0x3C7440
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_3C7590(/* see target signature */)
{
    // Tail-call to sub_3C7440 via direct jump indirection
    return sub_3C7440(/* forwarded args */);
}

