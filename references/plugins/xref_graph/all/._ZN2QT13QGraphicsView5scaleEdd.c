// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16790
// Name:            ._ZN2QT13QGraphicsView5scaleEdd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16790 jmp     cs:off_4F3B0
//
// Resolved target: _ZN2QT13QGraphicsView5scaleEdd
// Target address:  0x50408
// GOT/IAT slot:    0x4F3B0
// Slot symbol:     off_4F3B0
// Target type:     _QWORD(QT::QGraphicsView *__hidden this, double, double)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsView5scaleEdd(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView5scaleEdd via GOT/IAT indirection
    return _ZN2QT13QGraphicsView5scaleEdd(/* forwarded args */);
}

