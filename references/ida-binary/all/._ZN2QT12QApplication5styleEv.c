// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1158A0
// Name:            ._ZN2QT12QApplication5styleEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1158A0 jmp     cs:_ZN2QT12QApplication5styleEv_ptr
//
// Resolved target: _ZN2QT12QApplication5styleEv
// Target address:  0x8D5F20
// GOT/IAT slot:    0x8A18F0
// Slot symbol:     _ZN2QT12QApplication5styleEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication5styleEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication5styleEv via GOT/IAT indirection
    return _ZN2QT12QApplication5styleEv(/* forwarded args */);
}

