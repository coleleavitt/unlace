// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113310
// Name:            ._ZN2QT9QTreeView15setHeaderHiddenEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113310 jmp     cs:_ZN2QT9QTreeView15setHeaderHiddenEb_ptr
//
// Resolved target: _ZN2QT9QTreeView15setHeaderHiddenEb
// Target address:  0x8D4728
// GOT/IAT slot:    0x8A0628
// Slot symbol:     _ZN2QT9QTreeView15setHeaderHiddenEb_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView15setHeaderHiddenEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView15setHeaderHiddenEb via GOT/IAT indirection
    return _ZN2QT9QTreeView15setHeaderHiddenEb(/* forwarded args */);
}

