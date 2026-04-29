// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16E90
// Name:            ._ZN2QT13QGraphicsItem6updateERKNS_6QRectFE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16E90 jmp     cs:off_4F730
//
// Resolved target: _ZN2QT13QGraphicsItem6updateERKNS_6QRectFE
// Target address:  0x50AC8
// GOT/IAT slot:    0x4F730
// Slot symbol:     off_4F730
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, const QT::QRectF *)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsItem6updateERKNS_6QRectFE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsItem6updateERKNS_6QRectFE via GOT/IAT indirection
    return _ZN2QT13QGraphicsItem6updateERKNS_6QRectFE(/* forwarded args */);
}

