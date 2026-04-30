// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111920
// Name:            ._ZN2QT12QApplication10allWidgetsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111920 jmp     cs:_ZN2QT12QApplication10allWidgetsEv_ptr
//
// Resolved target: _ZN2QT12QApplication10allWidgetsEv
// Target address:  0x8D3678
// GOT/IAT slot:    0x89F930
// Slot symbol:     _ZN2QT12QApplication10allWidgetsEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication10allWidgetsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication10allWidgetsEv via GOT/IAT indirection
    return _ZN2QT12QApplication10allWidgetsEv(/* forwarded args */);
}

