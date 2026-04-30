// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117980
// Name:            ._ZNK2QT11QHeaderView20isSortIndicatorShownEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117980 jmp     cs:_ZNK2QT11QHeaderView20isSortIndicatorShownEv_ptr
//
// Resolved target: _ZNK2QT11QHeaderView20isSortIndicatorShownEv
// Target address:  0x8D73E8
// GOT/IAT slot:    0x8A2960
// Slot symbol:     _ZNK2QT11QHeaderView20isSortIndicatorShownEv_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QHeaderView20isSortIndicatorShownEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QHeaderView20isSortIndicatorShownEv via GOT/IAT indirection
    return _ZNK2QT11QHeaderView20isSortIndicatorShownEv(/* forwarded args */);
}

