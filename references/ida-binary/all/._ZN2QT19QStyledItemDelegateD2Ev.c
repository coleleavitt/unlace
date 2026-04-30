// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118B80
// Name:            ._ZN2QT19QStyledItemDelegateD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118B80 jmp     cs:_ZN2QT19QStyledItemDelegateD2Ev_ptr
//
// Resolved target: _ZN2QT19QStyledItemDelegateD2Ev
// Target address:  0x8D7F08
// GOT/IAT slot:    0x8A3260
// Slot symbol:     _ZN2QT19QStyledItemDelegateD2Ev_ptr
// Target type:     void(QT::QStyledItemDelegate *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT19QStyledItemDelegateD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT19QStyledItemDelegateD2Ev via GOT/IAT indirection
    return _ZN2QT19QStyledItemDelegateD2Ev(/* forwarded args */);
}

