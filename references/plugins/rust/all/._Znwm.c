// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21E0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21E0 jmp     cs:off_A0D8
//
// Resolved target: _Znwm
// Target address:  0xB3A8
// GOT/IAT slot:    0xA0D8
// Slot symbol:     off_A0D8
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

