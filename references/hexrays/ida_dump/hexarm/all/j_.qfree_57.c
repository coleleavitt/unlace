// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3BA1D0
// Name:            j_.qfree_57
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3BA1D0 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x2F1B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.qfree_57(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

