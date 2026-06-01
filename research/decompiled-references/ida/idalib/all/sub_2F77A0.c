// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F77A0
// Name:            sub_2F77A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2F77A0 jmp     sub_2F7360
//
// Resolved target: sub_2F7360
// Target address:  0x2F7360
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_2F77A0(/* see target signature */)
{
    // Tail-call to sub_2F7360 via direct jump indirection
    return sub_2F7360(/* forwarded args */);
}

