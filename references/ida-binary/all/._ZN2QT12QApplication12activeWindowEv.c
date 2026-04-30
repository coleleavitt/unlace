// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A470
// Name:            ._ZN2QT12QApplication12activeWindowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A470 jmp     cs:_ZN2QT12QApplication12activeWindowEv_ptr
//
// Resolved target: _ZN2QT12QApplication12activeWindowEv
// Target address:  0x8D8EE0
// GOT/IAT slot:    0x8A3ED8
// Slot symbol:     _ZN2QT12QApplication12activeWindowEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication12activeWindowEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication12activeWindowEv via GOT/IAT indirection
    return _ZN2QT12QApplication12activeWindowEv(/* forwarded args */);
}

