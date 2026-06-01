// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34C030
// Name:            sub_34C030
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x34C030 jmp     sub_34B5F0
//
// Resolved target: sub_34B5F0
// Target address:  0x34B5F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_34C030(/* see target signature */)
{
    // Tail-call to sub_34B5F0 via direct jump indirection
    return sub_34B5F0(/* forwarded args */);
}

