// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B600
// Name:            ._ZN2QT18QAbstractItemModel13endResetModelEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B600 jmp     cs:_ZN2QT18QAbstractItemModel13endResetModelEv_ptr
//
// Resolved target: _ZN2QT18QAbstractItemModel13endResetModelEv
// Target address:  0x8D9A00
// GOT/IAT slot:    0x8A47A0
// Slot symbol:     _ZN2QT18QAbstractItemModel13endResetModelEv_ptr
// Target type:     _QWORD(QT::QAbstractItemModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QAbstractItemModel13endResetModelEv(/* see target signature */)
{
    // Tail-call to _ZN2QT18QAbstractItemModel13endResetModelEv via GOT/IAT indirection
    return _ZN2QT18QAbstractItemModel13endResetModelEv(/* forwarded args */);
}

