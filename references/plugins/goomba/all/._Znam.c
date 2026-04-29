// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4030
// Name:            ._Znam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4030 jmp     cs:off_4E000
//
// Resolved target: _Znam
// Target address:  0x4F600
// GOT/IAT slot:    0x4E000
// Slot symbol:     off_4E000
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znam(/* see target signature */)
{
    // Tail-call to _Znam via GOT/IAT indirection
    return _Znam(/* forwarded args */);
}

