// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1157E0
// Name:            ._ZN2QT15QTreeWidgetItemC1Ei
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1157E0 jmp     cs:_ZN2QT15QTreeWidgetItemC1Ei_ptr
//
// Resolved target: _ZN2QT15QTreeWidgetItemC1Ei
// Target address:  0x8D5E98
// GOT/IAT slot:    0x8A1890
// Slot symbol:     _ZN2QT15QTreeWidgetItemC1Ei_ptr
// Target type:     _QWORD(QT::QTreeWidgetItem *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT15QTreeWidgetItemC1Ei(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTreeWidgetItemC1Ei via GOT/IAT indirection
    return _ZN2QT15QTreeWidgetItemC1Ei(/* forwarded args */);
}

