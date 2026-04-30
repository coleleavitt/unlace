// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1145B0
// Name:            ._ZN2QT21QSortFilterProxyModel16invalidateFilterEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1145B0 jmp     cs:_ZN2QT21QSortFilterProxyModel16invalidateFilterEv_ptr
//
// Resolved target: _ZN2QT21QSortFilterProxyModel16invalidateFilterEv
// Target address:  0x8D5318
// GOT/IAT slot:    0x8A0F78
// Slot symbol:     _ZN2QT21QSortFilterProxyModel16invalidateFilterEv_ptr
// Target type:     _QWORD(QT::QSortFilterProxyModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT21QSortFilterProxyModel16invalidateFilterEv(/* see target signature */)
{
    // Tail-call to _ZN2QT21QSortFilterProxyModel16invalidateFilterEv via GOT/IAT indirection
    return _ZN2QT21QSortFilterProxyModel16invalidateFilterEv(/* forwarded args */);
}

