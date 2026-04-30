// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114930
// Name:            ._ZN2QT19QStyleOptionToolBarC1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114930 jmp     cs:_ZN2QT19QStyleOptionToolBarC1Ev_ptr
//
// Resolved target: _ZN2QT19QStyleOptionToolBarC1Ev
// Target address:  0x8D5578
// GOT/IAT slot:    0x8A1138
// Slot symbol:     _ZN2QT19QStyleOptionToolBarC1Ev_ptr
// Target type:     _QWORD(QT::QStyleOptionToolBar *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT19QStyleOptionToolBarC1Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT19QStyleOptionToolBarC1Ev via GOT/IAT indirection
    return _ZN2QT19QStyleOptionToolBarC1Ev(/* forwarded args */);
}

