// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3EE0C0
// Name:            j_.xrefblk_t_next_to
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3EE0C0 jmp     _xrefblk_t_next_to
//
// Resolved target: .xrefblk_t_next_to
// Target address:  0x11BD40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to .xrefblk_t_next_to via direct jump indirection
    return .xrefblk_t_next_to(/* forwarded args */);
}

