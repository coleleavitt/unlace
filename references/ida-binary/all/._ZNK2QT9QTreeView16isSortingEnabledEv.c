// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114110
// Name:            ._ZNK2QT9QTreeView16isSortingEnabledEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114110 jmp     cs:_ZNK2QT9QTreeView16isSortingEnabledEv_ptr
//
// Resolved target: _ZNK2QT9QTreeView16isSortingEnabledEv
// Target address:  0x8D5008
// GOT/IAT slot:    0x8A0D28
// Slot symbol:     _ZNK2QT9QTreeView16isSortingEnabledEv_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT9QTreeView16isSortingEnabledEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QTreeView16isSortingEnabledEv via GOT/IAT indirection
    return _ZNK2QT9QTreeView16isSortingEnabledEv(/* forwarded args */);
}

