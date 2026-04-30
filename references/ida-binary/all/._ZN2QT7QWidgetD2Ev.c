// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B820
// Name:            ._ZN2QT7QWidgetD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B820 jmp     cs:_ZN2QT7QWidgetD2Ev_ptr
//
// Resolved target: _ZN2QT7QWidgetD2Ev
// Target address:  0x8D9B58
// GOT/IAT slot:    0x8A48B0
// Slot symbol:     _ZN2QT7QWidgetD2Ev_ptr
// Target type:     void(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidgetD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidgetD2Ev via GOT/IAT indirection
    return _ZN2QT7QWidgetD2Ev(/* forwarded args */);
}

