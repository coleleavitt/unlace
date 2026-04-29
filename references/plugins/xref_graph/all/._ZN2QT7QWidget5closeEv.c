// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x174C0
// Name:            ._ZN2QT7QWidget5closeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x174C0 jmp     cs:off_4FA48
//
// Resolved target: _ZN2QT7QWidget5closeEv
// Target address:  0x51040
// GOT/IAT slot:    0x4FA48
// Slot symbol:     off_4FA48
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget5closeEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget5closeEv via GOT/IAT indirection
    return _ZN2QT7QWidget5closeEv(/* forwarded args */);
}

