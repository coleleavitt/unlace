// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33BE20
// Name:            sub_33BE20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x33BE20 jmp     sub_33B4A0
//
// Resolved target: sub_33B4A0
// Target address:  0x33B4A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_33BE20(/* see target signature */)
{
    // Tail-call to sub_33B4A0 via direct jump indirection
    return sub_33B4A0(/* forwarded args */);
}

