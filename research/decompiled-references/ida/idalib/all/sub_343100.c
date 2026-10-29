// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x343100
// Name:            sub_343100
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x343100 jmp     sub_342DA0
//
// Resolved target: sub_342DA0
// Target address:  0x342DA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_343100(/* see target signature */)
{
    // Tail-call to sub_342DA0 via direct jump indirection
    return sub_342DA0(/* forwarded args */);
}

