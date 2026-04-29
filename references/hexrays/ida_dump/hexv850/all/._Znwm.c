// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B160
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B160 jmp     cs:off_4C0898
//
// Resolved target: _Znwm
// Target address:  0x4C3890
// GOT/IAT slot:    0x4C0898
// Slot symbol:     off_4C0898
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

