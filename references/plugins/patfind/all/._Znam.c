// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2030
// Name:            ._Znam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2030 jmp     cs:off_13000
//
// Resolved target: _Znam
// Target address:  0x13290
// GOT/IAT slot:    0x13000
// Slot symbol:     off_13000
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znam(/* see target signature */)
{
    // Tail-call to _Znam via GOT/IAT indirection
    return _Znam(/* forwarded args */);
}

