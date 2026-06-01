// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3EE110
// Name:            j_.xrefblk_t_next_from
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3EE110 jmp     _xrefblk_t_next_from
//
// Resolved target: .xrefblk_t_next_from
// Target address:  0x116130
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to .xrefblk_t_next_from via direct jump indirection
    return .xrefblk_t_next_from(/* forwarded args */);
}

