// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115160
// Name:            ._ZN2QT11QTreeWidget13setHeaderItemEPNS_15QTreeWidgetItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115160 jmp     cs:_ZN2QT11QTreeWidget13setHeaderItemEPNS_15QTreeWidgetItemE_ptr
//
// Resolved target: _ZN2QT11QTreeWidget13setHeaderItemEPNS_15QTreeWidgetItemE
// Target address:  0x8D5A98
// GOT/IAT slot:    0x8A1550
// Slot symbol:     _ZN2QT11QTreeWidget13setHeaderItemEPNS_15QTreeWidgetItemE_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this, QT::QTreeWidgetItem *)
// ============================================================

/* see target sig */ ._ZN2QT11QTreeWidget13setHeaderItemEPNS_15QTreeWidgetItemE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTreeWidget13setHeaderItemEPNS_15QTreeWidgetItemE via GOT/IAT indirection
    return _ZN2QT11QTreeWidget13setHeaderItemEPNS_15QTreeWidgetItemE(/* forwarded args */);
}

