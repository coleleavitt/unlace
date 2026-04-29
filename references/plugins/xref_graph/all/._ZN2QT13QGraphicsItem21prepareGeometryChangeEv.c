// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x167D0
// Name:            ._ZN2QT13QGraphicsItem21prepareGeometryChangeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x167D0 jmp     cs:off_4F3D0
//
// Resolved target: _ZN2QT13QGraphicsItem21prepareGeometryChangeEv
// Target address:  0x50438
// GOT/IAT slot:    0x4F3D0
// Slot symbol:     off_4F3D0
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem21prepareGeometryChangeEv(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem21prepareGeometryChangeEv via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem21prepareGeometryChangeEv(/* forwarded args */);
}

