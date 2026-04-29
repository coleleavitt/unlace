// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_B108
//
// Resolved target: _Znwm
// Target address:  0xB3A0
// GOT/IAT slot:    0xB108
// Slot symbol:     off_B108
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

