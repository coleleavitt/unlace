// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1153E0
// Name:            ._ZN2QT11QFontDialogD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1153E0 jmp     cs:_ZN2QT11QFontDialogD2Ev_ptr
//
// Resolved target: _ZN2QT11QFontDialogD2Ev
// Target address:  0x8D5C48
// GOT/IAT slot:    0x8A1690
// Slot symbol:     _ZN2QT11QFontDialogD2Ev_ptr
// Target type:     void(QT::QFontDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QFontDialogD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QFontDialogD2Ev via GOT/IAT indirection
    return _ZN2QT11QFontDialogD2Ev(/* forwarded args */);
}

