// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170D0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170D0 jmp     cs:_Znwm_ptr
//
// Resolved target: _Znwm
// Target address:  0x8D6E50
// GOT/IAT slot:    0x8A2508
// Slot symbol:     _Znwm_ptr
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

