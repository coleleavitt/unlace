// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1AEC50
// Name:            j_.dstr_tinfo
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1AEC50 jmp     _dstr_tinfo
//
// Resolved target: .dstr_tinfo
// Target address:  0x2D3D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.dstr_tinfo(/* see target signature */)
{
    // Tail-call to .dstr_tinfo via direct jump indirection
    return .dstr_tinfo(/* forwarded args */);
}

