// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x172C0
// Name:            ._ZNK2QT13QGraphicsItem5sceneEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x172C0 jmp     cs:off_4F948
//
// Resolved target: _ZNK2QT13QGraphicsItem5sceneEv
// Target address:  0x50E60
// GOT/IAT slot:    0x4F948
// Slot symbol:     off_4F948
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsItem5sceneEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsItem5sceneEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsItem5sceneEv(/* forwarded args */);
}

