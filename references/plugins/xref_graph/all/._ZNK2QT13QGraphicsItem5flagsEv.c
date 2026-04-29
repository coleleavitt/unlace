// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x163F0
// Name:            ._ZNK2QT13QGraphicsItem5flagsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x163F0 jmp     cs:off_4F1E0
//
// Resolved target: _ZNK2QT13QGraphicsItem5flagsEv
// Target address:  0x50100
// GOT/IAT slot:    0x4F1E0
// Slot symbol:     off_4F1E0
// Target type:     _QWORD(QT::QGraphicsItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT13QGraphicsItem5flagsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT13QGraphicsItem5flagsEv via GOT/IAT indirection
    return _ZNK2QT13QGraphicsItem5flagsEv(/* forwarded args */);
}

