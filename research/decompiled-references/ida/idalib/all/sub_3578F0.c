// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3578F0
// Name:            sub_3578F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3578F0 jmp     sub_356960
//
// Resolved target: sub_356960
// Target address:  0x356960
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_3578F0(/* see target signature */)
{
    // Tail-call to sub_356960 via direct jump indirection
    return sub_356960(/* forwarded args */);
}

