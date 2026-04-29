// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17520
// Name:            ._ZN2QT7QWidgetD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17520 jmp     cs:off_4FA78
//
// Resolved target: _ZN2QT7QWidgetD2Ev
// Target address:  0x510B8
// GOT/IAT slot:    0x4FA78
// Slot symbol:     off_4FA78
// Target type:     void(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidgetD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidgetD2Ev via GOT/IAT indirection
    return _ZN2QT7QWidgetD2Ev(/* forwarded args */);
}

