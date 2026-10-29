// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x339200
// Name:            sub_339200
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x339200 jmp     sub_3390C0
//
// Resolved target: sub_3390C0
// Target address:  0x3390C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_339200(/* see target signature */)
{
    // Tail-call to sub_3390C0 via direct jump indirection
    return sub_3390C0(/* forwarded args */);
}

