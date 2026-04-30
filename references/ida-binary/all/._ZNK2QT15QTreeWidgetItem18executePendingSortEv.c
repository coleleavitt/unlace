// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113C80
// Name:            ._ZNK2QT15QTreeWidgetItem18executePendingSortEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113C80 jmp     cs:_ZNK2QT15QTreeWidgetItem18executePendingSortEv_ptr
//
// Resolved target: _ZNK2QT15QTreeWidgetItem18executePendingSortEv
// Target address:  0x8D4D48
// GOT/IAT slot:    0x8A0AE0
// Slot symbol:     _ZNK2QT15QTreeWidgetItem18executePendingSortEv_ptr
// Target type:     _QWORD(QT::QTreeWidgetItem *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QTreeWidgetItem18executePendingSortEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QTreeWidgetItem18executePendingSortEv via GOT/IAT indirection
    return _ZNK2QT15QTreeWidgetItem18executePendingSortEv(/* forwarded args */);
}

