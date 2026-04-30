// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C70
// Name:            ._ZNK2QT11QTreeWidget11currentItemEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C70 jmp     cs:_ZNK2QT11QTreeWidget11currentItemEv_ptr
//
// Resolved target: _ZNK2QT11QTreeWidget11currentItemEv
// Target address:  0x8D57B0
// GOT/IAT slot:    0x8A12D8
// Slot symbol:     _ZNK2QT11QTreeWidget11currentItemEv_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTreeWidget11currentItemEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTreeWidget11currentItemEv via GOT/IAT indirection
    return _ZNK2QT11QTreeWidget11currentItemEv(/* forwarded args */);
}

