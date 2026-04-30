// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1115A0
// Name:            ._ZN2QT17QAccessibleWidgetD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1115A0 jmp     cs:_ZN2QT17QAccessibleWidgetD2Ev_ptr
//
// Resolved target: _ZN2QT17QAccessibleWidgetD2Ev
// Target address:  0x8D3438
// GOT/IAT slot:    0x89F770
// Slot symbol:     _ZN2QT17QAccessibleWidgetD2Ev_ptr
// Target type:     void(QT::QAccessibleWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT17QAccessibleWidgetD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT17QAccessibleWidgetD2Ev via GOT/IAT indirection
    return _ZN2QT17QAccessibleWidgetD2Ev(/* forwarded args */);
}

