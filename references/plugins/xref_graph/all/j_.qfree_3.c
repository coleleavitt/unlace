// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1A200
// Name:            j_.qfree_3
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1A200 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x16AA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.qfree_3(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

