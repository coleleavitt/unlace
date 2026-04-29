// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x164F0
// Name:            ._ZNK2QT9QPolygonF12boundingRectEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x164F0 jmp     cs:off_4F260
//
// Resolved target: _ZNK2QT9QPolygonF12boundingRectEv
// Target address:  0x50218
// GOT/IAT slot:    0x4F260
// Slot symbol:     off_4F260
// Target type:     _QWORD(QT::QPolygonF *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QPolygonF12boundingRectEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QPolygonF12boundingRectEv via GOT/IAT indirection
    return _ZNK2QT9QPolygonF12boundingRectEv(/* forwarded args */);
}

