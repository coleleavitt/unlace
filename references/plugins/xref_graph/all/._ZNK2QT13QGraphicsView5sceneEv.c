// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16580
// Name:            ._ZNK2QT13QGraphicsView5sceneEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16580 jmp     cs:off_4F2A8
//
// Resolved target: _ZNK2QT13QGraphicsView5sceneEv
// Target address:  0x50288
// GOT/IAT slot:    0x4F2A8
// Slot symbol:     off_4F2A8
// Target type:     _QWORD(QT::QGraphicsView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsView5sceneEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsView5sceneEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsView5sceneEv(/* forwarded args */);
}

