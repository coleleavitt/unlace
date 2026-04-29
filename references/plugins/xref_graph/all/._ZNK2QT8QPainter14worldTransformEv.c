// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16610
// Name:            ._ZNK2QT8QPainter14worldTransformEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16610 jmp     cs:off_4F2F0
//
// Resolved target: _ZNK2QT8QPainter14worldTransformEv
// Target address:  0x502F0
// GOT/IAT slot:    0x4F2F0
// Slot symbol:     off_4F2F0
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QPainter14worldTransformEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QPainter14worldTransformEv via GOT/IAT indirection
    return _ZNK2QT8QPainter14worldTransformEv(/* forwarded args */);
}

