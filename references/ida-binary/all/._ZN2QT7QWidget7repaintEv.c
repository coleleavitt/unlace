// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160D0
// Name:            ._ZN2QT7QWidget7repaintEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160D0 jmp     cs:_ZN2QT7QWidget7repaintEv_ptr
//
// Resolved target: _ZN2QT7QWidget7repaintEv
// Target address:  0x8D6460
// GOT/IAT slot:    0x8A1D08
// Slot symbol:     _ZN2QT7QWidget7repaintEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget7repaintEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget7repaintEv via GOT/IAT indirection
    return _ZN2QT7QWidget7repaintEv(/* forwarded args */);
}

