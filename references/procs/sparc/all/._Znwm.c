// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7430
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7430 jmp     cs:off_19200
//
// Resolved target: _Znwm
// Target address:  0x19730
// GOT/IAT slot:    0x19200
// Slot symbol:     off_19200
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

