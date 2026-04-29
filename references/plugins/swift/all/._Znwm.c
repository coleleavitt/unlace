// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4480
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4480 jmp     cs:off_28228
//
// Resolved target: _Znwm
// Target address:  0x29BC0
// GOT/IAT slot:    0x28228
// Slot symbol:     off_28228
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

