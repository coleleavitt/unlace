// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3C7370
// Name:            j_.qfree_79
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3C7370 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x2B150
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.qfree_79(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

