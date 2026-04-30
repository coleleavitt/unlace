// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC00
// Name:            ._ZNK2QT7QPixmap4sizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC00 jmp     cs:_ZNK2QT7QPixmap4sizeEv_ptr
//
// Resolved target: _ZNK2QT7QPixmap4sizeEv
// Target address:  0x8D93C0
// GOT/IAT slot:    0x8A42A0
// Slot symbol:     _ZNK2QT7QPixmap4sizeEv_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QPixmap4sizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QPixmap4sizeEv via GOT/IAT indirection
    return _ZNK2QT7QPixmap4sizeEv(/* forwarded args */);
}

