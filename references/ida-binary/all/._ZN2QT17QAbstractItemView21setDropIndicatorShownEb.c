// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117A80
// Name:            ._ZN2QT17QAbstractItemView21setDropIndicatorShownEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117A80 jmp     cs:_ZN2QT17QAbstractItemView21setDropIndicatorShownEb_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView21setDropIndicatorShownEb
// Target address:  0x8D7488
// GOT/IAT slot:    0x8A29E0
// Slot symbol:     _ZN2QT17QAbstractItemView21setDropIndicatorShownEb_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView21setDropIndicatorShownEb(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView21setDropIndicatorShownEb via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView21setDropIndicatorShownEb(/* forwarded args */);
}

