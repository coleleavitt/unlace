// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B270
// Name:            ._ZNK2QT8QPainter5brushEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B270 jmp     cs:_ZNK2QT8QPainter5brushEv_ptr
//
// Resolved target: _ZNK2QT8QPainter5brushEv
// Target address:  0x8D9798
// GOT/IAT slot:    0x8A45D8
// Slot symbol:     _ZNK2QT8QPainter5brushEv_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QPainter5brushEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QPainter5brushEv via GOT/IAT indirection
    return _ZNK2QT8QPainter5brushEv(/* forwarded args */);
}

