// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1132C0
// Name:            ._ZN2QT9QTreeView22resizeColumnToContentsEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1132C0 jmp     cs:_ZN2QT9QTreeView22resizeColumnToContentsEi_ptr
//
// Resolved target: _ZN2QT9QTreeView22resizeColumnToContentsEi
// Target address:  0x8D46F0
// GOT/IAT slot:    0x8A0600
// Slot symbol:     _ZN2QT9QTreeView22resizeColumnToContentsEi_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView22resizeColumnToContentsEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView22resizeColumnToContentsEi via GOT/IAT indirection
    return _ZN2QT9QTreeView22resizeColumnToContentsEi(/* forwarded args */);
}

