// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3563C0
// Name:            sub_3563C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3563C0 jmp     sub_3558D0
//
// Resolved target: sub_3558D0
// Target address:  0x3558D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_3563C0(/* see target signature */)
{
    // Tail-call to sub_3558D0 via direct jump indirection
    return sub_3558D0(/* forwarded args */);
}

