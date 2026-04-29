// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3CB710
// Name:            sub_3CB710
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3CB710 jmp     sub_3CB5C0
//
// Resolved target: sub_3CB5C0
// Target address:  0x3CB5C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_3CB710(/* see target signature */)
{
    // Tail-call to sub_3CB5C0 via direct jump indirection
    return sub_3CB5C0(/* forwarded args */);
}

