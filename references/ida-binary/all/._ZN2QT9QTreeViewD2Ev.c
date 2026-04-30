// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C40
// Name:            ._ZN2QT9QTreeViewD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C40 jmp     cs:_ZN2QT9QTreeViewD2Ev_ptr
//
// Resolved target: _ZN2QT9QTreeViewD2Ev
// Target address:  0x8D5790
// GOT/IAT slot:    0x8A12C0
// Slot symbol:     _ZN2QT9QTreeViewD2Ev_ptr
// Target type:     void(QT::QTreeView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeViewD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeViewD2Ev via GOT/IAT indirection
    return _ZN2QT9QTreeViewD2Ev(/* forwarded args */);
}

