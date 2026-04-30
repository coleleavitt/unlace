// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1191A0
// Name:            ._ZNK2QT17QAbstractItemView5modelEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1191A0 jmp     cs:_ZNK2QT17QAbstractItemView5modelEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView5modelEv
// Target address:  0x8D82D0
// GOT/IAT slot:    0x8A3570
// Slot symbol:     _ZNK2QT17QAbstractItemView5modelEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView5modelEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView5modelEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView5modelEv(/* forwarded args */);
}

