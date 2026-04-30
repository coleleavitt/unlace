// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C50
// Name:            ._ZN2QT9QTreeView18setRootIsDecoratedEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C50 jmp     cs:_ZN2QT9QTreeView18setRootIsDecoratedEb_ptr
//
// Resolved target: _ZN2QT9QTreeView18setRootIsDecoratedEb
// Target address:  0x8D75A8
// GOT/IAT slot:    0x8A2AC8
// Slot symbol:     _ZN2QT9QTreeView18setRootIsDecoratedEb_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView18setRootIsDecoratedEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView18setRootIsDecoratedEb via GOT/IAT indirection
    return _ZN2QT9QTreeView18setRootIsDecoratedEb(/* forwarded args */);
}

