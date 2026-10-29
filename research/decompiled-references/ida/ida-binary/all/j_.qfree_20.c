// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C8120
// Name:            j_.qfree_20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2C8120 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x115EE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     double(_QWORD, const char *, ...)
// ============================================================

/* see target sig */ j_.qfree_20(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

