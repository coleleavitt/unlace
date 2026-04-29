// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16AE0
// Name:            ._ZN2QT7QWidget21setAutoFillBackgroundEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16AE0 jmp     cs:off_4F558
//
// Resolved target: _ZN2QT7QWidget21setAutoFillBackgroundEb
// Target address:  0x50790
// GOT/IAT slot:    0x4F558
// Slot symbol:     off_4F558
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget21setAutoFillBackgroundEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget21setAutoFillBackgroundEb via GOT/IAT indirection
    return _ZN2QT7QWidget21setAutoFillBackgroundEb(/* forwarded args */);
}

