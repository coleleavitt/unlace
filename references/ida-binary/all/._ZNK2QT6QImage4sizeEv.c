// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1165A0
// Name:            ._ZNK2QT6QImage4sizeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1165A0 jmp     cs:_ZNK2QT6QImage4sizeEv_ptr
//
// Resolved target: _ZNK2QT6QImage4sizeEv
// Target address:  0x8D6758
// GOT/IAT slot:    0x8A1F70
// Slot symbol:     _ZNK2QT6QImage4sizeEv_ptr
// Target type:     _QWORD(QT::QImage *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QImage4sizeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QImage4sizeEv via GOT/IAT indirection
    return _ZNK2QT6QImage4sizeEv(/* forwarded args */);
}

