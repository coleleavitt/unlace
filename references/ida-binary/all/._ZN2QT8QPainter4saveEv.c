// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111D60
// Name:            ._ZN2QT8QPainter4saveEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111D60 jmp     cs:_ZN2QT8QPainter4saveEv_ptr
//
// Resolved target: _ZN2QT8QPainter4saveEv
// Target address:  0x8D3930
// GOT/IAT slot:    0x89FB50
// Slot symbol:     _ZN2QT8QPainter4saveEv_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter4saveEv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter4saveEv via GOT/IAT indirection
    return _ZN2QT8QPainter4saveEv(/* forwarded args */);
}

