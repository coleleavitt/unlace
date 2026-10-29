// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x340550
// Name:            sub_340550
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x340550 jmp     sub_33FB30
//
// Resolved target: sub_33FB30
// Target address:  0x33FB30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_340550(/* see target signature */)
{
    // Tail-call to sub_33FB30 via direct jump indirection
    return sub_33FB30(/* forwarded args */);
}

