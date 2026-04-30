// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BAE0
// Name:            ._ZNK2QT11QTreeWidget13selectedItemsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BAE0 jmp     cs:_ZNK2QT11QTreeWidget13selectedItemsEv_ptr
//
// Resolved target: _ZNK2QT11QTreeWidget13selectedItemsEv
// Target address:  0x8D9CF8
// GOT/IAT slot:    0x8A4A10
// Slot symbol:     _ZNK2QT11QTreeWidget13selectedItemsEv_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTreeWidget13selectedItemsEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTreeWidget13selectedItemsEv via GOT/IAT indirection
    return _ZNK2QT11QTreeWidget13selectedItemsEv(/* forwarded args */);
}

