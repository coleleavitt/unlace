// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1162B0
// Name:            ._ZN2QT12QApplication4beepEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1162B0 jmp     cs:_ZN2QT12QApplication4beepEv_ptr
//
// Resolved target: _ZN2QT12QApplication4beepEv
// Target address:  0x8D6570
// GOT/IAT slot:    0x8A1DF8
// Slot symbol:     _ZN2QT12QApplication4beepEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication4beepEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication4beepEv via GOT/IAT indirection
    return _ZN2QT12QApplication4beepEv(/* forwarded args */);
}

