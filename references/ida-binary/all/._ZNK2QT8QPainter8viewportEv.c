// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116870
// Name:            ._ZNK2QT8QPainter8viewportEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116870 jmp     cs:_ZNK2QT8QPainter8viewportEv_ptr
//
// Resolved target: _ZNK2QT8QPainter8viewportEv
// Target address:  0x8D6940
// GOT/IAT slot:    0x8A20D8
// Slot symbol:     _ZNK2QT8QPainter8viewportEv_ptr
// Target type:     _QWORD(QT::QPainter *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT8QPainter8viewportEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT8QPainter8viewportEv via GOT/IAT indirection
    return _ZNK2QT8QPainter8viewportEv(/* forwarded args */);
}

