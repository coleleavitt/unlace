// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x835630
// Name:            j_.qgethostname
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x835630 jmp     _qgethostname
//
// Resolved target: .qgethostname
// Target address:  0x2A78F0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.qgethostname(/* see target signature */)
{
    // Tail-call to .qgethostname via direct jump indirection
    return .qgethostname(/* forwarded args */);
}

