// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115C60
// Name:            ._ZN2QT17QAbstractItemView13setAutoScrollEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115C60 jmp     cs:_ZN2QT17QAbstractItemView13setAutoScrollEb_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView13setAutoScrollEb
// Target address:  0x8D6180
// GOT/IAT slot:    0x8A1AD0
// Slot symbol:     _ZN2QT17QAbstractItemView13setAutoScrollEb_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView13setAutoScrollEb(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView13setAutoScrollEb via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView13setAutoScrollEb(/* forwarded args */);
}

