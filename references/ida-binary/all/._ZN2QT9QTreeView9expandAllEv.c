// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1132B0
// Name:            ._ZN2QT9QTreeView9expandAllEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1132B0 jmp     cs:_ZN2QT9QTreeView9expandAllEv_ptr
//
// Resolved target: _ZN2QT9QTreeView9expandAllEv
// Target address:  0x8D46E8
// GOT/IAT slot:    0x8A05F8
// Slot symbol:     _ZN2QT9QTreeView9expandAllEv_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView9expandAllEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView9expandAllEv via GOT/IAT indirection
    return _ZN2QT9QTreeView9expandAllEv(/* forwarded args */);
}

