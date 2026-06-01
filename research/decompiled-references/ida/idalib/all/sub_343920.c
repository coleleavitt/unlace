// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x343920
// Name:            sub_343920
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x343920 jmp     sub_343110
//
// Resolved target: sub_343110
// Target address:  0x343110
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_343920(/* see target signature */)
{
    // Tail-call to sub_343110 via direct jump indirection
    return sub_343110(/* forwarded args */);
}

