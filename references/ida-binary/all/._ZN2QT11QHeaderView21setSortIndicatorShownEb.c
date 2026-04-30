// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BA80
// Name:            ._ZN2QT11QHeaderView21setSortIndicatorShownEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BA80 jmp     cs:_ZN2QT11QHeaderView21setSortIndicatorShownEb_ptr
//
// Resolved target: _ZN2QT11QHeaderView21setSortIndicatorShownEb
// Target address:  0x8D9CC8
// GOT/IAT slot:    0x8A49E0
// Slot symbol:     _ZN2QT11QHeaderView21setSortIndicatorShownEb_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView21setSortIndicatorShownEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView21setSortIndicatorShownEb via GOT/IAT indirection
    return _ZN2QT11QHeaderView21setSortIndicatorShownEb(/* forwarded args */);
}

