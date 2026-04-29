// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x238E40
// Name:            j_j_.qfree_114
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x238E40 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x324B30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_114(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

