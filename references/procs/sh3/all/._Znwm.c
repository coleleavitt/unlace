// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53F0
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53F0 jmp     cs:off_151E0
//
// Resolved target: _Znwm
// Target address:  0x16270
// GOT/IAT slot:    0x151E0
// Slot symbol:     off_151E0
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

