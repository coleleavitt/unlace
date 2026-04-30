// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114EA0
// Name:            ._ZN2QT7QDialog4execEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114EA0 jmp     cs:_ZN2QT7QDialog4execEv_ptr
//
// Resolved target: _ZN2QT7QDialog4execEv
// Target address:  0x8D5900
// GOT/IAT slot:    0x8A13F0
// Slot symbol:     _ZN2QT7QDialog4execEv_ptr
// Target type:     _QWORD(QT::QDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QDialog4execEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialog4execEv via GOT/IAT indirection
    return _ZN2QT7QDialog4execEv(/* forwarded args */);
}

