// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119320
// Name:            ._ZN2QT9QTreeView20setUniformRowHeightsEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119320 jmp     cs:_ZN2QT9QTreeView20setUniformRowHeightsEb_ptr
//
// Resolved target: _ZN2QT9QTreeView20setUniformRowHeightsEb
// Target address:  0x8D83D8
// GOT/IAT slot:    0x8A3630
// Slot symbol:     _ZN2QT9QTreeView20setUniformRowHeightsEb_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView20setUniformRowHeightsEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView20setUniformRowHeightsEb via GOT/IAT indirection
    return _ZN2QT9QTreeView20setUniformRowHeightsEb(/* forwarded args */);
}

