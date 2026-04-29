// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16F50
// Name:            ._ZNK2QT13QGraphicsItem15mapRectFromItemEPKS0_RKNS_6QRectFE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16F50 jmp     cs:off_4F790
//
// Resolved target: _ZNK2QT13QGraphicsItem15mapRectFromItemEPKS0_RKNS_6QRectFE
// Target address:  0x50B88
// GOT/IAT slot:    0x4F790
// Slot symbol:     off_4F790
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this, const QT::QGraphicsItem *, const QT::QRectF *)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsItem15mapRectFromItemEPKS0_RKNS_6QRectFE(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsItem15mapRectFromItemEPKS0_RKNS_6QRectFE via GOT/IAT indirection
    return _ZNK2QT13QGraphicsItem15mapRectFromItemEPKS0_RKNS_6QRectFE(/* forwarded args */);
}

