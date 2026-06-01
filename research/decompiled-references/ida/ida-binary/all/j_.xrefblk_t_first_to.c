// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3EE0D0
// Name:            j_.xrefblk_t_first_to
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3EE0D0 jmp     _xrefblk_t_first_to
//
// Resolved target: .xrefblk_t_first_to
// Target address:  0x113570
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD, _QWORD)
// ============================================================

/* see target sig */ j_.xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to .xrefblk_t_first_to via direct jump indirection
    return .xrefblk_t_first_to(/* forwarded args */);
}

