// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F9EB0
// Name:            sub_2F9EB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2F9EB0 jmp     sub_2F9DA0
//
// Resolved target: sub_2F9DA0
// Target address:  0x2F9DA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_2F9EB0(/* see target signature */)
{
    // Tail-call to sub_2F9DA0 via direct jump indirection
    return sub_2F9DA0(/* forwarded args */);
}

