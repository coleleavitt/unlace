// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115500
// Name:            ._ZN2QT18QStandardItemModelD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115500 jmp     cs:_ZN2QT18QStandardItemModelD2Ev_ptr
//
// Resolved target: _ZN2QT18QStandardItemModelD2Ev
// Target address:  0x8D5CF8
// GOT/IAT slot:    0x8A1720
// Slot symbol:     _ZN2QT18QStandardItemModelD2Ev_ptr
// Target type:     void(QT::QStandardItemModel *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT18QStandardItemModelD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT18QStandardItemModelD2Ev via GOT/IAT indirection
    return _ZN2QT18QStandardItemModelD2Ev(/* forwarded args */);
}

