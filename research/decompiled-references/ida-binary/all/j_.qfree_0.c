// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x178E60
// Name:            j_.qfree_0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x178E60 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x115EE0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
// ============================================================

/* see target sig */ j_.qfree_0(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

