// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117440
// Name:            ._ZN2QT17QAbstractItemView14clearSelectionEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117440 jmp     cs:_ZN2QT17QAbstractItemView14clearSelectionEv_ptr
//
// Resolved target: _ZN2QT17QAbstractItemView14clearSelectionEv
// Target address:  0x8D70B0
// GOT/IAT slot:    0x8A26C0
// Slot symbol:     _ZN2QT17QAbstractItemView14clearSelectionEv_ptr
// Target type:     _QWORD(QT::QAbstractItemView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT17QAbstractItemView14clearSelectionEv(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAbstractItemView14clearSelectionEv via GOT/IAT indirection
    return _ZN2QT17QAbstractItemView14clearSelectionEv(/* forwarded args */);
}

