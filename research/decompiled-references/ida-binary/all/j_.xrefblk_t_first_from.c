// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3EE120
// Name:            j_.xrefblk_t_first_from
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3EE120 jmp     _xrefblk_t_first_from
//
// Resolved target: .xrefblk_t_first_from
// Target address:  0x1194D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD, _QWORD)
// ============================================================

/* see target sig */ j_.xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to .xrefblk_t_first_from via direct jump indirection
    return .xrefblk_t_first_from(/* forwarded args */);
}

