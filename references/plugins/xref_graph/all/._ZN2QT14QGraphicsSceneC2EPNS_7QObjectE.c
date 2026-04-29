// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17050
// Name:            ._ZN2QT14QGraphicsSceneC2EPNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17050 jmp     cs:off_4F810
//
// Resolved target: _ZN2QT14QGraphicsSceneC2EPNS_7QObjectE
// Target address:  0x50C48
// GOT/IAT slot:    0x4F810
// Slot symbol:     off_4F810
// Target type:     _QWORD(QT::QGraphicsScene *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT14QGraphicsSceneC2EPNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT14QGraphicsSceneC2EPNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT14QGraphicsSceneC2EPNS_7QObjectE(/* forwarded args */);
}

