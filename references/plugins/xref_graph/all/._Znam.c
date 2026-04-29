// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16F10
// Name:            ._Znam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16F10 jmp     cs:off_4F770
//
// Resolved target: _Znam
// Target address:  0x50B38
// GOT/IAT slot:    0x4F770
// Slot symbol:     off_4F770
// Target type:     _QWORD(unsigned __int64)
// ============================================================

/* see target sig */ ._Znam(/* see target signature */)
{
    // Tail-call to _Znam via GOT/IAT indirection
    return _Znam(/* forwarded args */);
}

