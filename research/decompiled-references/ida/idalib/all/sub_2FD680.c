// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FD680
// Name:            sub_2FD680
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FD680 jmp     sub_2FCC60
//
// Resolved target: sub_2FCC60
// Target address:  0x2FCC60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_2FD680(/* see target signature */)
{
    // Tail-call to sub_2FCC60 via direct jump indirection
    return sub_2FCC60(/* forwarded args */);
}

