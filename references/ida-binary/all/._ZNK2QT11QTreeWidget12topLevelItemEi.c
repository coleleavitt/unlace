// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119FB0
// Name:            ._ZNK2QT11QTreeWidget12topLevelItemEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119FB0 jmp     cs:_ZNK2QT11QTreeWidget12topLevelItemEi_ptr
//
// Resolved target: _ZNK2QT11QTreeWidget12topLevelItemEi
// Target address:  0x8D8BD8
// GOT/IAT slot:    0x8A3C78
// Slot symbol:     _ZNK2QT11QTreeWidget12topLevelItemEi_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QTreeWidget12topLevelItemEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTreeWidget12topLevelItemEi via GOT/IAT indirection
    return _ZNK2QT11QTreeWidget12topLevelItemEi(/* forwarded args */);
}

