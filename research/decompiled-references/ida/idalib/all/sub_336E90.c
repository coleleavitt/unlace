// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x336E90
// Name:            sub_336E90
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x336E90 jmp     sub_336770
//
// Resolved target: sub_336770
// Target address:  0x336770
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_336E90(/* see target signature */)
{
    // Tail-call to sub_336770 via direct jump indirection
    return sub_336770(/* forwarded args */);
}

