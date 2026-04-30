// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115C90
// Name:            ._ZNK2QT18QAbstractItemModel19persistentIndexListEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115C90 jmp     cs:_ZNK2QT18QAbstractItemModel19persistentIndexListEv_ptr
//
// Resolved target: _ZNK2QT18QAbstractItemModel19persistentIndexListEv
// Target address:  0x8D61A0
// GOT/IAT slot:    0x8A1AE8
// Slot symbol:     _ZNK2QT18QAbstractItemModel19persistentIndexListEv_ptr
// Target type:     _QWORD(QT::QAbstractItemModel *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT18QAbstractItemModel19persistentIndexListEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT18QAbstractItemModel19persistentIndexListEv via GOT/IAT indirection
    return _ZNK2QT18QAbstractItemModel19persistentIndexListEv(/* forwarded args */);
}

