// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117B40
// Name:            ._ZN2QT15QTreeWidgetItem11setExpandedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117B40 jmp     cs:_ZN2QT15QTreeWidgetItem11setExpandedEb_ptr
//
// Resolved target: _ZN2QT15QTreeWidgetItem11setExpandedEb
// Target address:  0x8D74F0
// GOT/IAT slot:    0x8A2A40
// Slot symbol:     _ZN2QT15QTreeWidgetItem11setExpandedEb_ptr
// Target type:     _QWORD(QT::QTreeWidgetItem *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT15QTreeWidgetItem11setExpandedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTreeWidgetItem11setExpandedEb via GOT/IAT indirection
    return _ZN2QT15QTreeWidgetItem11setExpandedEb(/* forwarded args */);
}

