// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113220
// Name:            ._ZN2QT12QApplication11focusWidgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113220 jmp     cs:_ZN2QT12QApplication11focusWidgetEv_ptr
//
// Resolved target: _ZN2QT12QApplication11focusWidgetEv
// Target address:  0x8D4688
// GOT/IAT slot:    0x8A05B0
// Slot symbol:     _ZN2QT12QApplication11focusWidgetEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication11focusWidgetEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication11focusWidgetEv via GOT/IAT indirection
    return _ZN2QT12QApplication11focusWidgetEv(/* forwarded args */);
}

