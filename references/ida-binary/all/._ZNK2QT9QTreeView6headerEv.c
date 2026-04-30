// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112410
// Name:            ._ZNK2QT9QTreeView6headerEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112410 jmp     cs:_ZNK2QT9QTreeView6headerEv_ptr
//
// Resolved target: _ZNK2QT9QTreeView6headerEv
// Target address:  0x8D3D68
// GOT/IAT slot:    0x89FEA8
// Slot symbol:     _ZNK2QT9QTreeView6headerEv_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTreeView6headerEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTreeView6headerEv via GOT/IAT indirection
    return _ZNK2QT9QTreeView6headerEv(/* forwarded args */);
}

