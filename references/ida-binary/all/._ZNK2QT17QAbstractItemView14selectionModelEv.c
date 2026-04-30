// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112AF0
// Name:            ._ZNK2QT17QAbstractItemView14selectionModelEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112AF0 jmp     cs:_ZNK2QT17QAbstractItemView14selectionModelEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView14selectionModelEv
// Target address:  0x8D41C0
// GOT/IAT slot:    0x8A0218
// Slot symbol:     _ZNK2QT17QAbstractItemView14selectionModelEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView14selectionModelEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView14selectionModelEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView14selectionModelEv(/* forwarded args */);
}

