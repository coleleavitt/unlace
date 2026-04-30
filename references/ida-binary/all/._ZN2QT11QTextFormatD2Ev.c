// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AE00
// Name:            ._ZN2QT11QTextFormatD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AE00 jmp     cs:_ZN2QT11QTextFormatD2Ev_ptr
//
// Resolved target: _ZN2QT11QTextFormatD2Ev
// Target address:  0x8D94F8
// GOT/IAT slot:    0x8A43A0
// Slot symbol:     _ZN2QT11QTextFormatD2Ev_ptr
// Target type:     void(QT::QTextFormat *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextFormatD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextFormatD2Ev via GOT/IAT indirection
    return _ZN2QT11QTextFormatD2Ev(/* forwarded args */);
}

