// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1175E0
// Name:            ._ZN2QT8QPainter12setTransformERKNS_10QTransformEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1175E0 jmp     cs:_ZN2QT8QPainter12setTransformERKNS_10QTransformEb_ptr
//
// Resolved target: _ZN2QT8QPainter12setTransformERKNS_10QTransformEb
// Target address:  0x8D71B0
// GOT/IAT slot:    0x8A2790
// Slot symbol:     _ZN2QT8QPainter12setTransformERKNS_10QTransformEb_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this, const QT::QTransform *, bool)
// ============================================================

/* see target sig */ ._ZN2QT8QPainter12setTransformERKNS_10QTransformEb(/* see target signature */)
{
    // Tail-call to _ZN2QT8QPainter12setTransformERKNS_10QTransformEb via GOT/IAT indirection
    return _ZN2QT8QPainter12setTransformERKNS_10QTransformEb(/* forwarded args */);
}

