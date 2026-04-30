// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117DF0
// Name:            ._ZNK2QT17QAbstractItemView12currentIndexEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117DF0 jmp     cs:_ZNK2QT17QAbstractItemView12currentIndexEv_ptr
//
// Resolved target: _ZNK2QT17QAbstractItemView12currentIndexEv
// Target address:  0x8D76A8
// GOT/IAT slot:    0x8A2B98
// Slot symbol:     _ZNK2QT17QAbstractItemView12currentIndexEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAbstractItemView12currentIndexEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAbstractItemView12currentIndexEv via GOT/IAT indirection
    return _ZNK2QT17QAbstractItemView12currentIndexEv(/* forwarded args */);
}

