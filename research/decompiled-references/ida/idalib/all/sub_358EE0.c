// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x358EE0
// Name:            sub_358EE0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x358EE0 jmp     sub_3581A0
//
// Resolved target: sub_3581A0
// Target address:  0x3581A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_358EE0(/* see target signature */)
{
    // Tail-call to sub_3581A0 via direct jump indirection
    return sub_3581A0(/* forwarded args */);
}

