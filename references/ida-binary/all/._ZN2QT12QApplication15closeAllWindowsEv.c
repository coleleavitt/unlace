// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B1E0
// Name:            ._ZN2QT12QApplication15closeAllWindowsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B1E0 jmp     cs:_ZN2QT12QApplication15closeAllWindowsEv_ptr
//
// Resolved target: _ZN2QT12QApplication15closeAllWindowsEv
// Target address:  0x8D9738
// GOT/IAT slot:    0x8A4590
// Slot symbol:     _ZN2QT12QApplication15closeAllWindowsEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication15closeAllWindowsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication15closeAllWindowsEv via GOT/IAT indirection
    return _ZN2QT12QApplication15closeAllWindowsEv(/* forwarded args */);
}

