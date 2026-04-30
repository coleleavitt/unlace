// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D80
// Name:            ._ZNK2QT17QAbstractItemView12itemDelegateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D80 jmp     cs:_ZNK2QT17QAbstractItemView12itemDelegateEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView12itemDelegateEv
// Target address:  0x8D7670
// GOT/IAT slot:    0x8A2B60
// Slot symbol:     _ZNK2QT17QAbstractItemView12itemDelegateEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView12itemDelegateEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView12itemDelegateEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView12itemDelegateEv(/* forwarded args */);
}

