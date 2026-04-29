// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1CF820
// Name:            j_j_.qfree_94
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1CF820 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x326270
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_94(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

