// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118FF0
// Name:            ._ZN2QT12QApplication4fontEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118FF0 jmp     cs:_ZN2QT12QApplication4fontEv_ptr
//
// Resolved target: _ZN2QT12QApplication4fontEv
// Target address:  0x8D81C0
// GOT/IAT slot:    0x8A3498
// Slot symbol:     _ZN2QT12QApplication4fontEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication4fontEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication4fontEv via GOT/IAT indirection
    return _ZN2QT12QApplication4fontEv(/* forwarded args */);
}

