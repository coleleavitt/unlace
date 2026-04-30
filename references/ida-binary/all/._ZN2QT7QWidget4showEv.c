// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD50
// Name:            ._ZN2QT7QWidget4showEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD50 jmp     cs:_ZN2QT7QWidget4showEv_ptr
//
// Resolved target: _ZN2QT7QWidget4showEv
// Target address:  0x8D9498
// GOT/IAT slot:    0x8A4348
// Slot symbol:     _ZN2QT7QWidget4showEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget4showEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget4showEv via GOT/IAT indirection
    return _ZN2QT7QWidget4showEv(/* forwarded args */);
}

