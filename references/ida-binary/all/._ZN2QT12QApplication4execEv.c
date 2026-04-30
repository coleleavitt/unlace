// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114E10
// Name:            ._ZN2QT12QApplication4execEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114E10 jmp     cs:_ZN2QT12QApplication4execEv_ptr
//
// Resolved target: _ZN2QT12QApplication4execEv
// Target address:  0x8D58A8
// GOT/IAT slot:    0x8A13A8
// Slot symbol:     _ZN2QT12QApplication4execEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication4execEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication4execEv via GOT/IAT indirection
    return _ZN2QT12QApplication4execEv(/* forwarded args */);
}

