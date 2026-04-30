// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1128B0
// Name:            ._ZNK2QT17QAbstractItemView5stateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1128B0 jmp     cs:_ZNK2QT17QAbstractItemView5stateEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView5stateEv
// Target address:  0x8D4068
// GOT/IAT slot:    0x8A00F8
// Slot symbol:     _ZNK2QT17QAbstractItemView5stateEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView5stateEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView5stateEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView5stateEv(/* forwarded args */);
}

