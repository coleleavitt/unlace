// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1141A0
// Name:            ._ZN2QT15QTreeWidgetItem11setSelectedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1141A0 jmp     cs:_ZN2QT15QTreeWidgetItem11setSelectedEb_ptr
//
// Resolved target: _ZN2QT15QTreeWidgetItem11setSelectedEb
// Target address:  0x8D5050
// GOT/IAT slot:    0x8A0D70
// Slot symbol:     _ZN2QT15QTreeWidgetItem11setSelectedEb_ptr
// Target type:     _QWORD(QT::QTreeWidgetItem *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT15QTreeWidgetItem11setSelectedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTreeWidgetItem11setSelectedEb via GOT/IAT indirection
    return _ZN2QT15QTreeWidgetItem11setSelectedEb(/* forwarded args */);
}

