// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16C360
// Name:            j_j_.qfree_77
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x16C360 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x323070
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_77(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

