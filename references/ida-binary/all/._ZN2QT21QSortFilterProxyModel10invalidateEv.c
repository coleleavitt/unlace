// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ADA0
// Name:            ._ZN2QT21QSortFilterProxyModel10invalidateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ADA0 jmp     cs:_ZN2QT21QSortFilterProxyModel10invalidateEv_ptr
//
// Resolved target: _ZN2QT21QSortFilterProxyModel10invalidateEv
// Target address:  0x8D94C0
// GOT/IAT slot:    0x8A4370
// Slot symbol:     _ZN2QT21QSortFilterProxyModel10invalidateEv_ptr
// Target type:     _QWORD(QT::QSortFilterProxyModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT21QSortFilterProxyModel10invalidateEv(/* see target signature */)
{
    // Tail-call to _ZN2QT21QSortFilterProxyModel10invalidateEv via GOT/IAT indirection
    return _ZN2QT21QSortFilterProxyModel10invalidateEv(/* forwarded args */);
}

