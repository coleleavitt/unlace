// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1156C0
// Name:            ._ZNK2QT17QAbstractItemView9rootIndexEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1156C0 jmp     cs:_ZNK2QT17QAbstractItemView9rootIndexEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView9rootIndexEv
// Target address:  0x8D5DE8
// GOT/IAT slot:    0x8A1800
// Slot symbol:     _ZNK2QT17QAbstractItemView9rootIndexEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView9rootIndexEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView9rootIndexEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView9rootIndexEv(/* forwarded args */);
}

