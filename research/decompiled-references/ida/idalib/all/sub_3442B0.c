// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3442B0
// Name:            sub_3442B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3442B0 jmp     sub_343930
//
// Resolved target: sub_343930
// Target address:  0x343930
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_3442B0(/* see target signature */)
{
    // Tail-call to sub_343930 via direct jump indirection
    return sub_343930(/* forwarded args */);
}

