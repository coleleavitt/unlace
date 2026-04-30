// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD50
// Name:            ._ZN2QT12QApplication16wheelScrollLinesEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD50 jmp     cs:_ZN2QT12QApplication16wheelScrollLinesEv_ptr
//
// Resolved target: _ZN2QT12QApplication16wheelScrollLinesEv
// Target address:  0x8D9E80
// GOT/IAT slot:    0x8A4B48
// Slot symbol:     _ZN2QT12QApplication16wheelScrollLinesEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication16wheelScrollLinesEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication16wheelScrollLinesEv via GOT/IAT indirection
    return _ZN2QT12QApplication16wheelScrollLinesEv(/* forwarded args */);
}

