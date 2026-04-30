// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116060
// Name:            ._ZN2QT12QApplication17activePopupWidgetEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116060 jmp     cs:_ZN2QT12QApplication17activePopupWidgetEv_ptr
//
// Resolved target: _ZN2QT12QApplication17activePopupWidgetEv
// Target address:  0x8D6420
// GOT/IAT slot:    0x8A1CD0
// Slot symbol:     _ZN2QT12QApplication17activePopupWidgetEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication17activePopupWidgetEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication17activePopupWidgetEv via GOT/IAT indirection
    return _ZN2QT12QApplication17activePopupWidgetEv(/* forwarded args */);
}

