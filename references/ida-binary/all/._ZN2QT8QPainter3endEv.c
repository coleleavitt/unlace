// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D90
// Name:            ._ZN2QT8QPainter3endEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D90 jmp     cs:_ZN2QT8QPainter3endEv_ptr
//
// Resolved target: _ZN2QT8QPainter3endEv
// Target address:  0x8D6238
// GOT/IAT slot:    0x8A1B68
// Slot symbol:     _ZN2QT8QPainter3endEv_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter3endEv(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter3endEv via GOT/IAT indirection
    return _ZN2QT8QPainter3endEv(/* forwarded args */);
}

