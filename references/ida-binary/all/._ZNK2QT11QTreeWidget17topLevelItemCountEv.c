// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118520
// Name:            ._ZNK2QT11QTreeWidget17topLevelItemCountEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118520 jmp     cs:_ZNK2QT11QTreeWidget17topLevelItemCountEv_ptr
//
// Resolved target: _ZNK2QT11QTreeWidget17topLevelItemCountEv
// Target address:  0x8D7B40
// GOT/IAT slot:    0x8A2F30
// Slot symbol:     _ZNK2QT11QTreeWidget17topLevelItemCountEv_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QTreeWidget17topLevelItemCountEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QTreeWidget17topLevelItemCountEv via GOT/IAT indirection
    return _ZNK2QT11QTreeWidget17topLevelItemCountEv(/* forwarded args */);
}

