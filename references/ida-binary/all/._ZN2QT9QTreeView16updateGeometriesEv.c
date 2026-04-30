// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116BF0
// Name:            ._ZN2QT9QTreeView16updateGeometriesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116BF0 jmp     cs:_ZN2QT9QTreeView16updateGeometriesEv_ptr
//
// Resolved target: _ZN2QT9QTreeView16updateGeometriesEv
// Target address:  0x8D6B58
// GOT/IAT slot:    0x8A2298
// Slot symbol:     _ZN2QT9QTreeView16updateGeometriesEv_ptr
// Target type:     _QWORD(QT::QTreeView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QTreeView16updateGeometriesEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QTreeView16updateGeometriesEv via GOT/IAT indirection
    return _ZN2QT9QTreeView16updateGeometriesEv(/* forwarded args */);
}

