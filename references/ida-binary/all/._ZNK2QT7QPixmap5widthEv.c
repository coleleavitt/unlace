// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111DB0
// Name:            ._ZNK2QT7QPixmap5widthEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111DB0 jmp     cs:_ZNK2QT7QPixmap5widthEv_ptr
//
// Resolved target: _ZNK2QT7QPixmap5widthEv
// Target address:  0x8D3970
// GOT/IAT slot:    0x89FB78
// Slot symbol:     _ZNK2QT7QPixmap5widthEv_ptr
// Target type:     _QWORD(QT::QPixmap *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT7QPixmap5widthEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT7QPixmap5widthEv via GOT/IAT indirection
    return _ZNK2QT7QPixmap5widthEv(/* forwarded args */);
}

