// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115FA0
// Name:            ._ZN2QT7QWidget21setAutoFillBackgroundEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115FA0 jmp     cs:_ZN2QT7QWidget21setAutoFillBackgroundEb_ptr
//
// Resolved target: _ZN2QT7QWidget21setAutoFillBackgroundEb
// Target address:  0x8D63A0
// GOT/IAT slot:    0x8A1C70
// Slot symbol:     _ZN2QT7QWidget21setAutoFillBackgroundEb_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget21setAutoFillBackgroundEb(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget21setAutoFillBackgroundEb via GOT/IAT indirection
    return _ZN2QT7QWidget21setAutoFillBackgroundEb(/* forwarded args */);
}

