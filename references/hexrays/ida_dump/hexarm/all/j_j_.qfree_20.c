// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF4BD0
// Name:            j_j_.qfree_20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF4BD0 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x32A7B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_20(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

