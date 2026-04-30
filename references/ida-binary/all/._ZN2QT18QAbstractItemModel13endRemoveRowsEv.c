// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A10
// Name:            ._ZN2QT18QAbstractItemModel13endRemoveRowsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A10 jmp     cs:_ZN2QT18QAbstractItemModel13endRemoveRowsEv_ptr
//
// Resolved target: _ZN2QT18QAbstractItemModel13endRemoveRowsEv
// Target address:  0x8D4130
// GOT/IAT slot:    0x8A01A8
// Slot symbol:     _ZN2QT18QAbstractItemModel13endRemoveRowsEv_ptr
// Target type:     _QWORD(QT::QAbstractItemModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QAbstractItemModel13endRemoveRowsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT18QAbstractItemModel13endRemoveRowsEv via GOT/IAT indirection
    return _ZN2QT18QAbstractItemModel13endRemoveRowsEv(/* forwarded args */);
}

