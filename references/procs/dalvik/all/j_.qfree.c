// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xFEB0
// Name:            j_.qfree
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xFEB0 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x5590
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(_QWORD, const char *, ...)
// ============================================================

/* see target sig */ j_.qfree(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

