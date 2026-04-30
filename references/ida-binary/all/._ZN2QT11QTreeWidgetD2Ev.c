// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F90
// Name:            ._ZN2QT11QTreeWidgetD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F90 jmp     cs:_ZN2QT11QTreeWidgetD2Ev_ptr
//
// Resolved target: _ZN2QT11QTreeWidgetD2Ev
// Target address:  0x8D8188
// GOT/IAT slot:    0x8A3468
// Slot symbol:     _ZN2QT11QTreeWidgetD2Ev_ptr
// Target type:     void(QT::QTreeWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTreeWidgetD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTreeWidgetD2Ev via GOT/IAT indirection
    return _ZN2QT11QTreeWidgetD2Ev(/* forwarded args */);
}

