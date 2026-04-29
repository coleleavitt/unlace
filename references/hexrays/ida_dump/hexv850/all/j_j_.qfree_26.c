// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xF8F60
// Name:            j_j_.qfree_26
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xF8F60 jmp     j__qfree
//
// Resolved target: j_.qfree
// Target address:  0x324B30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_j_.qfree_26(/* see target signature */)
{
    // Tail-call to j_.qfree via direct jump indirection
    return j_.qfree(/* forwarded args */);
}

