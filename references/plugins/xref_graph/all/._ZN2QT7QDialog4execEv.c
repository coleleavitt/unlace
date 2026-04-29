// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x168B0
// Name:            ._ZN2QT7QDialog4execEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x168B0 jmp     cs:off_4F440
//
// Resolved target: _ZN2QT7QDialog4execEv
// Target address:  0x50578
// GOT/IAT slot:    0x4F440
// Slot symbol:     off_4F440
// Target type:     _QWORD(QT::QDialog *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QDialog4execEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QDialog4execEv via GOT/IAT indirection
    return _ZN2QT7QDialog4execEv(/* forwarded args */);
}

