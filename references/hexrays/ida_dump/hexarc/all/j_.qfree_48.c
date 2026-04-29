// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3B2420
// Name:            j_.qfree_48
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3B2420 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x2B150
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.qfree_48(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

