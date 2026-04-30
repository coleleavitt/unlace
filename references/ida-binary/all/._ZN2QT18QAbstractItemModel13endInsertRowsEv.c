// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1127E0
// Name:            ._ZN2QT18QAbstractItemModel13endInsertRowsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1127E0 jmp     cs:_ZN2QT18QAbstractItemModel13endInsertRowsEv_ptr
//
// Resolved target: _ZN2QT18QAbstractItemModel13endInsertRowsEv
// Target address:  0x8D3FF0
// GOT/IAT slot:    0x8A0090
// Slot symbol:     _ZN2QT18QAbstractItemModel13endInsertRowsEv_ptr
// Target type:     _QWORD(QT::QAbstractItemModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QAbstractItemModel13endInsertRowsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT18QAbstractItemModel13endInsertRowsEv via GOT/IAT indirection
    return _ZN2QT18QAbstractItemModel13endInsertRowsEv(/* forwarded args */);
}

