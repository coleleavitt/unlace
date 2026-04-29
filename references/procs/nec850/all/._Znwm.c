// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9530
// Name:            ._Znwm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9530 jmp     cs:off_2E280
//
// Resolved target: _Znwm
// Target address:  0x2E8F0
// GOT/IAT slot:    0x2E280
// Slot symbol:     off_2E280
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znwm(/* see target signature */)
{
    // Tail-call to _Znwm via GOT/IAT indirection
    return _Znwm(/* forwarded args */);
}

