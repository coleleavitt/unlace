// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113030
// Name:            ._ZN2QT9QSplitter22setChildrenCollapsibleEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113030 jmp     cs:_ZN2QT9QSplitter22setChildrenCollapsibleEb_ptr
//
// Resolved target: _ZN2QT9QSplitter22setChildrenCollapsibleEb
// Target address:  0x8D4548
// GOT/IAT slot:    0x8A04B8
// Slot symbol:     _ZN2QT9QSplitter22setChildrenCollapsibleEb_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QSplitter22setChildrenCollapsibleEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSplitter22setChildrenCollapsibleEb via GOT/IAT indirection
    return _ZN2QT9QSplitter22setChildrenCollapsibleEb(/* forwarded args */);
}

