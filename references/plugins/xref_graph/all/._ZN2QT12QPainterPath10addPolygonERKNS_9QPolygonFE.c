// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16DC0
// Name:            ._ZN2QT12QPainterPath10addPolygonERKNS_9QPolygonFE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16DC0 jmp     cs:off_4F6C8
//
// Resolved target: _ZN2QT12QPainterPath10addPolygonERKNS_9QPolygonFE
// Target address:  0x509D0
// GOT/IAT slot:    0x4F6C8
// Slot symbol:     off_4F6C8
// Target type:     _QWORD(QT::QPainterPath *__hidden this, const QT::QPolygonF *)
// ============================================================

/* see target sig */ ._ZN2QT12QPainterPath10addPolygonERKNS_9QPolygonFE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPainterPath10addPolygonERKNS_9QPolygonFE via GOT/IAT indirection
    return _ZN2QT12QPainterPath10addPolygonERKNS_9QPolygonFE(/* forwarded args */);
}

