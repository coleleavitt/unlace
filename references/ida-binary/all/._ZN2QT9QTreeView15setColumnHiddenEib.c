// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119ED0
// Name:            ._ZN2QT9QTreeView15setColumnHiddenEib
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119ED0 jmp     cs:_ZN2QT9QTreeView15setColumnHiddenEib_ptr
//
// Resolved target: _ZN2QT9QTreeView15setColumnHiddenEib
// Target address:  0x8D8B40
// GOT/IAT slot:    0x8A3C08
// Slot symbol:     _ZN2QT9QTreeView15setColumnHiddenEib_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, int, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView15setColumnHiddenEib(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView15setColumnHiddenEib via GOT/IAT indirection
    return _ZN2QT9QTreeView15setColumnHiddenEib(/* forwarded args */);
}

