// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17360
// Name:            ._ZN2QT13QGraphicsView12setSceneRectERKNS_6QRectFE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17360 jmp     cs:off_4F998
//
// Resolved target: _ZN2QT13QGraphicsView12setSceneRectERKNS_6QRectFE
// Target address:  0x50F28
// GOT/IAT slot:    0x4F998
// Slot symbol:     off_4F998
// Target type:     _QWORD(QT::QGraphicsView *__hidden this, const QT::QRectF *)
// ============================================================

/* see target sig */ ._ZN2QT13QGraphicsView12setSceneRectERKNS_6QRectFE(/* see target signature */)
{
    // Tail-call to _ZN2QT13QGraphicsView12setSceneRectERKNS_6QRectFE via GOT/IAT indirection
    return _ZN2QT13QGraphicsView12setSceneRectERKNS_6QRectFE(/* forwarded args */);
}

