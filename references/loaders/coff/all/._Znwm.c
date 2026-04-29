// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4420
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4420 jmp     cs:off_231F8
//
// Resolved target: _Znwm
// Target address:  0x23618
// GOT/IAT slot:    0x231F8
// Slot symbol:     off_231F8
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

