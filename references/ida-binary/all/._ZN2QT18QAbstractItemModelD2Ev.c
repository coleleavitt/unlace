// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1125B0
// Name:            ._ZN2QT18QAbstractItemModelD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1125B0 jmp     cs:_ZN2QT18QAbstractItemModelD2Ev_ptr
//
// Resolved target: _ZN2QT18QAbstractItemModelD2Ev
// Target address:  0x8D3E80
// GOT/IAT slot:    0x89FF78
// Slot symbol:     _ZN2QT18QAbstractItemModelD2Ev_ptr
// Target type:     void(QT::QAbstractItemModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QAbstractItemModelD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT18QAbstractItemModelD2Ev via GOT/IAT indirection
    return _ZN2QT18QAbstractItemModelD2Ev(/* forwarded args */);
}

