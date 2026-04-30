// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B240
// Name:            ._ZNK2QT8QPainter3penEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B240 jmp     cs:_ZNK2QT8QPainter3penEv_ptr
//
// Resolved target: _ZNK2QT8QPainter3penEv
// Target address:  0x8D9778
// GOT/IAT slot:    0x8A45C0
// Slot symbol:     _ZNK2QT8QPainter3penEv_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QPainter3penEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QPainter3penEv via GOT/IAT indirection
    return _ZNK2QT8QPainter3penEv(/* forwarded args */);
}

