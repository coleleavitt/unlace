// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B280
// Name:            ._ZN2QT7QWidget5closeEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B280 jmp     cs:_ZN2QT7QWidget5closeEv_ptr
//
// Resolved target: _ZN2QT7QWidget5closeEv
// Target address:  0x8D97A0
// GOT/IAT slot:    0x8A45E0
// Slot symbol:     _ZN2QT7QWidget5closeEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget5closeEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget5closeEv via GOT/IAT indirection
    return _ZN2QT7QWidget5closeEv(/* forwarded args */);
}

