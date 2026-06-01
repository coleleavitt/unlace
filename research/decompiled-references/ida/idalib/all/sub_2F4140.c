// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F4140
// Name:            sub_2F4140
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2F4140 jmp     sub_2F3A40
//
// Resolved target: sub_2F3A40
// Target address:  0x2F3A40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_2F4140(/* see target signature */)
{
    // Tail-call to sub_2F3A40 via direct jump indirection
    return sub_2F3A40(/* forwarded args */);
}

