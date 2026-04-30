// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111190
// Name:            ._ZN2QT10QTableView16updateGeometriesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111190 jmp     cs:_ZN2QT10QTableView16updateGeometriesEv_ptr
//
// Resolved target: _ZN2QT10QTableView16updateGeometriesEv
// Target address:  0x8D3170
// GOT/IAT slot:    0x89F568
// Slot symbol:     _ZN2QT10QTableView16updateGeometriesEv_ptr
// Target type:     _QWORD(QT::QTableView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT10QTableView16updateGeometriesEv(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTableView16updateGeometriesEv via GOT/IAT indirection
    return _ZN2QT10QTableView16updateGeometriesEv(/* forwarded args */);
}

