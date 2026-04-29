// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16250
// Name:            ._ZN2QT8QPainter4saveEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16250 jmp     cs:off_4F110
//
// Resolved target: _ZN2QT8QPainter4saveEv
// Target address:  0x4FFA8
// GOT/IAT slot:    0x4F110
// Slot symbol:     off_4F110
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter4saveEv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter4saveEv via GOT/IAT indirection
    return _ZN2QT8QPainter4saveEv(/* forwarded args */);
}

