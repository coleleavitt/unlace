// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3B4770
// Name:            j_.qfree_23
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3B4770 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x2C170
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.qfree_23(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

