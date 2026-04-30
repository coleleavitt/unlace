// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113990
// Name:            ._ZN2QT9QTreeView23setExpandsOnDoubleClickEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113990 jmp     cs:_ZN2QT9QTreeView23setExpandsOnDoubleClickEb_ptr
//
// Resolved target: _ZN2QT9QTreeView23setExpandsOnDoubleClickEb
// Target address:  0x8D4B50
// GOT/IAT slot:    0x8A0968
// Slot symbol:     _ZN2QT9QTreeView23setExpandsOnDoubleClickEb_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView23setExpandsOnDoubleClickEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView23setExpandsOnDoubleClickEb via GOT/IAT indirection
    return _ZN2QT9QTreeView23setExpandsOnDoubleClickEb(/* forwarded args */);
}

