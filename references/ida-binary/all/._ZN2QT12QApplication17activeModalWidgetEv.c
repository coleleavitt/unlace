// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1169D0
// Name:            ._ZN2QT12QApplication17activeModalWidgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1169D0 jmp     cs:_ZN2QT12QApplication17activeModalWidgetEv_ptr
//
// Resolved target: _ZN2QT12QApplication17activeModalWidgetEv
// Target address:  0x8D6A10
// GOT/IAT slot:    0x8A2188
// Slot symbol:     _ZN2QT12QApplication17activeModalWidgetEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication17activeModalWidgetEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication17activeModalWidgetEv via GOT/IAT indirection
    return _ZN2QT12QApplication17activeModalWidgetEv(/* forwarded args */);
}

