// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2490
// Name:            j_.qfree
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2490 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x21B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.qfree(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

