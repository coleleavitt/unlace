// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x299280
// Name:            j_j_.qfree_118
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x299280 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x32A480
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_118(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

