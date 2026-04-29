// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3E6380
// Name:            j_j_.qfree_124
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3E6380 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x326270
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_124(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

