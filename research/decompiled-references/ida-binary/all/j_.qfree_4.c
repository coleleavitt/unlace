// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x185050
// Name:            j_.qfree_4
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x185050 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x115EE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
// ============================================================

/* see target sig */ j_.qfree_4(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

