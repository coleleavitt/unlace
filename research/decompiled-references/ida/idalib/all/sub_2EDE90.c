// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EDE90
// Name:            sub_2EDE90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2EDE90 jmp     sub_2EDD00
//
// Resolved target: sub_2EDD00
// Target address:  0x2EDD00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_2EDE90(/* see target signature */)
{
    // Tail-call to sub_2EDD00 via direct jump indirection
    return sub_2EDD00(/* forwarded args */);
}

