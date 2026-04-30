// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116020
// Name:            ._ZN2QT21QSortFilterProxyModelC2EPNS_7QObjectE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116020 jmp     cs:_ZN2QT21QSortFilterProxyModelC2EPNS_7QObjectE_ptr
//
// Resolved target: _ZN2QT21QSortFilterProxyModelC2EPNS_7QObjectE
// Target address:  0x8D6400
// GOT/IAT slot:    0x8A1CB0
// Slot symbol:     _ZN2QT21QSortFilterProxyModelC2EPNS_7QObjectE_ptr
// Target type:     _QWORD(QT::QSortFilterProxyModel *__hidden this, QT::QObject *)
// ============================================================

/* see target sig */ ._ZN2QT21QSortFilterProxyModelC2EPNS_7QObjectE(/* see target signature */)
{
    // Tail-call to _ZN2QT21QSortFilterProxyModelC2EPNS_7QObjectE via GOT/IAT indirection
    return _ZN2QT21QSortFilterProxyModelC2EPNS_7QObjectE(/* forwarded args */);
}

