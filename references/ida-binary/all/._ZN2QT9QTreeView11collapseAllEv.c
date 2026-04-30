// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113CF0
// Name:            ._ZN2QT9QTreeView11collapseAllEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113CF0 jmp     cs:_ZN2QT9QTreeView11collapseAllEv_ptr
//
// Resolved target: _ZN2QT9QTreeView11collapseAllEv
// Target address:  0x8D4D80
// GOT/IAT slot:    0x8A0B18
// Slot symbol:     _ZN2QT9QTreeView11collapseAllEv_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView11collapseAllEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView11collapseAllEv via GOT/IAT indirection
    return _ZN2QT9QTreeView11collapseAllEv(/* forwarded args */);
}

