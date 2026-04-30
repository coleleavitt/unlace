// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1115C0
// Name:            ._ZN2QT12QTableWidgetD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1115C0 jmp     cs:_ZN2QT12QTableWidgetD2Ev_ptr
//
// Resolved target: _ZN2QT12QTableWidgetD2Ev
// Target address:  0x8D3448
// GOT/IAT slot:    0x89F780
// Slot symbol:     _ZN2QT12QTableWidgetD2Ev_ptr
// Target type:     void(QT::QTableWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidgetD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidgetD2Ev via GOT/IAT indirection
    return _ZN2QT12QTableWidgetD2Ev(/* forwarded args */);
}

