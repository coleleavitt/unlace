// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1147E0
// Name:            ._ZN2QT15QTreeWidgetItemC2EPNS_11QTreeWidgetEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1147E0 jmp     cs:_ZN2QT15QTreeWidgetItemC2EPNS_11QTreeWidgetEi_ptr
//
// Resolved target: _ZN2QT15QTreeWidgetItemC2EPNS_11QTreeWidgetEi
// Target address:  0x8D5460
// GOT/IAT slot:    0x8A1090
// Slot symbol:     _ZN2QT15QTreeWidgetItemC2EPNS_11QTreeWidgetEi_ptr
// Target type:     _QWORD(QT::QTreeWidgetItem *__hidden this, QT::QTreeWidget *, int)
// ============================================================

/* see target sig */ ._ZN2QT15QTreeWidgetItemC2EPNS_11QTreeWidgetEi(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTreeWidgetItemC2EPNS_11QTreeWidgetEi via GOT/IAT indirection
    return _ZN2QT15QTreeWidgetItemC2EPNS_11QTreeWidgetEi(/* forwarded args */);
}

