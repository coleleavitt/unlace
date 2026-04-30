// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118470
// Name:            ._ZN2QT17QAbstractItemView14setDragEnabledEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118470 jmp     cs:_ZN2QT17QAbstractItemView14setDragEnabledEb_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView14setDragEnabledEb
// Target address:  0x8D7AB8
// GOT/IAT slot:    0x8A2ED8
// Slot symbol:     _ZN2QT17QAbstractItemView14setDragEnabledEb_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView14setDragEnabledEb(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView14setDragEnabledEb via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView14setDragEnabledEb(/* forwarded args */);
}

