// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113B60
// Name:            ._ZN2QT13QStandardItemD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113B60 jmp     cs:_ZN2QT13QStandardItemD2Ev_ptr
//
// Resolved target: _ZN2QT13QStandardItemD2Ev
// Target address:  0x8D4C70
// GOT/IAT slot:    0x8A0A50
// Slot symbol:     _ZN2QT13QStandardItemD2Ev_ptr
// Target type:     void(QT::QStandardItem *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT13QStandardItemD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT13QStandardItemD2Ev via GOT/IAT indirection
    return _ZN2QT13QStandardItemD2Ev(/* forwarded args */);
}

