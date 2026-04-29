// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x130200
// Name:            j_j_.qfree_60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x130200 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x325670
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_60(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

