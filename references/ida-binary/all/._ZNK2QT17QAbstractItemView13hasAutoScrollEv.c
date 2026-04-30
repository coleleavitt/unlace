// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1122C0
// Name:            ._ZNK2QT17QAbstractItemView13hasAutoScrollEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1122C0 jmp     cs:_ZNK2QT17QAbstractItemView13hasAutoScrollEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView13hasAutoScrollEv
// Target address:  0x8D3C70
// GOT/IAT slot:    0x89FE00
// Slot symbol:     _ZNK2QT17QAbstractItemView13hasAutoScrollEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView13hasAutoScrollEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView13hasAutoScrollEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView13hasAutoScrollEv(/* forwarded args */);
}

