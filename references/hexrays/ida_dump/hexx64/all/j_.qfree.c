// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A480
// Name:            j_.qfree
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x32A480 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x2D2F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.qfree(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

