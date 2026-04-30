// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115360
// Name:            ._ZN2QT15QTreeWidgetItemD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115360 jmp     cs:_ZN2QT15QTreeWidgetItemD2Ev_ptr
//
// Resolved target: _ZN2QT15QTreeWidgetItemD2Ev
// Target address:  0x8D5C00
// GOT/IAT slot:    0x8A1650
// Slot symbol:     _ZN2QT15QTreeWidgetItemD2Ev_ptr
// Target type:     void(QT::QTreeWidgetItem *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QTreeWidgetItemD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT15QTreeWidgetItemD2Ev via GOT/IAT indirection
    return _ZN2QT15QTreeWidgetItemD2Ev(/* forwarded args */);
}

