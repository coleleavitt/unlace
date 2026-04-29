// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D00
// Name:            ._ZN2QT9qBadAllocEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D00 jmp     cs:off_4F668
//
// Resolved target: _ZN2QT9qBadAllocEv
// Target address:  0x50928
// GOT/IAT slot:    0x4F668
// Slot symbol:     off_4F668
// Target type:     _QWORD()
// ============================================================

/* see target sig */ ._ZN2QT9qBadAllocEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9qBadAllocEv via GOT/IAT indirection
    return _ZN2QT9qBadAllocEv(/* forwarded args */);
}

