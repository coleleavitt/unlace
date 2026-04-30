// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112310
// Name:            ._ZN2QT15QTreeWidgetItem9setHiddenEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112310 jmp     cs:_ZN2QT15QTreeWidgetItem9setHiddenEb_ptr
//
// Resolved target: _ZN2QT15QTreeWidgetItem9setHiddenEb
// Target address:  0x8D3CB8
// GOT/IAT slot:    0x89FE28
// Slot symbol:     _ZN2QT15QTreeWidgetItem9setHiddenEb_ptr
// Target type:     _QWORD(QT::QTreeWidgetItem *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT15QTreeWidgetItem9setHiddenEb(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTreeWidgetItem9setHiddenEb via GOT/IAT indirection
    return _ZN2QT15QTreeWidgetItem9setHiddenEb(/* forwarded args */);
}

