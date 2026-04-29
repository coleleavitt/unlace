// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B160
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B160 jmp     cs:off_4DA898
//
// Resolved target: _Znwm
// Target address:  0x4DD298
// GOT/IAT slot:    0x4DA898
// Slot symbol:     off_4DA898
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

