// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1179D0
// Name:            ._ZN2QT9QTreeView17setSortingEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1179D0 jmp     cs:_ZN2QT9QTreeView17setSortingEnabledEb_ptr
//
// Resolved target: _ZN2QT9QTreeView17setSortingEnabledEb
// Target address:  0x8D7418
// GOT/IAT slot:    0x8A2988
// Slot symbol:     _ZN2QT9QTreeView17setSortingEnabledEb_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView17setSortingEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView17setSortingEnabledEb via GOT/IAT indirection
    return _ZN2QT9QTreeView17setSortingEnabledEb(/* forwarded args */);
}

