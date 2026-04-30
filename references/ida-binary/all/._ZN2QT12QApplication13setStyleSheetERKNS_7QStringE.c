// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AF70
// Name:            ._ZN2QT12QApplication13setStyleSheetERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AF70 jmp     cs:_ZN2QT12QApplication13setStyleSheetERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT12QApplication13setStyleSheetERKNS_7QStringE
// Target address:  0x8D95E0
// GOT/IAT slot:    0x8A4458
// Slot symbol:     _ZN2QT12QApplication13setStyleSheetERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication13setStyleSheetERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication13setStyleSheetERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT12QApplication13setStyleSheetERKNS_7QStringE(/* forwarded args */);
}

