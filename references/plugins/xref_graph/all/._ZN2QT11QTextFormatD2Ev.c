// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17440
// Name:            ._ZN2QT11QTextFormatD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17440 jmp     cs:off_4FA08
//
// Resolved target: _ZN2QT11QTextFormatD2Ev
// Target address:  0x50FD8
// GOT/IAT slot:    0x4FA08
// Slot symbol:     off_4FA08
// Target type:     void(QT::QTextFormat *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QTextFormatD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextFormatD2Ev via GOT/IAT indirection
    return _ZN2QT11QTextFormatD2Ev(/* forwarded args */);
}

