// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119790
// Name:            ._ZNK2QT17QAbstractItemView13selectionModeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119790 jmp     cs:_ZNK2QT17QAbstractItemView13selectionModeEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView13selectionModeEv
// Target address:  0x8D86E0
// GOT/IAT slot:    0x8A3868
// Slot symbol:     _ZNK2QT17QAbstractItemView13selectionModeEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView13selectionModeEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView13selectionModeEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView13selectionModeEv(/* forwarded args */);
}

