// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x160F0
// Name:            ._ZN2QT18QAbstractAnimation4stopEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x160F0 jmp     cs:off_4F060
//
// Resolved target: _ZN2QT18QAbstractAnimation4stopEv
// Target address:  0x4FE88
// GOT/IAT slot:    0x4F060
// Slot symbol:     off_4F060
// Target type:     _QWORD(QT::QAbstractAnimation *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QAbstractAnimation4stopEv(/* see target signature */)
{
    // Tail-call to _ZN2QT18QAbstractAnimation4stopEv via GOT/IAT indirection
    return _ZN2QT18QAbstractAnimation4stopEv(/* forwarded args */);
}

