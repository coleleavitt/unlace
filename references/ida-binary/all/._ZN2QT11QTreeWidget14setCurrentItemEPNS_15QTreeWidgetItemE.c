// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B450
// Name:            ._ZN2QT11QTreeWidget14setCurrentItemEPNS_15QTreeWidgetItemE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B450 jmp     cs:_ZN2QT11QTreeWidget14setCurrentItemEPNS_15QTreeWidgetItemE_ptr
//
// Resolved target: _ZN2QT11QTreeWidget14setCurrentItemEPNS_15QTreeWidgetItemE
// Target address:  0x8D9910
// GOT/IAT slot:    0x8A46C8
// Slot symbol:     _ZN2QT11QTreeWidget14setCurrentItemEPNS_15QTreeWidgetItemE_ptr
// Target type:     _QWORD(QT::QTreeWidget *__hidden this, QT::QTreeWidgetItem *)
// ============================================================

/* see target sig */ ._ZN2QT11QTreeWidget14setCurrentItemEPNS_15QTreeWidgetItemE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTreeWidget14setCurrentItemEPNS_15QTreeWidgetItemE via GOT/IAT indirection
    return _ZN2QT11QTreeWidget14setCurrentItemEPNS_15QTreeWidgetItemE(/* forwarded args */);
}

