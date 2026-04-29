// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2320
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2320 jmp     cs:off_B178
//
// Resolved target: _Znwm
// Target address:  0xB610
// GOT/IAT slot:    0xB178
// Slot symbol:     off_B178
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

