// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x333960
// Name:            sub_333960
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x333960 jmp     sub_333290
//
// Resolved target: sub_333290
// Target address:  0x333290
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_333960(/* see target signature */)
{
    // Tail-call to sub_333290 via direct jump indirection
    return sub_333290(/* forwarded args */);
}

